//*CMZ :  2.20/06 17/12/98  09.30.56  by  Rene Brun
//*-- Author :    Rene Brun   17/12/98
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
extern void G__cpp_setup_tagtableG__GPad();
extern void G__cpp_setup_inheritanceG__GPad();
extern void G__cpp_setup_typetableG__GPad();
extern void G__cpp_setup_memvarG__GPad();
extern void G__cpp_setup_globalG__GPad();
extern void G__cpp_setup_memfuncG__GPad();
extern void G__cpp_setup_funcG__GPad();
extern void G__set_cpp_environmentG__GPad();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TPad.h"
#include "TCanvas.h"
#include "TControlBar.h"
#include "TSliderBox.h"
#include "TClassTree.h"
#include "TFitPanel.h"
#include "TFitPanelGraph.h"
#include "TDrawPanelHist.h"
#include "TButton.h"
#include "TControlBarButton.h"
#include "TGroupButton.h"
#include "TDialogCanvas.h"
#include "TAttLineCanvas.h"
#include "TAttFillCanvas.h"
#include "TAttTextCanvas.h"
#include "TAttMarkerCanvas.h"
#include "TSlider.h"
#include "TTreeViewer.h"
#include "TPaveVar.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__GPadLN_TClass;
extern G__linked_taginfo G__G__GPadLN_TList;
extern G__linked_taginfo G__G__GPadLN_TTimer;
extern G__linked_taginfo G__G__GPadLN_TObject;
extern G__linked_taginfo G__G__GPadLN_TString;
extern G__linked_taginfo G__G__GPadLN_TNamed;
extern G__linked_taginfo G__G__GPadLN_TVirtualPad;
extern G__linked_taginfo G__G__GPadLN_EColor;
extern G__linked_taginfo G__G__GPadLN_ELineStyle;
extern G__linked_taginfo G__G__GPadLN_TAttPad;
extern G__linked_taginfo G__G__GPadLN_TAttLine;
extern G__linked_taginfo G__G__GPadLN_TAttFill;
extern G__linked_taginfo G__G__GPadLN_TBox;
extern G__linked_taginfo G__G__GPadLN_TWbox;
extern G__linked_taginfo G__G__GPadLN_TFrame;
extern G__linked_taginfo G__G__GPadLN_TAttText;
extern G__linked_taginfo G__G__GPadLN_dA;
extern G__linked_taginfo G__G__GPadLN_TView;
extern G__linked_taginfo G__G__GPadLN_TCanvas;
extern G__linked_taginfo G__G__GPadLN_TPadView3D;
extern G__linked_taginfo G__G__GPadLN_TPad;
extern G__linked_taginfo G__G__GPadLN_TAttCanvas;
extern G__linked_taginfo G__G__GPadLN_TCanvasImp;
extern G__linked_taginfo G__G__GPadLN_ECanvasEditMode;
extern G__linked_taginfo G__G__GPadLN_TContextMenu;
extern G__linked_taginfo G__G__GPadLN_TControlBar;
extern G__linked_taginfo G__G__GPadLN_TControlBarButton;
extern G__linked_taginfo G__G__GPadLN_TControlBarImp;
extern G__linked_taginfo G__G__GPadLN_TSlider;
extern G__linked_taginfo G__G__GPadLN_TSliderBox;
extern G__linked_taginfo G__G__GPadLN_TClassTree;
extern G__linked_taginfo G__G__GPadLN_TDialogCanvas;
extern G__linked_taginfo G__G__GPadLN_TFitPanel;
extern G__linked_taginfo G__G__GPadLN_TFitPanelGraph;
extern G__linked_taginfo G__G__GPadLN_TDrawPanelHist;
extern G__linked_taginfo G__G__GPadLN_TButton;
extern G__linked_taginfo G__G__GPadLN_TGroupButton;
extern G__linked_taginfo G__G__GPadLN_TAttLineCanvas;
extern G__linked_taginfo G__G__GPadLN_TAttFillCanvas;
extern G__linked_taginfo G__G__GPadLN_TAttTextCanvas;
extern G__linked_taginfo G__G__GPadLN_TAttMarkerCanvas;
extern G__linked_taginfo G__G__GPadLN_TTree;
extern G__linked_taginfo G__G__GPadLN_TPaveVar;
extern G__linked_taginfo G__G__GPadLN_TTreeViewer;
extern G__linked_taginfo G__G__GPadLN_TPave;
extern G__linked_taginfo G__G__GPadLN_TPaveLabel;
/********************************************************
* G__GPad.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__GPad() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TPad.h");
  G__add_compiledheader("TCanvas.h");
  G__add_compiledheader("TControlBar.h");
  G__add_compiledheader("TSliderBox.h");
  G__add_compiledheader("TClassTree.h");
  G__add_compiledheader("TFitPanel.h");
  G__add_compiledheader("TFitPanelGraph.h");
  G__add_compiledheader("TDrawPanelHist.h");
  G__add_compiledheader("TButton.h");
  G__add_compiledheader("TControlBarButton.h");
  G__add_compiledheader("TGroupButton.h");
  G__add_compiledheader("TDialogCanvas.h");
  G__add_compiledheader("TAttLineCanvas.h");
  G__add_compiledheader("TAttFillCanvas.h");
  G__add_compiledheader("TAttTextCanvas.h");
  G__add_compiledheader("TAttMarkerCanvas.h");
  G__add_compiledheader("TSlider.h");
  G__add_compiledheader("TTreeViewer.h");
  G__add_compiledheader("TPaveVar.h");
}
extern "C" int G__cpp_dllrevG__GPad() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TCanvas */
static int G__TCanvas_TCanvas_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCanvas *p=NULL;
   if(G__getaryconstruct()) p=new TCanvas[G__getaryconstruct()];
   else                    p=new TCanvas;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_TCanvas_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCanvas *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TCanvas((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TCanvas((const Text_t*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_TCanvas_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCanvas *p=NULL;
      p = new TCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_TCanvas_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCanvas *p=NULL;
      p = new TCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_TCanvas_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCanvas *p=NULL;
      p = new TCanvas(
(const Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_cd_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->cd((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->cd();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Clear_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Close_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Draw_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_EditorBar_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->EditorBar();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_FeedbackMode_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->FeedbackMode((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Flush_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Flush();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_UseCurrentStyle_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->UseCurrentStyle();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_ForceUpdate_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->ForceUpdate();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetDISPLAY_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCanvas*)(G__getstructoffset()))->GetDISPLAY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetContextMenu_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvas*)(G__getstructoffset()))->GetContextMenu());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetDoubleBuffer_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->GetDoubleBuffer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetEditorBar_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvas*)(G__getstructoffset()))->GetEditorBar());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetEvent_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->GetEvent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetEventX_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->GetEventX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetEventY_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->GetEventY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetHighLightColor_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TCanvas*)(G__getstructoffset()))->GetHighLightColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetPadDivision_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,89,(long)((TCanvas*)(G__getstructoffset()))->GetPadDivision((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,89,(long)((TCanvas*)(G__getstructoffset()))->GetPadDivision((Int_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,89,(long)((TCanvas*)(G__getstructoffset()))->GetPadDivision());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetPadSave_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvas*)(G__getstructoffset()))->GetPadSave());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetSelected_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvas*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetSelectedOpt_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCanvas*)(G__getstructoffset()))->GetSelectedOpt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetSelectedPad_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvas*)(G__getstructoffset()))->GetSelectedPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetShowEventStatus_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TCanvas*)(G__getstructoffset()))->GetShowEventStatus());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetXsizeUser_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TCanvas*)(G__getstructoffset()))->GetXsizeUser());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetYsizeUser_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TCanvas*)(G__getstructoffset()))->GetYsizeUser());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetXsizeReal_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TCanvas*)(G__getstructoffset()))->GetXsizeReal());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetYsizeReal_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TCanvas*)(G__getstructoffset()))->GetYsizeReal());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetCanvasID_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->GetCanvasID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetCanvasImp_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvas*)(G__getstructoffset()))->GetCanvasImp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetWindowTopX_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->GetWindowTopX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetWindowTopY_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->GetWindowTopY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetWindowWidth_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TCanvas*)(G__getstructoffset()))->GetWindowWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetWindowHeight_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TCanvas*)(G__getstructoffset()))->GetWindowHeight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetWw_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TCanvas*)(G__getstructoffset()))->GetWw());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetWh_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TCanvas*)(G__getstructoffset()))->GetWh());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_GetCanvasPar_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->GetCanvasPar(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(UInt_t*)libp->para[2].ref:G__Muint(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_HandleInput_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->HandleInput((EEventType)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_HasMenuBar_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TCanvas*)(G__getstructoffset()))->HasMenuBar());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Iconify_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_IsBatch_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TCanvas*)(G__getstructoffset()))->IsBatch());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_IsEditable_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->IsEditable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_IsRetained_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TCanvas*)(G__getstructoffset()))->IsRetained());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_ls_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_MoveOpaque_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->MoveOpaque((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->MoveOpaque();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_OpaqueMoving_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TCanvas*)(G__getstructoffset()))->OpaqueMoving());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_OpaqueResizing_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TCanvas*)(G__getstructoffset()))->OpaqueResizing());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Paint_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Resize_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Resize((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Resize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_ResizeOpaque_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->ResizeOpaque((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->ResizeOpaque();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SaveSource_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SaveSource((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SaveSource((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SaveSource();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetCursor_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetCursor((ECursor)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetDoubleBuffer_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetDoubleBuffer((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetDoubleBuffer();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetWindowPosition_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetWindowPosition((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetWindowSize_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetWindowSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetCanvasSize_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetCanvasSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetEditable_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetEditable((ECanvasEditMode)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetEditable();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetHighLightColor_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetHighLightColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetSelected_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetSelected((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Show_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Size_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Size((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Size((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Size();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetBatch_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetBatch((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetBatch();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetRetained_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetRetained((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetRetained();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_SetTitle_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetTitle((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->SetTitle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_ToggleEventStatus_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->ToggleEventStatus();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Update_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Update();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_MakeDefCanvas_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->MakeDefCanvas();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_DeclFileName_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCanvas*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_DeclFileLine_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_ImplFileName_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCanvas*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_ImplFileLine_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvas*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Class_Version_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TCanvas*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Class_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvas*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Dictionary_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_IsA_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvas*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_ShowMembers_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvas_Streamer_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvas*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TCanvas_wATCanvas_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TCanvas *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TCanvas *)((G__getstructoffset())+sizeof(TCanvas)*i);
   else  delete (TCanvas *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPad */
static int G__TPad_TPad_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPad *p=NULL;
   if(G__getaryconstruct()) p=new TPad[G__getaryconstruct()];
   else                    p=new TPad;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TPad);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_TPad_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPad *p=NULL;
   switch(libp->paran) {
   case 9:
      p = new TPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7])
,(Short_t)G__int(libp->para[8]));
      break;
   case 8:
      p = new TPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7]));
      break;
   case 7:
      p = new TPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TPad);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_AbsCoordinates_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->AbsCoordinates((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_AbsPixeltoX_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->AbsPixeltoX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_AbsPixeltoY_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->AbsPixeltoY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_AbsPixeltoXY_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->AbsPixeltoXY((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,libp->para[2].ref?*(Axis_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Axis_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Browse_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_cd_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->cd((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->cd();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Clear_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Clip_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->Clip((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_ClippingCode_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->ClippingCode((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Close_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_CopyPixmap_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->CopyPixmap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_CopyPixmaps_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->CopyPixmaps();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_CreateNewArrow_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->CreateNewArrow((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_CreateNewEllipse_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->CreateNewEllipse((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_CreateNewPad_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->CreateNewPad((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_CreateNewPave_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->CreateNewPave((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_CreateNewPolyLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->CreateNewPolyLine((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_CreateNewText_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->CreateNewText((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Divide_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Divide();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Draw_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_DrawClassObject_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->DrawClassObject((TObject*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->DrawClassObject((TObject*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_DrawFrame_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->DrawFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Text_t*)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->DrawFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_DrawLine_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->DrawLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_DrawLineNDC_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->DrawLineNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_DrawText_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->DrawText((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_DrawTextNDC_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->DrawTextNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_ExecuteEvent_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_UseCurrentStyle_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->UseCurrentStyle();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetCanvasID_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetCanvasID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetFrame_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetFrame());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetEvent_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetEvent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetEventX_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetEventX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetEventY_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetEventY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetHighLightColor_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPad*)(G__getstructoffset()))->GetHighLightColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetRange_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetRangeAxis_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->GetRangeAxis(libp->para[0].ref?*(Axis_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Axis_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Axis_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Axis_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetPadPar_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->GetPadPar(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetXlowNDC_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetXlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetYlowNDC_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetYlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetWNDC_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetWNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetHNDC_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetHNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetWw_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TPad*)(G__getstructoffset()))->GetWw());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetWh_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TPad*)(G__getstructoffset()))->GetWh());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetAbsXlowNDC_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetAbsXlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetAbsYlowNDC_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetAbsYlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetAbsWNDC_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetAbsWNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetAbsHNDC_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetAbsHNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetPhi_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetPhi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetTheta_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetTheta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetUxmin_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetUxmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetUymin_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetUymin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetUxmax_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetUxmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetUymax_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->GetUymax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetGridx_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPad*)(G__getstructoffset()))->GetGridx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetGridy_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPad*)(G__getstructoffset()))->GetGridy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetNumber_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetNumber());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetTickx_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetTickx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetTicky_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetTicky());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetListOfPrimitives_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetListOfPrimitives());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetPrimitive_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetPrimitive((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetSelected_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetPadPointer_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetPadPointer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetPadSave_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetPadSave());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetSelectedPad_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetSelectedPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetView_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetView());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetView3D_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetView3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetLogx_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetLogx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetLogy_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetLogy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetLogz_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetLogz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetMother_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetMother());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetName_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPad*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetTitle_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPad*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetCanvas_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetVirtCanvas_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->GetVirtCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetPadPaint_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetPadPaint());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_GetPixmapID_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->GetPixmapID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_HighLight_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->HighLight((Color_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->HighLight((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->HighLight();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_InspectObject_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->InspectObject((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_IsBatch_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPad*)(G__getstructoffset()))->IsBatch());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_IsFolder_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPad*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_IsModified_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPad*)(G__getstructoffset()))->IsModified());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_IsRetained_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPad*)(G__getstructoffset()))->IsRetained());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_ls_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Modified_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Modified((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Modified();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_OpaqueMoving_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPad*)(G__getstructoffset()))->OpaqueMoving());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_OpaqueResizing_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPad*)(G__getstructoffset()))->OpaqueResizing());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PadtoX_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->PadtoX((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PadtoY_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->PadtoY((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Paint_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintBox_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintBox((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Option_t*)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintBox((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintFillArea_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintFillArea((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintFillArea((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintPadFrame_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintPadFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintLine_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintLineNDC_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintLineNDC((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintLine3D_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintLine3D((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintPolyLine_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintPolyLine3D_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintPolyLine3D((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintPolyLineNDC_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintPolyLineNDC((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintPolyLineNDC((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintPolyMarker_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintModified_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintModified();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintText_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintText((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PaintTextNDC_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PaintTextNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Pick_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->Pick((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,*(TObjLink**)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PixeltoX_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->PixeltoX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PixeltoY_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->PixeltoY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_PixeltoXY_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->PixeltoXY((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,libp->para[2].ref?*(Axis_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Axis_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Pop_3_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Pop();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Print_4_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Print((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Print_5_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Print((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Range_6_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Range((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_RangeAxis_7_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->RangeAxis((Axis_t)G__double(libp->para[0]),(Axis_t)G__double(libp->para[1])
,(Axis_t)G__double(libp->para[2]),(Axis_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_RecursiveRemove_8_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_RedrawAxis_9_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->RedrawAxis();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_ResetView3D_0_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->ResetView3D((TPadView3D*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->ResetView3D();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_ResizePad_1_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->ResizePad((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->ResizePad();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SaveAs_2_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SaveAs((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SaveAs();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SavePrimitive_3_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetBorderMode_4_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetBorderMode((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetBorderSize_5_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetBorderSize((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetCanvasSize_6_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetCanvasSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetCursor_7_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetCursor((ECursor)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetDoubleBuffer_8_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetDoubleBuffer((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetDoubleBuffer();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetDrawOption_9_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetDrawOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetDrawOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetGrid_0_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetGrid();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetGridx_1_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetGridx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetGridx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetGridy_2_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetGridy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetGridy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetFillStyle_3_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetLogx_4_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetLogx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetLogx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetLogy_5_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetLogy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetLogy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetLogz_6_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetLogz((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetLogz();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetNumber_7_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetNumber((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetPad_8_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 9:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7])
,(Short_t)G__int(libp->para[8]));
      break;
   case 8:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7]));
      break;
   case 7:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetPad((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetPad_9_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetPad((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetName_0_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetName((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetSelected_1_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetSelected((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetTicks_2_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTicks((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTicks((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTicks();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetTickx_3_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTickx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTickx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetTicky_4_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTicky((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTicky();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetTitle_5_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTitle((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTitle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetTheta_6_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTheta((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetTheta();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetPhi_7_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetPhi((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetPhi();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_SetView_8_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->SetView((TView*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Update_9_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Update();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_UtoAbsPixel_0_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->UtoAbsPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_VtoAbsPixel_1_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->VtoAbsPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_UtoPixel_2_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->UtoPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_VtoPixel_3_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->VtoPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_XtoAbsPixel_4_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->XtoAbsPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_YtoAbsPixel_5_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->YtoAbsPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_XtoPad_6_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->XtoPad((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_XtoPixel_7_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->XtoPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_YtoPixel_8_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->YtoPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_XYtoAbsPixel_9_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->XYtoAbsPixel((Axis_t)G__double(libp->para[0]),(Axis_t)G__double(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_XYtoPixel_0_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->XYtoPixel((Axis_t)G__double(libp->para[0]),(Axis_t)G__double(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_YtoPad_1_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPad*)(G__getstructoffset()))->YtoPad((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_x3d_2_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->x3d((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->x3d();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_DeclFileName_3_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPad*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_DeclFileLine_4_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_ImplFileName_5_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPad*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_ImplFileLine_6_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPad*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Class_Version_7_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPad*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Class_8_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Dictionary_9_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_IsA_0_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPad*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_ShowMembers_1_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPad_Streamer_2_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPad*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPad_wATPad_3_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPad *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPad *)((G__getstructoffset())+sizeof(TPad)*i);
   else  delete (TPad *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TControlBar */
static int G__TControlBar_TControlBar_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TControlBar *p=NULL;
   if(G__getaryconstruct()) p=new TControlBar[G__getaryconstruct()];
   else                    p=new TControlBar;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TControlBar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_TControlBar_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TControlBar *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TControlBar((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TControlBar((Text_t*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TControlBar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_TControlBar_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TControlBar *p=NULL;
      p = new TControlBar(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TControlBar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_AddButton_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->AddButton((TControlBarButton*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_AddButton_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->AddButton(*(TControlBarButton*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_AddButton_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->AddButton((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Text_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->AddButton((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->AddButton((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_AddControlBar_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->AddControlBar((TControlBar*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_AddControlBar_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->AddControlBar(*(TControlBar*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_AddSeparator_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->AddSeparator();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_GetControlBarImp_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBar*)(G__getstructoffset()))->GetControlBarImp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_GetListOfButtons_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBar*)(G__getstructoffset()))->GetListOfButtons());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_GetNumberOfColumns_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBar*)(G__getstructoffset()))->GetNumberOfColumns());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_GetNumberOfRows_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBar*)(G__getstructoffset()))->GetNumberOfRows());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_GetOrientation_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBar*)(G__getstructoffset()))->GetOrientation());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_Hide_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->Hide();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_SetNumberOfColumns_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->SetNumberOfColumns((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_SetNumberOfRows_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->SetNumberOfRows((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_SetOrientation_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->SetOrientation((Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_SetOrientation_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->SetOrientation((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_Show_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_DeclFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBar*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_DeclFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBar*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_ImplFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBar*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_ImplFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBar*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_Class_Version_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TControlBar*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_Class_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBar*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_Dictionary_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_IsA_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBar*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_ShowMembers_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBar_Streamer_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBar*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TControlBar_TControlBar_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TControlBar *p;
   if(1!=libp->paran) ;
   p=new TControlBar(*(TControlBar*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TControlBar);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TControlBar_wATControlBar_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TControlBar *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TControlBar *)((G__getstructoffset())+sizeof(TControlBar)*i);
   else  delete (TControlBar *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TControlBarButton */
static int G__TControlBarButton_TControlBarButton_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TControlBarButton *p=NULL;
   if(G__getaryconstruct()) p=new TControlBarButton[G__getaryconstruct()];
   else                    p=new TControlBarButton;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_TControlBarButton_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TControlBarButton *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TControlBarButton(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TControlBarButton(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TControlBarButton((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TControlBarButton((const char*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_Create_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarButton*)(G__getstructoffset()))->Create();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_Action_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarButton*)(G__getstructoffset()))->Action();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_GetAction_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBarButton*)(G__getstructoffset()))->GetAction());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_GetType_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBarButton*)(G__getstructoffset()))->GetType());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_SetAction_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarButton*)(G__getstructoffset()))->SetAction((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_SetType_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarButton*)(G__getstructoffset()))->SetType((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_SetType_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarButton*)(G__getstructoffset()))->SetType((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBarButton*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBarButton*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBarButton*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBarButton*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TControlBarButton*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBarButton*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarButton*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBarButton*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarButton*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarButton_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarButton*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TControlBarButton_TControlBarButton_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TControlBarButton *p;
   if(1!=libp->paran) ;
   p=new TControlBarButton(*(TControlBarButton*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TControlBarButton_wATControlBarButton_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TControlBarButton *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TControlBarButton *)((G__getstructoffset())+sizeof(TControlBarButton)*i);
   else  delete (TControlBarButton *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSlider */
static int G__TSlider_TSlider_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSlider *p=NULL;
   if(G__getaryconstruct()) p=new TSlider[G__getaryconstruct()];
   else                    p=new TSlider;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_TSlider_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSlider *p=NULL;
   switch(libp->paran) {
   case 9:
      p = new TSlider(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Coord_t)G__double(libp->para[4]),(Coord_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7])
,(Short_t)G__int(libp->para[8]));
      break;
   case 8:
      p = new TSlider(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Coord_t)G__double(libp->para[4]),(Coord_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7]));
      break;
   case 7:
      p = new TSlider(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Coord_t)G__double(libp->para[4]),(Coord_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TSlider(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Coord_t)G__double(libp->para[4]),(Coord_t)G__double(libp->para[5]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_GetObject_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSlider*)(G__getstructoffset()))->GetObject());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_GetMinimum_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSlider*)(G__getstructoffset()))->GetMinimum());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_GetMaximum_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSlider*)(G__getstructoffset()))->GetMaximum());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_GetMethod_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSlider*)(G__getstructoffset()))->GetMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_Paint_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_SavePrimitive_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_SetMethod_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetMethod((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_SetObject_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetObject((TObject*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetObject();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_SetMinimum_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetMinimum((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetMinimum();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_SetMaximum_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetMaximum((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetMaximum();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_SetRange_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->SetRange();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_DeclFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSlider*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_DeclFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSlider*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_ImplFileName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSlider*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_ImplFileLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSlider*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_Class_Version_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSlider*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_Class_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSlider*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_Dictionary_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_IsA_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSlider*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_ShowMembers_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSlider_Streamer_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSlider*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSlider_wATSlider_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSlider *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSlider *)((G__getstructoffset())+sizeof(TSlider)*i);
   else  delete (TSlider *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSliderBox */
static int G__TSliderBox_TSliderBox_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSliderBox *p=NULL;
   if(G__getaryconstruct()) p=new TSliderBox[G__getaryconstruct()];
   else                    p=new TSliderBox;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TSliderBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_TSliderBox_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSliderBox *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TSliderBox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5])
,(Short_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TSliderBox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]),(Short_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TSliderBox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Color_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TSliderBox(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TSliderBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_ExecuteEvent_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSliderBox*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_SavePrimitive_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSliderBox*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_SetSlider_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSliderBox*)(G__getstructoffset()))->SetSlider((TSlider*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSliderBox*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSliderBox*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSliderBox*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSliderBox*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSliderBox*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSliderBox*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSliderBox*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSliderBox*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSliderBox*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSliderBox_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSliderBox*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TSliderBox_TSliderBox_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TSliderBox *p;
   if(1!=libp->paran) ;
   p=new TSliderBox(*(TSliderBox*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TSliderBox);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSliderBox_wATSliderBox_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSliderBox *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSliderBox *)((G__getstructoffset())+sizeof(TSliderBox)*i);
   else  delete (TSliderBox *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TClassTree */
static int G__TClassTree_TClassTree_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TClassTree *p=NULL;
   if(G__getaryconstruct()) p=new TClassTree[G__getaryconstruct()];
   else                    p=new TClassTree;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TClassTree);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_TClassTree_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TClassTree *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TClassTree(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TClassTree(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TClassTree((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TClassTree((const Text_t*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TClassTree);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_DrawTree_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->DrawTree((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->DrawTree((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->DrawTree();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_FindClassPosition_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->FindClassPosition((const char*)G__int(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_GetClasses_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClassTree*)(G__getstructoffset()))->GetClasses());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_GetShowHas_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClassTree*)(G__getstructoffset()))->GetShowHas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_GetShowMul_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClassTree*)(G__getstructoffset()))->GetShowMul());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_GetShowRef_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClassTree*)(G__getstructoffset()))->GetShowRef());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_Help_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Help();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetClasses_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetClasses((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetYoffset_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetYoffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetYoffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetLabelDx_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetLabelDx((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetLabelDx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetShowHas_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetShowHas((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetShowHas();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetShowMul_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetShowMul((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetShowMul();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetShowRef_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetShowRef((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetShowRef();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_Divide_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Divide();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetGrid_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetGrid();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetGridx_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetGridx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetGridx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetGridy_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetGridy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetGridy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetLogx_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetLogx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetLogx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetLogy_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetLogy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetLogy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetLogz_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetLogz((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetLogz();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetTickx_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetTickx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetTickx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_SetTicky_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetTicky((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->SetTicky();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_x3d_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->x3d((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->x3d();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_DeclFileName_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClassTree*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_DeclFileLine_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClassTree*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_ImplFileName_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClassTree*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_ImplFileLine_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClassTree*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_Class_Version_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TClassTree*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_Class_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClassTree*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_Dictionary_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_IsA_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClassTree*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_ShowMembers_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClassTree_Streamer_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClassTree*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TClassTree_wATClassTree_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TClassTree *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TClassTree *)((G__getstructoffset())+sizeof(TClassTree)*i);
   else  delete (TClassTree *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TDialogCanvas */
static int G__TDialogCanvas_TDialogCanvas_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDialogCanvas *p=NULL;
   if(G__getaryconstruct()) p=new TDialogCanvas[G__getaryconstruct()];
   else                    p=new TDialogCanvas;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_TDialogCanvas_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDialogCanvas *p=NULL;
      p = new TDialogCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_Apply_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Apply((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Apply();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_BuildStandardButtons_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->BuildStandardButtons();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_Divide_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Divide();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_GetRefObject_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDialogCanvas*)(G__getstructoffset()))->GetRefObject());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_GetRefPad_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDialogCanvas*)(G__getstructoffset()))->GetRefPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_Range_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Range((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_RecursiveRemove_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_SetBorderMode_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetBorderMode((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_SetGrid_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetGrid();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_SetLogx_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetLogx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetLogx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_SetLogy_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetLogy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetLogy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_SetName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetName((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_SetObject_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetObject();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_SetRefObject_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetRefObject((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_SetRefPad_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->SetRefPad((TPad*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_x3d_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->x3d((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->x3d();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_DeclFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDialogCanvas*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_DeclFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDialogCanvas*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_ImplFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDialogCanvas*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_ImplFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDialogCanvas*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_Class_Version_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDialogCanvas*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_Class_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDialogCanvas*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_Dictionary_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_IsA_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDialogCanvas*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_ShowMembers_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDialogCanvas_Streamer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDialogCanvas*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDialogCanvas_wATDialogCanvas_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TDialogCanvas *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TDialogCanvas *)((G__getstructoffset())+sizeof(TDialogCanvas)*i);
   else  delete (TDialogCanvas *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TFitPanel */
static int G__TFitPanel_TFitPanel_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFitPanel *p=NULL;
   if(G__getaryconstruct()) p=new TFitPanel[G__getaryconstruct()];
   else                    p=new TFitPanel;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TFitPanel);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_TFitPanel_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFitPanel *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TFitPanel(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TFitPanel(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TFitPanel((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TFitPanel);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_AddOption_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->AddOption((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_Apply_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->Apply((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->Apply();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_BuildStandardButtons_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->BuildStandardButtons();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_ExecuteEvent_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_GetObjectFit_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFitPanel*)(G__getstructoffset()))->GetObjectFit());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_SavePrimitive_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_SetDefaults_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->SetDefaults();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_SetFunction_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->SetFunction((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_SetSame_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->SetSame();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFitPanel*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFitPanel*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFitPanel*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFitPanel*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFitPanel*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFitPanel*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFitPanel*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanel_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanel*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFitPanel_wATFitPanel_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFitPanel *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFitPanel *)((G__getstructoffset())+sizeof(TFitPanel)*i);
   else  delete (TFitPanel *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TFitPanelGraph */
static int G__TFitPanelGraph_TFitPanelGraph_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFitPanelGraph *p=NULL;
   if(G__getaryconstruct()) p=new TFitPanelGraph[G__getaryconstruct()];
   else                    p=new TFitPanelGraph;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_TFitPanelGraph_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFitPanelGraph *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TFitPanelGraph(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TFitPanelGraph(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TFitPanelGraph((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_Apply_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFitPanelGraph*)(G__getstructoffset()))->Apply((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFitPanelGraph*)(G__getstructoffset()))->Apply();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_SavePrimitive_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanelGraph*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_DeclFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFitPanelGraph*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_DeclFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFitPanelGraph*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_ImplFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFitPanelGraph*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_ImplFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFitPanelGraph*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_Class_Version_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFitPanelGraph*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_Class_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFitPanelGraph*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_Dictionary_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanelGraph*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_IsA_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFitPanelGraph*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_ShowMembers_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanelGraph*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFitPanelGraph_Streamer_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFitPanelGraph*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFitPanelGraph_wATFitPanelGraph_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFitPanelGraph *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFitPanelGraph *)((G__getstructoffset())+sizeof(TFitPanelGraph)*i);
   else  delete (TFitPanelGraph *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TDrawPanelHist */
static int G__TDrawPanelHist_TDrawPanelHist_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDrawPanelHist *p=NULL;
   if(G__getaryconstruct()) p=new TDrawPanelHist[G__getaryconstruct()];
   else                    p=new TDrawPanelHist;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_TDrawPanelHist_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDrawPanelHist *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TDrawPanelHist(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TDrawPanelHist(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TDrawPanelHist((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_AddOption_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->AddOption((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_Apply_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->Apply((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->Apply();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_BuildStandardButtons_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->BuildStandardButtons();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_ExecuteEvent_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_GetHistogram_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDrawPanelHist*)(G__getstructoffset()))->GetHistogram());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_SavePrimitive_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_SetDefaults_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->SetDefaults();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_SetSame_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->SetSame();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDrawPanelHist*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDrawPanelHist*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDrawPanelHist*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDrawPanelHist*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDrawPanelHist*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDrawPanelHist*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDrawPanelHist*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDrawPanelHist_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDrawPanelHist*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDrawPanelHist_wATDrawPanelHist_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TDrawPanelHist *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TDrawPanelHist *)((G__getstructoffset())+sizeof(TDrawPanelHist)*i);
   else  delete (TDrawPanelHist *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TButton */
static int G__TButton_TButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TButton *p=NULL;
   if(G__getaryconstruct()) p=new TButton[G__getaryconstruct()];
   else                    p=new TButton;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_TButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TButton *p=NULL;
      p = new TButton(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Coord_t)G__double(libp->para[4]),(Coord_t)G__double(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_Divide_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Divide();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_Draw_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_ExecuteEvent_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_GetMethod_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TButton*)(G__getstructoffset()))->GetMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_Paint_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_PaintModified_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->PaintModified();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_Range_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Range((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_SavePrimitive_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_SetBorderMode_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetBorderMode((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_SetFraming_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetFraming((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetFraming();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_GetFraming_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TButton*)(G__getstructoffset()))->GetFraming());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_SetGrid_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetGrid();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_SetLogx_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetLogx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetLogx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_SetLogy_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetLogy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetLogy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_SetMethod_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetMethod((Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_SetName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->SetName((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_x3d_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->x3d((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->x3d();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_DeclFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TButton*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_DeclFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TButton*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_ImplFileName_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TButton*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_ImplFileLine_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TButton*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_Class_Version_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TButton*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_Class_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TButton*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_Dictionary_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_IsA_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TButton*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_ShowMembers_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TButton_Streamer_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TButton*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TButton_wATButton_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TButton *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TButton *)((G__getstructoffset())+sizeof(TButton)*i);
   else  delete (TButton *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGroupButton */
static int G__TGroupButton_TGroupButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGroupButton *p=NULL;
   if(G__getaryconstruct()) p=new TGroupButton[G__getaryconstruct()];
   else                    p=new TGroupButton;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TGroupButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_TGroupButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGroupButton *p=NULL;
      p = new TGroupButton(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Coord_t)G__double(libp->para[4]),(Coord_t)G__double(libp->para[5])
,(Coord_t)G__double(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TGroupButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_DisplayColorTable_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGroupButton*)(G__getstructoffset()))->DisplayColorTable((const Text_t*)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_ExecuteAction_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGroupButton*)(G__getstructoffset()))->ExecuteAction();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_ExecuteEvent_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGroupButton*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_SavePrimitive_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGroupButton*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_DeclFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGroupButton*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_DeclFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGroupButton*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_ImplFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGroupButton*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_ImplFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGroupButton*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_Class_Version_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGroupButton*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_Class_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGroupButton*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_Dictionary_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGroupButton*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_IsA_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGroupButton*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_ShowMembers_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGroupButton*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGroupButton_Streamer_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGroupButton*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGroupButton_wATGroupButton_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGroupButton *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGroupButton *)((G__getstructoffset())+sizeof(TGroupButton)*i);
   else  delete (TGroupButton *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttLineCanvas */
static int G__TAttLineCanvas_TAttLineCanvas_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttLineCanvas *p=NULL;
   if(G__getaryconstruct()) p=new TAttLineCanvas[G__getaryconstruct()];
   else                    p=new TAttLineCanvas;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_TAttLineCanvas_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttLineCanvas *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TAttLineCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TAttLineCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TAttLineCanvas((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_UpdateLineAttributes_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLineCanvas*)(G__getstructoffset()))->UpdateLineAttributes((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttLineCanvas*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttLineCanvas*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttLineCanvas*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttLineCanvas*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLineCanvas*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttLineCanvas*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLineCanvas*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttLineCanvas*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLineCanvas*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLineCanvas_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLineCanvas*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttLineCanvas_wATAttLineCanvas_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttLineCanvas *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttLineCanvas *)((G__getstructoffset())+sizeof(TAttLineCanvas)*i);
   else  delete (TAttLineCanvas *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttFillCanvas */
static int G__TAttFillCanvas_TAttFillCanvas_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttFillCanvas *p=NULL;
   if(G__getaryconstruct()) p=new TAttFillCanvas[G__getaryconstruct()];
   else                    p=new TAttFillCanvas;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_TAttFillCanvas_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttFillCanvas *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TAttFillCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TAttFillCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TAttFillCanvas((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_UpdateFillAttributes_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFillCanvas*)(G__getstructoffset()))->UpdateFillAttributes((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttFillCanvas*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttFillCanvas*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttFillCanvas*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttFillCanvas*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFillCanvas*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttFillCanvas*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFillCanvas*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttFillCanvas*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFillCanvas*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFillCanvas_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFillCanvas*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttFillCanvas_wATAttFillCanvas_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttFillCanvas *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttFillCanvas *)((G__getstructoffset())+sizeof(TAttFillCanvas)*i);
   else  delete (TAttFillCanvas *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttTextCanvas */
static int G__TAttTextCanvas_TAttTextCanvas_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttTextCanvas *p=NULL;
   if(G__getaryconstruct()) p=new TAttTextCanvas[G__getaryconstruct()];
   else                    p=new TAttTextCanvas;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_TAttTextCanvas_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttTextCanvas *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TAttTextCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TAttTextCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TAttTextCanvas((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_UpdateTextAttributes_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttTextCanvas*)(G__getstructoffset()))->UpdateTextAttributes((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Float_t)G__double(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttTextCanvas*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttTextCanvas*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttTextCanvas*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttTextCanvas*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttTextCanvas*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttTextCanvas*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttTextCanvas*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttTextCanvas*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttTextCanvas*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttTextCanvas_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttTextCanvas*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttTextCanvas_wATAttTextCanvas_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttTextCanvas *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttTextCanvas *)((G__getstructoffset())+sizeof(TAttTextCanvas)*i);
   else  delete (TAttTextCanvas *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttMarkerCanvas */
static int G__TAttMarkerCanvas_TAttMarkerCanvas_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttMarkerCanvas *p=NULL;
   if(G__getaryconstruct()) p=new TAttMarkerCanvas[G__getaryconstruct()];
   else                    p=new TAttMarkerCanvas;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_TAttMarkerCanvas_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttMarkerCanvas *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TAttMarkerCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TAttMarkerCanvas(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TAttMarkerCanvas((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_UpdateMarkerAttributes_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarkerCanvas*)(G__getstructoffset()))->UpdateMarkerAttributes((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttMarkerCanvas*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttMarkerCanvas*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttMarkerCanvas*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttMarkerCanvas*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttMarkerCanvas*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttMarkerCanvas*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarkerCanvas*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttMarkerCanvas*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarkerCanvas*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarkerCanvas_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarkerCanvas*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttMarkerCanvas_wATAttMarkerCanvas_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttMarkerCanvas *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttMarkerCanvas *)((G__getstructoffset())+sizeof(TAttMarkerCanvas)*i);
   else  delete (TAttMarkerCanvas *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPaveVar */
static int G__TPaveVar_TPaveVar_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveVar *p=NULL;
   if(G__getaryconstruct()) p=new TPaveVar[G__getaryconstruct()];
   else                    p=new TPaveVar;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TPaveVar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_TPaveVar_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveVar *p=NULL;
      p = new TPaveVar(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(const Text_t*)G__int(libp->para[4]),(TTreeViewer*)G__int(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TPaveVar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_TPaveVar_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPaveVar *p=NULL;
      p = new TPaveVar(*(TPaveVar*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TPaveVar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_Copy_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveVar*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_GetViewer_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveVar*)(G__getstructoffset()))->GetViewer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_SavePrimitive_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveVar*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_Merge_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPaveVar*)(G__getstructoffset()))->Merge((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPaveVar*)(G__getstructoffset()))->Merge();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_SetViewer_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveVar*)(G__getstructoffset()))->SetViewer((TTreeViewer*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPaveVar*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPaveVar*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPaveVar*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPaveVar*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPaveVar*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveVar*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveVar*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPaveVar*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveVar*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPaveVar_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPaveVar*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPaveVar_wATPaveVar_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPaveVar *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPaveVar *)((G__getstructoffset())+sizeof(TPaveVar)*i);
   else  delete (TPaveVar *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TTreeViewer */
static int G__TTreeViewer_TTreeViewer_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTreeViewer *p=NULL;
   if(G__getaryconstruct()) p=new TTreeViewer[G__getaryconstruct()];
   else                    p=new TTreeViewer;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_TTreeViewer_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTreeViewer *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TTreeViewer(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TTreeViewer(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TTreeViewer((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TTreeViewer((const char*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_BuildInterface_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->BuildInterface();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_CreateNewVar_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->CreateNewVar((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->CreateNewVar());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_ExecuteDraw_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->ExecuteDraw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->ExecuteDraw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_HandleTimer_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TTreeViewer*)(G__getstructoffset()))->HandleTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_IsUnder_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->IsUnder((TButton*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_IsUnderW_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->IsUnderW((TButton*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetTree_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetTree());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetDraw_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetDraw());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetScan_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetScan());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetBreak_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetBreak());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetGopt_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetGopt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetIList_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetIList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetOList_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetOList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetX_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetY_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetZ_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetZ());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetW_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetW());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetCpad_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetCpad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetHist_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetHist());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetSlider_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetSlider());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetTimer_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->GetTimer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_GetTreeName_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTreeViewer*)(G__getstructoffset()))->GetTreeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_MakeClass_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->MakeClass((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_Reorganize_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Reorganize();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetTimerInterval_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetTimerInterval((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetTimerInterval();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetTreeName_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetTreeName((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_Divide_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Divide();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetGrid_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetGrid();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetGridx_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetGridx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetGridx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetGridy_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetGridy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetGridy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetLogx_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetLogx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetLogx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetLogy_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetLogy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetLogy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetLogz_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetLogz((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetLogz();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetTickx_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetTickx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetTickx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_SetTicky_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetTicky((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->SetTicky();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_x3d_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->x3d((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->x3d();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_DeclFileName_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTreeViewer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_DeclFileLine_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTreeViewer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_ImplFileName_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTreeViewer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_ImplFileLine_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTreeViewer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_Class_Version_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TTreeViewer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_Class_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_Dictionary_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_IsA_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTreeViewer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_ShowMembers_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTreeViewer_Streamer_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTreeViewer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TTreeViewer_wATTreeViewer_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TTreeViewer *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TTreeViewer *)((G__getstructoffset())+sizeof(TTreeViewer)*i);
   else  delete (TTreeViewer *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TCanvas */

/* TPad */

/* TControlBar */

/* TControlBarButton */

/* TSlider */

/* TSliderBox */

/* TClassTree */

/* TDialogCanvas */

/* TFitPanel */

/* TFitPanelGraph */

/* TDrawPanelHist */

/* TButton */

/* TGroupButton */

/* TAttLineCanvas */

/* TAttFillCanvas */

/* TAttTextCanvas */

/* TAttMarkerCanvas */

/* TPaveVar */

/* TTreeViewer */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__GPad {
 public:
  G__Sizep2memfuncG__GPad() {p=&G__Sizep2memfuncG__GPad::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__GPad::*p)();
};

size_t G__get_sizep2memfuncG__GPad()
{
  G__Sizep2memfuncG__GPad a;
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
extern "C" void G__cpp_setup_inheritanceG__GPad() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TCanvas))) {
     TCanvas *G__Lderived;
     G__Lderived=(TCanvas*)0x1000;
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TPad))) {
     TPad *G__Lderived;
     G__Lderived=(TPad*)0x1000;
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TControlBar))) {
     TControlBar *G__Lderived;
     G__Lderived=(TControlBar*)0x1000;
     {
       TControlBarButton *G__Lpbase=(TControlBarButton*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBar),G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBar),G__get_linked_tagnum(&G__G__GPadLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBar),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton))) {
     TControlBarButton *G__Lderived;
     G__Lderived=(TControlBarButton*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton),G__get_linked_tagnum(&G__G__GPadLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TSlider))) {
     TSlider *G__Lderived;
     G__Lderived=(TSlider*)0x1000;
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox))) {
     TSliderBox *G__Lderived;
     G__Lderived=(TSliderBox*)0x1000;
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TClassTree))) {
     TClassTree *G__Lderived;
     G__Lderived=(TClassTree*)0x1000;
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas))) {
     TDialogCanvas *G__Lderived;
     G__Lderived=(TDialogCanvas*)0x1000;
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel))) {
     TFitPanel *G__Lderived;
     G__Lderived=(TFitPanel*)0x1000;
     {
       TDialogCanvas *G__Lpbase=(TDialogCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph))) {
     TFitPanelGraph *G__Lderived;
     G__Lderived=(TFitPanelGraph*)0x1000;
     {
       TFitPanel *G__Lpbase=(TFitPanel*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TDialogCanvas *G__Lpbase=(TDialogCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist))) {
     TDrawPanelHist *G__Lderived;
     G__Lderived=(TDrawPanelHist*)0x1000;
     {
       TDialogCanvas *G__Lpbase=(TDialogCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TButton))) {
     TButton *G__Lderived;
     G__Lderived=(TButton*)0x1000;
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton))) {
     TGroupButton *G__Lderived;
     G__Lderived=(TGroupButton*)0x1000;
     {
       TButton *G__Lpbase=(TButton*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TButton),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas))) {
     TAttLineCanvas *G__Lderived;
     G__Lderived=(TAttLineCanvas*)0x1000;
     {
       TDialogCanvas *G__Lpbase=(TDialogCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas))) {
     TAttFillCanvas *G__Lderived;
     G__Lderived=(TAttFillCanvas*)0x1000;
     {
       TDialogCanvas *G__Lpbase=(TDialogCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas))) {
     TAttTextCanvas *G__Lderived;
     G__Lderived=(TAttTextCanvas*)0x1000;
     {
       TDialogCanvas *G__Lpbase=(TDialogCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas))) {
     TAttMarkerCanvas *G__Lderived;
     G__Lderived=(TAttMarkerCanvas*)0x1000;
     {
       TDialogCanvas *G__Lpbase=(TDialogCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar))) {
     TPaveVar *G__Lderived;
     G__Lderived=(TPaveVar*)0x1000;
     {
       TPaveLabel *G__Lpbase=(TPaveLabel*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),G__get_linked_tagnum(&G__G__GPadLN_TPaveLabel),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TPave *G__Lpbase=(TPave*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),G__get_linked_tagnum(&G__G__GPadLN_TPave),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer))) {
     TTreeViewer *G__Lderived;
     G__Lderived=(TTreeViewer*)0x1000;
     {
       TCanvas *G__Lpbase=(TCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TPad *G__Lpbase=(TPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TVirtualPad *G__Lpbase=(TVirtualPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TPave))) {
     TPave *G__Lderived;
     G__Lderived=(TPave*)0x1000;
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPave),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPave),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPave),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPave),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__GPadLN_TPaveLabel))) {
     TPaveLabel *G__Lderived;
     G__Lderived=(TPaveLabel*)0x1000;
     {
       TPave *G__Lpbase=(TPave*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveLabel),G__get_linked_tagnum(&G__G__GPadLN_TPave),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveLabel),G__get_linked_tagnum(&G__G__GPadLN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveLabel),G__get_linked_tagnum(&G__G__GPadLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveLabel),G__get_linked_tagnum(&G__G__GPadLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveLabel),G__get_linked_tagnum(&G__G__GPadLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveLabel),G__get_linked_tagnum(&G__G__GPadLN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__GPad() {

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
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TCanvas */
static void G__setup_memvarTCanvas(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas));
   { TCanvas *p; p=(TCanvas*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fDISPLAY=",0,"Name of destination screen");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fDoubleBuffer=",0,"Double buffer flag (0=off, 1=on)");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fRetained=",0,"Retain structure flag");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Size_t"),-1,2,"fXsizeUser=",0,"User specified size of canvas along X in CM");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Size_t"),-1,2,"fYsizeUser=",0,"User specified size of canvas along Y in CM");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Size_t"),-1,2,"fXsizeReal=",0,"Current size of canvas along X in CM");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Size_t"),-1,2,"fYsizeReal=",0,"Current size of canvas along Y in CM");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCanvasID=",0,"Canvas identifier");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fWindowTopX=",0,"Top X position of window (in pixels)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fWindowTopY=",0,"Top Y position of window (in pixels)");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fWindowWidth=",0,"Width of window (including borders, etc.)");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fWindowHeight=",0,"Height of window (including menubar, borders, etc.)");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fCw=",0,"Width of the canvas along X (pixels)");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fCh=",0,"Height of the canvas along Y (pixels)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TAttCanvas),-1,-1,2,"fCatt=",0,"Canvas attributes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,-1,2,"fSelected=",0,"Currently selected object");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fSelectedOpt=",0,"Drawing option of selected object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),-1,-1,2,"fSelectedPad=",0,"Pad containing currently selected object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),-1,-1,2,"fPadSave=",0,"Pointer to saved pad in HandleInput");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEvent=",0,"Type of current or last handled event");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEventX=",0,"Last X mouse position in canvas");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEventY=",0,"Last Y mouse position in canvas");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fShowEventStatus=",0,"Show event status panel");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TControlBar),-1,-1,2,"fEditorBar=",0,"Editor control bar");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TCanvasImp),-1,-1,2,"fCanvasImp=",0,"Window system specific canvas implementation");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fMoveOpaque=",0,"Move objects in opaque mode");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fResizeOpaque=",0,"Resize objects in opaque mode");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fHighLightColor=",0,"Highlight color of active pad");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fBatch=",0,"True when in batchmode");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fMenuBar=",0,"False if no menubar is displayed");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__GPadLN_ECanvasEditMode),-1,-1,2,"fIsEditable=",0,"True if canvas is editable");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TContextMenu),-1,-1,2,"fContextMenu=",0,"Context menu pointer");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPad */
static void G__setup_memvarTPad(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad));
   { TPad *p; p=(TPad*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLogx=",0,"(=0 if X linear scale, =1 if log scale)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLogy=",0,"(=0 if Y linear scale, =1 if log scale)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLogz=",0,"(=0 if Z linear scale, =1 if log scale)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXtoAbsPixelk=",0,"Conversion coefficient for X World to absolute pixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXtoPixelk=",0,"Conversion coefficient for X World to pixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXtoPixel=",0,"xpixel = fXtoPixelk + fXtoPixel*xworld");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYtoAbsPixelk=",0,"Conversion coefficient for Y World to absolute pixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYtoPixelk=",0,"Conversion coefficient for Y World to pixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYtoPixel=",0,"ypixel = fYtoPixelk + fYtoPixel*yworld");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fUtoAbsPixelk=",0,"Conversion coefficient for U NDC to absolute pixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fUtoPixelk=",0,"Conversion coefficient for U NDC to pixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fUtoPixel=",0,"xpixel = fUtoPixelk + fUtoPixel*undc");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fVtoAbsPixelk=",0,"Conversion coefficient for Y World to absolute pixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fVtoPixelk=",0,"Conversion coefficient for Y World to pixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fVtoPixel=",0,"ypixel = fVtoPixelk + fVtoPixel*vndc");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAbsPixeltoXk=",0,"Conversion coefficient for absolute pixel to X World");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPixeltoXk=",0,"Conversion coefficient for pixel to X World");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPixeltoX=",0,"xworld = fPixeltoXk + fPixeltoX*xpixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAbsPixeltoYk=",0,"Conversion coefficient for absolute pixel to Y World");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPixeltoYk=",0,"Conversion coefficient for pixel to Y World");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPixeltoY=",0,"yworld = fPixeltoYk + fPixeltoY*ypixel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXlowNDC=",0,"X bottom left corner of pad in NDC [0,1]");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYlowNDC=",0,"Y bottom left corner of pad in NDC [0,1]");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fWNDC=",0,"Width of pad along X in NDC");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fHNDC=",0,"Height of pad along Y in NDC");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAbsXlowNDC=",0,"Absolute X top left corner of pad in NDC [0,1]");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAbsYlowNDC=",0,"Absolute Y top left corner of pad in NDC [0,1]");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAbsWNDC=",0,"Absolute Width of pad along X in NDC");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAbsHNDC=",0,"Absolute Height of pad along Y in NDC");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fUxmin=",0,"Minimum value on the X axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fUymin=",0,"Minimum value on the Y axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fUxmax=",0,"Maximum value on the X axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fUymax=",0,"Maximum value on the Y axis");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TPad),-1,-1,2,"fMother=",0,"pointer to mother of the list");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,-1,2,"fCanvas=",0,"!Pointer to mother canvas");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPixmapID=",0,"Off-screen pixmap identifier");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TList),-1,-1,2,"fPrimitives=",0,"List of primitives (subpads)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fName=",0,"Pad name");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fTitle=",0,"Pad title");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPadPaint=",0,"Set to 1 while painting the pad");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fModified=",0,"Set to true when pad is modified");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fGridx=",0,"Set to true if grid along X");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fGridy=",0,"Set to true if grid along Y");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTickx=",0,"Set to 1 if tick marks along X");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTicky=",0,"Set to 1 if tick marks along Y");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TFrame),-1,-1,2,"fFrame=",0,"Pointer to 2-D frame (if one exists)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TView),-1,-1,2,"fView=",0,"Pointer to 3-D view (if one exists)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTheta=",0,"theta angle to view as lego/surface");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhi=",0,"phi angle   to view as lego/surface");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,-1,2,"fPadPointer=",0,"free pointer");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNumber=",0,"pad number identifier");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fAbsCoord=",0,"Use absolute coordinates");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TPadView3D),-1,-1,2,"fPadView3D=",0,"3D View of this TPad");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TControlBar */
static void G__setup_memvarTControlBar(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBar));
   { TControlBar *p; p=(TControlBar*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TControlBarImp),-1,-1,2,"fControlBarImp=",0,"system specific implementation");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fOrientation=",0,"orientation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TList),-1,-1,2,"fButtons=",0,"list of buttons");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNoroc=",0,"number of rows or columns");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_dA),-1,-2,1,"kVertical=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_dA),-1,-2,1,"kHorizontal=2",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TControlBarButton */
static void G__setup_memvarTControlBarButton(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton));
   { TControlBarButton *p; p=(TControlBarButton*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fType=",0,"button type");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fAction=",0,"action to be executed");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_dA),-1,-2,1,"kButton=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_dA),-1,-2,1,"kDrawnButton=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_dA),-1,-2,1,"kSeparator=3",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSlider */
static void G__setup_memvarTSlider(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider));
   { TSlider *p; p=(TSlider*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMinimum=",0,"Slider minimum value in [0,1]");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMaximum=",0,"Slider maximum value in [0,1]");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,-1,2,"fObject=",0,"Pointer to associated object");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fMethod=",0,"command to be executed when slider is changed");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSliderBox */
static void G__setup_memvarTSliderBox(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox));
   { TSliderBox *p; p=(TSliderBox*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,-1,2,"fSlider=",0,"Pointer to slider");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TClassTree */
static void G__setup_memvarTClassTree(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree));
   { TClassTree *p; p=(TClassTree*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fClasses=",0,"List of classes to be drawn");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYoffset=",0,"offset at top of picture");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fLabelDx=",0,"width along x of TPaveLabels");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fShowMul=",0,"if 1 show multiple inheritance");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fShowHas=",0,"if 1 show \"has a\" relationship");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fShowRef=",0,"if 1 show classes relationship other than inheritance");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TDialogCanvas */
static void G__setup_memvarTDialogCanvas(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas));
   { TDialogCanvas *p; p=(TDialogCanvas*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,-1,2,"fRefObject=",0,"Pointer to object to set attributes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TPad),-1,-1,2,"fRefPad=",0,"Pad containing object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TFitPanel */
static void G__setup_memvarTFitPanel(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel));
   { TFitPanel *p; p=(TFitPanel*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fOption=",0,"Fitting options");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fFunction=",0,"Function to fit");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fSame=",0,"graphics option to superimpose new fit on existing picture");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,-1,2,"fSlider=",0,"Pointer to fitpanel slider");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,-1,2,"fObjectFit=",0,"Pointer to object to fit");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TFitPanelGraph */
static void G__setup_memvarTFitPanelGraph(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph));
   { TFitPanelGraph *p; p=(TFitPanelGraph*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TDrawPanelHist */
static void G__setup_memvarTDrawPanelHist(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist));
   { TDrawPanelHist *p; p=(TDrawPanelHist*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fOption=",0,"Fitting options");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,-1,2,"fSlider=",0,"Pointer to fitpanel slider");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,-1,2,"fHistogram=",0,"Pointer to histogram");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TButton */
static void G__setup_memvarTButton(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton));
   { TButton *p; p=(TButton*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fFocused=",0,"If cursor is in...");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fFraming=",0,"True if you want a frame to be painted when pressed");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fMethod=",0,"Method to be executed by this button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGroupButton */
static void G__setup_memvarTGroupButton(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton));
   { TGroupButton *p; p=(TGroupButton*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttLineCanvas */
static void G__setup_memvarTAttLineCanvas(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas));
   { TAttLineCanvas *p; p=(TAttLineCanvas*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttFillCanvas */
static void G__setup_memvarTAttFillCanvas(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas));
   { TAttFillCanvas *p; p=(TAttFillCanvas*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttTextCanvas */
static void G__setup_memvarTAttTextCanvas(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas));
   { TAttTextCanvas *p; p=(TAttTextCanvas*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttMarkerCanvas */
static void G__setup_memvarTAttMarkerCanvas(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas));
   { TAttMarkerCanvas *p; p=(TAttMarkerCanvas*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPaveVar */
static void G__setup_memvarTPaveVar(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar));
   { TPaveVar *p; p=(TPaveVar*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),-1,-1,2,"fViewer=",0,"Pointer to the TTreeViewer referencing this object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TTreeViewer */
static void G__setup_memvarTTreeViewer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer));
   { TTreeViewer *p; p=(TTreeViewer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__GPadLN_TString),-1,-1,2,"fTreeName=",0,"Name of the TTree to be viewed");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TTree),-1,-1,2,"fTree=",0,"!pointer to the TTree");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fDraw=",0,"Pointer to the Draw button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fScan=",0,"Pointer to the Scan button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fBreak=",0,"Pointer to the Break button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fGopt=",0,"Pointer to the Graphics option button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fIList=",0,"Pointer to the EventList In button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fOList=",0,"Pointer to the EventList Out button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fX=",0,"Pointer to the X button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fY=",0,"Pointer to the Y button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fZ=",0,"Pointer to the Z button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fW=",0,"Pointer to the W button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fCpad=",0,"Pointer to the button referencing the drawing pad");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,-1,2,"fHist=",0,"Pointer to the Histogram button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,-1,2,"fSlider=",0,"Pointer to the Event slider");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TTimer),-1,-1,2,"fTimer=",0,"!Pointer to timer");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTimerInterval=",0,"Timer interval in milliseconds");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__GPad() {
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
static void G__setup_memfuncTCanvas(void) {
   /* TCanvas */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas));
   G__memfunc_setup("TCanvas",688,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,0,1,1,4,0,"u 'TCanvas' - 1 - canvas","cannot copy canvas, use TObject::Clone",(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,1,1,1,4,0,"u 'TCanvas' - 1 - rhs","idem",(void*)NULL,0);
   G__memfunc_setup("Build",496,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CopyPixmaps",1149,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawEventStatus",1556,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,4,0,
"i - 'Int_t' 0 - button i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y U 'TObject' - 0 - selected",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ExecuteEvent",1237,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TCanvas",688,G__TCanvas_TCanvas_6_0,105,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCanvas",688,G__TCanvas_TCanvas_7_0,105,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,0,3,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 \"\" title "
"i - 'Int_t' 0 1 form",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCanvas",688,G__TCanvas_TCanvas_8_0,105,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"i - 'Int_t' 0 - ww i - 'Int_t' 0 - wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCanvas",688,G__TCanvas_TCanvas_9_0,105,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,0,6,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"i - 'Int_t' 0 - wtopx i - 'Int_t' 0 - wtopy "
"i - 'Int_t' 0 - ww i - 'Int_t' 0 - wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCanvas",688,G__TCanvas_TCanvas_0_1,105,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name i - 'Int_t' 0 - ww "
"i - 'Int_t' 0 - wh i - 'Int_t' 0 - winid",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("cd",199,G__TCanvas_cd_2_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 subpadnumber",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Clear",487,G__TCanvas_Clear_3_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Close",502,G__TCanvas_Close_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TCanvas_Draw_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EditorBar",892,G__TCanvas_EditorBar_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FeedbackMode",1162,G__TCanvas_FeedbackMode_7_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - set",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Flush",514,G__TCanvas_Flush_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UseCurrentStyle",1569,G__TCanvas_UseCurrentStyle_9_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("ForceUpdate",1106,G__TCanvas_ForceUpdate_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDISPLAY",822,G__TCanvas_GetDISPLAY_1_2,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetContextMenu",1434,G__TCanvas_GetContextMenu_2_2,85,G__get_linked_tagnum(&G__G__GPadLN_TContextMenu),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDoubleBuffer",1493,G__TCanvas_GetDoubleBuffer_3_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEditorBar",1180,G__TCanvas_GetEditorBar_4_2,85,G__get_linked_tagnum(&G__G__GPadLN_TControlBar),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEvent",802,G__TCanvas_GetEvent_5_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEventX",890,G__TCanvas_GetEventX_6_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEventY",891,G__TCanvas_GetEventY_7_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHighLightColor",1687,G__TCanvas_GetHighLightColor_8_2,115,-1,G__defined_typename("Color_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPadDivision",1402,G__TCanvas_GetPadDivision_9_2,89,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 xdivision i - 'Int_t' 0 1 ydivision",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPadSave",964,G__TCanvas_GetPadSave_0_3,85,G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelected",1097,G__TCanvas_GetSelected_1_3,85,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedOpt",1404,G__TCanvas_GetSelectedOpt_2_3,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSelectedPad",1374,G__TCanvas_GetSelectedPad_3_3,85,G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetShowEventStatus",1863,G__TCanvas_GetShowEventStatus_4_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXsizeUser",1234,G__TCanvas_GetXsizeUser_5_3,102,-1,G__defined_typename("Size_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetYsizeUser",1235,G__TCanvas_GetYsizeUser_6_3,102,-1,G__defined_typename("Size_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXsizeReal",1207,G__TCanvas_GetXsizeReal_7_3,102,-1,G__defined_typename("Size_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetYsizeReal",1208,G__TCanvas_GetYsizeReal_8_3,102,-1,G__defined_typename("Size_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasID",1033,G__TCanvas_GetCanvasID_9_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCanvasImp",1186,G__TCanvas_GetCanvasImp_0_4,85,G__get_linked_tagnum(&G__G__GPadLN_TCanvasImp),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWindowTopX",1315,G__TCanvas_GetWindowTopX_1_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWindowTopY",1316,G__TCanvas_GetWindowTopY_2_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWindowWidth",1432,G__TCanvas_GetWindowWidth_3_4,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWindowHeight",1521,G__TCanvas_GetWindowHeight_4_4,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWw",494,G__TCanvas_GetWw_5_4,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWh",479,G__TCanvas_GetWh_6_4,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCanvasPar",1183,G__TCanvas_GetCanvasPar_7_4,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 1 - wtopx i - 'Int_t' 1 - wtopy "
"h - 'UInt_t' 1 - ww h - 'UInt_t' 1 - wh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleInput",1116,G__TCanvas_HandleInput_8_4,121,-1,-1,0,3,1,1,0,
"i 'EEventType' - 0 - button i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HasMenuBar",966,G__TCanvas_HasMenuBar_9_4,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Iconify",721,G__TCanvas_Iconify_0_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsBatch",670,G__TCanvas_IsBatch_1_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsEditable",982,G__TCanvas_IsEditable_2_5,105,G__get_linked_tagnum(&G__G__GPadLN_ECanvasEditMode),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsRetained",1000,G__TCanvas_IsRetained_3_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TCanvas_ls_4_5,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveOpaque",1026,G__TCanvas_MoveOpaque_5_5,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 set",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("OpaqueMoving",1243,G__TCanvas_OpaqueMoving_6_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpaqueResizing",1462,G__TCanvas_OpaqueResizing_7_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TCanvas_Paint_8_5,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Resize",626,G__TCanvas_Resize_9_5,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeOpaque",1245,G__TCanvas_ResizeOpaque_0_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 set",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SaveSource",1024,G__TCanvas_SaveSource_1_6,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 \"\" filename C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCursor",938,G__TCanvas_SetCursor_2_6,121,-1,-1,0,1,1,1,0,"i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBuffer",1505,G__TCanvas_SetDoubleBuffer_3_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowPosition",1785,G__TCanvas_SetWindowPosition_4_6,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWindowSize",1343,G__TCanvas_SetWindowSize_5_6,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - ww h - 'UInt_t' 0 - wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasSize",1315,G__TCanvas_SetCanvasSize_6_6,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - ww h - 'UInt_t' 0 - wh","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetEditable",1094,G__TCanvas_SetEditable_7_6,121,-1,-1,0,1,1,1,0,"i 'ECanvasEditMode' - 0 kIsEditable mode","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetHighLightColor",1699,G__TCanvas_SetHighLightColor_8_6,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - col",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSelected",1109,G__TCanvas_SetSelected_9_6,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TCanvas_Show_0_7,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Size",411,G__TCanvas_Size_1_7,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0 xsizeuser f - 'Float_t' 0 0 ysizeuser",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBatch",782,G__TCanvas_SetBatch_2_7,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE batch",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetRetained",1112,G__TCanvas_SetRetained_3_7,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE retained",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitle",814,G__TCanvas_SetTitle_4_7,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ToggleEventStatus",1768,G__TCanvas_ToggleEventStatus_5_7,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Update",611,G__TCanvas_Update_6_7,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MakeDefCanvas",1257,G__TCanvas_MakeDefCanvas_7_7,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TCanvas_DeclFileName_8_7,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TCanvas_DeclFileLine_9_7,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TCanvas_ImplFileName_0_8,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TCanvas_ImplFileLine_1_8,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TCanvas_Class_Version_2_8,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TCanvas_Class_3_8,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TCanvas_Dictionary_4_8,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TCanvas_IsA_5_8,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TCanvas_ShowMembers_6_8,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TCanvas_Streamer_7_8,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TCanvas",814,G__TCanvas_wATCanvas_8_8,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPad(void) {
   /* TPad */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad));
   G__memfunc_setup("TPad",361,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__GPadLN_TPad),-1,0,1,1,4,0,"u 'TPad' - 1 - pad","cannot copy pads, use TObject::Clone()",(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__GPadLN_TPad),-1,1,1,1,4,0,"u 'TPad' - 1 - rhs","idem",(void*)NULL,0);
   G__memfunc_setup("CopyBackgroundPixmap",2058,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CopyBackgroundPixmaps",2173,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,4,0,
"U 'TPad' - 0 - start U 'TPad' - 0 - stop "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPad",361,G__TPad_TPad_4_0,105,G__get_linked_tagnum(&G__G__GPadLN_TPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPad",361,G__TPad_TPad_5_0,105,G__get_linked_tagnum(&G__G__GPadLN_TPad),-1,0,9,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"f - 'Float_t' 0 - xlow f - 'Float_t' 0 - ylow "
"f - 'Float_t' 0 - xup f - 'Float_t' 0 - yup "
"s - 'Color_t' 0 -1 color s - 'Short_t' 0 -1 bordersize "
"s - 'Short_t' 0 -2 bordermode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AbsCoordinates",1425,G__TPad_AbsCoordinates_7_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - set",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AbsPixeltoX",1107,G__TPad_AbsPixeltoX_8_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - px",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AbsPixeltoY",1108,G__TPad_AbsPixeltoY_9_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AbsPixeltoXY",1196,G__TPad_AbsPixeltoXY_0_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - xpixel i - 'Int_t' 0 - ypixel "
"f - 'Axis_t' 1 - x f - 'Axis_t' 1 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Browse",626,G__TPad_Browse_1_1,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("cd",199,G__TPad_cd_2_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 subpadnumber",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Clear",487,G__TPad_Clear_3_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Clip",392,G__TPad_Clip_4_1,105,-1,G__defined_typename("Int_t"),0,6,1,1,0,
"F - 'Float_t' 0 - x F - 'Float_t' 0 - y "
"f - 'Float_t' 0 - xclipl f - 'Float_t' 0 - yclipb "
"f - 'Float_t' 0 - xclipr f - 'Float_t' 0 - yclipt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClippingCode",1201,G__TPad_ClippingCode_5_1,105,-1,G__defined_typename("Int_t"),0,6,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - xcl1 f - 'Float_t' 0 - ycl1 "
"f - 'Float_t' 0 - xcl2 f - 'Float_t' 0 - ycl2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Close",502,G__TPad_Close_6_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyPixmap",1034,G__TPad_CopyPixmap_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyPixmaps",1149,G__TPad_CopyPixmaps_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateNewArrow",1417,G__TPad_CreateNewArrow_9_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateNewEllipse",1612,G__TPad_CreateNewEllipse_0_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateNewPad",1171,G__TPad_CreateNewPad_1_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateNewPave",1290,G__TPad_CreateNewPave_2_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateNewPolyLine",1706,G__TPad_CreateNewPolyLine_3_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateNewText",1315,G__TPad_CreateNewText_4_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Divide",597,G__TPad_Divide_5_2,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 1 nx i - 'Int_t' 0 1 ny "
"f - 'Float_t' 0 0.01 xmargin f - 'Float_t' 0 0.01 ymargin "
"i - 'Int_t' 0 0 color","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPad_Draw_6_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawClassObject",1499,G__TPad_DrawClassObject_7_2,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - obj C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawFrame",889,G__TPad_DrawFrame_8_2,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax "
"C - 'Text_t' 0 \"\" title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TPad_DrawLine_9_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLineNDC",1003,G__TPad_DrawLineNDC_0_3,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - u1 f - 'Float_t' 0 - v1 "
"f - 'Float_t' 0 - u2 f - 'Float_t' 0 - v2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawText",819,G__TPad_DrawText_1_3,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawTextNDC",1032,G__TPad_DrawTextNDC_2_3,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - u f - 'Float_t' 0 - v "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TPad_ExecuteEvent_3_3,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UseCurrentStyle",1569,G__TPad_UseCurrentStyle_4_3,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("GetCanvasID",1033,G__TPad_GetCanvasID_5_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFrame",779,G__TPad_GetFrame_6_3,85,G__get_linked_tagnum(&G__G__GPadLN_TFrame),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEvent",802,G__TPad_GetEvent_7_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEventX",890,G__TPad_GetEventX_8_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEventY",891,G__TPad_GetEventY_9_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHighLightColor",1687,G__TPad_GetHighLightColor_0_4,115,-1,G__defined_typename("Color_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TPad_GetRange_1_4,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - x1 f - 'Float_t' 1 - y1 "
"f - 'Float_t' 1 - x2 f - 'Float_t' 1 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRangeAxis",1186,G__TPad_GetRangeAxis_2_4,121,-1,-1,0,4,1,1,0,
"f - 'Axis_t' 1 - xmin f - 'Axis_t' 1 - ymin "
"f - 'Axis_t' 1 - xmax f - 'Axis_t' 1 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPadPar",856,G__TPad_GetPadPar_3_4,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xlow f - 'Float_t' 1 - ylow "
"f - 'Float_t' 1 - xup f - 'Float_t' 1 - yup",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetXlowNDC",927,G__TPad_GetXlowNDC_4_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetYlowNDC",928,G__TPad_GetYlowNDC_5_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWNDC",588,G__TPad_GetWNDC_6_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHNDC",573,G__TPad_GetHNDC_7_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWw",494,G__TPad_GetWw_8_4,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWh",479,G__TPad_GetWh_9_4,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAbsXlowNDC",1205,G__TPad_GetAbsXlowNDC_0_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAbsYlowNDC",1206,G__TPad_GetAbsYlowNDC_1_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAbsWNDC",866,G__TPad_GetAbsWNDC_2_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAbsHNDC",851,G__TPad_GetAbsHNDC_3_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPhi",577,G__TPad_GetPhi_4_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTheta",790,G__TPad_GetTheta_5_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetUxmin",817,G__TPad_GetUxmin_6_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetUymin",818,G__TPad_GetUymin_7_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetUxmax",819,G__TPad_GetUxmax_8_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetUymax",820,G__TPad_GetUymax_9_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGridx",798,G__TPad_GetGridx_0_6,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGridy",799,G__TPad_GetGridy_1_6,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNumber",905,G__TPad_GetNumber_2_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTickx",803,G__TPad_GetTickx_3_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTicky",804,G__TPad_GetTicky_4_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetListOfPrimitives",1949,G__TPad_GetListOfPrimitives_5_6,85,G__get_linked_tagnum(&G__G__GPadLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrimitive",1241,G__TPad_GetPrimitive_6_6,85,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelected",1097,G__TPad_GetSelected_7_6,85,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPadPointer",1302,G__TPad_GetPadPointer_8_6,85,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPadSave",964,G__TPad_GetPadSave_9_6,85,G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedPad",1374,G__TPad_GetSelectedPad_0_7,85,G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetView",699,G__TPad_GetView_1_7,85,G__get_linked_tagnum(&G__G__GPadLN_TView),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetView3D",818,G__TPad_GetView3D_2_7,85,G__get_linked_tagnum(&G__G__GPadLN_TPadView3D),-1,0,0,1,1,0,"","Return 3D View of this TPad",(void*)NULL,1);
   G__memfunc_setup("GetLogx",698,G__TPad_GetLogx_3_7,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLogy",699,G__TPad_GetLogy_4_7,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLogz",700,G__TPad_GetLogz_5_7,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMother",911,G__TPad_GetMother_6_7,85,G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetName",673,G__TPad_GetName_7_7,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TPad_GetTitle_8_7,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCanvas",892,G__TPad_GetCanvas_9_7,85,G__get_linked_tagnum(&G__G__GPadLN_TCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetVirtCanvas",1313,G__TPad_GetVirtCanvas_0_8,85,G__get_linked_tagnum(&G__G__GPadLN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPadPaint",1073,G__TPad_GetPadPaint_1_8,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPixmapID",1052,G__TPad_GetPixmapID_2_8,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HighLight",888,G__TPad_HighLight_3_8,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 kRed col b - 'Bool_t' 0 kTRUE set",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InspectObject",1325,G__TPad_InspectObject_4_8,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsBatch",670,G__TPad_IsBatch_5_8,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsFolder",792,G__TPad_IsFolder_6_8,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsModified",989,G__TPad_IsModified_7_8,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsRetained",1000,G__TPad_IsRetained_8_8,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TPad_ls_9_8,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Modified",801,G__TPad_Modified_0_9,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 1 flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpaqueMoving",1243,G__TPad_OpaqueMoving_1_9,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpaqueResizing",1462,G__TPad_OpaqueResizing_2_9,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PadtoX",592,G__TPad_PadtoX_3_9,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"f - 'Float_t' 0 - x",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PadtoY",593,G__TPad_PadtoY_4_9,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"f - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPad_Paint_5_9,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintBox",805,G__TPad_PaintBox_6_9,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2 "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintFillArea",1276,G__TPad_PaintFillArea_7_9,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPadFrame",1276,G__TPad_PaintPadFrame_8_9,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintLine",900,G__TPad_PaintLine_9_9,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintLineNDC",1113,G__TPad_PaintLineNDC_0_10,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - u1 f - 'Coord_t' 0 - v1 "
"f - 'Coord_t' 0 - u2 f - 'Coord_t' 0 - v2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintLine3D",1019,G__TPad_PaintLine3D_1_10,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - p1 F - 'Float_t' 0 - p2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLine",1320,G__TPad_PaintPolyLine_2_10,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLine3D",1439,G__TPad_PaintPolyLine3D_3_10,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLineNDC",1533,G__TPad_PaintPolyLineNDC_4_10,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyMarker",1538,G__TPad_PaintPolyMarker_5_10,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintModified",1309,G__TPad_PaintModified_6_10,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintText",929,G__TPad_PaintText_7_10,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintTextNDC",1142,G__TPad_PaintTextNDC_8_10,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - u f - 'Float_t' 0 - v "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Pick",391,G__TPad_Pick_9_10,85,G__get_linked_tagnum(&G__G__GPadLN_TPad),-1,0,3,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py "
"U 'TObjLink' - 1 - pickobj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PixeltoX",829,G__TPad_PixeltoX_0_11,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - px",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PixeltoY",830,G__TPad_PixeltoY_1_11,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PixeltoXY",918,G__TPad_PixeltoXY_2_11,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - xpixel i - 'Int_t' 0 - ypixel "
"f - 'Axis_t' 1 - x f - 'Axis_t' 1 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Pop",303,G__TPad_Pop_3_11,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPad_Print_4_11,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" filename",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPad_Print_5_11,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 - filename C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Range",493,G__TPad_Range_6_11,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2","*MENU* *ARGS={x1=>fX1,y1=>fY1,x2=>fX2,y2=>fY2}",(void*)NULL,1);
   G__memfunc_setup("RangeAxis",898,G__TPad_RangeAxis_7_11,121,-1,-1,0,4,1,1,0,
"f - 'Axis_t' 0 - xmin f - 'Axis_t' 0 - ymin "
"f - 'Axis_t' 0 - xmax f - 'Axis_t' 0 - ymax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecursiveRemove",1574,G__TPad_RecursiveRemove_8_11,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RedrawAxis",1018,G__TPad_RedrawAxis_9_11,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetView3D",1045,G__TPad_ResetView3D_0_12,121,-1,-1,0,1,1,1,0,"U 'TPadView3D' - 0 0 view",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizePad",903,G__TPad_ResizePad_1_12,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveAs",579,G__TPad_SaveAs_2_12,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" filename","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPad_SavePrimitive_3_12,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBorderMode",1295,G__TPad_SetBorderMode_4_12,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordermode","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetBorderSize",1317,G__TPad_SetBorderSize_5_12,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordersize","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetCanvasSize",1315,G__TPad_SetCanvasSize_6_12,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - ww h - 'UInt_t' 0 - wh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TPad_SetCursor_7_12,121,-1,-1,0,1,1,1,0,"i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBuffer",1505,G__TPad_SetDoubleBuffer_8_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDrawOption",1331,G__TPad_SetDrawOption_9_12,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGrid",690,G__TPad_SetGrid_0_13,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGridx",810,G__TPad_SetGridx_1_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetGridy",811,G__TPad_SetGridy_2_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetFillStyle",1220,G__TPad_SetFillStyle_3_13,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - fstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogx",710,G__TPad_SetLogx_4_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetLogy",711,G__TPad_SetLogy_5_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetLogz",712,G__TPad_SetLogz_6_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetNumber",917,G__TPad_SetNumber_7_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - number",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPad",577,G__TPad_SetPad_8_13,121,-1,-1,0,9,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"f - 'Float_t' 0 - xlow f - 'Float_t' 0 - ylow "
"f - 'Float_t' 0 - xup f - 'Float_t' 0 - yup "
"s - 'Color_t' 0 35 color s - 'Short_t' 0 5 bordersize "
"s - 'Short_t' 0 -1 bordermode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPad",577,G__TPad_SetPad_9_13,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xlow f - 'Float_t' 0 - ylow "
"f - 'Float_t' 0 - xup f - 'Float_t' 0 - yup",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetName",685,G__TPad_SetName_0_14,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - name","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetSelected",1109,G__TPad_SetSelected_1_14,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTicks",810,G__TPad_SetTicks_2_14,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTickx",815,G__TPad_SetTickx_3_14,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetTicky",816,G__TPad_SetTicky_4_14,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetTitle",814,G__TPad_SetTitle_5_14,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTheta",802,G__TPad_SetTheta_6_14,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 30 theta",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPhi",589,G__TPad_SetPhi_7_14,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 30 phi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetView",711,G__TPad_SetView_8_14,121,-1,-1,0,1,1,1,0,"U 'TView' - 0 - view",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Update",611,G__TPad_Update_9_14,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UtoAbsPixel",1104,G__TPad_UtoAbsPixel_0_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - u",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("VtoAbsPixel",1105,G__TPad_VtoAbsPixel_1_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UtoPixel",826,G__TPad_UtoPixel_2_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - u",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("VtoPixel",827,G__TPad_VtoPixel_3_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("XtoAbsPixel",1107,G__TPad_XtoAbsPixel_4_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("YtoAbsPixel",1108,G__TPad_YtoAbsPixel_5_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("XtoPad",592,G__TPad_XtoPad_6_15,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("XtoPixel",829,G__TPad_XtoPixel_7_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("YtoPixel",830,G__TPad_YtoPixel_8_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("XYtoAbsPixel",1196,G__TPad_XYtoAbsPixel_9_15,121,-1,-1,0,4,1,1,0,
"f - 'Axis_t' 0 - x f - 'Axis_t' 0 - y "
"i - 'Int_t' 1 - xpixel i - 'Int_t' 1 - ypixel",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("XYtoPixel",918,G__TPad_XYtoPixel_0_16,121,-1,-1,0,4,1,1,0,
"f - 'Axis_t' 0 - x f - 'Axis_t' 0 - y "
"i - 'Int_t' 1 - xpixel i - 'Int_t' 1 - ypixel",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("YtoPad",593,G__TPad_YtoPad_1_16,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("x3d",271,G__TPad_x3d_2_16,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPad_DeclFileName_3_16,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPad_DeclFileLine_4_16,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPad_ImplFileName_5_16,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPad_ImplFileLine_6_16,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPad_Class_Version_7_16,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPad_Class_8_16,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPad_Dictionary_9_16,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPad_IsA_0_17,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPad_ShowMembers_1_17,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPad_Streamer_2_17,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPad",487,G__TPad_wATPad_3_17,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTControlBar(void) {
   /* TControlBar */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBar));
   G__memfunc_setup("Create",596,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Initialize",1042,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TControlBar",1098,G__TControlBar_TControlBar_2_0,105,G__get_linked_tagnum(&G__G__GPadLN_TControlBar),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TControlBar",1098,G__TControlBar_TControlBar_3_0,105,G__get_linked_tagnum(&G__G__GPadLN_TControlBar),-1,0,2,1,1,0,
"C - 'Text_t' 0 - orientation C - 'Text_t' 0 \"\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TControlBar",1098,G__TControlBar_TControlBar_4_0,105,G__get_linked_tagnum(&G__G__GPadLN_TControlBar),-1,0,4,1,1,0,
"C - 'Text_t' 0 - orientation C - 'Text_t' 0 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddButton",901,G__TControlBar_AddButton_6_0,121,-1,-1,0,1,1,1,0,"U 'TControlBarButton' - 0 - button",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddButton",901,G__TControlBar_AddButton_7_0,121,-1,-1,0,1,1,1,0,"u 'TControlBarButton' - 1 - button",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddButton",901,G__TControlBar_AddButton_8_0,121,-1,-1,0,4,1,1,0,
"C - 'Text_t' 0 - label C - 'Text_t' 0 - action "
"C - 'Text_t' 0 \"\" hint C - 'Text_t' 0 \"button\" type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddControlBar",1279,G__TControlBar_AddControlBar_9_0,121,-1,-1,0,1,1,1,0,"U 'TControlBar' - 0 - controlBar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddControlBar",1279,G__TControlBar_AddControlBar_0_1,121,-1,-1,0,1,1,1,0,"u 'TControlBar' - 1 - controlBar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddSeparator",1210,G__TControlBar_AddSeparator_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetControlBarImp",1596,G__TControlBar_GetControlBarImp_2_1,85,G__get_linked_tagnum(&G__G__GPadLN_TControlBarImp),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfButtons",1632,G__TControlBar_GetListOfButtons_3_1,85,G__get_linked_tagnum(&G__G__GPadLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNumberOfColumns",1823,G__TControlBar_GetNumberOfColumns_4_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNumberOfRows",1513,G__TControlBar_GetNumberOfRows_5_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOrientation",1452,G__TControlBar_GetOrientation_6_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hide",378,G__TControlBar_Hide_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetNumberOfColumns",1835,G__TControlBar_SetNumberOfColumns_8_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetNumberOfRows",1525,G__TControlBar_SetNumberOfRows_9_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOrientation",1464,G__TControlBar_SetOrientation_0_2,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - o",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOrientation",1464,G__TControlBar_SetOrientation_1_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - o",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Show",417,G__TControlBar_Show_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TControlBar_DeclFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TControlBar_DeclFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TControlBar_ImplFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TControlBar_ImplFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TControlBar_Class_Version_7_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TControlBar_Class_8_2,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TControlBar_Dictionary_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TControlBar_IsA_0_3,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TControlBar_ShowMembers_1_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TControlBar_Streamer_2_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TControlBar",1098,G__TControlBar_TControlBar_3_3,(int)('i'),G__get_linked_tagnum(&G__G__GPadLN_TControlBar),-1,0,1,1,1,0,"u 'TControlBar' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TControlBar",1224,G__TControlBar_wATControlBar_4_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTControlBarButton(void) {
   /* TControlBarButton */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton));
   G__memfunc_setup("TControlBarButton",1734,G__TControlBarButton_TControlBarButton_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TControlBarButton",1734,G__TControlBarButton_TControlBarButton_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton),-1,0,4,1,1,0,
"C - - 0 - label C - - 0 \"\" action "
"C - - 0 \"\" hint C - - 0 \"button\" type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Create",596,G__TControlBarButton_Create_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Action",606,G__TControlBarButton_Action_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAction",894,G__TControlBarButton_GetAction_5_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetType",706,G__TControlBarButton_GetType_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAction",906,G__TControlBarButton_SetAction_7_0,121,-1,-1,0,1,1,1,0,"C - - 0 - action",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetType",718,G__TControlBarButton_SetType_8_0,121,-1,-1,0,1,1,1,0,"C - - 0 - type",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetType",718,G__TControlBarButton_SetType_9_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - type",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TControlBarButton_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TControlBarButton_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TControlBarButton_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TControlBarButton_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TControlBarButton_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TControlBarButton_Class_5_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TControlBarButton_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TControlBarButton_IsA_7_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TControlBarButton_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TControlBarButton_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TControlBarButton",1734,G__TControlBarButton_TControlBarButton_0_2,(int)('i'),G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton),-1,0,1,1,1,0,"u 'TControlBarButton' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TControlBarButton",1860,G__TControlBarButton_wATControlBarButton_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSlider(void) {
   /* TSlider */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider));
   G__memfunc_setup("TSlider",695,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,0,1,1,4,0,"u 'TSlider' - 1 - org","no copy, use TObject::Clone()",(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,1,1,1,4,0,"u 'TSlider' - 1 - rhs","idem",(void*)NULL,0);
   G__memfunc_setup("TSlider",695,G__TSlider_TSlider_2_0,105,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSlider",695,G__TSlider_TSlider_3_0,105,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,0,9,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"s - 'Color_t' 0 16 color s - 'Short_t' 0 2 bordersize "
"s - 'Short_t' 0 -1 bordermode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetObject",887,G__TSlider_GetObject_5_0,85,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMinimum",1020,G__TSlider_GetMinimum_6_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMaximum",1022,G__TSlider_GetMaximum_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMethod",897,G__TSlider_GetMethod_8_0,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TSlider_Paint_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TSlider_SavePrimitive_0_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMethod",909,G__TSlider_SetMethod_1_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - method","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetObject",899,G__TSlider_SetObject_2_1,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 0 obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMinimum",1032,G__TSlider_SetMinimum_3_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 min",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMaximum",1034,G__TSlider_SetMaximum_4_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TSlider_SetRange_5_1,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0 xmin f - 'Float_t' 0 1 xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TSlider_DeclFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSlider_DeclFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSlider_ImplFileName_8_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSlider_ImplFileLine_9_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSlider_Class_Version_0_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TSlider_Class_1_2,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSlider_Dictionary_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSlider_IsA_3_2,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSlider_ShowMembers_4_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSlider_Streamer_5_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TSlider",821,G__TSlider_wATSlider_6_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSliderBox(void) {
   /* TSliderBox */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox));
   G__memfunc_setup("TSliderBox",992,G__TSliderBox_TSliderBox_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSliderBox",992,G__TSliderBox_TSliderBox_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),-1,0,7,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"s - 'Color_t' 0 18 color s - 'Short_t' 0 2 bordersize "
"s - 'Short_t' 0 -1 bordermode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ExecuteEvent",1237,G__TSliderBox_ExecuteEvent_3_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TSliderBox_SavePrimitive_4_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSlider",911,G__TSliderBox_SetSlider_5_0,121,-1,-1,0,1,1,1,0,"U 'TSlider' - 0 - slider",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TSliderBox_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSliderBox_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSliderBox_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSliderBox_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSliderBox_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TSliderBox_Class_1_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSliderBox_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSliderBox_IsA_3_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSliderBox_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSliderBox_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TSliderBox",992,G__TSliderBox_TSliderBox_6_1,(int)('i'),G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),-1,0,1,1,1,0,"u 'TSliderBox' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TSliderBox",1118,G__TSliderBox_wATSliderBox_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTClassTree(void) {
   /* TClassTree */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree));
   G__memfunc_setup("ShowHas",701,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMul",719,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowRef",702,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TClassTree",986,G__TClassTree_TClassTree_3_0,105,G__get_linked_tagnum(&G__G__GPadLN_TClassTree),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TClassTree",986,G__TClassTree_TClassTree_4_0,105,G__get_linked_tagnum(&G__G__GPadLN_TClassTree),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 \"\" title "
"h - 'UInt_t' 0 900 ww h - 'UInt_t' 0 700 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawTree",798,G__TClassTree_DrawTree_6_0,121,-1,-1,0,2,1,1,0,
"C - - 0 \"\" uclasses C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("FindClassPosition",1740,G__TClassTree_FindClassPosition_7_0,121,-1,-1,0,3,1,1,0,
"C - - 0 - classname f - 'Float_t' 1 - x "
"f - 'Float_t' 1 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetClasses",1006,G__TClassTree_GetClasses_8_0,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShowHas",989,G__TClassTree_GetShowHas_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShowMul",1007,G__TClassTree_GetShowMul_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShowRef",990,G__TClassTree_GetShowRef_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Help",393,G__TClassTree_Help_2_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetClasses",1018,G__TClassTree_SetClasses_3_1,121,-1,-1,0,1,1,1,0,"C - - 0 - classes","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetYoffset",1036,G__TClassTree_SetYoffset_4_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 2 offset","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetLabelDx",968,G__TClassTree_SetLabelDx_5_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 3.9 labeldx","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetShowHas",1001,G__TClassTree_SetShowHas_6_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 showhas","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetShowMul",1019,G__TClassTree_SetShowMul_7_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 showmul","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("SetShowRef",1002,G__TClassTree_SetShowRef_8_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 showref","*TOGGLE*",(void*)NULL,1);
   G__memfunc_setup("Divide",597,G__TClassTree_Divide_9_1,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 1 nx i - 'Int_t' 0 1 ny "
"f - 'Float_t' 0 0.01 xmargin f - 'Float_t' 0 0.01 ymargin "
"i - 'Int_t' 0 0 color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGrid",690,G__TClassTree_SetGrid_0_2,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGridx",810,G__TClassTree_SetGridx_1_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGridy",811,G__TClassTree_SetGridy_2_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogx",710,G__TClassTree_SetLogx_3_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogy",711,G__TClassTree_SetLogy_4_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogz",712,G__TClassTree_SetLogz_5_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTickx",815,G__TClassTree_SetTickx_6_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTicky",816,G__TClassTree_SetTicky_7_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("x3d",271,G__TClassTree_x3d_8_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TClassTree_DeclFileName_9_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TClassTree_DeclFileLine_0_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TClassTree_ImplFileName_1_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TClassTree_ImplFileLine_2_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TClassTree_Class_Version_3_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TClassTree_Class_4_3,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TClassTree_Dictionary_5_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TClassTree_IsA_6_3,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TClassTree_ShowMembers_7_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TClassTree_Streamer_8_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TClassTree",1112,G__TClassTree_wATClassTree_9_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDialogCanvas(void) {
   /* TDialogCanvas */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas));
   G__memfunc_setup("TDialogCanvas",1280,G__TDialogCanvas_TDialogCanvas_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDialogCanvas",1280,G__TDialogCanvas_TDialogCanvas_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"h - 'UInt_t' 0 - ww h - 'UInt_t' 0 - wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Apply",518,G__TDialogCanvas_Apply_3_0,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" action",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BuildStandardButtons",2064,G__TDialogCanvas_BuildStandardButtons_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Divide",597,G__TDialogCanvas_Divide_5_0,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 1 nx i - 'Int_t' 0 1 ny "
"f - 'Float_t' 0 0.01 xmargin f - 'Float_t' 0 0.01 ymargin "
"i - 'Int_t' 0 0 color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRefObject",1172,G__TDialogCanvas_GetRefObject_6_0,85,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRefPad",850,G__TDialogCanvas_GetRefPad_7_0,85,G__get_linked_tagnum(&G__G__GPadLN_TPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Range",493,G__TDialogCanvas_Range_8_0,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecursiveRemove",1574,G__TDialogCanvas_RecursiveRemove_9_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBorderMode",1295,G__TDialogCanvas_SetBorderMode_0_1,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordermode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGrid",690,G__TDialogCanvas_SetGrid_1_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogx",710,G__TDialogCanvas_SetLogx_2_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogy",711,G__TDialogCanvas_SetLogy_3_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetName",685,G__TDialogCanvas_SetName_4_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetObject",899,G__TDialogCanvas_SetObject_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRefObject",1184,G__TDialogCanvas_SetRefObject_6_1,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRefPad",862,G__TDialogCanvas_SetRefPad_7_1,121,-1,-1,0,1,1,1,0,"U 'TPad' - 0 - pad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("x3d",271,G__TDialogCanvas_x3d_8_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TDialogCanvas_DeclFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDialogCanvas_DeclFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDialogCanvas_ImplFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDialogCanvas_ImplFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDialogCanvas_Class_Version_3_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDialogCanvas_Class_4_2,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TDialogCanvas_Dictionary_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDialogCanvas_IsA_6_2,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDialogCanvas_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDialogCanvas_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TDialogCanvas",1406,G__TDialogCanvas_wATDialogCanvas_9_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFitPanel(void) {
   /* TFitPanel */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel));
   G__memfunc_setup("TFitPanel",871,G__TFitPanel_TFitPanel_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFitPanel",871,G__TFitPanel_TFitPanel_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"h - 'UInt_t' 0 300 ww h - 'UInt_t' 0 400 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddOption",898,G__TFitPanel_AddOption_3_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Apply",518,G__TFitPanel_Apply_4_0,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" action",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BuildStandardButtons",2064,G__TFitPanel_BuildStandardButtons_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TFitPanel_ExecuteEvent_6_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetObjectFit",1178,G__TFitPanel_GetObjectFit_7_0,85,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SavePrimitive",1352,G__TFitPanel_SavePrimitive_8_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDefaults",1124,G__TFitPanel_SetDefaults_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFunction",1138,G__TFitPanel_SetFunction_0_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - function",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSame",690,G__TFitPanel_SetSame_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TFitPanel_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFitPanel_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFitPanel_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFitPanel_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFitPanel_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFitPanel_Class_7_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TFitPanel_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFitPanel_IsA_9_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFitPanel_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFitPanel_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TFitPanel",997,G__TFitPanel_wATFitPanel_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFitPanelGraph(void) {
   /* TFitPanelGraph */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph));
   G__memfunc_setup("TFitPanelGraph",1369,G__TFitPanelGraph_TFitPanelGraph_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFitPanelGraph",1369,G__TFitPanelGraph_TFitPanelGraph_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"h - 'UInt_t' 0 300 ww h - 'UInt_t' 0 400 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Apply",518,G__TFitPanelGraph_Apply_3_0,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" action",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TFitPanelGraph_SavePrimitive_4_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TFitPanelGraph_DeclFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFitPanelGraph_DeclFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFitPanelGraph_ImplFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFitPanelGraph_ImplFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFitPanelGraph_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFitPanelGraph_Class_0_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TFitPanelGraph_Dictionary_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFitPanelGraph_IsA_2_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFitPanelGraph_ShowMembers_3_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFitPanelGraph_Streamer_4_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TFitPanelGraph",1495,G__TFitPanelGraph_wATFitPanelGraph_5_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDrawPanelHist(void) {
   /* TDrawPanelHist */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist));
   G__memfunc_setup("TDrawPanelHist",1386,G__TDrawPanelHist_TDrawPanelHist_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDrawPanelHist",1386,G__TDrawPanelHist_TDrawPanelHist_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"h - 'UInt_t' 0 500 ww h - 'UInt_t' 0 600 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddOption",898,G__TDrawPanelHist_AddOption_3_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Apply",518,G__TDrawPanelHist_Apply_4_0,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" action",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BuildStandardButtons",2064,G__TDrawPanelHist_BuildStandardButtons_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TDrawPanelHist_ExecuteEvent_6_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHistogram",1230,G__TDrawPanelHist_GetHistogram_7_0,85,G__get_linked_tagnum(&G__G__GPadLN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SavePrimitive",1352,G__TDrawPanelHist_SavePrimitive_8_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDefaults",1124,G__TDrawPanelHist_SetDefaults_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSame",690,G__TDrawPanelHist_SetSame_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TDrawPanelHist_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDrawPanelHist_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDrawPanelHist_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDrawPanelHist_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDrawPanelHist_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDrawPanelHist_Class_6_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TDrawPanelHist_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDrawPanelHist_IsA_8_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDrawPanelHist_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDrawPanelHist_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TDrawPanelHist",1512,G__TDrawPanelHist_wATDrawPanelHist_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTButton(void) {
   /* TButton */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton));
   G__memfunc_setup("TButton",720,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,1,1,4,0,"u 'TButton' - 1 - org","no copy ctor, use TObject::Clone()",(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,1,1,1,4,0,"u 'TButton' - 1 - rhs","idem",(void*)NULL,0);
   G__memfunc_setup("TButton",720,G__TButton_TButton_2_0,105,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TButton",720,G__TButton_TButton_3_0,105,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,6,1,1,0,
"C - 'Text_t' 0 - title C - 'Text_t' 0 - method "
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Divide",597,G__TButton_Divide_5_0,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 1 nx i - 'Int_t' 0 1 ny "
"f - 'Float_t' 0 0.01 xmargin f - 'Float_t' 0 0.01 ymargin "
"i - 'Int_t' 0 0 color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TButton_Draw_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TButton_ExecuteEvent_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMethod",897,G__TButton_GetMethod_8_0,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TButton_Paint_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintModified",1309,G__TButton_PaintModified_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Range",493,G__TButton_Range_1_1,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TButton_SavePrimitive_2_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBorderMode",1295,G__TButton_SetBorderMode_3_1,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordermode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFraming",1008,G__TButton_SetFraming_4_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 1 f",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFraming",996,G__TButton_GetFraming_5_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGrid",690,G__TButton_SetGrid_6_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogx",710,G__TButton_SetLogx_7_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogy",711,G__TButton_SetLogy_8_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMethod",909,G__TButton_SetMethod_9_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - method","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetName",685,G__TButton_SetName_0_2,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("x3d",271,G__TButton_x3d_1_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TButton_DeclFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TButton_DeclFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TButton_ImplFileName_4_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TButton_ImplFileLine_5_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TButton_Class_Version_6_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TButton_Class_7_2,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TButton_Dictionary_8_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TButton_IsA_9_2,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TButton_ShowMembers_0_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TButton_Streamer_1_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TButton",846,G__TButton_wATButton_2_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGroupButton(void) {
   /* TGroupButton */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton));
   G__memfunc_setup("TGroupButton",1245,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),-1,0,1,1,4,0,"u 'TGroupButton' - 1 - org","no copy, use TObject::Clone()",(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,117,G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),-1,1,1,1,4,0,"u 'TGroupButton' - 1 - rhs","idem",(void*)NULL,0);
   G__memfunc_setup("TGroupButton",1245,G__TGroupButton_TGroupButton_2_0,105,G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGroupButton",1245,G__TGroupButton_TGroupButton_3_0,105,G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),-1,0,7,1,1,0,
"C - 'Text_t' 0 - groupname C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - method f - 'Coord_t' 0 - x1 "
"f - 'Coord_t' 0 - y1 f - 'Coord_t' 0 - x2 "
"f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DisplayColorTable",1725,G__TGroupButton_DisplayColorTable_5_0,121,-1,-1,0,5,1,1,0,
"C - 'Text_t' 0 - action f - 'Float_t' 0 - x0 "
"f - 'Float_t' 0 - y0 f - 'Float_t' 0 - wc "
"f - 'Float_t' 0 - hc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteAction",1329,G__TGroupButton_ExecuteAction_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TGroupButton_ExecuteEvent_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TGroupButton_SavePrimitive_8_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGroupButton_DeclFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGroupButton_DeclFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGroupButton_ImplFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGroupButton_ImplFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGroupButton_Class_Version_3_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGroupButton_Class_4_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGroupButton_Dictionary_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGroupButton_IsA_6_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGroupButton_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGroupButton_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TGroupButton",1371,G__TGroupButton_wATGroupButton_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttLineCanvas(void) {
   /* TAttLineCanvas */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas));
   G__memfunc_setup("TAttLineCanvas",1377,G__TAttLineCanvas_TAttLineCanvas_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttLineCanvas",1377,G__TAttLineCanvas_TAttLineCanvas_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"h - 'UInt_t' 0 400 ww h - 'UInt_t' 0 600 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpdateLineAttributes",2066,G__TAttLineCanvas_UpdateLineAttributes_3_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - col i - 'Int_t' 0 - sty "
"i - 'Int_t' 0 - width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttLineCanvas_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttLineCanvas_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttLineCanvas_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttLineCanvas_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttLineCanvas_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttLineCanvas_Class_9_0,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttLineCanvas_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttLineCanvas_IsA_1_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttLineCanvas_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttLineCanvas_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TAttLineCanvas",1503,G__TAttLineCanvas_wATAttLineCanvas_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttFillCanvas(void) {
   /* TAttFillCanvas */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas));
   G__memfunc_setup("TAttFillCanvas",1376,G__TAttFillCanvas_TAttFillCanvas_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttFillCanvas",1376,G__TAttFillCanvas_TAttFillCanvas_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"h - 'UInt_t' 0 400 ww h - 'UInt_t' 0 600 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpdateFillAttributes",2065,G__TAttFillCanvas_UpdateFillAttributes_3_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - col i - 'Int_t' 0 - sty",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttFillCanvas_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttFillCanvas_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttFillCanvas_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttFillCanvas_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttFillCanvas_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttFillCanvas_Class_9_0,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttFillCanvas_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttFillCanvas_IsA_1_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttFillCanvas_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttFillCanvas_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TAttFillCanvas",1502,G__TAttFillCanvas_wATAttFillCanvas_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttTextCanvas(void) {
   /* TAttTextCanvas */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas));
   G__memfunc_setup("TAttTextCanvas",1406,G__TAttTextCanvas_TAttTextCanvas_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttTextCanvas",1406,G__TAttTextCanvas_TAttTextCanvas_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"h - 'UInt_t' 0 400 ww h - 'UInt_t' 0 600 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpdateTextAttributes",2095,G__TAttTextCanvas_UpdateTextAttributes_3_0,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - align f - 'Float_t' 0 - angle "
"i - 'Int_t' 0 - col i - 'Int_t' 0 - font "
"f - 'Float_t' 0 - tsize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttTextCanvas_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttTextCanvas_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttTextCanvas_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttTextCanvas_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttTextCanvas_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttTextCanvas_Class_9_0,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttTextCanvas_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttTextCanvas_IsA_1_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttTextCanvas_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttTextCanvas_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TAttTextCanvas",1532,G__TAttTextCanvas_wATAttTextCanvas_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttMarkerCanvas(void) {
   /* TAttMarkerCanvas */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas));
   G__memfunc_setup("TAttMarkerCanvas",1595,G__TAttMarkerCanvas_TAttMarkerCanvas_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttMarkerCanvas",1595,G__TAttMarkerCanvas_TAttMarkerCanvas_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"h - 'UInt_t' 0 400 ww h - 'UInt_t' 0 600 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpdateMarkerAttributes",2284,G__TAttMarkerCanvas_UpdateMarkerAttributes_3_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - col i - 'Int_t' 0 - sty "
"f - 'Float_t' 0 - msiz",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttMarkerCanvas_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttMarkerCanvas_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttMarkerCanvas_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttMarkerCanvas_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttMarkerCanvas_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttMarkerCanvas_Class_9_0,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttMarkerCanvas_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttMarkerCanvas_IsA_1_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttMarkerCanvas_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttMarkerCanvas_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TAttMarkerCanvas",1721,G__TAttMarkerCanvas_wATAttMarkerCanvas_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPaveVar(void) {
   /* TPaveVar */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar));
   G__memfunc_setup("ExecuteEvent",1237,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TPaveVar",777,G__TPaveVar_TPaveVar_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPaveVar",777,G__TPaveVar_TPaveVar_2_0,105,G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),-1,0,6,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2 "
"C - 'Text_t' 0 - label U 'TTreeViewer' - 0 - viewer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPaveVar",777,G__TPaveVar_TPaveVar_3_0,105,G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),-1,0,1,1,1,0,"u 'TPaveVar' - 1 - PaveVar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TPaveVar_Copy_5_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - PaveVar",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetViewer",914,G__TPaveVar_GetViewer_6_0,85,G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SavePrimitive",1352,G__TPaveVar_SavePrimitive_7_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Merge",496,G__TPaveVar_Merge_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"AND\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetViewer",926,G__TPaveVar_SetViewer_9_0,121,-1,-1,0,1,1,1,0,"U 'TTreeViewer' - 0 - viewer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPaveVar_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPaveVar_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPaveVar_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPaveVar_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPaveVar_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPaveVar_Class_5_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPaveVar_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPaveVar_IsA_7_1,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPaveVar_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPaveVar_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPaveVar",903,G__TPaveVar_wATPaveVar_0_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTTreeViewer(void) {
   /* TTreeViewer */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer));
   G__memfunc_setup("TTreeViewer",1110,G__TTreeViewer_TTreeViewer_0_0,105,G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTreeViewer",1110,G__TTreeViewer_TTreeViewer_1_0,105,G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),-1,0,4,1,1,0,
"C - - 0 - treename C - - 0 \"TreeViewer\" title "
"h - 'UInt_t' 0 520 ww h - 'UInt_t' 0 400 wh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BuildInterface",1409,G__TTreeViewer_BuildInterface_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateNewVar",1191,G__TTreeViewer_CreateNewVar_4_0,85,G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),-1,0,1,1,1,0,"C - - 0 \"\" varname","*MENU*",(void*)NULL,0);
   G__memfunc_setup("ExecuteDraw",1121,G__TTreeViewer_ExecuteDraw_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTimer",1101,G__TTreeViewer_HandleTimer_6_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TTimer' - 0 - timer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsUnder",698,G__TTreeViewer_IsUnder_7_0,85,G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),-1,0,1,1,1,0,"U 'TButton' - 0 - button",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsUnderW",785,G__TTreeViewer_IsUnderW_8_0,85,G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),-1,0,1,1,1,0,"U 'TButton' - 0 - button",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTree",688,G__TTreeViewer_GetTree_9_0,85,G__get_linked_tagnum(&G__G__GPadLN_TTree),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDraw",686,G__TTreeViewer_GetDraw_0_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetScan",677,G__TTreeViewer_GetScan_1_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBreak",773,G__TTreeViewer_GetBreak_2_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGopt",698,G__TTreeViewer_GetGopt_3_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetIList",773,G__TTreeViewer_GetIList_4_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOList",779,G__TTreeViewer_GetOList_5_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX",376,G__TTreeViewer_GetX_6_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY",377,G__TTreeViewer_GetY_7_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetZ",378,G__TTreeViewer_GetZ_8_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetW",375,G__TTreeViewer_GetW_9_1,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCpad",664,G__TTreeViewer_GetCpad_0_2,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHist",696,G__TTreeViewer_GetHist_1_2,85,G__get_linked_tagnum(&G__G__GPadLN_TButton),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSlider",899,G__TTreeViewer_GetSlider_2_2,85,G__get_linked_tagnum(&G__G__GPadLN_TSlider),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTimer",801,G__TTreeViewer_GetTimer_3_2,85,G__get_linked_tagnum(&G__G__GPadLN_TTimer),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTreeName",1073,G__TTreeViewer_GetTreeName_4_2,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MakeClass",884,G__TTreeViewer_MakeClass_5_2,121,-1,-1,0,1,1,1,0,"C - - 0 - classname","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Reorganize",1046,G__TTreeViewer_Reorganize_6_2,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTimerInterval",1650,G__TTreeViewer_SetTimerInterval_7_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 333 msec","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTreeName",1085,G__TTreeViewer_SetTreeName_8_2,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - treename","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Divide",597,G__TTreeViewer_Divide_9_2,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 1 nx i - 'Int_t' 0 1 ny "
"f - 'Float_t' 0 0.01 xmargin f - 'Float_t' 0 0.01 ymargin "
"i - 'Int_t' 0 0 color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGrid",690,G__TTreeViewer_SetGrid_0_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGridx",810,G__TTreeViewer_SetGridx_1_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGridy",811,G__TTreeViewer_SetGridy_2_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogx",710,G__TTreeViewer_SetLogx_3_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogy",711,G__TTreeViewer_SetLogy_4_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLogz",712,G__TTreeViewer_SetLogz_5_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTickx",815,G__TTreeViewer_SetTickx_6_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTicky",816,G__TTreeViewer_SetTicky_7_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("x3d",271,G__TTreeViewer_x3d_8_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TTreeViewer_DeclFileName_9_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TTreeViewer_DeclFileLine_0_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TTreeViewer_ImplFileName_1_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TTreeViewer_ImplFileLine_2_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TTreeViewer_Class_Version_3_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TTreeViewer_Class_4_4,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TTreeViewer_Dictionary_5_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TTreeViewer_IsA_6_4,85,G__get_linked_tagnum(&G__G__GPadLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TTreeViewer_ShowMembers_7_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TTreeViewer_Streamer_8_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TTreeViewer",1236,G__TTreeViewer_wATTreeViewer_9_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__GPad() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__GPad() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_EColor),-1,-1,1,"kWhite=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_EColor),-1,-1,1,"kBlack=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_EColor),-1,-1,1,"kRed=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_EColor),-1,-1,1,"kGreen=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_EColor),-1,-1,1,"kBlue=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_EColor),-1,-1,1,"kYellow=5",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_EColor),-1,-1,1,"kMagenta=6",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_EColor),-1,-1,1,"kCyan=7",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_ELineStyle),-1,-1,1,"kSolid=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_ELineStyle),-1,-1,1,"kDashed=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_ELineStyle),-1,-1,1,"kDotted=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_ELineStyle),-1,-1,1,"kDashDotted=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_ECanvasEditMode),-1,-1,1,"kIsNotEditable=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__GPadLN_ECanvasEditMode),-1,-1,1,"kIsEditable=1",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__GPad() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__GPadLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TTimer = { "TTimer" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TVirtualPad = { "TVirtualPad" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_EColor = { "EColor" , 101 , -1 };
G__linked_taginfo G__G__GPadLN_ELineStyle = { "ELineStyle" , 101 , -1 };
G__linked_taginfo G__G__GPadLN_TAttPad = { "TAttPad" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TAttLine = { "TAttLine" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TAttFill = { "TAttFill" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TBox = { "TBox" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TWbox = { "TWbox" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TFrame = { "TFrame" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TAttText = { "TAttText" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_dA = { "$" , 101 , -1 };
G__linked_taginfo G__G__GPadLN_TView = { "TView" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TCanvas = { "TCanvas" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TPadView3D = { "TPadView3D" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TPad = { "TPad" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TAttCanvas = { "TAttCanvas" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TCanvasImp = { "TCanvasImp" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_ECanvasEditMode = { "ECanvasEditMode" , 101 , -1 };
G__linked_taginfo G__G__GPadLN_TContextMenu = { "TContextMenu" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TControlBar = { "TControlBar" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TControlBarButton = { "TControlBarButton" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TControlBarImp = { "TControlBarImp" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TSlider = { "TSlider" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TSliderBox = { "TSliderBox" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TClassTree = { "TClassTree" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TDialogCanvas = { "TDialogCanvas" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TFitPanel = { "TFitPanel" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TFitPanelGraph = { "TFitPanelGraph" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TDrawPanelHist = { "TDrawPanelHist" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TButton = { "TButton" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TGroupButton = { "TGroupButton" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TAttLineCanvas = { "TAttLineCanvas" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TAttFillCanvas = { "TAttFillCanvas" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TAttTextCanvas = { "TAttTextCanvas" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TAttMarkerCanvas = { "TAttMarkerCanvas" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TTree = { "TTree" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TPaveVar = { "TPaveVar" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TTreeViewer = { "TTreeViewer" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TPave = { "TPave" , 99 , -1 };
G__linked_taginfo G__G__GPadLN_TPaveLabel = { "TPaveLabel" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__GPad() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TCanvas),sizeof(TCanvas),-1,0,"Graphics canvas",G__setup_memvarTCanvas,G__setup_memfuncTCanvas);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TPad),sizeof(TPad),-1,0,"A Graphics pad",G__setup_memvarTPad,G__setup_memfuncTPad);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBar),sizeof(TControlBar),-1,0,"Control bar",G__setup_memvarTControlBar,G__setup_memfuncTControlBar);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TControlBarButton),sizeof(TControlBarButton),-1,0,"The Control bar button",G__setup_memvarTControlBarButton,G__setup_memfuncTControlBarButton);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TSlider),sizeof(TSlider),-1,0,"A user interface slider.",G__setup_memvarTSlider,G__setup_memfuncTSlider);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TSliderBox),sizeof(TSliderBox),-1,0,"The moving box of a TSlider",G__setup_memvarTSliderBox,G__setup_memfuncTSliderBox);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TClassTree),sizeof(TClassTree),-1,0,"A specialized canvas to draw classes inheritance tree.",G__setup_memvarTClassTree,G__setup_memfuncTClassTree);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TDialogCanvas),sizeof(TDialogCanvas),-1,0,"A specialized canvas to set attributes.",G__setup_memvarTDialogCanvas,G__setup_memfuncTDialogCanvas);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanel),sizeof(TFitPanel),-1,0,"Class used to control histograms fit panel",G__setup_memvarTFitPanel,G__setup_memfuncTFitPanel);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TFitPanelGraph),sizeof(TFitPanelGraph),-1,0,"Class used to control graphs fit panel",G__setup_memvarTFitPanelGraph,G__setup_memfuncTFitPanelGraph);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TDrawPanelHist),sizeof(TDrawPanelHist),-1,0,"Class used to control histogram drawing options",G__setup_memvarTDrawPanelHist,G__setup_memfuncTDrawPanelHist);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TButton),sizeof(TButton),-1,0,"A user interface button.",G__setup_memvarTButton,G__setup_memfuncTButton);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TGroupButton),sizeof(TGroupButton),-1,0,"A user interface button in a group of buttons.",G__setup_memvarTGroupButton,G__setup_memfuncTGroupButton);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttLineCanvas),sizeof(TAttLineCanvas),-1,0,"A specialized dialog canvas to set line attributes.",G__setup_memvarTAttLineCanvas,G__setup_memfuncTAttLineCanvas);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttFillCanvas),sizeof(TAttFillCanvas),-1,0,"A specialized dialog canvas to set fill attributes.",G__setup_memvarTAttFillCanvas,G__setup_memfuncTAttFillCanvas);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttTextCanvas),sizeof(TAttTextCanvas),-1,0,"A specialized dialog canvas to set text attributes.",G__setup_memvarTAttTextCanvas,G__setup_memfuncTAttTextCanvas);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TAttMarkerCanvas),sizeof(TAttMarkerCanvas),-1,0,"A specialized dialog canvas to set marker attributes.",G__setup_memvarTAttMarkerCanvas,G__setup_memfuncTAttMarkerCanvas);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TPaveVar),sizeof(TPaveVar),-1,0,"A TPaveLabel specialized for TTree variables and cuts",G__setup_memvarTPaveVar,G__setup_memfuncTPaveVar);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__GPadLN_TTreeViewer),sizeof(TTreeViewer),-1,0,"The Tree viewer and Browser",G__setup_memvarTTreeViewer,G__setup_memfuncTTreeViewer);
}
extern "C" void G__cpp_setupG__GPad() {
  G__check_setup_version(51111,"G__cpp_setupG__GPad()");
  G__set_cpp_environmentG__GPad();
  G__cpp_setup_tagtableG__GPad();

  G__cpp_setup_inheritanceG__GPad();

  G__cpp_setup_typetableG__GPad();

  G__cpp_setup_memvarG__GPad();

  G__cpp_setup_memfuncG__GPad();
  G__cpp_setup_globalG__GPad();
  G__cpp_setup_funcG__GPad();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__GPad();
  return;
}
class G__cpp_setup_initG__GPad {
  public:
    G__cpp_setup_initG__GPad() { G__add_setup_func("G__GPad",&G__cpp_setupG__GPad); }
   ~G__cpp_setup_initG__GPad() { G__remove_setup_func("G__GPad"); }
};
G__cpp_setup_initG__GPad G__cpp_setup_initializerG__GPad;

//
// File generated by /user/brun/root/bin/rootcint at Thu Dec 17 09:30:54 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TCanvas *&obj)
{
   // Read a pointer to an object of class TCanvas.

   obj = (TCanvas *) buf.ReadObject(TCanvas::Class());
   return buf;
}

//______________________________________________________________________________
void TCanvas::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TCanvas.

   TClass *R__cl  = TCanvas::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fDISPLAY.ShowMembers(R__insp, strcat(R__parent,"fDISPLAY.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fDoubleBuffer", &fDoubleBuffer);
   R__insp.Inspect(R__cl, R__parent, "fRetained", &fRetained);
   R__insp.Inspect(R__cl, R__parent, "fXsizeUser", &fXsizeUser);
   R__insp.Inspect(R__cl, R__parent, "fYsizeUser", &fYsizeUser);
   R__insp.Inspect(R__cl, R__parent, "fXsizeReal", &fXsizeReal);
   R__insp.Inspect(R__cl, R__parent, "fYsizeReal", &fYsizeReal);
   R__insp.Inspect(R__cl, R__parent, "fCanvasID", &fCanvasID);
   R__insp.Inspect(R__cl, R__parent, "fWindowTopX", &fWindowTopX);
   R__insp.Inspect(R__cl, R__parent, "fWindowTopY", &fWindowTopY);
   R__insp.Inspect(R__cl, R__parent, "fWindowWidth", &fWindowWidth);
   R__insp.Inspect(R__cl, R__parent, "fWindowHeight", &fWindowHeight);
   R__insp.Inspect(R__cl, R__parent, "fCw", &fCw);
   R__insp.Inspect(R__cl, R__parent, "fCh", &fCh);
   fCatt.ShowMembers(R__insp, strcat(R__parent,"fCatt.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fSelected", &fSelected);
   fSelectedOpt.ShowMembers(R__insp, strcat(R__parent,"fSelectedOpt.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fSelectedPad", &fSelectedPad);
   R__insp.Inspect(R__cl, R__parent, "*fPadSave", &fPadSave);
   R__insp.Inspect(R__cl, R__parent, "fEvent", &fEvent);
   R__insp.Inspect(R__cl, R__parent, "fEventX", &fEventX);
   R__insp.Inspect(R__cl, R__parent, "fEventY", &fEventY);
   R__insp.Inspect(R__cl, R__parent, "fShowEventStatus", &fShowEventStatus);
   R__insp.Inspect(R__cl, R__parent, "*fEditorBar", &fEditorBar);
   R__insp.Inspect(R__cl, R__parent, "*fCanvasImp", &fCanvasImp);
   R__insp.Inspect(R__cl, R__parent, "fMoveOpaque", &fMoveOpaque);
   R__insp.Inspect(R__cl, R__parent, "fResizeOpaque", &fResizeOpaque);
   R__insp.Inspect(R__cl, R__parent, "fHighLightColor", &fHighLightColor);
   R__insp.Inspect(R__cl, R__parent, "fBatch", &fBatch);
   R__insp.Inspect(R__cl, R__parent, "fMenuBar", &fMenuBar);
   R__insp.Inspect(R__cl, R__parent, "fIsEditable", &fIsEditable);
   R__insp.Inspect(R__cl, R__parent, "*fContextMenu", &fContextMenu);
   TPad::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPad *&obj)
{
   // Read a pointer to an object of class TPad.

   obj = (TPad *) buf.ReadObject(TPad::Class());
   return buf;
}

//______________________________________________________________________________
void TPad::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPad.

   TClass *R__cl  = TPad::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fLogx", &fLogx);
   R__insp.Inspect(R__cl, R__parent, "fLogy", &fLogy);
   R__insp.Inspect(R__cl, R__parent, "fLogz", &fLogz);
   R__insp.Inspect(R__cl, R__parent, "fXtoAbsPixelk", &fXtoAbsPixelk);
   R__insp.Inspect(R__cl, R__parent, "fXtoPixelk", &fXtoPixelk);
   R__insp.Inspect(R__cl, R__parent, "fXtoPixel", &fXtoPixel);
   R__insp.Inspect(R__cl, R__parent, "fYtoAbsPixelk", &fYtoAbsPixelk);
   R__insp.Inspect(R__cl, R__parent, "fYtoPixelk", &fYtoPixelk);
   R__insp.Inspect(R__cl, R__parent, "fYtoPixel", &fYtoPixel);
   R__insp.Inspect(R__cl, R__parent, "fUtoAbsPixelk", &fUtoAbsPixelk);
   R__insp.Inspect(R__cl, R__parent, "fUtoPixelk", &fUtoPixelk);
   R__insp.Inspect(R__cl, R__parent, "fUtoPixel", &fUtoPixel);
   R__insp.Inspect(R__cl, R__parent, "fVtoAbsPixelk", &fVtoAbsPixelk);
   R__insp.Inspect(R__cl, R__parent, "fVtoPixelk", &fVtoPixelk);
   R__insp.Inspect(R__cl, R__parent, "fVtoPixel", &fVtoPixel);
   R__insp.Inspect(R__cl, R__parent, "fAbsPixeltoXk", &fAbsPixeltoXk);
   R__insp.Inspect(R__cl, R__parent, "fPixeltoXk", &fPixeltoXk);
   R__insp.Inspect(R__cl, R__parent, "fPixeltoX", &fPixeltoX);
   R__insp.Inspect(R__cl, R__parent, "fAbsPixeltoYk", &fAbsPixeltoYk);
   R__insp.Inspect(R__cl, R__parent, "fPixeltoYk", &fPixeltoYk);
   R__insp.Inspect(R__cl, R__parent, "fPixeltoY", &fPixeltoY);
   R__insp.Inspect(R__cl, R__parent, "fXlowNDC", &fXlowNDC);
   R__insp.Inspect(R__cl, R__parent, "fYlowNDC", &fYlowNDC);
   R__insp.Inspect(R__cl, R__parent, "fWNDC", &fWNDC);
   R__insp.Inspect(R__cl, R__parent, "fHNDC", &fHNDC);
   R__insp.Inspect(R__cl, R__parent, "fAbsXlowNDC", &fAbsXlowNDC);
   R__insp.Inspect(R__cl, R__parent, "fAbsYlowNDC", &fAbsYlowNDC);
   R__insp.Inspect(R__cl, R__parent, "fAbsWNDC", &fAbsWNDC);
   R__insp.Inspect(R__cl, R__parent, "fAbsHNDC", &fAbsHNDC);
   R__insp.Inspect(R__cl, R__parent, "fUxmin", &fUxmin);
   R__insp.Inspect(R__cl, R__parent, "fUymin", &fUymin);
   R__insp.Inspect(R__cl, R__parent, "fUxmax", &fUxmax);
   R__insp.Inspect(R__cl, R__parent, "fUymax", &fUymax);
   R__insp.Inspect(R__cl, R__parent, "*fMother", &fMother);
   R__insp.Inspect(R__cl, R__parent, "*fCanvas", &fCanvas);
   R__insp.Inspect(R__cl, R__parent, "fPixmapID", &fPixmapID);
   R__insp.Inspect(R__cl, R__parent, "*fPrimitives", &fPrimitives);
   fName.ShowMembers(R__insp, strcat(R__parent,"fName.")); R__parent[R__ncp] = 0;
   fTitle.ShowMembers(R__insp, strcat(R__parent,"fTitle.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fPadPaint", &fPadPaint);
   R__insp.Inspect(R__cl, R__parent, "fModified", &fModified);
   R__insp.Inspect(R__cl, R__parent, "fGridx", &fGridx);
   R__insp.Inspect(R__cl, R__parent, "fGridy", &fGridy);
   R__insp.Inspect(R__cl, R__parent, "fTickx", &fTickx);
   R__insp.Inspect(R__cl, R__parent, "fTicky", &fTicky);
   R__insp.Inspect(R__cl, R__parent, "*fFrame", &fFrame);
   R__insp.Inspect(R__cl, R__parent, "*fView", &fView);
   R__insp.Inspect(R__cl, R__parent, "fTheta", &fTheta);
   R__insp.Inspect(R__cl, R__parent, "fPhi", &fPhi);
   R__insp.Inspect(R__cl, R__parent, "*fPadPointer", &fPadPointer);
   R__insp.Inspect(R__cl, R__parent, "fNumber", &fNumber);
   R__insp.Inspect(R__cl, R__parent, "fAbsCoord", &fAbsCoord);
   R__insp.Inspect(R__cl, R__parent, "*fPadView3D", &fPadView3D);
   TVirtualPad::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TControlBar *&obj)
{
   // Read a pointer to an object of class TControlBar.

   obj = (TControlBar *) buf.ReadObject(TControlBar::Class());
   return buf;
}

//______________________________________________________________________________
void TControlBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TControlBar.

   TControlBarButton::Streamer(R__b);
}

//______________________________________________________________________________
void TControlBar::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TControlBar.

   TClass *R__cl  = TControlBar::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fControlBarImp", &fControlBarImp);
   R__insp.Inspect(R__cl, R__parent, "fOrientation", &fOrientation);
   R__insp.Inspect(R__cl, R__parent, "*fButtons", &fButtons);
   R__insp.Inspect(R__cl, R__parent, "fNoroc", &fNoroc);
   TControlBarButton::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TControlBarButton *&obj)
{
   // Read a pointer to an object of class TControlBarButton.

   obj = (TControlBarButton *) buf.ReadObject(TControlBarButton::Class());
   return buf;
}

//______________________________________________________________________________
void TControlBarButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TControlBarButton.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TControlBarButton::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TControlBarButton.

   TClass *R__cl  = TControlBarButton::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fType", &fType);
   fAction.ShowMembers(R__insp, strcat(R__parent,"fAction.")); R__parent[R__ncp] = 0;
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSlider *&obj)
{
   // Read a pointer to an object of class TSlider.

   obj = (TSlider *) buf.ReadObject(TSlider::Class());
   return buf;
}

//______________________________________________________________________________
void TSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSlider.

   TPad::Streamer(R__b);
}

//______________________________________________________________________________
void TSlider::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSlider.

   TClass *R__cl  = TSlider::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fMinimum", &fMinimum);
   R__insp.Inspect(R__cl, R__parent, "fMaximum", &fMaximum);
   R__insp.Inspect(R__cl, R__parent, "*fObject", &fObject);
   fMethod.ShowMembers(R__insp, strcat(R__parent,"fMethod.")); R__parent[R__ncp] = 0;
   TPad::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSliderBox *&obj)
{
   // Read a pointer to an object of class TSliderBox.

   obj = (TSliderBox *) buf.ReadObject(TSliderBox::Class());
   return buf;
}

//______________________________________________________________________________
void TSliderBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSliderBox.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TWbox::Streamer(R__b);
      R__b >> fSlider;
   } else {
      R__b.WriteVersion(TSliderBox::IsA());
      TWbox::Streamer(R__b);
      R__b << fSlider;
   }
}

//______________________________________________________________________________
void TSliderBox::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSliderBox.

   TClass *R__cl  = TSliderBox::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fSlider", &fSlider);
   TWbox::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TClassTree *&obj)
{
   // Read a pointer to an object of class TClassTree.

   obj = (TClassTree *) buf.ReadObject(TClassTree::Class());
   return buf;
}

//______________________________________________________________________________
void TClassTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TClassTree.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TCanvas::Streamer(R__b);
      TAttText::Streamer(R__b);
      fClasses.Streamer(R__b);
      R__b >> fYoffset;
      R__b >> fLabelDx;
      R__b >> fShowMul;
      R__b >> fShowHas;
      R__b >> fShowRef;
   } else {
      R__b.WriteVersion(TClassTree::IsA());
      TCanvas::Streamer(R__b);
      TAttText::Streamer(R__b);
      fClasses.Streamer(R__b);
      R__b << fYoffset;
      R__b << fLabelDx;
      R__b << fShowMul;
      R__b << fShowHas;
      R__b << fShowRef;
   }
}

//______________________________________________________________________________
void TClassTree::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TClassTree.

   TClass *R__cl  = TClassTree::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fClasses.ShowMembers(R__insp, strcat(R__parent,"fClasses.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fYoffset", &fYoffset);
   R__insp.Inspect(R__cl, R__parent, "fLabelDx", &fLabelDx);
   R__insp.Inspect(R__cl, R__parent, "fShowMul", &fShowMul);
   R__insp.Inspect(R__cl, R__parent, "fShowHas", &fShowHas);
   R__insp.Inspect(R__cl, R__parent, "fShowRef", &fShowRef);
   TCanvas::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDialogCanvas *&obj)
{
   // Read a pointer to an object of class TDialogCanvas.

   obj = (TDialogCanvas *) buf.ReadObject(TDialogCanvas::Class());
   return buf;
}

//______________________________________________________________________________
void TDialogCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDialogCanvas.

   TCanvas::Streamer(R__b);
   TAttText::Streamer(R__b);
}

//______________________________________________________________________________
void TDialogCanvas::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TDialogCanvas.

   TClass *R__cl  = TDialogCanvas::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fRefObject", &fRefObject);
   R__insp.Inspect(R__cl, R__parent, "*fRefPad", &fRefPad);
   TCanvas::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TFitPanel *&obj)
{
   // Read a pointer to an object of class TFitPanel.

   obj = (TFitPanel *) buf.ReadObject(TFitPanel::Class());
   return buf;
}

//______________________________________________________________________________
void TFitPanel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitPanel.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TDialogCanvas::Streamer(R__b);
      fOption.Streamer(R__b);
      fFunction.Streamer(R__b);
      fSame.Streamer(R__b);
      R__b >> fSlider;
      R__b >> fObjectFit;
   } else {
      R__b.WriteVersion(TFitPanel::IsA());
      TDialogCanvas::Streamer(R__b);
      fOption.Streamer(R__b);
      fFunction.Streamer(R__b);
      fSame.Streamer(R__b);
      R__b << fSlider;
      R__b << fObjectFit;
   }
}

//______________________________________________________________________________
void TFitPanel::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TFitPanel.

   TClass *R__cl  = TFitPanel::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   fFunction.ShowMembers(R__insp, strcat(R__parent,"fFunction.")); R__parent[R__ncp] = 0;
   fSame.ShowMembers(R__insp, strcat(R__parent,"fSame.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fSlider", &fSlider);
   R__insp.Inspect(R__cl, R__parent, "*fObjectFit", &fObjectFit);
   TDialogCanvas::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TFitPanelGraph *&obj)
{
   // Read a pointer to an object of class TFitPanelGraph.

   obj = (TFitPanelGraph *) buf.ReadObject(TFitPanelGraph::Class());
   return buf;
}

//______________________________________________________________________________
void TFitPanelGraph::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitPanelGraph.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TFitPanel::Streamer(R__b);
   } else {
      R__b.WriteVersion(TFitPanelGraph::IsA());
      TFitPanel::Streamer(R__b);
   }
}

//______________________________________________________________________________
void TFitPanelGraph::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TFitPanelGraph.

   TClass *R__cl  = TFitPanelGraph::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TFitPanel::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDrawPanelHist *&obj)
{
   // Read a pointer to an object of class TDrawPanelHist.

   obj = (TDrawPanelHist *) buf.ReadObject(TDrawPanelHist::Class());
   return buf;
}

//______________________________________________________________________________
void TDrawPanelHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDrawPanelHist.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TDialogCanvas::Streamer(R__b);
      fOption.Streamer(R__b);
      R__b >> fSlider;
      R__b >> fHistogram;
   } else {
      R__b.WriteVersion(TDrawPanelHist::IsA());
      TDialogCanvas::Streamer(R__b);
      fOption.Streamer(R__b);
      R__b << fSlider;
      R__b << fHistogram;
   }
}

//______________________________________________________________________________
void TDrawPanelHist::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TDrawPanelHist.

   TClass *R__cl  = TDrawPanelHist::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fSlider", &fSlider);
   R__insp.Inspect(R__cl, R__parent, "*fHistogram", &fHistogram);
   TDialogCanvas::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TButton *&obj)
{
   // Read a pointer to an object of class TButton.

   obj = (TButton *) buf.ReadObject(TButton::Class());
   return buf;
}

//______________________________________________________________________________
void TButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TButton.

   TPad::Streamer(R__b);
   TAttText::Streamer(R__b);
}

//______________________________________________________________________________
void TButton::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TButton.

   TClass *R__cl  = TButton::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fFocused", &fFocused);
   R__insp.Inspect(R__cl, R__parent, "fFraming", &fFraming);
   fMethod.ShowMembers(R__insp, strcat(R__parent,"fMethod.")); R__parent[R__ncp] = 0;
   TPad::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGroupButton *&obj)
{
   // Read a pointer to an object of class TGroupButton.

   obj = (TGroupButton *) buf.ReadObject(TGroupButton::Class());
   return buf;
}

//______________________________________________________________________________
void TGroupButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGroupButton.

   TButton::Streamer(R__b);
}

//______________________________________________________________________________
void TGroupButton::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGroupButton.

   TClass *R__cl  = TGroupButton::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TButton::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttLineCanvas *&obj)
{
   // Read a pointer to an object of class TAttLineCanvas.

   obj = (TAttLineCanvas *) buf.ReadObject(TAttLineCanvas::Class());
   return buf;
}

//______________________________________________________________________________
void TAttLineCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttLineCanvas.

   TDialogCanvas::Streamer(R__b);
}

//______________________________________________________________________________
void TAttLineCanvas::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttLineCanvas.

   TClass *R__cl  = TAttLineCanvas::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TDialogCanvas::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttFillCanvas *&obj)
{
   // Read a pointer to an object of class TAttFillCanvas.

   obj = (TAttFillCanvas *) buf.ReadObject(TAttFillCanvas::Class());
   return buf;
}

//______________________________________________________________________________
void TAttFillCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttFillCanvas.

   TDialogCanvas::Streamer(R__b);
}

//______________________________________________________________________________
void TAttFillCanvas::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttFillCanvas.

   TClass *R__cl  = TAttFillCanvas::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TDialogCanvas::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttTextCanvas *&obj)
{
   // Read a pointer to an object of class TAttTextCanvas.

   obj = (TAttTextCanvas *) buf.ReadObject(TAttTextCanvas::Class());
   return buf;
}

//______________________________________________________________________________
void TAttTextCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttTextCanvas.

   TDialogCanvas::Streamer(R__b);
}

//______________________________________________________________________________
void TAttTextCanvas::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttTextCanvas.

   TClass *R__cl  = TAttTextCanvas::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TDialogCanvas::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttMarkerCanvas *&obj)
{
   // Read a pointer to an object of class TAttMarkerCanvas.

   obj = (TAttMarkerCanvas *) buf.ReadObject(TAttMarkerCanvas::Class());
   return buf;
}

//______________________________________________________________________________
void TAttMarkerCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttMarkerCanvas.

   TDialogCanvas::Streamer(R__b);
}

//______________________________________________________________________________
void TAttMarkerCanvas::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttMarkerCanvas.

   TClass *R__cl  = TAttMarkerCanvas::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TDialogCanvas::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPaveVar *&obj)
{
   // Read a pointer to an object of class TPaveVar.

   obj = (TPaveVar *) buf.ReadObject(TPaveVar::Class());
   return buf;
}

//______________________________________________________________________________
void TPaveVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaveVar.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TPaveLabel::Streamer(R__b);
      R__b >> fViewer;
   } else {
      R__b.WriteVersion(TPaveVar::IsA());
      TPaveLabel::Streamer(R__b);
      R__b << fViewer;
   }
}

//______________________________________________________________________________
void TPaveVar::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPaveVar.

   TClass *R__cl  = TPaveVar::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fViewer", &fViewer);
   TPaveLabel::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TTreeViewer *&obj)
{
   // Read a pointer to an object of class TTreeViewer.

   obj = (TTreeViewer *) buf.ReadObject(TTreeViewer::Class());
   return buf;
}

//______________________________________________________________________________
void TTreeViewer::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TTreeViewer.

   TClass *R__cl  = TTreeViewer::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fTreeName.ShowMembers(R__insp, strcat(R__parent,"fTreeName.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fTree", &fTree);
   R__insp.Inspect(R__cl, R__parent, "*fDraw", &fDraw);
   R__insp.Inspect(R__cl, R__parent, "*fScan", &fScan);
   R__insp.Inspect(R__cl, R__parent, "*fBreak", &fBreak);
   R__insp.Inspect(R__cl, R__parent, "*fGopt", &fGopt);
   R__insp.Inspect(R__cl, R__parent, "*fIList", &fIList);
   R__insp.Inspect(R__cl, R__parent, "*fOList", &fOList);
   R__insp.Inspect(R__cl, R__parent, "*fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "*fY", &fY);
   R__insp.Inspect(R__cl, R__parent, "*fZ", &fZ);
   R__insp.Inspect(R__cl, R__parent, "*fW", &fW);
   R__insp.Inspect(R__cl, R__parent, "*fCpad", &fCpad);
   R__insp.Inspect(R__cl, R__parent, "*fHist", &fHist);
   R__insp.Inspect(R__cl, R__parent, "*fSlider", &fSlider);
   R__insp.Inspect(R__cl, R__parent, "*fTimer", &fTimer);
   R__insp.Inspect(R__cl, R__parent, "fTimerInterval", &fTimerInterval);
   TCanvas::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

