//*CMZ :  2.21/07 08/03/99  12.34.14  by  Fons Rademakers
//*-- Author :    Fons Rademakers   08/03/99
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
extern void G__cpp_setup_tagtableG__Graf1();
extern void G__cpp_setup_inheritanceG__Graf1();
extern void G__cpp_setup_typetableG__Graf1();
extern void G__cpp_setup_memvarG__Graf1();
extern void G__cpp_setup_globalG__Graf1();
extern void G__cpp_setup_memfuncG__Graf1();
extern void G__cpp_setup_funcG__Graf1();
extern void G__set_cpp_environmentG__Graf1();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TAttPad.h"
#include "TAttCanvas.h"
#include "TArc.h"
#include "TArrow.h"
#include "TBox.h"
#include "TColor.h"
#include "TDiamond.h"
#include "TEllipse.h"
#include "TFrame.h"
#include "TGaxis.h"
#include "TGraph.h"
#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"
#include "TLatex.h"
#include "TLine.h"
#include "TMarker.h"
#include "TPolyLine.h"
#include "TPolyMarker.h"
#include "TText.h"
#include "TPave.h"
#include "TPaveLabel.h"
#include "TPaveText.h"
#include "TPavesText.h"
#include "TF1.h"
#include "TF2.h"
#include "TF3.h"
#include "TWbox.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__Graf1LN_TClass;
extern G__linked_taginfo G__G__Graf1LN_TList;
extern G__linked_taginfo G__G__Graf1LN_TObject;
extern G__linked_taginfo G__G__Graf1LN_TString;
extern G__linked_taginfo G__G__Graf1LN_TNamed;
extern G__linked_taginfo G__G__Graf1LN_TColor;
extern G__linked_taginfo G__G__Graf1LN_TF1;
extern G__linked_taginfo G__G__Graf1LN_TAttPad;
extern G__linked_taginfo G__G__Graf1LN_TAttCanvas;
extern G__linked_taginfo G__G__Graf1LN_TAttLine;
extern G__linked_taginfo G__G__Graf1LN_TAttFill;
extern G__linked_taginfo G__G__Graf1LN_TEllipse;
extern G__linked_taginfo G__G__Graf1LN_TArc;
extern G__linked_taginfo G__G__Graf1LN_TLine;
extern G__linked_taginfo G__G__Graf1LN_TArrow;
extern G__linked_taginfo G__G__Graf1LN_TGToolTip;
extern G__linked_taginfo G__G__Graf1LN_TBox;
extern G__linked_taginfo G__G__Graf1LN_TPave;
extern G__linked_taginfo G__G__Graf1LN_TAttText;
extern G__linked_taginfo G__G__Graf1LN_TText;
extern G__linked_taginfo G__G__Graf1LN_TPaveText;
extern G__linked_taginfo G__G__Graf1LN_TDiamond;
extern G__linked_taginfo G__G__Graf1LN_TWbox;
extern G__linked_taginfo G__G__Graf1LN_TFrame;
extern G__linked_taginfo G__G__Graf1LN_TGaxis;
extern G__linked_taginfo G__G__Graf1LN_TAttMarker;
extern G__linked_taginfo G__G__Graf1LN_TH1F;
extern G__linked_taginfo G__G__Graf1LN_TAxis;
extern G__linked_taginfo G__G__Graf1LN_TGraph;
extern G__linked_taginfo G__G__Graf1LN_TGraphErrors;
extern G__linked_taginfo G__G__Graf1LN_TGraphAsymmErrors;
extern G__linked_taginfo G__G__Graf1LN_s_FormSize;
extern G__linked_taginfo G__G__Graf1LN_FormSize;
extern G__linked_taginfo G__G__Graf1LN_TLatex;
extern G__linked_taginfo G__G__Graf1LN_TMarker;
extern G__linked_taginfo G__G__Graf1LN_TPolyLine;
extern G__linked_taginfo G__G__Graf1LN_TPolyMarker;
extern G__linked_taginfo G__G__Graf1LN_TPaveLabel;
extern G__linked_taginfo G__G__Graf1LN_TPavesText;
extern G__linked_taginfo G__G__Graf1LN_TFormula;
extern G__linked_taginfo G__G__Graf1LN_TMethodCall;
extern G__linked_taginfo G__G__Graf1LN_TArrayF;
extern G__linked_taginfo G__G__Graf1LN_TF2;
extern G__linked_taginfo G__G__Graf1LN_TF3;
/********************************************************
* G__Graf1.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif

extern "C" void G__cpp_reset_tagtableG__Graf1();

extern "C" void G__set_cpp_environmentG__Graf1() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TAttPad.h");
  G__add_compiledheader("TAttCanvas.h");
  G__add_compiledheader("TArc.h");
  G__add_compiledheader("TArrow.h");
  G__add_compiledheader("TBox.h");
  G__add_compiledheader("TColor.h");
  G__add_compiledheader("TDiamond.h");
  G__add_compiledheader("TEllipse.h");
  G__add_compiledheader("TFrame.h");
  G__add_compiledheader("TGaxis.h");
  G__add_compiledheader("TGraph.h");
  G__add_compiledheader("TGraphErrors.h");
  G__add_compiledheader("TGraphAsymmErrors.h");
  G__add_compiledheader("TLatex.h");
  G__add_compiledheader("TLine.h");
  G__add_compiledheader("TMarker.h");
  G__add_compiledheader("TPolyLine.h");
  G__add_compiledheader("TPolyMarker.h");
  G__add_compiledheader("TText.h");
  G__add_compiledheader("TPave.h");
  G__add_compiledheader("TPaveLabel.h");
  G__add_compiledheader("TPaveText.h");
  G__add_compiledheader("TPavesText.h");
  G__add_compiledheader("TF1.h");
  G__add_compiledheader("TF2.h");
  G__add_compiledheader("TF3.h");
  G__add_compiledheader("TWbox.h");
  G__cpp_reset_tagtableG__Graf1();
}
extern "C" int G__cpp_dllrevG__Graf1() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TColor */
static int G__TColor_TColor_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TColor *p=NULL;
   if(G__getaryconstruct()) p=new TColor[G__getaryconstruct()];
   else                    p=new TColor;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TColor);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_TColor_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TColor *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TColor(
(Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Text_t*)G__int(libp->para[4]));
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
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TColor);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_TColor_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TColor *p=NULL;
      p = new TColor(*(TColor*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TColor);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetRGB_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->GetRGB(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetHLS_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->GetHLS(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetNumber_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TColor*)(G__getstructoffset()))->GetNumber());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetRed_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetRed());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetGreen_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetGreen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetBlue_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetBlue());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetHue_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetHue());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetLight_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetLight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetSaturation_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetSaturation());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_HLStoRGB_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->HLStoRGB((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_HLStoRGB1_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->HLStoRGB1((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_ls_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TColor_Print_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TColor_RGBtoHLS_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->RGBtoHLS((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_SetNumber_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->SetNumber((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_SetRGB_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->SetRGB((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_DisplayColorTable_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->DisplayColorTable();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_DeclFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TColor*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_DeclFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TColor*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_ImplFileName_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TColor*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_ImplFileLine_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TColor*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Class_Version_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TColor*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Class_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TColor*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Dictionary_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_IsA_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TColor*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_ShowMembers_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Streamer_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TColor_wATColor_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TF1 */
static int G__TF1_TF1_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF1 *p=NULL;
   if(G__getaryconstruct()) p=new TF1[G__getaryconstruct()];
   else                    p=new TF1;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF1);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_TF1_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF1 *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TF1(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF1(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF1((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF1);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_TF1_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF1 *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TF1(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TF1(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF1(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF1((const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF1);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_TF1_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF1 *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TF1(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TF1(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF1(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF1((const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF1);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_TF1_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF1 *p=NULL;
      p = new TF1(*(TF1*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF1);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Browse_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Copy_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Derivative_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Derivative((Double_t)G__double(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Derivative((Double_t)G__double(libp->para[0]),(Double_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Derivative((Double_t)G__double(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_DistancetoPrimitive_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF1*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Draw_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_DrawCopy_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->DrawCopy((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->DrawCopy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_DrawF1_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->DrawF1((const char*)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->DrawF1((const char*)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_DrawPanel_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->DrawPanel();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Eval_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Eval((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Eval((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Eval((Double_t)G__double(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_EvalPar_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->EvalPar((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->EvalPar((Double_t*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_ExecuteEvent_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetChisquare_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->GetChisquare());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetHistogram_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF1*)(G__getstructoffset()))->GetHistogram());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetNDF_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF1*)(G__getstructoffset()))->GetNDF());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetNpx_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF1*)(G__getstructoffset()))->GetNpx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetMethodCall_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF1*)(G__getstructoffset()))->GetMethodCall());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetNumberFitPoints_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF1*)(G__getstructoffset()))->GetNumberFitPoints());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetParent_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF1*)(G__getstructoffset()))->GetParent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetParError_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->GetParError((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetParLimits_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->GetParLimits((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Double_t*)libp->para[1].ref:G__Mdouble(libp->para[1])
,libp->para[2].ref?*(Double_t*)libp->para[2].ref:G__Mdouble(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetProb_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->GetProb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetRandom_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->GetRandom());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetRange_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetRange_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetRange_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetSave_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->GetSave((Double_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetXmin_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TF1*)(G__getstructoffset()))->GetXmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_GetXmax_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TF1*)(G__getstructoffset()))->GetXmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_InitArgs_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->InitArgs((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Integral_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Double_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])));
      break;
   case 3:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Double_t*)G__int(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Integral_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4])));
      break;
   case 4:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Integral_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Integral(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6])));
      break;
   case 6:
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_IntegralMultiple_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TF1*)(G__getstructoffset()))->IntegralMultiple((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Paint_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Print_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Save_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Save((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SavePrimitive_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetChisquare_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetChisquare((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetMaximum_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetMaximum((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetMaximum();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetMinimum_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetMinimum((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetMinimum();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetNumberFitPoints_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetNumberFitPoints((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetNpx_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetNpx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetNpx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetParError_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetParError((Int_t)G__int(libp->para[0]),(Double_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetParLimits_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetParLimits((Int_t)G__int(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetParent_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetParent((TObject*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetParent();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetRange_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetRange_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_SetRange_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Update_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Update();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_DeclFileName_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TF1*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_DeclFileLine_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF1*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_ImplFileName_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TF1*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_ImplFileLine_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF1*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Class_Version_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TF1*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Class_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF1*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Dictionary_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_IsA_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF1*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_ShowMembers_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF1_Streamer_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF1*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TF1_wATF1_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TF1 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TF1 *)((G__getstructoffset())+sizeof(TF1)*i);
   else  delete (TF1 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttPad */
static int G__TAttPad_TAttPad_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttPad *p=NULL;
   if(G__getaryconstruct()) p=new TAttPad[G__getaryconstruct()];
   else                    p=new TAttPad;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TAttPad);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Copy_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Copy(*(TAttPad*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetBottomMargin_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetBottomMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetLeftMargin_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetLeftMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetRightMargin_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetRightMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetTopMargin_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetTopMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetAfile_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetAfile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetXfile_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetXfile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetYfile_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetYfile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetAstat_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetAstat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetXstat_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetXstat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetYstat_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetYstat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameFillColor_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameLineColor_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameFillStyle_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameLineStyle_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameLineWidth_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameBorderSize_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameBorderMode_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttPad*)(G__getstructoffset()))->GetFrameBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Print_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttPad_Reset_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetBottomMargin_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetBottomMargin((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetLeftMargin_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetLeftMargin((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetRightMargin_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetRightMargin((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetTopMargin_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetTopMargin((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetAfile_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetAfile((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetXfile_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetXfile((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetYfile_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetYfile((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetAstat_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetAstat((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetXstat_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetXstat((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetYstat_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetYstat((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetFrameFillColor_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttPad_SetFrameLineColor_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttPad_SetFrameFillStyle_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttPad_SetFrameLineStyle_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttPad_SetFrameLineWidth_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttPad_SetFrameBorderSize_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttPad_SetFrameBorderMode_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttPad_DeclFileName_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttPad*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_DeclFileLine_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttPad*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_ImplFileName_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttPad*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_ImplFileLine_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttPad*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Class_Version_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Class_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttPad*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Dictionary_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_IsA_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttPad*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_ShowMembers_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Streamer_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttPad_TAttPad_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttPad *p;
   if(1!=libp->paran) ;
   p=new TAttPad(*(TAttPad*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TAttPad);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttPad_wATAttPad_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TAttCanvas */
static int G__TAttCanvas_TAttCanvas_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttCanvas *p=NULL;
   if(G__getaryconstruct()) p=new TAttCanvas[G__getaryconstruct()];
   else                    p=new TAttCanvas;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TAttCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_Copy_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->Copy(*(TAttCanvas*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_GetAdate_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttCanvas*)(G__getstructoffset()))->GetAdate());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_GetTitleFromTop_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttCanvas*)(G__getstructoffset()))->GetTitleFromTop());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_GetXBetween_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttCanvas*)(G__getstructoffset()))->GetXBetween());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_GetXdate_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttCanvas*)(G__getstructoffset()))->GetXdate());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_GetYBetween_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttCanvas*)(G__getstructoffset()))->GetYBetween());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_GetYdate_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttCanvas*)(G__getstructoffset()))->GetYdate());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_Print_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_Reset_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_SetAdate_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->SetAdate((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_SetTitleFromTop_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->SetTitleFromTop((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_SetXBetween_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->SetXBetween((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_SetXdate_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->SetXdate((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_SetYBetween_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->SetYBetween((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_SetYdate_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->SetYdate((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_DeclFileName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttCanvas*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_DeclFileLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttCanvas*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_ImplFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttCanvas*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_ImplFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttCanvas*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_Class_Version_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttCanvas*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_Class_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttCanvas*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_Dictionary_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_IsA_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttCanvas*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_ShowMembers_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttCanvas_Streamer_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttCanvas*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttCanvas_TAttCanvas_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttCanvas *p;
   if(1!=libp->paran) ;
   p=new TAttCanvas(*(TAttCanvas*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TAttCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttCanvas_wATAttCanvas_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttCanvas *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttCanvas *)((G__getstructoffset())+sizeof(TAttCanvas)*i);
   else  delete (TAttCanvas *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TEllipse */
static int G__TEllipse_TEllipse_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TEllipse *p=NULL;
   if(G__getaryconstruct()) p=new TEllipse[G__getaryconstruct()];
   else                    p=new TEllipse;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TEllipse);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_TEllipse_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TEllipse *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TEllipse(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      break;
   case 6:
      p = new TEllipse(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TEllipse(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TEllipse(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TEllipse(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TEllipse);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_TEllipse_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TEllipse *p=NULL;
      p = new TEllipse(*(TEllipse*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TEllipse);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_DistancetoPrimitive_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEllipse*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_Draw_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_DrawEllipse_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->DrawEllipse(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_ExecuteEvent_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_GetX1_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TEllipse*)(G__getstructoffset()))->GetX1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_GetY1_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TEllipse*)(G__getstructoffset()))->GetY1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_GetR1_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TEllipse*)(G__getstructoffset()))->GetR1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_GetR2_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TEllipse*)(G__getstructoffset()))->GetR2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_GetPhimin_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TEllipse*)(G__getstructoffset()))->GetPhimin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_GetPhimax_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TEllipse*)(G__getstructoffset()))->GetPhimax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_GetTheta_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TEllipse*)(G__getstructoffset()))->GetTheta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_ls_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_Paint_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_PaintEllipse_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->PaintEllipse(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_Print_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_SavePrimitive_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_SetPhimin_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetPhimin((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetPhimin();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_SetPhimax_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetPhimax((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetPhimax();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_SetR1_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetR1((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_SetR2_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetR2((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_SetTheta_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetTheta((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetTheta();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_SetX1_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetX1((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_SetY1_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->SetY1((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_DeclFileName_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TEllipse*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_DeclFileLine_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEllipse*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_ImplFileName_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TEllipse*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_ImplFileLine_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEllipse*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_Class_Version_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TEllipse*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_Class_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEllipse*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_Dictionary_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_IsA_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEllipse*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_ShowMembers_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEllipse_Streamer_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEllipse*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TEllipse_wATEllipse_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TEllipse *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TEllipse *)((G__getstructoffset())+sizeof(TEllipse)*i);
   else  delete (TEllipse *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TArc */
static int G__TArc_TArc_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TArc *p=NULL;
   if(G__getaryconstruct()) p=new TArc[G__getaryconstruct()];
   else                    p=new TArc;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TArc);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_TArc_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TArc *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TArc(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TArc(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TArc(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TArc);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_TArc_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TArc *p=NULL;
      p = new TArc(*(TArc*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TArc);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArc*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_DrawArc_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TArc*)(G__getstructoffset()))->DrawArc((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TArc*)(G__getstructoffset()))->DrawArc((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TArc*)(G__getstructoffset()))->DrawArc((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_SavePrimitive_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArc*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TArc*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TArc*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TArc*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TArc*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TArc*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TArc*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArc*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TArc*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArc*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArc_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArc*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TArc_wATArc_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TArc *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TArc *)((G__getstructoffset())+sizeof(TArc)*i);
   else  delete (TArc *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TLine */
static int G__TLine_TLine_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLine *p=NULL;
   if(G__getaryconstruct()) p=new TLine[G__getaryconstruct()];
   else                    p=new TLine;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_TLine_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLine *p=NULL;
      p = new TLine(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_TLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLine *p=NULL;
      p = new TLine(*(TLine*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_Copy_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_Draw_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_DrawLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->DrawLine((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_GetX1_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TLine*)(G__getstructoffset()))->GetX1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_GetX2_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TLine*)(G__getstructoffset()))->GetX2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_GetY1_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TLine*)(G__getstructoffset()))->GetY1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_GetY2_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TLine*)(G__getstructoffset()))->GetY2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_ls_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_Paint_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_PaintLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->PaintLine((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_PaintLineNDC_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->PaintLineNDC((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_Print_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_SavePrimitive_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_SetX1_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->SetX1((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_SetX2_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->SetX2((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_SetY1_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->SetY1((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_SetY2_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->SetY2((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_DeclFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLine*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_DeclFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLine*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_ImplFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLine*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_ImplFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLine*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_Class_Version_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TLine*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_Class_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLine*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_Dictionary_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_IsA_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLine*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_ShowMembers_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLine_Streamer_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLine*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TLine_wATLine_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TLine *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TLine *)((G__getstructoffset())+sizeof(TLine)*i);
   else  delete (TLine *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TArrow */
static int G__TArrow_TArrow_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TArrow *p=NULL;
   if(G__getaryconstruct()) p=new TArrow[G__getaryconstruct()];
   else                    p=new TArrow;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TArrow);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_TArrow_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TArrow *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TArrow(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      p = new TArrow(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TArrow(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TArrow);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_TArrow_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TArrow *p=NULL;
      p = new TArrow(*(TArrow*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TArrow);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_Draw_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_DrawArrow_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->DrawArrow((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->DrawArrow((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->DrawArrow((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_GetAngle_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TArrow*)(G__getstructoffset()))->GetAngle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_GetArrowSize_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TArrow*)(G__getstructoffset()))->GetArrowSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_GetOption_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TArrow*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_Paint_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_PaintArrow_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->PaintArrow((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->PaintArrow((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->PaintArrow((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_SavePrimitive_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_SetAngle_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->SetAngle((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->SetAngle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_SetArrowSize_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->SetArrowSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->SetArrowSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_SetOption_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->SetOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->SetOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_DeclFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TArrow*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_DeclFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TArrow*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_ImplFileName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TArrow*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_ImplFileLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TArrow*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_Class_Version_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TArrow*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_Class_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TArrow*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_Dictionary_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_IsA_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TArrow*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_ShowMembers_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TArrow_Streamer_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TArrow*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TArrow_wATArrow_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TArrow *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TArrow *)((G__getstructoffset())+sizeof(TArrow)*i);
   else  delete (TArrow *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TBox */
static int G__TBox_TBox_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBox *p=NULL;
   if(G__getaryconstruct()) p=new TBox[G__getaryconstruct()];
   else                    p=new TBox;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_TBox_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBox *p=NULL;
      p = new TBox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_TBox_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBox *p=NULL;
      p = new TBox(*(TBox*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_Copy_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_Draw_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_DrawBox_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->DrawBox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_IsBeingResized_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TBox*)(G__getstructoffset()))->IsBeingResized());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_GetX1_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBox*)(G__getstructoffset()))->GetX1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_GetX2_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBox*)(G__getstructoffset()))->GetX2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_GetY1_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBox*)(G__getstructoffset()))->GetY1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_GetY2_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBox*)(G__getstructoffset()))->GetY2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_HideToolTip_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->HideToolTip((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_ls_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_Paint_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_PaintBox_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->PaintBox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Option_t*)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->PaintBox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_Print_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_SavePrimitive_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_SetX1_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->SetX1((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_SetX2_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->SetX2((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_SetY1_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->SetY1((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_SetY2_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->SetY2((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_SetToolTipText_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->SetToolTipText((const char*)G__int(libp->para[0]),(Long_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->SetToolTipText((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_DeclFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBox*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_DeclFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBox*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_ImplFileName_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBox*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_ImplFileLine_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBox*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_Class_Version_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBox*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_Class_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBox*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_Dictionary_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_IsA_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBox*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_ShowMembers_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBox_Streamer_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBox*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBox_wATBox_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TBox *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TBox *)((G__getstructoffset())+sizeof(TBox)*i);
   else  delete (TBox *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPave */
static int G__TPave_TPave_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPave *p=NULL;
   if(G__getaryconstruct()) p=new TPave[G__getaryconstruct()];
   else                    p=new TPave;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPave);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_TPave_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPave *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TPave(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      p = new TPave(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TPave(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPave);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_TPave_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPave *p=NULL;
      p = new TPave(*(TPave*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPave);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_ConvertNDCtoPad_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->ConvertNDCtoPad();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_Draw_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_DrawPave_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->DrawPave((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->DrawPave((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->DrawPave((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_ExecuteEvent_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_GetBorderSize_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPave*)(G__getstructoffset()))->GetBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_GetCornerRadius_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPave*)(G__getstructoffset()))->GetCornerRadius());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_GetName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPave*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_GetOption_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPave*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_GetX1NDC_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPave*)(G__getstructoffset()))->GetX1NDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_GetX2NDC_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPave*)(G__getstructoffset()))->GetX2NDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_GetY1NDC_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPave*)(G__getstructoffset()))->GetY1NDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_GetY2NDC_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPave*)(G__getstructoffset()))->GetY2NDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_ls_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_Paint_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_PaintPave_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->PaintPave((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->PaintPave((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->PaintPave((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_PaintPaveArc_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->PaintPaveArc((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->PaintPaveArc((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->PaintPaveArc((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_Print_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SavePrimitive_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SetBorderSize_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetBorderSize((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetBorderSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SetCornerRadius_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetCornerRadius((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetCornerRadius();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SetName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetName((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetName();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SetOption_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SetX1NDC_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetX1NDC((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SetX2NDC_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetX2NDC((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SetY1NDC_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetY1NDC((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_SetY2NDC_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->SetY2NDC((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_DeclFileName_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPave*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_DeclFileLine_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPave*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_ImplFileName_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPave*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_ImplFileLine_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPave*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_Class_Version_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPave*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_Class_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPave*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_Dictionary_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_IsA_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPave*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_ShowMembers_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPave_Streamer_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPave*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPave_wATPave_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPave *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPave *)((G__getstructoffset())+sizeof(TPave)*i);
   else  delete (TPave *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TText */
static int G__TText_TText_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TText *p=NULL;
   if(G__getaryconstruct()) p=new TText[G__getaryconstruct()];
   else                    p=new TText;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_TText_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TText *p=NULL;
      p = new TText(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_TText_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TText *p=NULL;
      p = new TText(*(TText*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_DistancetoPrimitive_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TText*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_Draw_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_DrawText_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->DrawText((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_ExecuteEvent_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_GetX_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TText*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_GetY_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TText*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_ls_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_Paint_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_PaintText_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->PaintText((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_PaintTextNDC_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->PaintTextNDC((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_Print_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_SavePrimitive_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_SetNDC_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->SetNDC((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->SetNDC();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_SetText_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->SetText((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_SetX_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->SetX((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_SetY_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->SetY((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_DeclFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TText*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_DeclFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TText*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_ImplFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TText*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_ImplFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TText*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_Class_Version_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TText*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_Class_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TText*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_Dictionary_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_IsA_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TText*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_ShowMembers_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TText_Streamer_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TText*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TText_wATText_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TText *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TText *)((G__getstructoffset())+sizeof(TText)*i);
   else  delete (TText *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPaveText */
static int G__TPaveText_TPaveText_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveText *p=NULL;
   if(G__getaryconstruct()) p=new TPaveText[G__getaryconstruct()];
   else                    p=new TPaveText;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPaveText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_TPaveText_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveText *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TPaveText(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Option_t*)G__int(libp->para[4]));
      break;
   case 4:
      p = new TPaveText(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPaveText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_TPaveText_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveText *p=NULL;
      p = new TPaveText(*(TPaveText*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPaveText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_AddBox_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->AddBox((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_AddLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->AddLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])));
      break;
   case 3:
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->AddLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2])));
      break;
   case 2:
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->AddLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->AddLine((Float_t)G__double(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->AddLine());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_AddText_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->AddText((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_AddText_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->AddText((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Clear_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Copy_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_DeleteText_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->DeleteText();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Draw_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_DrawFile_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->DrawFile((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->DrawFile((const Text_t*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_EditText_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->EditText();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_GetLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->GetLine((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_GetLineWith_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->GetLineWith((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_GetListOfLines_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->GetListOfLines());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_GetMargin_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPaveText*)(G__getstructoffset()))->GetMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_GetObject_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->GetObject());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_InsertText_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->InsertText((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Paint_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_PaintPrimitives_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->PaintPrimitives((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Print_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_ReadFile_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->ReadFile((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->ReadFile((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->ReadFile((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->ReadFile((const Text_t*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_SaveLines_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->SaveLines(*(ofstream*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_SavePrimitive_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_SetAllWith_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->SetAllWith((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_SetMargin_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->SetMargin((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->SetMargin();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_DeclFileName_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPaveText*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_DeclFileLine_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPaveText*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_ImplFileName_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPaveText*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_ImplFileLine_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPaveText*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Class_Version_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPaveText*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Class_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Dictionary_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_IsA_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveText*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_ShowMembers_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveText_Streamer_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveText*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPaveText_wATPaveText_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPaveText *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPaveText *)((G__getstructoffset())+sizeof(TPaveText)*i);
   else  delete (TPaveText *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TDiamond */
static int G__TDiamond_TDiamond_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDiamond *p=NULL;
   if(G__getaryconstruct()) p=new TDiamond[G__getaryconstruct()];
   else                    p=new TDiamond;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TDiamond);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_TDiamond_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDiamond *p=NULL;
      p = new TDiamond(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TDiamond);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_TDiamond_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDiamond *p=NULL;
      p = new TDiamond(*(TDiamond*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TDiamond);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_DistancetoPrimitive_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDiamond*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_Draw_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_ExecuteEvent_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_Paint_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_SavePrimitive_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDiamond*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDiamond*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDiamond*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDiamond*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDiamond*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDiamond*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDiamond*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDiamond_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDiamond*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDiamond_wATDiamond_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TDiamond *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TDiamond *)((G__getstructoffset())+sizeof(TDiamond)*i);
   else  delete (TDiamond *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TWbox */
static int G__TWbox_TWbox_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TWbox *p=NULL;
   if(G__getaryconstruct()) p=new TWbox[G__getaryconstruct()];
   else                    p=new TWbox;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TWbox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_TWbox_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TWbox *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TWbox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5])
,(Short_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TWbox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TWbox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TWbox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TWbox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_TWbox_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TWbox *p=NULL;
      p = new TWbox(*(TWbox*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TWbox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_Draw_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_DrawWbox_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->DrawWbox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5])
,(Short_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->DrawWbox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->DrawWbox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->DrawWbox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_ExecuteEvent_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_GetBorderMode_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TWbox*)(G__getstructoffset()))->GetBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_GetBorderSize_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TWbox*)(G__getstructoffset()))->GetBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_GetDarkColor_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWbox*)(G__getstructoffset()))->GetDarkColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_GetLightColor_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWbox*)(G__getstructoffset()))->GetLightColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_Paint_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_PaintFrame_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->PaintFrame(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5])
,(Short_t)G__int(libp->para[6]),(Bool_t)G__int(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_PaintWbox_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->PaintWbox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5])
,(Short_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->PaintWbox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->PaintWbox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->PaintWbox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_Print_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_SavePrimitive_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_SetBorderMode_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->SetBorderMode((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_SetBorderSize_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->SetBorderSize((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_DeclFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWbox*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_DeclFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWbox*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_ImplFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWbox*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_ImplFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWbox*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_Class_Version_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TWbox*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_Class_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWbox*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_Dictionary_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_IsA_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWbox*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_ShowMembers_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWbox_Streamer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWbox*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TWbox_wATWbox_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TWbox *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TWbox *)((G__getstructoffset())+sizeof(TWbox)*i);
   else  delete (TWbox *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TFrame */
static int G__TFrame_TFrame_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFrame *p=NULL;
   if(G__getaryconstruct()) p=new TFrame[G__getaryconstruct()];
   else                    p=new TFrame;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_TFrame_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFrame *p=NULL;
      p = new TFrame(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_TFrame_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFrame *p=NULL;
      p = new TFrame(*(TFrame*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_Draw_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_ExecuteEvent_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_Paint_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_Pop_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->Pop();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_SavePrimitive_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFrame_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFrame_wATFrame_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFrame *)((G__getstructoffset())+sizeof(TFrame)*i);
   else  delete (TFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGaxis */
static int G__TGaxis_TGaxis_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGaxis *p=NULL;
   if(G__getaryconstruct()) p=new TGaxis[G__getaryconstruct()];
   else                    p=new TGaxis;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGaxis);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_TGaxis_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGaxis *p=NULL;
   switch(libp->paran) {
   case 9:
      p = new TGaxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]),(Option_t*)G__int(libp->para[7])
,(Float_t)G__double(libp->para[8]));
      break;
   case 8:
      p = new TGaxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]),(Option_t*)G__int(libp->para[7]));
      break;
   case 7:
      p = new TGaxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGaxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGaxis);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_AdjustBinSize_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->AdjustBinSize(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Int_t)G__int(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Float_t*)libp->para[6].ref:G__Mfloat(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_Draw_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_DrawAxis_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 9:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->DrawAxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]),(Option_t*)G__int(libp->para[7])
,(Float_t)G__double(libp->para[8]));
      break;
   case 8:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->DrawAxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]),(Option_t*)G__int(libp->para[7]));
      break;
   case 7:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->DrawAxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->DrawAxis((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetGridLength_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGaxis*)(G__getstructoffset()))->GetGridLength());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetLabelFont_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGaxis*)(G__getstructoffset()))->GetLabelFont());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetLabelOffset_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGaxis*)(G__getstructoffset()))->GetLabelOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetLabelSize_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGaxis*)(G__getstructoffset()))->GetLabelSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetTitleOffset_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGaxis*)(G__getstructoffset()))->GetTitleOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetTitleSize_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGaxis*)(G__getstructoffset()))->GetTitleSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGaxis*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetTitle_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGaxis*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetNdiv_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGaxis*)(G__getstructoffset()))->GetNdiv());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetWmin_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGaxis*)(G__getstructoffset()))->GetWmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetWmax_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGaxis*)(G__getstructoffset()))->GetWmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_GetTickSize_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGaxis*)(G__getstructoffset()))->GetTickSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_LabelsLimits_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->LabelsLimits((char*)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_Optimize_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->Optimize(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Int_t)G__int(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Float_t*)libp->para[6].ref:G__Mfloat(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_Paint_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_PaintAxis_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 9:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->PaintAxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]),(Option_t*)G__int(libp->para[7])
,(Float_t)G__double(libp->para[8]));
      break;
   case 8:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->PaintAxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]),(Option_t*)G__int(libp->para[7]));
      break;
   case 7:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->PaintAxis(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_Rotate_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->Rotate(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,libp->para[6].ref?*(Float_t*)libp->para[6].ref:G__Mfloat(libp->para[6]),libp->para[7].ref?*(Float_t*)libp->para[7].ref:G__Mfloat(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SavePrimitive_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetOption_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetLabelFont_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetLabelFont((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetLabelOffset_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetLabelOffset((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetLabelSize_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetLabelSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetName_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetName((Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetTickSize_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetTickSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetGridLength_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetGridLength((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetTitle_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetTitle((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetTitle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetTitleOffset_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetTitleOffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetTitleOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetTitleSize_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetTitleSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetWmin_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetWmin((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_SetWmax_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->SetWmax((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_DeclFileName_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGaxis*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_DeclFileLine_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGaxis*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_ImplFileName_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGaxis*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_ImplFileLine_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGaxis*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_Class_Version_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGaxis*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_Class_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGaxis*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_Dictionary_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_IsA_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGaxis*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_ShowMembers_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGaxis_Streamer_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGaxis*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGaxis_TGaxis_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGaxis *p;
   if(1!=libp->paran) ;
   p=new TGaxis(*(TGaxis*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGaxis);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGaxis_wATGaxis_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGaxis *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGaxis *)((G__getstructoffset())+sizeof(TGaxis)*i);
   else  delete (TGaxis *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGraph */
static int G__TGraph_TGraph_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGraph *p=NULL;
   if(G__getaryconstruct()) p=new TGraph[G__getaryconstruct()];
   else                    p=new TGraph;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraph);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_TGraph_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGraph *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TGraph(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGraph((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGraph((Int_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraph);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_ComputeLogs_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->ComputeLogs((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_ComputeRange_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->ComputeRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_DistancetoPrimitive_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGraph*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Draw_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_DrawGraph_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->DrawGraph((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->DrawGraph((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_DrawPanel_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->DrawPanel();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_ExecuteEvent_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Fit_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Fit((Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Fit((Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Fit((Text_t*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_FitPanel_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->FitPanel();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetErrorX_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGraph*)(G__getstructoffset()))->GetErrorX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetErrorY_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGraph*)(G__getstructoffset()))->GetErrorY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetHistogram_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraph*)(G__getstructoffset()))->GetHistogram());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetListOfFunctions_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraph*)(G__getstructoffset()))->GetListOfFunctions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetN_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGraph*)(G__getstructoffset()))->GetN());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetX_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TGraph*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetY_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TGraph*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetXaxis_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraph*)(G__getstructoffset()))->GetXaxis());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetYaxis_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraph*)(G__getstructoffset()))->GetYaxis());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_GetPoint_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->GetPoint((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_InitExpo_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->InitExpo();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_InitGaus_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->InitGaus();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_InitPolynom_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->InitPolynom();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_LeastSquareFit_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->LeastSquareFit((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Double_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_LeastSquareLinearFit_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->LeastSquareLinearFit((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Double_t*)libp->para[1].ref:G__Mdouble(libp->para[1])
,libp->para[2].ref?*(Double_t*)libp->para[2].ref:G__Mdouble(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Paint_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_PaintGraph_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->PaintGraph((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->PaintGraph((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_PaintGrapHist_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->PaintGrapHist((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->PaintGrapHist((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Print_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_SavePrimitive_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_SetMaximum_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->SetMaximum((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->SetMaximum();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_SetMinimum_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->SetMinimum((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->SetMinimum();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_SetPoint_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->SetPoint((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Smooth_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Smooth((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Zero_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Zero(
libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5])
,(Int_t)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_DeclFileName_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGraph*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_DeclFileLine_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGraph*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_ImplFileName_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGraph*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_ImplFileLine_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGraph*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Class_Version_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGraph*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Class_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraph*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Dictionary_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_IsA_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraph*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_ShowMembers_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraph_Streamer_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraph*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGraph_TGraph_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGraph *p;
   if(1!=libp->paran) ;
   p=new TGraph(*(TGraph*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraph);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGraph_wATGraph_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGraph *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGraph *)((G__getstructoffset())+sizeof(TGraph)*i);
   else  delete (TGraph *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGraphErrors */
static int G__TGraphErrors_TGraphErrors_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGraphErrors *p=NULL;
   if(G__getaryconstruct()) p=new TGraphErrors[G__getaryconstruct()];
   else                    p=new TGraphErrors;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_TGraphErrors_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGraphErrors *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGraphErrors(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGraphErrors(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGraphErrors(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGraphErrors((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGraphErrors((Int_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_ComputeRange_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->ComputeRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_GetErrorX_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGraphErrors*)(G__getstructoffset()))->GetErrorX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_GetErrorY_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGraphErrors*)(G__getstructoffset()))->GetErrorY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_GetEX_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TGraphErrors*)(G__getstructoffset()))->GetEX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_GetEY_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TGraphErrors*)(G__getstructoffset()))->GetEY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_Paint_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_Print_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_SavePrimitive_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_SetPoint_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->SetPoint((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_SetPointError_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->SetPointError((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_DeclFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGraphErrors*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_DeclFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGraphErrors*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_ImplFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGraphErrors*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_ImplFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGraphErrors*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_Class_Version_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGraphErrors*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_Class_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraphErrors*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_Dictionary_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_IsA_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraphErrors*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_ShowMembers_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphErrors_Streamer_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphErrors*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGraphErrors_TGraphErrors_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGraphErrors *p;
   if(1!=libp->paran) ;
   p=new TGraphErrors(*(TGraphErrors*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGraphErrors_wATGraphErrors_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGraphErrors *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGraphErrors *)((G__getstructoffset())+sizeof(TGraphErrors)*i);
   else  delete (TGraphErrors *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGraphAsymmErrors */
static int G__TGraphAsymmErrors_TGraphAsymmErrors_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGraphAsymmErrors *p=NULL;
   if(G__getaryconstruct()) p=new TGraphAsymmErrors[G__getaryconstruct()];
   else                    p=new TGraphAsymmErrors;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_TGraphAsymmErrors_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGraphAsymmErrors *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TGraphAsymmErrors(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]),(Float_t*)G__int(libp->para[5])
,(Float_t*)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGraphAsymmErrors(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]),(Float_t*)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGraphAsymmErrors(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGraphAsymmErrors(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGraphAsymmErrors(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGraphAsymmErrors((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGraphAsymmErrors((Int_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_ComputeRange_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->ComputeRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_GetErrorX_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGraphAsymmErrors*)(G__getstructoffset()))->GetErrorX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_GetErrorY_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGraphAsymmErrors*)(G__getstructoffset()))->GetErrorY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_GetEXlow_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->GetEXlow());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_GetEXhigh_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->GetEXhigh());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_GetEYlow_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->GetEYlow());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_GetEYhigh_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->GetEYhigh());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_Paint_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_Print_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_SavePrimitive_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_SetPoint_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->SetPoint((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_SetPointError_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->SetPointError((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_DeclFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_DeclFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_ImplFileName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_ImplFileLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_Class_Version_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_Class_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_Dictionary_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_IsA_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGraphAsymmErrors*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_ShowMembers_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGraphAsymmErrors_Streamer_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGraphAsymmErrors*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGraphAsymmErrors_TGraphAsymmErrors_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGraphAsymmErrors *p;
   if(1!=libp->paran) ;
   p=new TGraphAsymmErrors(*(TGraphAsymmErrors*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGraphAsymmErrors_wATGraphAsymmErrors_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGraphAsymmErrors *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGraphAsymmErrors *)((G__getstructoffset())+sizeof(TGraphAsymmErrors)*i);
   else  delete (TGraphAsymmErrors *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TLatex */
static int G__TLatex_TLatex_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLatex *p=NULL;
   if(G__getaryconstruct()) p=new TLatex[G__getaryconstruct()];
   else                    p=new TLatex;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TLatex);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_TLatex_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLatex *p=NULL;
      p = new TLatex(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TLatex);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_TLatex_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLatex *p=NULL;
      p = new TLatex(*(TLatex*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TLatex);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_Copy_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_DrawLatex_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->DrawLatex((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_GetHeight_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TLatex*)(G__getstructoffset()))->GetHeight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_GetXsize_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TLatex*)(G__getstructoffset()))->GetXsize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_GetYsize_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TLatex*)(G__getstructoffset()))->GetYsize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_Paint_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_PaintLatex_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->PaintLatex((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(char*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_SavePrimitive_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_SetIndiceSize_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->SetIndiceSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_SetLimitIndiceSize_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->SetLimitIndiceSize((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_DeclFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLatex*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_DeclFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLatex*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_ImplFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLatex*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_ImplFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLatex*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_Class_Version_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TLatex*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_Class_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLatex*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_Dictionary_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_IsA_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLatex*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_ShowMembers_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLatex_Streamer_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLatex*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TLatex_wATLatex_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TLatex *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TLatex *)((G__getstructoffset())+sizeof(TLatex)*i);
   else  delete (TLatex *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMarker */
static int G__TMarker_TMarker_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMarker *p=NULL;
   if(G__getaryconstruct()) p=new TMarker[G__getaryconstruct()];
   else                    p=new TMarker;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_TMarker_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMarker *p=NULL;
      p = new TMarker(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_TMarker_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMarker *p=NULL;
      p = new TMarker(*(TMarker*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_DistancetoPrimitive_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMarker*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_Draw_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_DrawMarker_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->DrawMarker((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_ExecuteEvent_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_GetX_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMarker*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_GetY_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMarker*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_ls_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_Paint_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_PaintMarker_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->PaintMarker((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_PaintMarkerNDC_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->PaintMarkerNDC((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_Print_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_SavePrimitive_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_SetX_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->SetX((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_SetY_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->SetY((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_DisplayMarkerTypes_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->DisplayMarkerTypes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_DeclFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMarker*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_DeclFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMarker*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_ImplFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMarker*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_ImplFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMarker*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_Class_Version_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMarker*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_Class_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMarker*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_Dictionary_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_IsA_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMarker*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_ShowMembers_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker_Streamer_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMarker_wATMarker_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMarker *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMarker *)((G__getstructoffset())+sizeof(TMarker)*i);
   else  delete (TMarker *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPolyLine */
static int G__TPolyLine_TPolyLine_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine *p=NULL;
   if(G__getaryconstruct()) p=new TPolyLine[G__getaryconstruct()];
   else                    p=new TPolyLine;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_TPolyLine_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TPolyLine((Int_t)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TPolyLine((Int_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_TPolyLine_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TPolyLine(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TPolyLine(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_TPolyLine_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine *p=NULL;
      p = new TPolyLine(*(TPolyLine*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_Copy_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_DistancetoPrimitive_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_Draw_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_DrawPolyLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_ExecuteEvent_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_GetN_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine*)(G__getstructoffset()))->GetN());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_GetX_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPolyLine*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_GetY_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPolyLine*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_GetOption_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyLine*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_ls_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_Paint_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_PaintPolyLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_PaintPolyLineNDC_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->PaintPolyLineNDC((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->PaintPolyLineNDC((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_Print_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_SavePrimitive_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_SetOption_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->SetOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->SetOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_SetPoint_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->SetPoint((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_SetPolyLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->SetPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->SetPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->SetPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->SetPolyLine((Int_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_DeclFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyLine*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_DeclFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_ImplFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyLine*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_ImplFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_Class_Version_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPolyLine*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_Class_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPolyLine*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_Dictionary_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_IsA_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPolyLine*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_ShowMembers_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine_Streamer_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPolyLine_wATPolyLine_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPolyLine *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPolyLine *)((G__getstructoffset())+sizeof(TPolyLine)*i);
   else  delete (TPolyLine *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPolyMarker */
static int G__TPolyMarker_TPolyMarker_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyMarker *p=NULL;
   if(G__getaryconstruct()) p=new TPolyMarker[G__getaryconstruct()];
   else                    p=new TPolyMarker;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_TPolyMarker_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyMarker *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TPolyMarker((Int_t)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TPolyMarker((Int_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_TPolyMarker_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyMarker *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TPolyMarker(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TPolyMarker(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_TPolyMarker_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyMarker *p=NULL;
      p = new TPolyMarker(*(TPolyMarker*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_Copy_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_Draw_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_DrawPolyMarker_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_ExecuteEvent_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_GetN_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyMarker*)(G__getstructoffset()))->GetN());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_GetOption_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyMarker*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_GetX_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPolyMarker*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_GetY_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPolyMarker*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_ls_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_Paint_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_PaintPolyMarker_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->PaintPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->PaintPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_Print_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_SavePrimitive_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_SetPoint_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->SetPoint((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_SetPolyMarker_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->SetPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->SetPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->SetPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->SetPolyMarker((Int_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_DeclFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyMarker*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_DeclFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyMarker*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_ImplFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyMarker*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_ImplFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyMarker*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_Class_Version_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPolyMarker*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_Class_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPolyMarker*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_Dictionary_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_IsA_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPolyMarker*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_ShowMembers_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker_Streamer_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPolyMarker_wATPolyMarker_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPolyMarker *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPolyMarker *)((G__getstructoffset())+sizeof(TPolyMarker)*i);
   else  delete (TPolyMarker *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPaveLabel */
static int G__TPaveLabel_TPaveLabel_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveLabel *p=NULL;
   if(G__getaryconstruct()) p=new TPaveLabel[G__getaryconstruct()];
   else                    p=new TPaveLabel;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_TPaveLabel_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveLabel *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TPaveLabel(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(const Text_t*)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      p = new TPaveLabel(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(const Text_t*)G__int(libp->para[4]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_TPaveLabel_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveLabel *p=NULL;
      p = new TPaveLabel(*(TPaveLabel*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_Draw_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_DrawPaveLabel_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->DrawPaveLabel((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(const Text_t*)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->DrawPaveLabel((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(const Text_t*)G__int(libp->para[4]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_GetLabel_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPaveLabel*)(G__getstructoffset()))->GetLabel());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_GetTitle_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPaveLabel*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_Paint_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_PaintPaveLabel_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->PaintPaveLabel((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(const Text_t*)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->PaintPaveLabel((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(const Text_t*)G__int(libp->para[4]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_Print_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_SavePrimitive_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_SetLabel_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->SetLabel((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_DeclFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPaveLabel*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_DeclFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPaveLabel*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_ImplFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPaveLabel*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_ImplFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPaveLabel*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_Class_Version_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPaveLabel*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_Class_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveLabel*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_Dictionary_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_IsA_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveLabel*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_ShowMembers_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveLabel_Streamer_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveLabel*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPaveLabel_wATPaveLabel_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPaveLabel *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPaveLabel *)((G__getstructoffset())+sizeof(TPaveLabel)*i);
   else  delete (TPaveLabel *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPavesText */
static int G__TPavesText_TPavesText_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPavesText *p=NULL;
   if(G__getaryconstruct()) p=new TPavesText[G__getaryconstruct()];
   else                    p=new TPavesText;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPavesText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_TPavesText_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPavesText *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TPavesText(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      p = new TPavesText(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TPavesText(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPavesText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_TPavesText_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPavesText *p=NULL;
      p = new TPavesText(*(TPavesText*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TPavesText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_Draw_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_GetNpaves_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPavesText*)(G__getstructoffset()))->GetNpaves());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_Paint_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_SavePrimitive_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_SetNpaves_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->SetNpaves((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->SetNpaves();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPavesText*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPavesText*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPavesText*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPavesText*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPavesText*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPavesText*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPavesText*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPavesText_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPavesText*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPavesText_wATPavesText_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPavesText *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPavesText *)((G__getstructoffset())+sizeof(TPavesText)*i);
   else  delete (TPavesText *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TF2 */
static int G__TF2_TF2_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF2 *p=NULL;
   if(G__getaryconstruct()) p=new TF2[G__getaryconstruct()];
   else                    p=new TF2;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_TF2_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF2 *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TF2(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TF2(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TF2(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF2(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF2((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_TF2_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF2 *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TF2(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TF2(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TF2(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TF2(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF2(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF2((const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_TF2_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF2 *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TF2(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TF2(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TF2(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TF2(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF2(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF2((const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_TF2_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF2 *p=NULL;
      p = new TF2(*(TF2*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Copy_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_DistancetoPrimitive_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF2*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Draw_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_DrawCopy_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->DrawCopy((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->DrawCopy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_DrawF2_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->DrawF2((const char*)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->DrawF2((const char*)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_ExecuteEvent_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetContour_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,105,(long)((TF2*)(G__getstructoffset()))->GetContour((Float_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,105,(long)((TF2*)(G__getstructoffset()))->GetContour());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetContourLevel_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TF2*)(G__getstructoffset()))->GetContourLevel((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetNpy_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF2*)(G__getstructoffset()))->GetNpy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetObjectInfo_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TF2*)(G__getstructoffset()))->GetObjectInfo((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetRandom_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TF2*)(G__getstructoffset()))->GetRandom());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetRandom2_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->GetRandom2(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetRange_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetRange_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetRange_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetYmin_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TF2*)(G__getstructoffset()))->GetYmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_GetYmax_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TF2*)(G__getstructoffset()))->GetYmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Integral_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__letdouble(result7,100,(double)((TF2*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Double_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])));
      break;
   case 3:
      G__letdouble(result7,100,(double)((TF2*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Double_t*)G__int(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7,100,(double)((TF2*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Integral_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__letdouble(result7,100,(double)((TF2*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4])));
      break;
   case 4:
      G__letdouble(result7,100,(double)((TF2*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Integral_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__letdouble(result7,100,(double)((TF2*)(G__getstructoffset()))->Integral(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6])));
      break;
   case 6:
      G__letdouble(result7,100,(double)((TF2*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Paint_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_SetNpy_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetNpy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetNpy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_SetContour_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetContour((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetContour((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetContour();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_SetContourLevel_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetContourLevel((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_SetRange_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_SetRange_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_SetRange_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_DeclFileName_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TF2*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_DeclFileLine_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF2*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_ImplFileName_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TF2*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_ImplFileLine_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF2*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Class_Version_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TF2*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Class_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF2*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Dictionary_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_IsA_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF2*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_ShowMembers_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF2_Streamer_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF2*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TF2_wATF2_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TF2 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TF2 *)((G__getstructoffset())+sizeof(TF2)*i);
   else  delete (TF2 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TF3 */
static int G__TF3_TF3_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF3 *p=NULL;
   if(G__getaryconstruct()) p=new TF3[G__getaryconstruct()];
   else                    p=new TF3;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_TF3_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF3 *p=NULL;
   switch(libp->paran) {
   case 8:
      p = new TF3(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7]));
      break;
   case 7:
      p = new TF3(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      break;
   case 6:
      p = new TF3(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TF3(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TF3(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF3(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF3((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_TF3_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF3 *p=NULL;
   switch(libp->paran) {
   case 9:
      p = new TF3(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7])
,(Int_t)G__int(libp->para[8]));
      break;
   case 8:
      p = new TF3(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7]));
      break;
   case 7:
      p = new TF3(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      break;
   case 6:
      p = new TF3(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TF3(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TF3(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF3(
(const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF3((const char*)G__int(libp->para[0]),(void*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_TF3_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF3 *p=NULL;
   switch(libp->paran) {
   case 9:
      p = new TF3(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7])
,(Int_t)G__int(libp->para[8]));
      break;
   case 8:
      p = new TF3(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7]));
      break;
   case 7:
      p = new TF3(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      break;
   case 6:
      p = new TF3(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TF3(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TF3(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TF3(
(const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      p = new TF3((const char*)G__int(libp->para[0]),(Double_t (*)(Double_t*, Double_t*))G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_TF3_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TF3 *p=NULL;
      p = new TF3(*(TF3*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf1LN_TF3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Copy_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_DistancetoPrimitive_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF3*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Draw_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_ExecuteEvent_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_GetNpz_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF3*)(G__getstructoffset()))->GetNpz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_GetRandom3_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->GetRandom3(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_GetRange_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_GetRange_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_GetRange_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3])
,libp->para[4].ref?*(Float_t*)libp->para[4].ref:G__Mfloat(libp->para[4]),libp->para[5].ref?*(Float_t*)libp->para[5].ref:G__Mfloat(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_GetZmin_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TF3*)(G__getstructoffset()))->GetZmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_GetZmax_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TF3*)(G__getstructoffset()))->GetZmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Integral_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__letdouble(result7,100,(double)((TF3*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Double_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])));
      break;
   case 3:
      G__letdouble(result7,100,(double)((TF3*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Double_t*)G__int(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7,100,(double)((TF3*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Integral_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__letdouble(result7,100,(double)((TF3*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4])));
      break;
   case 4:
      G__letdouble(result7,100,(double)((TF3*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Integral_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__letdouble(result7,100,(double)((TF3*)(G__getstructoffset()))->Integral(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6])));
      break;
   case 6:
      G__letdouble(result7,100,(double)((TF3*)(G__getstructoffset()))->Integral((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Paint_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_SetNpz_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->SetNpz((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->SetNpz();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_SetRange_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_SetRange_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_SetRange_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_DeclFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TF3*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_DeclFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF3*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_ImplFileName_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TF3*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_ImplFileLine_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TF3*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Class_Version_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TF3*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Class_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF3*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Dictionary_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_IsA_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TF3*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_ShowMembers_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TF3_Streamer_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TF3*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TF3_wATF3_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TF3 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TF3 *)((G__getstructoffset())+sizeof(TF3)*i);
   else  delete (TF3 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TColor */

/* TF1 */

/* TAttPad */

/* TAttCanvas */

/* TEllipse */

/* TArc */

/* TLine */

/* TArrow */

/* TBox */

/* TPave */

/* TText */

/* TPaveText */

/* TDiamond */

/* TWbox */

/* TFrame */

/* TGaxis */

/* TGraph */

/* TGraphErrors */

/* TGraphAsymmErrors */

/* TLatex */

/* TMarker */

/* TPolyLine */

/* TPolyMarker */

/* TPaveLabel */

/* TPavesText */

/* TF2 */

/* TF3 */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Graf1 {
 public:
  G__Sizep2memfuncG__Graf1() {p=&G__Sizep2memfuncG__Graf1::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Graf1::*p)();
};

size_t G__get_sizep2memfuncG__Graf1()
{
  G__Sizep2memfuncG__Graf1 a;
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
extern "C" void G__cpp_setup_inheritanceG__Graf1() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TColor))) {
     TColor *G__Lderived;
     G__Lderived=(TColor*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TColor),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TColor),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TF1))) {
     TF1 *G__Lderived;
     G__Lderived=(TF1*)0x1000;
     {
       TFormula *G__Lpbase=(TFormula*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1),G__get_linked_tagnum(&G__G__Graf1LN_TFormula),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1),G__get_linked_tagnum(&G__G__Graf1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TEllipse))) {
     TEllipse *G__Lderived;
     G__Lderived=(TEllipse*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TEllipse),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TEllipse),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TEllipse),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TArc))) {
     TArc *G__Lderived;
     G__Lderived=(TArc*)0x1000;
     {
       TEllipse *G__Lpbase=(TEllipse*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArc),G__get_linked_tagnum(&G__G__Graf1LN_TEllipse),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArc),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArc),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArc),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TLine))) {
     TLine *G__Lderived;
     G__Lderived=(TLine*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLine),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLine),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TArrow))) {
     TArrow *G__Lderived;
     G__Lderived=(TArrow*)0x1000;
     {
       TLine *G__Lpbase=(TLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArrow),G__get_linked_tagnum(&G__G__Graf1LN_TLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArrow),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArrow),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArrow),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TBox))) {
     TBox *G__Lderived;
     G__Lderived=(TBox*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TBox),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TBox),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TBox),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TPave))) {
     TPave *G__Lderived;
     G__Lderived=(TPave*)0x1000;
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPave),G__get_linked_tagnum(&G__G__Graf1LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPave),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPave),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPave),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TText))) {
     TText *G__Lderived;
     G__Lderived=(TText*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TText),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TText),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TText),G__get_linked_tagnum(&G__G__Graf1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText))) {
     TPaveText *G__Lderived;
     G__Lderived=(TPaveText*)0x1000;
     {
       TPave *G__Lpbase=(TPave*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),G__get_linked_tagnum(&G__G__Graf1LN_TPave),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),G__get_linked_tagnum(&G__G__Graf1LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),G__get_linked_tagnum(&G__G__Graf1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond))) {
     TDiamond *G__Lderived;
     G__Lderived=(TDiamond*)0x1000;
     {
       TPaveText *G__Lpbase=(TPaveText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TPave *G__Lpbase=(TPave*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),G__get_linked_tagnum(&G__G__Graf1LN_TPave),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),G__get_linked_tagnum(&G__G__Graf1LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),G__get_linked_tagnum(&G__G__Graf1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TWbox))) {
     TWbox *G__Lderived;
     G__Lderived=(TWbox*)0x1000;
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TWbox),G__get_linked_tagnum(&G__G__Graf1LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TWbox),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TWbox),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TWbox),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TFrame))) {
     TFrame *G__Lderived;
     G__Lderived=(TFrame*)0x1000;
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFrame),G__get_linked_tagnum(&G__G__Graf1LN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFrame),G__get_linked_tagnum(&G__G__Graf1LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFrame),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFrame),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFrame),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TGaxis))) {
     TGaxis *G__Lderived;
     G__Lderived=(TGaxis*)0x1000;
     {
       TLine *G__Lpbase=(TLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGaxis),G__get_linked_tagnum(&G__G__Graf1LN_TLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGaxis),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGaxis),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGaxis),G__get_linked_tagnum(&G__G__Graf1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TGraph))) {
     TGraph *G__Lderived;
     G__Lderived=(TGraph*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraph),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraph),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraph),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraph),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraph),G__get_linked_tagnum(&G__G__Graf1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors))) {
     TGraphErrors *G__Lderived;
     G__Lderived=(TGraphErrors*)0x1000;
     {
       TGraph *G__Lpbase=(TGraph*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),G__get_linked_tagnum(&G__G__Graf1LN_TGraph),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),G__get_linked_tagnum(&G__G__Graf1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors))) {
     TGraphAsymmErrors *G__Lderived;
     G__Lderived=(TGraphAsymmErrors*)0x1000;
     {
       TGraph *G__Lpbase=(TGraph*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),G__get_linked_tagnum(&G__G__Graf1LN_TGraph),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),G__get_linked_tagnum(&G__G__Graf1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TLatex))) {
     TLatex *G__Lderived;
     G__Lderived=(TLatex*)0x1000;
     {
       TText *G__Lpbase=(TText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLatex),G__get_linked_tagnum(&G__G__Graf1LN_TText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLatex),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLatex),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLatex),G__get_linked_tagnum(&G__G__Graf1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLatex),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TMarker))) {
     TMarker *G__Lderived;
     G__Lderived=(TMarker*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TMarker),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TMarker),G__get_linked_tagnum(&G__G__Graf1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine))) {
     TPolyLine *G__Lderived;
     G__Lderived=(TPolyLine*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker))) {
     TPolyMarker *G__Lderived;
     G__Lderived=(TPolyMarker*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker),G__get_linked_tagnum(&G__G__Graf1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel))) {
     TPaveLabel *G__Lderived;
     G__Lderived=(TPaveLabel*)0x1000;
     {
       TPave *G__Lpbase=(TPave*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),G__get_linked_tagnum(&G__G__Graf1LN_TPave),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),G__get_linked_tagnum(&G__G__Graf1LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),G__get_linked_tagnum(&G__G__Graf1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText))) {
     TPavesText *G__Lderived;
     G__Lderived=(TPavesText*)0x1000;
     {
       TPaveText *G__Lpbase=(TPaveText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TPave *G__Lpbase=(TPave*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),G__get_linked_tagnum(&G__G__Graf1LN_TPave),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),G__get_linked_tagnum(&G__G__Graf1LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),G__get_linked_tagnum(&G__G__Graf1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TFormula))) {
     TFormula *G__Lderived;
     G__Lderived=(TFormula*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFormula),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFormula),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TF2))) {
     TF2 *G__Lderived;
     G__Lderived=(TF2*)0x1000;
     {
       TF1 *G__Lpbase=(TF1*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2),G__get_linked_tagnum(&G__G__Graf1LN_TF1),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TFormula *G__Lpbase=(TFormula*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2),G__get_linked_tagnum(&G__G__Graf1LN_TFormula),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2),G__get_linked_tagnum(&G__G__Graf1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf1LN_TF3))) {
     TF3 *G__Lderived;
     G__Lderived=(TF3*)0x1000;
     {
       TF2 *G__Lpbase=(TF2*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),G__get_linked_tagnum(&G__G__Graf1LN_TF2),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TF1 *G__Lpbase=(TF1*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),G__get_linked_tagnum(&G__G__Graf1LN_TF1),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TFormula *G__Lpbase=(TFormula*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),G__get_linked_tagnum(&G__G__Graf1LN_TFormula),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),G__get_linked_tagnum(&G__G__Graf1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),G__get_linked_tagnum(&G__G__Graf1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),G__get_linked_tagnum(&G__G__Graf1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),G__get_linked_tagnum(&G__G__Graf1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),G__get_linked_tagnum(&G__G__Graf1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Graf1() {

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
   G__search_typename2("Double_t (*)(Double_t*, Double_t*)",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TColor */
static void G__setup_memvarTColor(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TColor));
   { TColor *p; p=(TColor*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNumber=",0,"color number identifier");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fRed=",0,"Fraction of Red");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fGreen=",0,"Fraction of Green");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fBlue=",0,"Fraction of Blue");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fHue=",0,"Hue");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fLight=",0,"Light");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fSaturation=",0,"Saturation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TF1 */
static void G__setup_memvarTF1(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1));
   { TF1 *p; p=(TF1*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXmin=",0,"Lower bounds for the range");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXmax=",0,"Upper bounds for the range");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpx=",0,"Number of points used for the graphical representation");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fType=",0,"(=0 for standard functions, 1 if pointer to function)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpfits=",0,"Number of points used in the fit");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNsave=",0,"Number of points used to fill array fSave");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fChisquare=",0,"Function fit chisquare");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fIntegral=",0,"Integral of function binned on fNpx bins");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fParErrors=",0,"Array of errors of the fNpar parameters");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fParMin=",0,"Array of lower limits of the fNpar parameters");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fParMax=",0,"Array of upper limits of the fNpar parameters");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSave=",0,"Array of fNsave function values");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TObject),-1,-1,2,"fParent=",0,"Parent object hooking this function (if one)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TH1F),-1,-1,2,"fHistogram=",0,"Pointer to histogram used for visualisation");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMaximum=",0,"Maximum value for plotting");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMinimum=",0,"Minimum value for plotting");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TMethodCall),-1,-1,2,"fMethodCall=",0,"Pointer to MethodCall in case of interpreted function");
   G__memvar_setup((void*)NULL,81,2,0,-1,G__defined_typename("Double_t (*)(Double_t*, Double_t*)"),-1,2,"fFunction=",0,"Pointer to function");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttPad */
static void G__setup_memvarTAttPad(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TAttPad));
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
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttCanvas */
static void G__setup_memvarTAttCanvas(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TAttCanvas));
   { TAttCanvas *p; p=(TAttCanvas*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,4,"fXBetween=",0,"X distance between pads");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,4,"fYBetween=",0,"Y distance between pads");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,4,"fTitleFromTop=",0,"Y distance of Global Title from top");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,4,"fXdate=",0,"X position where to draw the date");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,4,"fYdate=",0,"X position where to draw the date");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,4,"fAdate=",0,"Alignment for the date");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TEllipse */
static void G__setup_memvarTEllipse(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TEllipse));
   { TEllipse *p; p=(TEllipse*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX1=",0,"X coordinate of centre");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY1=",0,"Y coordinate of centre");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fR1=",0,"first radius");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fR2=",0,"second radius");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhimin=",0,"Minimum angle (degrees)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhimax=",0,"Maximum angle (degrees)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTheta=",0,"Rotation angle (degrees)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TArc */
static void G__setup_memvarTArc(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArc));
   { TArc *p; p=(TArc*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TLine */
static void G__setup_memvarTLine(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLine));
   { TLine *p; p=(TLine*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fX1=",0,"X of 1st point");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fY1=",0,"Y of 1st point");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fX2=",0,"X of 2nd point");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fY2=",0,"Y of 2nd point");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TArrow */
static void G__setup_memvarTArrow(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArrow));
   { TArrow *p; p=(TArrow*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAngle=",0,"Arrow opening angle (degrees)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fArrowSize=",0,"Arrow Size");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TString),-1,-1,2,"fOption=",0,"Arrow shapes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TBox */
static void G__setup_memvarTBox(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TBox));
   { TBox *p; p=(TBox*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TGToolTip),-1,-1,4,"fTip=",0,"!tool tip associated with box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fX1=",0,"X of 1st point");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fY1=",0,"Y of 1st point");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fX2=",0,"X of 2nd point");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fY2=",0,"Y of 2nd point");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fResizing=",0,"!True if box is being resized");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPave */
static void G__setup_memvarTPave(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPave));
   { TPave *p; p=(TPave*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX1NDC=",0,"X1 point in NDC coordinates");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY1NDC=",0,"Y1 point in NDC coordinates");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX2NDC=",0,"X2 point in NDC coordinates");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY2NDC=",0,"Y2 point in NDC coordinates");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fBorderSize=",0,"window box bordersize in pixels");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fInit=",0,"(=0 if transformation to NDC not yet done)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fCornerRadius=",0,"Corner radius in case of option arc");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TString),-1,-1,2,"fOption=",0,"Pave style");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TString),-1,-1,2,"fName=",0,"Pave name");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TText */
static void G__setup_memvarTText(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TText));
   { TText *p; p=(TText*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fX=",0,"X position of text (left,center,etc..)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fY=",0,"Y position of text (left,center,etc..)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPaveText */
static void G__setup_memvarTPaveText(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText));
   { TPaveText *p; p=(TPaveText*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLongest=",0,"Length of the longest line");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMargin=",0,"Text margin");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TList),-1,-1,2,"fLines=",0,"List of labels");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TDiamond */
static void G__setup_memvarTDiamond(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond));
   { TDiamond *p; p=(TDiamond*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TWbox */
static void G__setup_memvarTWbox(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TWbox));
   { TWbox *p; p=(TWbox*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Short_t"),-1,2,"fBorderSize=",0,"window box bordersize in pixels");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Short_t"),-1,2,"fBorderMode=",0,"Bordermode (-1=down, 0 = no border, 1=up)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TFrame */
static void G__setup_memvarTFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFrame));
   { TFrame *p; p=(TFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGaxis */
static void G__setup_memvarTGaxis(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGaxis));
   { TGaxis *p; p=(TGaxis*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNdiv=",0,"Number of divisions");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fWmin=",0,"Lowest value on the axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fWmax=",0,"Highest value on the axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fGridLength=",0,"Length of the grid in NDC");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTickSize=",0,"Size of primary tick mark in NDC");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fLabelOffset=",0,"Offset of label wrt axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fLabelSize=",0,"Size of labels in NDC");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleOffset=",0,"Offset of title wrt axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleSize=",0,"Size of title in NDC");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fLabelFont=",0,"Font for labels");
   G__memvar_setup((void*)NULL,99,0,0,-1,-1,-1,4,"fChopt[16]=",0,"Axis options");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TString),-1,-1,4,"fName=",0,"axis name");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TString),-1,-1,4,"fTitle=",0,"axis title");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGraph */
static void G__setup_memvarTGraph(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraph));
   { TGraph *p; p=(TGraph*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpoints=",0,"Number of points");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX=",0,"array of X points");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY=",0,"array of Y points");
   G__memvar_setup((void*)NULL,67,0,0,-1,G__defined_typename("Option_t"),-1,2,"fOption=",0,"Axis options");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TList),-1,-1,2,"fFunctions=",0,"Pointer to list of functions (fits and user)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TH1F),-1,-1,2,"fHistogram=",0,"Pointer to histogram used for drawing axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMaximum=",0,"Maximum value for plotting along y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMinimum=",0,"Minimum value for plotting along y");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGraphErrors */
static void G__setup_memvarTGraphErrors(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors));
   { TGraphErrors *p; p=(TGraphErrors*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fEX=",0,"array of X errors");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fEY=",0,"array of Y errors");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGraphAsymmErrors */
static void G__setup_memvarTGraphAsymmErrors(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors));
   { TGraphAsymmErrors *p; p=(TGraphAsymmErrors*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fEXlow=",0,"array of X low errors");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fEXhigh=",0,"array of X high errors");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fEYlow=",0,"array of Y low errors");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fEYhigh=",0,"array of Y high errors");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TLatex */
static void G__setup_memvarTLatex(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLatex));
   { TLatex *p; p=(TLatex*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fFactorSize=",0,"Relative size of subscripts and superscripts");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fFactorPos=",0,"Relative position of subscripts and superscripts");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLimitFactorSize=",0,"lower bound for subscripts/superscripts size");
   G__memvar_setup((void*)NULL,67,0,0,-1,G__defined_typename("Char_t"),-1,2,"fError=",0,"! error code");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fShow=",0,"is true during the second pass (Painting)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_s_FormSize),-1,-1,2,"fTabSize=",0,"! array of values for the different zones");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fOriginSize=",0,"Font size of the starting font");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTabMax=",0,"Maximum allocation for array fTabSize;");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPos=",0,"Current position in array fTabSize;");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMarker */
static void G__setup_memvarTMarker(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TMarker));
   { TMarker *p; p=(TMarker*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fX=",0,"X position of marker (left,center,etc..)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fY=",0,"Y position of marker (left,center,etc..)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPolyLine */
static void G__setup_memvarTPolyLine(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine));
   { TPolyLine *p; p=(TPolyLine*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fN=",0,"Number of points");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX=",0,"Array of X coordinates");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY=",0,"Array of Y coordinates");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TString),-1,-1,2,"fOption=",0,"options");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPolyMarker */
static void G__setup_memvarTPolyMarker(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker));
   { TPolyMarker *p; p=(TPolyMarker*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fN=",0,"number of points");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX=",0,"Array of X coordinates");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY=",0,"Array of Y coordinates");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TString),-1,-1,2,"fOption=",0,"options");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPaveLabel */
static void G__setup_memvarTPaveLabel(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel));
   { TPaveLabel *p; p=(TPaveLabel*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TString),-1,-1,2,"fLabel=",0,"Label written at the center of Pave");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPavesText */
static void G__setup_memvarTPavesText(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText));
   { TPavesText *p; p=(TPavesText*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpaves=",0,"Number of stacked paves");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TF2 */
static void G__setup_memvarTF2(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2));
   { TF2 *p; p=(TF2*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYmin=",0,"Lower bound for the range in y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYmax=",0,"Upper bound for the range in y");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpy=",0,"Number of points along y used for the graphical representation");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TArrayF),-1,-1,2,"fContour=",0,"Array to display contour levels");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TF3 */
static void G__setup_memvarTF3(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3));
   { TF3 *p; p=(TF3*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fZmin=",0,"Lower bound for the range in z");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fZmax=",0,"Upper bound for the range in z");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpz=",0,"Number of points along z used for the graphical representation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Graf1() {
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
static void G__setup_memfuncTColor(void) {
   /* TColor */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TColor));
   G__memfunc_setup("TColor",595,G__TColor_TColor_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TColor),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TColor",595,G__TColor_TColor_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TColor),-1,0,5,1,1,0,
"i - 'Int_t' 0 - color f - 'Float_t' 0 - r "
"f - 'Float_t' 0 - g f - 'Float_t' 0 - b "
"C - 'Text_t' 0 \"\" name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TColor",595,G__TColor_TColor_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TColor),-1,0,1,1,1,0,"u 'TColor' - 1 - color",(char*)NULL,(void*)NULL,0);
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
   G__memfunc_setup("DisplayColorTable",1725,G__TColor_DisplayColorTable_1_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TColor_DeclFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TColor_DeclFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TColor_ImplFileName_4_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TColor_ImplFileLine_5_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TColor_Class_Version_6_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TColor_Class_7_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TColor_Dictionary_8_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TColor_IsA_9_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TColor_ShowMembers_0_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TColor_Streamer_1_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TColor",721,G__TColor_wATColor_2_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTF1(void) {
   /* TF1 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1));
   G__memfunc_setup("TF1",203,G__TF1_TF1_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF1),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF1",203,G__TF1_TF1_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF1),-1,0,4,1,1,0,
"C - - 0 - name C - - 0 - formula "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF1",203,G__TF1_TF1_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF1),-1,0,5,1,1,0,
"C - - 0 - name Y - - 0 - fcn "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax "
"i - 'Int_t' 0 0 npar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF1",203,G__TF1_TF1_3_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF1),-1,0,5,1,1,0,
"C - - 0 - name Q - 'Double_t (*)(Double_t*, Double_t*)' 0 - fcn "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax "
"i - 'Int_t' 0 0 npar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF1",203,G__TF1_TF1_4_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF1),-1,0,1,1,1,0,"u 'TF1' - 1 - f1",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TF1_Browse_6_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TF1_Copy_7_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - f1",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Derivative",1043,G__TF1_Derivative_8_0,100,-1,G__defined_typename("Double_t"),0,3,1,1,0,
"d - 'Double_t' 0 - x D - 'Double_t' 0 0 params "
"f - 'Float_t' 0 0 epsilon",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TF1_DistancetoPrimitive_9_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TF1_Draw_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawCopy",809,G__TF1_DrawCopy_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawF1",517,G__TF1_DrawF1_2_1,121,-1,-1,0,4,1,1,0,
"C - - 0 - formula f - 'Float_t' 0 - xmin "
"f - 'Float_t' 0 - xmax C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPanel",894,G__TF1_DrawPanel_3_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Eval",392,G__TF1_Eval_4_1,100,-1,G__defined_typename("Double_t"),0,3,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 0 y "
"d - 'Double_t' 0 0 z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EvalPar",683,G__TF1_EvalPar_5_1,100,-1,G__defined_typename("Double_t"),0,2,1,1,0,
"D - 'Double_t' 0 - x D - 'Double_t' 0 0 params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TF1_ExecuteEvent_6_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetChisquare",1221,G__TF1_GetChisquare_7_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistogram",1230,G__TF1_GetHistogram_8_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TH1F),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNDF",504,G__TF1_GetNDF_9_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNpx",598,G__TF1_GetNpx_0_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMethodCall",1277,G__TF1_GetMethodCall_1_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TMethodCall),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNumberFitPoints",1833,G__TF1_GetNumberFitPoints_2_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParent",906,G__TF1_GetParent_3_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParError",1101,G__TF1_GetParError_4_2,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"i - 'Int_t' 0 - ipar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParLimits",1205,G__TF1_GetParLimits_5_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - ipar d - 'Double_t' 1 - parmin "
"d - 'Double_t' 1 - parmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetProb",691,G__TF1_GetProb_6_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRandom",897,G__TF1_GetRandom_7_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF1_GetRange_8_2,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF1_GetRange_9_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - xmax f - 'Float_t' 1 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF1_GetRange_0_3,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - zmin f - 'Float_t' 1 - xmax "
"f - 'Float_t' 1 - ymax f - 'Float_t' 1 - zmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSave",687,G__TF1_GetSave_1_3,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"D - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetXmin",700,G__TF1_GetXmin_2_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXmax",702,G__TF1_GetXmax_3_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitArgs",801,G__TF1_InitArgs_4_3,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - x D - 'Double_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF1_Integral_5_3,100,-1,G__defined_typename("Double_t"),0,4,1,1,0,
"f - 'Float_t' 0 - a f - 'Float_t' 0 - b "
"D - 'Double_t' 0 0 params f - 'Float_t' 0 0.000001 epsilon",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF1_Integral_6_3,100,-1,G__defined_typename("Double_t"),0,5,1,1,0,
"f - 'Float_t' 0 - ax f - 'Float_t' 0 - bx "
"f - 'Float_t' 0 - ay f - 'Float_t' 0 - by "
"f - 'Float_t' 0 0.000001 epsilon",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF1_Integral_7_3,100,-1,G__defined_typename("Double_t"),0,7,1,1,0,
"f - 'Float_t' 0 - ax f - 'Float_t' 0 - bx "
"f - 'Float_t' 0 - ay f - 'Float_t' 0 - by "
"f - 'Float_t' 0 - az f - 'Float_t' 0 - bz "
"f - 'Float_t' 0 0.000001 epsilon",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IntegralMultiple",1666,G__TF1_IntegralMultiple_8_3,100,-1,G__defined_typename("Double_t"),0,5,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - a "
"F - 'Float_t' 0 - b f - 'Float_t' 0 - epsilon "
"f - 'Float_t' 1 - relerr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TF1_Paint_9_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TF1_Print_0_4,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Save",399,G__TF1_Save_1_4,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TF1_SavePrimitive_2_4,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetChisquare",1233,G__TF1_SetChisquare_3_4,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - chi2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMaximum",1034,G__TF1_SetMaximum_4_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 -1111 maximum","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetMinimum",1032,G__TF1_SetMinimum_5_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 -1111 minimum","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetNumberFitPoints",1845,G__TF1_SetNumberFitPoints_6_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - npfits",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNpx",610,G__TF1_SetNpx_7_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 100 npx","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetParError",1113,G__TF1_SetParError_8_4,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - ipar d - 'Double_t' 0 - error",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParLimits",1217,G__TF1_SetParLimits_9_4,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - ipar d - 'Double_t' 0 - parmin "
"d - 'Double_t' 0 - parmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParent",918,G__TF1_SetParent_0_5,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 0 p",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF1_SetRange_1_5,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - xmax","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF1_SetRange_2_5,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF1_SetRange_3_5,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - zmin f - 'Float_t' 0 - xmax "
"f - 'Float_t' 0 - ymax f - 'Float_t' 0 - zmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Update",611,G__TF1_Update_4_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TF1_DeclFileName_5_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TF1_DeclFileLine_6_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TF1_ImplFileName_7_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TF1_ImplFileLine_8_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TF1_Class_Version_9_5,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TF1_Class_0_6,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TF1_Dictionary_1_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TF1_IsA_2_6,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TF1_ShowMembers_3_6,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TF1_Streamer_4_6,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TF1",329,G__TF1_wATF1_5_6,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttPad(void) {
   /* TAttPad */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TAttPad));
   G__memfunc_setup("TAttPad",658,G__TAttPad_TAttPad_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TAttPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
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
   G__memfunc_setup("Reset",515,G__TAttPad_Reset_1_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Class",502,G__TAttPad_Class_4_4,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttPad_Dictionary_5_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttPad_IsA_6_4,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttPad_ShowMembers_7_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttPad_Streamer_8_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttPad",658,G__TAttPad_TAttPad_9_4,(int)('i'),G__get_linked_tagnum(&G__G__Graf1LN_TAttPad),-1,0,1,1,1,0,"u 'TAttPad' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttPad",784,G__TAttPad_wATAttPad_0_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttCanvas(void) {
   /* TAttCanvas */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TAttCanvas));
   G__memfunc_setup("TAttCanvas",985,G__TAttCanvas_TAttCanvas_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TAttCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttCanvas_Copy_2_0,121,-1,-1,0,1,1,1,0,"u 'TAttCanvas' - 1 - attcanvas",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAdate",767,G__TAttCanvas_GetAdate_3_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitleFromTop",1513,G__TAttCanvas_GetTitleFromTop_4_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXBetween",1090,G__TAttCanvas_GetXBetween_5_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXdate",790,G__TAttCanvas_GetXdate_6_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetYBetween",1091,G__TAttCanvas_GetYBetween_7_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetYdate",791,G__TAttCanvas_GetYdate_8_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TAttCanvas_Print_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Reset",515,G__TAttCanvas_Reset_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAdate",779,G__TAttCanvas_SetAdate_1_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - adate",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTitleFromTop",1525,G__TAttCanvas_SetTitleFromTop_2_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - titlefromtop",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetXBetween",1102,G__TAttCanvas_SetXBetween_3_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - xbetween",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetXdate",802,G__TAttCanvas_SetXdate_4_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - xdate",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetYBetween",1103,G__TAttCanvas_SetYBetween_5_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - ybetween",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetYdate",803,G__TAttCanvas_SetYdate_6_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - ydate",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttCanvas_DeclFileName_7_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttCanvas_DeclFileLine_8_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttCanvas_ImplFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttCanvas_ImplFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttCanvas_Class_Version_1_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttCanvas_Class_2_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttCanvas_Dictionary_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttCanvas_IsA_4_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttCanvas_ShowMembers_5_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttCanvas_Streamer_6_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttCanvas",985,G__TAttCanvas_TAttCanvas_7_2,(int)('i'),G__get_linked_tagnum(&G__G__Graf1LN_TAttCanvas),-1,0,1,1,1,0,"u 'TAttCanvas' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttCanvas",1111,G__TAttCanvas_wATAttCanvas_8_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTEllipse(void) {
   /* TEllipse */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TEllipse));
   G__memfunc_setup("TEllipse",802,G__TEllipse_TEllipse_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TEllipse),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TEllipse",802,G__TEllipse_TEllipse_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TEllipse),-1,0,7,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - r1 f - 'Float_t' 0 0 r2 "
"f - 'Float_t' 0 0 phimin f - 'Float_t' 0 360 phimax "
"f - 'Float_t' 0 0 theta",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TEllipse",802,G__TEllipse_TEllipse_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TEllipse),-1,0,1,1,1,0,"u 'TEllipse' - 1 - ellipse",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TEllipse_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - ellipse",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TEllipse_DistancetoPrimitive_5_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TEllipse_Draw_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawEllipse",1116,G__TEllipse_DrawEllipse_7_0,121,-1,-1,0,7,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - r1 f - 'Float_t' 0 - r2 "
"f - 'Float_t' 0 - phimin f - 'Float_t' 0 - phimax "
"f - 'Float_t' 0 - theta",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TEllipse_ExecuteEvent_8_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetX1",425,G__TEllipse_GetX1_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY1",426,G__TEllipse_GetY1_0_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetR1",419,G__TEllipse_GetR1_1_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetR2",420,G__TEllipse_GetR2_2_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPhimin",901,G__TEllipse_GetPhimin_3_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPhimax",903,G__TEllipse_GetPhimax_4_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTheta",790,G__TEllipse_GetTheta_5_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TEllipse_ls_6_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TEllipse_Paint_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintEllipse",1226,G__TEllipse_PaintEllipse_8_1,121,-1,-1,0,7,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - r1 f - 'Float_t' 0 - r2 "
"f - 'Float_t' 0 - phimin f - 'Float_t' 0 - phimax "
"f - 'Float_t' 0 - theta",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TEllipse_Print_9_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TEllipse_SavePrimitive_0_2,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPhimin",913,G__TEllipse_SetPhimin_1_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 phi","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetPhimax",915,G__TEllipse_SetPhimax_2_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 360 phi","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetR1",431,G__TEllipse_SetR1_3_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - r1","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetR2",432,G__TEllipse_SetR2_4_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - r2","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTheta",802,G__TEllipse_SetTheta_5_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 theta","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetX1",437,G__TEllipse_SetX1_6_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - x1","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetY1",438,G__TEllipse_SetY1_7_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - y1","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TEllipse_DeclFileName_8_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TEllipse_DeclFileLine_9_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TEllipse_ImplFileName_0_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TEllipse_ImplFileLine_1_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TEllipse_Class_Version_2_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TEllipse_Class_3_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TEllipse_Dictionary_4_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TEllipse_IsA_5_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TEllipse_ShowMembers_6_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TEllipse_Streamer_7_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TEllipse",928,G__TEllipse_wATEllipse_8_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTArc(void) {
   /* TArc */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArc));
   G__memfunc_setup("TArc",362,G__TArc_TArc_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TArc),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TArc",362,G__TArc_TArc_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TArc),-1,0,5,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - radius f - 'Float_t' 0 0 phimin "
"f - 'Float_t' 0 360 phimax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TArc",362,G__TArc_TArc_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TArc),-1,0,1,1,1,0,"u 'TArc' - 1 - arc",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TArc_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - arc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawArc",676,G__TArc_DrawArc_5_0,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - radius f - 'Float_t' 0 0 phimin "
"f - 'Float_t' 0 360 phimax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TArc_SavePrimitive_6_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TArc_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TArc_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TArc_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TArc_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TArc_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TArc_Class_2_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TArc_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TArc_IsA_4_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TArc_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TArc_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TArc",488,G__TArc_wATArc_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTLine(void) {
   /* TLine */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLine));
   G__memfunc_setup("DistancetoPrimitive",1991,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,2,1,2,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TLine",476,G__TLine_TLine_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TLine),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLine",476,G__TLine_TLine_3_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TLine),-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLine",476,G__TLine_TLine_4_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TLine),-1,0,1,1,1,0,"u 'TLine' - 1 - line",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TLine_Copy_6_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - line",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TLine_Draw_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TLine_DrawLine_8_0,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetX1",425,G__TLine_GetX1_9_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX2",426,G__TLine_GetX2_0_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY1",426,G__TLine_GetY1_1_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY2",427,G__TLine_GetY2_2_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TLine_ls_3_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TLine_Paint_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintLine",900,G__TLine_PaintLine_5_1,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintLineNDC",1113,G__TLine_PaintLineNDC_6_1,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - u1 f - 'Coord_t' 0 - v1 "
"f - 'Coord_t' 0 - u2 f - 'Coord_t' 0 - v2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TLine_Print_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TLine_SavePrimitive_8_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetX1",437,G__TLine_SetX1_9_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x1",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetX2",438,G__TLine_SetX2_0_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetY1",438,G__TLine_SetY1_1_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y1",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetY2",439,G__TLine_SetY2_2_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TLine_DeclFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TLine_DeclFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TLine_ImplFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TLine_ImplFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TLine_Class_Version_7_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TLine_Class_8_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TLine_Dictionary_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TLine_IsA_0_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TLine_ShowMembers_1_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TLine_Streamer_2_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TLine",602,G__TLine_wATLine_3_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTArrow(void) {
   /* TArrow */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArrow));
   G__memfunc_setup("TArrow",607,G__TArrow_TArrow_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TArrow),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TArrow",607,G__TArrow_TArrow_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TArrow),-1,0,6,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2 "
"f - 'Float_t' 0 0.05 arrowsize C - 'Option_t' 0 \">\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TArrow",607,G__TArrow_TArrow_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TArrow),-1,0,1,1,1,0,"u 'TArrow' - 1 - arrow",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TArrow_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - arrow",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TArrow_Draw_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawArrow",921,G__TArrow_DrawArrow_6_0,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2 "
"f - 'Float_t' 0 0.05 arrowsize C - 'Option_t' 0 \">\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAngle",775,G__TArrow_GetAngle_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetArrowSize",1222,G__TArrow_GetArrowSize_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOption",921,G__TArrow_GetOption_9_0,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TArrow_Paint_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintArrow",1031,G__TArrow_PaintArrow_1_1,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2 "
"f - 'Float_t' 0 0.05 arrowsize C - 'Option_t' 0 \">\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TArrow_SavePrimitive_2_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAngle",787,G__TArrow_SetAngle_3_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 60 angle","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetArrowSize",1234,G__TArrow_SetArrowSize_4_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.05 arrowsize","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetOption",933,G__TArrow_SetOption_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \">\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TArrow_DeclFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TArrow_DeclFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TArrow_ImplFileName_8_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TArrow_ImplFileLine_9_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TArrow_Class_Version_0_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TArrow_Class_1_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TArrow_Dictionary_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TArrow_IsA_3_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TArrow_ShowMembers_4_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TArrow_Streamer_5_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TArrow",733,G__TArrow_wATArrow_6_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTBox(void) {
   /* TBox */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TBox));
   G__memfunc_setup("DistancetoPrimitive",1991,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,2,1,2,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TBox",381,G__TBox_TBox_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TBox),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBox",381,G__TBox_TBox_3_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TBox),-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBox",381,G__TBox_TBox_4_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TBox),-1,0,1,1,1,0,"u 'TBox' - 1 - box",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TBox_Copy_6_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - box",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TBox_Draw_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBox",695,G__TBox_DrawBox_8_0,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsBeingResized",1399,G__TBox_IsBeingResized_9_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX1",425,G__TBox_GetX1_0_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX2",426,G__TBox_GetX2_1_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY1",426,G__TBox_GetY1_2_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY2",427,G__TBox_GetY2_3_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HideToolTip",1093,G__TBox_HideToolTip_4_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TBox_ls_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TBox_Paint_6_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintBox",805,G__TBox_PaintBox_7_1,121,-1,-1,0,5,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TBox_Print_8_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TBox_SavePrimitive_9_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetX1",437,G__TBox_SetX1_0_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x1",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetX2",438,G__TBox_SetX2_1_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetY1",438,G__TBox_SetY1_2_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y1",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetY2",439,G__TBox_SetY2_3_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetToolTipText",1436,G__TBox_SetToolTipText_4_2,121,-1,-1,0,2,1,1,0,
"C - - 0 - text l - 'Long_t' 0 1000 delayms",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TBox_DeclFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBox_DeclFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBox_ImplFileName_7_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBox_ImplFileLine_8_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBox_Class_Version_9_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBox_Class_0_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TBox_Dictionary_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBox_IsA_2_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBox_ShowMembers_3_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBox_Streamer_4_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TBox",507,G__TBox_wATBox_5_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPave(void) {
   /* TPave */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPave));
   G__memfunc_setup("TPave",480,G__TPave_TPave_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPave),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPave",480,G__TPave_TPave_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPave),-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"i - 'Int_t' 0 4 bordersize C - 'Option_t' 0 \"br\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPave",480,G__TPave_TPave_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPave),-1,0,1,1,1,0,"u 'TPave' - 1 - pave",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TPave_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - pave",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ConvertNDCtoPad",1454,G__TPave_ConvertNDCtoPad_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPave_Draw_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPave",794,G__TPave_DrawPave_7_0,121,-1,-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"i - 'Int_t' 0 4 bordersize C - 'Option_t' 0 \"br\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TPave_ExecuteEvent_8_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBorderSize",1305,G__TPave_GetBorderSize_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCornerRadius",1521,G__TPave_GetCornerRadius_0_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TPave_GetName_1_1,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__TPave_GetOption_2_1,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetX1NDC",638,G__TPave_GetX1NDC_3_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX2NDC",639,G__TPave_GetX2NDC_4_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY1NDC",639,G__TPave_GetY1NDC_5_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY2NDC",640,G__TPave_GetY2NDC_6_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TPave_ls_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPave_Paint_8_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPave",904,G__TPave_PaintPave_9_1,121,-1,-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"i - 'Int_t' 0 4 bordersize C - 'Option_t' 0 \"br\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPaveArc",1182,G__TPave_PaintPaveArc_0_2,121,-1,-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"i - 'Int_t' 0 4 bordersize C - 'Option_t' 0 \"br\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPave_Print_1_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPave_SavePrimitive_2_2,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBorderSize",1317,G__TPave_SetBorderSize_3_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 4 bordersize","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetCornerRadius",1533,G__TPave_SetCornerRadius_4_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.2 rad","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetName",685,G__TPave_SetName_5_2,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" name","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetOption",933,G__TPave_SetOption_6_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"br\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetX1NDC",650,G__TPave_SetX1NDC_7_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x1",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetX2NDC",651,G__TPave_SetX2NDC_8_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetY1NDC",651,G__TPave_SetY1NDC_9_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y1",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetY2NDC",652,G__TPave_SetY2NDC_0_3,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPave_DeclFileName_1_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPave_DeclFileLine_2_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPave_ImplFileName_3_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPave_ImplFileLine_4_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPave_Class_Version_5_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPave_Class_6_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPave_Dictionary_7_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPave_IsA_8_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPave_ShowMembers_9_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPave_Streamer_0_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPave",606,G__TPave_wATPave_1_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTText(void) {
   /* TText */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TText));
   G__memfunc_setup("TText",505,G__TText_TText_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TText),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TText",505,G__TText_TText_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TText),-1,0,3,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TText",505,G__TText_TText_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TText),-1,0,1,1,1,0,"u 'TText' - 1 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TText_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TText_DistancetoPrimitive_5_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TText_Draw_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawText",819,G__TText_DrawText_7_0,121,-1,-1,0,3,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TText_ExecuteEvent_8_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetX",376,G__TText_GetX_9_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY",377,G__TText_GetY_0_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TText_ls_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TText_Paint_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintText",929,G__TText_PaintText_3_1,121,-1,-1,0,3,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintTextNDC",1142,G__TText_PaintTextNDC_4_1,121,-1,-1,0,3,1,1,0,
"f - 'Coord_t' 0 - u f - 'Coord_t' 0 - v "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TText_Print_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TText_SavePrimitive_6_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNDC",513,G__TText_SetNDC_7_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE isNDC",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetText",721,G__TText_SetText_8_1,121,-1,-1,0,3,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y "
"C - 'Text_t' 0 - text","*MENU* *ARGS={x=>fX,y=>fY,text=>fTitle}",(void*)NULL,1);
   G__memfunc_setup("SetX",388,G__TText_SetX_9_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetY",389,G__TText_SetY_0_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TText_DeclFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TText_DeclFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TText_ImplFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TText_ImplFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TText_Class_Version_5_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TText_Class_6_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TText_Dictionary_7_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TText_IsA_8_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TText_ShowMembers_9_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TText_Streamer_0_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TText",631,G__TText_wATText_1_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPaveText(void) {
   /* TPaveText */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText));
   G__memfunc_setup("TPaveText",901,G__TPaveText_TPaveText_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPaveText",901,G__TPaveText_TPaveText_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),-1,0,5,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"C - 'Option_t' 0 \"br\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPaveText",901,G__TPaveText_TPaveText_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),-1,0,1,1,1,0,"u 'TPaveText' - 1 - pavetext",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddBox",562,G__TPaveText_AddBox_4_0,85,G__get_linked_tagnum(&G__G__Graf1LN_TBox),-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2","*MENU*",(void*)NULL,1);
   G__memfunc_setup("AddLine",657,G__TPaveText_AddLine_5_0,85,G__get_linked_tagnum(&G__G__Graf1LN_TLine),-1,0,4,1,1,0,
"f - 'Float_t' 0 0 x1 f - 'Float_t' 0 0 y1 "
"f - 'Float_t' 0 0 x2 f - 'Float_t' 0 0 y2","*MENU*",(void*)NULL,1);
   G__memfunc_setup("AddText",686,G__TPaveText_AddText_6_0,85,G__get_linked_tagnum(&G__G__Graf1LN_TText),-1,0,3,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"C - 'Text_t' 0 - label",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddText",686,G__TPaveText_AddText_7_0,85,G__get_linked_tagnum(&G__G__Graf1LN_TText),-1,0,1,1,1,0,"C - 'Text_t' 0 - label",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Clear",487,G__TPaveText_Clear_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TPaveText_Copy_9_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - pavetext",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteText",1016,G__TPaveText_DeleteText_0_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPaveText_Draw_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawFile",782,G__TPaveText_DrawFile_2_1,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 - filename C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EditText",811,G__TPaveText_EditText_3_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("GetLine",680,G__TPaveText_GetLine_4_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TText),-1,0,1,1,1,0,"i - 'Int_t' 0 - number",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLineWith",1092,G__TPaveText_GetLineWith_5_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TText),-1,0,1,1,1,0,"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetListOfLines",1388,G__TPaveText_GetListOfLines_6_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMargin",894,G__TPaveText_GetMargin_7_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetObject",887,G__TPaveText_GetObject_8_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertText",1050,G__TPaveText_InsertText_9_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - label","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPaveText_Paint_0_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPrimitives",1576,G__TPaveText_PaintPrimitives_1_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPaveText_Print_2_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadFile",764,G__TPaveText_ReadFile_3_2,121,-1,-1,0,4,1,1,0,
"C - 'Text_t' 0 - filename C - 'Option_t' 0 \"\" option "
"i - 'Int_t' 0 50 nlines i - 'Int_t' 0 0 fromline","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SaveLines",906,G__TPaveText_SaveLines_4_2,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPaveText_SavePrimitive_5_2,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAllWith",993,G__TPaveText_SetAllWith_6_2,121,-1,-1,0,3,1,1,0,
"C - 'Text_t' 0 - text C - 'Option_t' 0 - option "
"f - 'Float_t' 0 - value","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetMargin",906,G__TPaveText_SetMargin_7_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.05 margin","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPaveText_DeclFileName_8_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPaveText_DeclFileLine_9_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPaveText_ImplFileName_0_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPaveText_ImplFileLine_1_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPaveText_Class_Version_2_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPaveText_Class_3_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPaveText_Dictionary_4_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPaveText_IsA_5_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPaveText_ShowMembers_6_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPaveText_Streamer_7_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPaveText",1027,G__TPaveText_wATPaveText_8_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDiamond(void) {
   /* TDiamond */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond));
   G__memfunc_setup("TDiamond",784,G__TDiamond_TDiamond_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDiamond",784,G__TDiamond_TDiamond_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDiamond",784,G__TDiamond_TDiamond_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),-1,0,1,1,1,0,"u 'TDiamond' - 1 - diamond",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TDiamond_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - diamond",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TDiamond_DistancetoPrimitive_5_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TDiamond_Draw_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TDiamond_ExecuteEvent_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TDiamond_Paint_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TDiamond_SavePrimitive_9_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TDiamond_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDiamond_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDiamond_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDiamond_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDiamond_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDiamond_Class_5_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TDiamond_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDiamond_IsA_7_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDiamond_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDiamond_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TDiamond",910,G__TDiamond_wATDiamond_0_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTWbox(void) {
   /* TWbox */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TWbox));
   G__memfunc_setup("TWbox",500,G__TWbox_TWbox_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TWbox),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TWbox",500,G__TWbox_TWbox_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TWbox),-1,0,7,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"s - 'Color_t' 0 18 color s - 'Short_t' 0 5 bordersize "
"s - 'Short_t' 0 1 bordermode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TWbox",500,G__TWbox_TWbox_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TWbox),-1,0,1,1,1,0,"u 'TWbox' - 1 - wbox",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TWbox_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - wbox",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TWbox_Draw_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawWbox",814,G__TWbox_DrawWbox_6_0,121,-1,-1,0,7,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"s - 'Color_t' 0 33 color s - 'Short_t' 0 5 bordersize "
"s - 'Short_t' 0 -1 bordermode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TWbox_ExecuteEvent_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBorderMode",1283,G__TWbox_GetBorderMode_8_0,115,-1,G__defined_typename("Short_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBorderSize",1305,G__TWbox_GetBorderSize_9_0,115,-1,G__defined_typename("Short_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDarkColor",1185,G__TWbox_GetDarkColor_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLightColor",1303,G__TWbox_GetLightColor_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Paint",508,G__TWbox_Paint_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintFrame",999,G__TWbox_PaintFrame_3_1,121,-1,-1,0,8,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"s - 'Color_t' 0 - color s - 'Short_t' 0 - bordersize "
"s - 'Short_t' 0 - bordermode b - 'Bool_t' 0 - tops",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintWbox",924,G__TWbox_PaintWbox_4_1,121,-1,-1,0,7,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"s - 'Color_t' 0 33 color s - 'Short_t' 0 5 bordersize "
"s - 'Short_t' 0 -1 bordermode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TWbox_Print_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TWbox_SavePrimitive_6_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBorderMode",1295,G__TWbox_SetBorderMode_7_1,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordermode","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetBorderSize",1317,G__TWbox_SetBorderSize_8_1,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordersize","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TWbox_DeclFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TWbox_DeclFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TWbox_ImplFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TWbox_ImplFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TWbox_Class_Version_3_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TWbox_Class_4_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TWbox_Dictionary_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TWbox_IsA_6_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TWbox_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TWbox_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TWbox",626,G__TWbox_wATWbox_9_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFrame(void) {
   /* TFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFrame));
   G__memfunc_setup("TFrame",575,G__TFrame_TFrame_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TFrame),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFrame",575,G__TFrame_TFrame_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TFrame),-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFrame",575,G__TFrame_TFrame_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TFrame),-1,0,1,1,1,0,"u 'TFrame' - 1 - frame",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TFrame_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - frame",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TFrame_Draw_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TFrame_ExecuteEvent_6_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TFrame_Paint_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Pop",303,G__TFrame_Pop_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TFrame_SavePrimitive_9_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TFrame_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFrame_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFrame_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFrame_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFrame_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFrame_Class_5_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TFrame_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFrame_IsA_7_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFrame_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFrame_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TFrame",701,G__TFrame_wATFrame_0_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGaxis(void) {
   /* TGaxis */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGaxis));
   G__memfunc_setup("TGaxis",592,G__TGaxis_TGaxis_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TGaxis),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGaxis",592,G__TGaxis_TGaxis_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TGaxis),-1,0,9,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax "
"f - 'Float_t' 0 - wmin f - 'Float_t' 0 - wmax "
"i - 'Int_t' 0 510 ndiv C - 'Option_t' 0 \"\" chopt "
"f - 'Float_t' 0 0 gridlength",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AdjustBinSize",1311,G__TGaxis_AdjustBinSize_3_0,121,-1,-1,0,7,1,1,0,
"f - 'Float_t' 0 - A1 f - 'Float_t' 0 - A2 "
"i - 'Int_t' 0 - nold f - 'Float_t' 1 - BinLow "
"f - 'Float_t' 1 - BinHigh i - 'Int_t' 1 - nbins "
"f - 'Float_t' 1 - BinWidth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TGaxis_Draw_4_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawAxis",803,G__TGaxis_DrawAxis_5_0,121,-1,-1,0,9,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax "
"f - 'Float_t' 0 - wmin f - 'Float_t' 0 - wmax "
"i - 'Int_t' 0 510 ndiv C - 'Option_t' 0 \"\" chopt "
"f - 'Float_t' 0 0 gridlength",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGridLength",1288,G__TGaxis_GetGridLength_6_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelFont",1175,G__TGaxis_GetLabelFont_7_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelOffset",1383,G__TGaxis_GetLabelOffset_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelSize",1179,G__TGaxis_GetLabelSize_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitleOffset",1417,G__TGaxis_GetTitleOffset_0_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitleSize",1213,G__TGaxis_GetTitleSize_1_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TGaxis_GetName_2_1,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TGaxis_GetTitle_3_1,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNdiv",689,G__TGaxis_GetNdiv_4_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWmin",699,G__TGaxis_GetWmin_5_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWmax",701,G__TGaxis_GetWmax_6_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTickSize",1094,G__TGaxis_GetTickSize_7_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LabelsLimits",1221,G__TGaxis_LabelsLimits_8_1,121,-1,-1,0,3,1,1,0,
"C - - 0 - label i - 'Int_t' 1 - first "
"i - 'Int_t' 1 - last",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Optimize",849,G__TGaxis_Optimize_9_1,121,-1,-1,0,7,1,1,0,
"f - 'Float_t' 0 - A1 f - 'Float_t' 0 - A2 "
"i - 'Int_t' 0 - nold f - 'Float_t' 1 - BinLow "
"f - 'Float_t' 1 - BinHigh i - 'Int_t' 1 - nbins "
"f - 'Float_t' 1 - BWID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TGaxis_Paint_0_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintAxis",913,G__TGaxis_PaintAxis_1_2,121,-1,-1,0,9,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax "
"f - 'Float_t' 1 - wmin f - 'Float_t' 1 - wmax "
"i - 'Int_t' 1 - ndiv C - 'Option_t' 0 \"\" chopt "
"f - 'Float_t' 0 0 gridlength",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Rotate",623,G__TGaxis_Rotate_2_2,121,-1,-1,0,8,1,1,0,
"f - 'Float_t' 0 - X f - 'Float_t' 0 - Y "
"f - 'Float_t' 0 - CFI f - 'Float_t' 0 - SFI "
"f - 'Float_t' 0 - XT f - 'Float_t' 0 - YT "
"f - 'Float_t' 1 - U f - 'Float_t' 1 - V",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TGaxis_SavePrimitive_3_2,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOption",933,G__TGaxis_SetOption_4_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelFont",1187,G__TGaxis_SetLabelFont_5_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - labelfont","*MENU*",(void*)NULL,0);
   G__memfunc_setup("SetLabelOffset",1395,G__TGaxis_SetLabelOffset_6_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - labeloffset","*MENU*",(void*)NULL,0);
   G__memfunc_setup("SetLabelSize",1191,G__TGaxis_SetLabelSize_7_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - labelsize","*MENU*",(void*)NULL,0);
   G__memfunc_setup("SetName",685,G__TGaxis_SetName_8_2,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - name","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTickSize",1106,G__TGaxis_SetTickSize_9_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - ticksize","*MENU*",(void*)NULL,0);
   G__memfunc_setup("SetGridLength",1300,G__TGaxis_SetGridLength_0_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - gridlength",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitle",814,G__TGaxis_SetTitle_1_3,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" title","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTitleOffset",1429,G__TGaxis_SetTitleOffset_2_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 titleoffset","*MENU*",(void*)NULL,0);
   G__memfunc_setup("SetTitleSize",1225,G__TGaxis_SetTitleSize_3_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - titlesize","*MENU*",(void*)NULL,0);
   G__memfunc_setup("SetWmin",711,G__TGaxis_SetWmin_4_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - wmin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWmax",713,G__TGaxis_SetWmax_5_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - wmax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGaxis_DeclFileName_6_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGaxis_DeclFileLine_7_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGaxis_ImplFileName_8_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGaxis_ImplFileLine_9_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGaxis_Class_Version_0_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGaxis_Class_1_4,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGaxis_Dictionary_2_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGaxis_IsA_3_4,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGaxis_ShowMembers_4_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGaxis_Streamer_5_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGaxis",592,G__TGaxis_TGaxis_6_4,(int)('i'),G__get_linked_tagnum(&G__G__Graf1LN_TGaxis),-1,0,1,1,1,0,"u 'TGaxis' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGaxis",718,G__TGaxis_wATGaxis_7_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGraph(void) {
   /* TGraph */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraph));
   G__memfunc_setup("TGraph",582,G__TGraph_TGraph_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TGraph),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGraph",582,G__TGraph_TGraph_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TGraph),-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 0 x "
"F - 'Float_t' 0 0 y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ComputeLogs",1138,G__TGraph_ComputeLogs_3_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - npoints i - 'Int_t' 0 - opt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ComputeRange",1226,G__TGraph_ComputeRange_4_0,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - xmax f - 'Float_t' 1 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TGraph_DistancetoPrimitive_5_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TGraph_Draw_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawGraph",896,G__TGraph_DrawGraph_7_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPanel",894,G__TGraph_DrawPanel_8_0,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TGraph_ExecuteEvent_9_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Fit",291,G__TGraph_Fit_0_1,121,-1,-1,0,3,1,1,0,
"C - 'Text_t' 0 - formula C - 'Option_t' 0 \"\" option "
"C - 'Option_t' 0 \"\" goption","*MENU*",(void*)NULL,1);
   G__memfunc_setup("FitPanel",787,G__TGraph_FitPanel_1_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("GetErrorX",898,G__TGraph_GetErrorX_2_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetErrorY",899,G__TGraph_GetErrorY_3_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHistogram",1230,G__TGraph_GetHistogram_4_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TH1F),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfFunctions",1834,G__TGraph_GetListOfFunctions_5_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetN",366,G__TGraph_GetN_6_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX",376,G__TGraph_GetX_7_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY",377,G__TGraph_GetY_8_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXaxis",813,G__TGraph_GetXaxis_9_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TAxis),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetYaxis",814,G__TGraph_GetYaxis_0_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TAxis),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPoint",810,G__TGraph_GetPoint_1_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - i f - 'Float_t' 1 - x "
"f - 'Float_t' 1 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitExpo",816,G__TGraph_InitExpo_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitGaus",804,G__TGraph_InitGaus_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitPolynom",1154,G__TGraph_InitPolynom_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LeastSquareFit",1421,G__TGraph_LeastSquareFit_5_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n i - 'Int_t' 0 - m "
"D - 'Double_t' 0 - a",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LeastSquareLinearFit",2024,G__TGraph_LeastSquareLinearFit_6_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - ndata d - 'Double_t' 1 - a0 "
"d - 'Double_t' 1 - a1 i - 'Int_t' 1 - ifail",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TGraph_Paint_7_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintGraph",1006,G__TGraph_PaintGraph_8_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - npoints F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintGrapHist",1310,G__TGraph_PaintGrapHist_9_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - npoints F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TGraph_Print_0_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TGraph_SavePrimitive_1_3,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMaximum",1034,G__TGraph_SetMaximum_2_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 -1111 maximum","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetMinimum",1032,G__TGraph_SetMinimum_3_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 -1111 minimum","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetPoint",822,G__TGraph_SetPoint_4_3,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - i f - 'Float_t' 0 - x "
"f - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Smooth",634,G__TGraph_Smooth_5_3,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - npoints F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y i - 'Int_t' 0 - drawtype",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Zero",416,G__TGraph_Zero_6_3,121,-1,-1,0,7,1,1,0,
"i - 'Int_t' 1 - k f - 'Float_t' 0 - AZ "
"f - 'Float_t' 0 - BZ f - 'Float_t' 0 - E2 "
"f - 'Float_t' 1 - X f - 'Float_t' 1 - Y "
"i - 'Int_t' 0 - maxiterations",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGraph_DeclFileName_7_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGraph_DeclFileLine_8_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGraph_ImplFileName_9_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGraph_ImplFileLine_0_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGraph_Class_Version_1_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGraph_Class_2_4,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGraph_Dictionary_3_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGraph_IsA_4_4,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGraph_ShowMembers_5_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGraph_Streamer_6_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGraph",582,G__TGraph_TGraph_7_4,(int)('i'),G__get_linked_tagnum(&G__G__Graf1LN_TGraph),-1,0,1,1,1,0,"u 'TGraph' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGraph",708,G__TGraph_wATGraph_8_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGraphErrors(void) {
   /* TGraphErrors */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors));
   G__memfunc_setup("TGraphErrors",1219,G__TGraphErrors_TGraphErrors_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGraphErrors",1219,G__TGraphErrors_TGraphErrors_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),-1,0,5,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 0 x "
"F - 'Float_t' 0 0 y F - 'Float_t' 0 0 ex "
"F - 'Float_t' 0 0 ey",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ComputeRange",1226,G__TGraphErrors_ComputeRange_3_0,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - xmax f - 'Float_t' 1 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetErrorX",898,G__TGraphErrors_GetErrorX_4_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetErrorY",899,G__TGraphErrors_GetErrorY_5_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEX",445,G__TGraphErrors_GetEX_6_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEY",446,G__TGraphErrors_GetEY_7_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Paint",508,G__TGraphErrors_Paint_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TGraphErrors_Print_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TGraphErrors_SavePrimitive_0_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoint",822,G__TGraphErrors_SetPoint_1_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - i f - 'Float_t' 0 - x "
"f - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPointError",1344,G__TGraphErrors_SetPointError_2_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - i f - 'Float_t' 0 - ex "
"f - 'Float_t' 0 - ey",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGraphErrors_DeclFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGraphErrors_DeclFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGraphErrors_ImplFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGraphErrors_ImplFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGraphErrors_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGraphErrors_Class_8_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGraphErrors_Dictionary_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGraphErrors_IsA_0_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGraphErrors_ShowMembers_1_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGraphErrors_Streamer_2_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGraphErrors",1219,G__TGraphErrors_TGraphErrors_3_2,(int)('i'),G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),-1,0,1,1,1,0,"u 'TGraphErrors' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGraphErrors",1345,G__TGraphErrors_wATGraphErrors_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGraphAsymmErrors(void) {
   /* TGraphAsymmErrors */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors));
   G__memfunc_setup("TGraphAsymmErrors",1738,G__TGraphAsymmErrors_TGraphAsymmErrors_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGraphAsymmErrors",1738,G__TGraphAsymmErrors_TGraphAsymmErrors_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),-1,0,7,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 0 x "
"F - 'Float_t' 0 0 y F - 'Float_t' 0 0 exl "
"F - 'Float_t' 0 0 exh F - 'Float_t' 0 0 eyl "
"F - 'Float_t' 0 0 eyh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ComputeRange",1226,G__TGraphAsymmErrors_ComputeRange_3_0,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - xmax f - 'Float_t' 1 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetErrorX",898,G__TGraphAsymmErrors_GetErrorX_4_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetErrorY",899,G__TGraphAsymmErrors_GetErrorY_5_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEXlow",783,G__TGraphAsymmErrors_GetEXlow_6_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEXhigh",861,G__TGraphAsymmErrors_GetEXhigh_7_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEYlow",784,G__TGraphAsymmErrors_GetEYlow_8_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEYhigh",862,G__TGraphAsymmErrors_GetEYhigh_9_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Paint",508,G__TGraphAsymmErrors_Paint_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TGraphAsymmErrors_Print_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" chopt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TGraphAsymmErrors_SavePrimitive_2_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoint",822,G__TGraphAsymmErrors_SetPoint_3_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - i f - 'Float_t' 0 - x "
"f - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPointError",1344,G__TGraphAsymmErrors_SetPointError_4_1,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - i f - 'Float_t' 0 - exl "
"f - 'Float_t' 0 - exh f - 'Float_t' 0 - eyl "
"f - 'Float_t' 0 - eyh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGraphAsymmErrors_DeclFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGraphAsymmErrors_DeclFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGraphAsymmErrors_ImplFileName_7_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGraphAsymmErrors_ImplFileLine_8_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGraphAsymmErrors_Class_Version_9_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGraphAsymmErrors_Class_0_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGraphAsymmErrors_Dictionary_1_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGraphAsymmErrors_IsA_2_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGraphAsymmErrors_ShowMembers_3_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGraphAsymmErrors_Streamer_4_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGraphAsymmErrors",1738,G__TGraphAsymmErrors_TGraphAsymmErrors_5_2,(int)('i'),G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),-1,0,1,1,1,0,"u 'TGraphAsymmErrors' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGraphAsymmErrors",1864,G__TGraphAsymmErrors_wATGraphAsymmErrors_6_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTLatex(void) {
   /* TLatex */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLatex));
   G__memfunc_setup("Analyse",717,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__Graf1LN_FormSize),-1,0,5,1,2,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"u 's_TextSpec' - 0 - spec C - 'Char_t' 0 - t "
"i - 'Int_t' 0 - length",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Anal1",429,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__Graf1LN_FormSize),-1,0,3,1,2,0,
"u 's_TextSpec' - 0 - spec C - 'Char_t' 0 - t "
"i - 'Int_t' 0 - length",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawLine",790,(G__InterfaceMethod)NULL,121,-1,-1,0,5,1,2,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2 "
"u 's_TextSpec' - 0 - spec",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FirstParse",1027,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__Graf1LN_FormSize),-1,0,3,1,2,0,
"f - 'Float_t' 0 - angle f - 'Float_t' 0 - size "
"C - 'Char_t' 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Savefs",616,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'FormSize' - 0 - fs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Readfs",597,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__Graf1LN_FormSize),-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLatex",594,G__TLatex_TLatex_6_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TLatex),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLatex",594,G__TLatex_TLatex_7_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TLatex),-1,0,3,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLatex",594,G__TLatex_TLatex_8_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TLatex),-1,0,1,1,1,0,"u 'TLatex' - 1 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TLatex_Copy_0_1,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLatex",908,G__TLatex_DrawLatex_1_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHeight",889,G__TLatex_GetHeight_2_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXsize",819,G__TLatex_GetXsize_3_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetYsize",820,G__TLatex_GetYsize_4_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Paint",508,G__TLatex_Paint_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintLatex",1018,G__TLatex_PaintLatex_6_1,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - angle f - 'Float_t' 0 - size "
"C - - 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SavePrimitive",1352,G__TLatex_SavePrimitive_7_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIndiceSize",1299,G__TLatex_SetIndiceSize_8_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - factorSize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLimitIndiceSize",1810,G__TLatex_SetLimitIndiceSize_9_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - limitFactorSize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TLatex_DeclFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TLatex_DeclFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TLatex_ImplFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TLatex_ImplFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TLatex_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TLatex_Class_5_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TLatex_Dictionary_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TLatex_IsA_7_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TLatex_ShowMembers_8_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TLatex_Streamer_9_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TLatex",720,G__TLatex_wATLatex_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMarker(void) {
   /* TMarker */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TMarker));
   G__memfunc_setup("TMarker",694,G__TMarker_TMarker_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TMarker),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMarker",694,G__TMarker_TMarker_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TMarker),-1,0,3,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y "
"i - 'Int_t' 0 - marker",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMarker",694,G__TMarker_TMarker_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TMarker),-1,0,1,1,1,0,"u 'TMarker' - 1 - marker",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TMarker_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - marker",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TMarker_DistancetoPrimitive_5_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TMarker_Draw_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawMarker",1008,G__TMarker_DrawMarker_7_0,121,-1,-1,0,2,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TMarker_ExecuteEvent_8_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetX",376,G__TMarker_GetX_9_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY",377,G__TMarker_GetY_0_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TMarker_ls_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TMarker_Paint_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintMarker",1118,G__TMarker_PaintMarker_3_1,121,-1,-1,0,2,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintMarkerNDC",1331,G__TMarker_PaintMarkerNDC_4_1,121,-1,-1,0,2,1,1,0,
"f - 'Coord_t' 0 - u f - 'Coord_t' 0 - v",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TMarker_Print_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TMarker_SavePrimitive_6_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetX",388,G__TMarker_SetX_7_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetY",389,G__TMarker_SetY_8_1,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DisplayMarkerTypes",1869,G__TMarker_DisplayMarkerTypes_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMarker_DeclFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMarker_DeclFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMarker_ImplFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMarker_ImplFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMarker_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMarker_Class_5_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMarker_Dictionary_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMarker_IsA_7_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMarker_ShowMembers_8_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMarker_Streamer_9_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TMarker",820,G__TMarker_wATMarker_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPolyLine(void) {
   /* TPolyLine */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine));
   G__memfunc_setup("TPolyLine",896,G__TPolyLine_TPolyLine_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyLine",896,G__TPolyLine_TPolyLine_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine),-1,0,2,1,1,0,
"i - 'Int_t' 0 - n C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyLine",896,G__TPolyLine_TPolyLine_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine),-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyLine",896,G__TPolyLine_TPolyLine_3_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine),-1,0,1,1,1,0,"u 'TPolyLine' - 1 - polyline",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TPolyLine_Copy_5_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - polyline",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TPolyLine_DistancetoPrimitive_6_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPolyLine_Draw_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyLine",1210,G__TPolyLine_DrawPolyLine_8_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TPolyLine_ExecuteEvent_9_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetN",366,G__TPolyLine_GetN_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX",376,G__TPolyLine_GetX_1_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY",377,G__TPolyLine_GetY_2_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOption",921,G__TPolyLine_GetOption_3_1,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TPolyLine_ls_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPolyLine_Paint_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLine",1320,G__TPolyLine_PaintPolyLine_6_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLineNDC",1533,G__TPolyLine_PaintPolyLineNDC_7_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPolyLine_Print_8_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPolyLine_SavePrimitive_9_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOption",933,G__TPolyLine_SetOption_0_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoint",822,G__TPolyLine_SetPoint_1_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - point f - 'Float_t' 0 - x "
"f - 'Float_t' 0 - y","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetPolyLine",1112,G__TPolyLine_SetPolyLine_2_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 0 x "
"F - 'Float_t' 0 0 y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPolyLine_DeclFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPolyLine_DeclFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPolyLine_ImplFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPolyLine_ImplFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPolyLine_Class_Version_7_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPolyLine_Class_8_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPolyLine_Dictionary_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPolyLine_IsA_0_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPolyLine_ShowMembers_1_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPolyLine_Streamer_2_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPolyLine",1022,G__TPolyLine_wATPolyLine_3_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPolyMarker(void) {
   /* TPolyMarker */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker));
   G__memfunc_setup("TPolyMarker",1114,G__TPolyMarker_TPolyMarker_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyMarker",1114,G__TPolyMarker_TPolyMarker_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker),-1,0,2,1,1,0,
"i - 'Int_t' 0 - n C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyMarker",1114,G__TPolyMarker_TPolyMarker_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker),-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyMarker",1114,G__TPolyMarker_TPolyMarker_3_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker),-1,0,1,1,1,0,"u 'TPolyMarker' - 1 - polymarker",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TPolyMarker_Copy_5_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - polymarker",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPolyMarker_Draw_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyMarker",1428,G__TPolyMarker_DrawPolyMarker_7_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TPolyMarker_ExecuteEvent_8_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetN",366,G__TPolyMarker_GetN_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__TPolyMarker_GetOption_0_1,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetX",376,G__TPolyMarker_GetX_1_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY",377,G__TPolyMarker_GetY_2_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TPolyMarker_ls_3_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPolyMarker_Paint_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyMarker",1538,G__TPolyMarker_PaintPolyMarker_5_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPolyMarker_Print_6_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPolyMarker_SavePrimitive_7_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoint",822,G__TPolyMarker_SetPoint_8_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - point f - 'Float_t' 0 - x "
"f - 'Float_t' 0 - y","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetPolyMarker",1330,G__TPolyMarker_SetPolyMarker_9_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 0 x "
"F - 'Float_t' 0 0 y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPolyMarker_DeclFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPolyMarker_DeclFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPolyMarker_ImplFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPolyMarker_ImplFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPolyMarker_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPolyMarker_Class_5_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPolyMarker_Dictionary_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPolyMarker_IsA_7_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPolyMarker_ShowMembers_8_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPolyMarker_Streamer_9_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPolyMarker",1240,G__TPolyMarker_wATPolyMarker_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPaveLabel(void) {
   /* TPaveLabel */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel));
   G__memfunc_setup("TPaveLabel",960,G__TPaveLabel_TPaveLabel_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPaveLabel",960,G__TPaveLabel_TPaveLabel_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"C - 'Text_t' 0 - label C - 'Option_t' 0 \"br\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPaveLabel",960,G__TPaveLabel_TPaveLabel_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),-1,0,1,1,1,0,"u 'TPaveLabel' - 1 - pavelabel",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TPaveLabel_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - pavelabel",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPaveLabel_Draw_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPaveLabel",1274,G__TPaveLabel_DrawPaveLabel_6_0,121,-1,-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"C - 'Text_t' 0 - label C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLabel",768,G__TPaveLabel_GetLabel_7_0,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitle",802,G__TPaveLabel_GetTitle_8_0,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPaveLabel_Paint_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPaveLabel",1384,G__TPaveLabel_PaintPaveLabel_0_1,121,-1,-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"C - 'Text_t' 0 - label C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPaveLabel_Print_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPaveLabel_SavePrimitive_2_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLabel",780,G__TPaveLabel_SetLabel_3_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - label","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPaveLabel_DeclFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPaveLabel_DeclFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPaveLabel_ImplFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPaveLabel_ImplFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPaveLabel_Class_Version_8_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPaveLabel_Class_9_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPaveLabel_Dictionary_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPaveLabel_IsA_1_2,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPaveLabel_ShowMembers_2_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPaveLabel_Streamer_3_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPaveLabel",1086,G__TPaveLabel_wATPaveLabel_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPavesText(void) {
   /* TPavesText */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText));
   G__memfunc_setup("TPavesText",1016,G__TPavesText_TPavesText_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPavesText",1016,G__TPavesText_TPavesText_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"i - 'Int_t' 0 5 npaves C - 'Option_t' 0 \"br\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPavesText",1016,G__TPavesText_TPavesText_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),-1,0,1,1,1,0,"u 'TPavesText' - 1 - pavestext",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TPavesText_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - pavestext",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPavesText_Draw_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNpaves",909,G__TPavesText_GetNpaves_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPavesText_Paint_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPavesText_SavePrimitive_8_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNpaves",921,G__TPavesText_SetNpaves_9_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 5 npaves","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPavesText_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPavesText_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPavesText_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPavesText_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPavesText_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPavesText_Class_5_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPavesText_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPavesText_IsA_7_1,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPavesText_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPavesText_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPavesText",1142,G__TPavesText_wATPavesText_0_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTF2(void) {
   /* TF2 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2));
   G__memfunc_setup("TF2",204,G__TF2_TF2_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF2),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF2",204,G__TF2_TF2_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF2),-1,0,6,1,1,0,
"C - - 0 - name C - - 0 - formula "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax "
"f - 'Float_t' 0 0 ymin f - 'Float_t' 0 1 ymax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF2",204,G__TF2_TF2_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF2),-1,0,7,1,1,0,
"C - - 0 - name Y - - 0 - fcn "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax "
"f - 'Float_t' 0 0 ymin f - 'Float_t' 0 1 ymax "
"i - 'Int_t' 0 0 npar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF2",204,G__TF2_TF2_3_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF2),-1,0,7,1,1,0,
"C - - 0 - name Q - 'Double_t (*)(Double_t*, Double_t*)' 0 - fcn "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax "
"f - 'Float_t' 0 0 ymin f - 'Float_t' 0 1 ymax "
"i - 'Int_t' 0 0 npar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF2",204,G__TF2_TF2_4_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF2),-1,0,1,1,1,0,"u 'TF2' - 1 - f2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TF2_Copy_6_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - f2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TF2_DistancetoPrimitive_7_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TF2_Draw_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawCopy",809,G__TF2_DrawCopy_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawF2",518,G__TF2_DrawF2_0_1,121,-1,-1,0,6,1,1,0,
"C - - 0 - formula f - 'Float_t' 0 - xmin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - ymax C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TF2_ExecuteEvent_1_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetContour",1034,G__TF2_GetContour_2_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"F - 'Float_t' 0 0 levels",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetContourLevel",1538,G__TF2_GetContourLevel_3_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - level",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNpy",599,G__TF2_GetNpy_4_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetObjectInfo",1283,G__TF2_GetObjectInfo_5_1,67,-1,G__defined_typename("Text_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRandom",897,G__TF2_GetRandom_6_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRandom2",947,G__TF2_GetRandom2_7_1,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - xrandom f - 'Float_t' 1 - yrandom",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF2_GetRange_8_1,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF2_GetRange_9_1,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - xmax f - 'Float_t' 1 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF2_GetRange_0_2,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - zmin f - 'Float_t' 1 - xmax "
"f - 'Float_t' 1 - ymax f - 'Float_t' 1 - zmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetYmin",701,G__TF2_GetYmin_1_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetYmax",703,G__TF2_GetYmax_2_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF2_Integral_3_2,100,-1,G__defined_typename("Double_t"),0,4,1,1,0,
"f - 'Float_t' 0 - a f - 'Float_t' 0 - b "
"D - 'Double_t' 0 0 params f - 'Float_t' 0 0.000001 epsil",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF2_Integral_4_2,100,-1,G__defined_typename("Double_t"),0,5,1,1,0,
"f - 'Float_t' 0 - ax f - 'Float_t' 0 - bx "
"f - 'Float_t' 0 - ay f - 'Float_t' 0 - by "
"f - 'Float_t' 0 0.000001 epsil",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF2_Integral_5_2,100,-1,G__defined_typename("Double_t"),0,7,1,1,0,
"f - 'Float_t' 0 - ax f - 'Float_t' 0 - bx "
"f - 'Float_t' 0 - ay f - 'Float_t' 0 - by "
"f - 'Float_t' 0 - az f - 'Float_t' 0 - bz "
"f - 'Float_t' 0 0.000001 epsil",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TF2_Paint_6_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNpy",611,G__TF2_SetNpy_7_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 100 npy","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetContour",1046,G__TF2_SetContour_8_2,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 20 nlevels F - 'Float_t' 0 0 levels",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetContourLevel",1550,G__TF2_SetContourLevel_9_2,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - level f - 'Float_t' 0 - value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF2_SetRange_0_3,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF2_SetRange_1_3,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF2_SetRange_2_3,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - zmin f - 'Float_t' 0 - xmax "
"f - 'Float_t' 0 - ymax f - 'Float_t' 0 - zmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TF2_DeclFileName_3_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TF2_DeclFileLine_4_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TF2_ImplFileName_5_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TF2_ImplFileLine_6_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TF2_Class_Version_7_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TF2_Class_8_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TF2_Dictionary_9_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TF2_IsA_0_4,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TF2_ShowMembers_1_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TF2_Streamer_2_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TF2",330,G__TF2_wATF2_3_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTF3(void) {
   /* TF3 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3));
   G__memfunc_setup("TF3",205,G__TF3_TF3_0_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF3),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF3",205,G__TF3_TF3_1_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF3),-1,0,8,1,1,0,
"C - - 0 - name C - - 0 - formula "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax "
"f - 'Float_t' 0 0 ymin f - 'Float_t' 0 1 ymax "
"f - 'Float_t' 0 0 zmin f - 'Float_t' 0 1 zmax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF3",205,G__TF3_TF3_2_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF3),-1,0,9,1,1,0,
"C - - 0 - name Y - - 0 - fcn "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax "
"f - 'Float_t' 0 0 ymin f - 'Float_t' 0 1 ymax "
"f - 'Float_t' 0 0 zmin f - 'Float_t' 0 1 zmax "
"i - 'Int_t' 0 0 npar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF3",205,G__TF3_TF3_3_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF3),-1,0,9,1,1,0,
"C - - 0 - name Q - 'Double_t (*)(Double_t*, Double_t*)' 0 - fcn "
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax "
"f - 'Float_t' 0 0 ymin f - 'Float_t' 0 1 ymax "
"f - 'Float_t' 0 0 zmin f - 'Float_t' 0 1 zmax "
"i - 'Int_t' 0 0 npar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TF3",205,G__TF3_TF3_4_0,105,G__get_linked_tagnum(&G__G__Graf1LN_TF3),-1,0,1,1,1,0,"u 'TF3' - 1 - f3",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TF3_Copy_6_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - f3",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TF3_DistancetoPrimitive_7_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TF3_Draw_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TF3_ExecuteEvent_9_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNpz",600,G__TF3_GetNpz_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRandom3",948,G__TF3_GetRandom3_1_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 1 - xrandom f - 'Float_t' 1 - yrandom "
"f - 'Float_t' 1 - zrandom",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF3_GetRange_2_1,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF3_GetRange_3_1,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - xmax f - 'Float_t' 1 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TF3_GetRange_4_1,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 1 - xmin f - 'Float_t' 1 - ymin "
"f - 'Float_t' 1 - zmin f - 'Float_t' 1 - xmax "
"f - 'Float_t' 1 - ymax f - 'Float_t' 1 - zmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetZmin",702,G__TF3_GetZmin_5_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetZmax",704,G__TF3_GetZmax_6_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF3_Integral_7_1,100,-1,G__defined_typename("Double_t"),0,4,1,1,0,
"f - 'Float_t' 0 - a f - 'Float_t' 0 - b "
"D - 'Double_t' 0 0 params f - 'Float_t' 0 0.000001 epsilon",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF3_Integral_8_1,100,-1,G__defined_typename("Double_t"),0,5,1,1,0,
"f - 'Float_t' 0 - ax f - 'Float_t' 0 - bx "
"f - 'Float_t' 0 - ay f - 'Float_t' 0 - by "
"f - 'Float_t' 0 0.000001 epsilon",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integral",822,G__TF3_Integral_9_1,100,-1,G__defined_typename("Double_t"),0,7,1,1,0,
"f - 'Float_t' 0 - ax f - 'Float_t' 0 - bx "
"f - 'Float_t' 0 - ay f - 'Float_t' 0 - by "
"f - 'Float_t' 0 - az f - 'Float_t' 0 - bz "
"f - 'Float_t' 0 0.000001 epsilon",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TF3_Paint_0_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNpz",612,G__TF3_SetNpz_1_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 30 npz",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF3_SetRange_2_2,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF3_SetRange_3_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TF3_SetRange_4_2,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - zmin f - 'Float_t' 0 - xmax "
"f - 'Float_t' 0 - ymax f - 'Float_t' 0 - zmax","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TF3_DeclFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TF3_DeclFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TF3_ImplFileName_7_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TF3_ImplFileLine_8_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TF3_Class_Version_9_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TF3_Class_0_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TF3_Dictionary_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TF3_IsA_2_3,85,G__get_linked_tagnum(&G__G__Graf1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TF3_ShowMembers_3_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TF3_Streamer_4_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TF3",331,G__TF3_wATF3_5_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Graf1() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Graf1() {

   /* Setting up global variables */
   G__resetplocal();


   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Graf1() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__Graf1LN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TColor = { "TColor" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TF1 = { "TF1" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TAttPad = { "TAttPad" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TAttCanvas = { "TAttCanvas" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TAttLine = { "TAttLine" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TAttFill = { "TAttFill" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TEllipse = { "TEllipse" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TArc = { "TArc" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TLine = { "TLine" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TArrow = { "TArrow" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TGToolTip = { "TGToolTip" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TBox = { "TBox" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TPave = { "TPave" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TAttText = { "TAttText" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TText = { "TText" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TPaveText = { "TPaveText" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TDiamond = { "TDiamond" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TWbox = { "TWbox" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TFrame = { "TFrame" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TGaxis = { "TGaxis" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TAttMarker = { "TAttMarker" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TH1F = { "TH1F" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TAxis = { "TAxis" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TGraph = { "TGraph" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TGraphErrors = { "TGraphErrors" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TGraphAsymmErrors = { "TGraphAsymmErrors" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_s_FormSize = { "s_FormSize" , 115 , -1 };
G__linked_taginfo G__G__Graf1LN_FormSize = { "FormSize" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TLatex = { "TLatex" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TMarker = { "TMarker" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TPolyLine = { "TPolyLine" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TPolyMarker = { "TPolyMarker" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TPaveLabel = { "TPaveLabel" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TPavesText = { "TPavesText" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TFormula = { "TFormula" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TMethodCall = { "TMethodCall" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TArrayF = { "TArrayF" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TF2 = { "TF2" , 99 , -1 };
G__linked_taginfo G__G__Graf1LN_TF3 = { "TF3" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__Graf1() {
  G__G__Graf1LN_TClass.tagnum = -1 ;
  G__G__Graf1LN_TList.tagnum = -1 ;
  G__G__Graf1LN_TObject.tagnum = -1 ;
  G__G__Graf1LN_TString.tagnum = -1 ;
  G__G__Graf1LN_TNamed.tagnum = -1 ;
  G__G__Graf1LN_TColor.tagnum = -1 ;
  G__G__Graf1LN_TF1.tagnum = -1 ;
  G__G__Graf1LN_TAttPad.tagnum = -1 ;
  G__G__Graf1LN_TAttCanvas.tagnum = -1 ;
  G__G__Graf1LN_TAttLine.tagnum = -1 ;
  G__G__Graf1LN_TAttFill.tagnum = -1 ;
  G__G__Graf1LN_TEllipse.tagnum = -1 ;
  G__G__Graf1LN_TArc.tagnum = -1 ;
  G__G__Graf1LN_TLine.tagnum = -1 ;
  G__G__Graf1LN_TArrow.tagnum = -1 ;
  G__G__Graf1LN_TGToolTip.tagnum = -1 ;
  G__G__Graf1LN_TBox.tagnum = -1 ;
  G__G__Graf1LN_TPave.tagnum = -1 ;
  G__G__Graf1LN_TAttText.tagnum = -1 ;
  G__G__Graf1LN_TText.tagnum = -1 ;
  G__G__Graf1LN_TPaveText.tagnum = -1 ;
  G__G__Graf1LN_TDiamond.tagnum = -1 ;
  G__G__Graf1LN_TWbox.tagnum = -1 ;
  G__G__Graf1LN_TFrame.tagnum = -1 ;
  G__G__Graf1LN_TGaxis.tagnum = -1 ;
  G__G__Graf1LN_TAttMarker.tagnum = -1 ;
  G__G__Graf1LN_TH1F.tagnum = -1 ;
  G__G__Graf1LN_TAxis.tagnum = -1 ;
  G__G__Graf1LN_TGraph.tagnum = -1 ;
  G__G__Graf1LN_TGraphErrors.tagnum = -1 ;
  G__G__Graf1LN_TGraphAsymmErrors.tagnum = -1 ;
  G__G__Graf1LN_s_FormSize.tagnum = -1 ;
  G__G__Graf1LN_FormSize.tagnum = -1 ;
  G__G__Graf1LN_TLatex.tagnum = -1 ;
  G__G__Graf1LN_TMarker.tagnum = -1 ;
  G__G__Graf1LN_TPolyLine.tagnum = -1 ;
  G__G__Graf1LN_TPolyMarker.tagnum = -1 ;
  G__G__Graf1LN_TPaveLabel.tagnum = -1 ;
  G__G__Graf1LN_TPavesText.tagnum = -1 ;
  G__G__Graf1LN_TFormula.tagnum = -1 ;
  G__G__Graf1LN_TMethodCall.tagnum = -1 ;
  G__G__Graf1LN_TArrayF.tagnum = -1 ;
  G__G__Graf1LN_TF2.tagnum = -1 ;
  G__G__Graf1LN_TF3.tagnum = -1 ;
}

extern "C" void G__cpp_setup_tagtableG__Graf1() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TColor),sizeof(TColor),-1,0,"Color defined by RGB or HLS",G__setup_memvarTColor,G__setup_memfuncTColor);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF1),sizeof(TF1),-1,0,"The Parametric 1-D function",G__setup_memvarTF1,G__setup_memfuncTF1);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TAttPad),sizeof(TAttPad),-1,0,"Pad attributes",G__setup_memvarTAttPad,G__setup_memfuncTAttPad);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TAttCanvas),sizeof(TAttCanvas),-1,0,"Canvas attributes",G__setup_memvarTAttCanvas,G__setup_memfuncTAttCanvas);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TEllipse),sizeof(TEllipse),-1,0,"An ellipse",G__setup_memvarTEllipse,G__setup_memfuncTEllipse);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArc),sizeof(TArc),-1,0,"Arc of a circle",G__setup_memvarTArc,G__setup_memfuncTArc);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLine),sizeof(TLine),-1,0,"A line segment",G__setup_memvarTLine,G__setup_memfuncTLine);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TArrow),sizeof(TArrow),-1,0,"one arrow --->",G__setup_memvarTArrow,G__setup_memfuncTArrow);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TBox),sizeof(TBox),-1,0,"Box class",G__setup_memvarTBox,G__setup_memfuncTBox);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPave),sizeof(TPave),-1,0,"Pave. A box with shadowing",G__setup_memvarTPave,G__setup_memfuncTPave);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TText),sizeof(TText),-1,0,"Text",G__setup_memvarTText,G__setup_memfuncTText);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveText),sizeof(TPaveText),-1,0,"PaveText. A Pave with several lines of text.",G__setup_memvarTPaveText,G__setup_memfuncTPaveText);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TDiamond),sizeof(TDiamond),-1,0,"Diamond class",G__setup_memvarTDiamond,G__setup_memfuncTDiamond);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TWbox),sizeof(TWbox),-1,0,"A window box (box with 3-D effects)",G__setup_memvarTWbox,G__setup_memfuncTWbox);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TFrame),sizeof(TFrame),-1,0,"Pad graphics frame",G__setup_memvarTFrame,G__setup_memfuncTFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGaxis),sizeof(TGaxis),-1,0,"Graphics axis",G__setup_memvarTGaxis,G__setup_memfuncTGaxis);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraph),sizeof(TGraph),-1,0,"Graph graphics class",G__setup_memvarTGraph,G__setup_memfuncTGraph);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphErrors),sizeof(TGraphErrors),-1,0,"a Graph with error bars",G__setup_memvarTGraphErrors,G__setup_memfuncTGraphErrors);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TGraphAsymmErrors),sizeof(TGraphAsymmErrors),-1,0,"a Graph with asymmetric error bars",G__setup_memvarTGraphAsymmErrors,G__setup_memfuncTGraphAsymmErrors);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TLatex),sizeof(TLatex),-1,0,"The Latex-style text processor class",G__setup_memvarTLatex,G__setup_memfuncTLatex);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TMarker),sizeof(TMarker),-1,0,"Marker",G__setup_memvarTMarker,G__setup_memfuncTMarker);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyLine),sizeof(TPolyLine),-1,0,"A PolyLine",G__setup_memvarTPolyLine,G__setup_memfuncTPolyLine);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPolyMarker),sizeof(TPolyMarker),-1,0,"An array of points with the same marker",G__setup_memvarTPolyMarker,G__setup_memfuncTPolyMarker);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPaveLabel),sizeof(TPaveLabel),-1,0,"PaveLabel. A Pave with a label",G__setup_memvarTPaveLabel,G__setup_memfuncTPaveLabel);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TPavesText),sizeof(TPavesText),-1,0,"Stacked Paves with text strings",G__setup_memvarTPavesText,G__setup_memfuncTPavesText);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF2),sizeof(TF2),-1,0,"The Parametric 2-D function",G__setup_memvarTF2,G__setup_memfuncTF2);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf1LN_TF3),sizeof(TF3),-1,0,"The Parametric 3-D function",G__setup_memvarTF3,G__setup_memfuncTF3);
}
extern "C" void G__cpp_setupG__Graf1() {
  G__check_setup_version(51111,"G__cpp_setupG__Graf1()");
  G__set_cpp_environmentG__Graf1();
  G__cpp_setup_tagtableG__Graf1();

  G__cpp_setup_inheritanceG__Graf1();

  G__cpp_setup_typetableG__Graf1();

  G__cpp_setup_memvarG__Graf1();

  G__cpp_setup_memfuncG__Graf1();
  G__cpp_setup_globalG__Graf1();
  G__cpp_setup_funcG__Graf1();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Graf1();
  return;
}
class G__cpp_setup_initG__Graf1 {
  public:
    G__cpp_setup_initG__Graf1() { G__add_setup_func("G__Graf1",&G__cpp_setupG__Graf1); }
   ~G__cpp_setup_initG__Graf1() { G__remove_setup_func("G__Graf1"); }
};
G__cpp_setup_initG__Graf1 G__cpp_setup_initializerG__Graf1;

//
// File generated by /home/rdm/root/bin/rootcint at Mon Mar  8 12:34:13 1999.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TColor *&obj)
{
   // Read a pointer to an object of class TColor.

   obj = (TColor *) buf.ReadObject(TColor::Class());
   return buf;
}

//______________________________________________________________________________
void TColor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TColor.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fNumber;
      R__b >> fRed;
      R__b >> fGreen;
      R__b >> fBlue;
      R__b >> fHue;
      R__b >> fLight;
      R__b >> fSaturation;
   } else {
      R__b.WriteVersion(TColor::IsA());
      TNamed::Streamer(R__b);
      R__b << fNumber;
      R__b << fRed;
      R__b << fGreen;
      R__b << fBlue;
      R__b << fHue;
      R__b << fLight;
      R__b << fSaturation;
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
TBuffer &operator>>(TBuffer &buf, TF1 *&obj)
{
   // Read a pointer to an object of class TF1.

   obj = (TF1 *) buf.ReadObject(TF1::Class());
   return buf;
}

//______________________________________________________________________________
void TF1::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TF1.

   TClass *R__cl  = TF1::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fXmin", &fXmin);
   R__insp.Inspect(R__cl, R__parent, "fXmax", &fXmax);
   R__insp.Inspect(R__cl, R__parent, "fNpx", &fNpx);
   R__insp.Inspect(R__cl, R__parent, "fType", &fType);
   R__insp.Inspect(R__cl, R__parent, "fNpfits", &fNpfits);
   R__insp.Inspect(R__cl, R__parent, "fNsave", &fNsave);
   R__insp.Inspect(R__cl, R__parent, "fChisquare", &fChisquare);
   R__insp.Inspect(R__cl, R__parent, "*fIntegral", &fIntegral);
   R__insp.Inspect(R__cl, R__parent, "*fParErrors", &fParErrors);
   R__insp.Inspect(R__cl, R__parent, "*fParMin", &fParMin);
   R__insp.Inspect(R__cl, R__parent, "*fParMax", &fParMax);
   R__insp.Inspect(R__cl, R__parent, "*fSave", &fSave);
   R__insp.Inspect(R__cl, R__parent, "*fParent", &fParent);
   R__insp.Inspect(R__cl, R__parent, "*fHistogram", &fHistogram);
   R__insp.Inspect(R__cl, R__parent, "fMaximum", &fMaximum);
   R__insp.Inspect(R__cl, R__parent, "fMinimum", &fMinimum);
   R__insp.Inspect(R__cl, R__parent, "*fMethodCall", &fMethodCall);
   R__insp.Inspect(R__cl, R__parent, "*fFunction", &fFunction);
   TFormula::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttPad *&obj)
{
   // Read a pointer to an object of class TAttPad.

   ::Error("TAttPad::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TAttCanvas *&obj)
{
   // Read a pointer to an object of class TAttCanvas.

   ::Error("TAttCanvas::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TAttCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttCanvas.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      R__b >> fXBetween;
      R__b >> fYBetween;
      R__b >> fTitleFromTop;
      R__b >> fXdate;
      R__b >> fYdate;
      R__b >> fAdate;
   } else {
      R__b.WriteVersion(TAttCanvas::IsA());
      R__b << fXBetween;
      R__b << fYBetween;
      R__b << fTitleFromTop;
      R__b << fXdate;
      R__b << fYdate;
      R__b << fAdate;
   }
}

//______________________________________________________________________________
void TAttCanvas::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttCanvas.

   TClass *R__cl  = TAttCanvas::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fXBetween", &fXBetween);
   R__insp.Inspect(R__cl, R__parent, "fYBetween", &fYBetween);
   R__insp.Inspect(R__cl, R__parent, "fTitleFromTop", &fTitleFromTop);
   R__insp.Inspect(R__cl, R__parent, "fXdate", &fXdate);
   R__insp.Inspect(R__cl, R__parent, "fYdate", &fYdate);
   R__insp.Inspect(R__cl, R__parent, "fAdate", &fAdate);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TEllipse *&obj)
{
   // Read a pointer to an object of class TEllipse.

   obj = (TEllipse *) buf.ReadObject(TEllipse::Class());
   return buf;
}

//______________________________________________________________________________
void TEllipse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEllipse.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b >> fX1;
      R__b >> fY1;
      R__b >> fR1;
      R__b >> fR2;
      R__b >> fPhimin;
      R__b >> fPhimax;
      R__b >> fTheta;
   } else {
      R__b.WriteVersion(TEllipse::IsA());
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b << fX1;
      R__b << fY1;
      R__b << fR1;
      R__b << fR2;
      R__b << fPhimin;
      R__b << fPhimax;
      R__b << fTheta;
   }
}

//______________________________________________________________________________
void TEllipse::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TEllipse.

   TClass *R__cl  = TEllipse::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX1", &fX1);
   R__insp.Inspect(R__cl, R__parent, "fY1", &fY1);
   R__insp.Inspect(R__cl, R__parent, "fR1", &fR1);
   R__insp.Inspect(R__cl, R__parent, "fR2", &fR2);
   R__insp.Inspect(R__cl, R__parent, "fPhimin", &fPhimin);
   R__insp.Inspect(R__cl, R__parent, "fPhimax", &fPhimax);
   R__insp.Inspect(R__cl, R__parent, "fTheta", &fTheta);
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArc *&obj)
{
   // Read a pointer to an object of class TArc.

   obj = (TArc *) buf.ReadObject(TArc::Class());
   return buf;
}

//______________________________________________________________________________
void TArc::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArc.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TEllipse::Streamer(R__b);
   } else {
      R__b.WriteVersion(TArc::IsA());
      TEllipse::Streamer(R__b);
   }
}

//______________________________________________________________________________
void TArc::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TArc.

   TClass *R__cl  = TArc::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TEllipse::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TLine *&obj)
{
   // Read a pointer to an object of class TLine.

   obj = (TLine *) buf.ReadObject(TLine::Class());
   return buf;
}

//______________________________________________________________________________
void TLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLine.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      R__b >> fX1;
      R__b >> fY1;
      R__b >> fX2;
      R__b >> fY2;
   } else {
      R__b.WriteVersion(TLine::IsA());
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      R__b << fX1;
      R__b << fY1;
      R__b << fX2;
      R__b << fY2;
   }
}

//______________________________________________________________________________
void TLine::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TLine.

   TClass *R__cl  = TLine::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX1", &fX1);
   R__insp.Inspect(R__cl, R__parent, "fY1", &fY1);
   R__insp.Inspect(R__cl, R__parent, "fX2", &fX2);
   R__insp.Inspect(R__cl, R__parent, "fY2", &fY2);
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArrow *&obj)
{
   // Read a pointer to an object of class TArrow.

   obj = (TArrow *) buf.ReadObject(TArrow::Class());
   return buf;
}

//______________________________________________________________________________
void TArrow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArrow.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b >> fAngle;
      R__b >> fArrowSize;
      fOption.Streamer(R__b);
   } else {
      R__b.WriteVersion(TArrow::IsA());
      TLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b << fAngle;
      R__b << fArrowSize;
      fOption.Streamer(R__b);
   }
}

//______________________________________________________________________________
void TArrow::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TArrow.

   TClass *R__cl  = TArrow::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fAngle", &fAngle);
   R__insp.Inspect(R__cl, R__parent, "fArrowSize", &fArrowSize);
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   TLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TBox *&obj)
{
   // Read a pointer to an object of class TBox.

   obj = (TBox *) buf.ReadObject(TBox::Class());
   return buf;
}

//______________________________________________________________________________
void TBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBox.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b >> fX1;
      R__b >> fY1;
      R__b >> fX2;
      R__b >> fY2;
   } else {
      R__b.WriteVersion(TBox::IsA());
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b << fX1;
      R__b << fY1;
      R__b << fX2;
      R__b << fY2;
   }
}

//______________________________________________________________________________
void TBox::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TBox.

   TClass *R__cl  = TBox::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fTip", &fTip);
   R__insp.Inspect(R__cl, R__parent, "fX1", &fX1);
   R__insp.Inspect(R__cl, R__parent, "fY1", &fY1);
   R__insp.Inspect(R__cl, R__parent, "fX2", &fX2);
   R__insp.Inspect(R__cl, R__parent, "fY2", &fY2);
   R__insp.Inspect(R__cl, R__parent, "fResizing", &fResizing);
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPave *&obj)
{
   // Read a pointer to an object of class TPave.

   obj = (TPave *) buf.ReadObject(TPave::Class());
   return buf;
}

//______________________________________________________________________________
void TPave::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPave.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TBox::Streamer(R__b);
      R__b >> fX1NDC;
      R__b >> fY1NDC;
      R__b >> fX2NDC;
      R__b >> fY2NDC;
      R__b >> fBorderSize;
      R__b >> fInit;
      R__b >> fCornerRadius;
      fOption.Streamer(R__b);
      fName.Streamer(R__b);
   } else {
      R__b.WriteVersion(TPave::IsA());
      TBox::Streamer(R__b);
      R__b << fX1NDC;
      R__b << fY1NDC;
      R__b << fX2NDC;
      R__b << fY2NDC;
      R__b << fBorderSize;
      R__b << fInit;
      R__b << fCornerRadius;
      fOption.Streamer(R__b);
      fName.Streamer(R__b);
   }
}

//______________________________________________________________________________
void TPave::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPave.

   TClass *R__cl  = TPave::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX1NDC", &fX1NDC);
   R__insp.Inspect(R__cl, R__parent, "fY1NDC", &fY1NDC);
   R__insp.Inspect(R__cl, R__parent, "fX2NDC", &fX2NDC);
   R__insp.Inspect(R__cl, R__parent, "fY2NDC", &fY2NDC);
   R__insp.Inspect(R__cl, R__parent, "fBorderSize", &fBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fInit", &fInit);
   R__insp.Inspect(R__cl, R__parent, "fCornerRadius", &fCornerRadius);
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   fName.ShowMembers(R__insp, strcat(R__parent,"fName.")); R__parent[R__ncp] = 0;
   TBox::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TText *&obj)
{
   // Read a pointer to an object of class TText.

   obj = (TText *) buf.ReadObject(TText::Class());
   return buf;
}

//______________________________________________________________________________
void TText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TText.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TNamed::Streamer(R__b);
      TAttText::Streamer(R__b);
      R__b >> fX;
      R__b >> fY;
   } else {
      R__b.WriteVersion(TText::IsA());
      TNamed::Streamer(R__b);
      TAttText::Streamer(R__b);
      R__b << fX;
      R__b << fY;
   }
}

//______________________________________________________________________________
void TText::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TText.

   TClass *R__cl  = TText::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPaveText *&obj)
{
   // Read a pointer to an object of class TPaveText.

   obj = (TPaveText *) buf.ReadObject(TPaveText::Class());
   return buf;
}

//______________________________________________________________________________
void TPaveText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaveText.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TPave::Streamer(R__b);
      TAttText::Streamer(R__b);
      R__b >> fLongest;
      R__b >> fMargin;
      R__b >> fLines;
   } else {
      R__b.WriteVersion(TPaveText::IsA());
      TPave::Streamer(R__b);
      TAttText::Streamer(R__b);
      R__b << fLongest;
      R__b << fMargin;
      R__b << fLines;
   }
}

//______________________________________________________________________________
void TPaveText::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPaveText.

   TClass *R__cl  = TPaveText::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fLongest", &fLongest);
   R__insp.Inspect(R__cl, R__parent, "fMargin", &fMargin);
   R__insp.Inspect(R__cl, R__parent, "*fLines", &fLines);
   TPave::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDiamond *&obj)
{
   // Read a pointer to an object of class TDiamond.

   obj = (TDiamond *) buf.ReadObject(TDiamond::Class());
   return buf;
}

//______________________________________________________________________________
void TDiamond::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDiamond.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TPaveText::Streamer(R__b);
   } else {
      R__b.WriteVersion(TDiamond::IsA());
      TPaveText::Streamer(R__b);
   }
}

//______________________________________________________________________________
void TDiamond::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TDiamond.

   TClass *R__cl  = TDiamond::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TPaveText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TWbox *&obj)
{
   // Read a pointer to an object of class TWbox.

   obj = (TWbox *) buf.ReadObject(TWbox::Class());
   return buf;
}

//______________________________________________________________________________
void TWbox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWbox.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TBox::Streamer(R__b);
      R__b >> fBorderSize;
      R__b >> fBorderMode;
   } else {
      R__b.WriteVersion(TWbox::IsA());
      TBox::Streamer(R__b);
      R__b << fBorderSize;
      R__b << fBorderMode;
   }
}

//______________________________________________________________________________
void TWbox::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TWbox.

   TClass *R__cl  = TWbox::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fBorderSize", &fBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fBorderMode", &fBorderMode);
   TBox::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TFrame *&obj)
{
   // Read a pointer to an object of class TFrame.

   obj = (TFrame *) buf.ReadObject(TFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFrame.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TWbox::Streamer(R__b);
   } else {
      R__b.WriteVersion(TFrame::IsA());
      TWbox::Streamer(R__b);
   }
}

//______________________________________________________________________________
void TFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TFrame.

   TClass *R__cl  = TFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TWbox::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGaxis *&obj)
{
   // Read a pointer to an object of class TGaxis.

   obj = (TGaxis *) buf.ReadObject(TGaxis::Class());
   return buf;
}

//______________________________________________________________________________
void TGaxis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGaxis.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TLine::Streamer(R__b);
      TAttText::Streamer(R__b);
      R__b >> fNdiv;
      R__b >> fWmin;
      R__b >> fWmax;
      R__b >> fGridLength;
      R__b >> fTickSize;
      R__b >> fLabelOffset;
      R__b >> fLabelSize;
      R__b >> fTitleOffset;
      R__b >> fTitleSize;
      R__b >> fLabelFont;
      R__b.ReadStaticArray(fChopt);
      fName.Streamer(R__b);
      fTitle.Streamer(R__b);
   } else {
      R__b.WriteVersion(TGaxis::IsA());
      TLine::Streamer(R__b);
      TAttText::Streamer(R__b);
      R__b << fNdiv;
      R__b << fWmin;
      R__b << fWmax;
      R__b << fGridLength;
      R__b << fTickSize;
      R__b << fLabelOffset;
      R__b << fLabelSize;
      R__b << fTitleOffset;
      R__b << fTitleSize;
      R__b << fLabelFont;
      R__b.WriteArray(fChopt, 16);
      fName.Streamer(R__b);
      fTitle.Streamer(R__b);
   }
}

//______________________________________________________________________________
void TGaxis::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGaxis.

   TClass *R__cl  = TGaxis::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNdiv", &fNdiv);
   R__insp.Inspect(R__cl, R__parent, "fWmin", &fWmin);
   R__insp.Inspect(R__cl, R__parent, "fWmax", &fWmax);
   R__insp.Inspect(R__cl, R__parent, "fGridLength", &fGridLength);
   R__insp.Inspect(R__cl, R__parent, "fTickSize", &fTickSize);
   R__insp.Inspect(R__cl, R__parent, "fLabelOffset", &fLabelOffset);
   R__insp.Inspect(R__cl, R__parent, "fLabelSize", &fLabelSize);
   R__insp.Inspect(R__cl, R__parent, "fTitleOffset", &fTitleOffset);
   R__insp.Inspect(R__cl, R__parent, "fTitleSize", &fTitleSize);
   R__insp.Inspect(R__cl, R__parent, "fLabelFont", &fLabelFont);
   R__insp.Inspect(R__cl, R__parent, "fChopt[16]", fChopt);
   fName.ShowMembers(R__insp, strcat(R__parent,"fName.")); R__parent[R__ncp] = 0;
   fTitle.ShowMembers(R__insp, strcat(R__parent,"fTitle.")); R__parent[R__ncp] = 0;
   TLine::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGraph *&obj)
{
   // Read a pointer to an object of class TGraph.

   obj = (TGraph *) buf.ReadObject(TGraph::Class());
   return buf;
}

//______________________________________________________________________________
void TGraph::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGraph.

   TClass *R__cl  = TGraph::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNpoints", &fNpoints);
   R__insp.Inspect(R__cl, R__parent, "*fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "*fY", &fY);
   R__insp.Inspect(R__cl, R__parent, "*fOption", &fOption);
   R__insp.Inspect(R__cl, R__parent, "*fFunctions", &fFunctions);
   R__insp.Inspect(R__cl, R__parent, "*fHistogram", &fHistogram);
   R__insp.Inspect(R__cl, R__parent, "fMaximum", &fMaximum);
   R__insp.Inspect(R__cl, R__parent, "fMinimum", &fMinimum);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGraphErrors *&obj)
{
   // Read a pointer to an object of class TGraphErrors.

   obj = (TGraphErrors *) buf.ReadObject(TGraphErrors::Class());
   return buf;
}

//______________________________________________________________________________
void TGraphErrors::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGraphErrors.

   TClass *R__cl  = TGraphErrors::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fEX", &fEX);
   R__insp.Inspect(R__cl, R__parent, "*fEY", &fEY);
   TGraph::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGraphAsymmErrors *&obj)
{
   // Read a pointer to an object of class TGraphAsymmErrors.

   obj = (TGraphAsymmErrors *) buf.ReadObject(TGraphAsymmErrors::Class());
   return buf;
}

//______________________________________________________________________________
void TGraphAsymmErrors::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGraphAsymmErrors.

   TClass *R__cl  = TGraphAsymmErrors::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fEXlow", &fEXlow);
   R__insp.Inspect(R__cl, R__parent, "*fEXhigh", &fEXhigh);
   R__insp.Inspect(R__cl, R__parent, "*fEYlow", &fEYlow);
   R__insp.Inspect(R__cl, R__parent, "*fEYhigh", &fEYhigh);
   TGraph::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TLatex *&obj)
{
   // Read a pointer to an object of class TLatex.

   obj = (TLatex *) buf.ReadObject(TLatex::Class());
   return buf;
}

//______________________________________________________________________________
void TLatex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLatex.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TText::Streamer(R__b);
      TAttLine::Streamer(R__b);
      R__b >> fFactorSize;
      R__b >> fFactorPos;
      R__b >> fLimitFactorSize;
      R__b >> fShow;
      R__b >> fOriginSize;
      R__b >> fTabMax;
      R__b >> fPos;
   } else {
      R__b.WriteVersion(TLatex::IsA());
      TText::Streamer(R__b);
      TAttLine::Streamer(R__b);
      R__b << fFactorSize;
      R__b << fFactorPos;
      R__b << fLimitFactorSize;
      R__b << fShow;
      R__b << fOriginSize;
      R__b << fTabMax;
      R__b << fPos;
   }
}

//______________________________________________________________________________
void TLatex::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TLatex.

   TClass *R__cl  = TLatex::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fFactorSize", &fFactorSize);
   R__insp.Inspect(R__cl, R__parent, "fFactorPos", &fFactorPos);
   R__insp.Inspect(R__cl, R__parent, "fLimitFactorSize", &fLimitFactorSize);
   R__insp.Inspect(R__cl, R__parent, "*fError", &fError);
   R__insp.Inspect(R__cl, R__parent, "fShow", &fShow);
   R__insp.Inspect(R__cl, R__parent, "*fTabSize", &fTabSize);
   R__insp.Inspect(R__cl, R__parent, "fOriginSize", &fOriginSize);
   R__insp.Inspect(R__cl, R__parent, "fTabMax", &fTabMax);
   R__insp.Inspect(R__cl, R__parent, "fPos", &fPos);
   TText::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMarker *&obj)
{
   // Read a pointer to an object of class TMarker.

   obj = (TMarker *) buf.ReadObject(TMarker::Class());
   return buf;
}

//______________________________________________________________________________
void TMarker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMarker.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      TAttMarker::Streamer(R__b);
      R__b >> fX;
      R__b >> fY;
   } else {
      R__b.WriteVersion(TMarker::IsA());
      TObject::Streamer(R__b);
      TAttMarker::Streamer(R__b);
      R__b << fX;
      R__b << fY;
   }
}

//______________________________________________________________________________
void TMarker::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMarker.

   TClass *R__cl  = TMarker::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
   TObject::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPolyLine *&obj)
{
   // Read a pointer to an object of class TPolyLine.

   obj = (TPolyLine *) buf.ReadObject(TPolyLine::Class());
   return buf;
}

//______________________________________________________________________________
void TPolyLine::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPolyLine.

   TClass *R__cl  = TPolyLine::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fN", &fN);
   R__insp.Inspect(R__cl, R__parent, "*fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "*fY", &fY);
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPolyMarker *&obj)
{
   // Read a pointer to an object of class TPolyMarker.

   obj = (TPolyMarker *) buf.ReadObject(TPolyMarker::Class());
   return buf;
}

//______________________________________________________________________________
void TPolyMarker::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPolyMarker.

   TClass *R__cl  = TPolyMarker::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fN", &fN);
   R__insp.Inspect(R__cl, R__parent, "*fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "*fY", &fY);
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   TObject::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPaveLabel *&obj)
{
   // Read a pointer to an object of class TPaveLabel.

   obj = (TPaveLabel *) buf.ReadObject(TPaveLabel::Class());
   return buf;
}

//______________________________________________________________________________
void TPaveLabel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaveLabel.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TPave::Streamer(R__b);
      TAttText::Streamer(R__b);
      fLabel.Streamer(R__b);
   } else {
      R__b.WriteVersion(TPaveLabel::IsA());
      TPave::Streamer(R__b);
      TAttText::Streamer(R__b);
      fLabel.Streamer(R__b);
   }
}

//______________________________________________________________________________
void TPaveLabel::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPaveLabel.

   TClass *R__cl  = TPaveLabel::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fLabel.ShowMembers(R__insp, strcat(R__parent,"fLabel.")); R__parent[R__ncp] = 0;
   TPave::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPavesText *&obj)
{
   // Read a pointer to an object of class TPavesText.

   obj = (TPavesText *) buf.ReadObject(TPavesText::Class());
   return buf;
}

//______________________________________________________________________________
void TPavesText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPavesText.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TPaveText::Streamer(R__b);
      R__b >> fNpaves;
   } else {
      R__b.WriteVersion(TPavesText::IsA());
      TPaveText::Streamer(R__b);
      R__b << fNpaves;
   }
}

//______________________________________________________________________________
void TPavesText::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPavesText.

   TClass *R__cl  = TPavesText::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNpaves", &fNpaves);
   TPaveText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TF2 *&obj)
{
   // Read a pointer to an object of class TF2.

   obj = (TF2 *) buf.ReadObject(TF2::Class());
   return buf;
}

//______________________________________________________________________________
void TF2::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TF2.

   TClass *R__cl  = TF2::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fYmin", &fYmin);
   R__insp.Inspect(R__cl, R__parent, "fYmax", &fYmax);
   R__insp.Inspect(R__cl, R__parent, "fNpy", &fNpy);
   fContour.ShowMembers(R__insp, strcat(R__parent,"fContour.")); R__parent[R__ncp] = 0;
   TF1::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TF3 *&obj)
{
   // Read a pointer to an object of class TF3.

   obj = (TF3 *) buf.ReadObject(TF3::Class());
   return buf;
}

//______________________________________________________________________________
void TF3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF3.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TF2::Streamer(R__b);
      R__b >> fZmin;
      R__b >> fZmax;
      R__b >> fNpz;
   } else {
      R__b.WriteVersion(TF3::IsA());
      TF2::Streamer(R__b);
      R__b << fZmin;
      R__b << fZmax;
      R__b << fNpz;
   }
}

//______________________________________________________________________________
void TF3::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TF3.

   TClass *R__cl  = TF3::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fZmin", &fZmin);
   R__insp.Inspect(R__cl, R__parent, "fZmax", &fZmax);
   R__insp.Inspect(R__cl, R__parent, "fNpz", &fNpz);
   TF2::ShowMembers(R__insp, R__parent);
}

