//*CMZ :  2.20/02 04/12/98  14.24.03  by  Rene Brun
//*-- Author :    Rene Brun   04/12/98
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
extern void G__cpp_setup_tagtableG__Gui2();
extern void G__cpp_setup_inheritanceG__Gui2();
extern void G__cpp_setup_typetableG__Gui2();
extern void G__cpp_setup_memvarG__Gui2();
extern void G__cpp_setup_globalG__Gui2();
extern void G__cpp_setup_memfuncG__Gui2();
extern void G__cpp_setup_funcG__Gui2();
extern void G__set_cpp_environmentG__Gui2();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TGObject.h"
#include "TGScrollBar.h"
#include "TGCanvas.h"
#include "TGListBox.h"
#include "TGComboBox.h"
#include "TGTab.h"
#include "TGSlider.h"
#include "TGPicture.h"
#include "TGListView.h"
#include "TGMimeTypes.h"
#include "TGFSContainer.h"
#include "TGFileDialog.h"
#include "TGStatusBar.h"
#include "TGToolTip.h"
#include "TGTextView.h"
#include "TGToolBar.h"
#include "TGListTree.h"
#include "TGText.h"
#include "TGDoubleSlider.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__Gui2LN_TClass;
extern G__linked_taginfo G__G__Gui2LN_TList;
extern G__linked_taginfo G__G__Gui2LN_TObject;
extern G__linked_taginfo G__G__Gui2LN_TRegexp;
extern G__linked_taginfo G__G__Gui2LN_TString;
extern G__linked_taginfo G__G__Gui2LN_TGClient;
extern G__linked_taginfo G__G__Gui2LN_TGObject;
extern G__linked_taginfo G__G__Gui2LN_TGWindow;
extern G__linked_taginfo G__G__Gui2LN_TGPicture;
extern G__linked_taginfo G__G__Gui2LN_TGMimeTypes;
extern G__linked_taginfo G__G__Gui2LN_TTimer;
extern G__linked_taginfo G__G__Gui2LN_TGDimension;
extern G__linked_taginfo G__G__Gui2LN_TGFrame;
extern G__linked_taginfo G__G__Gui2LN_TGCompositeFrame;
extern G__linked_taginfo G__G__Gui2LN_TGLayoutHints;
extern G__linked_taginfo G__G__Gui2LN_TGLayoutManager;
extern G__linked_taginfo G__G__Gui2LN_TGString;
extern G__linked_taginfo G__G__Gui2LN_TGVerticalFrame;
extern G__linked_taginfo G__G__Gui2LN_TGHorizontalFrame;
extern G__linked_taginfo G__G__Gui2LN_TGMainFrame;
extern G__linked_taginfo G__G__Gui2LN_TGTransientFrame;
extern G__linked_taginfo G__G__Gui2LN_TGWidget;
extern G__linked_taginfo G__G__Gui2LN_TGToolTip;
extern G__linked_taginfo G__G__Gui2LN_TGTextButton;
extern G__linked_taginfo G__G__Gui2LN_TGPictureButton;
extern G__linked_taginfo G__G__Gui2LN_EScrollBarMode;
extern G__linked_taginfo G__G__Gui2LN_TGScrollBarElement;
extern G__linked_taginfo G__G__Gui2LN_TGScrollBar;
extern G__linked_taginfo G__G__Gui2LN_TGHScrollBar;
extern G__linked_taginfo G__G__Gui2LN_TGVScrollBar;
extern G__linked_taginfo G__G__Gui2LN_TGViewPort;
extern G__linked_taginfo G__G__Gui2LN_TGCanvas;
extern G__linked_taginfo G__G__Gui2LN_TGLBEntry;
extern G__linked_taginfo G__G__Gui2LN_TGTextLBEntry;
extern G__linked_taginfo G__G__Gui2LN_TGLBContainer;
extern G__linked_taginfo G__G__Gui2LN_TGListBox;
extern G__linked_taginfo G__G__Gui2LN_TGComboBoxPopup;
extern G__linked_taginfo G__G__Gui2LN_TGComboBox;
extern G__linked_taginfo G__G__Gui2LN_TGTab;
extern G__linked_taginfo G__G__Gui2LN_TGTabElement;
extern G__linked_taginfo G__G__Gui2LN_TGTabLayout;
extern G__linked_taginfo G__G__Gui2LN_ESliderType;
extern G__linked_taginfo G__G__Gui2LN_TGSlider;
extern G__linked_taginfo G__G__Gui2LN_TGVSlider;
extern G__linked_taginfo G__G__Gui2LN_TGHSlider;
extern G__linked_taginfo G__G__Gui2LN_TGSelectedPicture;
extern G__linked_taginfo G__G__Gui2LN_EListViewMode;
extern G__linked_taginfo G__G__Gui2LN_TGLVEntry;
extern G__linked_taginfo G__G__Gui2LN_TGLVContainer;
extern G__linked_taginfo G__G__Gui2LN_TGListView;
extern G__linked_taginfo G__G__Gui2LN_TOrdCollection;
extern G__linked_taginfo G__G__Gui2LN_TGMime;
extern G__linked_taginfo G__G__Gui2LN_EFSSortMode;
extern G__linked_taginfo G__G__Gui2LN_TGFileContainer;
extern G__linked_taginfo G__G__Gui2LN_TViewUpdateTimer;
extern G__linked_taginfo G__G__Gui2LN_TGFileItem;
extern G__linked_taginfo G__G__Gui2LN_EFileDialogMode;
extern G__linked_taginfo G__G__Gui2LN_TGLabel;
extern G__linked_taginfo G__G__Gui2LN_TGTextBuffer;
extern G__linked_taginfo G__G__Gui2LN_TGTextEntry;
extern G__linked_taginfo G__G__Gui2LN_TGFSComboBox;
extern G__linked_taginfo G__G__Gui2LN_TGFileInfo;
extern G__linked_taginfo G__G__Gui2LN_TGFileDialog;
extern G__linked_taginfo G__G__Gui2LN_TGStatusBar;
extern G__linked_taginfo G__G__Gui2LN_TGStatusBarPart;
extern G__linked_taginfo G__G__Gui2LN_TGTextFrame;
extern G__linked_taginfo G__G__Gui2LN_TGTextView;
extern G__linked_taginfo G__G__Gui2LN_TGToolBar;
extern G__linked_taginfo G__G__Gui2LN_TGHorizontal3DLine;
extern G__linked_taginfo G__G__Gui2LN_TGListTreeItem;
extern G__linked_taginfo G__G__Gui2LN_TGListTree;
extern G__linked_taginfo G__G__Gui2LN_TObjString;
extern G__linked_taginfo G__G__Gui2LN_TGText;
extern G__linked_taginfo G__G__Gui2LN_TGDoubleSlider;
extern G__linked_taginfo G__G__Gui2LN_TGDoubleVSlider;
extern G__linked_taginfo G__G__Gui2LN_TGDoubleHSlider;
/********************************************************
* G__Gui2.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__Gui2() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TGObject.h");
  G__add_compiledheader("TGScrollBar.h");
  G__add_compiledheader("TGCanvas.h");
  G__add_compiledheader("TGListBox.h");
  G__add_compiledheader("TGComboBox.h");
  G__add_compiledheader("TGTab.h");
  G__add_compiledheader("TGSlider.h");
  G__add_compiledheader("TGPicture.h");
  G__add_compiledheader("TGListView.h");
  G__add_compiledheader("TGMimeTypes.h");
  G__add_compiledheader("TGFSContainer.h");
  G__add_compiledheader("TGFileDialog.h");
  G__add_compiledheader("TGStatusBar.h");
  G__add_compiledheader("TGToolTip.h");
  G__add_compiledheader("TGTextView.h");
  G__add_compiledheader("TGToolBar.h");
  G__add_compiledheader("TGListTree.h");
  G__add_compiledheader("TGText.h");
  G__add_compiledheader("TGDoubleSlider.h");
}
extern "C" int G__cpp_dllrevG__Gui2() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TGMimeTypes */
static int G__TGMimeTypes_TGMimeTypes_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGMimeTypes *p=NULL;
      p = new TGMimeTypes((TGClient*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_SaveMimes_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMimeTypes*)(G__getstructoffset()))->SaveMimes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_HasChanged_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMimeTypes*)(G__getstructoffset()))->HasChanged());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_AddType_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMimeTypes*)(G__getstructoffset()))->AddType((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_Print_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGMimeTypes*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGMimeTypes*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_GetAction_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMimeTypes*)(G__getstructoffset()))->GetAction((const char*)G__int(libp->para[0]),(char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_GetType_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMimeTypes*)(G__getstructoffset()))->GetType((const char*)G__int(libp->para[0]),(char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_GetIcon_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMimeTypes*)(G__getstructoffset()))->GetIcon((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMimeTypes*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMimeTypes*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMimeTypes*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMimeTypes*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGMimeTypes*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMimeTypes*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMimeTypes*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMimeTypes*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMimeTypes*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMimeTypes_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMimeTypes*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGMimeTypes_TGMimeTypes_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGMimeTypes *p;
   if(1!=libp->paran) ;
   p=new TGMimeTypes(*(TGMimeTypes*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGMimeTypes_wATGMimeTypes_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGMimeTypes *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGMimeTypes *)((G__getstructoffset())+sizeof(TGMimeTypes)*i);
   else  delete (TGMimeTypes *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGToolTip */
static int G__TGToolTip_TGToolTip_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGToolTip *p=NULL;
      p = new TGToolTip(
(const TGWindow*)G__int(libp->para[0]),(const TGFrame*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Long_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_DrawBorder_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolTip*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_HandleTimer_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGToolTip*)(G__getstructoffset()))->HandleTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_Show_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolTip*)(G__getstructoffset()))->Show((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_Hide_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolTip*)(G__getstructoffset()))->Hide();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_Reset_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolTip*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGToolTip*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGToolTip*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGToolTip*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGToolTip*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGToolTip*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGToolTip*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolTip*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGToolTip*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolTip*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolTip_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolTip*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGToolTip_TGToolTip_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGToolTip *p;
   if(1!=libp->paran) ;
   p=new TGToolTip(*(TGToolTip*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGToolTip_wATGToolTip_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGToolTip *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGToolTip *)((G__getstructoffset())+sizeof(TGToolTip)*i);
   else  delete (TGToolTip *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGScrollBarElement */
static int G__TGScrollBarElement_TGScrollBarElement_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGScrollBarElement *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGScrollBarElement(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGScrollBarElement(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGScrollBarElement(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_SetState_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBarElement*)(G__getstructoffset()))->SetState((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_DrawBorder_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBarElement*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGScrollBarElement*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGScrollBarElement*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGScrollBarElement*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGScrollBarElement*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGScrollBarElement*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGScrollBarElement*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBarElement*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGScrollBarElement*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBarElement*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBarElement_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBarElement*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGScrollBarElement_TGScrollBarElement_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGScrollBarElement *p;
   if(1!=libp->paran) ;
   p=new TGScrollBarElement(*(TGScrollBarElement*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGScrollBarElement_wATGScrollBarElement_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGScrollBarElement *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGScrollBarElement *)((G__getstructoffset())+sizeof(TGScrollBarElement)*i);
   else  delete (TGScrollBarElement *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGScrollBar */
static int G__TGScrollBar_DrawBorder_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBar*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_HandleButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGScrollBar*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_HandleMotion_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGScrollBar*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_HandleTimer_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGScrollBar*)(G__getstructoffset()))->HandleTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_Layout_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBar*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_SetRange_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBar*)(G__getstructoffset()))->SetRange((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_SetPosition_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBar*)(G__getstructoffset()))->SetPosition((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_GetPosition_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGScrollBar*)(G__getstructoffset()))->GetPosition());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_MapSubwindows_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBar*)(G__getstructoffset()))->MapSubwindows();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGScrollBar*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGScrollBar*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGScrollBar*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGScrollBar*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGScrollBar*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGScrollBar*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBar*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGScrollBar*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBar*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGScrollBar_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGScrollBar*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGScrollBar_wATGScrollBar_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGScrollBar *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGScrollBar *)((G__getstructoffset())+sizeof(TGScrollBar)*i);
   else  delete (TGScrollBar *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGHScrollBar */
static int G__TGHScrollBar_TGHScrollBar_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGHScrollBar *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGHScrollBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGHScrollBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGHScrollBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_HandleButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGHScrollBar*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_HandleMotion_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGHScrollBar*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_GetDefaultSize_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGHScrollBar*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_Layout_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHScrollBar*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_SetRange_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHScrollBar*)(G__getstructoffset()))->SetRange((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_SetPosition_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHScrollBar*)(G__getstructoffset()))->SetPosition((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHScrollBar*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHScrollBar*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHScrollBar*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHScrollBar*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGHScrollBar*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHScrollBar*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHScrollBar*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHScrollBar*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHScrollBar*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHScrollBar_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHScrollBar*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGHScrollBar_TGHScrollBar_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGHScrollBar *p;
   if(1!=libp->paran) ;
   p=new TGHScrollBar(*(TGHScrollBar*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGHScrollBar_wATGHScrollBar_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGHScrollBar *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGHScrollBar *)((G__getstructoffset())+sizeof(TGHScrollBar)*i);
   else  delete (TGHScrollBar *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGVScrollBar */
static int G__TGVScrollBar_TGVScrollBar_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGVScrollBar *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGVScrollBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGVScrollBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGVScrollBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_HandleButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGVScrollBar*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_HandleMotion_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGVScrollBar*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_GetDefaultSize_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGVScrollBar*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_Layout_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVScrollBar*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_SetRange_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVScrollBar*)(G__getstructoffset()))->SetRange((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_SetPosition_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVScrollBar*)(G__getstructoffset()))->SetPosition((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGVScrollBar*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGVScrollBar*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGVScrollBar*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGVScrollBar*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGVScrollBar*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGVScrollBar*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVScrollBar*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGVScrollBar*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVScrollBar*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVScrollBar_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVScrollBar*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGVScrollBar_TGVScrollBar_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGVScrollBar *p;
   if(1!=libp->paran) ;
   p=new TGVScrollBar(*(TGVScrollBar*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGVScrollBar_wATGVScrollBar_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGVScrollBar *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGVScrollBar *)((G__getstructoffset())+sizeof(TGVScrollBar)*i);
   else  delete (TGVScrollBar *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGViewPort */
static int G__TGViewPort_TGViewPort_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGViewPort *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGViewPort(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGViewPort(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGViewPort(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_GetContainer_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGViewPort*)(G__getstructoffset()))->GetContainer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_SetContainer_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->SetContainer((TGFrame*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_DrawBorder_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_Layout_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_GetDefaultSize_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGViewPort*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_SetHPos_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->SetHPos((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_SetVPos_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->SetVPos((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_SetPos_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->SetPos((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_DeclFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGViewPort*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_DeclFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGViewPort*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_ImplFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGViewPort*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_ImplFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGViewPort*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_Class_Version_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGViewPort*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_Class_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGViewPort*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_Dictionary_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_IsA_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGViewPort*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_ShowMembers_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGViewPort_Streamer_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGViewPort*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGViewPort_TGViewPort_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGViewPort *p;
   if(1!=libp->paran) ;
   p=new TGViewPort(*(TGViewPort*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGViewPort_wATGViewPort_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGViewPort *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGViewPort *)((G__getstructoffset())+sizeof(TGViewPort)*i);
   else  delete (TGViewPort *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGCanvas */
static int G__TGCanvas_TGCanvas_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGCanvas *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGCanvas(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGCanvas(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGCanvas(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_AddFrame_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCanvas*)(G__getstructoffset()))->AddFrame((TGFrame*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_GetContainer_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCanvas*)(G__getstructoffset()))->GetContainer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_GetViewPort_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCanvas*)(G__getstructoffset()))->GetViewPort());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_SetContainer_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCanvas*)(G__getstructoffset()))->SetContainer((TGFrame*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_MapSubwindows_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCanvas*)(G__getstructoffset()))->MapSubwindows();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_DrawBorder_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCanvas*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_Layout_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCanvas*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_GetDefaultSize_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGCanvas*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_ProcessMessage_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCanvas*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGCanvas*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGCanvas*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGCanvas*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGCanvas*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGCanvas*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCanvas*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCanvas*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCanvas*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCanvas*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCanvas_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCanvas*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGCanvas_TGCanvas_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGCanvas *p;
   if(1!=libp->paran) ;
   p=new TGCanvas(*(TGCanvas*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGCanvas_wATGCanvas_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGCanvas *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGCanvas *)((G__getstructoffset())+sizeof(TGCanvas)*i);
   else  delete (TGCanvas *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGLBEntry */
static int G__TGLBEntry_TGLBEntry_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGLBEntry *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TGLBEntry(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(ULong_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGLBEntry(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGLBEntry((const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_Activate_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBEntry*)(G__getstructoffset()))->Activate((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_Toggle_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBEntry*)(G__getstructoffset()))->Toggle();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_Update_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBEntry*)(G__getstructoffset()))->Update((TGLBEntry*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_EntryId_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLBEntry*)(G__getstructoffset()))->EntryId());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_Active_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLBEntry*)(G__getstructoffset()))->Active());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLBEntry*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLBEntry*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLBEntry*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLBEntry*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGLBEntry*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLBEntry*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBEntry*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLBEntry*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBEntry*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBEntry_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBEntry*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGLBEntry_TGLBEntry_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGLBEntry *p;
   if(1!=libp->paran) ;
   p=new TGLBEntry(*(TGLBEntry*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGLBEntry_wATGLBEntry_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGLBEntry *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGLBEntry *)((G__getstructoffset())+sizeof(TGLBEntry)*i);
   else  delete (TGLBEntry *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTextLBEntry */
static int G__TGTextLBEntry_TGTextLBEntry_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextLBEntry *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TGTextLBEntry(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(ULong_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGTextLBEntry(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGTextLBEntry(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTextLBEntry(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGTextLBEntry(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_GetDefaultSize_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGTextLBEntry*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_GetText_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextLBEntry*)(G__getstructoffset()))->GetText());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_SetText_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextLBEntry*)(G__getstructoffset()))->SetText((TGString*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_Update_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextLBEntry*)(G__getstructoffset()))->Update((TGLBEntry*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextLBEntry*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextLBEntry*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextLBEntry*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextLBEntry*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTextLBEntry*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextLBEntry*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextLBEntry*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextLBEntry*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextLBEntry*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextLBEntry_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextLBEntry*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTextLBEntry_TGTextLBEntry_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTextLBEntry *p;
   if(1!=libp->paran) ;
   p=new TGTextLBEntry(*(TGTextLBEntry*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTextLBEntry_wATGTextLBEntry_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTextLBEntry *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTextLBEntry *)((G__getstructoffset())+sizeof(TGTextLBEntry)*i);
   else  delete (TGTextLBEntry *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGLBContainer */
static int G__TGLBContainer_TGLBContainer_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGLBContainer *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGLBContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGLBContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGLBContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_AddEntry_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->AddEntry((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_AddEntrySort_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->AddEntrySort((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_InsertEntry_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->InsertEntry((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_RemoveEntry_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->RemoveEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_RemoveEntries_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->RemoveEntries((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_Associate_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->Associate((const TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_HandleButton_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLBContainer*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_HandleMotion_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLBContainer*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_GetSelected_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLBContainer*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_GetSelection_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLBContainer*)(G__getstructoffset()))->GetSelection((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_GetPos_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLBContainer*)(G__getstructoffset()))->GetPos((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_GetSelectedEntry_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLBContainer*)(G__getstructoffset()))->GetSelectedEntry());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_Select_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLBContainer*)(G__getstructoffset()))->Select((Int_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_Select_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLBContainer*)(G__getstructoffset()))->Select((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_SetMultipleSelections_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->SetMultipleSelections((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_GetMultipleSelections_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLBContainer*)(G__getstructoffset()))->GetMultipleSelections());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_DeclFileName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLBContainer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_DeclFileLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLBContainer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_ImplFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLBContainer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_ImplFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLBContainer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_Class_Version_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGLBContainer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_Class_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLBContainer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_Dictionary_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_IsA_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLBContainer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_ShowMembers_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLBContainer_Streamer_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLBContainer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGLBContainer_TGLBContainer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGLBContainer *p;
   if(1!=libp->paran) ;
   p=new TGLBContainer(*(TGLBContainer*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGLBContainer_wATGLBContainer_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGLBContainer *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGLBContainer *)((G__getstructoffset())+sizeof(TGLBContainer)*i);
   else  delete (TGLBContainer *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGListBox */
static int G__TGListBox_TGListBox_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGListBox *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TGListBox(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(ULong_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGListBox(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGListBox((const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGListBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_AddEntry_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->AddEntry((TGString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_AddEntry_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->AddEntry((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_AddEntry_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->AddEntry((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_AddEntrySort_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->AddEntrySort((TGString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_AddEntrySort_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->AddEntrySort((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_AddEntrySort_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->AddEntrySort((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_InsertEntry_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->InsertEntry((TGString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_InsertEntry_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->InsertEntry((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_InsertEntry_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->InsertEntry((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_RemoveEntry_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->RemoveEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_RemoveEntries_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->RemoveEntries((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_SetTopEntry_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->SetTopEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_SetMultipleSelections_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->SetMultipleSelections((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_GetMultipleSelections_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListBox*)(G__getstructoffset()))->GetMultipleSelections());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_GetContainer_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListBox*)(G__getstructoffset()))->GetContainer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_GetViewPort_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListBox*)(G__getstructoffset()))->GetViewPort());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_DrawBorder_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Resize_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->Resize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Resize_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->Resize(*((TGDimension*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_MoveResize_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->MoveResize((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Layout_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_IntegralHeight_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->IntegralHeight((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_GetDefaultSize_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGListBox*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_ProcessMessage_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListBox*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Associate_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->Associate((const TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Select_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TGListBox*)(G__getstructoffset()))->Select((Int_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TGListBox*)(G__getstructoffset()))->Select((Int_t)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_GetSelected_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListBox*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_GetSelection_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListBox*)(G__getstructoffset()))->GetSelection((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_GetSelectedEntry_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListBox*)(G__getstructoffset()))->GetSelectedEntry());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_DeclFileName_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListBox*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_DeclFileLine_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListBox*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_ImplFileName_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListBox*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_ImplFileLine_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListBox*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Class_Version_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGListBox*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Class_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListBox*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Dictionary_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_IsA_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListBox*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_ShowMembers_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListBox_Streamer_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListBox*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGListBox_TGListBox_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGListBox *p;
   if(1!=libp->paran) ;
   p=new TGListBox(*(TGListBox*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGListBox);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGListBox_wATGListBox_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGListBox *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGListBox *)((G__getstructoffset())+sizeof(TGListBox)*i);
   else  delete (TGListBox *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGComboBoxPopup */
static int G__TGComboBoxPopup_TGComboBoxPopup_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGComboBoxPopup *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGComboBoxPopup(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGComboBoxPopup(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGComboBoxPopup(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_HandleButton_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGComboBoxPopup*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_PlacePopup_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBoxPopup*)(G__getstructoffset()))->PlacePopup((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_EndPopup_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBoxPopup*)(G__getstructoffset()))->EndPopup();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGComboBoxPopup*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGComboBoxPopup*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGComboBoxPopup*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGComboBoxPopup*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGComboBoxPopup*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGComboBoxPopup*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBoxPopup*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGComboBoxPopup*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBoxPopup*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBoxPopup_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBoxPopup*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGComboBoxPopup_TGComboBoxPopup_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGComboBoxPopup *p;
   if(1!=libp->paran) ;
   p=new TGComboBoxPopup(*(TGComboBoxPopup*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGComboBoxPopup_wATGComboBoxPopup_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGComboBoxPopup *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGComboBoxPopup *)((G__getstructoffset())+sizeof(TGComboBoxPopup)*i);
   else  delete (TGComboBoxPopup *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGComboBox */
static int G__TGComboBox_TGComboBox_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGComboBox *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TGComboBox(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(ULong_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGComboBox(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGComboBox((const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_DrawBorder_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_GetDefaultSize_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGComboBox*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_Associate_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->Associate((const TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_HandleButton_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGComboBox*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_ProcessMessage_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGComboBox*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_AddEntry_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->AddEntry((TGString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_AddEntry_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->AddEntry((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_AddEntry_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->AddEntry((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_InsertEntry_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->InsertEntry((TGString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_InsertEntry_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->InsertEntry((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_InsertEntry_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->InsertEntry((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_RemoveEntry_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->RemoveEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_RemoveEntries_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->RemoveEntries((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_GetListBox_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGComboBox*)(G__getstructoffset()))->GetListBox());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_Select_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->Select((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_GetSelected_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGComboBox*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_GetSelectedEntry_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGComboBox*)(G__getstructoffset()))->GetSelectedEntry());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_SetTopEntry_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->SetTopEntry((TGLBEntry*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_DeclFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGComboBox*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_DeclFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGComboBox*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_ImplFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGComboBox*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_ImplFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGComboBox*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_Class_Version_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGComboBox*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_Class_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGComboBox*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_Dictionary_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_IsA_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGComboBox*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_ShowMembers_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGComboBox_Streamer_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGComboBox*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGComboBox_TGComboBox_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGComboBox *p;
   if(1!=libp->paran) ;
   p=new TGComboBox(*(TGComboBox*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGComboBox_wATGComboBox_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGComboBox *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGComboBox *)((G__getstructoffset())+sizeof(TGComboBox)*i);
   else  delete (TGComboBox *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTab */
static int G__TGTab_TGTab_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTab *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TGTab(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(ULong_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGTab(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGTab(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTab(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGTab(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTab);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_AddTab_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTab*)(G__getstructoffset()))->AddTab((TGString*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_AddTab_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTab*)(G__getstructoffset()))->AddTab((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_SetTab_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTab*)(G__getstructoffset()))->SetTab((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_DrawBorder_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTab*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_HandleButton_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTab*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_GetContainer_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTab*)(G__getstructoffset()))->GetContainer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_GetCurrent_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTab*)(G__getstructoffset()))->GetCurrent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_GetTabHeight_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGTab*)(G__getstructoffset()))->GetTabHeight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTab*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTab*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTab*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTab*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTab*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTab*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTab*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTab*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTab*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTab_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTab*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTab_TGTab_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTab *p;
   if(1!=libp->paran) ;
   p=new TGTab(*(TGTab*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTab);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTab_wATGTab_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTab *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTab *)((G__getstructoffset())+sizeof(TGTab)*i);
   else  delete (TGTab *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTabElement */
static int G__TGTabElement_TGTabElement_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTabElement *p=NULL;
   switch(libp->paran) {
   case 8:
      p = new TGTabElement(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]),(ULong_t)G__int(libp->para[7]));
      break;
   case 7:
      p = new TGTabElement(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGTabElement(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_DrawBorder_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTabElement*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_GetDefaultSize_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGTabElement*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_GetText_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTabElement*)(G__getstructoffset()))->GetText());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_DeclFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTabElement*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_DeclFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTabElement*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_ImplFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTabElement*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_ImplFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTabElement*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_Class_Version_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTabElement*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_Class_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTabElement*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_Dictionary_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTabElement*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_IsA_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTabElement*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_ShowMembers_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTabElement*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabElement_Streamer_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTabElement*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTabElement_TGTabElement_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTabElement *p;
   if(1!=libp->paran) ;
   p=new TGTabElement(*(TGTabElement*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTabElement_wATGTabElement_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTabElement *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTabElement *)((G__getstructoffset())+sizeof(TGTabElement)*i);
   else  delete (TGTabElement *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTabLayout */
static int G__TGTabLayout_TGTabLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTabLayout *p=NULL;
      p = new TGTabLayout((TGTab*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTabLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGTabLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTabLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTabLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTabLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTabLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTabLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTabLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTabLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTabLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTabLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTabLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTabLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTabLayout_TGTabLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTabLayout *p;
   if(1!=libp->paran) ;
   p=new TGTabLayout(*(TGTabLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTabLayout_wATGTabLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTabLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTabLayout *)((G__getstructoffset())+sizeof(TGTabLayout)*i);
   else  delete (TGTabLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGSlider */
static int G__TGSlider_HandleButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGSlider*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_HandleMotion_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGSlider*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_SetScale_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSlider*)(G__getstructoffset()))->SetScale((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_SetRange_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSlider*)(G__getstructoffset()))->SetRange((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_SetPosition_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSlider*)(G__getstructoffset()))->SetPosition((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_GetPosition_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGSlider*)(G__getstructoffset()))->GetPosition());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_MapSubwindows_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSlider*)(G__getstructoffset()))->MapSubwindows();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_DeclFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGSlider*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_DeclFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGSlider*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_ImplFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGSlider*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_ImplFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGSlider*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_Class_Version_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGSlider*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_Class_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGSlider*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_Dictionary_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSlider*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_IsA_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGSlider*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_ShowMembers_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSlider*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSlider_Streamer_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSlider*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGSlider_wATGSlider_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGSlider *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGSlider *)((G__getstructoffset())+sizeof(TGSlider)*i);
   else  delete (TGSlider *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGVSlider */
static int G__TGVSlider_TGVSlider_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGVSlider *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGVSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGVSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGVSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGVSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_HandleButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGVSlider*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_HandleMotion_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGVSlider*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_GetDefaultSize_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGVSlider*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGVSlider*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGVSlider*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGVSlider*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGVSlider*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGVSlider*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGVSlider*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVSlider*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGVSlider*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVSlider*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVSlider_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVSlider*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGVSlider_TGVSlider_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGVSlider *p;
   if(1!=libp->paran) ;
   p=new TGVSlider(*(TGVSlider*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGVSlider_wATGVSlider_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGVSlider *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGVSlider *)((G__getstructoffset())+sizeof(TGVSlider)*i);
   else  delete (TGVSlider *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGHSlider */
static int G__TGHSlider_TGHSlider_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGHSlider *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGHSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGHSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGHSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGHSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_HandleButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGHSlider*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_HandleMotion_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGHSlider*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_GetDefaultSize_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGHSlider*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHSlider*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHSlider*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHSlider*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHSlider*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGHSlider*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHSlider*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHSlider*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHSlider*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHSlider*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHSlider_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHSlider*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGHSlider_TGHSlider_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGHSlider *p;
   if(1!=libp->paran) ;
   p=new TGHSlider(*(TGHSlider*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGHSlider_wATGHSlider_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGHSlider *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGHSlider *)((G__getstructoffset())+sizeof(TGHSlider)*i);
   else  delete (TGHSlider *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGLVEntry */
static int G__TGLVEntry_TGLVEntry_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGLVEntry *p=NULL;
   switch(libp->paran) {
   case 8:
      p = new TGLVEntry(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(const TGPicture*)G__int(libp->para[2]),(TGString*)G__int(libp->para[3])
,(TGString**)G__int(libp->para[4]),(EListViewMode)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]),(ULong_t)G__int(libp->para[7]));
      break;
   case 7:
      p = new TGLVEntry(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(const TGPicture*)G__int(libp->para[2]),(TGString*)G__int(libp->para[3])
,(TGString**)G__int(libp->para[4]),(EListViewMode)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGLVEntry(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(const TGPicture*)G__int(libp->para[2]),(TGString*)G__int(libp->para[3])
,(TGString**)G__int(libp->para[4]),(EListViewMode)G__int(libp->para[5]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_SetViewMode_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVEntry*)(G__getstructoffset()))->SetViewMode((EListViewMode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_Activate_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVEntry*)(G__getstructoffset()))->Activate((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_IsActive_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLVEntry*)(G__getstructoffset()))->IsActive());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_GetItemName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLVEntry*)(G__getstructoffset()))->GetItemName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_GetPicture_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLVEntry*)(G__getstructoffset()))->GetPicture());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_SetUserData_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVEntry*)(G__getstructoffset()))->SetUserData((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_GetUserData_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TGLVEntry*)(G__getstructoffset()))->GetUserData());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_SetColumns_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVEntry*)(G__getstructoffset()))->SetColumns((Int_t*)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_GetDefaultSize_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGLVEntry*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLVEntry*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLVEntry*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLVEntry*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLVEntry*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGLVEntry*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLVEntry*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVEntry*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLVEntry*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVEntry*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVEntry_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVEntry*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGLVEntry_TGLVEntry_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGLVEntry *p;
   if(1!=libp->paran) ;
   p=new TGLVEntry(*(TGLVEntry*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGLVEntry_wATGLVEntry_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGLVEntry *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGLVEntry *)((G__getstructoffset())+sizeof(TGLVEntry)*i);
   else  delete (TGLVEntry *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGLVContainer */
static int G__TGLVContainer_TGLVContainer_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGLVContainer *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGLVContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGLVContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGLVContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_AddItem_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->AddItem((TGLVEntry*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_HandleButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLVContainer*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_HandleDoubleClick_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLVContainer*)(G__getstructoffset()))->HandleDoubleClick((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_HandleMotion_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLVContainer*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_Associate_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->Associate((const TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_SelectAll_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->SelectAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_UnSelectAll_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->UnSelectAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_InvertSelection_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->InvertSelection();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_RemoveAll_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->RemoveAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_RemoveItem_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->RemoveItem((TGLVEntry*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_RemoveItemWithData_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->RemoveItemWithData((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_SetViewMode_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->SetViewMode((EListViewMode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_SetColumns_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->SetColumns((Int_t*)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_GetNextSelected_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLVContainer*)(G__getstructoffset()))->GetNextSelected((void**)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_NumItems_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLVContainer*)(G__getstructoffset()))->NumItems());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_NumSelected_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLVContainer*)(G__getstructoffset()))->NumSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_GetMaxItemSize_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGLVContainer*)(G__getstructoffset()))->GetMaxItemSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_DeclFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLVContainer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_DeclFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLVContainer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_ImplFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLVContainer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_ImplFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLVContainer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_Class_Version_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGLVContainer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_Class_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLVContainer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_Dictionary_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_IsA_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLVContainer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_ShowMembers_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLVContainer_Streamer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLVContainer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGLVContainer_TGLVContainer_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGLVContainer *p;
   if(1!=libp->paran) ;
   p=new TGLVContainer(*(TGLVContainer*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGLVContainer_wATGLVContainer_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGLVContainer *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGLVContainer *)((G__getstructoffset())+sizeof(TGLVContainer)*i);
   else  delete (TGLVContainer *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGListView */
static int G__TGListView_TGListView_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGListView *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGListView(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGListView(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGListView(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGListView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_Layout_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListView*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_ProcessMessage_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListView*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_SetContainer_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListView*)(G__getstructoffset()))->SetContainer((TGFrame*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_SetHeader_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListView*)(G__getstructoffset()))->SetHeader((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_SetViewMode_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListView*)(G__getstructoffset()))->SetViewMode((EListViewMode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListView*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListView*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListView*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListView*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGListView*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListView*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListView*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListView*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListView*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListView_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListView*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGListView_TGListView_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGListView *p;
   if(1!=libp->paran) ;
   p=new TGListView(*(TGListView*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGListView);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGListView_wATGListView_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGListView *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGListView *)((G__getstructoffset())+sizeof(TGListView)*i);
   else  delete (TGListView *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGFileContainer */
static int G__TGFileContainer_TGFileContainer_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGFileContainer *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGFileContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGFileContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGFileContainer(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_HandleTimer_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFileContainer*)(G__getstructoffset()))->HandleTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_AddFile_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGFileContainer*)(G__getstructoffset()))->AddFile((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_AddFrame_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->AddFrame((TGFrame*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->AddFrame((TGFrame*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_Sort_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->Sort((EFSSortMode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_SetFilter_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->SetFilter((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_ChangeDirectory_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->ChangeDirectory((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_DisplayDirectory_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->DisplayDirectory();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_GetFilePictures_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->GetFilePictures((const TGPicture**)G__int(libp->para[0]),(const TGPicture**)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(Bool_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGFileContainer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFileContainer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGFileContainer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFileContainer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGFileContainer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGFileContainer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGFileContainer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileContainer_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileContainer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGFileContainer_TGFileContainer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGFileContainer *p;
   if(1!=libp->paran) ;
   p=new TGFileContainer(*(TGFileContainer*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGFileContainer_wATGFileContainer_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGFileContainer *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGFileContainer *)((G__getstructoffset())+sizeof(TGFileContainer)*i);
   else  delete (TGFileContainer *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGFileInfo */
// automatic default constructor
static int G__TGFileInfo_TGFileInfo_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGFileInfo *p;
   if(0!=libp->paran) ;
   if(G__getaryconstruct()) p=new TGFileInfo[G__getaryconstruct()];
   else                    p=new TGFileInfo;
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGFileInfo);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGFileInfo_TGFileInfo_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGFileInfo *p;
   if(1!=libp->paran) ;
   p=new TGFileInfo(*(TGFileInfo*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGFileInfo);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGFileInfo_wATGFileInfo_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGFileInfo *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGFileInfo *)((G__getstructoffset())+sizeof(TGFileInfo)*i);
   else  delete (TGFileInfo *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGFileDialog */
static int G__TGFileDialog_TGFileDialog_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGFileDialog *p=NULL;
      p = new TGFileDialog(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(EFileDialogMode)G__int(libp->para[2]),(TGFileInfo*)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_ProcessMessage_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFileDialog*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_CloseWindow_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileDialog*)(G__getstructoffset()))->CloseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGFileDialog*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFileDialog*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGFileDialog*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFileDialog*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGFileDialog*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGFileDialog*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileDialog*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGFileDialog*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileDialog*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFileDialog_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFileDialog*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGFileDialog_TGFileDialog_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGFileDialog *p;
   if(1!=libp->paran) ;
   p=new TGFileDialog(*(TGFileDialog*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGFileDialog_wATGFileDialog_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGFileDialog *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGFileDialog *)((G__getstructoffset())+sizeof(TGFileDialog)*i);
   else  delete (TGFileDialog *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGStatusBar */
static int G__TGStatusBar_TGStatusBar_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGStatusBar *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGStatusBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGStatusBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGStatusBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_DrawBorder_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_SetText_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->SetText((TGString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->SetText((TGString*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_SetText_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->SetText((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->SetText((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_SetParts_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->SetParts((Int_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_SetParts_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->SetParts((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGStatusBar*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGStatusBar*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGStatusBar*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGStatusBar*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGStatusBar*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGStatusBar*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGStatusBar*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGStatusBar_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGStatusBar*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGStatusBar_TGStatusBar_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGStatusBar *p;
   if(1!=libp->paran) ;
   p=new TGStatusBar(*(TGStatusBar*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGStatusBar_wATGStatusBar_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGStatusBar *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGStatusBar *)((G__getstructoffset())+sizeof(TGStatusBar)*i);
   else  delete (TGStatusBar *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTextFrame */
static int G__TGTextFrame_TGTextFrame_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextFrame *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGTextFrame(
(TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTextFrame(
(TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_LoadFile_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextFrame*)(G__getstructoffset()))->LoadFile((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_LoadBuffer_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextFrame*)(G__getstructoffset()))->LoadBuffer((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_Clear_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGTextFrame*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGTextFrame*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_GetLines_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextFrame*)(G__getstructoffset()))->GetLines());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_GetVisibleLines_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextFrame*)(G__getstructoffset()))->GetVisibleLines());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_SetTopLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextFrame*)(G__getstructoffset()))->SetTopLine((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_HandleExpose_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextFrame*)(G__getstructoffset()))->HandleExpose((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTextFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextFrame_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTextFrame_TGTextFrame_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTextFrame *p;
   if(1!=libp->paran) ;
   p=new TGTextFrame(*(TGTextFrame*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTextFrame_wATGTextFrame_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTextFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTextFrame *)((G__getstructoffset())+sizeof(TGTextFrame)*i);
   else  delete (TGTextFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTextView */
static int G__TGTextView_TGTextView_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextView *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGTextView(
(TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTextView(
(TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGTextView(
(TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTextView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_LoadFile_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextView*)(G__getstructoffset()))->LoadFile((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_LoadBuffer_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextView*)(G__getstructoffset()))->LoadBuffer((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_Clear_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGTextView*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGTextView*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_ProcessMessage_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextView*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_Layout_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextView*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_DrawBorder_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextView*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_GetDefaultSize_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGTextView*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_GetTextFrame_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextView*)(G__getstructoffset()))->GetTextFrame());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextView*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextView*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextView*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextView*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTextView*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextView*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextView*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextView*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextView*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextView_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextView*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTextView_TGTextView_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTextView *p;
   if(1!=libp->paran) ;
   p=new TGTextView(*(TGTextView*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGTextView);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTextView_wATGTextView_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTextView *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTextView *)((G__getstructoffset())+sizeof(TGTextView)*i);
   else  delete (TGTextView *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGToolBar */
static int G__TGToolBar_TGToolBar_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGToolBar *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGToolBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGToolBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGToolBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_AddButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TGToolBar*)(G__getstructoffset()))->AddButton((const TGWindow*)G__int(libp->para[0]),(ToolBarData_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TGToolBar*)(G__getstructoffset()))->AddButton((const TGWindow*)G__int(libp->para[0]),(ToolBarData_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGToolBar*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGToolBar*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGToolBar*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGToolBar*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGToolBar*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGToolBar*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolBar*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGToolBar*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolBar*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGToolBar_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGToolBar*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGToolBar_TGToolBar_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGToolBar *p;
   if(1!=libp->paran) ;
   p=new TGToolBar(*(TGToolBar*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGToolBar_wATGToolBar_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGToolBar *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGToolBar *)((G__getstructoffset())+sizeof(TGToolBar)*i);
   else  delete (TGToolBar *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGHorizontal3DLine */
static int G__TGHorizontal3DLine_TGHorizontal3DLine_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGHorizontal3DLine *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGHorizontal3DLine(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGHorizontal3DLine(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGHorizontal3DLine(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGHorizontal3DLine((const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGHorizontal3DLine((const TGWindow*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_DrawBorder_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontal3DLine*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_DeclFileName_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHorizontal3DLine*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_DeclFileLine_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHorizontal3DLine*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_ImplFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHorizontal3DLine*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_ImplFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHorizontal3DLine*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_Class_Version_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGHorizontal3DLine*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_Class_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHorizontal3DLine*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_Dictionary_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontal3DLine*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_IsA_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHorizontal3DLine*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_ShowMembers_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontal3DLine*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontal3DLine_Streamer_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontal3DLine*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGHorizontal3DLine_TGHorizontal3DLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGHorizontal3DLine *p;
   if(1!=libp->paran) ;
   p=new TGHorizontal3DLine(*(TGHorizontal3DLine*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGHorizontal3DLine_wATGHorizontal3DLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGHorizontal3DLine *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGHorizontal3DLine *)((G__getstructoffset())+sizeof(TGHorizontal3DLine)*i);
   else  delete (TGHorizontal3DLine *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGListTreeItem */
static int G__TGListTreeItem_TGListTreeItem_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGListTreeItem *p=NULL;
      p = new TGListTreeItem(
(TGClient*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const TGPicture*)G__int(libp->para[2]),(const TGPicture*)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_Rename_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTreeItem*)(G__getstructoffset()))->Rename((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_GetParent_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTreeItem*)(G__getstructoffset()))->GetParent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_GetFirstChild_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTreeItem*)(G__getstructoffset()))->GetFirstChild());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_GetPrevSibling_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTreeItem*)(G__getstructoffset()))->GetPrevSibling());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_GetNextSibling_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTreeItem*)(G__getstructoffset()))->GetNextSibling());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_IsActive_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListTreeItem*)(G__getstructoffset()))->IsActive());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_IsOpen_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListTreeItem*)(G__getstructoffset()))->IsOpen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_GetText_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListTreeItem*)(G__getstructoffset()))->GetText());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_SetUserData_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTreeItem*)(G__getstructoffset()))->SetUserData((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_GetUserData_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TGListTreeItem*)(G__getstructoffset()))->GetUserData());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListTreeItem*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTreeItem*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListTreeItem*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTreeItem*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGListTreeItem*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTreeItem*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTreeItem*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTreeItem*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTreeItem*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTreeItem_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTreeItem*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGListTreeItem_TGListTreeItem_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGListTreeItem *p;
   if(1!=libp->paran) ;
   p=new TGListTreeItem(*(TGListTreeItem*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGListTreeItem_wATGListTreeItem_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGListTreeItem *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGListTreeItem *)((G__getstructoffset())+sizeof(TGListTreeItem)*i);
   else  delete (TGListTreeItem *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGListTree */
static int G__TGListTree_TGListTree_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGListTree *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGListTree(
(TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGListTree(
(TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGListTree);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_HandleButton_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListTree*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_HandleDoubleClick_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListTree*)(G__getstructoffset()))->HandleDoubleClick((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_HandleExpose_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGListTree*)(G__getstructoffset()))->HandleExpose((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_Associate_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->Associate((const TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_GetDefaultSize_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGListTree*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_AddItem_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->AddItem((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const TGPicture*)G__int(libp->para[2]),(const TGPicture*)G__int(libp->para[3])));
      break;
   case 3:
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->AddItem((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const TGPicture*)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->AddItem((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_AddItem_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->AddItem((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(void*)G__int(libp->para[2]),(const TGPicture*)G__int(libp->para[3])
,(const TGPicture*)G__int(libp->para[4])));
      break;
   case 4:
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->AddItem((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(void*)G__int(libp->para[2]),(const TGPicture*)G__int(libp->para[3])));
      break;
   case 3:
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->AddItem((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(void*)G__int(libp->para[2])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_RenameItem_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->RenameItem((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_DeleteItem_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->DeleteItem((TGListTreeItem*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_RecursiveDeleteItem_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->RecursiveDeleteItem((TGListTreeItem*)G__int(libp->para[0]),(void*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_DeleteChildren_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->DeleteChildren((TGListTreeItem*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_Reparent_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->Reparent((TGListTreeItem*)G__int(libp->para[0]),(TGListTreeItem*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_ReparentChildren_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->ReparentChildren((TGListTreeItem*)G__int(libp->para[0]),(TGListTreeItem*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_Sort_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->Sort((TGListTreeItem*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_SortSiblings_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->SortSiblings((TGListTreeItem*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_SortChildren_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->SortChildren((TGListTreeItem*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_HighlightItem_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->HighlightItem((TGListTreeItem*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_ClearHighlighted_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->ClearHighlighted();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_GetPathnameFromItem_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->GetPathnameFromItem((TGListTreeItem*)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->GetPathnameFromItem((TGListTreeItem*)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_GetFirstItem_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->GetFirstItem());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_GetSelected_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_FindSiblingByName_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->FindSiblingByName((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_FindSiblingByData_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->FindSiblingByData((TGListTreeItem*)G__int(libp->para[0]),(void*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_FindChildByName_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->FindChildByName((TGListTreeItem*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_FindChildByData_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->FindChildByData((TGListTreeItem*)G__int(libp->para[0]),(void*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_FindItemByPathname_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->FindItemByPathname((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_DeclFileName_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListTree*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_DeclFileLine_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_ImplFileName_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListTree*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_ImplFileLine_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListTree*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_Class_Version_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGListTree*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_Class_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_Dictionary_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_IsA_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListTree*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_ShowMembers_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListTree_Streamer_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListTree*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGListTree_TGListTree_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGListTree *p;
   if(1!=libp->paran) ;
   p=new TGListTree(*(TGListTree*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGListTree);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGListTree_wATGListTree_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGListTree *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGListTree *)((G__getstructoffset())+sizeof(TGListTree)*i);
   else  delete (TGListTree *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGText */
static int G__TGText_TGText_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGText *p=NULL;
   if(G__getaryconstruct()) p=new TGText[G__getaryconstruct()];
   else                    p=new TGText;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_TGText_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGText *p=NULL;
      p = new TGText((TGText*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_TGText_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGText *p=NULL;
      p = new TGText((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Clear_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGText*)(G__getstructoffset()))->Clear();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Load_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->Load((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->Load((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->Load((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Save_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->Save((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Append_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->Append((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_IsSaved_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->IsSaved());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_DelChar_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->DelChar(*((TGPosition*)G__int(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_InsChar_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->InsChar(*((TGPosition*)G__int(libp->para[0])),(char)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_GetChar_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,99,(long)((TGText*)(G__getstructoffset()))->GetChar(*((TGPosition*)G__int(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_DelText_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->DelText(*((TGPosition*)G__int(libp->para[0])),*((TGPosition*)G__int(libp->para[1]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_InsText_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->InsText(*((TGPosition*)G__int(libp->para[0])),(TGText*)G__int(libp->para[1])
,*((TGPosition*)G__int(libp->para[2])),*((TGPosition*)G__int(libp->para[3]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_DelLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->DelLine((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_InsLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->InsLine(*((TGPosition*)G__int(libp->para[0])),*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_GetLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->GetLine(*((TGPosition*)G__int(libp->para[0])),*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_BreakLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->BreakLine(*((TGPosition*)G__int(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_RowCount_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGText*)(G__getstructoffset()))->RowCount());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_ColCount_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGText*)(G__getstructoffset()))->ColCount());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_GetLineLength_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGText*)(G__getstructoffset()))->GetLineLength((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_GetLongestLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGText*)(G__getstructoffset()))->GetLongestLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Search_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->Search((TGPosition*)G__int(libp->para[0]),*((TGPosition*)G__int(libp->para[1]))
,(const char*)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3])
,(Bool_t)G__int(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Replace_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGText*)(G__getstructoffset()))->Replace(*((TGPosition*)G__int(libp->para[0])),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3])
,(Bool_t)G__int(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_DeclFileName_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGText*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_DeclFileLine_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGText*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_ImplFileName_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGText*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_ImplFileLine_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGText*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Class_Version_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGText*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Class_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGText*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Dictionary_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGText*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_IsA_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGText*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_ShowMembers_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGText*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGText_Streamer_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGText*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGText_TGText_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGText *p;
   if(1!=libp->paran) ;
   p=new TGText(*(TGText*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGText);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGText_wATGText_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGText *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGText *)((G__getstructoffset())+sizeof(TGText)*i);
   else  delete (TGText *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGDoubleSlider */
static int G__TGDoubleSlider_HandleButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGDoubleSlider*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_HandleMotion_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGDoubleSlider*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_SetScale_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->SetScale((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_SetRange_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_SetPosition_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->SetPosition((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_GetMinPosition_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGDoubleSlider*)(G__getstructoffset()))->GetMinPosition());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_GetMaxPosition_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGDoubleSlider*)(G__getstructoffset()))->GetMaxPosition());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_GetPosition_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->GetPosition(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_GetPosition_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->GetPosition((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_MapSubwindows_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->MapSubwindows();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGDoubleSlider*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGDoubleSlider*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGDoubleSlider*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGDoubleSlider*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGDoubleSlider*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGDoubleSlider*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGDoubleSlider*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleSlider_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleSlider*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGDoubleSlider_wATGDoubleSlider_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGDoubleSlider *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGDoubleSlider *)((G__getstructoffset())+sizeof(TGDoubleSlider)*i);
   else  delete (TGDoubleSlider *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGDoubleVSlider */
static int G__TGDoubleVSlider_TGDoubleVSlider_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGDoubleVSlider *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGDoubleVSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGDoubleVSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGDoubleVSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGDoubleVSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_HandleButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGDoubleVSlider*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_HandleMotion_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGDoubleVSlider*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_GetDefaultSize_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGDoubleVSlider*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGDoubleVSlider*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGDoubleVSlider*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGDoubleVSlider*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGDoubleVSlider*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGDoubleVSlider*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGDoubleVSlider*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleVSlider*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGDoubleVSlider*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleVSlider*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleVSlider_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleVSlider*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGDoubleVSlider_TGDoubleVSlider_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGDoubleVSlider *p;
   if(1!=libp->paran) ;
   p=new TGDoubleVSlider(*(TGDoubleVSlider*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGDoubleVSlider_wATGDoubleVSlider_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGDoubleVSlider *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGDoubleVSlider *)((G__getstructoffset())+sizeof(TGDoubleVSlider)*i);
   else  delete (TGDoubleVSlider *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGDoubleHSlider */
static int G__TGDoubleHSlider_TGDoubleHSlider_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGDoubleHSlider *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGDoubleHSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGDoubleHSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGDoubleHSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGDoubleHSlider(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_HandleButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGDoubleHSlider*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_HandleMotion_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGDoubleHSlider*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_GetDefaultSize_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGDoubleHSlider*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGDoubleHSlider*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGDoubleHSlider*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGDoubleHSlider*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGDoubleHSlider*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGDoubleHSlider*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGDoubleHSlider*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleHSlider*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGDoubleHSlider*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleHSlider*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDoubleHSlider_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDoubleHSlider*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGDoubleHSlider_TGDoubleHSlider_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGDoubleHSlider *p;
   if(1!=libp->paran) ;
   p=new TGDoubleHSlider(*(TGDoubleHSlider*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGDoubleHSlider_wATGDoubleHSlider_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGDoubleHSlider *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGDoubleHSlider *)((G__getstructoffset())+sizeof(TGDoubleHSlider)*i);
   else  delete (TGDoubleHSlider *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TGMimeTypes */

/* TGToolTip */

/* TGScrollBarElement */

/* TGScrollBar */

/* TGHScrollBar */

/* TGVScrollBar */

/* TGViewPort */

/* TGCanvas */

/* TGLBEntry */

/* TGTextLBEntry */

/* TGLBContainer */

/* TGListBox */

/* TGComboBoxPopup */

/* TGComboBox */

/* TGTab */

/* TGTabElement */

/* TGTabLayout */

/* TGSlider */

/* TGVSlider */

/* TGHSlider */

/* TGLVEntry */

/* TGLVContainer */

/* TGListView */

/* TGFileContainer */

/* TGFileInfo */

/* TGFileDialog */

/* TGStatusBar */

/* TGTextFrame */

/* TGTextView */

/* TGToolBar */

/* TGHorizontal3DLine */

/* TGListTreeItem */

/* TGListTree */

/* TGText */

/* TGDoubleSlider */

/* TGDoubleVSlider */

/* TGDoubleHSlider */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Gui2 {
 public:
  G__Sizep2memfuncG__Gui2() {p=&G__Sizep2memfuncG__Gui2::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Gui2::*p)();
};

size_t G__get_sizep2memfuncG__Gui2()
{
  G__Sizep2memfuncG__Gui2 a;
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
extern "C" void G__cpp_setup_inheritanceG__Gui2() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes))) {
     TGMimeTypes *G__Lderived;
     G__Lderived=(TGMimeTypes*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip))) {
     TGToolTip *G__Lderived;
     G__Lderived=(TGToolTip*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement))) {
     TGScrollBarElement *G__Lderived;
     G__Lderived=(TGScrollBarElement*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar))) {
     TGScrollBar *G__Lderived;
     G__Lderived=(TGScrollBar*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar))) {
     TGHScrollBar *G__Lderived;
     G__Lderived=(TGHScrollBar*)0x1000;
     {
       TGScrollBar *G__Lpbase=(TGScrollBar*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar))) {
     TGVScrollBar *G__Lderived;
     G__Lderived=(TGVScrollBar*)0x1000;
     {
       TGScrollBar *G__Lpbase=(TGScrollBar*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort))) {
     TGViewPort *G__Lderived;
     G__Lderived=(TGViewPort*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas))) {
     TGCanvas *G__Lderived;
     G__Lderived=(TGCanvas*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry))) {
     TGLBEntry *G__Lderived;
     G__Lderived=(TGLBEntry*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry))) {
     TGTextLBEntry *G__Lderived;
     G__Lderived=(TGTextLBEntry*)0x1000;
     {
       TGLBEntry *G__Lpbase=(TGLBEntry*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer))) {
     TGLBContainer *G__Lderived;
     G__Lderived=(TGLBContainer*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox))) {
     TGListBox *G__Lderived;
     G__Lderived=(TGListBox*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup))) {
     TGComboBoxPopup *G__Lderived;
     G__Lderived=(TGComboBoxPopup*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox))) {
     TGComboBox *G__Lderived;
     G__Lderived=(TGComboBox*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGTab))) {
     TGTab *G__Lderived;
     G__Lderived=(TGTab*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement))) {
     TGTabElement *G__Lderived;
     G__Lderived=(TGTabElement*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout))) {
     TGTabLayout *G__Lderived;
     G__Lderived=(TGTabLayout*)0x1000;
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout),G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider))) {
     TGSlider *G__Lderived;
     G__Lderived=(TGSlider*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider))) {
     TGVSlider *G__Lderived;
     G__Lderived=(TGVSlider*)0x1000;
     {
       TGSlider *G__Lpbase=(TGSlider*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGSlider),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider))) {
     TGHSlider *G__Lderived;
     G__Lderived=(TGHSlider*)0x1000;
     {
       TGSlider *G__Lpbase=(TGSlider*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGSlider),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry))) {
     TGLVEntry *G__Lderived;
     G__Lderived=(TGLVEntry*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer))) {
     TGLVContainer *G__Lderived;
     G__Lderived=(TGLVContainer*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGListView))) {
     TGListView *G__Lderived;
     G__Lderived=(TGListView*)0x1000;
     {
       TGCanvas *G__Lpbase=(TGCanvas*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListView),G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListView),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListView),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListView),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListView),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer))) {
     TGFileContainer *G__Lderived;
     G__Lderived=(TGFileContainer*)0x1000;
     {
       TGLVContainer *G__Lpbase=(TGLVContainer*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog))) {
     TGFileDialog *G__Lderived;
     G__Lderived=(TGFileDialog*)0x1000;
     {
       TGTransientFrame *G__Lpbase=(TGTransientFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),G__get_linked_tagnum(&G__G__Gui2LN_TGTransientFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGMainFrame *G__Lpbase=(TGMainFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),G__get_linked_tagnum(&G__G__Gui2LN_TGMainFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar))) {
     TGStatusBar *G__Lderived;
     G__Lderived=(TGStatusBar*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame))) {
     TGTextFrame *G__Lderived;
     G__Lderived=(TGTextFrame*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView))) {
     TGTextView *G__Lderived;
     G__Lderived=(TGTextView*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar))) {
     TGToolBar *G__Lderived;
     G__Lderived=(TGToolBar*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar),G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine))) {
     TGHorizontal3DLine *G__Lderived;
     G__Lderived=(TGHorizontal3DLine*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGListTree))) {
     TGListTree *G__Lderived;
     G__Lderived=(TGListTree*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTree),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTree),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTree),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTree),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider))) {
     TGDoubleSlider *G__Lderived;
     G__Lderived=(TGDoubleSlider*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider))) {
     TGDoubleVSlider *G__Lderived;
     G__Lderived=(TGDoubleVSlider*)0x1000;
     {
       TGDoubleSlider *G__Lpbase=(TGDoubleSlider*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider))) {
     TGDoubleHSlider *G__Lderived;
     G__Lderived=(TGDoubleHSlider*)0x1000;
     {
       TGDoubleSlider *G__Lpbase=(TGDoubleSlider*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),G__get_linked_tagnum(&G__G__Gui2LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Gui2() {

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
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TGMimeTypes */
static void G__setup_memvarTGMimeTypes(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes));
   { TGMimeTypes *p; p=(TGMimeTypes*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGClient),-1,-1,2,"fClient=",0,"client to which mime types belong (display server)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TString),-1,-1,2,"fFilename=",0,"file name of mime type file");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fChanged=",0,"true if file has changed");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TOrdCollection),-1,-1,2,"fList=",0,"list of mime types");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGToolTip */
static void G__setup_memvarTGToolTip(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip));
   { TGToolTip *p; p=(TGToolTip*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLabel),-1,-1,4,"fLabel=",0,"help text");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,4,"fL1=",0,"layout used to place text in frame");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TTimer),-1,-1,4,"fDelay=",0,"popup delay timer");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),-1,-1,4,"fWindow=",0,"frame to which tool tip is associated");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,4,"fgLightYellowPixel=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EScrollBarMode */

   /* TGScrollBarElement */
static void G__setup_memvarTGScrollBarElement(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement));
   { TGScrollBarElement *p; p=(TGScrollBarElement*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fState=",0,"state of scrollbar element (button up or down)");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fPic=",0,"picture in scrollbar element");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGScrollBar */
static void G__setup_memvarTGScrollBar(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar));
   { TGScrollBar *p; p=(TGScrollBar*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fX0=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fY0=",0,"current slider position in pixels");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fXp=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fYp=",0,"previous slider position in pixels");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fDragging=",0,"in dragging mode?");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRange=",0,"logical upper range of scrollbar");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPsize=",0,"logical page size of scrollbar");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPos=",0,"logical current position");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSliderSize=",0,"logical slider size");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSliderRange=",0,"logical slider range");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),-1,-1,2,"fHead=",0,"head button of scrollbar");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),-1,-1,2,"fTail=",0,"tail button of scrollbar");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),-1,-1,2,"fSlider=",0,"slider");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fHeadPic=",0,"picture in head (up or left arrow)");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fTailPic=",0,"picture in tail (down or right arrow)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TTimer),-1,-1,2,"fRepeat=",0,"repeat rate timer (when mouse stays pressed)");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Window_t"),-1,2,"fSubw=",0,"sub window in which mouse is pressed");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgBckgndPixmap=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-2,2,"fgScrollBarWidth=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGHScrollBar */
static void G__setup_memvarTGHScrollBar(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar));
   { TGHScrollBar *p; p=(TGHScrollBar*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGVScrollBar */
static void G__setup_memvarTGVScrollBar(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar));
   { TGVScrollBar *p; p=(TGVScrollBar*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGViewPort */
static void G__setup_memvarTGViewPort(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort));
   { TGViewPort *p; p=(TGViewPort*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fX0=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fY0=",0,"position of container frame in viewport");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),-1,-1,2,"fContainer=",0,"container frame (must inherit from TGCompositeFrame)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGCanvas */
static void G__setup_memvarTGCanvas(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas));
   { TGCanvas *p; p=(TGCanvas*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),-1,-1,2,"fVport=",0,"viewport through which we look at contents");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),-1,-1,2,"fHScrollbar=",0,"horizontal scrollbar");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),-1,-1,2,"fVScrollbar=",0,"vertical scrollbar");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGLBEntry */
static void G__setup_memvarTGLBEntry(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry));
   { TGLBEntry *p; p=(TGLBEntry*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEntryId=",0,"message id of listbox entry");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fBkcolor=",0,"entry background color");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fActive=",0,"true if entry is active");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTextLBEntry */
static void G__setup_memvarTGTextLBEntry(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry));
   { TGTextLBEntry *p; p=(TGTextLBEntry*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGString),-1,-1,2,"fText=",0,"entry text string");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTWidth=",0,"text width");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTHeight=",0,"text height");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fTextChanged=",0,"true if text has been changed");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,"text drawing graphics context");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font used to draw string");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,2,"fgSelPixel=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGLBContainer */
static void G__setup_memvarTGLBContainer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer));
   { TGLBContainer *p; p=(TGLBContainer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,-1,2,"fLastActive=",0,"last active listbox entry in single selection listbox");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),-1,-1,2,"fMsgWindow=",0,"window handling container messages");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fMultiSelect=",0,"true if multi selection is switched on");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fChangeStatus=",0,"defines the changes (select or unselect) while the mouse");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGListBox */
static void G__setup_memvarTGListBox(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox));
   { TGListBox *p; p=(TGListBox*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fListBoxId=",0,"listbox widget id");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fItemVsize=",0,"maximum height of single entry");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fIntegralHeight=",0,"true if height should be multiple of fItemVsize");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),-1,-1,2,"fLbc=",0,"listbox container");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),-1,-1,2,"fVport=",0,"listbox viewport (see TGCanvas.h)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),-1,-1,2,"fVScrollbar=",0,"vertical scrollbar");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),-1,-1,2,"fMsgWindow=",0,"window handling listbox messages");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGComboBoxPopup */
static void G__setup_memvarTGComboBoxPopup(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup));
   { TGComboBoxPopup *p; p=(TGComboBoxPopup*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Cursor_t"),-2,2,"fgDefaultCursor=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGComboBox */
static void G__setup_memvarTGComboBox(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox));
   { TGComboBox *p; p=(TGComboBox*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fComboBoxId=",0,"combobox widget id");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,-1,2,"fSelEntry=",0,"selected item frame");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),-1,-1,2,"fDDButton=",0,"button controlling drop down of popup");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),-1,-1,2,"fComboFrame=",0,"popup containing a listbox");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),-1,-1,2,"fListBox=",0,"the listbox with text items");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fBpic=",0,"down arrow picture used in fDDButton");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),-1,-1,2,"fMsgWindow=",0,"window handling combobox messages");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLhs=",0,"layout hints for selected item frame");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLhb=",0,"layout hints for fDDButton");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLhdd=",0,"layout hints for fListBox");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTab */
static void G__setup_memvarTGTab(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab));
   { TGTab *p; p=(TGTab*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCurrent=",0,"index of current tab");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTabh=",0,"tab height");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),-1,-1,2,"fContainer=",0,"current container");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,"drawing context");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTabElement */
static void G__setup_memvarTGTabElement(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement));
   { TGTabElement *p; p=(TGTabElement*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGString),-1,-1,2,"fText=",0,"text on tab");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,"graphics context for drawing tab");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font used for tab");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTWidth=",0,"width of tab text");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTHeight=",0,"height of tab text");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTabLayout */
static void G__setup_memvarTGTabLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout));
   { TGTabLayout *p; p=(TGTabLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGTab),-1,-1,2,"fMain=",0,"container frame");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TList),-1,-1,2,"fList=",0,"list of frames to arrange");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* ESliderType */

   /* TGSlider */
static void G__setup_memvarTGSlider(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider));
   { TGSlider *p; p=(TGSlider*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPos=",0,"logical position between fVmin and fVmax");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRelPos=",0,"slider position in pixel coordinates");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVmin=",0,"logical lower limit of slider");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVmax=",0,"logical upper limit of slider");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fType=",0,"slider type bits");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fScale=",0,"tick mark scale");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fDragging=",0,"true if in dragging mode");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fSliderPic=",0,"picture to draw slider");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGVSlider */
static void G__setup_memvarTGVSlider(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider));
   { TGVSlider *p; p=(TGVSlider*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fYp=",0,"vertical slider y position in pixel coordinates");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGHSlider */
static void G__setup_memvarTGHSlider(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider));
   { TGHSlider *p; p=(TGHSlider*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fXp=",0,"horizontal slider x position in pixel coordinates");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EListViewMode */

   /* TGLVEntry */
static void G__setup_memvarTGLVEntry(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry));
   { TGLVEntry *p; p=(TGLVEntry*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGString),-1,-1,2,"fName=",0,"name of item");
   G__memvar_setup((void*)NULL,85,2,0,G__get_linked_tagnum(&G__G__Gui2LN_TGString),-1,-1,2,"fSubnames=",0,"sub names of item (details)");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCpos=",0,"position of sub names");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fJmode=",0,"alignment for sub names");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCtw=",0,"width of sub names");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTWidth=",0,"width of name");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTHeight=",0,"height of name");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fActive=",0,"true if item is active");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Gui2LN_EListViewMode),-1,-1,2,"fViewMode=",0,"list view viewing mode");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fBigPic=",0,"big icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fSmallPic=",0,"small icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fCurrent=",0,"current icon");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGSelectedPicture),-1,-1,2,"fSelPic=",0,"selected icon");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,"drawing graphics context");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"text font");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-1,2,"fUserData=",0,"pointer to user data structure");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,2,"fgSelPixel=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGLVContainer */
static void G__setup_memvarTGLVContainer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer));
   { TGLVContainer *p; p=(TGLVContainer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),-1,-1,2,"fLastActive=",0,"last active list view item");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fItemLayout=",0,"item layout hints");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Gui2LN_EListViewMode),-1,-1,2,"fViewMode=",0,"list view viewing mode");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCpos=",0,"position of sub names");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fJmode=",0,"alignment of sub names");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fXp=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fYp=",0,"previous pointer position");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fX0=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fY0=",0,"corner of rubber band box");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fXf=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fYf=",0,"other corner of rubber band box");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTotal=",0,"total items");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSelected=",0,"number of selected items");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fDragging=",0,"true if in dragging mode");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),-1,-1,2,"fMsgWindow=",0,"window handling container messages");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgLineGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGListView */
static void G__setup_memvarTGListView(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListView));
   { TGListView *p; p=(TGListView*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fColumns[7]=",0,"column width");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fJmode[7]=",0,"column text alignment");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Gui2LN_EListViewMode),-1,-1,2,"fViewMode=",0,"view mode if list view widget");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,-1,2,"fMaxSize=",0,"maximum item size");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGTextButton),-1,-1,2,"fColHeader[7]=",0,"column headers for in detailed mode");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EFSSortMode */

   /* TGFileContainer */
static void G__setup_memvarTGFileContainer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer));
   { TGFileContainer *p; p=(TGFileContainer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Gui2LN_EFSSortMode),-1,-1,2,"fSortType=",0,"sorting mode of contents");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TRegexp),-1,-1,2,"fFilter=",0,"file filter");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TViewUpdateTimer),-1,-1,2,"fRefresh=",0,"refresh timer");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fMtime=",0,"directory modification time");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fFolder_t=",0,"small folder icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fFolder_s=",0,"big folder icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fApp_t=",0,"small application icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fApp_s=",0,"big application icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fDoc_t=",0,"small document icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fDoc_s=",0,"big document icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fSlink_t=",0,"small symbolic link icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fSlink_s=",0,"big symbolic link icon");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EFileDialogMode */

   /* TGFileInfo */
static void G__setup_memvarTGFileInfo(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileInfo));
   { TGFileInfo *p; p=(TGFileInfo*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->fFilename)-(long)(p)),67,0,0,-1,-1,-1,1,"fFilename=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fIniDir)-(long)(p)),67,0,0,-1,-1,-1,1,"fIniDir=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fFileTypes)-(long)(p)),67,2,0,-1,-1,-1,1,"fFileTypes=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGFileDialog */
static void G__setup_memvarTGFileDialog(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog));
   { TGFileDialog *p; p=(TGFileDialog*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLabel),-1,-1,2,"fLookin=",0,"\"Save in\" or \"Look in\" label");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLabel),-1,-1,2,"fLfname=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLabel),-1,-1,2,"fLftypes=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGTextBuffer),-1,-1,2,"fTbfname=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGTextEntry),-1,-1,2,"fName=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),-1,-1,2,"fTypes=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGFSComboBox),-1,-1,2,"fTreeLB=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGPictureButton),-1,-1,2,"fCdup=",0,"top toolbar button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGPictureButton),-1,-1,2,"fNewf=",0,"top toolbar button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGPictureButton),-1,-1,2,"fList=",0,"top toolbar button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGPictureButton),-1,-1,2,"fDetails=",0,"top toolbar button");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fPcdup=",0,"picture for fCdup");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fPnewf=",0,"picture for fNewf");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fPlist=",0,"picture for fList");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,2,"fPdetails=",0,"picture for fDetails");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGTextButton),-1,-1,2,"fOk=",0,"ok button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGTextButton),-1,-1,2,"fCancel=",0,"cancel button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGListView),-1,-1,2,"fFv=",0,"file list view");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),-1,-1,2,"fFc=",0,"file list view container (containing the files)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontalFrame),-1,-1,2,"fHtop=",0,"main frame directly in popup");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontalFrame),-1,-1,2,"fHf=",0,"frame for file name and types");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontalFrame),-1,-1,2,"fHfname=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontalFrame),-1,-1,2,"fHftype=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGVerticalFrame),-1,-1,2,"fVf=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGVerticalFrame),-1,-1,2,"fVbf=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLmain=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLhl=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLb1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLb2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLvf=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLvbf=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLb=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLht=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGLayoutHints),-1,-1,2,"fLht1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGFileInfo),-1,-1,2,"fFileInfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGStatusBar */
static void G__setup_memvarTGStatusBar(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar));
   { TGStatusBar *p; p=(TGStatusBar*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,2,0,G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBarPart),-1,-1,2,"fStatusPart=",0,"frames containing statusbar text");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fParts=",0,"size of parts (in percent of total width)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpart=",0,"number of parts");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fYt=",0,"y drawing position (depending on font)");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fXt=",0,"x position for each part");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTextFrame */
static void G__setup_memvarTGTextFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame));
   { TGTextFrame *p; p=(TGTextFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,67,2,0,-1,-1,-1,2,"fChars=",0,"lines of text");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLnlen=",0,"length of each line");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTHeight=",0,"height of line of text");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNlines=",0,"number of lines");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMaxLines=",0,"maximum number of lines in fChars and fLnlen");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTop=",0,"current top line");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFont=",0,"font used to display text");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fGC=",0,"graphics context to display text");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTextView */
static void G__setup_memvarTGTextView(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView));
   { TGTextView *p; p=(TGTextView*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),-1,-1,2,"fTextCanvas=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),-1,-1,2,"fVsb=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGToolBar */
static void G__setup_memvarTGToolBar(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar));
   { TGToolBar *p; p=(TGToolBar*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TList),-1,-1,4,"fWidgets=",0,"list of buttons and layouthints to be deleted");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TList),-1,-1,4,"fPictures=",0,"list of pictures that should be freed");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGHorizontal3DLine */
static void G__setup_memvarTGHorizontal3DLine(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine));
   { TGHorizontal3DLine *p; p=(TGHorizontal3DLine*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGListTreeItem */
static void G__setup_memvarTGListTreeItem(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem));
   { TGListTreeItem *p; p=(TGListTreeItem*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGClient),-1,-1,4,"fClient=",0,"pointer to TGClient");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,-1,4,"fParent=",0,"pointer to parent");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,-1,4,"fFirstchild=",0,"pointer to first child item");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,-1,4,"fPrevsibling=",0,"pointer to previous sibling");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,-1,4,"fNextsibling=",0,"pointer to next sibling");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fOpen=",0,"true if item is open");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fActive=",0,"true if item is active");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,4,"fText=",0,"item text");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fLength=",0,"length of item text");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fY=",0,"y position of item");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fXtext=",0,"x position of item text");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fYtext=",0,"y position of item text");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fHeight=",0,"item height");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fPicWidth=",0,"width of item icon");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,4,"fOpenPic=",0,"icon for open state");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,-1,4,"fClosedPic=",0,"icon for closed state");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-1,4,"fUserData=",0,"pointer to user data structure");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGListTree */
static void G__setup_memvarTGListTree(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTree));
   { TGListTree *p; p=(TGListTree*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,-1,2,"fFirst=",0,"pointer to first item in list");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,-1,2,"fSelected=",0,"pointer to selected item in list");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fHspacing=",0,"horizontal spacing between items");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVspacing=",0,"vertical spacing between items");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fIndent=",0,"number of pixels indentation");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMargin=",0,"number of pixels margin from left side");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLastY=",0,"last used y position");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fGrayPixel=",0,"gray draw color");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fDrawGC=",0,"icon drawing context");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fLineGC=",0,"dashed line drawing context");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fHighlightGC=",0,"highlighted icon drawing context");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFont=",0,"font used to draw item text");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fDefw=",0,"default list width");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fDefh=",0,"default list height");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fExposeTop=",0,"top y postion of visible region");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fExposeBottom=",0,"bottom y position of visible region");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui2LN_TGWindow),-1,-1,2,"fMsgWindow=",0,"pointer to window handling list messages");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGText */
static void G__setup_memvarTGText(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGText));
   { TGText *p; p=(TGText*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fIsSaved=",0,"false if text needs to be saved");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TList),-1,-1,2,"fLines=",0,"list of lines");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TObjString),-1,-1,2,"fCurrent=",0,"current line");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCurrentRow=",0,"current row number");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRowCount=",0,"number of rows");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fColCount=",0,"number of columns in current line");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLongestLine=",0,"length of longest line");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGDoubleSlider */
static void G__setup_memvarTGDoubleSlider(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider));
   { TGDoubleSlider *p; p=(TGDoubleSlider*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPos=",0,"logical position between fVmin and fVmax");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fSmin=",0,"logical position of min value of Slider");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fSmax=",0,"logical position of max value of Slider");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRelPos=",0,"slider position in pixel coordinates");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fVmin=",0,"logical lower limit of slider");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fVmax=",0,"logical upper limit of slider");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fScale=",0,"tick mark scale");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fScaleType=",0,"tick mark scale type (no, downright, both)");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fDragging=",0,"true if in dragging mode");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPressPoint=",0,"mouse position at button press event");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPressSmin=",0,"logical min position at button press event");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPressSmax=",0,"logical max position at button press event");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMove=",0,"1: move min value");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGDoubleVSlider */
static void G__setup_memvarTGDoubleVSlider(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider));
   { TGDoubleVSlider *p; p=(TGDoubleVSlider*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fYp=",0,"vertical slider y position in pixel coordinates");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGDoubleHSlider */
static void G__setup_memvarTGDoubleHSlider(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider));
   { TGDoubleHSlider *p; p=(TGDoubleHSlider*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fXp=",0,"horizontal slider x position in pixel coordinates");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Gui2() {
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
static void G__setup_memfuncTGMimeTypes(void) {
   /* TGMimeTypes */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes));
   G__memfunc_setup("Find",385,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Gui2LN_TGMime),-1,0,1,1,2,0,"C - - 0 - filename",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGMimeTypes",1080,G__TGMimeTypes_TGMimeTypes_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes),-1,0,2,1,1,0,
"U 'TGClient' - 0 - client C - - 0 - file",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SaveMimes",906,G__TGMimeTypes_SaveMimes_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HasChanged",966,G__TGMimeTypes_HasChanged_4_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddType",683,G__TGMimeTypes_AddType_5_0,121,-1,-1,0,4,1,1,0,
"C - - 0 - type C - - 0 - pat "
"C - - 0 - icon C - - 0 - action",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TGMimeTypes_Print_6_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAction",894,G__TGMimeTypes_GetAction_7_0,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - filename C - - 0 - action",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetType",706,G__TGMimeTypes_GetType_8_0,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - filename C - - 0 - type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetIcon",681,G__TGMimeTypes_GetIcon_9_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,0,2,1,1,1,
"C - - 0 - filename b - 'Bool_t' 0 - small_icon",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGMimeTypes_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGMimeTypes_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGMimeTypes_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGMimeTypes_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGMimeTypes_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGMimeTypes_Class_5_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGMimeTypes_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGMimeTypes_IsA_7_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGMimeTypes_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGMimeTypes_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGMimeTypes",1080,G__TGMimeTypes_TGMimeTypes_0_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes),-1,0,1,1,1,0,"u 'TGMimeTypes' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGMimeTypes",1206,G__TGMimeTypes_wATGMimeTypes_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGToolTip(void) {
   /* TGToolTip */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip));
   G__memfunc_setup("TGToolTip",870,G__TGToolTip_TGToolTip_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p U 'TGFrame' - 0 - f "
"C - - 0 - text l - 'Long_t' 0 - delayms",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGToolTip_DrawBorder_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTimer",1101,G__TGToolTip_HandleTimer_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TTimer' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TGToolTip_Show_4_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hide",378,G__TGToolTip_Hide_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TGToolTip_Reset_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGToolTip_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGToolTip_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGToolTip_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGToolTip_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGToolTip_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGToolTip_Class_2_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGToolTip_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGToolTip_IsA_4_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGToolTip_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGToolTip_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGToolTip",870,G__TGToolTip_TGToolTip_7_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip),-1,0,1,1,1,0,"u 'TGToolTip' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGToolTip",996,G__TGToolTip_wATGToolTip_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGScrollBarElement(void) {
   /* TGScrollBarElement */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement));
   G__memfunc_setup("TGScrollBarElement",1769,G__TGScrollBarElement_TGScrollBarElement_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGPicture' - 0 - pic "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h "
"h - 'UInt_t' 0 kRaisedFrame|kDoubleBorder options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetState",813,G__TGScrollBarElement_SetState_1_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBorder",1004,G__TGScrollBarElement_DrawBorder_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGScrollBarElement_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGScrollBarElement_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGScrollBarElement_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGScrollBarElement_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGScrollBarElement_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGScrollBarElement_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGScrollBarElement_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGScrollBarElement_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGScrollBarElement_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGScrollBarElement_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGScrollBarElement",1769,G__TGScrollBarElement_TGScrollBarElement_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),-1,0,1,1,1,0,"u 'TGScrollBarElement' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGScrollBarElement",1895,G__TGScrollBarElement_wATGScrollBarElement_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGScrollBar(void) {
   /* TGScrollBar */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar));
   G__memfunc_setup("DrawBorder",1004,G__TGScrollBar_DrawBorder_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGScrollBar_HandleButton_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("HandleMotion",1218,G__TGScrollBar_HandleMotion_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("HandleTimer",1101,G__TGScrollBar_HandleTimer_5_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TTimer' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGScrollBar_Layout_6_0,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetRange",793,G__TGScrollBar_SetRange_7_0,121,-1,-1,0,2,1,1,8,
"i - 'Int_t' 0 - range i - 'Int_t' 0 - page_size",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetPosition",1153,G__TGScrollBar_SetPosition_8_0,121,-1,-1,0,1,1,1,8,"i - 'Int_t' 0 - pos",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPosition",1141,G__TGScrollBar_GetPosition_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGScrollBar_MapSubwindows_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGScrollBar_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGScrollBar_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGScrollBar_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGScrollBar_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGScrollBar_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGScrollBar_Class_6_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGScrollBar_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGScrollBar_IsA_8_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGScrollBar_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGScrollBar_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TGScrollBar",1181,G__TGScrollBar_wATGScrollBar_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGHScrollBar(void) {
   /* TGHScrollBar */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar));
   G__memfunc_setup("TGHScrollBar",1127,G__TGHScrollBar_TGHScrollBar_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kHorizontalFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGHScrollBar_HandleButton_2_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGHScrollBar_HandleMotion_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGHScrollBar_GetDefaultSize_4_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGHScrollBar_Layout_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TGHScrollBar_SetRange_6_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - range i - 'Int_t' 0 - page_size",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPosition",1153,G__TGHScrollBar_SetPosition_7_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - pos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGHScrollBar_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGHScrollBar_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGHScrollBar_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGHScrollBar_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGHScrollBar_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGHScrollBar_Class_3_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGHScrollBar_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGHScrollBar_IsA_5_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGHScrollBar_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGHScrollBar_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGHScrollBar",1127,G__TGHScrollBar_TGHScrollBar_8_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),-1,0,1,1,1,0,"u 'TGHScrollBar' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGHScrollBar",1253,G__TGHScrollBar_wATGHScrollBar_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGVScrollBar(void) {
   /* TGVScrollBar */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar));
   G__memfunc_setup("TGVScrollBar",1141,G__TGVScrollBar_TGVScrollBar_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kVerticalFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGVScrollBar_HandleButton_2_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGVScrollBar_HandleMotion_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGVScrollBar_GetDefaultSize_4_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGVScrollBar_Layout_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TGVScrollBar_SetRange_6_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - range i - 'Int_t' 0 - page_size",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPosition",1153,G__TGVScrollBar_SetPosition_7_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - pos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGVScrollBar_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGVScrollBar_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGVScrollBar_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGVScrollBar_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGVScrollBar_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGVScrollBar_Class_3_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGVScrollBar_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGVScrollBar_IsA_5_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGVScrollBar_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGVScrollBar_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGVScrollBar",1141,G__TGVScrollBar_TGVScrollBar_8_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),-1,0,1,1,1,0,"u 'TGVScrollBar' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGVScrollBar",1267,G__TGVScrollBar_wATGVScrollBar_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGViewPort(void) {
   /* TGViewPort */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort));
   G__memfunc_setup("TGViewPort",987,G__TGViewPort_TGViewPort_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kChildFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetContainer",1219,G__TGViewPort_GetContainer_1_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetContainer",1231,G__TGViewPort_SetContainer_2_0,121,-1,-1,0,1,1,1,0,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGViewPort_DrawBorder_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGViewPort_Layout_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGViewPort_GetDefaultSize_5_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHPos",678,G__TGViewPort_SetHPos_6_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - xpos",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetVPos",692,G__TGViewPort_SetVPos_7_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - ypos",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPos",606,G__TGViewPort_SetPos_8_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - xpos i - 'Int_t' 0 - ypos",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGViewPort_DeclFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGViewPort_DeclFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGViewPort_ImplFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGViewPort_ImplFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGViewPort_Class_Version_3_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGViewPort_Class_4_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGViewPort_Dictionary_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGViewPort_IsA_6_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGViewPort_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGViewPort_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGViewPort",987,G__TGViewPort_TGViewPort_9_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),-1,0,1,1,1,0,"u 'TGViewPort' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGViewPort",1113,G__TGViewPort_wATGViewPort_0_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGCanvas(void) {
   /* TGCanvas */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas));
   G__memfunc_setup("TGCanvas",759,G__TGCanvas_TGCanvas_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kSunkenFrame|kDoubleBorder options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddFrame",756,G__TGCanvas_AddFrame_2_0,121,-1,-1,0,2,1,1,0,
"U 'TGFrame' - 0 - f U 'TGLayoutHints' - 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetContainer",1219,G__TGCanvas_GetContainer_3_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetViewPort",1120,G__TGCanvas_GetViewPort_4_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetContainer",1231,G__TGCanvas_SetContainer_5_0,121,-1,-1,0,1,1,1,0,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGCanvas_MapSubwindows_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBorder",1004,G__TGCanvas_DrawBorder_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGCanvas_Layout_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGCanvas_GetDefaultSize_9_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessMessage",1444,G__TGCanvas_ProcessMessage_0_1,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - msg l - 'Long_t' 0 - parm1 "
"l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGCanvas_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGCanvas_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGCanvas_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGCanvas_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGCanvas_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGCanvas_Class_6_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGCanvas_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGCanvas_IsA_8_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGCanvas_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGCanvas_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGCanvas",759,G__TGCanvas_TGCanvas_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas),-1,0,1,1,1,0,"u 'TGCanvas' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGCanvas",885,G__TGCanvas_wATGCanvas_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGLBEntry(void) {
   /* TGLBEntry */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGLBEntry",827,G__TGLBEntry_TGLBEntry_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p i - 'Int_t' 0 - id "
"h - 'UInt_t' 0 kHorizontalFrame options k - 'ULong_t' 0 fgWhitePixel back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Activate",817,G__TGLBEntry_Activate_2_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - a",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Toggle",610,G__TGLBEntry_Toggle_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Update",611,G__TGLBEntry_Update_4_0,121,-1,-1,0,1,1,1,0,"U 'TGLBEntry' - 0 - -","this is needed on TGComboBoxes :(",(void*)NULL,1);
   G__memfunc_setup("EntryId",703,G__TGLBEntry_EntryId_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Active",604,G__TGLBEntry_Active_6_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGLBEntry_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGLBEntry_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGLBEntry_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGLBEntry_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGLBEntry_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGLBEntry_Class_2_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGLBEntry_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGLBEntry_IsA_4_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGLBEntry_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGLBEntry_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGLBEntry",827,G__TGLBEntry_TGLBEntry_7_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,0,1,1,1,0,"u 'TGLBEntry' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGLBEntry",953,G__TGLBEntry_wATGLBEntry_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTextLBEntry(void) {
   /* TGTextLBEntry */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGTextLBEntry",1248,G__TGTextLBEntry_TGTextLBEntry_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry),-1,0,7,1,1,0,
"U 'TGWindow' - 0 - p U 'TGString' - 0 - s "
"i - 'Int_t' 0 - id k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 kHorizontalFrame options "
"k - 'ULong_t' 0 fgWhitePixel back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefaultSize",1408,G__TGTextLBEntry_GetDefaultSize_3_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetText",709,G__TGTextLBEntry_GetText_4_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGString),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetText",721,G__TGTextLBEntry_SetText_5_0,121,-1,-1,0,1,1,1,0,"U 'TGString' - 0 - new_text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Update",611,G__TGTextLBEntry_Update_6_0,121,-1,-1,0,1,1,1,0,"U 'TGLBEntry' - 0 - e",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGTextLBEntry_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTextLBEntry_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTextLBEntry_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTextLBEntry_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTextLBEntry_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTextLBEntry_Class_2_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTextLBEntry_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTextLBEntry_IsA_4_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTextLBEntry_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTextLBEntry_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTextLBEntry",1248,G__TGTextLBEntry_TGTextLBEntry_7_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry),-1,0,1,1,1,0,"u 'TGTextLBEntry' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTextLBEntry",1374,G__TGTextLBEntry_wATGTextLBEntry_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGLBContainer(void) {
   /* TGLBContainer */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer));
   G__memfunc_setup("TGLBContainer",1228,G__TGLBContainer_TGLBContainer_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kSunkenFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddEntry",795,G__TGLBContainer_AddEntry_2_0,121,-1,-1,0,2,1,1,0,
"U 'TGLBEntry' - 0 - lbe U 'TGLayoutHints' - 0 - lhints",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntrySort",1219,G__TGLBContainer_AddEntrySort_3_0,121,-1,-1,0,2,1,1,0,
"U 'TGLBEntry' - 0 - lbe U 'TGLayoutHints' - 0 - lhints",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertEntry",1159,G__TGLBContainer_InsertEntry_4_0,121,-1,-1,0,3,1,1,0,
"U 'TGLBEntry' - 0 - lbe U 'TGLayoutHints' - 0 - lhints "
"i - 'Int_t' 0 - afterID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveEntry",1152,G__TGLBContainer_RemoveEntry_5_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveEntries",1352,G__TGLBContainer_RemoveEntries_6_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - from_ID i - 'Int_t' 0 - to_ID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Associate",924,G__TGLBContainer_Associate_7_0,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGLBContainer_HandleButton_8_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGLBContainer_HandleMotion_9_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelected",1097,G__TGLBContainer_GetSelected_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelection",1222,G__TGLBContainer_GetSelection_1_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPos",594,G__TGLBContainer_GetPos_2_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedEntry",1627,G__TGLBContainer_GetSelectedEntry_3_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Select",608,G__TGLBContainer_Select_4_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,0,2,1,1,0,
"i - 'Int_t' 0 - id b - 'Bool_t' 0 - sel",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Select",608,G__TGLBContainer_Select_5_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMultipleSelections",2193,G__TGLBContainer_SetMultipleSelections_6_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - multi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMultipleSelections",2181,G__TGLBContainer_GetMultipleSelections_7_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGLBContainer_DeclFileName_8_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGLBContainer_DeclFileLine_9_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGLBContainer_ImplFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGLBContainer_ImplFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGLBContainer_Class_Version_2_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGLBContainer_Class_3_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGLBContainer_Dictionary_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGLBContainer_IsA_5_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGLBContainer_ShowMembers_6_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGLBContainer_Streamer_7_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGLBContainer",1228,G__TGLBContainer_TGLBContainer_8_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),-1,0,1,1,1,0,"u 'TGLBContainer' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGLBContainer",1354,G__TGLBContainer_wATGLBContainer_9_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGListBox(void) {
   /* TGListBox */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox));
   G__memfunc_setup("SetContainer",1231,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitListBox",1113,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGListBox",864,G__TGListBox_TGListBox_2_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p i - 'Int_t' 0 - id "
"h - 'UInt_t' 0 kSunkenFrame|kDoubleBorder options k - 'ULong_t' 0 fgWhitePixel back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddEntry",795,G__TGListBox_AddEntry_4_0,121,-1,-1,0,2,1,1,0,
"U 'TGString' - 0 - s i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntry",795,G__TGListBox_AddEntry_5_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - s i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntry",795,G__TGListBox_AddEntry_6_0,121,-1,-1,0,2,1,1,0,
"U 'TGLBEntry' - 0 - lbe U 'TGLayoutHints' - 0 - lhints",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntrySort",1219,G__TGListBox_AddEntrySort_7_0,121,-1,-1,0,2,1,1,0,
"U 'TGString' - 0 - s i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntrySort",1219,G__TGListBox_AddEntrySort_8_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - s i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntrySort",1219,G__TGListBox_AddEntrySort_9_0,121,-1,-1,0,2,1,1,0,
"U 'TGLBEntry' - 0 - lbe U 'TGLayoutHints' - 0 - lhints",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertEntry",1159,G__TGListBox_InsertEntry_0_1,121,-1,-1,0,3,1,1,0,
"U 'TGString' - 0 - s i - 'Int_t' 0 - id "
"i - 'Int_t' 0 - afterID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertEntry",1159,G__TGListBox_InsertEntry_1_1,121,-1,-1,0,3,1,1,0,
"C - - 0 - s i - 'Int_t' 0 - id "
"i - 'Int_t' 0 - afterID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertEntry",1159,G__TGListBox_InsertEntry_2_1,121,-1,-1,0,3,1,1,0,
"U 'TGLBEntry' - 0 - lbe U 'TGLayoutHints' - 0 - lhints "
"i - 'Int_t' 0 - afterID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveEntry",1152,G__TGListBox_RemoveEntry_3_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveEntries",1352,G__TGListBox_RemoveEntries_4_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - from_ID i - 'Int_t' 0 - to_ID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTopEntry",1137,G__TGListBox_SetTopEntry_5_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMultipleSelections",2193,G__TGListBox_SetMultipleSelections_6_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - multi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMultipleSelections",2181,G__TGListBox_GetMultipleSelections_7_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetContainer",1219,G__TGListBox_GetContainer_8_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetViewPort",1120,G__TGListBox_GetViewPort_9_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TGFrame),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGListBox_DrawBorder_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Resize",626,G__TGListBox_Resize_1_2,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Resize",626,G__TGListBox_Resize_2_2,121,-1,-1,0,1,1,1,0,"u 'TGDimension' - 0 - size",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveResize",1033,G__TGListBox_MoveResize_3_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGListBox_Layout_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IntegralHeight",1423,G__TGListBox_IntegralHeight_5_2,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGListBox_GetDefaultSize_6_2,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessMessage",1444,G__TGListBox_ProcessMessage_7_2,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - msg l - 'Long_t' 0 - parm1 "
"l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Associate",924,G__TGListBox_Associate_8_2,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Select",608,G__TGListBox_Select_9_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,0,2,1,1,0,
"i - 'Int_t' 0 - id b - 'Bool_t' 0 kTRUE sel",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelected",1097,G__TGListBox_GetSelected_0_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelection",1222,G__TGListBox_GetSelection_1_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedEntry",1627,G__TGListBox_GetSelectedEntry_2_3,85,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGListBox_DeclFileName_3_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGListBox_DeclFileLine_4_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGListBox_ImplFileName_5_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGListBox_ImplFileLine_6_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGListBox_Class_Version_7_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGListBox_Class_8_3,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGListBox_Dictionary_9_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGListBox_IsA_0_4,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGListBox_ShowMembers_1_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGListBox_Streamer_2_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGListBox",864,G__TGListBox_TGListBox_3_4,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),-1,0,1,1,1,0,"u 'TGListBox' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGListBox",990,G__TGListBox_wATGListBox_4_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGComboBoxPopup(void) {
   /* TGComboBoxPopup */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup));
   G__memfunc_setup("TGComboBoxPopup",1480,G__TGComboBoxPopup_TGComboBoxPopup_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kVerticalFrame options "
"k - 'ULong_t' 0 fgWhitePixel back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGComboBoxPopup_HandleButton_1_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PlacePopup",1017,G__TGComboBoxPopup_PlacePopup_2_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EndPopup",811,G__TGComboBoxPopup_EndPopup_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGComboBoxPopup_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGComboBoxPopup_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGComboBoxPopup_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGComboBoxPopup_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGComboBoxPopup_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGComboBoxPopup_Class_9_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGComboBoxPopup_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGComboBoxPopup_IsA_1_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGComboBoxPopup_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGComboBoxPopup_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGComboBoxPopup",1480,G__TGComboBoxPopup_TGComboBoxPopup_4_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),-1,0,1,1,1,0,"u 'TGComboBoxPopup' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGComboBoxPopup",1606,G__TGComboBoxPopup_wATGComboBoxPopup_5_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGComboBox(void) {
   /* TGComboBox */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox));
   G__memfunc_setup("TGComboBox",948,G__TGComboBox_TGComboBox_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p i - 'Int_t' 0 - id "
"h - 'UInt_t' 0 kHorizontalFrame|kSunkenFrame|kDoubleBorder options k - 'ULong_t' 0 fgWhitePixel back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGComboBox_DrawBorder_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGComboBox_GetDefaultSize_3_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Associate",924,G__TGComboBox_Associate_4_0,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGComboBox_HandleButton_5_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessMessage",1444,G__TGComboBox_ProcessMessage_6_0,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - msg l - 'Long_t' 0 - parm1 "
"l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntry",795,G__TGComboBox_AddEntry_7_0,121,-1,-1,0,2,1,1,0,
"U 'TGString' - 0 - s i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntry",795,G__TGComboBox_AddEntry_8_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - s i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntry",795,G__TGComboBox_AddEntry_9_0,121,-1,-1,0,2,1,1,0,
"U 'TGLBEntry' - 0 - lbe U 'TGLayoutHints' - 0 - lhints",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertEntry",1159,G__TGComboBox_InsertEntry_0_1,121,-1,-1,0,3,1,1,0,
"U 'TGString' - 0 - s i - 'Int_t' 0 - id "
"i - 'Int_t' 0 - afterID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertEntry",1159,G__TGComboBox_InsertEntry_1_1,121,-1,-1,0,3,1,1,0,
"C - - 0 - s i - 'Int_t' 0 - id "
"i - 'Int_t' 0 - afterID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertEntry",1159,G__TGComboBox_InsertEntry_2_1,121,-1,-1,0,3,1,1,0,
"U 'TGLBEntry' - 0 - lbe U 'TGLayoutHints' - 0 - lhints "
"i - 'Int_t' 0 - afterID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveEntry",1152,G__TGComboBox_RemoveEntry_3_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveEntries",1352,G__TGComboBox_RemoveEntries_4_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - from_ID i - 'Int_t' 0 - to_ID",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetListBox",997,G__TGComboBox_GetListBox_5_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Select",608,G__TGComboBox_Select_6_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelected",1097,G__TGComboBox_GetSelected_7_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedEntry",1627,G__TGComboBox_GetSelectedEntry_8_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTopEntry",1137,G__TGComboBox_SetTopEntry_9_1,121,-1,-1,0,2,1,1,0,
"U 'TGLBEntry' - 0 - e U 'TGLayoutHints' - 0 - lh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGComboBox_DeclFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGComboBox_DeclFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGComboBox_ImplFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGComboBox_ImplFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGComboBox_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGComboBox_Class_5_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGComboBox_Dictionary_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGComboBox_IsA_7_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGComboBox_ShowMembers_8_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGComboBox_Streamer_9_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGComboBox",948,G__TGComboBox_TGComboBox_0_3,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),-1,0,1,1,1,0,"u 'TGComboBox' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGComboBox",1074,G__TGComboBox_wATGComboBox_1_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTab(void) {
   /* TGTab */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab));
   G__memfunc_setup("ChangeTab",861,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Int_t' 0 - tabIndex",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGTab",434,G__TGTab_TGTab_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGTab),-1,0,7,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 kChildFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddTab",544,G__TGTab_AddTab_3_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),-1,0,1,1,1,0,"U 'TGString' - 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddTab",544,G__TGTab_AddTab_4_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),-1,0,1,1,1,0,"C - - 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTab",579,G__TGTab_SetTab_5_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"i - 'Int_t' 0 - tabIndex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBorder",1004,G__TGTab_DrawBorder_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGTab_HandleButton_7_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetContainer",1219,G__TGTab_GetContainer_8_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGCompositeFrame),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCurrent",1027,G__TGTab_GetCurrent_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTabHeight",1168,G__TGTab_GetTabHeight_0_1,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGTab_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTab_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTab_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTab_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTab_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTab_Class_6_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTab_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTab_IsA_8_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTab_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTab_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTab",434,G__TGTab_TGTab_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGTab),-1,0,1,1,1,0,"u 'TGTab' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTab",560,G__TGTab_wATGTab_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTabElement(void) {
   /* TGTabElement */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement));
   G__memfunc_setup("TGTabElement",1148,G__TGTabElement_TGTabElement_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement),-1,0,8,1,1,0,
"U 'TGWindow' - 0 - p U 'TGString' - 0 - text "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h "
"k - 'GContext_t' 0 - norm k - 'FontStruct_t' 0 - font "
"h - 'UInt_t' 0 kRaisedFrame options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGTabElement_DrawBorder_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGTabElement_GetDefaultSize_3_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetText",709,G__TGTabElement_GetText_4_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGString),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGTabElement_DeclFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTabElement_DeclFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTabElement_ImplFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTabElement_ImplFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTabElement_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTabElement_Class_0_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTabElement_Dictionary_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTabElement_IsA_2_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTabElement_ShowMembers_3_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTabElement_Streamer_4_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTabElement",1148,G__TGTabElement_TGTabElement_5_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement),-1,0,1,1,1,0,"u 'TGTabElement' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTabElement",1274,G__TGTabElement_wATGTabElement_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTabLayout(void) {
   /* TGTabLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout));
   G__memfunc_setup("TGTabLayout",1072,G__TGTabLayout_TGTabLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout),-1,0,1,1,1,0,"U 'TGTab' - 0 - main",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGTabLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGTabLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGTabLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTabLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTabLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTabLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTabLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTabLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTabLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTabLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTabLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTabLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTabLayout",1072,G__TGTabLayout_TGTabLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout),-1,0,1,1,1,0,"u 'TGTabLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTabLayout",1198,G__TGTabLayout_wATGTabLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGSlider(void) {
   /* TGSlider */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider));
   G__memfunc_setup("HandleButton",1224,G__TGSlider_HandleButton_2_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("HandleMotion",1218,G__TGSlider_HandleMotion_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetScale",788,G__TGSlider_SetScale_4_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - scale",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TGSlider_SetRange_5_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - min i - 'Int_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPosition",1153,G__TGSlider_SetPosition_6_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - pos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPosition",1141,G__TGSlider_GetPosition_7_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGSlider_MapSubwindows_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGSlider_DeclFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGSlider_DeclFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGSlider_ImplFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGSlider_ImplFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGSlider_Class_Version_3_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGSlider_Class_4_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGSlider_Dictionary_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGSlider_IsA_6_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGSlider_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGSlider_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TGSlider",892,G__TGSlider_wATGSlider_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGVSlider(void) {
   /* TGVSlider */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGVSlider",852,G__TGVSlider_TGVSlider_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - h "
"h - 'UInt_t' 0 - type i - 'Int_t' 0 -1 id "
"h - 'UInt_t' 0 kVerticalFrame options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGVSlider_HandleButton_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGVSlider_HandleMotion_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGVSlider_GetDefaultSize_5_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGVSlider_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGVSlider_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGVSlider_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGVSlider_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGVSlider_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGVSlider_Class_1_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGVSlider_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGVSlider_IsA_3_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGVSlider_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGVSlider_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGVSlider",852,G__TGVSlider_TGVSlider_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),-1,0,1,1,1,0,"u 'TGVSlider' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGVSlider",978,G__TGVSlider_wATGVSlider_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGHSlider(void) {
   /* TGHSlider */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGHSlider",838,G__TGHSlider_TGHSlider_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - type i - 'Int_t' 0 -1 id "
"h - 'UInt_t' 0 kHorizontalFrame options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGHSlider_HandleButton_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGHSlider_HandleMotion_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGHSlider_GetDefaultSize_5_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGHSlider_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGHSlider_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGHSlider_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGHSlider_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGHSlider_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGHSlider_Class_1_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGHSlider_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGHSlider_IsA_3_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGHSlider_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGHSlider_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGHSlider",838,G__TGHSlider_TGHSlider_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),-1,0,1,1,1,0,"u 'TGHSlider' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGHSlider",964,G__TGHSlider_wATGHSlider_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGLVEntry(void) {
   /* TGLVEntry */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGLVEntry",847,G__TGLVEntry_TGLVEntry_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),-1,0,8,1,1,0,
"U 'TGWindow' - 0 - p U 'TGPicture' - 0 - bigpic "
"U 'TGPicture' - 0 - smallpic U 'TGString' - 0 - name "
"U 'TGString' - 2 - subnames i 'EListViewMode' - 0 - ViewMode "
"h - 'UInt_t' 0 kChildFrame options k - 'ULong_t' 0 fgWhitePixel back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetViewMode",1100,G__TGLVEntry_SetViewMode_3_0,121,-1,-1,0,1,1,1,0,"i 'EListViewMode' - 0 - ViewMode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Activate",817,G__TGLVEntry_Activate_4_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsActive",792,G__TGLVEntry_IsActive_5_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetItemName",1072,G__TGLVEntry_GetItemName_6_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGString),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPicture",1020,G__TGLVEntry_GetPicture_7_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGPicture),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetUserData",1093,G__TGLVEntry_SetUserData_8_0,121,-1,-1,0,1,1,1,0,"Y - - 0 - userData",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetUserData",1081,G__TGLVEntry_GetUserData_9_0,89,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetColumns",1037,G__TGLVEntry_SetColumns_0_1,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 0 - cpos I - 'Int_t' 0 - jmode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefaultSize",1408,G__TGLVEntry_GetDefaultSize_1_1,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGLVEntry_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGLVEntry_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGLVEntry_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGLVEntry_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGLVEntry_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGLVEntry_Class_7_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGLVEntry_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGLVEntry_IsA_9_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGLVEntry_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGLVEntry_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGLVEntry",847,G__TGLVEntry_TGLVEntry_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),-1,0,1,1,1,0,"u 'TGLVEntry' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGLVEntry",973,G__TGLVEntry_wATGLVEntry_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGLVContainer(void) {
   /* TGLVContainer */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer));
   G__memfunc_setup("TGLVContainer",1248,G__TGLVContainer_TGLVContainer_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kSunkenFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddItem",664,G__TGLVContainer_AddItem_2_0,121,-1,-1,0,1,1,1,0,"U 'TGLVEntry' - 0 - item",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGLVContainer_HandleButton_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleDoubleClick",1677,G__TGLVContainer_HandleDoubleClick_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGLVContainer_HandleMotion_5_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Associate",924,G__TGLVContainer_Associate_6_0,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectAll",889,G__TGLVContainer_SelectAll_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UnSelectAll",1084,G__TGLVContainer_UnSelectAll_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InvertSelection",1566,G__TGLVContainer_InvertSelection_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveAll",903,G__TGLVContainer_RemoveAll_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveItem",1021,G__TGLVContainer_RemoveItem_1_1,121,-1,-1,0,1,1,1,0,"U 'TGLVEntry' - 0 - item",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveItemWithData",1811,G__TGLVContainer_RemoveItemWithData_2_1,121,-1,-1,0,1,1,1,0,"Y - - 0 - userData",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetViewMode",1100,G__TGLVContainer_SetViewMode_3_1,121,-1,-1,0,1,1,1,0,"i 'EListViewMode' - 0 - ViewMode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetColumns",1037,G__TGLVContainer_SetColumns_4_1,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 0 - cpos I - 'Int_t' 0 - jmode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNextSelected",1512,G__TGLVContainer_GetNextSelected_5_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),-1,0,1,1,1,1,"Y - - 2 - current",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NumItems",818,G__TGLVContainer_NumItems_6_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NumSelected",1113,G__TGLVContainer_NumSelected_7_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMaxItemSize",1392,G__TGLVContainer_GetMaxItemSize_8_1,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGLVContainer_DeclFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGLVContainer_DeclFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGLVContainer_ImplFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGLVContainer_ImplFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGLVContainer_Class_Version_3_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGLVContainer_Class_4_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGLVContainer_Dictionary_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGLVContainer_IsA_6_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGLVContainer_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGLVContainer_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGLVContainer",1248,G__TGLVContainer_TGLVContainer_9_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),-1,0,1,1,1,0,"u 'TGLVContainer' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGLVContainer",1374,G__TGLVContainer_wATGLVContainer_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGListView(void) {
   /* TGListView */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListView));
   G__memfunc_setup("TGListView",978,G__TGListView_TGListView_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGListView),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kSunkenFrame|kDoubleBorder options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGListView_Layout_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessMessage",1444,G__TGListView_ProcessMessage_3_0,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - msg l - 'Long_t' 0 - parm1 "
"l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetContainer",1231,G__TGListView_SetContainer_4_0,121,-1,-1,0,1,1,1,0,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHeader",885,G__TGListView_SetHeader_5_0,121,-1,-1,0,3,1,1,0,
"C - - 0 - s i - 'Int_t' 0 - mode "
"i - 'Int_t' 0 - idx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetViewMode",1100,G__TGListView_SetViewMode_6_0,121,-1,-1,0,1,1,1,0,"i 'EListViewMode' - 0 - ViewMode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGListView_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGListView_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGListView_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGListView_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGListView_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGListView_Class_2_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGListView_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGListView_IsA_4_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGListView_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGListView_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGListView",978,G__TGListView_TGListView_7_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGListView),-1,0,1,1,1,0,"u 'TGListView' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGListView",1104,G__TGListView_wATGListView_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGFileContainer(void) {
   /* TGFileContainer */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer));
   G__memfunc_setup("CreateFileList",1392,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGFileContainer",1470,G__TGFileContainer_TGFileContainer_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kSunkenFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleTimer",1101,G__TGFileContainer_HandleTimer_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TTimer' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddFile",649,G__TGFileContainer_AddFile_4_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGFileItem),-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddFrame",756,G__TGFileContainer_AddFrame_5_0,121,-1,-1,0,2,1,1,0,
"U 'TGFrame' - 0 - f U 'TGLayoutHints' - 0 0 l",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sort",424,G__TGFileContainer_Sort_6_0,121,-1,-1,0,1,1,1,0,"i 'EFSSortMode' - 0 - sortType",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFilter",914,G__TGFileContainer_SetFilter_7_0,121,-1,-1,0,1,1,1,0,"C - - 0 - filter",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ChangeDirectory",1531,G__TGFileContainer_ChangeDirectory_8_0,121,-1,-1,0,1,1,1,0,"C - - 0 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DisplayDirectory",1675,G__TGFileContainer_DisplayDirectory_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFilePictures",1519,G__TGFileContainer_GetFilePictures_0_1,121,-1,-1,0,6,1,1,0,
"U 'TGPicture' - 2 - pic U 'TGPicture' - 2 - lpic "
"i - 'Int_t' 0 - file_type b - 'Bool_t' 0 - is_link "
"C - - 0 - ext b - 'Bool_t' 0 - small",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGFileContainer_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGFileContainer_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGFileContainer_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGFileContainer_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGFileContainer_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGFileContainer_Class_6_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGFileContainer_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGFileContainer_IsA_8_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGFileContainer_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGFileContainer_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGFileContainer",1470,G__TGFileContainer_TGFileContainer_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),-1,0,1,1,1,0,"u 'TGFileContainer' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGFileContainer",1596,G__TGFileContainer_wATGFileContainer_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGFileInfo(void) {
   /* TGFileInfo */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileInfo));
   // automatic default constructor
   G__memfunc_setup("TGFileInfo",935,G__TGFileInfo_TGFileInfo_0_0,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGFileInfo),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TGFileInfo",935,G__TGFileInfo_TGFileInfo_1_0,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGFileInfo),-1,0,1,1,1,0,"u 'TGFileInfo' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGFileInfo",1061,G__TGFileInfo_wATGFileInfo_2_0,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGFileDialog(void) {
   /* TGFileDialog */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog));
   G__memfunc_setup("TGFileDialog",1131,G__TGFileDialog_TGFileDialog_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p U 'TGWindow' - 0 - main "
"i 'EFileDialogMode' - 0 - dlg_type U 'TGFileInfo' - 0 - file_info",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ProcessMessage",1444,G__TGFileDialog_ProcessMessage_2_0,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - msg l - 'Long_t' 0 - parm1 "
"l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseWindow",1134,G__TGFileDialog_CloseWindow_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGFileDialog_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGFileDialog_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGFileDialog_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGFileDialog_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGFileDialog_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGFileDialog_Class_9_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGFileDialog_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGFileDialog_IsA_1_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGFileDialog_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGFileDialog_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGFileDialog",1131,G__TGFileDialog_TGFileDialog_4_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),-1,0,1,1,1,0,"u 'TGFileDialog' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGFileDialog",1257,G__TGFileDialog_wATGFileDialog_5_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGStatusBar(void) {
   /* TGStatusBar */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGStatusBar",1076,G__TGStatusBar_TGStatusBar_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kSunkenFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGStatusBar_DrawBorder_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetText",721,G__TGStatusBar_SetText_4_0,121,-1,-1,0,2,1,1,0,
"U 'TGString' - 0 - text i - 'Int_t' 0 0 partidx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetText",721,G__TGStatusBar_SetText_5_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - text i - 'Int_t' 0 0 partidx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParts",822,G__TGStatusBar_SetParts_6_0,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 0 - parts i - 'Int_t' 0 - npart",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParts",822,G__TGStatusBar_SetParts_7_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - npart",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGStatusBar_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGStatusBar_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGStatusBar_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGStatusBar_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGStatusBar_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGStatusBar_Class_3_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGStatusBar_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGStatusBar_IsA_5_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGStatusBar_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGStatusBar_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGStatusBar",1076,G__TGStatusBar_TGStatusBar_8_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar),-1,0,1,1,1,0,"u 'TGStatusBar' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGStatusBar",1202,G__TGStatusBar_wATGStatusBar_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTextFrame(void) {
   /* TGTextFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame));
   G__memfunc_setup("DrawRegion",1010,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,2,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ScrollWindow",1255,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Int_t' 0 - new_top",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Expand",608,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Int_t' 0 - newSize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGTextFrame",1067,G__TGTextFrame_TGTextFrame_3_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - parent h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 - options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LoadFile",768,G__TGTextFrame_LoadFile_5_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - fname",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LoadBuffer",986,G__TGTextFrame_LoadBuffer_6_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - txtbuf",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Clear",487,G__TGTextFrame_Clear_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLines",795,G__TGTextFrame_GetLines_8_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVisibleLines",1513,G__TGTextFrame_GetVisibleLines_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTopLine",999,G__TGTextFrame_SetTopLine_0_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - new_top",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleExpose",1216,G__TGTextFrame_HandleExpose_1_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGTextFrame_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTextFrame_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTextFrame_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTextFrame_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTextFrame_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTextFrame_Class_7_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTextFrame_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTextFrame_IsA_9_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTextFrame_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTextFrame_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTextFrame",1067,G__TGTextFrame_TGTextFrame_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),-1,0,1,1,1,0,"u 'TGTextFrame' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTextFrame",1193,G__TGTextFrame_wATGTextFrame_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTextView(void) {
   /* TGTextView */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView));
   G__memfunc_setup("TGTextView",987,G__TGTextView_TGTextView_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGTextView),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - parent h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kChildFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LoadFile",768,G__TGTextView_LoadFile_2_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - fname",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LoadBuffer",986,G__TGTextView_LoadBuffer_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - txtbuf",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Clear",487,G__TGTextView_Clear_4_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessMessage",1444,G__TGTextView_ProcessMessage_5_0,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - msg l - 'Long_t' 0 - parm1 "
"l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGTextView_Layout_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBorder",1004,G__TGTextView_DrawBorder_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGTextView_GetDefaultSize_8_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextFrame",1200,G__TGTextView_GetTextFrame_9_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGTextView_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTextView_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTextView_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTextView_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTextView_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTextView_Class_5_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTextView_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTextView_IsA_7_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTextView_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTextView_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTextView",987,G__TGTextView_TGTextView_0_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGTextView),-1,0,1,1,1,0,"u 'TGTextView' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTextView",1113,G__TGTextView_wATGTextView_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGToolBar(void) {
   /* TGToolBar */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar));
   G__memfunc_setup("TGToolBar",846,G__TGToolBar_TGToolBar_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kHorizontalFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddButton",901,G__TGToolBar_AddButton_2_0,121,-1,-1,0,3,1,1,0,
"U 'TGWindow' - 0 - w U 'ToolBarData_t' - 0 - button "
"i - 'Int_t' 0 0 spacing",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGToolBar_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGToolBar_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGToolBar_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGToolBar_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGToolBar_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGToolBar_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGToolBar_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGToolBar_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGToolBar_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGToolBar_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGToolBar",846,G__TGToolBar_TGToolBar_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar),-1,0,1,1,1,0,"u 'TGToolBar' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGToolBar",972,G__TGToolBar_wATGToolBar_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGHorizontal3DLine(void) {
   /* TGHorizontal3DLine */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine));
   G__memfunc_setup("TGHorizontal3DLine",1732,G__TGHorizontal3DLine_TGHorizontal3DLine_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 4 w "
"h - 'UInt_t' 0 2 h h - 'UInt_t' 0 kChildFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGHorizontal3DLine_DrawBorder_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGHorizontal3DLine_DeclFileName_2_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGHorizontal3DLine_DeclFileLine_3_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGHorizontal3DLine_ImplFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGHorizontal3DLine_ImplFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGHorizontal3DLine_Class_Version_6_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGHorizontal3DLine_Class_7_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGHorizontal3DLine_Dictionary_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGHorizontal3DLine_IsA_9_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGHorizontal3DLine_ShowMembers_0_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGHorizontal3DLine_Streamer_1_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGHorizontal3DLine",1732,G__TGHorizontal3DLine_TGHorizontal3DLine_2_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine),-1,0,1,1,1,0,"u 'TGHorizontal3DLine' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGHorizontal3DLine",1858,G__TGHorizontal3DLine_wATGHorizontal3DLine_3_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGListTreeItem(void) {
   /* TGListTreeItem */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem));
   G__memfunc_setup("TGListTreeItem",1366,G__TGListTreeItem_TGListTreeItem_0_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,4,1,1,0,
"U 'TGClient' - 0 - fClient C - - 0 - name "
"U 'TGPicture' - 0 - opened U 'TGPicture' - 0 - closed",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Rename",600,G__TGListTreeItem_Rename_2_0,121,-1,-1,0,1,1,1,0,"C - - 0 - new_name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParent",906,G__TGListTreeItem_GetParent_3_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFirstChild",1292,G__TGListTreeItem_GetFirstChild_4_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPrevSibling",1413,G__TGListTreeItem_GetPrevSibling_5_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNextSibling",1415,G__TGListTreeItem_GetNextSibling_6_0,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsActive",792,G__TGListTreeItem_IsActive_7_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsOpen",590,G__TGListTreeItem_IsOpen_8_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetText",709,G__TGListTreeItem_GetText_9_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetUserData",1093,G__TGListTreeItem_SetUserData_0_1,121,-1,-1,0,1,1,1,0,"Y - - 0 - userData",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetUserData",1081,G__TGListTreeItem_GetUserData_1_1,89,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGListTreeItem_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGListTreeItem_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGListTreeItem_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGListTreeItem_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGListTreeItem_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGListTreeItem_Class_7_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGListTreeItem_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGListTreeItem_IsA_9_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGListTreeItem_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGListTreeItem_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGListTreeItem",1366,G__TGListTreeItem_TGListTreeItem_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,1,1,1,0,"u 'TGListTreeItem' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGListTreeItem",1492,G__TGListTreeItem_wATGListTreeItem_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGListTree(void) {
   /* TGListTree */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTree));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"i - 'Int_t' 0 - yevent i - 'Int_t' 0 - hevent",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Draw",398,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - 'Option_t' 0 \"\" -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawChildren",1207,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,4,1,2,0,
"U 'TGListTreeItem' - 0 - item i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y i - 'Int_t' 0 - xroot",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawItem",797,(G__InterfaceMethod)NULL,121,-1,-1,0,6,1,2,0,
"U 'TGListTreeItem' - 0 - item i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y I - 'Int_t' 0 - xroot "
"H - 'UInt_t' 0 - retwidth H - 'UInt_t' 0 - retheight",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawItemName",1182,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawNode",788,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"U 'TGListTreeItem' - 0 - item i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HighlightItem",1319,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"U 'TGListTreeItem' - 0 - item b - 'Bool_t' 0 - state "
"b - 'Bool_t' 0 - draw",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HighlightChildren",1729,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"U 'TGListTreeItem' - 0 - item b - 'Bool_t' 0 - state "
"b - 'Bool_t' 0 - draw",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UnselectAll",1116,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"b - 'Bool_t' 0 - draw",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RemoveReference",1533,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PDeleteChildren",1484,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InsertChild",1113,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"U 'TGListTreeItem' - 0 - parent U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InsertChildren",1438,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"U 'TGListTreeItem' - 0 - parent U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SearchChildren",1407,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,4,1,2,0,
"U 'TGListTreeItem' - 0 - item i - 'Int_t' 0 - y "
"i - 'Int_t' 0 - findy U 'TGListTreeItem' - 2 - finditem",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindItem",784,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,1,1,2,0,"i - 'Int_t' 0 - findy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGListTree",967,G__TGListTree_TGListTree_6_1,105,G__get_linked_tagnum(&G__G__Gui2LN_TGListTree),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 - options "
"k - 'ULong_t' 0 fgWhitePixel back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGListTree_HandleButton_8_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleDoubleClick",1677,G__TGListTree_HandleDoubleClick_9_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleExpose",1216,G__TGListTree_HandleExpose_0_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Associate",924,G__TGListTree_Associate_1_2,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGListTree_GetDefaultSize_2_2,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddItem",664,G__TGListTree_AddItem_3_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,4,1,1,0,
"U 'TGListTreeItem' - 0 - parent C - - 0 - string "
"U 'TGPicture' - 0 0 open U 'TGPicture' - 0 0 closed",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddItem",664,G__TGListTree_AddItem_4_2,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,5,1,1,0,
"U 'TGListTreeItem' - 0 - parent C - - 0 - string "
"Y - - 0 - userData U 'TGPicture' - 0 0 open "
"U 'TGPicture' - 0 0 closed",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RenameItem",999,G__TGListTree_RenameItem_5_2,121,-1,-1,0,2,1,1,0,
"U 'TGListTreeItem' - 0 - item C - - 0 - string",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeleteItem",994,G__TGListTree_DeleteItem_6_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RecursiveDeleteItem",1946,G__TGListTree_RecursiveDeleteItem_7_2,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"U 'TGListTreeItem' - 0 - item Y - - 0 - userData",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeleteChildren",1404,G__TGListTree_DeleteChildren_8_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reparent",833,G__TGListTree_Reparent_9_2,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"U 'TGListTreeItem' - 0 - item U 'TGListTreeItem' - 0 - newparent",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReparentChildren",1642,G__TGListTree_ReparentChildren_0_3,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"U 'TGListTreeItem' - 0 - item U 'TGListTreeItem' - 0 - newparent",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sort",424,G__TGListTree_Sort_1_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SortSiblings",1251,G__TGListTree_SortSiblings_2_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SortChildren",1233,G__TGListTree_SortChildren_3_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HighlightItem",1319,G__TGListTree_HighlightItem_4_3,121,-1,-1,0,1,1,1,0,"U 'TGListTreeItem' - 0 - item",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ClearHighlighted",1608,G__TGListTree_ClearHighlighted_5_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPathnameFromItem",1905,G__TGListTree_GetPathnameFromItem_6_3,121,-1,-1,0,3,1,1,0,
"U 'TGListTreeItem' - 0 - item C - - 0 - path "
"i - 'Int_t' 0 0 depth",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFirstItem",1207,G__TGListTree_GetFirstItem_7_3,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSelected",1097,G__TGListTree_GetSelected_8_3,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindSiblingByName",1669,G__TGListTree_FindSiblingByName_9_3,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,2,1,1,0,
"U 'TGListTreeItem' - 0 - item C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindSiblingByData",1662,G__TGListTree_FindSiblingByData_0_4,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,2,1,1,0,
"U 'TGListTreeItem' - 0 - item Y - - 0 - userData",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindChildByName",1441,G__TGListTree_FindChildByName_1_4,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,2,1,1,0,
"U 'TGListTreeItem' - 0 - item C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindChildByData",1434,G__TGListTree_FindChildByData_2_4,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,2,1,1,0,
"U 'TGListTreeItem' - 0 - item Y - - 0 - userData",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindItemByPathname",1785,G__TGListTree_FindItemByPathname_3_4,85,G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),-1,0,1,1,1,0,"C - - 0 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGListTree_DeclFileName_4_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGListTree_DeclFileLine_5_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGListTree_ImplFileName_6_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGListTree_ImplFileLine_7_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGListTree_Class_Version_8_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGListTree_Class_9_4,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGListTree_Dictionary_0_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGListTree_IsA_1_5,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGListTree_ShowMembers_2_5,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGListTree_Streamer_3_5,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGListTree",967,G__TGListTree_TGListTree_4_5,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGListTree),-1,0,1,1,1,0,"u 'TGListTree' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGListTree",1093,G__TGListTree_wATGListTree_5_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGText(void) {
   /* TGText */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGText));
   G__memfunc_setup("TGTextP",656,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCurrentRow",1351,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,1,1,2,0,"i - 'Int_t' 0 - row",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LongestLine",1124,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpSearchBM",938,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,3,1,2,0,
"u 'TString' - 1 - s C - - 0 - searchPattern "
"b - 'Bool_t' 0 - cs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DownSearchBM",1149,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,3,1,2,0,
"u 'TString' - 1 - s C - - 0 - searchPattern "
"b - 'Bool_t' 0 - cs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGText",576,G__TGText_TGText_5_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGText),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGText",576,G__TGText_TGText_6_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGText),-1,0,1,1,1,0,"U 'TGText' - 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGText",576,G__TGText_TGText_7_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGText),-1,0,1,1,1,0,"C - - 0 - string",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Clear",487,G__TGText_Clear_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Load",384,G__TGText_Load_0_1,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"C - - 0 - fn i - 'Int_t' 0 0 startpos "
"i - 'Int_t' 0 -1 length",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Save",399,G__TGText_Save_1_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - fn",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Append",600,G__TGText_Append_2_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - fn",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsSaved",687,G__TGText_IsSaved_3_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DelChar",659,G__TGText_DelChar_4_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"u 'TGPosition' - 0 - pos",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InsChar",680,G__TGText_InsChar_5_1,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TGPosition' - 0 - pos c - - 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetChar",670,G__TGText_GetChar_6_1,99,-1,-1,0,1,1,1,0,"u 'TGPosition' - 0 - pos",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DelText",698,G__TGText_DelText_7_1,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TGPosition' - 0 - start u 'TGPosition' - 0 - end",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InsText",719,G__TGText_InsText_8_1,98,-1,G__defined_typename("Bool_t"),0,4,1,1,0,
"u 'TGPosition' - 0 - ins_pos U 'TGText' - 0 - src "
"u 'TGPosition' - 0 - start_src u 'TGPosition' - 0 - end_src",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DelLine",669,G__TGText_DelLine_9_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"i - 'Int_t' 0 - row",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InsLine",690,G__TGText_InsLine_0_2,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TGPosition' - 0 - pos u 'TString' - 1 - str",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLine",680,G__TGText_GetLine_1_2,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TGPosition' - 0 - pos u 'TString' - 1 - str",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BreakLine",877,G__TGText_BreakLine_2_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"u 'TGPosition' - 0 - pos",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RowCount",833,G__TGText_RowCount_3_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ColCount",807,G__TGText_ColCount_4_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineLength",1290,G__TGText_GetLineLength_5_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - row",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLongestLine",1412,G__TGText_GetLongestLine_6_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Search",598,G__TGText_Search_7_2,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"U 'TGPosition' - 0 - foundPos u 'TGPosition' - 0 - start "
"C - - 0 - searchString b - 'Bool_t' 0 - direction "
"b - 'Bool_t' 0 - caseSensitive",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Replace",700,G__TGText_Replace_8_2,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"u 'TGPosition' - 0 - pos C - - 0 - oldText "
"C - - 0 - newText b - 'Bool_t' 0 - direction "
"b - 'Bool_t' 0 - caseSensitive",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGText_DeclFileName_9_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGText_DeclFileLine_0_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGText_ImplFileName_1_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGText_ImplFileLine_2_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGText_Class_Version_3_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGText_Class_4_3,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGText_Dictionary_5_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGText_IsA_6_3,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGText_ShowMembers_7_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGText_Streamer_8_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGText",576,G__TGText_TGText_9_3,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGText),-1,0,1,1,1,0,"u 'TGText' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGText",702,G__TGText_wATGText_0_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGDoubleSlider(void) {
   /* TGDoubleSlider */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider));
   G__memfunc_setup("HandleButton",1224,G__TGDoubleSlider_HandleButton_2_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("HandleMotion",1218,G__TGDoubleSlider_HandleMotion_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetScale",788,G__TGDoubleSlider_SetScale_4_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - scale",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TGDoubleSlider_SetRange_5_0,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - min f - 'Float_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPosition",1153,G__TGDoubleSlider_SetPosition_6_0,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - min f - 'Float_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMinPosition",1433,G__TGDoubleSlider_GetMinPosition_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMaxPosition",1435,G__TGDoubleSlider_GetMaxPosition_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPosition",1141,G__TGDoubleSlider_GetPosition_9_0,121,-1,-1,0,2,1,1,8,
"f - 'Float_t' 1 - min f - 'Float_t' 1 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPosition",1141,G__TGDoubleSlider_GetPosition_0_1,121,-1,-1,0,2,1,1,8,
"F - 'Float_t' 0 - min F - 'Float_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGDoubleSlider_MapSubwindows_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGDoubleSlider_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGDoubleSlider_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGDoubleSlider_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGDoubleSlider_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGDoubleSlider_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGDoubleSlider_Class_7_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGDoubleSlider_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGDoubleSlider_IsA_9_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGDoubleSlider_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGDoubleSlider_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TGDoubleSlider",1495,G__TGDoubleSlider_wATGDoubleSlider_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGDoubleVSlider(void) {
   /* TGDoubleVSlider */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGDoubleVSlider",1455,G__TGDoubleVSlider_TGDoubleVSlider_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - h "
"h - 'UInt_t' 0 - scale i - 'Int_t' 0 -1 id "
"h - 'UInt_t' 0 kVerticalFrame options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGDoubleVSlider_HandleButton_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGDoubleVSlider_HandleMotion_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGDoubleVSlider_GetDefaultSize_5_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGDoubleVSlider_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGDoubleVSlider_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGDoubleVSlider_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGDoubleVSlider_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGDoubleVSlider_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGDoubleVSlider_Class_1_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGDoubleVSlider_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGDoubleVSlider_IsA_3_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGDoubleVSlider_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGDoubleVSlider_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGDoubleVSlider",1455,G__TGDoubleVSlider_TGDoubleVSlider_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),-1,0,1,1,1,0,"u 'TGDoubleVSlider' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGDoubleVSlider",1581,G__TGDoubleVSlider_wATGDoubleVSlider_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGDoubleHSlider(void) {
   /* TGDoubleHSlider */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGDoubleHSlider",1441,G__TGDoubleHSlider_TGDoubleHSlider_1_0,105,G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - scale i - 'Int_t' 0 -1 id "
"h - 'UInt_t' 0 kHorizontalFrame options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGDoubleHSlider_HandleButton_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGDoubleHSlider_HandleMotion_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGDoubleHSlider_GetDefaultSize_5_0,117,G__get_linked_tagnum(&G__G__Gui2LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGDoubleHSlider_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGDoubleHSlider_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGDoubleHSlider_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGDoubleHSlider_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGDoubleHSlider_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGDoubleHSlider_Class_1_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGDoubleHSlider_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGDoubleHSlider_IsA_3_1,85,G__get_linked_tagnum(&G__G__Gui2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGDoubleHSlider_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGDoubleHSlider_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGDoubleHSlider",1441,G__TGDoubleHSlider_TGDoubleHSlider_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),-1,0,1,1,1,0,"u 'TGDoubleHSlider' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGDoubleHSlider",1567,G__TGDoubleHSlider_wATGDoubleHSlider_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Gui2() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Gui2() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EScrollBarMode),-1,-1,1,"kSBHorizontal=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EScrollBarMode),-1,-1,1,"kSBVertical=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_ESliderType),-1,-1,1,"kSlider1=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_ESliderType),-1,-1,1,"kSlider2=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_ESliderType),-1,-1,1,"kScaleNo=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_ESliderType),-1,-1,1,"kScaleDownRight=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_ESliderType),-1,-1,1,"kScaleBoth=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EListViewMode),-1,-1,1,"kLVLargeIcons=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EListViewMode),-1,-1,1,"kLVSmallIcons=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EListViewMode),-1,-1,1,"kLVList=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EListViewMode),-1,-1,1,"kLVDetails=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EFSSortMode),-1,-1,1,"kSortByName=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EFSSortMode),-1,-1,1,"kSortByType=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EFSSortMode),-1,-1,1,"kSortBySize=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EFSSortMode),-1,-1,1,"kSortByDate=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EFileDialogMode),-1,-1,1,"kFDOpen=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui2LN_EFileDialogMode),-1,-1,1,"kFDSave=1",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Gui2() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__Gui2LN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TRegexp = { "TRegexp" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGClient = { "TGClient" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGObject = { "TGObject" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGWindow = { "TGWindow" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGPicture = { "TGPicture" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGMimeTypes = { "TGMimeTypes" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TTimer = { "TTimer" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGDimension = { "TGDimension" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGFrame = { "TGFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGCompositeFrame = { "TGCompositeFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGLayoutHints = { "TGLayoutHints" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGLayoutManager = { "TGLayoutManager" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGString = { "TGString" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGVerticalFrame = { "TGVerticalFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGHorizontalFrame = { "TGHorizontalFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGMainFrame = { "TGMainFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTransientFrame = { "TGTransientFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGWidget = { "TGWidget" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGToolTip = { "TGToolTip" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTextButton = { "TGTextButton" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGPictureButton = { "TGPictureButton" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_EScrollBarMode = { "EScrollBarMode" , 101 , -1 };
G__linked_taginfo G__G__Gui2LN_TGScrollBarElement = { "TGScrollBarElement" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGScrollBar = { "TGScrollBar" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGHScrollBar = { "TGHScrollBar" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGVScrollBar = { "TGVScrollBar" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGViewPort = { "TGViewPort" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGCanvas = { "TGCanvas" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGLBEntry = { "TGLBEntry" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTextLBEntry = { "TGTextLBEntry" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGLBContainer = { "TGLBContainer" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGListBox = { "TGListBox" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGComboBoxPopup = { "TGComboBoxPopup" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGComboBox = { "TGComboBox" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTab = { "TGTab" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTabElement = { "TGTabElement" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTabLayout = { "TGTabLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_ESliderType = { "ESliderType" , 101 , -1 };
G__linked_taginfo G__G__Gui2LN_TGSlider = { "TGSlider" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGVSlider = { "TGVSlider" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGHSlider = { "TGHSlider" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGSelectedPicture = { "TGSelectedPicture" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_EListViewMode = { "EListViewMode" , 101 , -1 };
G__linked_taginfo G__G__Gui2LN_TGLVEntry = { "TGLVEntry" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGLVContainer = { "TGLVContainer" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGListView = { "TGListView" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TOrdCollection = { "TOrdCollection" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGMime = { "TGMime" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_EFSSortMode = { "EFSSortMode" , 101 , -1 };
G__linked_taginfo G__G__Gui2LN_TGFileContainer = { "TGFileContainer" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TViewUpdateTimer = { "TViewUpdateTimer" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGFileItem = { "TGFileItem" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_EFileDialogMode = { "EFileDialogMode" , 101 , -1 };
G__linked_taginfo G__G__Gui2LN_TGLabel = { "TGLabel" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTextBuffer = { "TGTextBuffer" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTextEntry = { "TGTextEntry" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGFSComboBox = { "TGFSComboBox" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGFileInfo = { "TGFileInfo" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGFileDialog = { "TGFileDialog" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGStatusBar = { "TGStatusBar" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGStatusBarPart = { "TGStatusBarPart" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTextFrame = { "TGTextFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGTextView = { "TGTextView" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGToolBar = { "TGToolBar" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGHorizontal3DLine = { "TGHorizontal3DLine" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGListTreeItem = { "TGListTreeItem" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGListTree = { "TGListTree" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TObjString = { "TObjString" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGText = { "TGText" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGDoubleSlider = { "TGDoubleSlider" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGDoubleVSlider = { "TGDoubleVSlider" , 99 , -1 };
G__linked_taginfo G__G__Gui2LN_TGDoubleHSlider = { "TGDoubleHSlider" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__Gui2() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGMimeTypes),sizeof(TGMimeTypes),-1,0,"Pool of mime type objects",G__setup_memvarTGMimeTypes,G__setup_memfuncTGMimeTypes);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolTip),sizeof(TGToolTip),-1,0,"One line help text",G__setup_memvarTGToolTip,G__setup_memfuncTGToolTip);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_EScrollBarMode),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBarElement),sizeof(TGScrollBarElement),-1,0,"Scrollbar element (head, tail, slider)",G__setup_memvarTGScrollBarElement,G__setup_memfuncTGScrollBarElement);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGScrollBar),sizeof(TGScrollBar),-1,5,"Scrollbar widget",G__setup_memvarTGScrollBar,G__setup_memfuncTGScrollBar);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHScrollBar),sizeof(TGHScrollBar),-1,0,"Horizontal scrollbar widget",G__setup_memvarTGHScrollBar,G__setup_memfuncTGHScrollBar);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVScrollBar),sizeof(TGVScrollBar),-1,0,"Vertical scrollbar widget",G__setup_memvarTGVScrollBar,G__setup_memfuncTGVScrollBar);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGViewPort),sizeof(TGViewPort),-1,0,"Viewport through which to look at a frame",G__setup_memvarTGViewPort,G__setup_memfuncTGViewPort);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGCanvas),sizeof(TGCanvas),-1,0,"A canvas with two scrollbars and a viewport",G__setup_memvarTGCanvas,G__setup_memfuncTGCanvas);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBEntry),sizeof(TGLBEntry),-1,0,"Basic listbox entry",G__setup_memvarTGLBEntry,G__setup_memfuncTGLBEntry);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextLBEntry),sizeof(TGTextLBEntry),-1,0,"Text listbox entry",G__setup_memvarTGTextLBEntry,G__setup_memfuncTGTextLBEntry);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLBContainer),sizeof(TGLBContainer),-1,0,"Listbox container",G__setup_memvarTGLBContainer,G__setup_memfuncTGLBContainer);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListBox),sizeof(TGListBox),-1,0,"Listbox widget",G__setup_memvarTGListBox,G__setup_memfuncTGListBox);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBoxPopup),sizeof(TGComboBoxPopup),-1,0,"Combobox popup window",G__setup_memvarTGComboBoxPopup,G__setup_memfuncTGComboBoxPopup);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGComboBox),sizeof(TGComboBox),-1,0,"Combo box widget",G__setup_memvarTGComboBox,G__setup_memfuncTGComboBox);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTab),sizeof(TGTab),-1,0,"Tab widget",G__setup_memvarTGTab,G__setup_memfuncTGTab);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabElement),sizeof(TGTabElement),-1,0,"Little tab on tab widget",G__setup_memvarTGTabElement,G__setup_memfuncTGTabElement);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTabLayout),sizeof(TGTabLayout),-1,0,"Layout manager for TGTab widget",G__setup_memvarTGTabLayout,G__setup_memfuncTGTabLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_ESliderType),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGSlider),sizeof(TGSlider),-1,2,"Slider widget abstract base class",G__setup_memvarTGSlider,G__setup_memfuncTGSlider);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGVSlider),sizeof(TGVSlider),-1,0,"Vertical slider widget",G__setup_memvarTGVSlider,G__setup_memfuncTGVSlider);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHSlider),sizeof(TGHSlider),-1,0,"Horizontal slider widget",G__setup_memvarTGHSlider,G__setup_memfuncTGHSlider);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_EListViewMode),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVEntry),sizeof(TGLVEntry),-1,0,"Item that goes into a TGListView container",G__setup_memvarTGLVEntry,G__setup_memfuncTGLVEntry);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGLVContainer),sizeof(TGLVContainer),-1,0,"Listview container",G__setup_memvarTGLVContainer,G__setup_memfuncTGLVContainer);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListView),sizeof(TGListView),-1,0,"List view widget (iconbox, small icons or tabular view)",G__setup_memvarTGListView,G__setup_memfuncTGListView);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_EFSSortMode),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileContainer),sizeof(TGFileContainer),-1,0,"Container containing file system objects",G__setup_memvarTGFileContainer,G__setup_memfuncTGFileContainer);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_EFileDialogMode),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileInfo),sizeof(TGFileInfo),-1,0,(char*)NULL,G__setup_memvarTGFileInfo,G__setup_memfuncTGFileInfo);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGFileDialog),sizeof(TGFileDialog),-1,0,"File selection dialog",G__setup_memvarTGFileDialog,G__setup_memfuncTGFileDialog);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGStatusBar),sizeof(TGStatusBar),-1,0,"Status bar widget",G__setup_memvarTGStatusBar,G__setup_memfuncTGStatusBar);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextFrame),sizeof(TGTextFrame),-1,0,"Frame containing (multi-line) text",G__setup_memvarTGTextFrame,G__setup_memfuncTGTextFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGTextView),sizeof(TGTextView),-1,0,"Text view widget (contains a text frame and vertical scrollbar)",G__setup_memvarTGTextView,G__setup_memfuncTGTextView);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGToolBar),sizeof(TGToolBar),-1,0,"A bar containing pictuee buttons",G__setup_memvarTGToolBar,G__setup_memfuncTGToolBar);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGHorizontal3DLine),sizeof(TGHorizontal3DLine),-1,0,"A horizontal 3D separator line",G__setup_memvarTGHorizontal3DLine,G__setup_memfuncTGHorizontal3DLine);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTreeItem),sizeof(TGListTreeItem),-1,0,"Item that goes into a TGListTree container",G__setup_memvarTGListTreeItem,G__setup_memfuncTGListTreeItem);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGListTree),sizeof(TGListTree),-1,0,"Show items in a tree structured list",G__setup_memvarTGListTree,G__setup_memfuncTGListTree);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGText),sizeof(TGText),-1,0,"Text used by TGTextEdit",G__setup_memvarTGText,G__setup_memfuncTGText);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleSlider),sizeof(TGDoubleSlider),-1,2,"Double slider widget abstract base class",G__setup_memvarTGDoubleSlider,G__setup_memfuncTGDoubleSlider);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleVSlider),sizeof(TGDoubleVSlider),-1,0,"Vertical double slider widget",G__setup_memvarTGDoubleVSlider,G__setup_memfuncTGDoubleVSlider);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui2LN_TGDoubleHSlider),sizeof(TGDoubleHSlider),-1,0,"Horizontal double slider widget",G__setup_memvarTGDoubleHSlider,G__setup_memfuncTGDoubleHSlider);
}
extern "C" void G__cpp_setupG__Gui2() {
  G__check_setup_version(51111,"G__cpp_setupG__Gui2()");
  G__set_cpp_environmentG__Gui2();
  G__cpp_setup_tagtableG__Gui2();

  G__cpp_setup_inheritanceG__Gui2();

  G__cpp_setup_typetableG__Gui2();

  G__cpp_setup_memvarG__Gui2();

  G__cpp_setup_memfuncG__Gui2();
  G__cpp_setup_globalG__Gui2();
  G__cpp_setup_funcG__Gui2();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Gui2();
  return;
}
class G__cpp_setup_initG__Gui2 {
  public:
    G__cpp_setup_initG__Gui2() { G__add_setup_func("G__Gui2",&G__cpp_setupG__Gui2); }
   ~G__cpp_setup_initG__Gui2() { G__remove_setup_func("G__Gui2"); }
};
G__cpp_setup_initG__Gui2 G__cpp_setup_initializerG__Gui2;

//
// File generated by /user/brun/root/bin/rootcint at Fri Dec  4 14:24:01 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGMimeTypes *&obj)
{
   // Read a pointer to an object of class TGMimeTypes.

   obj = (TGMimeTypes *) buf.ReadObject(TGMimeTypes::Class());
   return buf;
}

//______________________________________________________________________________
void TGMimeTypes::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMimeTypes.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TGMimeTypes::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGMimeTypes.

   TClass *R__cl  = TGMimeTypes::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fClient", &fClient);
   fFilename.ShowMembers(R__insp, strcat(R__parent,"fFilename.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fChanged", &fChanged);
   R__insp.Inspect(R__cl, R__parent, "*fList", &fList);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGToolTip *&obj)
{
   // Read a pointer to an object of class TGToolTip.

   obj = (TGToolTip *) buf.ReadObject(TGToolTip::Class());
   return buf;
}

//______________________________________________________________________________
void TGToolTip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGToolTip.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGToolTip::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGToolTip.

   TClass *R__cl  = TGToolTip::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLabel", &fLabel);
   R__insp.Inspect(R__cl, R__parent, "*fL1", &fL1);
   R__insp.Inspect(R__cl, R__parent, "*fDelay", &fDelay);
   R__insp.Inspect(R__cl, R__parent, "*fWindow", &fWindow);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGScrollBarElement *&obj)
{
   // Read a pointer to an object of class TGScrollBarElement.

   obj = (TGScrollBarElement *) buf.ReadObject(TGScrollBarElement::Class());
   return buf;
}

//______________________________________________________________________________
void TGScrollBarElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGScrollBarElement.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGScrollBarElement::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGScrollBarElement.

   TClass *R__cl  = TGScrollBarElement::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fState", &fState);
   R__insp.Inspect(R__cl, R__parent, "*fPic", &fPic);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGScrollBar *&obj)
{
   // Read a pointer to an object of class TGScrollBar.

   obj = (TGScrollBar *) buf.ReadObject(TGScrollBar::Class());
   return buf;
}

//______________________________________________________________________________
void TGScrollBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGScrollBar.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

//______________________________________________________________________________
void TGScrollBar::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGScrollBar.

   TClass *R__cl  = TGScrollBar::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX0", &fX0);
   R__insp.Inspect(R__cl, R__parent, "fY0", &fY0);
   R__insp.Inspect(R__cl, R__parent, "fXp", &fXp);
   R__insp.Inspect(R__cl, R__parent, "fYp", &fYp);
   R__insp.Inspect(R__cl, R__parent, "fDragging", &fDragging);
   R__insp.Inspect(R__cl, R__parent, "fRange", &fRange);
   R__insp.Inspect(R__cl, R__parent, "fPsize", &fPsize);
   R__insp.Inspect(R__cl, R__parent, "fPos", &fPos);
   R__insp.Inspect(R__cl, R__parent, "fSliderSize", &fSliderSize);
   R__insp.Inspect(R__cl, R__parent, "fSliderRange", &fSliderRange);
   R__insp.Inspect(R__cl, R__parent, "*fHead", &fHead);
   R__insp.Inspect(R__cl, R__parent, "*fTail", &fTail);
   R__insp.Inspect(R__cl, R__parent, "*fSlider", &fSlider);
   R__insp.Inspect(R__cl, R__parent, "*fHeadPic", &fHeadPic);
   R__insp.Inspect(R__cl, R__parent, "*fTailPic", &fTailPic);
   R__insp.Inspect(R__cl, R__parent, "*fRepeat", &fRepeat);
   R__insp.Inspect(R__cl, R__parent, "fSubw", &fSubw);
   TGFrame::ShowMembers(R__insp, R__parent);
   TGWidget::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGHScrollBar *&obj)
{
   // Read a pointer to an object of class TGHScrollBar.

   obj = (TGHScrollBar *) buf.ReadObject(TGHScrollBar::Class());
   return buf;
}

//______________________________________________________________________________
void TGHScrollBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHScrollBar.

   TGScrollBar::Streamer(R__b);
}

//______________________________________________________________________________
void TGHScrollBar::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGHScrollBar.

   TClass *R__cl  = TGHScrollBar::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGScrollBar::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGVScrollBar *&obj)
{
   // Read a pointer to an object of class TGVScrollBar.

   obj = (TGVScrollBar *) buf.ReadObject(TGVScrollBar::Class());
   return buf;
}

//______________________________________________________________________________
void TGVScrollBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVScrollBar.

   TGScrollBar::Streamer(R__b);
}

//______________________________________________________________________________
void TGVScrollBar::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGVScrollBar.

   TClass *R__cl  = TGVScrollBar::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGScrollBar::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGViewPort *&obj)
{
   // Read a pointer to an object of class TGViewPort.

   obj = (TGViewPort *) buf.ReadObject(TGViewPort::Class());
   return buf;
}

//______________________________________________________________________________
void TGViewPort::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGViewPort.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGViewPort::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGViewPort.

   TClass *R__cl  = TGViewPort::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX0", &fX0);
   R__insp.Inspect(R__cl, R__parent, "fY0", &fY0);
   R__insp.Inspect(R__cl, R__parent, "*fContainer", &fContainer);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGCanvas *&obj)
{
   // Read a pointer to an object of class TGCanvas.

   obj = (TGCanvas *) buf.ReadObject(TGCanvas::Class());
   return buf;
}

//______________________________________________________________________________
void TGCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGCanvas.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGCanvas::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGCanvas.

   TClass *R__cl  = TGCanvas::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fVport", &fVport);
   R__insp.Inspect(R__cl, R__parent, "*fHScrollbar", &fHScrollbar);
   R__insp.Inspect(R__cl, R__parent, "*fVScrollbar", &fVScrollbar);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGLBEntry *&obj)
{
   // Read a pointer to an object of class TGLBEntry.

   obj = (TGLBEntry *) buf.ReadObject(TGLBEntry::Class());
   return buf;
}

//______________________________________________________________________________
void TGLBEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLBEntry.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGLBEntry::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGLBEntry.

   TClass *R__cl  = TGLBEntry::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fEntryId", &fEntryId);
   R__insp.Inspect(R__cl, R__parent, "fBkcolor", &fBkcolor);
   R__insp.Inspect(R__cl, R__parent, "fActive", &fActive);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTextLBEntry *&obj)
{
   // Read a pointer to an object of class TGTextLBEntry.

   obj = (TGTextLBEntry *) buf.ReadObject(TGTextLBEntry::Class());
   return buf;
}

//______________________________________________________________________________
void TGTextLBEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextLBEntry.

   TGLBEntry::Streamer(R__b);
}

//______________________________________________________________________________
void TGTextLBEntry::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTextLBEntry.

   TClass *R__cl  = TGTextLBEntry::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fText", &fText);
   R__insp.Inspect(R__cl, R__parent, "fTWidth", &fTWidth);
   R__insp.Inspect(R__cl, R__parent, "fTHeight", &fTHeight);
   R__insp.Inspect(R__cl, R__parent, "fTextChanged", &fTextChanged);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   TGLBEntry::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGLBContainer *&obj)
{
   // Read a pointer to an object of class TGLBContainer.

   obj = (TGLBContainer *) buf.ReadObject(TGLBContainer::Class());
   return buf;
}

//______________________________________________________________________________
void TGLBContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLBContainer.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGLBContainer::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGLBContainer.

   TClass *R__cl  = TGLBContainer::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLastActive", &fLastActive);
   R__insp.Inspect(R__cl, R__parent, "*fMsgWindow", &fMsgWindow);
   R__insp.Inspect(R__cl, R__parent, "fMultiSelect", &fMultiSelect);
   R__insp.Inspect(R__cl, R__parent, "fChangeStatus", &fChangeStatus);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGListBox *&obj)
{
   // Read a pointer to an object of class TGListBox.

   obj = (TGListBox *) buf.ReadObject(TGListBox::Class());
   return buf;
}

//______________________________________________________________________________
void TGListBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListBox.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGListBox::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGListBox.

   TClass *R__cl  = TGListBox::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fListBoxId", &fListBoxId);
   R__insp.Inspect(R__cl, R__parent, "fItemVsize", &fItemVsize);
   R__insp.Inspect(R__cl, R__parent, "fIntegralHeight", &fIntegralHeight);
   R__insp.Inspect(R__cl, R__parent, "*fLbc", &fLbc);
   R__insp.Inspect(R__cl, R__parent, "*fVport", &fVport);
   R__insp.Inspect(R__cl, R__parent, "*fVScrollbar", &fVScrollbar);
   R__insp.Inspect(R__cl, R__parent, "*fMsgWindow", &fMsgWindow);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGComboBoxPopup *&obj)
{
   // Read a pointer to an object of class TGComboBoxPopup.

   obj = (TGComboBoxPopup *) buf.ReadObject(TGComboBoxPopup::Class());
   return buf;
}

//______________________________________________________________________________
void TGComboBoxPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGComboBoxPopup.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGComboBoxPopup::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGComboBoxPopup.

   TClass *R__cl  = TGComboBoxPopup::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGComboBox *&obj)
{
   // Read a pointer to an object of class TGComboBox.

   obj = (TGComboBox *) buf.ReadObject(TGComboBox::Class());
   return buf;
}

//______________________________________________________________________________
void TGComboBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGComboBox.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGComboBox::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGComboBox.

   TClass *R__cl  = TGComboBox::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fComboBoxId", &fComboBoxId);
   R__insp.Inspect(R__cl, R__parent, "*fSelEntry", &fSelEntry);
   R__insp.Inspect(R__cl, R__parent, "*fDDButton", &fDDButton);
   R__insp.Inspect(R__cl, R__parent, "*fComboFrame", &fComboFrame);
   R__insp.Inspect(R__cl, R__parent, "*fListBox", &fListBox);
   R__insp.Inspect(R__cl, R__parent, "*fBpic", &fBpic);
   R__insp.Inspect(R__cl, R__parent, "*fMsgWindow", &fMsgWindow);
   R__insp.Inspect(R__cl, R__parent, "*fLhs", &fLhs);
   R__insp.Inspect(R__cl, R__parent, "*fLhb", &fLhb);
   R__insp.Inspect(R__cl, R__parent, "*fLhdd", &fLhdd);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTab *&obj)
{
   // Read a pointer to an object of class TGTab.

   obj = (TGTab *) buf.ReadObject(TGTab::Class());
   return buf;
}

//______________________________________________________________________________
void TGTab::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTab.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

//______________________________________________________________________________
void TGTab::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTab.

   TClass *R__cl  = TGTab::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fCurrent", &fCurrent);
   R__insp.Inspect(R__cl, R__parent, "fTabh", &fTabh);
   R__insp.Inspect(R__cl, R__parent, "*fContainer", &fContainer);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
   TGWidget::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTabElement *&obj)
{
   // Read a pointer to an object of class TGTabElement.

   obj = (TGTabElement *) buf.ReadObject(TGTabElement::Class());
   return buf;
}

//______________________________________________________________________________
void TGTabElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTabElement.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGTabElement::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTabElement.

   TClass *R__cl  = TGTabElement::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fText", &fText);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   R__insp.Inspect(R__cl, R__parent, "fTWidth", &fTWidth);
   R__insp.Inspect(R__cl, R__parent, "fTHeight", &fTHeight);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTabLayout *&obj)
{
   // Read a pointer to an object of class TGTabLayout.

   obj = (TGTabLayout *) buf.ReadObject(TGTabLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGTabLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTabLayout.

   TGLayoutManager::Streamer(R__b);
}

//______________________________________________________________________________
void TGTabLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTabLayout.

   TClass *R__cl  = TGTabLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMain", &fMain);
   R__insp.Inspect(R__cl, R__parent, "*fList", &fList);
   TGLayoutManager::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGSlider *&obj)
{
   // Read a pointer to an object of class TGSlider.

   obj = (TGSlider *) buf.ReadObject(TGSlider::Class());
   return buf;
}

//______________________________________________________________________________
void TGSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSlider.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

//______________________________________________________________________________
void TGSlider::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGSlider.

   TClass *R__cl  = TGSlider::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fPos", &fPos);
   R__insp.Inspect(R__cl, R__parent, "fRelPos", &fRelPos);
   R__insp.Inspect(R__cl, R__parent, "fVmin", &fVmin);
   R__insp.Inspect(R__cl, R__parent, "fVmax", &fVmax);
   R__insp.Inspect(R__cl, R__parent, "fType", &fType);
   R__insp.Inspect(R__cl, R__parent, "fScale", &fScale);
   R__insp.Inspect(R__cl, R__parent, "fDragging", &fDragging);
   R__insp.Inspect(R__cl, R__parent, "*fSliderPic", &fSliderPic);
   TGFrame::ShowMembers(R__insp, R__parent);
   TGWidget::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGVSlider *&obj)
{
   // Read a pointer to an object of class TGVSlider.

   obj = (TGVSlider *) buf.ReadObject(TGVSlider::Class());
   return buf;
}

//______________________________________________________________________________
void TGVSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVSlider.

   TGSlider::Streamer(R__b);
}

//______________________________________________________________________________
void TGVSlider::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGVSlider.

   TClass *R__cl  = TGVSlider::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fYp", &fYp);
   TGSlider::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGHSlider *&obj)
{
   // Read a pointer to an object of class TGHSlider.

   obj = (TGHSlider *) buf.ReadObject(TGHSlider::Class());
   return buf;
}

//______________________________________________________________________________
void TGHSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHSlider.

   TGSlider::Streamer(R__b);
}

//______________________________________________________________________________
void TGHSlider::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGHSlider.

   TClass *R__cl  = TGHSlider::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fXp", &fXp);
   TGSlider::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGLVEntry *&obj)
{
   // Read a pointer to an object of class TGLVEntry.

   obj = (TGLVEntry *) buf.ReadObject(TGLVEntry::Class());
   return buf;
}

//______________________________________________________________________________
void TGLVEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLVEntry.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGLVEntry::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGLVEntry.

   TClass *R__cl  = TGLVEntry::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fName", &fName);
   R__insp.Inspect(R__cl, R__parent, "*fSubnames", &fSubnames);
   R__insp.Inspect(R__cl, R__parent, "*fCpos", &fCpos);
   R__insp.Inspect(R__cl, R__parent, "*fJmode", &fJmode);
   R__insp.Inspect(R__cl, R__parent, "*fCtw", &fCtw);
   R__insp.Inspect(R__cl, R__parent, "fTWidth", &fTWidth);
   R__insp.Inspect(R__cl, R__parent, "fTHeight", &fTHeight);
   R__insp.Inspect(R__cl, R__parent, "fActive", &fActive);
   R__insp.Inspect(R__cl, R__parent, "fViewMode", &fViewMode);
   R__insp.Inspect(R__cl, R__parent, "*fBigPic", &fBigPic);
   R__insp.Inspect(R__cl, R__parent, "*fSmallPic", &fSmallPic);
   R__insp.Inspect(R__cl, R__parent, "*fCurrent", &fCurrent);
   R__insp.Inspect(R__cl, R__parent, "*fSelPic", &fSelPic);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   R__insp.Inspect(R__cl, R__parent, "*fUserData", &fUserData);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGLVContainer *&obj)
{
   // Read a pointer to an object of class TGLVContainer.

   obj = (TGLVContainer *) buf.ReadObject(TGLVContainer::Class());
   return buf;
}

//______________________________________________________________________________
void TGLVContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLVContainer.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGLVContainer::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGLVContainer.

   TClass *R__cl  = TGLVContainer::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLastActive", &fLastActive);
   R__insp.Inspect(R__cl, R__parent, "*fItemLayout", &fItemLayout);
   R__insp.Inspect(R__cl, R__parent, "fViewMode", &fViewMode);
   R__insp.Inspect(R__cl, R__parent, "*fCpos", &fCpos);
   R__insp.Inspect(R__cl, R__parent, "*fJmode", &fJmode);
   R__insp.Inspect(R__cl, R__parent, "fXp", &fXp);
   R__insp.Inspect(R__cl, R__parent, "fYp", &fYp);
   R__insp.Inspect(R__cl, R__parent, "fX0", &fX0);
   R__insp.Inspect(R__cl, R__parent, "fY0", &fY0);
   R__insp.Inspect(R__cl, R__parent, "fXf", &fXf);
   R__insp.Inspect(R__cl, R__parent, "fYf", &fYf);
   R__insp.Inspect(R__cl, R__parent, "fTotal", &fTotal);
   R__insp.Inspect(R__cl, R__parent, "fSelected", &fSelected);
   R__insp.Inspect(R__cl, R__parent, "fDragging", &fDragging);
   R__insp.Inspect(R__cl, R__parent, "*fMsgWindow", &fMsgWindow);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGListView *&obj)
{
   // Read a pointer to an object of class TGListView.

   obj = (TGListView *) buf.ReadObject(TGListView::Class());
   return buf;
}

//______________________________________________________________________________
void TGListView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListView.

   TGCanvas::Streamer(R__b);
}

//______________________________________________________________________________
void TGListView::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGListView.

   TClass *R__cl  = TGListView::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fColumns[7]", fColumns);
   R__insp.Inspect(R__cl, R__parent, "fJmode[7]", fJmode);
   R__insp.Inspect(R__cl, R__parent, "fViewMode", &fViewMode);
   fMaxSize.ShowMembers(R__insp, strcat(R__parent,"fMaxSize.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fColHeader[7]", &fColHeader);
   TGCanvas::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGFileContainer *&obj)
{
   // Read a pointer to an object of class TGFileContainer.

   obj = (TGFileContainer *) buf.ReadObject(TGFileContainer::Class());
   return buf;
}

//______________________________________________________________________________
void TGFileContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFileContainer.

   TGLVContainer::Streamer(R__b);
}

//______________________________________________________________________________
void TGFileContainer::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGFileContainer.

   TClass *R__cl  = TGFileContainer::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSortType", &fSortType);
   R__insp.Inspect(R__cl, R__parent, "*fFilter", &fFilter);
   R__insp.Inspect(R__cl, R__parent, "*fRefresh", &fRefresh);
   R__insp.Inspect(R__cl, R__parent, "fMtime", &fMtime);
   R__insp.Inspect(R__cl, R__parent, "*fFolder_t", &fFolder_t);
   R__insp.Inspect(R__cl, R__parent, "*fFolder_s", &fFolder_s);
   R__insp.Inspect(R__cl, R__parent, "*fApp_t", &fApp_t);
   R__insp.Inspect(R__cl, R__parent, "*fApp_s", &fApp_s);
   R__insp.Inspect(R__cl, R__parent, "*fDoc_t", &fDoc_t);
   R__insp.Inspect(R__cl, R__parent, "*fDoc_s", &fDoc_s);
   R__insp.Inspect(R__cl, R__parent, "*fSlink_t", &fSlink_t);
   R__insp.Inspect(R__cl, R__parent, "*fSlink_s", &fSlink_s);
   TGLVContainer::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGFileDialog *&obj)
{
   // Read a pointer to an object of class TGFileDialog.

   obj = (TGFileDialog *) buf.ReadObject(TGFileDialog::Class());
   return buf;
}

//______________________________________________________________________________
void TGFileDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFileDialog.

   TGTransientFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGFileDialog::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGFileDialog.

   TClass *R__cl  = TGFileDialog::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLookin", &fLookin);
   R__insp.Inspect(R__cl, R__parent, "*fLfname", &fLfname);
   R__insp.Inspect(R__cl, R__parent, "*fLftypes", &fLftypes);
   R__insp.Inspect(R__cl, R__parent, "*fTbfname", &fTbfname);
   R__insp.Inspect(R__cl, R__parent, "*fName", &fName);
   R__insp.Inspect(R__cl, R__parent, "*fTypes", &fTypes);
   R__insp.Inspect(R__cl, R__parent, "*fTreeLB", &fTreeLB);
   R__insp.Inspect(R__cl, R__parent, "*fCdup", &fCdup);
   R__insp.Inspect(R__cl, R__parent, "*fNewf", &fNewf);
   R__insp.Inspect(R__cl, R__parent, "*fList", &fList);
   R__insp.Inspect(R__cl, R__parent, "*fDetails", &fDetails);
   R__insp.Inspect(R__cl, R__parent, "*fPcdup", &fPcdup);
   R__insp.Inspect(R__cl, R__parent, "*fPnewf", &fPnewf);
   R__insp.Inspect(R__cl, R__parent, "*fPlist", &fPlist);
   R__insp.Inspect(R__cl, R__parent, "*fPdetails", &fPdetails);
   R__insp.Inspect(R__cl, R__parent, "*fOk", &fOk);
   R__insp.Inspect(R__cl, R__parent, "*fCancel", &fCancel);
   R__insp.Inspect(R__cl, R__parent, "*fFv", &fFv);
   R__insp.Inspect(R__cl, R__parent, "*fFc", &fFc);
   R__insp.Inspect(R__cl, R__parent, "*fHtop", &fHtop);
   R__insp.Inspect(R__cl, R__parent, "*fHf", &fHf);
   R__insp.Inspect(R__cl, R__parent, "*fHfname", &fHfname);
   R__insp.Inspect(R__cl, R__parent, "*fHftype", &fHftype);
   R__insp.Inspect(R__cl, R__parent, "*fVf", &fVf);
   R__insp.Inspect(R__cl, R__parent, "*fVbf", &fVbf);
   R__insp.Inspect(R__cl, R__parent, "*fLmain", &fLmain);
   R__insp.Inspect(R__cl, R__parent, "*fLhl", &fLhl);
   R__insp.Inspect(R__cl, R__parent, "*fLb1", &fLb1);
   R__insp.Inspect(R__cl, R__parent, "*fLb2", &fLb2);
   R__insp.Inspect(R__cl, R__parent, "*fLvf", &fLvf);
   R__insp.Inspect(R__cl, R__parent, "*fLvbf", &fLvbf);
   R__insp.Inspect(R__cl, R__parent, "*fLb", &fLb);
   R__insp.Inspect(R__cl, R__parent, "*fLht", &fLht);
   R__insp.Inspect(R__cl, R__parent, "*fLht1", &fLht1);
   R__insp.Inspect(R__cl, R__parent, "*fFileInfo", &fFileInfo);
   TGTransientFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGStatusBar *&obj)
{
   // Read a pointer to an object of class TGStatusBar.

   obj = (TGStatusBar *) buf.ReadObject(TGStatusBar::Class());
   return buf;
}

//______________________________________________________________________________
void TGStatusBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGStatusBar.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGStatusBar::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGStatusBar.

   TClass *R__cl  = TGStatusBar::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fStatusPart", &fStatusPart);
   R__insp.Inspect(R__cl, R__parent, "*fParts", &fParts);
   R__insp.Inspect(R__cl, R__parent, "fNpart", &fNpart);
   R__insp.Inspect(R__cl, R__parent, "fYt", &fYt);
   R__insp.Inspect(R__cl, R__parent, "*fXt", &fXt);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTextFrame *&obj)
{
   // Read a pointer to an object of class TGTextFrame.

   obj = (TGTextFrame *) buf.ReadObject(TGTextFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TGTextFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextFrame.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGTextFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTextFrame.

   TClass *R__cl  = TGTextFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fChars", &fChars);
   R__insp.Inspect(R__cl, R__parent, "*fLnlen", &fLnlen);
   R__insp.Inspect(R__cl, R__parent, "fTHeight", &fTHeight);
   R__insp.Inspect(R__cl, R__parent, "fNlines", &fNlines);
   R__insp.Inspect(R__cl, R__parent, "fMaxLines", &fMaxLines);
   R__insp.Inspect(R__cl, R__parent, "fTop", &fTop);
   R__insp.Inspect(R__cl, R__parent, "fFont", &fFont);
   R__insp.Inspect(R__cl, R__parent, "fGC", &fGC);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTextView *&obj)
{
   // Read a pointer to an object of class TGTextView.

   obj = (TGTextView *) buf.ReadObject(TGTextView::Class());
   return buf;
}

//______________________________________________________________________________
void TGTextView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextView.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGTextView::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTextView.

   TClass *R__cl  = TGTextView::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fTextCanvas", &fTextCanvas);
   R__insp.Inspect(R__cl, R__parent, "*fVsb", &fVsb);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGToolBar *&obj)
{
   // Read a pointer to an object of class TGToolBar.

   obj = (TGToolBar *) buf.ReadObject(TGToolBar::Class());
   return buf;
}

//______________________________________________________________________________
void TGToolBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGToolBar.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGToolBar::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGToolBar.

   TClass *R__cl  = TGToolBar::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fWidgets", &fWidgets);
   R__insp.Inspect(R__cl, R__parent, "*fPictures", &fPictures);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGHorizontal3DLine *&obj)
{
   // Read a pointer to an object of class TGHorizontal3DLine.

   obj = (TGHorizontal3DLine *) buf.ReadObject(TGHorizontal3DLine::Class());
   return buf;
}

//______________________________________________________________________________
void TGHorizontal3DLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHorizontal3DLine.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGHorizontal3DLine::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGHorizontal3DLine.

   TClass *R__cl  = TGHorizontal3DLine::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGListTreeItem *&obj)
{
   // Read a pointer to an object of class TGListTreeItem.

   ::Error("TGListTreeItem::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TGListTreeItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListTreeItem.

   ::Error("TGListTreeItem::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TGListTreeItem::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGListTreeItem.

   TClass *R__cl  = TGListTreeItem::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fClient", &fClient);
   R__insp.Inspect(R__cl, R__parent, "*fParent", &fParent);
   R__insp.Inspect(R__cl, R__parent, "*fFirstchild", &fFirstchild);
   R__insp.Inspect(R__cl, R__parent, "*fPrevsibling", &fPrevsibling);
   R__insp.Inspect(R__cl, R__parent, "*fNextsibling", &fNextsibling);
   R__insp.Inspect(R__cl, R__parent, "fOpen", &fOpen);
   R__insp.Inspect(R__cl, R__parent, "fActive", &fActive);
   R__insp.Inspect(R__cl, R__parent, "*fText", &fText);
   R__insp.Inspect(R__cl, R__parent, "fLength", &fLength);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
   R__insp.Inspect(R__cl, R__parent, "fXtext", &fXtext);
   R__insp.Inspect(R__cl, R__parent, "fYtext", &fYtext);
   R__insp.Inspect(R__cl, R__parent, "fHeight", &fHeight);
   R__insp.Inspect(R__cl, R__parent, "fPicWidth", &fPicWidth);
   R__insp.Inspect(R__cl, R__parent, "*fOpenPic", &fOpenPic);
   R__insp.Inspect(R__cl, R__parent, "*fClosedPic", &fClosedPic);
   R__insp.Inspect(R__cl, R__parent, "*fUserData", &fUserData);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGListTree *&obj)
{
   // Read a pointer to an object of class TGListTree.

   obj = (TGListTree *) buf.ReadObject(TGListTree::Class());
   return buf;
}

//______________________________________________________________________________
void TGListTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListTree.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGListTree::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGListTree.

   TClass *R__cl  = TGListTree::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fFirst", &fFirst);
   R__insp.Inspect(R__cl, R__parent, "*fSelected", &fSelected);
   R__insp.Inspect(R__cl, R__parent, "fHspacing", &fHspacing);
   R__insp.Inspect(R__cl, R__parent, "fVspacing", &fVspacing);
   R__insp.Inspect(R__cl, R__parent, "fIndent", &fIndent);
   R__insp.Inspect(R__cl, R__parent, "fMargin", &fMargin);
   R__insp.Inspect(R__cl, R__parent, "fLastY", &fLastY);
   R__insp.Inspect(R__cl, R__parent, "fGrayPixel", &fGrayPixel);
   R__insp.Inspect(R__cl, R__parent, "fDrawGC", &fDrawGC);
   R__insp.Inspect(R__cl, R__parent, "fLineGC", &fLineGC);
   R__insp.Inspect(R__cl, R__parent, "fHighlightGC", &fHighlightGC);
   R__insp.Inspect(R__cl, R__parent, "fFont", &fFont);
   R__insp.Inspect(R__cl, R__parent, "fDefw", &fDefw);
   R__insp.Inspect(R__cl, R__parent, "fDefh", &fDefh);
   R__insp.Inspect(R__cl, R__parent, "fExposeTop", &fExposeTop);
   R__insp.Inspect(R__cl, R__parent, "fExposeBottom", &fExposeBottom);
   R__insp.Inspect(R__cl, R__parent, "*fMsgWindow", &fMsgWindow);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGText *&obj)
{
   // Read a pointer to an object of class TGText.

   ::Error("TGText::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TGText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGText.

   ::Error("TGText::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TGText::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGText.

   TClass *R__cl  = TGText::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fIsSaved", &fIsSaved);
   R__insp.Inspect(R__cl, R__parent, "*fLines", &fLines);
   R__insp.Inspect(R__cl, R__parent, "*fCurrent", &fCurrent);
   R__insp.Inspect(R__cl, R__parent, "fCurrentRow", &fCurrentRow);
   R__insp.Inspect(R__cl, R__parent, "fRowCount", &fRowCount);
   R__insp.Inspect(R__cl, R__parent, "fColCount", &fColCount);
   R__insp.Inspect(R__cl, R__parent, "fLongestLine", &fLongestLine);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGDoubleSlider *&obj)
{
   // Read a pointer to an object of class TGDoubleSlider.

   obj = (TGDoubleSlider *) buf.ReadObject(TGDoubleSlider::Class());
   return buf;
}

//______________________________________________________________________________
void TGDoubleSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDoubleSlider.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

//______________________________________________________________________________
void TGDoubleSlider::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGDoubleSlider.

   TClass *R__cl  = TGDoubleSlider::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fPos", &fPos);
   R__insp.Inspect(R__cl, R__parent, "fSmin", &fSmin);
   R__insp.Inspect(R__cl, R__parent, "fSmax", &fSmax);
   R__insp.Inspect(R__cl, R__parent, "fRelPos", &fRelPos);
   R__insp.Inspect(R__cl, R__parent, "fVmin", &fVmin);
   R__insp.Inspect(R__cl, R__parent, "fVmax", &fVmax);
   R__insp.Inspect(R__cl, R__parent, "fScale", &fScale);
   R__insp.Inspect(R__cl, R__parent, "fScaleType", &fScaleType);
   R__insp.Inspect(R__cl, R__parent, "fDragging", &fDragging);
   R__insp.Inspect(R__cl, R__parent, "fPressPoint", &fPressPoint);
   R__insp.Inspect(R__cl, R__parent, "fPressSmin", &fPressSmin);
   R__insp.Inspect(R__cl, R__parent, "fPressSmax", &fPressSmax);
   R__insp.Inspect(R__cl, R__parent, "fMove", &fMove);
   TGFrame::ShowMembers(R__insp, R__parent);
   TGWidget::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGDoubleVSlider *&obj)
{
   // Read a pointer to an object of class TGDoubleVSlider.

   obj = (TGDoubleVSlider *) buf.ReadObject(TGDoubleVSlider::Class());
   return buf;
}

//______________________________________________________________________________
void TGDoubleVSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDoubleVSlider.

   TGDoubleSlider::Streamer(R__b);
}

//______________________________________________________________________________
void TGDoubleVSlider::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGDoubleVSlider.

   TClass *R__cl  = TGDoubleVSlider::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fYp", &fYp);
   TGDoubleSlider::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGDoubleHSlider *&obj)
{
   // Read a pointer to an object of class TGDoubleHSlider.

   obj = (TGDoubleHSlider *) buf.ReadObject(TGDoubleHSlider::Class());
   return buf;
}

//______________________________________________________________________________
void TGDoubleHSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDoubleHSlider.

   TGDoubleSlider::Streamer(R__b);
}

//______________________________________________________________________________
void TGDoubleHSlider::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGDoubleHSlider.

   TClass *R__cl  = TGDoubleHSlider::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fXp", &fXp);
   TGDoubleSlider::ShowMembers(R__insp, R__parent);
}

