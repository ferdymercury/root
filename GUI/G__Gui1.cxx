//*CMZ :  2.21/08 15/03/99  08.52.06  by  Rene Brun
//*-- Author :    Rene Brun   15/03/99
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
extern void G__cpp_setup_tagtableG__Gui1();
extern void G__cpp_setup_inheritanceG__Gui1();
extern void G__cpp_setup_typetableG__Gui1();
extern void G__cpp_setup_memvarG__Gui1();
extern void G__cpp_setup_globalG__Gui1();
extern void G__cpp_setup_memfuncG__Gui1();
extern void G__cpp_setup_funcG__Gui1();
extern void G__set_cpp_environmentG__Gui1();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TGObject.h"
#include "TGClient.h"
#include "TGWindow.h"
#include "TGPicture.h"
#include "TGDimension.h"
#include "TGFrame.h"
#include "TGLayout.h"
#include "TGString.h"
#include "TGWidget.h"
#include "TGIcon.h"
#include "TGLabel.h"
#include "TGButton.h"
#include "TGTextBuffer.h"
#include "TGTextEntry.h"
#include "TGMsgBox.h"
#include "TGMenu.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__Gui1LN_TClass;
extern G__linked_taginfo G__G__Gui1LN_TList;
extern G__linked_taginfo G__G__Gui1LN_TTimer;
extern G__linked_taginfo G__G__Gui1LN_TObject;
extern G__linked_taginfo G__G__Gui1LN_TRefCnt;
extern G__linked_taginfo G__G__Gui1LN_TString;
extern G__linked_taginfo G__G__Gui1LN_EGEventType;
extern G__linked_taginfo G__G__Gui1LN_PictureAttributes_t;
extern G__linked_taginfo G__G__Gui1LN_TGClient;
extern G__linked_taginfo G__G__Gui1LN_TGObject;
extern G__linked_taginfo G__G__Gui1LN_THashList;
extern G__linked_taginfo G__G__Gui1LN_TGWindow;
extern G__linked_taginfo G__G__Gui1LN_TGPicturePool;
extern G__linked_taginfo G__G__Gui1LN_TGPicture;
extern G__linked_taginfo G__G__Gui1LN_TGMimeTypes;
extern G__linked_taginfo G__G__Gui1LN_THashTable;
extern G__linked_taginfo G__G__Gui1LN_TGSelectedPicture;
extern G__linked_taginfo G__G__Gui1LN_TGDimension;
extern G__linked_taginfo G__G__Gui1LN_TGPosition;
extern G__linked_taginfo G__G__Gui1LN_ELayoutHints;
extern G__linked_taginfo G__G__Gui1LN_TGFrame;
extern G__linked_taginfo G__G__Gui1LN_TGCompositeFrame;
extern G__linked_taginfo G__G__Gui1LN_TGLayoutHints;
extern G__linked_taginfo G__G__Gui1LN_TGFrameElement;
extern G__linked_taginfo G__G__Gui1LN_TGLayoutManager;
extern G__linked_taginfo G__G__Gui1LN_TGVerticalLayout;
extern G__linked_taginfo G__G__Gui1LN_TGHorizontalLayout;
extern G__linked_taginfo G__G__Gui1LN_TGRowLayout;
extern G__linked_taginfo G__G__Gui1LN_TGColumnLayout;
extern G__linked_taginfo G__G__Gui1LN_TGMatrixLayout;
extern G__linked_taginfo G__G__Gui1LN_TGTileLayout;
extern G__linked_taginfo G__G__Gui1LN_TGListLayout;
extern G__linked_taginfo G__G__Gui1LN_TGListDetailsLayout;
extern G__linked_taginfo G__G__Gui1LN_TGString;
extern G__linked_taginfo G__G__Gui1LN_TGHotString;
extern G__linked_taginfo G__G__Gui1LN_EFrameState;
extern G__linked_taginfo G__G__Gui1LN_EFrameType;
extern G__linked_taginfo G__G__Gui1LN_EMWMHints;
extern G__linked_taginfo G__G__Gui1LN_TGVerticalFrame;
extern G__linked_taginfo G__G__Gui1LN_TGHorizontalFrame;
extern G__linked_taginfo G__G__Gui1LN_TGMainFrame;
extern G__linked_taginfo G__G__Gui1LN_TGTransientFrame;
extern G__linked_taginfo G__G__Gui1LN_TGGroupFrame;
extern G__linked_taginfo G__G__Gui1LN_ETextJustification;
extern G__linked_taginfo G__G__Gui1LN_EWidgetStatus;
extern G__linked_taginfo G__G__Gui1LN_EWidgetMessageTypes;
extern G__linked_taginfo G__G__Gui1LN_TGWidget;
extern G__linked_taginfo G__G__Gui1LN_TGIcon;
extern G__linked_taginfo G__G__Gui1LN_TGLabel;
extern G__linked_taginfo G__G__Gui1LN_EButtonState;
extern G__linked_taginfo G__G__Gui1LN_TGToolTip;
extern G__linked_taginfo G__G__Gui1LN_TGButton;
extern G__linked_taginfo G__G__Gui1LN_TGTextButton;
extern G__linked_taginfo G__G__Gui1LN_TGPictureButton;
extern G__linked_taginfo G__G__Gui1LN_TGCheckButton;
extern G__linked_taginfo G__G__Gui1LN_TGRadioButton;
extern G__linked_taginfo G__G__Gui1LN_TGTextBuffer;
extern G__linked_taginfo G__G__Gui1LN_TBlinkTimer;
extern G__linked_taginfo G__G__Gui1LN_TGTextEntry;
extern G__linked_taginfo G__G__Gui1LN_EMsgBoxIcon;
extern G__linked_taginfo G__G__Gui1LN_EMsgBoxButton;
extern G__linked_taginfo G__G__Gui1LN_TGMsgBox;
extern G__linked_taginfo G__G__Gui1LN_EMenuEntryState;
extern G__linked_taginfo G__G__Gui1LN_EMenuEntryType;
extern G__linked_taginfo G__G__Gui1LN_TGPopupMenu;
extern G__linked_taginfo G__G__Gui1LN_TGMenuEntry;
extern G__linked_taginfo G__G__Gui1LN_TGMenuTitle;
extern G__linked_taginfo G__G__Gui1LN_TGMenuBar;
/********************************************************
* G__Gui1.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif

extern "C" void G__cpp_reset_tagtableG__Gui1();

extern "C" void G__set_cpp_environmentG__Gui1() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TGObject.h");
  G__add_compiledheader("TGClient.h");
  G__add_compiledheader("TGWindow.h");
  G__add_compiledheader("TGPicture.h");
  G__add_compiledheader("TGDimension.h");
  G__add_compiledheader("TGFrame.h");
  G__add_compiledheader("TGLayout.h");
  G__add_compiledheader("TGString.h");
  G__add_compiledheader("TGWidget.h");
  G__add_compiledheader("TGIcon.h");
  G__add_compiledheader("TGLabel.h");
  G__add_compiledheader("TGButton.h");
  G__add_compiledheader("TGTextBuffer.h");
  G__add_compiledheader("TGTextEntry.h");
  G__add_compiledheader("TGMsgBox.h");
  G__add_compiledheader("TGMenu.h");
  G__cpp_reset_tagtableG__Gui1();
}
extern "C" int G__cpp_dllrevG__Gui1() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TGClient */
static int G__TGClient_TGClient_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGClient *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TGClient((const char*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TGClient[G__getaryconstruct()];
   else                    p=new TGClient;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGClient);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetRoot_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGClient*)(G__getstructoffset()))->GetRoot());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetWindowById_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGClient*)(G__getstructoffset()))->GetWindowById((Window_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetColorByName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGClient*)(G__getstructoffset()))->GetColorByName((const char*)G__int(libp->para[0]),libp->para[1].ref?*(ULong_t*)libp->para[1].ref:G__Mulong(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetFontByName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGClient*)(G__getstructoffset()))->GetFontByName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetHilite_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGClient*)(G__getstructoffset()))->GetHilite((ULong_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetShadow_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGClient*)(G__getstructoffset()))->GetShadow((ULong_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_NeedRedraw_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->NeedRedraw((TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_RegisterWindow_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->RegisterWindow((TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_UnregisterWindow_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->UnregisterWindow((TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_HandleInput_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGClient*)(G__getstructoffset()))->HandleInput());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_ProcessLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->ProcessLine(*((TString*)G__int(libp->para[0])),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2]),(Long_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_WaitFor_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->WaitFor((TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_WaitForUnmap_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->WaitForUnmap((TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetPicturePool_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGClient*)(G__getstructoffset()))->GetPicturePool());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetPicture_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGClient*)(G__getstructoffset()))->GetPicture((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetPicture_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGClient*)(G__getstructoffset()))->GetPicture((const char*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_FreePicture_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->FreePicture((const TGPicture*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_GetMimeTypeList_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGClient*)(G__getstructoffset()))->GetMimeTypeList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_DeclFileName_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGClient*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_DeclFileLine_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGClient*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_ImplFileName_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGClient*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_ImplFileLine_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGClient*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_Class_Version_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGClient*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_Class_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGClient*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_Dictionary_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_IsA_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGClient*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_ShowMembers_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGClient_Streamer_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGClient*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGClient_TGClient_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGClient *p;
   if(1!=libp->paran) ;
   p=new TGClient(*(TGClient*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGClient);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGClient_wATGClient_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGClient *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGClient *)((G__getstructoffset())+sizeof(TGClient)*i);
   else  delete (TGClient *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGObject */
static int G__TGObject_TGObject_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGObject *p=NULL;
   if(G__getaryconstruct()) p=new TGObject[G__getaryconstruct()];
   else                    p=new TGObject;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGObject);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_GetId_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGObject*)(G__getstructoffset()))->GetId());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_Hash_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGObject*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_IsEqual_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGObject*)(G__getstructoffset()))->IsEqual((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_DeclFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGObject*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_DeclFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGObject*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_ImplFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGObject*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_ImplFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGObject*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_Class_Version_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGObject*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_Class_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGObject*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_Dictionary_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGObject*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_IsA_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGObject*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_ShowMembers_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGObject*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGObject_Streamer_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGObject*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGObject_TGObject_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGObject *p;
   if(1!=libp->paran) ;
   p=new TGObject(*(TGObject*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGObject);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGObject_wATGObject_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGObject *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGObject *)((G__getstructoffset())+sizeof(TGObject)*i);
   else  delete (TGObject *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGWindow */
static int G__TGWindow_TGWindow_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGWindow *p=NULL;
   switch(libp->paran) {
   case 10:
      p = new TGWindow(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7])
,(void*)G__int(libp->para[8]),(SetWindowAttributes_t*)G__int(libp->para[9]));
      break;
   case 9:
      p = new TGWindow(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7])
,(void*)G__int(libp->para[8]));
      break;
   case 8:
      p = new TGWindow(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7]));
      break;
   case 7:
      p = new TGWindow(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGWindow(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGWindow(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGWindow);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_TGWindow_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGWindow *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TGWindow(
(TGClient*)G__int(libp->para[0]),(Window_t)G__int(libp->para[1])
,(const TGWindow*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGWindow((TGClient*)G__int(libp->para[0]),(Window_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGWindow);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_GetParent_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGWindow*)(G__getstructoffset()))->GetParent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_MapWindow_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->MapWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_MapSubwindows_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->MapSubwindows();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_MapRaised_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->MapRaised();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_UnmapWindow_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->UnmapWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_DestroyWindow_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->DestroyWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_RaiseWindow_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->RaiseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_LowerWindow_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->LowerWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_SetBackgroundColor_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->SetBackgroundColor((ULong_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_SetBackgroundPixmap_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->SetBackgroundPixmap((Pixmap_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_HandleExpose_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGWindow*)(G__getstructoffset()))->HandleExpose((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_HandleEvent_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGWindow*)(G__getstructoffset()))->HandleEvent((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_HandleTimer_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGWindow*)(G__getstructoffset()))->HandleTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_Move_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->Move((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_Resize_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->Resize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_MoveResize_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->MoveResize((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_IsMapped_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGWindow*)(G__getstructoffset()))->IsMapped());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_DeclFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGWindow*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_DeclFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGWindow*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_ImplFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGWindow*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_ImplFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGWindow*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_Class_Version_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGWindow*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_Class_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGWindow*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_Dictionary_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_IsA_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGWindow*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_ShowMembers_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWindow_Streamer_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWindow*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGWindow_TGWindow_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGWindow *p;
   if(1!=libp->paran) ;
   p=new TGWindow(*(TGWindow*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGWindow);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGWindow_wATGWindow_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGWindow *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGWindow *)((G__getstructoffset())+sizeof(TGWindow)*i);
   else  delete (TGWindow *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGPicturePool */
static int G__TGPicturePool_TGPicturePool_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGPicturePool *p=NULL;
      p = new TGPicturePool((const TGClient*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_GetPath_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPicturePool*)(G__getstructoffset()))->GetPath());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_GetPicture_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPicturePool*)(G__getstructoffset()))->GetPicture((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_GetPicture_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPicturePool*)(G__getstructoffset()))->GetPicture((const char*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_FreePicture_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPicturePool*)(G__getstructoffset()))->FreePicture((const TGPicture*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPicturePool*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPicturePool*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPicturePool*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPicturePool*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGPicturePool*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPicturePool*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPicturePool*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPicturePool*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPicturePool*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicturePool_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPicturePool*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGPicturePool_TGPicturePool_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGPicturePool *p;
   if(1!=libp->paran) ;
   p=new TGPicturePool(*(TGPicturePool*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGPicturePool_wATGPicturePool_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGPicturePool *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGPicturePool *)((G__getstructoffset())+sizeof(TGPicturePool)*i);
   else  delete (TGPicturePool *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGPicture */
static int G__TGPicture_GetName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPicture*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_GetWidth_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGPicture*)(G__getstructoffset()))->GetWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_GetHeight_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGPicture*)(G__getstructoffset()))->GetHeight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_GetPicture_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGPicture*)(G__getstructoffset()))->GetPicture());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_GetMask_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGPicture*)(G__getstructoffset()))->GetMask());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_IsScaled_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGPicture*)(G__getstructoffset()))->IsScaled());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_Hash_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGPicture*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_Draw_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPicture*)(G__getstructoffset()))->Draw((Handle_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPicture*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPicture*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPicture*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPicture*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGPicture*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPicture*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPicture*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPicture*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPicture*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPicture_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPicture*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGPicture_TGPicture_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGPicture *p;
   if(1!=libp->paran) ;
   p=new TGPicture(*(TGPicture*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPicture);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGPicture_wATGPicture_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGPicture *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGPicture *)((G__getstructoffset())+sizeof(TGPicture)*i);
   else  delete (TGPicture *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGSelectedPicture */
static int G__TGSelectedPicture_TGSelectedPicture_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGSelectedPicture *p=NULL;
      p = new TGSelectedPicture((const TGClient*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_DeclFileName_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGSelectedPicture*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_DeclFileLine_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGSelectedPicture*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_ImplFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGSelectedPicture*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_ImplFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGSelectedPicture*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_Class_Version_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGSelectedPicture*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_Class_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGSelectedPicture*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_Dictionary_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSelectedPicture*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_IsA_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGSelectedPicture*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_ShowMembers_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSelectedPicture*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGSelectedPicture_Streamer_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGSelectedPicture*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGSelectedPicture_TGSelectedPicture_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGSelectedPicture *p;
   if(1!=libp->paran) ;
   p=new TGSelectedPicture(*(TGSelectedPicture*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGSelectedPicture_wATGSelectedPicture_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGSelectedPicture *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGSelectedPicture *)((G__getstructoffset())+sizeof(TGSelectedPicture)*i);
   else  delete (TGSelectedPicture *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGDimension */
static int G__TGDimension_TGDimension_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGDimension *p=NULL;
   if(G__getaryconstruct()) p=new TGDimension[G__getaryconstruct()];
   else                    p=new TGDimension;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGDimension);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_TGDimension_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGDimension *p=NULL;
      p = new TGDimension((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGDimension);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_TGDimension_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGDimension *p=NULL;
      p = new TGDimension(*(TGDimension*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGDimension);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGDimension*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGDimension*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGDimension*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGDimension*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGDimension*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGDimension*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDimension*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGDimension*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDimension*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGDimension_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGDimension*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGDimension_wATGDimension_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGDimension *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGDimension *)((G__getstructoffset())+sizeof(TGDimension)*i);
   else  delete (TGDimension *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGPosition */
static int G__TGPosition_TGPosition_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGPosition *p=NULL;
   if(G__getaryconstruct()) p=new TGPosition[G__getaryconstruct()];
   else                    p=new TGPosition;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPosition);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_TGPosition_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGPosition *p=NULL;
      p = new TGPosition((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPosition);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_TGPosition_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGPosition *p=NULL;
      p = new TGPosition(*(TGPosition*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPosition);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPosition*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPosition*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPosition*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPosition*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGPosition*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPosition*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPosition*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPosition*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPosition*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPosition_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPosition*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGPosition_wATGPosition_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGPosition *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGPosition *)((G__getstructoffset())+sizeof(TGPosition)*i);
   else  delete (TGPosition *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGFrame */
static int G__TGFrame_TGFrame_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGFrame *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_TGFrame_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGFrame *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TGFrame(
(TGClient*)G__int(libp->para[0]),(Window_t)G__int(libp->para[1])
,(const TGWindow*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGFrame((TGClient*)G__int(libp->para[0]),(Window_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleEvent_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleEvent((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleConfigureNotify_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleConfigureNotify((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleButton_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleDoubleClick_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleDoubleClick((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleCrossing_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleCrossing((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleMotion_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleKey_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleKey((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleFocusChange_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleFocusChange((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleClientMessage_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleClientMessage((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleSelection_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleSelection((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleSelectionRequest_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleSelectionRequest((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_HandleSelectionClear_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->HandleSelectionClear((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_SendMessage_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->SendMessage((const TGWindow*)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2]),(Long_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_ProcessMessage_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGFrame*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_Move_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->Move((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_Resize_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->Resize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_Resize_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->Resize(*((TGDimension*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_MoveResize_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->MoveResize((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetDefaultWidth_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGFrame*)(G__getstructoffset()))->GetDefaultWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetDefaultHeight_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGFrame*)(G__getstructoffset()))->GetDefaultHeight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetDefaultSize_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGFrame*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetBackground_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGFrame*)(G__getstructoffset()))->GetBackground());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_ChangeBackground_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->ChangeBackground((ULong_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetOptions_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGFrame*)(G__getstructoffset()))->GetOptions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_ChangeOptions_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->ChangeOptions((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_Layout_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_MapSubwindows_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->MapSubwindows();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_DrawBorder_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetWidth_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGFrame*)(G__getstructoffset()))->GetWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetHeight_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGFrame*)(G__getstructoffset()))->GetHeight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetSize_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGFrame*)(G__getstructoffset()))->GetSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetX_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFrame*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetY_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFrame*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_GetBorderWidth_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFrame*)(G__getstructoffset()))->GetBorderWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_SetWidth_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->SetWidth((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_SetHeight_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->SetHeight((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_SetSize_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->SetSize(*(TGDimension*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_DeclFileName_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_DeclFileLine_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_ImplFileName_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_ImplFileLine_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_Class_Version_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_Class_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_Dictionary_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_IsA_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_ShowMembers_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGFrame_Streamer_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGFrame_TGFrame_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGFrame *p;
   if(1!=libp->paran) ;
   p=new TGFrame(*(TGFrame*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGFrame_wATGFrame_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGFrame *)((G__getstructoffset())+sizeof(TGFrame)*i);
   else  delete (TGFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGCompositeFrame */
static int G__TGCompositeFrame_TGCompositeFrame_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGCompositeFrame *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGCompositeFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGCompositeFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGCompositeFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_TGCompositeFrame_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGCompositeFrame *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TGCompositeFrame(
(TGClient*)G__int(libp->para[0]),(Window_t)G__int(libp->para[1])
,(const TGWindow*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGCompositeFrame((TGClient*)G__int(libp->para[0]),(Window_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_GetDefaultWidth_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGCompositeFrame*)(G__getstructoffset()))->GetDefaultWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_GetDefaultHeight_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGCompositeFrame*)(G__getstructoffset()))->GetDefaultHeight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_GetDefaultSize_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGCompositeFrame*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_MapSubwindows_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->MapSubwindows();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_Layout_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_HandleButton_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_HandleDoubleClick_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->HandleDoubleClick((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_HandleCrossing_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->HandleCrossing((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_HandleMotion_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_HandleKey_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->HandleKey((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_HandleFocusChange_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->HandleFocusChange((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_HandleSelection_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->HandleSelection((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_ChangeOptions_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->ChangeOptions((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_ProcessMessage_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_GetLayoutManager_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCompositeFrame*)(G__getstructoffset()))->GetLayoutManager());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_SetLayoutManager_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->SetLayoutManager((TGLayoutManager*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_AddFrame_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->AddFrame((TGFrame*)G__int(libp->para[0]),(TGLayoutHints*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->AddFrame((TGFrame*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_RemoveFrame_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->RemoveFrame((TGFrame*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_ShowFrame_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->ShowFrame((TGFrame*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_HideFrame_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->HideFrame((TGFrame*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_GetState_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGCompositeFrame*)(G__getstructoffset()))->GetState((TGFrame*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_IsVisible_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->IsVisible((TGFrame*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_IsVisible_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->IsVisible((TGFrameElement*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_IsArranged_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->IsArranged((TGFrame*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_IsArranged_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCompositeFrame*)(G__getstructoffset()))->IsArranged((TGFrameElement*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_GetList_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCompositeFrame*)(G__getstructoffset()))->GetList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_DeclFileName_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGCompositeFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_DeclFileLine_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGCompositeFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_ImplFileName_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGCompositeFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_ImplFileLine_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGCompositeFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_Class_Version_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGCompositeFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_Class_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCompositeFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_Dictionary_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_IsA_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCompositeFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_ShowMembers_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCompositeFrame_Streamer_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCompositeFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGCompositeFrame_TGCompositeFrame_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGCompositeFrame *p;
   if(1!=libp->paran) ;
   p=new TGCompositeFrame(*(TGCompositeFrame*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGCompositeFrame_wATGCompositeFrame_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGCompositeFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGCompositeFrame *)((G__getstructoffset())+sizeof(TGCompositeFrame)*i);
   else  delete (TGCompositeFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGLayoutHints */
static int G__TGLayoutHints_TGLayoutHints_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGLayoutHints *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGLayoutHints(
(ULong_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGLayoutHints(
(ULong_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGLayoutHints(
(ULong_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGLayoutHints((ULong_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGLayoutHints((ULong_t)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TGLayoutHints[G__getaryconstruct()];
   else                    p=new TGLayoutHints;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_GetLayoutHints_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGLayoutHints*)(G__getstructoffset()))->GetLayoutHints());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_GetPadTop_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGLayoutHints*)(G__getstructoffset()))->GetPadTop());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_GetPadBottom_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGLayoutHints*)(G__getstructoffset()))->GetPadBottom());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_GetPadLeft_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGLayoutHints*)(G__getstructoffset()))->GetPadLeft());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_GetPadRight_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGLayoutHints*)(G__getstructoffset()))->GetPadRight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLayoutHints*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLayoutHints*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLayoutHints*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLayoutHints*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGLayoutHints*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLayoutHints*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLayoutHints*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLayoutHints*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLayoutHints*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutHints_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLayoutHints*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGLayoutHints_TGLayoutHints_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGLayoutHints *p;
   if(1!=libp->paran) ;
   p=new TGLayoutHints(*(TGLayoutHints*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGLayoutHints_wATGLayoutHints_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGLayoutHints *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGLayoutHints *)((G__getstructoffset())+sizeof(TGLayoutHints)*i);
   else  delete (TGLayoutHints *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGFrameElement */
// automatic default constructor
static int G__TGFrameElement_TGFrameElement_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGFrameElement *p;
   if(0!=libp->paran) ;
   if(G__getaryconstruct()) p=new TGFrameElement[G__getaryconstruct()];
   else                    p=new TGFrameElement;
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGFrameElement_TGFrameElement_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGFrameElement *p;
   if(1!=libp->paran) ;
   p=new TGFrameElement(*(TGFrameElement*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGFrameElement_wATGFrameElement_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGFrameElement *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGFrameElement *)((G__getstructoffset())+sizeof(TGFrameElement)*i);
   else  delete (TGFrameElement *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGLayoutManager */
static int G__TGLayoutManager_Layout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLayoutManager*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_GetDefaultSize_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGLayoutManager*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_DeclFileName_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLayoutManager*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_DeclFileLine_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLayoutManager*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_ImplFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLayoutManager*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_ImplFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLayoutManager*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_Class_Version_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGLayoutManager*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_Class_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLayoutManager*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_Dictionary_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLayoutManager*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_IsA_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLayoutManager*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_ShowMembers_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLayoutManager*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLayoutManager_Streamer_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLayoutManager*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGLayoutManager_wATGLayoutManager_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGLayoutManager *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGLayoutManager *)((G__getstructoffset())+sizeof(TGLayoutManager)*i);
   else  delete (TGLayoutManager *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGVerticalLayout */
static int G__TGVerticalLayout_TGVerticalLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGVerticalLayout *p=NULL;
      p = new TGVerticalLayout((TGCompositeFrame*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVerticalLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGVerticalLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGVerticalLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGVerticalLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGVerticalLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGVerticalLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGVerticalLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGVerticalLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVerticalLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGVerticalLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVerticalLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVerticalLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGVerticalLayout_TGVerticalLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGVerticalLayout *p;
   if(1!=libp->paran) ;
   p=new TGVerticalLayout(*(TGVerticalLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGVerticalLayout_wATGVerticalLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGVerticalLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGVerticalLayout *)((G__getstructoffset())+sizeof(TGVerticalLayout)*i);
   else  delete (TGVerticalLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGHorizontalLayout */
static int G__TGHorizontalLayout_TGHorizontalLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGHorizontalLayout *p=NULL;
      p = new TGHorizontalLayout((TGCompositeFrame*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontalLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGHorizontalLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHorizontalLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHorizontalLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHorizontalLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHorizontalLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGHorizontalLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHorizontalLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontalLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHorizontalLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontalLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontalLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGHorizontalLayout_TGHorizontalLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGHorizontalLayout *p;
   if(1!=libp->paran) ;
   p=new TGHorizontalLayout(*(TGHorizontalLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGHorizontalLayout_wATGHorizontalLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGHorizontalLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGHorizontalLayout *)((G__getstructoffset())+sizeof(TGHorizontalLayout)*i);
   else  delete (TGHorizontalLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGRowLayout */
static int G__TGRowLayout_TGRowLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGRowLayout *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TGRowLayout((TGCompositeFrame*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGRowLayout((TGCompositeFrame*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGRowLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGRowLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGRowLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGRowLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGRowLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGRowLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGRowLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGRowLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGRowLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGRowLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGRowLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRowLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGRowLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGRowLayout_TGRowLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGRowLayout *p;
   if(1!=libp->paran) ;
   p=new TGRowLayout(*(TGRowLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGRowLayout_wATGRowLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGRowLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGRowLayout *)((G__getstructoffset())+sizeof(TGRowLayout)*i);
   else  delete (TGRowLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGColumnLayout */
static int G__TGColumnLayout_TGColumnLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGColumnLayout *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TGColumnLayout((TGCompositeFrame*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGColumnLayout((TGCompositeFrame*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGColumnLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGColumnLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGColumnLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGColumnLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGColumnLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGColumnLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGColumnLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGColumnLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGColumnLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGColumnLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGColumnLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGColumnLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGColumnLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGColumnLayout_TGColumnLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGColumnLayout *p;
   if(1!=libp->paran) ;
   p=new TGColumnLayout(*(TGColumnLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGColumnLayout_wATGColumnLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGColumnLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGColumnLayout *)((G__getstructoffset())+sizeof(TGColumnLayout)*i);
   else  delete (TGColumnLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGMatrixLayout */
static int G__TGMatrixLayout_TGMatrixLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGMatrixLayout *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGMatrixLayout(
(TGCompositeFrame*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGMatrixLayout(
(TGCompositeFrame*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGMatrixLayout(
(TGCompositeFrame*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMatrixLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGMatrixLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMatrixLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMatrixLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMatrixLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMatrixLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGMatrixLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMatrixLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMatrixLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMatrixLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMatrixLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMatrixLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMatrixLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGMatrixLayout_TGMatrixLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGMatrixLayout *p;
   if(1!=libp->paran) ;
   p=new TGMatrixLayout(*(TGMatrixLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGMatrixLayout_wATGMatrixLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGMatrixLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGMatrixLayout *)((G__getstructoffset())+sizeof(TGMatrixLayout)*i);
   else  delete (TGMatrixLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTileLayout */
static int G__TGTileLayout_TGTileLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTileLayout *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TGTileLayout((TGCompositeFrame*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGTileLayout((TGCompositeFrame*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTileLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGTileLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTileLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTileLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTileLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTileLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTileLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTileLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTileLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTileLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTileLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTileLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTileLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTileLayout_TGTileLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTileLayout *p;
   if(1!=libp->paran) ;
   p=new TGTileLayout(*(TGTileLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTileLayout_wATGTileLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTileLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTileLayout *)((G__getstructoffset())+sizeof(TGTileLayout)*i);
   else  delete (TGTileLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGListLayout */
static int G__TGListLayout_TGListLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGListLayout *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TGListLayout((TGCompositeFrame*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGListLayout((TGCompositeFrame*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGListLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGListLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGListLayout_TGListLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGListLayout *p;
   if(1!=libp->paran) ;
   p=new TGListLayout(*(TGListLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGListLayout_wATGListLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGListLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGListLayout *)((G__getstructoffset())+sizeof(TGListLayout)*i);
   else  delete (TGListLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGListDetailsLayout */
static int G__TGListDetailsLayout_TGListDetailsLayout_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGListDetailsLayout *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TGListDetailsLayout((TGCompositeFrame*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGListDetailsLayout((TGCompositeFrame*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_Layout_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListDetailsLayout*)(G__getstructoffset()))->Layout();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_GetDefaultSize_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGListDetailsLayout*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListDetailsLayout*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListDetailsLayout*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGListDetailsLayout*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGListDetailsLayout*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGListDetailsLayout*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListDetailsLayout*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListDetailsLayout*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGListDetailsLayout*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListDetailsLayout*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGListDetailsLayout_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGListDetailsLayout*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGListDetailsLayout_TGListDetailsLayout_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGListDetailsLayout *p;
   if(1!=libp->paran) ;
   p=new TGListDetailsLayout(*(TGListDetailsLayout*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGListDetailsLayout_wATGListDetailsLayout_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGListDetailsLayout *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGListDetailsLayout *)((G__getstructoffset())+sizeof(TGListDetailsLayout)*i);
   else  delete (TGListDetailsLayout *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGString */
static int G__TGString_TGString_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGString *p=NULL;
   if(G__getaryconstruct()) p=new TGString[G__getaryconstruct()];
   else                    p=new TGString;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_TGString_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGString *p=NULL;
      p = new TGString(*((TString*)G__int(libp->para[0])));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_TGString_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGString *p=NULL;
      p = new TGString((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_TGString_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGString *p=NULL;
      p = new TGString((const TGString*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_GetLength_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGString*)(G__getstructoffset()))->GetLength());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_GetString_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGString*)(G__getstructoffset()))->GetString());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_Draw_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGString*)(G__getstructoffset()))->Draw((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_DrawWrapped_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGString*)(G__getstructoffset()))->DrawWrapped((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_GetLines_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGString*)(G__getstructoffset()))->GetLines((FontStruct_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGString*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGString*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGString*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGString*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGString*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGString*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGString*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGString*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGString*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGString_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGString*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGString_TGString_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGString *p;
   if(1!=libp->paran) ;
   p=new TGString(*(TGString*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGString);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGString_wATGString_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGString *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGString *)((G__getstructoffset())+sizeof(TGString)*i);
   else  delete (TGString *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGHotString */
static int G__TGHotString_TGHotString_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGHotString *p=NULL;
      p = new TGHotString((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGHotString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_GetHotChar_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHotString*)(G__getstructoffset()))->GetHotChar());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_Draw_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHotString*)(G__getstructoffset()))->Draw((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_DrawWrapped_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHotString*)(G__getstructoffset()))->DrawWrapped((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_DeclFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHotString*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_DeclFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHotString*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_ImplFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHotString*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_ImplFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHotString*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_Class_Version_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGHotString*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_Class_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHotString*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_Dictionary_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHotString*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_IsA_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHotString*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_ShowMembers_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHotString*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHotString_Streamer_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHotString*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGHotString_TGHotString_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGHotString *p;
   if(1!=libp->paran) ;
   p=new TGHotString(*(TGHotString*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGHotString);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGHotString_wATGHotString_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGHotString *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGHotString *)((G__getstructoffset())+sizeof(TGHotString)*i);
   else  delete (TGHotString *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGVerticalFrame */
static int G__TGVerticalFrame_TGVerticalFrame_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGVerticalFrame *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGVerticalFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGVerticalFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGVerticalFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_DeclFileName_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGVerticalFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_DeclFileLine_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGVerticalFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_ImplFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGVerticalFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_ImplFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGVerticalFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_Class_Version_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGVerticalFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_Class_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGVerticalFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_Dictionary_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVerticalFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_IsA_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGVerticalFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_ShowMembers_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVerticalFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGVerticalFrame_Streamer_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGVerticalFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGVerticalFrame_TGVerticalFrame_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGVerticalFrame *p;
   if(1!=libp->paran) ;
   p=new TGVerticalFrame(*(TGVerticalFrame*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGVerticalFrame_wATGVerticalFrame_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGVerticalFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGVerticalFrame *)((G__getstructoffset())+sizeof(TGVerticalFrame)*i);
   else  delete (TGVerticalFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGHorizontalFrame */
static int G__TGHorizontalFrame_TGHorizontalFrame_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGHorizontalFrame *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGHorizontalFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGHorizontalFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGHorizontalFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_DeclFileName_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHorizontalFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_DeclFileLine_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHorizontalFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_ImplFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGHorizontalFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_ImplFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGHorizontalFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_Class_Version_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGHorizontalFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_Class_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHorizontalFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_Dictionary_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontalFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_IsA_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGHorizontalFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_ShowMembers_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontalFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGHorizontalFrame_Streamer_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGHorizontalFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGHorizontalFrame_TGHorizontalFrame_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGHorizontalFrame *p;
   if(1!=libp->paran) ;
   p=new TGHorizontalFrame(*(TGHorizontalFrame*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGHorizontalFrame_wATGHorizontalFrame_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGHorizontalFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGHorizontalFrame *)((G__getstructoffset())+sizeof(TGHorizontalFrame)*i);
   else  delete (TGHorizontalFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGMainFrame */
static int G__TGMainFrame_TGMainFrame_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGMainFrame *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TGMainFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGMainFrame(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_HandleKey_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMainFrame*)(G__getstructoffset()))->HandleKey((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_HandleClientMessage_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMainFrame*)(G__getstructoffset()))->HandleClientMessage((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_CloseWindow_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->CloseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_SetWindowName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->SetWindowName((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_SetIconName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->SetIconName((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_SetClassHints_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->SetClassHints((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_SetMWMHints_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->SetMWMHints((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_SetWMPosition_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->SetWMPosition((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_SetWMSize_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->SetWMSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_SetWMSizeHints_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->SetWMSizeHints((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_SetWMState_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->SetWMState((EInitialState)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_BindKey_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMainFrame*)(G__getstructoffset()))->BindKey((const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_RemoveBind_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->RemoveBind((const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_DeclFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMainFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_DeclFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMainFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_ImplFileName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMainFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_ImplFileLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMainFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_Class_Version_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGMainFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_Class_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMainFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_Dictionary_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_IsA_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMainFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_ShowMembers_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMainFrame_Streamer_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMainFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGMainFrame_TGMainFrame_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGMainFrame *p;
   if(1!=libp->paran) ;
   p=new TGMainFrame(*(TGMainFrame*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGMainFrame_wATGMainFrame_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGMainFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGMainFrame *)((G__getstructoffset())+sizeof(TGMainFrame)*i);
   else  delete (TGMainFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTransientFrame */
static int G__TGTransientFrame_TGTransientFrame_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTransientFrame *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGTransientFrame(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTransientFrame(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_GetMain_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTransientFrame*)(G__getstructoffset()))->GetMain());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_CloseWindow_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTransientFrame*)(G__getstructoffset()))->CloseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTransientFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTransientFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTransientFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTransientFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTransientFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTransientFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTransientFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTransientFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTransientFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTransientFrame_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTransientFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTransientFrame_TGTransientFrame_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTransientFrame *p;
   if(1!=libp->paran) ;
   p=new TGTransientFrame(*(TGTransientFrame*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTransientFrame_wATGTransientFrame_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTransientFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTransientFrame *)((G__getstructoffset())+sizeof(TGTransientFrame)*i);
   else  delete (TGTransientFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGGroupFrame */
static int G__TGGroupFrame_TGGroupFrame_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGGroupFrame *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGGroupFrame(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGGroupFrame(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGGroupFrame(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGGroupFrame(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGGroupFrame((const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_TGGroupFrame_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGGroupFrame *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGGroupFrame(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGGroupFrame(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGGroupFrame(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGGroupFrame(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGGroupFrame((const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_DrawBorder_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGGroupFrame*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGGroupFrame*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGGroupFrame*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGGroupFrame*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGGroupFrame*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGGroupFrame*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGGroupFrame*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGGroupFrame*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGGroupFrame*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGGroupFrame*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGGroupFrame_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGGroupFrame*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGGroupFrame_TGGroupFrame_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGGroupFrame *p;
   if(1!=libp->paran) ;
   p=new TGGroupFrame(*(TGGroupFrame*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGGroupFrame_wATGGroupFrame_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGGroupFrame *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGGroupFrame *)((G__getstructoffset())+sizeof(TGGroupFrame)*i);
   else  delete (TGGroupFrame *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGWidget */
static int G__TGWidget_TGWidget_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGWidget *p=NULL;
   if(G__getaryconstruct()) p=new TGWidget[G__getaryconstruct()];
   else                    p=new TGWidget;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGWidget);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_TGWidget_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGWidget *p=NULL;
      p = new TGWidget((Int_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGWidget);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_WidgetId_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGWidget*)(G__getstructoffset()))->WidgetId());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_IsEnabled_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGWidget*)(G__getstructoffset()))->IsEnabled());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_HasFocus_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGWidget*)(G__getstructoffset()))->HasFocus());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_WantFocus_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGWidget*)(G__getstructoffset()))->WantFocus());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_Associate_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWidget*)(G__getstructoffset()))->Associate((const TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_SetCommand_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWidget*)(G__getstructoffset()))->SetCommand((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_GetCommand_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGWidget*)(G__getstructoffset()))->GetCommand());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGWidget*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGWidget*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGWidget*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGWidget*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGWidget*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGWidget*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWidget*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGWidget*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWidget*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGWidget_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGWidget*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGWidget_TGWidget_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGWidget *p;
   if(1!=libp->paran) ;
   p=new TGWidget(*(TGWidget*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGWidget);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGWidget_wATGWidget_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGWidget *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGWidget *)((G__getstructoffset())+sizeof(TGWidget)*i);
   else  delete (TGWidget *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGIcon */
static int G__TGIcon_TGIcon_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGIcon *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGIcon(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGIcon(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGIcon(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGIcon);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_GetPicture_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGIcon*)(G__getstructoffset()))->GetPicture());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_SetPicture_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGIcon*)(G__getstructoffset()))->SetPicture((const TGPicture*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_GetDefaultSize_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGIcon*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGIcon*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGIcon*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGIcon*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGIcon*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGIcon*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGIcon*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGIcon*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGIcon*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGIcon*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGIcon_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGIcon*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGIcon_TGIcon_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGIcon *p;
   if(1!=libp->paran) ;
   p=new TGIcon(*(TGIcon*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGIcon);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGIcon_wATGIcon_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGIcon *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGIcon *)((G__getstructoffset())+sizeof(TGIcon)*i);
   else  delete (TGIcon *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGLabel */
static int G__TGLabel_TGLabel_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGLabel *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGLabel(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(FontStruct_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGLabel(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(FontStruct_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGLabel(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(FontStruct_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGLabel(
(const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGLabel((const TGWindow*)G__int(libp->para[0]),(TGString*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGLabel);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_TGLabel_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGLabel *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGLabel(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(FontStruct_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGLabel(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(FontStruct_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGLabel(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(FontStruct_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGLabel(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGLabel((const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGLabel);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_GetDefaultSize_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGLabel*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_GetText_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLabel*)(G__getstructoffset()))->GetText());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_SetText_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLabel*)(G__getstructoffset()))->SetText((TGString*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_SetTextJustify_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLabel*)(G__getstructoffset()))->SetTextJustify((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLabel*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLabel*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGLabel*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLabel*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGLabel*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLabel*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLabel*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLabel*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLabel*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLabel_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLabel*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGLabel_TGLabel_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGLabel *p;
   if(1!=libp->paran) ;
   p=new TGLabel(*(TGLabel*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGLabel);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGLabel_wATGLabel_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGLabel *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGLabel *)((G__getstructoffset())+sizeof(TGLabel)*i);
   else  delete (TGLabel *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGButton */
static int G__TGButton_TGButton_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGButton *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TGButton(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGButton(
(const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGButton((const TGWindow*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_HandleButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGButton*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_HandleCrossing_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGButton*)(G__getstructoffset()))->HandleCrossing((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_SetUserData_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGButton*)(G__getstructoffset()))->SetUserData((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_GetUserData_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TGButton*)(G__getstructoffset()))->GetUserData());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_SetToolTipText_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGButton*)(G__getstructoffset()))->SetToolTipText((const char*)G__int(libp->para[0]),(Long_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGButton*)(G__getstructoffset()))->SetToolTipText((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_SetState_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGButton*)(G__getstructoffset()))->SetState((EButtonState)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_GetState_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGButton*)(G__getstructoffset()))->GetState());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_AllowStayDown_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGButton*)(G__getstructoffset()))->AllowStayDown((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGButton*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGButton*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGButton*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGButton*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGButton*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGButton*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGButton*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGButton*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGButton*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGButton_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGButton*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGButton_TGButton_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGButton *p;
   if(1!=libp->paran) ;
   p=new TGButton(*(TGButton*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGButton);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGButton_wATGButton_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGButton *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGButton *)((G__getstructoffset())+sizeof(TGButton)*i);
   else  delete (TGButton *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTextButton */
static int G__TGTextButton_TGTextButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextButton *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGTextButton((const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_TGTextButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextButton *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGTextButton((const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_TGTextButton_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextButton *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGTextButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_GetDefaultSize_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGTextButton*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_HandleKey_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextButton*)(G__getstructoffset()))->HandleKey((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_GetText_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextButton*)(G__getstructoffset()))->GetText());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_SetTextJustify_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextButton*)(G__getstructoffset()))->SetTextJustify((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_SetText_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextButton*)(G__getstructoffset()))->SetText((TGHotString*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextButton*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextButton*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextButton*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextButton*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTextButton*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextButton*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextButton*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextButton*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextButton*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextButton_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextButton*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTextButton_TGTextButton_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTextButton *p;
   if(1!=libp->paran) ;
   p=new TGTextButton(*(TGTextButton*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTextButton_wATGTextButton_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTextButton *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTextButton *)((G__getstructoffset())+sizeof(TGTextButton)*i);
   else  delete (TGTextButton *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGPictureButton */
static int G__TGPictureButton_TGPictureButton_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGPictureButton *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TGPictureButton(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGPictureButton(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGPictureButton(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGPictureButton((const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_TGPictureButton_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGPictureButton *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGPictureButton(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGPictureButton(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGPictureButton(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGPictureButton(
(const TGWindow*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_SetPicture_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPictureButton*)(G__getstructoffset()))->SetPicture((const TGPicture*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPictureButton*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPictureButton*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPictureButton*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPictureButton*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGPictureButton*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPictureButton*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPictureButton*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPictureButton*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPictureButton*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPictureButton_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPictureButton*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGPictureButton_TGPictureButton_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGPictureButton *p;
   if(1!=libp->paran) ;
   p=new TGPictureButton(*(TGPictureButton*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGPictureButton_wATGPictureButton_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGPictureButton *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGPictureButton *)((G__getstructoffset())+sizeof(TGPictureButton)*i);
   else  delete (TGPictureButton *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGCheckButton */
static int G__TGCheckButton_TGCheckButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGCheckButton *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGCheckButton((const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_TGCheckButton_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGCheckButton *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGCheckButton((const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_TGCheckButton_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGCheckButton *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGCheckButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_GetDefaultSize_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGCheckButton*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_HandleButton_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCheckButton*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_HandleKey_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCheckButton*)(G__getstructoffset()))->HandleKey((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_HandleCrossing_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGCheckButton*)(G__getstructoffset()))->HandleCrossing((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_SetState_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCheckButton*)(G__getstructoffset()))->SetState((EButtonState)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGCheckButton*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGCheckButton*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGCheckButton*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGCheckButton*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGCheckButton*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCheckButton*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCheckButton*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGCheckButton*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCheckButton*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGCheckButton_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGCheckButton*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGCheckButton_TGCheckButton_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGCheckButton *p;
   if(1!=libp->paran) ;
   p=new TGCheckButton(*(TGCheckButton*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGCheckButton_wATGCheckButton_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGCheckButton *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGCheckButton *)((G__getstructoffset())+sizeof(TGCheckButton)*i);
   else  delete (TGCheckButton *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGRadioButton */
static int G__TGRadioButton_TGRadioButton_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGRadioButton *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGRadioButton((const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_TGRadioButton_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGRadioButton *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGRadioButton((const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_TGRadioButton_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGRadioButton *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]),(FontStruct_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(GContext_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGRadioButton(
(const TGWindow*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_GetDefaultSize_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TGDimension *pobj,xobj=((TGRadioButton*)(G__getstructoffset()))->GetDefaultSize();
        pobj=new TGDimension(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_HandleButton_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGRadioButton*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_HandleKey_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGRadioButton*)(G__getstructoffset()))->HandleKey((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_HandleCrossing_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGRadioButton*)(G__getstructoffset()))->HandleCrossing((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_SetState_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGRadioButton*)(G__getstructoffset()))->SetState((EButtonState)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGRadioButton*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGRadioButton*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGRadioButton*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGRadioButton*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGRadioButton*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGRadioButton*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGRadioButton*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGRadioButton*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGRadioButton*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGRadioButton_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGRadioButton*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGRadioButton_TGRadioButton_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGRadioButton *p;
   if(1!=libp->paran) ;
   p=new TGRadioButton(*(TGRadioButton*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGRadioButton_wATGRadioButton_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGRadioButton *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGRadioButton *)((G__getstructoffset())+sizeof(TGRadioButton)*i);
   else  delete (TGRadioButton *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTextBuffer */
static int G__TGTextBuffer_TGTextBuffer_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextBuffer *p=NULL;
   if(G__getaryconstruct()) p=new TGTextBuffer[G__getaryconstruct()];
   else                    p=new TGTextBuffer;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_TGTextBuffer_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextBuffer *p=NULL;
      p = new TGTextBuffer((Int_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_GetTextLength_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGTextBuffer*)(G__getstructoffset()))->GetTextLength());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_GetBufferLength_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TGTextBuffer*)(G__getstructoffset()))->GetBufferLength());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_GetString_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextBuffer*)(G__getstructoffset()))->GetString());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_AddText_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextBuffer*)(G__getstructoffset()))->AddText((Int_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_AddText_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextBuffer*)(G__getstructoffset()))->AddText((Int_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_RemoveText_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextBuffer*)(G__getstructoffset()))->RemoveText((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_Clear_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextBuffer*)(G__getstructoffset()))->Clear();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextBuffer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextBuffer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextBuffer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextBuffer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTextBuffer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextBuffer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextBuffer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextBuffer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextBuffer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextBuffer_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextBuffer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTextBuffer_TGTextBuffer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTextBuffer *p;
   if(1!=libp->paran) ;
   p=new TGTextBuffer(*(TGTextBuffer*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTextBuffer_wATGTextBuffer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTextBuffer *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTextBuffer *)((G__getstructoffset())+sizeof(TGTextBuffer)*i);
   else  delete (TGTextBuffer *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTextEntry */
static int G__TGTextEntry_TGTextEntry_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTextEntry *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TGTextEntry(
(const TGWindow*)G__int(libp->para[0]),(TGTextBuffer*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(ULong_t)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGTextEntry(
(const TGWindow*)G__int(libp->para[0]),(TGTextBuffer*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGTextEntry(
(const TGWindow*)G__int(libp->para[0]),(TGTextBuffer*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGTextEntry(
(const TGWindow*)G__int(libp->para[0]),(TGTextBuffer*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGTextEntry(
(const TGWindow*)G__int(libp->para[0]),(TGTextBuffer*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGTextEntry((const TGWindow*)G__int(libp->para[0]),(TGTextBuffer*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_GetBuffer_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextEntry*)(G__getstructoffset()))->GetBuffer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_HandleButton_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextEntry*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_HandleDoubleClick_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextEntry*)(G__getstructoffset()))->HandleDoubleClick((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_HandleMotion_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextEntry*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_HandleKey_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextEntry*)(G__getstructoffset()))->HandleKey((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_HandleFocusChange_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextEntry*)(G__getstructoffset()))->HandleFocusChange((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_HandleSelection_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextEntry*)(G__getstructoffset()))->HandleSelection((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_HandleTimer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGTextEntry*)(G__getstructoffset()))->HandleTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_DrawBorder_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextEntry*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_SetState_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextEntry*)(G__getstructoffset()))->SetState((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_DeclFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextEntry*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_DeclFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextEntry*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_ImplFileName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTextEntry*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_ImplFileLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTextEntry*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_Class_Version_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTextEntry*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_Class_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextEntry*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_Dictionary_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextEntry*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_IsA_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTextEntry*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_ShowMembers_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextEntry*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTextEntry_Streamer_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTextEntry*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTextEntry_TGTextEntry_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTextEntry *p;
   if(1!=libp->paran) ;
   p=new TGTextEntry(*(TGTextEntry*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTextEntry_wATGTextEntry_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTextEntry *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTextEntry *)((G__getstructoffset())+sizeof(TGTextEntry)*i);
   else  delete (TGTextEntry *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGMsgBox */
static int G__TGMsgBox_TGMsgBox_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGMsgBox *p=NULL;
   switch(libp->paran) {
   case 8:
      p = new TGMsgBox(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const TGPicture*)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t*)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7]));
      break;
   case 7:
      p = new TGMsgBox(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const TGPicture*)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t*)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGMsgBox(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const TGPicture*)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGMsgBox(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const TGPicture*)G__int(libp->para[4]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_TGMsgBox_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGMsgBox *p=NULL;
   switch(libp->paran) {
   case 8:
      p = new TGMsgBox(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(EMsgBoxIcon)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t*)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7]));
      break;
   case 7:
      p = new TGMsgBox(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(EMsgBoxIcon)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t*)G__int(libp->para[6]));
      break;
   case 6:
      p = new TGMsgBox(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(EMsgBoxIcon)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGMsgBox(
(const TGWindow*)G__int(libp->para[0]),(const TGWindow*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(EMsgBoxIcon)G__int(libp->para[4]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_CloseWindow_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMsgBox*)(G__getstructoffset()))->CloseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_ProcessMessage_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMsgBox*)(G__getstructoffset()))->ProcessMessage((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMsgBox*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMsgBox*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMsgBox*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMsgBox*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGMsgBox*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMsgBox*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMsgBox*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMsgBox*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMsgBox*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMsgBox_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMsgBox*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGMsgBox_TGMsgBox_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGMsgBox *p;
   if(1!=libp->paran) ;
   p=new TGMsgBox(*(TGMsgBox*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGMsgBox_wATGMsgBox_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGMsgBox *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGMsgBox *)((G__getstructoffset())+sizeof(TGMsgBox)*i);
   else  delete (TGMsgBox *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGPopupMenu */
static int G__TGPopupMenu_TGPopupMenu_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGPopupMenu *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TGPopupMenu(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGPopupMenu(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TGPopupMenu((const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGPopupMenu((const TGWindow*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_Activate_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->Activate((TGMenuEntry*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_AddEntry_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddEntry((TGHotString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(void*)G__int(libp->para[2]),(const TGPicture*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddEntry((TGHotString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(void*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddEntry((TGHotString*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_AddEntry_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddEntry((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(void*)G__int(libp->para[2]),(const TGPicture*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddEntry((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(void*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddEntry((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_AddSeparator_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddSeparator();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_AddLabel_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddLabel((TGHotString*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddLabel((TGHotString*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_AddLabel_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddLabel((const char*)G__int(libp->para[0]),(const TGPicture*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddLabel((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_AddPopup_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddPopup((TGHotString*)G__int(libp->para[0]),(TGPopupMenu*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_AddPopup_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->AddPopup((const char*)G__int(libp->para[0]),(TGPopupMenu*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_EnableEntry_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->EnableEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_DisableEntry_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->DisableEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_IsEntryEnabled_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGPopupMenu*)(G__getstructoffset()))->IsEntryEnabled((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_DefaultEntry_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->DefaultEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_CheckEntry_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->CheckEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_UnCheckEntry_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->UnCheckEntry((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_IsEntryChecked_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGPopupMenu*)(G__getstructoffset()))->IsEntryChecked((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_RCheckEntry_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->RCheckEntry((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_IsEntryRChecked_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGPopupMenu*)(G__getstructoffset()))->IsEntryRChecked((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_PlaceMenu_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->PlaceMenu((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_EndMenu_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPopupMenu*)(G__getstructoffset()))->EndMenu(*(void**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_DrawBorder_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->DrawBorder();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_HandleButton_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGPopupMenu*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_HandleMotion_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGPopupMenu*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_HandleCrossing_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGPopupMenu*)(G__getstructoffset()))->HandleCrossing((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_HandleTimer_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGPopupMenu*)(G__getstructoffset()))->HandleTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_Associate_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->Associate((const TGWindow*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_DeclFileName_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPopupMenu*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_DeclFileLine_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPopupMenu*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_ImplFileName_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGPopupMenu*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_ImplFileLine_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGPopupMenu*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_Class_Version_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGPopupMenu*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_Class_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPopupMenu*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_Dictionary_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_IsA_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGPopupMenu*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_ShowMembers_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGPopupMenu_Streamer_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGPopupMenu*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGPopupMenu_TGPopupMenu_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGPopupMenu *p;
   if(1!=libp->paran) ;
   p=new TGPopupMenu(*(TGPopupMenu*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGPopupMenu_wATGPopupMenu_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGPopupMenu *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGPopupMenu *)((G__getstructoffset())+sizeof(TGPopupMenu)*i);
   else  delete (TGPopupMenu *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGMenuTitle */
static int G__TGMenuTitle_TGMenuTitle_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGMenuTitle *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TGMenuTitle(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(TGPopupMenu*)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TGMenuTitle(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(TGPopupMenu*)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3])
,(FontStruct_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TGMenuTitle(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(TGPopupMenu*)G__int(libp->para[2]),(GContext_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGMenuTitle(
(const TGWindow*)G__int(libp->para[0]),(TGHotString*)G__int(libp->para[1])
,(TGPopupMenu*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_SetState_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuTitle*)(G__getstructoffset()))->SetState((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_DoSendMessage_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuTitle*)(G__getstructoffset()))->DoSendMessage();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_GetState_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMenuTitle*)(G__getstructoffset()))->GetState());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_GetHotKeyCode_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMenuTitle*)(G__getstructoffset()))->GetHotKeyCode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMenuTitle*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMenuTitle*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMenuTitle*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMenuTitle*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGMenuTitle*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMenuTitle*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuTitle*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMenuTitle*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuTitle*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuTitle_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuTitle*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGMenuTitle_TGMenuTitle_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGMenuTitle *p;
   if(1!=libp->paran) ;
   p=new TGMenuTitle(*(TGMenuTitle*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGMenuTitle_wATGMenuTitle_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGMenuTitle *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGMenuTitle *)((G__getstructoffset())+sizeof(TGMenuTitle)*i);
   else  delete (TGMenuTitle *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGMenuBar */
static int G__TGMenuBar_TGMenuBar_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGMenuBar *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TGMenuBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TGMenuBar(
(const TGWindow*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_AddPopup_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuBar*)(G__getstructoffset()))->AddPopup((TGHotString*)G__int(libp->para[0]),(TGPopupMenu*)G__int(libp->para[1])
,(TGLayoutHints*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_AddPopup_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuBar*)(G__getstructoffset()))->AddPopup((const char*)G__int(libp->para[0]),(TGPopupMenu*)G__int(libp->para[1])
,(TGLayoutHints*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_HandleButton_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMenuBar*)(G__getstructoffset()))->HandleButton((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_HandleMotion_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMenuBar*)(G__getstructoffset()))->HandleMotion((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_HandleKey_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGMenuBar*)(G__getstructoffset()))->HandleKey((Event_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMenuBar*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMenuBar*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGMenuBar*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGMenuBar*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGMenuBar*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMenuBar*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuBar*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGMenuBar*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuBar*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGMenuBar_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGMenuBar*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGMenuBar_TGMenuBar_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGMenuBar *p;
   if(1!=libp->paran) ;
   p=new TGMenuBar(*(TGMenuBar*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGMenuBar_wATGMenuBar_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGMenuBar *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGMenuBar *)((G__getstructoffset())+sizeof(TGMenuBar)*i);
   else  delete (TGMenuBar *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */
static int G___MK_MSG_6_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)MK_MSG((EWidgetMessageTypes)G__int(libp->para[0]),(EWidgetMessageTypes)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___GET_MSG_7_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)GET_MSG((Long_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___GET_SUBMSG_8_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)GET_SUBMSG((Long_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}


/*********************************************************
* Member function Stub
*********************************************************/

/* TGClient */

/* TGObject */

/* TGWindow */

/* TGPicturePool */

/* TGPicture */

/* TGSelectedPicture */

/* TGDimension */

/* TGPosition */

/* TGFrame */

/* TGCompositeFrame */

/* TGLayoutHints */

/* TGFrameElement */

/* TGLayoutManager */

/* TGVerticalLayout */

/* TGHorizontalLayout */

/* TGRowLayout */

/* TGColumnLayout */

/* TGMatrixLayout */

/* TGTileLayout */

/* TGListLayout */

/* TGListDetailsLayout */

/* TGString */

/* TGHotString */

/* TGVerticalFrame */

/* TGHorizontalFrame */

/* TGMainFrame */

/* TGTransientFrame */

/* TGGroupFrame */

/* TGWidget */

/* TGIcon */

/* TGLabel */

/* TGButton */

/* TGTextButton */

/* TGPictureButton */

/* TGCheckButton */

/* TGRadioButton */

/* TGTextBuffer */

/* TGTextEntry */

/* TGMsgBox */

/* TGPopupMenu */

/* TGMenuTitle */

/* TGMenuBar */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Gui1 {
 public:
  G__Sizep2memfuncG__Gui1() {p=&G__Sizep2memfuncG__Gui1::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Gui1::*p)();
};

size_t G__get_sizep2memfuncG__Gui1()
{
  G__Sizep2memfuncG__Gui1 a;
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
extern "C" void G__cpp_setup_inheritanceG__Gui1() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGClient))) {
     TGClient *G__Lderived;
     G__Lderived=(TGClient*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGClient),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGObject))) {
     TGObject *G__Lderived;
     G__Lderived=(TGObject*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGObject),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGWindow))) {
     TGWindow *G__Lderived;
     G__Lderived=(TGWindow*)0x1000;
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool))) {
     TGPicturePool *G__Lderived;
     G__Lderived=(TGPicturePool*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGPicture))) {
     TGPicture *G__Lderived;
     G__Lderived=(TGPicture*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TRefCnt *G__Lpbase=(TRefCnt*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),G__get_linked_tagnum(&G__G__Gui1LN_TRefCnt),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture))) {
     TGSelectedPicture *G__Lderived;
     G__Lderived=(TGSelectedPicture*)0x1000;
     {
       TGPicture *G__Lpbase=(TGPicture*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture),G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TRefCnt *G__Lpbase=(TRefCnt*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture),G__get_linked_tagnum(&G__G__Gui1LN_TRefCnt),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGFrame))) {
     TGFrame *G__Lderived;
     G__Lderived=(TGFrame*)0x1000;
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame))) {
     TGCompositeFrame *G__Lderived;
     G__Lderived=(TGCompositeFrame*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints))) {
     TGLayoutHints *G__Lderived;
     G__Lderived=(TGLayoutHints*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement))) {
     TGFrameElement *G__Lderived;
     G__Lderived=(TGFrameElement*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager))) {
     TGLayoutManager *G__Lderived;
     G__Lderived=(TGLayoutManager*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout))) {
     TGVerticalLayout *G__Lderived;
     G__Lderived=(TGVerticalLayout*)0x1000;
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout))) {
     TGHorizontalLayout *G__Lderived;
     G__Lderived=(TGHorizontalLayout*)0x1000;
     {
       TGVerticalLayout *G__Lpbase=(TGVerticalLayout*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout))) {
     TGRowLayout *G__Lderived;
     G__Lderived=(TGRowLayout*)0x1000;
     {
       TGVerticalLayout *G__Lpbase=(TGVerticalLayout*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout))) {
     TGColumnLayout *G__Lderived;
     G__Lderived=(TGColumnLayout*)0x1000;
     {
       TGRowLayout *G__Lpbase=(TGRowLayout*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGVerticalLayout *G__Lpbase=(TGVerticalLayout*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout))) {
     TGMatrixLayout *G__Lderived;
     G__Lderived=(TGMatrixLayout*)0x1000;
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout))) {
     TGTileLayout *G__Lderived;
     G__Lderived=(TGTileLayout*)0x1000;
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout))) {
     TGListLayout *G__Lderived;
     G__Lderived=(TGListLayout*)0x1000;
     {
       TGTileLayout *G__Lpbase=(TGTileLayout*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout))) {
     TGListDetailsLayout *G__Lderived;
     G__Lderived=(TGListDetailsLayout*)0x1000;
     {
       TGTileLayout *G__Lpbase=(TGTileLayout*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGLayoutManager *G__Lpbase=(TGLayoutManager*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGHotString))) {
     TGHotString *G__Lderived;
     G__Lderived=(TGHotString*)0x1000;
     {
       TGString *G__Lpbase=(TGString*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),G__get_linked_tagnum(&G__G__Gui1LN_TGString),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame))) {
     TGVerticalFrame *G__Lderived;
     G__Lderived=(TGVerticalFrame*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame))) {
     TGHorizontalFrame *G__Lderived;
     G__Lderived=(TGHorizontalFrame*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame))) {
     TGMainFrame *G__Lderived;
     G__Lderived=(TGMainFrame*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame))) {
     TGTransientFrame *G__Lderived;
     G__Lderived=(TGTransientFrame*)0x1000;
     {
       TGMainFrame *G__Lpbase=(TGMainFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame))) {
     TGGroupFrame *G__Lderived;
     G__Lderived=(TGGroupFrame*)0x1000;
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGIcon))) {
     TGIcon *G__Lderived;
     G__Lderived=(TGIcon*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGIcon),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGIcon),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGIcon),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGIcon),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGLabel))) {
     TGLabel *G__Lderived;
     G__Lderived=(TGLabel*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLabel),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLabel),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLabel),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLabel),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGButton))) {
     TGButton *G__Lderived;
     G__Lderived=(TGButton*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGButton),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGButton),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGButton),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton))) {
     TGTextButton *G__Lderived;
     G__Lderived=(TGTextButton*)0x1000;
     {
       TGButton *G__Lpbase=(TGButton*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),G__get_linked_tagnum(&G__G__Gui1LN_TGButton),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton))) {
     TGPictureButton *G__Lderived;
     G__Lderived=(TGPictureButton*)0x1000;
     {
       TGButton *G__Lpbase=(TGButton*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),G__get_linked_tagnum(&G__G__Gui1LN_TGButton),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton))) {
     TGCheckButton *G__Lderived;
     G__Lderived=(TGCheckButton*)0x1000;
     {
       TGButton *G__Lpbase=(TGButton*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),G__get_linked_tagnum(&G__G__Gui1LN_TGButton),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton))) {
     TGRadioButton *G__Lderived;
     G__Lderived=(TGRadioButton*)0x1000;
     {
       TGButton *G__Lpbase=(TGButton*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),G__get_linked_tagnum(&G__G__Gui1LN_TGButton),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry))) {
     TGTextEntry *G__Lderived;
     G__Lderived=(TGTextEntry*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWidget *G__Lpbase=(TGWidget*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry),G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox))) {
     TGMsgBox *G__Lderived;
     G__Lderived=(TGMsgBox*)0x1000;
     {
       TGTransientFrame *G__Lpbase=(TGTransientFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGMainFrame *G__Lpbase=(TGMainFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu))) {
     TGPopupMenu *G__Lderived;
     G__Lderived=(TGPopupMenu*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle))) {
     TGMenuTitle *G__Lderived;
     G__Lderived=(TGMenuTitle*)0x1000;
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar))) {
     TGMenuBar *G__Lderived;
     G__Lderived=(TGMenuBar*)0x1000;
     {
       TGHorizontalFrame *G__Lpbase=(TGHorizontalFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TGCompositeFrame *G__Lpbase=(TGCompositeFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGFrame *G__Lpbase=(TGFrame*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGWindow *G__Lpbase=(TGWindow*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TGObject *G__Lpbase=(TGObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),G__get_linked_tagnum(&G__G__Gui1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Gui1() {

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

   /* TGClient */
static void G__setup_memvarTGClient(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGClient));
   { TGClient *p; p=(TGClient*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fBackColor=",0,"default background color");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fForeColor=",0,"default foreground color");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fHilite=",0,"default hilite color");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fShadow=",0,"default shadow color");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fSelBackColor=",0,"default selection background color");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fSelForeColor=",0,"default selection foreground color");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fWhite=",0,"white color index");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fBlack=",0,"black color index");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,-1,2,"fRoot=",0,"root (base) window");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fXfd=",0,"file descriptor of connection to server");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool),-1,-1,2,"fPicturePool=",0,"pixmap cache");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGMimeTypes),-1,-1,2,"fMimeTypeList=",0,"mimetype list");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fGlobalNeedRedraw=",0,"true if at least one window needs to be redrawn");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_THashList),-1,-1,2,"fWlist=",0,"list of frames");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Gui1LN_EGEventType),-1,-1,2,"fWaitForEvent=",0,"event to wait for");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Window_t"),-1,2,"fWaitForWindow=",0,"window in which to wait for event");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGObject */
static void G__setup_memvarTGObject(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGObject));
   { TGObject *p; p=(TGObject*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Handle_t"),-1,2,"fId=",0,"X11/Win32 Window identifier");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGClient),-1,-1,2,"fClient=",0,"Connection to display server");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGWindow */
static void G__setup_memvarTGWindow(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGWindow));
   { TGWindow *p; p=(TGWindow*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,-1,2,"fParent=",0,"Parent window");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fNeedRedraw=",0,"kTRUE if window needs to be redrawn");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGPicturePool */
static void G__setup_memvarTGPicturePool(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool));
   { TGPicturePool *p; p=(TGPicturePool*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGClient),-1,-1,2,"fClient=",0,"client for which we keep icon pool");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TString),-1,-1,2,"fPath=",0,"icon search path");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_THashTable),-1,-1,2,"fPicList=",0,"hash table containing the icons");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Colormap_t"),-2,2,"fgDefaultColormap=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGPicture */
static void G__setup_memvarTGPicture(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicture));
   { TGPicture *p; p=(TGPicture*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TString),-1,-1,2,"fName=",0,"name of picture");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fScaled=",0,"kTRUE if picture is scaled");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-1,2,"fPic=",0,"picture pixmap");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-1,2,"fMask=",0,"picture mask pixmap");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Gui1LN_PictureAttributes_t),-1,-1,2,"fAttributes=",0,"picture attributes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGSelectedPicture */
static void G__setup_memvarTGSelectedPicture(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture));
   { TGSelectedPicture *p; p=(TGSelectedPicture*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGClient),-1,-1,2,"fClient=",0,"client to which selected picture belongs");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgSelectedGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGDimension */
static void G__setup_memvarTGDimension(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGDimension));
   { TGDimension *p; p=(TGDimension*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->fWidth)-(long)(p)),104,0,0,-1,G__defined_typename("UInt_t"),-1,1,"fWidth=",0,"width");
   G__memvar_setup((void*)((long)(&p->fHeight)-(long)(p)),104,0,0,-1,G__defined_typename("UInt_t"),-1,1,"fHeight=",0,"height");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGPosition */
static void G__setup_memvarTGPosition(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPosition));
   { TGPosition *p; p=(TGPosition*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->fX)-(long)(p)),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"fX=",0,"x position");
   G__memvar_setup((void*)((long)(&p->fY)-(long)(p)),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"fY=",0,"y position");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* ELayoutHints */

   /* TGFrame */
static void G__setup_memvarTGFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrame));
   { TGFrame *p; p=(TGFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fX=",0,"frame x position");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fY=",0,"frame y position");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fWidth=",0,"frame width");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fHeight=",0,"frame height");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fBorderWidth=",0,"frame border width");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fOptions=",0,"frame options");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fBackground=",0,"frame background color");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,2,"fgDefaultFrameBackground=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,2,"fgDefaultSelectedBackground=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,2,"fgWhitePixel=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,2,"fgBlackPixel=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgBlackGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgWhiteGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgHilightGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgShadowGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgBckgndGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Time_t"),-2,2,"fgLastClick=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-2,2,"fgLastButton=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-2,2,"fgDbx=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-2,2,"fgDby=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Window_t"),-2,2,"fgDbw=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGCompositeFrame */
static void G__setup_memvarTGCompositeFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame));
   { TGCompositeFrame *p; p=(TGCompositeFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),-1,-1,4,"fLayoutManager=",0,"layout manager");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,-1,2,"fList=",0,"container of frame elements");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGLayoutHints */
static void G__setup_memvarTGLayoutHints(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints));
   { TGLayoutHints *p; p=(TGLayoutHints*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,2,"fLayoutHints=",0,"layout hints (combination of ELayoutHints)");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fPadtop=",0,"amount of top padding");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fPadbottom=",0,"amount of bottom padding");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fPadleft=",0,"amount of left padding");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fPadright=",0,"amount of right padding");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGFrameElement */
static void G__setup_memvarTGFrameElement(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement));
   { TGFrameElement *p; p=(TGFrameElement*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->fFrame)-(long)(p)),85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),-1,-1,1,"fFrame=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fState)-(long)(p)),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"fState=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fLayout)-(long)(p)),85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),-1,-1,1,"fLayout=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGLayoutManager */
static void G__setup_memvarTGLayoutManager(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager));
   { TGLayoutManager *p; p=(TGLayoutManager*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGVerticalLayout */
static void G__setup_memvarTGVerticalLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout));
   { TGVerticalLayout *p; p=(TGVerticalLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),-1,-1,2,"fMain=",0,"container frame");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,-1,2,"fList=",0,"list of frames to arrange");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGHorizontalLayout */
static void G__setup_memvarTGHorizontalLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout));
   { TGHorizontalLayout *p; p=(TGHorizontalLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGRowLayout */
static void G__setup_memvarTGRowLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout));
   { TGRowLayout *p; p=(TGRowLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->fSep)-(long)(p)),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"fSep=",0,"interval between frames");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGColumnLayout */
static void G__setup_memvarTGColumnLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout));
   { TGColumnLayout *p; p=(TGColumnLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGMatrixLayout */
static void G__setup_memvarTGMatrixLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout));
   { TGMatrixLayout *p; p=(TGMatrixLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),-1,-1,2,"fMain=",0,"container frame");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,-1,2,"fList=",0,"list of frames to arrange");
   G__memvar_setup((void*)((long)(&p->fSep)-(long)(p)),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"fSep=",0,"interval between frames");
   G__memvar_setup((void*)((long)(&p->fHints)-(long)(p)),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"fHints=",0,"layout hints");
   G__memvar_setup((void*)((long)(&p->fRows)-(long)(p)),104,0,0,-1,G__defined_typename("UInt_t"),-1,1,"fRows=",0,"number of rows");
   G__memvar_setup((void*)((long)(&p->fColumns)-(long)(p)),104,0,0,-1,G__defined_typename("UInt_t"),-1,1,"fColumns=",0,"number of columns");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTileLayout */
static void G__setup_memvarTGTileLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout));
   { TGTileLayout *p; p=(TGTileLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSep=",0,"separation between tiles");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),-1,-1,2,"fMain=",0,"container frame");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,-1,2,"fList=",0,"list of frames to arrange");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGListLayout */
static void G__setup_memvarTGListLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout));
   { TGListLayout *p; p=(TGListLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGListDetailsLayout */
static void G__setup_memvarTGListDetailsLayout(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout));
   { TGListDetailsLayout *p; p=(TGListDetailsLayout*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGString */
static void G__setup_memvarTGString(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGString));
   { TGString *p; p=(TGString*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TString),-1,-1,2,"fString=",0,"embedded string");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGHotString */
static void G__setup_memvarTGHotString(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHotString));
   { TGHotString *p; p=(TGHotString*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,99,0,0,-1,-1,-1,2,"fHotChar=",0,"hot character");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fHotPos=",0,"position of hot character");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fLastGC=",0,"context used during last drawing");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fOff1=",0,"variable used during drawing (cache)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fOff2=",0,"variable used during drawing (cache)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EFrameState */

   /* EFrameType */

   /* EMWMHints */

   /* TGVerticalFrame */
static void G__setup_memvarTGVerticalFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame));
   { TGVerticalFrame *p; p=(TGVerticalFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGHorizontalFrame */
static void G__setup_memvarTGHorizontalFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame));
   { TGHorizontalFrame *p; p=(TGHorizontalFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGMainFrame */
static void G__setup_memvarTGMainFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame));
   { TGMainFrame *p; p=(TGMainFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,-1,2,"fBindList=",0,"list with key bindings");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTransientFrame */
static void G__setup_memvarTGTransientFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame));
   { TGTransientFrame *p; p=(TGTransientFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,-1,2,"fMain=",0,"window over which to popup dialog");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGGroupFrame */
static void G__setup_memvarTGGroupFrame(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame));
   { TGGroupFrame *p; p=(TGGroupFrame*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGString),-1,-1,2,"fText=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* ETextJustification */

   /* EWidgetStatus */

   /* EWidgetMessageTypes */

   /* TGWidget */
static void G__setup_memvarTGWidget(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGWidget));
   { TGWidget *p; p=(TGWidget*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fWidgetId=",0,"the widget id (used for event processing)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fWidgetFlags=",0,"widget status flags (OR of EWidgetStatus)");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,-1,2,"fMsgWindow=",0,"window which handles widget events");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TString),-1,-1,2,"fCommand=",0,"command to be executed");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGIcon */
static void G__setup_memvarTGIcon(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGIcon));
   { TGIcon *p; p=(TGIcon*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,-1,2,"fPic=",0,"icon picture");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGLabel */
static void G__setup_memvarTGLabel(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLabel));
   { TGLabel *p; p=(TGLabel*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGString),-1,-1,2,"fText=",0,"label text");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTWidth=",0,"text width");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTHeight=",0,"text height");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTMode=",0,"text drawing mode (ETextJustification)");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fTextChanged=",0,"has text changed");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,"graphics context used for drawing label");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font to draw label");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EButtonState */

   /* TGButton */
static void G__setup_memvarTGButton(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGButton));
   { TGButton *p; p=(TGButton*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTWidth=",0,"button width");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTHeight=",0,"button height");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),-1,-1,2,"fState=",0,"button state");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fStayDown=",0,"true if button has to stay down");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,"graphics context used for drawing button");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-1,2,"fUserData=",0,"pointer to user data structure");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGToolTip),-1,-1,2,"fTip=",0,"tool tip associated with button");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgHibckgndGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTextButton */
static void G__setup_memvarTGTextButton(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton));
   { TGTextButton *p; p=(TGTextButton*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),-1,-1,2,"fLabel=",0,"button text");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTMode=",0,"text drawing mode (ETextJustification)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fHKeycode=",0,"hotkey");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font to draw text");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGPictureButton */
static void G__setup_memvarTGPictureButton(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton));
   { TGPictureButton *p; p=(TGPictureButton*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,-1,2,"fPic=",0,"picture to be put in button");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGCheckButton */
static void G__setup_memvarTGCheckButton(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton));
   { TGCheckButton *p; p=(TGCheckButton*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),-1,-1,2,"fLabel=",0,"check button label");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fHKeycode=",0,"hotkey");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font to draw label");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),-1,-1,2,"fPrevState=",0,"previous check button state");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGRadioButton */
static void G__setup_memvarTGRadioButton(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton));
   { TGRadioButton *p; p=(TGRadioButton*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),-1,-1,2,"fLabel=",0,"radio button label");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fHKeycode=",0,"hotkey");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),-1,-1,2,"fPrevState=",0,"radio button state");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,-1,2,"fOn=",0,"button ON picture");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,-1,2,"fOff=",0,"button OFF picture");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font to draw label");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgR1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgR2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgR3=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgR4=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgR5=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgR6=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTextBuffer */
static void G__setup_memvarTGTextBuffer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer));
   { TGTextBuffer *p; p=(TGTextBuffer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TString),-1,-1,4,"fBuffer=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTextEntry */
static void G__setup_memvarTGTextEntry(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry));
   { TGTextEntry *p; p=(TGTextEntry*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer),-1,-1,2,"fText=",0,"text buffer");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fStartX=",0,"selection begin in pixels");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEndX=",0,"selection end in pixels");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fStartIX=",0,"selection begin in characters");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEndIX=",0,"selection end in characters");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fSelectionOn=",0,"selection status (on/off)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCursorX=",0,"cursor position in pixels");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCursorIX=",0,"cursor position in characters");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fCursorOn=",0,"cursor status (on/off)");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"text font");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,"normal drawing context");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fSelGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fSelbackGC=",0,"selection mode drawing contexts");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TBlinkTimer),-1,-1,2,"fCurBlink=",0,"cursor blink timer");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Cursor_t"),-2,2,"fgDefaultCursor=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultSelectedGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultSelectedBackgroundGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EMsgBoxIcon */

   /* EMsgBoxButton */

   /* TGMsgBox */
static void G__setup_memvarTGMsgBox(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox));
   { TGMsgBox *p; p=(TGMsgBox*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fYes=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fNo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fOK=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fApply=",0,"buttons in dialog box");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fRetry=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fIgnore=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fCancel=",0,"buttons in dialog box");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fClose=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,-1,2,"fDismiss=",0,"buttons in dialog box");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGIcon),-1,-1,2,"fIcon=",0,"icon");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),-1,-1,2,"fButtonFrame=",0,"frame containing buttons");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),-1,-1,2,"fIconFrame=",0,"frame containing icon and text");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),-1,-1,2,"fLabelFrame=",0,"frame containing text");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),-1,-1,2,"fL1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),-1,-1,2,"fL2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),-1,-1,2,"fL3=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),-1,-1,2,"fL4=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),-1,-1,2,"fL5=",0,"layout hints");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,-1,2,"fMsgList=",0,"text (list of TGLabels)");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRetCode=",0,"address to store return code");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EMenuEntryState */

   /* EMenuEntryType */

   /* TGPopupMenu */
static void G__setup_memvarTGPopupMenu(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu));
   { TGPopupMenu *p; p=(TGPopupMenu*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,-1,2,"fEntryList=",0,"list of menu entries");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGMenuEntry),-1,-1,2,"fCurrent=",0,"currently selected menu entry");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fStick=",0,"stick mode (popup menu stays sticked on screen)");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fHasGrab=",0,"true if menu has grabbed pointer");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fXl=",0,"Max width of all menu entries");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fWidth=",0,"width of popup menu");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fHeight=",0,"height of popup menu");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TTimer),-1,-1,2,"fDelay=",0,"delay before poping up cascading menu");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,"normal drawing graphics context");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fSelGC=",0,"graphics context for drawing selections");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fSelbackGC=",0,"graphics context for drawing selection background");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font to draw menu entries");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fHifontStruct=",0,"font to draw highlighted entries");
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,-1,2,"fMsgWindow=",0,"window which handles menu events");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultSelectedGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultSelectedBackgroundGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgHilightFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Cursor_t"),-2,2,"fgDefaultCursor=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgCheckmark=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Pixmap_t"),-2,2,"fgRadiomark=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGMenuTitle */
static void G__setup_memvarTGMenuTitle(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle));
   { TGMenuTitle *p; p=(TGMenuTitle*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu),-1,-1,2,"fMenu=",0,"attached popup menu");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),-1,-1,2,"fLabel=",0,"menu title");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTitleId=",0,"id of selected menu item");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-1,2,"fTitleData=",0,"user data associated with selected item");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fState=",0,"menu title state (active/not active)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fHkeycode=",0,"hot key code");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-1,2,"fFontStruct=",0,"font");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fNormGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-1,2,"fSelGC=",0,"normal and selection graphics contexts");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("GContext_t"),-2,2,"fgDefaultSelectedGC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("FontStruct_t"),-2,2,"fgDefaultFontStruct=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGMenuBar */
static void G__setup_memvarTGMenuBar(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar));
   { TGMenuBar *p; p=(TGMenuBar*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle),-1,-1,2,"fCurrent=",0,"current menu title");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,-1,2,"fTitles=",0,"list of menu titles");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fStick=",0,"stick mode (popup menu stays sticked on screen)");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Cursor_t"),-2,2,"fgDefaultCursor=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Gui1() {
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
static void G__setup_memfuncTGClient(void) {
   /* TGClient */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGClient));
   G__memfunc_setup("ProcessOneEvent",1539,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleEvent",1102,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,1,1,2,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleMaskEvent",1498,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,2,1,2,0,
"U 'Event_t' - 0 - event k - 'Window_t' 0 - wid",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGClient",762,G__TGClient_TGClient_4_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGClient),-1,0,1,1,1,0,"C - - 0 0 dpyName",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRoot",708,G__TGClient_GetRoot_6_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWindowById",1280,G__TGClient_GetWindowById_7_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,1,1,1,8,"k - 'Window_t' 0 - sw",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetColorByName",1371,G__TGClient_GetColorByName_8_0,98,-1,G__defined_typename("Bool_t"),0,2,1,1,8,
"C - - 0 - name k - 'ULong_t' 1 - pixel",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFontByName",1267,G__TGClient_GetFontByName_9_0,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,8,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHilite",895,G__TGClient_GetHilite_0_1,107,-1,G__defined_typename("ULong_t"),0,1,1,1,8,"k - 'ULong_t' 0 - base_color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShadow",902,G__TGClient_GetShadow_1_1,107,-1,G__defined_typename("ULong_t"),0,1,1,1,8,"k - 'ULong_t' 0 - base_color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("NeedRedraw",993,G__TGClient_NeedRedraw_2_1,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RegisterWindow",1469,G__TGClient_RegisterWindow_3_1,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UnregisterWindow",1696,G__TGClient_UnregisterWindow_4_1,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleInput",1116,G__TGClient_HandleInput_5_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ProcessLine",1127,G__TGClient_ProcessLine_6_1,121,-1,-1,0,4,1,1,0,
"u 'TString' - 0 - cmd l - 'Long_t' 0 - msg "
"l - 'Long_t' 0 - parm1 l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WaitFor",700,G__TGClient_WaitFor_7_1,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WaitForUnmap",1213,G__TGClient_WaitForUnmap_8_1,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPicturePool",1430,G__TGClient_GetPicturePool_9_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPicture",1020,G__TGClient_GetPicture_0_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,0,1,1,1,1,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPicture",1020,G__TGClient_GetPicture_1_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,0,3,1,1,1,
"C - - 0 - name h - 'UInt_t' 0 - new_width "
"h - 'UInt_t' 0 - new_height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FreePicture",1118,G__TGClient_FreePicture_2_2,121,-1,-1,0,1,1,1,0,"U 'TGPicture' - 0 - pic",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMimeTypeList",1510,G__TGClient_GetMimeTypeList_3_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TGMimeTypes),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGClient_DeclFileName_4_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGClient_DeclFileLine_5_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGClient_ImplFileName_6_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGClient_ImplFileLine_7_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGClient_Class_Version_8_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGClient_Class_9_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGClient_Dictionary_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGClient_IsA_1_3,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGClient_ShowMembers_2_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGClient_Streamer_3_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGClient",762,G__TGClient_TGClient_4_3,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGClient),-1,0,1,1,1,0,"u 'TGClient' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGClient",888,G__TGClient_wATGClient_5_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGObject(void) {
   /* TGObject */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGObject));
   G__memfunc_setup("TGObject",754,G__TGObject_TGObject_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetId",461,G__TGObject_GetId_2_0,107,-1,G__defined_typename("Handle_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hash",388,G__TGObject_Hash_3_0,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsEqual",692,G__TGObject_IsEqual_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGObject_DeclFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGObject_DeclFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGObject_ImplFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGObject_ImplFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGObject_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGObject_Class_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGObject_Dictionary_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGObject_IsA_2_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGObject_ShowMembers_3_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGObject_Streamer_4_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGObject",754,G__TGObject_TGObject_5_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGObject),-1,0,1,1,1,0,"u 'TGObject' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGObject",880,G__TGObject_wATGObject_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGWindow(void) {
   /* TGWindow */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGWindow));
   G__memfunc_setup("TGWindow",787,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,1,1,2,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMainFrame",1168,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,0,1,2,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGWindow",787,G__TGWindow_TGWindow_3_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,10,1,1,0,
"U 'TGWindow' - 0 - p i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 0 border "
"i - 'Int_t' 0 0 depth h - 'UInt_t' 0 0 clss "
"Y - - 0 0 visual U 'SetWindowAttributes_t' - 0 0 attr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGWindow",787,G__TGWindow_TGWindow_4_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,3,1,1,0,
"U 'TGClient' - 0 - c k - 'Window_t' 0 - id "
"U 'TGWindow' - 0 0 parent",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParent",906,G__TGWindow_GetParent_6_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapWindow",918,G__TGWindow_MapWindow_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapSubwindows",1363,G__TGWindow_MapSubwindows_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapRaised",886,G__TGWindow_MapRaised_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UnmapWindow",1145,G__TGWindow_UnmapWindow_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DestroyWindow",1378,G__TGWindow_DestroyWindow_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RaiseWindow",1132,G__TGWindow_RaiseWindow_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LowerWindow",1153,G__TGWindow_LowerWindow_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBackgroundColor",1835,G__TGWindow_SetBackgroundColor_4_1,121,-1,-1,0,1,1,1,0,"k - 'ULong_t' 0 - color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBackgroundPixmap",1947,G__TGWindow_SetBackgroundPixmap_5_1,121,-1,-1,0,1,1,1,0,"k - 'Pixmap_t' 0 - pixmap",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleExpose",1216,G__TGWindow_HandleExpose_6_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleEvent",1102,G__TGWindow_HandleEvent_7_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTimer",1101,G__TGWindow_HandleTimer_8_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TTimer' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Move",407,G__TGWindow_Move_9_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Resize",626,G__TGWindow_Resize_0_2,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveResize",1033,G__TGWindow_MoveResize_1_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsMapped",787,G__TGWindow_IsMapped_2_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGWindow_DeclFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGWindow_DeclFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGWindow_ImplFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGWindow_ImplFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGWindow_Class_Version_7_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGWindow_Class_8_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGWindow_Dictionary_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGWindow_IsA_0_3,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGWindow_ShowMembers_1_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGWindow_Streamer_2_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGWindow",787,G__TGWindow_TGWindow_3_3,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,1,1,1,0,"u 'TGWindow' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGWindow",913,G__TGWindow_wATGWindow_4_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGPicturePool(void) {
   /* TGPicturePool */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool));
   G__memfunc_setup("TGPicturePool",1297,G__TGPicturePool_TGPicturePool_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool),-1,0,2,1,1,0,
"U 'TGClient' - 0 - client C - - 0 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPath",685,G__TGPicturePool_GetPath_2_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPicture",1020,G__TGPicturePool_GetPicture_3_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,0,1,1,1,1,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPicture",1020,G__TGPicturePool_GetPicture_4_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,0,3,1,1,1,
"C - - 0 - name h - 'UInt_t' 0 - new_width "
"h - 'UInt_t' 0 - new_height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FreePicture",1118,G__TGPicturePool_FreePicture_5_0,121,-1,-1,0,1,1,1,0,"U 'TGPicture' - 0 - pic",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGPicturePool_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGPicturePool_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGPicturePool_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGPicturePool_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGPicturePool_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGPicturePool_Class_1_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGPicturePool_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGPicturePool_IsA_3_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGPicturePool_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGPicturePool_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGPicturePool",1297,G__TGPicturePool_TGPicturePool_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool),-1,0,1,1,1,0,"u 'TGPicturePool' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGPicturePool",1423,G__TGPicturePool_wATGPicturePool_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGPicture(void) {
   /* TGPicture */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicture));
   G__memfunc_setup("TGPicture",887,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,0,2,1,2,0,
"C - - 0 - name b - 'Bool_t' 0 kFALSE scaled",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Draw",398,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - 'Option_t' 0 \"\" -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HashName",773,(G__InterfaceMethod)NULL,67,-1,-1,0,3,1,2,1,
"C - - 0 - name i - 'Int_t' 0 - width "
"i - 'Int_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TGPicture_GetName_4_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWidth",800,G__TGPicture_GetWidth_5_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHeight",889,G__TGPicture_GetHeight_6_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPicture",1020,G__TGPicture_GetPicture_7_0,107,-1,G__defined_typename("Pixmap_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMask",684,G__TGPicture_GetMask_8_0,107,-1,G__defined_typename("Pixmap_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsScaled",776,G__TGPicture_IsScaled_9_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hash",388,G__TGPicture_Hash_0_1,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TGPicture_Draw_1_1,121,-1,-1,0,4,1,1,8,
"k - 'Handle_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGPicture_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGPicture_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGPicture_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGPicture_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGPicture_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGPicture_Class_7_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGPicture_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGPicture_IsA_9_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGPicture_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGPicture_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGPicture",887,G__TGPicture_TGPicture_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,0,1,1,1,0,"u 'TGPicture' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGPicture",1013,G__TGPicture_wATGPicture_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGSelectedPicture(void) {
   /* TGSelectedPicture */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture));
   G__memfunc_setup("TGSelectedPicture",1696,G__TGSelectedPicture_TGSelectedPicture_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture),-1,0,2,1,1,0,
"U 'TGClient' - 0 - client U 'TGPicture' - 0 - p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGSelectedPicture_DeclFileName_2_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGSelectedPicture_DeclFileLine_3_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGSelectedPicture_ImplFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGSelectedPicture_ImplFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGSelectedPicture_Class_Version_6_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGSelectedPicture_Class_7_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGSelectedPicture_Dictionary_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGSelectedPicture_IsA_9_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGSelectedPicture_ShowMembers_0_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGSelectedPicture_Streamer_1_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGSelectedPicture",1696,G__TGSelectedPicture_TGSelectedPicture_2_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture),-1,0,1,1,1,0,"u 'TGSelectedPicture' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGSelectedPicture",1822,G__TGSelectedPicture_wATGSelectedPicture_3_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGDimension(void) {
   /* TGDimension */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGDimension));
   G__memfunc_setup("TGDimension",1089,G__TGDimension_TGDimension_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGDimension",1089,G__TGDimension_TGDimension_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,2,1,1,0,
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGDimension",1089,G__TGDimension_TGDimension_2_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,1,1,1,0,"u 'TGDimension' - 1 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGDimension_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGDimension_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGDimension_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGDimension_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGDimension_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGDimension_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGDimension_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGDimension_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGDimension_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGDimension_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TGDimension",1215,G__TGDimension_wATGDimension_3_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGPosition(void) {
   /* TGPosition */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPosition));
   G__memfunc_setup("TGPosition",1008,G__TGPosition_TGPosition_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGPosition),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGPosition",1008,G__TGPosition_TGPosition_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGPosition),-1,0,2,1,1,0,
"i - 'Int_t' 0 - xc i - 'Int_t' 0 - yc",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGPosition",1008,G__TGPosition_TGPosition_2_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGPosition),-1,0,1,1,1,0,"u 'TGPosition' - 1 - p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGPosition_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGPosition_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGPosition_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGPosition_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGPosition_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGPosition_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGPosition_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGPosition_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGPosition_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGPosition_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TGPosition",1134,G__TGPosition_wATGPosition_3_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGFrame(void) {
   /* TGFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrame));
   G__memfunc_setup("GetDefaultFrameBackground",2512,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("ULong_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefaultSelectedBackground",2830,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("ULong_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWhitePixel",1315,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("ULong_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBlackPixel",1279,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("ULong_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBlackGC",903,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("GContext_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWhiteGC",939,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("GContext_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHilightGC",1139,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("GContext_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShadowGC",1040,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("GContext_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBckgndGC",1011,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("GContext_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLastClick",1178,(G__InterfaceMethod)NULL,107,-1,G__defined_typename("Time_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMainFrame",1168,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,0,1,2,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGFrame",646,G__TGFrame_TGFrame_2_1,105,G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 0 options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGFrame",646,G__TGFrame_TGFrame_3_1,105,G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),-1,0,3,1,1,0,
"U 'TGClient' - 0 - c k - 'Window_t' 0 - id "
"U 'TGWindow' - 0 0 parent",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleEvent",1102,G__TGFrame_HandleEvent_4_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleConfigureNotify",2151,G__TGFrame_HandleConfigureNotify_5_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGFrame_HandleButton_6_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleDoubleClick",1677,G__TGFrame_HandleDoubleClick_7_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleCrossing",1428,G__TGFrame_HandleCrossing_8_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGFrame_HandleMotion_9_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleKey",885,G__TGFrame_HandleKey_0_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleFocusChange",1682,G__TGFrame_HandleFocusChange_1_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleClientMessage",1904,G__TGFrame_HandleClientMessage_2_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleSelection",1522,G__TGFrame_HandleSelection_3_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleSelectionRequest",2267,G__TGFrame_HandleSelectionRequest_4_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleSelectionClear",2009,G__TGFrame_HandleSelectionClear_5_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendMessage",1103,G__TGFrame_SendMessage_6_2,121,-1,-1,0,4,1,1,0,
"U 'TGWindow' - 0 - w l - 'Long_t' 0 - msg "
"l - 'Long_t' 0 - parm1 l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessMessage",1444,G__TGFrame_ProcessMessage_7_2,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - - l - 'Long_t' 0 - - "
"l - 'Long_t' 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Move",407,G__TGFrame_Move_8_2,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Resize",626,G__TGFrame_Resize_9_2,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Resize",626,G__TGFrame_Resize_0_3,121,-1,-1,0,1,1,1,0,"u 'TGDimension' - 0 - size",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveResize",1033,G__TGFrame_MoveResize_1_3,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultWidth",1509,G__TGFrame_GetDefaultWidth_2_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultHeight",1598,G__TGFrame_GetDefaultHeight_3_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGFrame_GetDefaultSize_4_3,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBackground",1312,G__TGFrame_GetBackground_5_3,107,-1,G__defined_typename("ULong_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeBackground",1606,G__TGFrame_ChangeBackground_6_3,121,-1,-1,0,1,1,1,0,"k - 'ULong_t' 0 - back",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOptions",1036,G__TGFrame_GetOptions_7_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeOptions",1330,G__TGFrame_ChangeOptions_8_3,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - options",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGFrame_Layout_9_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGFrame_MapSubwindows_0_4,121,-1,-1,0,0,1,1,0,"","Simple frames do not have subwindows",(void*)NULL,1);
   G__memfunc_setup("DrawBorder",1004,G__TGFrame_DrawBorder_1_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWidth",800,G__TGFrame_GetWidth_2_4,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHeight",889,G__TGFrame_GetHeight_3_4,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSize",699,G__TGFrame_GetSize_4_4,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX",376,G__TGFrame_GetX_5_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY",377,G__TGFrame_GetY_6_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBorderWidth",1406,G__TGFrame_GetBorderWidth_7_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWidth",812,G__TGFrame_SetWidth_8_4,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHeight",901,G__TGFrame_SetHeight_9_4,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSize",711,G__TGFrame_SetSize_0_5,121,-1,-1,0,1,1,1,0,"u 'TGDimension' - 1 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGFrame_DeclFileName_1_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGFrame_DeclFileLine_2_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGFrame_ImplFileName_3_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGFrame_ImplFileLine_4_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGFrame_Class_Version_5_5,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGFrame_Class_6_5,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGFrame_Dictionary_7_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGFrame_IsA_8_5,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGFrame_ShowMembers_9_5,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGFrame_Streamer_0_6,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGFrame",646,G__TGFrame_TGFrame_1_6,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),-1,0,1,1,1,0,"u 'TGFrame' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGFrame",772,G__TGFrame_wATGFrame_2_6,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGCompositeFrame(void) {
   /* TGCompositeFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame));
   G__memfunc_setup("TGCompositeFrame",1593,G__TGCompositeFrame_TGCompositeFrame_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 0 options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGCompositeFrame",1593,G__TGCompositeFrame_TGCompositeFrame_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),-1,0,3,1,1,0,
"U 'TGClient' - 0 - c k - 'Window_t' 0 - id "
"U 'TGWindow' - 0 0 parent",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefaultWidth",1509,G__TGCompositeFrame_GetDefaultWidth_3_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultHeight",1598,G__TGCompositeFrame_GetDefaultHeight_4_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGCompositeFrame_GetDefaultSize_5_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGCompositeFrame_MapSubwindows_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Layout",638,G__TGCompositeFrame_Layout_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGCompositeFrame_HandleButton_8_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleDoubleClick",1677,G__TGCompositeFrame_HandleDoubleClick_9_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleCrossing",1428,G__TGCompositeFrame_HandleCrossing_0_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGCompositeFrame_HandleMotion_1_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleKey",885,G__TGCompositeFrame_HandleKey_2_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleFocusChange",1682,G__TGCompositeFrame_HandleFocusChange_3_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleSelection",1522,G__TGCompositeFrame_HandleSelection_4_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeOptions",1330,G__TGCompositeFrame_ChangeOptions_5_1,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - options",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessMessage",1444,G__TGCompositeFrame_ProcessMessage_6_1,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - - l - 'Long_t' 0 - - "
"l - 'Long_t' 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLayoutManager",1625,G__TGCompositeFrame_GetLayoutManager_7_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLayoutManager",1637,G__TGCompositeFrame_SetLayoutManager_8_1,121,-1,-1,0,1,1,1,0,"U 'TGLayoutManager' - 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddFrame",756,G__TGCompositeFrame_AddFrame_9_1,121,-1,-1,0,2,1,1,0,
"U 'TGFrame' - 0 - f U 'TGLayoutHints' - 0 0 l",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveFrame",1113,G__TGCompositeFrame_RemoveFrame_0_2,121,-1,-1,0,1,1,1,0,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ShowFrame",908,G__TGCompositeFrame_ShowFrame_1_2,121,-1,-1,0,1,1,1,0,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HideFrame",869,G__TGCompositeFrame_HideFrame_2_2,121,-1,-1,0,1,1,1,0,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetState",801,G__TGCompositeFrame_GetState_3_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsVisible",906,G__TGCompositeFrame_IsVisible_4_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsVisible",906,G__TGCompositeFrame_IsVisible_5_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'TGFrameElement' - 0 - ptr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsArranged",992,G__TGCompositeFrame_IsArranged_6_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'TGFrame' - 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsArranged",992,G__TGCompositeFrame_IsArranged_7_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"U 'TGFrameElement' - 0 - ptr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetList",700,G__TGCompositeFrame_GetList_8_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGCompositeFrame_DeclFileName_9_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGCompositeFrame_DeclFileLine_0_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGCompositeFrame_ImplFileName_1_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGCompositeFrame_ImplFileLine_2_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGCompositeFrame_Class_Version_3_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGCompositeFrame_Class_4_3,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGCompositeFrame_Dictionary_5_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGCompositeFrame_IsA_6_3,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGCompositeFrame_ShowMembers_7_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGCompositeFrame_Streamer_8_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGCompositeFrame",1593,G__TGCompositeFrame_TGCompositeFrame_9_3,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),-1,0,1,1,1,0,"u 'TGCompositeFrame' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGCompositeFrame",1719,G__TGCompositeFrame_wATGCompositeFrame_0_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGLayoutHints(void) {
   /* TGLayoutHints */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints));
   G__memfunc_setup("TGLayoutHints",1311,G__TGLayoutHints_TGLayoutHints_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),-1,0,5,1,1,0,
"k - 'ULong_t' 0 kLHintsNormal hints h - 'UInt_t' 0 0 padleft "
"h - 'UInt_t' 0 0 padright h - 'UInt_t' 0 0 padtop "
"h - 'UInt_t' 0 0 padbottom",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLayoutHints",1444,G__TGLayoutHints_GetLayoutHints_1_0,107,-1,G__defined_typename("ULong_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadTop",872,G__TGLayoutHints_GetPadTop_2_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadBottom",1194,G__TGLayoutHints_GetPadBottom_3_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadLeft",960,G__TGLayoutHints_GetPadLeft_4_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadRight",1075,G__TGLayoutHints_GetPadRight_5_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGLayoutHints_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGLayoutHints_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGLayoutHints_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGLayoutHints_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGLayoutHints_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGLayoutHints_Class_1_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGLayoutHints_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGLayoutHints_IsA_3_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGLayoutHints_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGLayoutHints_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGLayoutHints",1311,G__TGLayoutHints_TGLayoutHints_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),-1,0,1,1,1,0,"u 'TGLayoutHints' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGLayoutHints",1437,G__TGLayoutHints_wATGLayoutHints_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGFrameElement(void) {
   /* TGFrameElement */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement));
   // automatic default constructor
   G__memfunc_setup("TGFrameElement",1360,G__TGFrameElement_TGFrameElement_0_0,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TGFrameElement",1360,G__TGFrameElement_TGFrameElement_1_0,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement),-1,0,1,1,1,0,"u 'TGFrameElement' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGFrameElement",1486,G__TGFrameElement_wATGFrameElement_2_0,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGLayoutManager(void) {
   /* TGLayoutManager */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager));
   G__memfunc_setup("Layout",638,G__TGLayoutManager_Layout_0_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetDefaultSize",1408,G__TGLayoutManager_GetDefaultSize_1_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeclFileName",1145,G__TGLayoutManager_DeclFileName_2_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGLayoutManager_DeclFileLine_3_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGLayoutManager_ImplFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGLayoutManager_ImplFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGLayoutManager_Class_Version_6_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGLayoutManager_Class_7_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGLayoutManager_Dictionary_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGLayoutManager_IsA_9_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGLayoutManager_ShowMembers_0_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGLayoutManager_Streamer_1_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TGLayoutManager",1618,G__TGLayoutManager_wATGLayoutManager_2_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGVerticalLayout(void) {
   /* TGVerticalLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout));
   G__memfunc_setup("TGVerticalLayout",1619,G__TGVerticalLayout_TGVerticalLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout),-1,0,1,1,1,0,"U 'TGCompositeFrame' - 0 - main",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGVerticalLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGVerticalLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGVerticalLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGVerticalLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGVerticalLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGVerticalLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGVerticalLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGVerticalLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGVerticalLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGVerticalLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGVerticalLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGVerticalLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGVerticalLayout",1619,G__TGVerticalLayout_TGVerticalLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout),-1,0,1,1,1,0,"u 'TGVerticalLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGVerticalLayout",1745,G__TGVerticalLayout_wATGVerticalLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGHorizontalLayout(void) {
   /* TGHorizontalLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout));
   G__memfunc_setup("TGHorizontalLayout",1859,G__TGHorizontalLayout_TGHorizontalLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout),-1,0,1,1,1,0,"U 'TGCompositeFrame' - 0 - main",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGHorizontalLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGHorizontalLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGHorizontalLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGHorizontalLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGHorizontalLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGHorizontalLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGHorizontalLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGHorizontalLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGHorizontalLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGHorizontalLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGHorizontalLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGHorizontalLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGHorizontalLayout",1859,G__TGHorizontalLayout_TGHorizontalLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout),-1,0,1,1,1,0,"u 'TGHorizontalLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGHorizontalLayout",1985,G__TGHorizontalLayout_wATGHorizontalLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGRowLayout(void) {
   /* TGRowLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout));
   G__memfunc_setup("TGRowLayout",1105,G__TGRowLayout_TGRowLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout),-1,0,2,1,1,0,
"U 'TGCompositeFrame' - 0 - main i - 'Int_t' 0 0 s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGRowLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGRowLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGRowLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGRowLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGRowLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGRowLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGRowLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGRowLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGRowLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGRowLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGRowLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGRowLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGRowLayout",1105,G__TGRowLayout_TGRowLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout),-1,0,1,1,1,0,"u 'TGRowLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGRowLayout",1231,G__TGRowLayout_wATGRowLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGColumnLayout(void) {
   /* TGColumnLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout));
   G__memfunc_setup("TGColumnLayout",1415,G__TGColumnLayout_TGColumnLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout),-1,0,2,1,1,0,
"U 'TGCompositeFrame' - 0 - main i - 'Int_t' 0 0 s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGColumnLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGColumnLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGColumnLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGColumnLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGColumnLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGColumnLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGColumnLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGColumnLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGColumnLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGColumnLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGColumnLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGColumnLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGColumnLayout",1415,G__TGColumnLayout_TGColumnLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout),-1,0,1,1,1,0,"u 'TGColumnLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGColumnLayout",1541,G__TGColumnLayout_wATGColumnLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGMatrixLayout(void) {
   /* TGMatrixLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout));
   G__memfunc_setup("TGMatrixLayout",1422,G__TGMatrixLayout_TGMatrixLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout),-1,0,5,1,1,0,
"U 'TGCompositeFrame' - 0 - main h - 'UInt_t' 0 - r "
"h - 'UInt_t' 0 - c i - 'Int_t' 0 0 s "
"i - 'Int_t' 0 0 h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGMatrixLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGMatrixLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGMatrixLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGMatrixLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGMatrixLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGMatrixLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGMatrixLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGMatrixLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGMatrixLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGMatrixLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGMatrixLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGMatrixLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGMatrixLayout",1422,G__TGMatrixLayout_TGMatrixLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout),-1,0,1,1,1,0,"u 'TGMatrixLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGMatrixLayout",1548,G__TGMatrixLayout_wATGMatrixLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTileLayout(void) {
   /* TGTileLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout));
   G__memfunc_setup("TGTileLayout",1191,G__TGTileLayout_TGTileLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout),-1,0,2,1,1,0,
"U 'TGCompositeFrame' - 0 - main i - 'Int_t' 0 0 sep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGTileLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGTileLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGTileLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTileLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTileLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTileLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTileLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTileLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTileLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTileLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTileLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTileLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTileLayout",1191,G__TGTileLayout_TGTileLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout),-1,0,1,1,1,0,"u 'TGTileLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTileLayout",1317,G__TGTileLayout_wATGTileLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGListLayout(void) {
   /* TGListLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout));
   G__memfunc_setup("TGListLayout",1205,G__TGListLayout_TGListLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout),-1,0,2,1,1,0,
"U 'TGCompositeFrame' - 0 - main i - 'Int_t' 0 0 sep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGListLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGListLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGListLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGListLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGListLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGListLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGListLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGListLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGListLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGListLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGListLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGListLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGListLayout",1205,G__TGListLayout_TGListLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout),-1,0,1,1,1,0,"u 'TGListLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGListLayout",1331,G__TGListLayout_wATGListLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGListDetailsLayout(void) {
   /* TGListDetailsLayout */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout));
   G__memfunc_setup("TGListDetailsLayout",1915,G__TGListDetailsLayout_TGListDetailsLayout_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout),-1,0,2,1,1,0,
"U 'TGCompositeFrame' - 0 - main i - 'Int_t' 0 0 sep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Layout",638,G__TGListDetailsLayout_Layout_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGListDetailsLayout_GetDefaultSize_2_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGListDetailsLayout_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGListDetailsLayout_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGListDetailsLayout_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGListDetailsLayout_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGListDetailsLayout_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGListDetailsLayout_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGListDetailsLayout_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGListDetailsLayout_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGListDetailsLayout_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGListDetailsLayout_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGListDetailsLayout",1915,G__TGListDetailsLayout_TGListDetailsLayout_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout),-1,0,1,1,1,0,"u 'TGListDetailsLayout' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGListDetailsLayout",2041,G__TGListDetailsLayout_wATGListDetailsLayout_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGString(void) {
   /* TGString */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGString));
   G__memfunc_setup("TGString",786,G__TGString_TGString_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGString),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGString",786,G__TGString_TGString_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGString),-1,0,1,1,1,0,"u 'TString' - 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGString",786,G__TGString_TGString_2_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGString),-1,0,1,1,1,0,"C - - 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGString",786,G__TGString_TGString_3_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGString),-1,0,1,1,1,0,"U 'TGString' - 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLength",898,G__TGString_GetLength_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetString",919,G__TGString_GetString_6_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Draw",398,G__TGString_Draw_7_0,121,-1,-1,0,4,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawWrapped",1121,G__TGString_DrawWrapped_8_0,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w k - 'FontStruct_t' 0 - font",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLines",795,G__TGString_GetLines_9_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"k - 'FontStruct_t' 0 - font h - 'UInt_t' 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGString_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGString_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGString_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGString_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGString_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGString_Class_5_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGString_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGString_IsA_7_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGString_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGString_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGString",786,G__TGString_TGString_0_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGString),-1,0,1,1,1,0,"u 'TGString' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGString",912,G__TGString_wATGString_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGHotString(void) {
   /* TGHotString */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHotString));
   G__memfunc_setup("DrawHotChar",1079,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,2,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGHotString",1085,G__TGHotString_TGHotString_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),-1,0,1,1,1,0,"C - - 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHotChar",969,G__TGHotString_GetHotChar_2_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Draw",398,G__TGHotString_Draw_3_0,121,-1,-1,0,4,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawWrapped",1121,G__TGHotString_DrawWrapped_4_0,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w k - 'FontStruct_t' 0 - font",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGHotString_DeclFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGHotString_DeclFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGHotString_ImplFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGHotString_ImplFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGHotString_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGHotString_Class_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGHotString_Dictionary_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGHotString_IsA_2_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGHotString_ShowMembers_3_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGHotString_Streamer_4_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGHotString",1085,G__TGHotString_TGHotString_5_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),-1,0,1,1,1,0,"u 'TGHotString' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGHotString",1211,G__TGHotString_wATGHotString_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGVerticalFrame(void) {
   /* TGVerticalFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame));
   G__memfunc_setup("TGVerticalFrame",1472,G__TGVerticalFrame_TGVerticalFrame_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kChildFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGVerticalFrame_DeclFileName_1_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGVerticalFrame_DeclFileLine_2_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGVerticalFrame_ImplFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGVerticalFrame_ImplFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGVerticalFrame_Class_Version_5_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGVerticalFrame_Class_6_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGVerticalFrame_Dictionary_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGVerticalFrame_IsA_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGVerticalFrame_ShowMembers_9_0,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGVerticalFrame_Streamer_0_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGVerticalFrame",1472,G__TGVerticalFrame_TGVerticalFrame_1_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),-1,0,1,1,1,0,"u 'TGVerticalFrame' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGVerticalFrame",1598,G__TGVerticalFrame_wATGVerticalFrame_2_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGHorizontalFrame(void) {
   /* TGHorizontalFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame));
   G__memfunc_setup("TGHorizontalFrame",1712,G__TGHorizontalFrame_TGHorizontalFrame_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kChildFrame options "
"k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGHorizontalFrame_DeclFileName_1_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGHorizontalFrame_DeclFileLine_2_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGHorizontalFrame_ImplFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGHorizontalFrame_ImplFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGHorizontalFrame_Class_Version_5_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGHorizontalFrame_Class_6_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGHorizontalFrame_Dictionary_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGHorizontalFrame_IsA_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGHorizontalFrame_ShowMembers_9_0,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGHorizontalFrame_Streamer_0_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGHorizontalFrame",1712,G__TGHorizontalFrame_TGHorizontalFrame_1_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),-1,0,1,1,1,0,"u 'TGHorizontalFrame' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGHorizontalFrame",1838,G__TGHorizontalFrame_wATGHorizontalFrame_2_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGMainFrame(void) {
   /* TGMainFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame));
   G__memfunc_setup("GetMainFrame",1168,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,0,1,2,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGMainFrame",1035,G__TGMainFrame_TGMainFrame_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kMainFrame|kVerticalFrame options",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleKey",885,G__TGMainFrame_HandleKey_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleClientMessage",1904,G__TGMainFrame_HandleClientMessage_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseWindow",1134,G__TGMainFrame_CloseWindow_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowName",1317,G__TGMainFrame_SetWindowName_6_0,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetIconName",1078,G__TGMainFrame_SetIconName_7_0,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetClassHints",1320,G__TGMainFrame_SetClassHints_8_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - className C - - 0 - resourceName",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMWMHints",1059,G__TGMainFrame_SetMWMHints_9_0,121,-1,-1,0,3,1,1,0,
"h - 'UInt_t' 0 - value h - 'UInt_t' 0 - funcs "
"h - 'UInt_t' 0 - input",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWMPosition",1317,G__TGMainFrame_SetWMPosition_0_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWMSize",875,G__TGMainFrame_SetWMSize_1_1,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWMSizeHints",1393,G__TGMainFrame_SetWMSizeHints_2_1,121,-1,-1,0,6,1,1,0,
"h - 'UInt_t' 0 - wmin h - 'UInt_t' 0 - hmin "
"h - 'UInt_t' 0 - wmax h - 'UInt_t' 0 - hmax "
"h - 'UInt_t' 0 - winc h - 'UInt_t' 0 - hinc",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWMState",977,G__TGMainFrame_SetWMState_3_1,121,-1,-1,0,1,1,1,0,"i 'EInitialState' - 0 - state",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BindKey",678,G__TGMainFrame_BindKey_4_1,98,-1,G__defined_typename("Bool_t"),0,3,1,1,8,
"U 'TGWindow' - 0 - w i - 'Int_t' 0 - keycode "
"i - 'Int_t' 0 - modifier",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveBind",1003,G__TGMainFrame_RemoveBind_5_1,121,-1,-1,0,3,1,1,8,
"U 'TGWindow' - 0 - w i - 'Int_t' 0 - keycode "
"i - 'Int_t' 0 - modifier",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGMainFrame_DeclFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGMainFrame_DeclFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGMainFrame_ImplFileName_8_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGMainFrame_ImplFileLine_9_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGMainFrame_Class_Version_0_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGMainFrame_Class_1_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGMainFrame_Dictionary_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGMainFrame_IsA_3_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGMainFrame_ShowMembers_4_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGMainFrame_Streamer_5_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGMainFrame",1035,G__TGMainFrame_TGMainFrame_6_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),-1,0,1,1,1,0,"u 'TGMainFrame' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGMainFrame",1161,G__TGMainFrame_wATGMainFrame_7_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTransientFrame(void) {
   /* TGTransientFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame));
   G__memfunc_setup("TGTransientFrame",1598,G__TGTransientFrame_TGTransientFrame_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p U 'TGWindow' - 0 - main "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h "
"h - 'UInt_t' 0 kMainFrame|kVerticalFrame options",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMain",677,G__TGTransientFrame_GetMain_1_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CloseWindow",1134,G__TGTransientFrame_CloseWindow_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGTransientFrame_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTransientFrame_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTransientFrame_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTransientFrame_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTransientFrame_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTransientFrame_Class_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTransientFrame_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTransientFrame_IsA_0_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTransientFrame_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTransientFrame_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTransientFrame",1598,G__TGTransientFrame_TGTransientFrame_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),-1,0,1,1,1,0,"u 'TGTransientFrame' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTransientFrame",1724,G__TGTransientFrame_wATGTransientFrame_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGGroupFrame(void) {
   /* TGGroupFrame */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame));
   G__memfunc_setup("TGGroupFrame",1171,G__TGGroupFrame_TGGroupFrame_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGString' - 0 - title "
"h - 'UInt_t' 0 kVerticalFrame options k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGGroupFrame",1171,G__TGGroupFrame_TGGroupFrame_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p C - - 0 - title "
"h - 'UInt_t' 0 kVerticalFrame options k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGGroupFrame_DrawBorder_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGGroupFrame_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGGroupFrame_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGGroupFrame_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGGroupFrame_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGGroupFrame_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGGroupFrame_Class_9_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGGroupFrame_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGGroupFrame_IsA_1_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGGroupFrame_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGGroupFrame_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGGroupFrame",1171,G__TGGroupFrame_TGGroupFrame_4_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),-1,0,1,1,1,0,"u 'TGGroupFrame' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGGroupFrame",1297,G__TGGroupFrame_wATGGroupFrame_5_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGWidget(void) {
   /* TGWidget */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGWidget));
   G__memfunc_setup("SetFlags",793,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,1,1,2,0,"i - 'Int_t' 0 - flags",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ClearFlags",980,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,1,1,2,0,"i - 'Int_t' 0 - flags",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGWidget",767,G__TGWidget_TGWidget_2_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGWidget",767,G__TGWidget_TGWidget_3_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WidgetId",785,G__TGWidget_WidgetId_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsEnabled",871,G__TGWidget_IsEnabled_6_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HasFocus",796,G__TGWidget_HasFocus_7_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WantFocus",922,G__TGWidget_WantFocus_8_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Associate",924,G__TGWidget_Associate_9_0,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCommand",1003,G__TGWidget_SetCommand_0_1,121,-1,-1,0,1,1,1,0,"C - - 0 - command",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCommand",991,G__TGWidget_GetCommand_1_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGWidget_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGWidget_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGWidget_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGWidget_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGWidget_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGWidget_Class_7_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGWidget_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGWidget_IsA_9_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGWidget_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGWidget_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGWidget",767,G__TGWidget_TGWidget_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),-1,0,1,1,1,0,"u 'TGWidget' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGWidget",893,G__TGWidget_wATGWidget_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGIcon(void) {
   /* TGIcon */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGIcon));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGIcon",548,G__TGIcon_TGIcon_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGIcon),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGPicture' - 0 - pic "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h "
"h - 'UInt_t' 0 kChildFrame options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPicture",1020,G__TGIcon_GetPicture_3_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPicture",1032,G__TGIcon_SetPicture_4_0,121,-1,-1,0,1,1,1,0,"U 'TGPicture' - 0 - pic",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultSize",1408,G__TGIcon_GetDefaultSize_5_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGIcon_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGIcon_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGIcon_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGIcon_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGIcon_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGIcon_Class_1_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGIcon_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGIcon_IsA_3_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGIcon_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGIcon_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGIcon",548,G__TGIcon_TGIcon_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGIcon),-1,0,1,1,1,0,"u 'TGIcon' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGIcon",674,G__TGIcon_wATGIcon_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGLabel(void) {
   /* TGLabel */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLabel));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGLabel",635,G__TGLabel_TGLabel_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGLabel),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGString' - 0 - text "
"k - 'GContext_t' 0 fgDefaultGC norm k - 'FontStruct_t' 0 fgDefaultFontStruct font "
"h - 'UInt_t' 0 kChildFrame options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGLabel",635,G__TGLabel_TGLabel_2_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGLabel),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p C - - 0 - text "
"k - 'GContext_t' 0 fgDefaultGC norm k - 'FontStruct_t' 0 fgDefaultFontStruct font "
"h - 'UInt_t' 0 kChildFrame options k - 'ULong_t' 0 fgDefaultFrameBackground back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefaultSize",1408,G__TGLabel_GetDefaultSize_4_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetText",709,G__TGLabel_GetText_5_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGString),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetText",721,G__TGLabel_SetText_6_0,121,-1,-1,0,1,1,1,0,"U 'TGString' - 0 - new_text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTextJustify",1471,G__TGLabel_SetTextJustify_7_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - tmode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGLabel_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGLabel_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGLabel_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGLabel_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGLabel_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGLabel_Class_3_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGLabel_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGLabel_IsA_5_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGLabel_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGLabel_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGLabel",635,G__TGLabel_TGLabel_8_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGLabel),-1,0,1,1,1,0,"u 'TGLabel' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGLabel",761,G__TGLabel_wATGLabel_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGButton(void) {
   /* TGButton */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGButton));
   G__memfunc_setup("TGButton",791,G__TGButton_TGButton_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p i - 'Int_t' 0 - id "
"k - 'GContext_t' 0 fgDefaultGC norm h - 'UInt_t' 0 kRaisedFrame|kDoubleBorder option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGButton_HandleButton_2_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleCrossing",1428,G__TGButton_HandleCrossing_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetUserData",1093,G__TGButton_SetUserData_4_0,121,-1,-1,0,1,1,1,0,"Y - - 0 - userData",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetUserData",1081,G__TGButton_GetUserData_5_0,89,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetToolTipText",1436,G__TGButton_SetToolTipText_6_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - text l - 'Long_t' 0 1000 delayms",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetState",813,G__TGButton_SetState_7_0,121,-1,-1,0,1,1,1,0,"i 'EButtonState' - 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetState",801,G__TGButton_GetState_8_0,105,G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AllowStayDown",1336,G__TGButton_AllowStayDown_9_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - a",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGButton_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGButton_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGButton_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGButton_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGButton_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGButton_Class_5_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGButton_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGButton_IsA_7_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGButton_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGButton_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGButton",791,G__TGButton_TGButton_0_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGButton),-1,0,1,1,1,0,"u 'TGButton' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGButton",917,G__TGButton_wATGButton_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTextButton(void) {
   /* TGTextButton */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton));
   G__memfunc_setup("Init",404,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGTextButton",1212,G__TGTextButton_TGTextButton_2_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGHotString' - 0 - s "
"i - 'Int_t' 0 -1 id k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 kRaisedFrame|kDoubleBorder option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGTextButton",1212,G__TGTextButton_TGTextButton_3_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p C - - 0 - s "
"i - 'Int_t' 0 -1 id k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 kRaisedFrame|kDoubleBorder option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGTextButton",1212,G__TGTextButton_TGTextButton_4_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),-1,0,7,1,1,0,
"U 'TGWindow' - 0 - p C - - 0 - s "
"C - - 0 - cmd i - 'Int_t' 0 -1 id "
"k - 'GContext_t' 0 fgDefaultGC norm k - 'FontStruct_t' 0 fgDefaultFontStruct font "
"h - 'UInt_t' 0 kRaisedFrame|kDoubleBorder option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefaultSize",1408,G__TGTextButton_GetDefaultSize_6_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleKey",885,G__TGTextButton_HandleKey_7_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetText",709,G__TGTextButton_GetText_8_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTextJustify",1471,G__TGTextButton_SetTextJustify_9_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - tmode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetText",721,G__TGTextButton_SetText_0_1,121,-1,-1,0,1,1,1,0,"U 'TGHotString' - 0 - new_label",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGTextButton_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTextButton_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTextButton_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTextButton_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTextButton_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTextButton_Class_6_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTextButton_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTextButton_IsA_8_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTextButton_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTextButton_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTextButton",1212,G__TGTextButton_TGTextButton_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),-1,0,1,1,1,0,"u 'TGTextButton' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTextButton",1338,G__TGTextButton_wATGTextButton_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGPictureButton(void) {
   /* TGPictureButton */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGPictureButton",1523,G__TGPictureButton_TGPictureButton_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),-1,0,5,1,1,0,
"U 'TGWindow' - 0 - p U 'TGPicture' - 0 - pic "
"i - 'Int_t' 0 -1 id k - 'GContext_t' 0 fgDefaultGC norm "
"h - 'UInt_t' 0 kRaisedFrame|kDoubleBorder option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGPictureButton",1523,G__TGPictureButton_TGPictureButton_2_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGPicture' - 0 - pic "
"C - - 0 - cmd i - 'Int_t' 0 -1 id "
"k - 'GContext_t' 0 fgDefaultGC norm h - 'UInt_t' 0 kRaisedFrame|kDoubleBorder option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPicture",1032,G__TGPictureButton_SetPicture_3_0,121,-1,-1,0,1,1,1,0,"U 'TGPicture' - 0 - new_pic",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGPictureButton_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGPictureButton_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGPictureButton_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGPictureButton_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGPictureButton_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGPictureButton_Class_9_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGPictureButton_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGPictureButton_IsA_1_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGPictureButton_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGPictureButton_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGPictureButton",1523,G__TGPictureButton_TGPictureButton_4_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),-1,0,1,1,1,0,"u 'TGPictureButton' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGPictureButton",1649,G__TGPictureButton_wATGPictureButton_5_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGCheckButton(void) {
   /* TGCheckButton */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton));
   G__memfunc_setup("Init",404,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PSetState",893,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i 'EButtonState' - 0 - state",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGCheckButton",1269,G__TGCheckButton_TGCheckButton_3_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGHotString' - 0 - s "
"i - 'Int_t' 0 -1 id k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 0 option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGCheckButton",1269,G__TGCheckButton_TGCheckButton_4_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p C - - 0 - s "
"i - 'Int_t' 0 -1 id k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 0 option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGCheckButton",1269,G__TGCheckButton_TGCheckButton_5_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),-1,0,7,1,1,0,
"U 'TGWindow' - 0 - p C - - 0 - s "
"C - - 0 - cmd i - 'Int_t' 0 -1 id "
"k - 'GContext_t' 0 fgDefaultGC norm k - 'FontStruct_t' 0 fgDefaultFontStruct font "
"h - 'UInt_t' 0 0 option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefaultSize",1408,G__TGCheckButton_GetDefaultSize_7_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGCheckButton_HandleButton_8_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleKey",885,G__TGCheckButton_HandleKey_9_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleCrossing",1428,G__TGCheckButton_HandleCrossing_0_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetState",813,G__TGCheckButton_SetState_1_1,121,-1,-1,0,1,1,1,0,"i 'EButtonState' - 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGCheckButton_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGCheckButton_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGCheckButton_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGCheckButton_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGCheckButton_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGCheckButton_Class_7_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGCheckButton_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGCheckButton_IsA_9_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGCheckButton_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGCheckButton_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGCheckButton",1269,G__TGCheckButton_TGCheckButton_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),-1,0,1,1,1,0,"u 'TGCheckButton' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGCheckButton",1395,G__TGCheckButton_wATGCheckButton_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGRadioButton(void) {
   /* TGRadioButton */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton));
   G__memfunc_setup("Init",404,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PSetState",893,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i 'EButtonState' - 0 - state",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGRadioButton",1286,G__TGRadioButton_TGRadioButton_3_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGHotString' - 0 - s "
"i - 'Int_t' 0 -1 id k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 0 option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGRadioButton",1286,G__TGRadioButton_TGRadioButton_4_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p C - - 0 - s "
"i - 'Int_t' 0 -1 id k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 0 option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGRadioButton",1286,G__TGRadioButton_TGRadioButton_5_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),-1,0,7,1,1,0,
"U 'TGWindow' - 0 - p C - - 0 - s "
"C - - 0 - cmd i - 'Int_t' 0 -1 id "
"k - 'GContext_t' 0 fgDefaultGC norm k - 'FontStruct_t' 0 fgDefaultFontStruct font "
"h - 'UInt_t' 0 0 option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefaultSize",1408,G__TGRadioButton_GetDefaultSize_7_0,117,G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGRadioButton_HandleButton_8_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleKey",885,G__TGRadioButton_HandleKey_9_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleCrossing",1428,G__TGRadioButton_HandleCrossing_0_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetState",813,G__TGRadioButton_SetState_1_1,121,-1,-1,0,1,1,1,0,"i 'EButtonState' - 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGRadioButton_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGRadioButton_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGRadioButton_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGRadioButton_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGRadioButton_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGRadioButton_Class_7_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGRadioButton_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGRadioButton_IsA_9_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGRadioButton_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGRadioButton_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGRadioButton",1286,G__TGRadioButton_TGRadioButton_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),-1,0,1,1,1,0,"u 'TGRadioButton' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGRadioButton",1412,G__TGRadioButton_wATGRadioButton_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTextBuffer(void) {
   /* TGTextBuffer */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer));
   G__memfunc_setup("TGTextBuffer",1178,G__TGTextBuffer_TGTextBuffer_0_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGTextBuffer",1178,G__TGTextBuffer_TGTextBuffer_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer),-1,0,1,1,1,0,"i - 'Int_t' 0 - length",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextLength",1319,G__TGTextBuffer_GetTextLength_3_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBufferLength",1500,G__TGTextBuffer_GetBufferLength_4_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetString",919,G__TGTextBuffer_GetString_5_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddText",686,G__TGTextBuffer_AddText_6_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - pos C - - 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddText",686,G__TGTextBuffer_AddText_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - pos C - - 0 - text "
"i - 'Int_t' 0 - length",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RemoveText",1043,G__TGTextBuffer_RemoveText_8_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - pos i - 'Int_t' 0 - length",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Clear",487,G__TGTextBuffer_Clear_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TGTextBuffer_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTextBuffer_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTextBuffer_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTextBuffer_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTextBuffer_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTextBuffer_Class_5_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTextBuffer_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTextBuffer_IsA_7_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTextBuffer_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTextBuffer_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTextBuffer",1178,G__TGTextBuffer_TGTextBuffer_0_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer),-1,0,1,1,1,0,"u 'TGTextBuffer' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTextBuffer",1304,G__TGTextBuffer_wATGTextBuffer_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTextEntry(void) {
   /* TGTextEntry */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCharacterIndex",1701,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,1,1,2,0,"i - 'Int_t' 0 - xcoord",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PastePrimary",1249,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"k - 'Window_t' 0 - wid k - 'Atom_t' 0 - property "
"b - 'Bool_t' 0 - del",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGTextEntry",1106,G__TGTextEntry_TGTextEntry_3_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry),-1,0,7,1,1,0,
"U 'TGWindow' - 0 - p U 'TGTextBuffer' - 0 - text "
"i - 'Int_t' 0 -1 id k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 kSunkenFrame|kDoubleBorder option "
"k - 'ULong_t' 0 fgWhitePixel back",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBuffer",890,G__TGTextEntry_GetBuffer_5_0,85,G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleButton",1224,G__TGTextEntry_HandleButton_6_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleDoubleClick",1677,G__TGTextEntry_HandleDoubleClick_7_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGTextEntry_HandleMotion_8_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleKey",885,G__TGTextEntry_HandleKey_9_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleFocusChange",1682,G__TGTextEntry_HandleFocusChange_0_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleSelection",1522,G__TGTextEntry_HandleSelection_1_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTimer",1101,G__TGTextEntry_HandleTimer_2_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TTimer' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBorder",1004,G__TGTextEntry_DrawBorder_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetState",813,G__TGTextEntry_SetState_4_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGTextEntry_DeclFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTextEntry_DeclFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTextEntry_ImplFileName_7_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTextEntry_ImplFileLine_8_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTextEntry_Class_Version_9_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTextEntry_Class_0_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTextEntry_Dictionary_1_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTextEntry_IsA_2_2,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTextEntry_ShowMembers_3_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTextEntry_Streamer_4_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTextEntry",1106,G__TGTextEntry_TGTextEntry_5_2,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry),-1,0,1,1,1,0,"u 'TGTextEntry' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTextEntry",1232,G__TGTextEntry_wATGTextEntry_6_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGMsgBox(void) {
   /* TGMsgBox */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox));
   G__memfunc_setup("PMsgBox",672,(G__InterfaceMethod)NULL,121,-1,-1,0,6,1,2,0,
"U 'TGWindow' - 0 - main C - - 0 - title "
"C - - 0 - msg U 'TGPicture' - 0 - icon "
"i - 'Int_t' 0 - buttons I - 'Int_t' 0 - ret_code",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGMsgBox",747,G__TGMsgBox_TGMsgBox_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),-1,0,8,1,1,0,
"U 'TGWindow' - 0 - p U 'TGWindow' - 0 - main "
"C - - 0 - title C - - 0 - msg "
"U 'TGPicture' - 0 - icon i - 'Int_t' 0 kMBDismiss buttons "
"I - 'Int_t' 0 0 ret_code h - 'UInt_t' 0 kMainFrame|kVerticalFrame options",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGMsgBox",747,G__TGMsgBox_TGMsgBox_2_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),-1,0,8,1,1,0,
"U 'TGWindow' - 0 - p U 'TGWindow' - 0 - main "
"C - - 0 - title C - - 0 - msg "
"i 'EMsgBoxIcon' - 0 - icon i - 'Int_t' 0 kMBDismiss buttons "
"I - 'Int_t' 0 0 ret_code h - 'UInt_t' 0 kMainFrame|kVerticalFrame options",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CloseWindow",1134,G__TGMsgBox_CloseWindow_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessMessage",1444,G__TGMsgBox_ProcessMessage_5_0,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"l - 'Long_t' 0 - msg l - 'Long_t' 0 - parm1 "
"l - 'Long_t' 0 - parm2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGMsgBox_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGMsgBox_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGMsgBox_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGMsgBox_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGMsgBox_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGMsgBox_Class_1_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGMsgBox_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGMsgBox_IsA_3_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGMsgBox_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGMsgBox_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGMsgBox",747,G__TGMsgBox_TGMsgBox_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),-1,0,1,1,1,0,"u 'TGMsgBox' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGMsgBox",873,G__TGMsgBox_wATGMsgBox_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGPopupMenu(void) {
   /* TGPopupMenu */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu));
   G__memfunc_setup("DrawTrianglePattern",1954,(G__InterfaceMethod)NULL,121,-1,-1,0,5,1,2,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - l "
"i - 'Int_t' 0 - t i - 'Int_t' 0 - r "
"i - 'Int_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawCheckMark",1271,(G__InterfaceMethod)NULL,121,-1,-1,0,5,1,2,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - l "
"i - 'Int_t' 0 - t i - 'Int_t' 0 - r "
"i - 'Int_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawRCheckMark",1353,(G__InterfaceMethod)NULL,121,-1,-1,0,5,1,2,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - l "
"i - 'Int_t' 0 - t i - 'Int_t' 0 - r "
"i - 'Int_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawEntry",928,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'TGMenuEntry' - 0 - entry",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGPopupMenu",1092,G__TGPopupMenu_TGPopupMenu_5_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 10 w "
"h - 'UInt_t' 0 10 h h - 'UInt_t' 0 0 options",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Activate",817,G__TGPopupMenu_Activate_7_0,121,-1,-1,0,1,1,1,0,"U 'TGMenuEntry' - 0 - entry",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddEntry",795,G__TGPopupMenu_AddEntry_8_0,121,-1,-1,0,4,1,1,0,
"U 'TGHotString' - 0 - s i - 'Int_t' 0 - id "
"Y - - 0 0 ud U 'TGPicture' - 0 0 p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddEntry",795,G__TGPopupMenu_AddEntry_9_0,121,-1,-1,0,4,1,1,0,
"C - - 0 - s i - 'Int_t' 0 - id "
"Y - - 0 0 ud U 'TGPicture' - 0 0 p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddSeparator",1210,G__TGPopupMenu_AddSeparator_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddLabel",745,G__TGPopupMenu_AddLabel_1_1,121,-1,-1,0,2,1,1,0,
"U 'TGHotString' - 0 - s U 'TGPicture' - 0 0 p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddLabel",745,G__TGPopupMenu_AddLabel_2_1,121,-1,-1,0,2,1,1,0,
"C - - 0 - s U 'TGPicture' - 0 0 p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddPopup",797,G__TGPopupMenu_AddPopup_3_1,121,-1,-1,0,2,1,1,0,
"U 'TGHotString' - 0 - s U 'TGPopupMenu' - 0 - popup",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddPopup",797,G__TGPopupMenu_AddPopup_4_1,121,-1,-1,0,2,1,1,0,
"C - - 0 - s U 'TGPopupMenu' - 0 - popup",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EnableEntry",1113,G__TGPopupMenu_EnableEntry_5_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DisableEntry",1222,G__TGPopupMenu_DisableEntry_6_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsEntryEnabled",1401,G__TGPopupMenu_IsEntryEnabled_7_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DefaultEntry",1239,G__TGPopupMenu_DefaultEntry_8_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CheckEntry",1008,G__TGPopupMenu_CheckEntry_9_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UnCheckEntry",1203,G__TGPopupMenu_UnCheckEntry_0_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsEntryChecked",1397,G__TGPopupMenu_IsEntryChecked_1_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RCheckEntry",1090,G__TGPopupMenu_RCheckEntry_2_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - id i - 'Int_t' 0 - IDfirst "
"i - 'Int_t' 0 - IDlast",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsEntryRChecked",1479,G__TGPopupMenu_IsEntryRChecked_3_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"i - 'Int_t' 0 - id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PlaceMenu",890,G__TGPopupMenu_PlaceMenu_4_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"b - 'Bool_t' 0 - stick_mode b - 'Bool_t' 0 - grab_pointer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EndMenu",684,G__TGPopupMenu_EndMenu_5_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"Y - - 1 - userData",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBorder",1004,G__TGPopupMenu_DrawBorder_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGPopupMenu_HandleButton_7_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGPopupMenu_HandleMotion_8_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleCrossing",1428,G__TGPopupMenu_HandleCrossing_9_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTimer",1101,G__TGPopupMenu_HandleTimer_0_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TTimer' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Associate",924,G__TGPopupMenu_Associate_1_3,121,-1,-1,0,1,1,1,0,"U 'TGWindow' - 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGPopupMenu_DeclFileName_2_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGPopupMenu_DeclFileLine_3_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGPopupMenu_ImplFileName_4_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGPopupMenu_ImplFileLine_5_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGPopupMenu_Class_Version_6_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGPopupMenu_Class_7_3,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGPopupMenu_Dictionary_8_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGPopupMenu_IsA_9_3,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGPopupMenu_ShowMembers_0_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGPopupMenu_Streamer_1_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGPopupMenu",1092,G__TGPopupMenu_TGPopupMenu_2_4,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu),-1,0,1,1,1,0,"u 'TGPopupMenu' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGPopupMenu",1218,G__TGPopupMenu_wATGPopupMenu_3_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGMenuTitle(void) {
   /* TGMenuTitle */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle));
   G__memfunc_setup("DoRedraw",792,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGMenuTitle",1074,G__TGMenuTitle_TGMenuTitle_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle),-1,0,6,1,1,0,
"U 'TGWindow' - 0 - p U 'TGHotString' - 0 - s "
"U 'TGPopupMenu' - 0 - menu k - 'GContext_t' 0 fgDefaultGC norm "
"k - 'FontStruct_t' 0 fgDefaultFontStruct font h - 'UInt_t' 0 0 options",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetState",813,G__TGMenuTitle_SetState_3_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DoSendMessage",1282,G__TGMenuTitle_DoSendMessage_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetState",801,G__TGMenuTitle_GetState_5_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHotKeyCode",1263,G__TGMenuTitle_GetHotKeyCode_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGMenuTitle_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGMenuTitle_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGMenuTitle_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGMenuTitle_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGMenuTitle_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGMenuTitle_Class_2_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGMenuTitle_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGMenuTitle_IsA_4_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGMenuTitle_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGMenuTitle_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGMenuTitle",1074,G__TGMenuTitle_TGMenuTitle_7_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle),-1,0,1,1,1,0,"u 'TGMenuTitle' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGMenuTitle",1200,G__TGMenuTitle_wATGMenuTitle_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGMenuBar(void) {
   /* TGMenuBar */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar));
   G__memfunc_setup("AddFrame",756,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"U 'TGFrame' - 0 - f U 'TGLayoutHints' - 0 0 l",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TGMenuBar",837,G__TGMenuBar_TGMenuBar_1_0,105,G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),-1,0,4,1,1,0,
"U 'TGWindow' - 0 - p h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 kHorizontalFrame|kRaisedFrame options",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddPopup",797,G__TGMenuBar_AddPopup_3_0,121,-1,-1,0,3,1,1,0,
"U 'TGHotString' - 0 - s U 'TGPopupMenu' - 0 - menu "
"U 'TGLayoutHints' - 0 - l",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddPopup",797,G__TGMenuBar_AddPopup_4_0,121,-1,-1,0,3,1,1,0,
"C - - 0 - s U 'TGPopupMenu' - 0 - menu "
"U 'TGLayoutHints' - 0 - l",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleButton",1224,G__TGMenuBar_HandleButton_5_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleMotion",1218,G__TGMenuBar_HandleMotion_6_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleKey",885,G__TGMenuBar_HandleKey_7_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'Event_t' - 0 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGMenuBar_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGMenuBar_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGMenuBar_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGMenuBar_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGMenuBar_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGMenuBar_Class_3_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGMenuBar_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGMenuBar_IsA_5_1,85,G__get_linked_tagnum(&G__G__Gui1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGMenuBar_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGMenuBar_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGMenuBar",837,G__TGMenuBar_TGMenuBar_8_1,(int)('i'),G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),-1,0,1,1,1,0,"u 'TGMenuBar' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGMenuBar",963,G__TGMenuBar_wATGMenuBar_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Gui1() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Gui1() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)(&gClient),85,0,0,G__get_linked_tagnum(&G__G__Gui1LN_TGClient),-1,-1,1,"gClient=",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsNoHints=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsLeft=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsCenterX=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsRight=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsTop=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsCenterY=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsBottom=32",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsExpandX=64",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsExpandY=128",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),-1,-1,1,"kLHintsNormal=9",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameState),-1,-1,1,"kIsVisible=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameState),-1,-1,1,"kIsMapped=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameState),-1,-1,1,"kIsArranged=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kChildFrame=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kMainFrame=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kVerticalFrame=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kHorizontalFrame=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kSunkenFrame=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kRaisedFrame=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kDoubleBorder=32",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kFitWidth=64",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kFixedWidth=128",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kFitHeight=256",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kFixedHeight=512",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),-1,-1,1,"kFixedSize=640",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMFuncAll=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMFuncResize=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMFuncMove=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMFuncMinimize=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMFuncMaximize=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMFuncClose=32",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMInputModeless=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMInputPrimaryApplicationModal=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMInputSystemModal=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMInputFullApplicationModal=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMDecorAll=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMDecorBorder=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMDecorResizeH=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMDecorTitle=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMDecorMenu=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMDecorMinimize=32",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),-1,-1,1,"kMWMDecorMaximize=64",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ETextJustification),-1,-1,1,"kTextLeft=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ETextJustification),-1,-1,1,"kTextRight=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ETextJustification),-1,-1,1,"kTextCenterX=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ETextJustification),-1,-1,1,"kTextTop=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ETextJustification),-1,-1,1,"kTextBottom=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_ETextJustification),-1,-1,1,"kTextCenterY=32",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetStatus),-1,-1,1,"kWidgetWantFocus=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetStatus),-1,-1,1,"kWidgetHasFocus=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetStatus),-1,-1,1,"kWidgetIsEnabled=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_COMMAND=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCM_MENU=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCM_MENUSELECT=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCM_BUTTON=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCM_CHECKBUTTON=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCM_RADIOBUTTON=5",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCM_LISTBOX=6",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCM_COMBOBOX=7",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCM_TAB=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_HSCROLL=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_VSCROLL=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kSB_LINEUP=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kSB_LINEDOWN=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kSB_PAGEUP=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kSB_PAGEDOWN=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kSB_SLIDERTRACK=5",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kSB_SLIDERPOS=6",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_TEXTENTRY=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kTE_TEXTCHANGED=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kTE_ENTER=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_CONTAINER=5",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCT_ITEMCLICK=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCT_ITEMDBLCLICK=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kCT_SELCHANGED=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_HSLIDER=6",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_VSLIDER=7",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kSL_POS=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kSL_TRACK=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_LISTTREE=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),-1,-1,1,"kC_MSGMAX=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),-1,-1,1,"kButtonUp=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),-1,-1,1,"kButtonDown=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),-1,-1,1,"kButtonEngaged=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),-1,-1,1,"kButtonDisabled=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxIcon),-1,-1,1,"kMBIconStop=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxIcon),-1,-1,1,"kMBIconQuestion=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxIcon),-1,-1,1,"kMBIconExclamation=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxIcon),-1,-1,1,"kMBIconAsterisk=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBYes=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBNo=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBOk=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBApply=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBRetry=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBIgnore=32",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBCancel=64",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBClose=128",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),-1,-1,1,"kMBDismiss=256",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryState),-1,-1,1,"kMenuActiveMask=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryState),-1,-1,1,"kMenuEnableMask=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryState),-1,-1,1,"kMenuDefaultMask=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryState),-1,-1,1,"kMenuCheckedMask=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryState),-1,-1,1,"kMenuRadioMask=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryType),-1,-1,1,"kMenuSeparator=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryType),-1,-1,1,"kMenuLabel=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryType),-1,-1,1,"kMenuEntry=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryType),-1,-1,1,"kMenuPopup=3",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Gui1() {
   G__lastifuncposition();

   G__memfunc_setup("MK_MSG",478,G___MK_MSG_6_14,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i 'EWidgetMessageTypes' - 0 - msg i 'EWidgetMessageTypes' - 0 - submsg",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("GET_MSG",550,G___GET_MSG_7_14,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"l - 'Long_t' 0 - val",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("GET_SUBMSG",784,G___GET_SUBMSG_8_14,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"l - 'Long_t' 0 - val",(char*)NULL
,(void*)NULL,0);

   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__Gui1LN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TTimer = { "TTimer" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TRefCnt = { "TRefCnt" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_EGEventType = { "EGEventType" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_PictureAttributes_t = { "PictureAttributes_t" , 115 , -1 };
G__linked_taginfo G__G__Gui1LN_TGClient = { "TGClient" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGObject = { "TGObject" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_THashList = { "THashList" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGWindow = { "TGWindow" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGPicturePool = { "TGPicturePool" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGPicture = { "TGPicture" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGMimeTypes = { "TGMimeTypes" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_THashTable = { "THashTable" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGSelectedPicture = { "TGSelectedPicture" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGDimension = { "TGDimension" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGPosition = { "TGPosition" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_ELayoutHints = { "ELayoutHints" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_TGFrame = { "TGFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGCompositeFrame = { "TGCompositeFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGLayoutHints = { "TGLayoutHints" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGFrameElement = { "TGFrameElement" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGLayoutManager = { "TGLayoutManager" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGVerticalLayout = { "TGVerticalLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGHorizontalLayout = { "TGHorizontalLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGRowLayout = { "TGRowLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGColumnLayout = { "TGColumnLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGMatrixLayout = { "TGMatrixLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGTileLayout = { "TGTileLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGListLayout = { "TGListLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGListDetailsLayout = { "TGListDetailsLayout" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGString = { "TGString" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGHotString = { "TGHotString" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_EFrameState = { "EFrameState" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_EFrameType = { "EFrameType" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_EMWMHints = { "EMWMHints" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_TGVerticalFrame = { "TGVerticalFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGHorizontalFrame = { "TGHorizontalFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGMainFrame = { "TGMainFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGTransientFrame = { "TGTransientFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGGroupFrame = { "TGGroupFrame" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_ETextJustification = { "ETextJustification" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_EWidgetStatus = { "EWidgetStatus" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_EWidgetMessageTypes = { "EWidgetMessageTypes" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_TGWidget = { "TGWidget" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGIcon = { "TGIcon" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGLabel = { "TGLabel" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_EButtonState = { "EButtonState" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_TGToolTip = { "TGToolTip" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGButton = { "TGButton" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGTextButton = { "TGTextButton" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGPictureButton = { "TGPictureButton" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGCheckButton = { "TGCheckButton" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGRadioButton = { "TGRadioButton" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGTextBuffer = { "TGTextBuffer" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TBlinkTimer = { "TBlinkTimer" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGTextEntry = { "TGTextEntry" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_EMsgBoxIcon = { "EMsgBoxIcon" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_EMsgBoxButton = { "EMsgBoxButton" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_TGMsgBox = { "TGMsgBox" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_EMenuEntryState = { "EMenuEntryState" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_EMenuEntryType = { "EMenuEntryType" , 101 , -1 };
G__linked_taginfo G__G__Gui1LN_TGPopupMenu = { "TGPopupMenu" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGMenuEntry = { "TGMenuEntry" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGMenuTitle = { "TGMenuTitle" , 99 , -1 };
G__linked_taginfo G__G__Gui1LN_TGMenuBar = { "TGMenuBar" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__Gui1() {
  G__G__Gui1LN_TClass.tagnum = -1 ;
  G__G__Gui1LN_TList.tagnum = -1 ;
  G__G__Gui1LN_TTimer.tagnum = -1 ;
  G__G__Gui1LN_TObject.tagnum = -1 ;
  G__G__Gui1LN_TRefCnt.tagnum = -1 ;
  G__G__Gui1LN_TString.tagnum = -1 ;
  G__G__Gui1LN_EGEventType.tagnum = -1 ;
  G__G__Gui1LN_PictureAttributes_t.tagnum = -1 ;
  G__G__Gui1LN_TGClient.tagnum = -1 ;
  G__G__Gui1LN_TGObject.tagnum = -1 ;
  G__G__Gui1LN_THashList.tagnum = -1 ;
  G__G__Gui1LN_TGWindow.tagnum = -1 ;
  G__G__Gui1LN_TGPicturePool.tagnum = -1 ;
  G__G__Gui1LN_TGPicture.tagnum = -1 ;
  G__G__Gui1LN_TGMimeTypes.tagnum = -1 ;
  G__G__Gui1LN_THashTable.tagnum = -1 ;
  G__G__Gui1LN_TGSelectedPicture.tagnum = -1 ;
  G__G__Gui1LN_TGDimension.tagnum = -1 ;
  G__G__Gui1LN_TGPosition.tagnum = -1 ;
  G__G__Gui1LN_ELayoutHints.tagnum = -1 ;
  G__G__Gui1LN_TGFrame.tagnum = -1 ;
  G__G__Gui1LN_TGCompositeFrame.tagnum = -1 ;
  G__G__Gui1LN_TGLayoutHints.tagnum = -1 ;
  G__G__Gui1LN_TGFrameElement.tagnum = -1 ;
  G__G__Gui1LN_TGLayoutManager.tagnum = -1 ;
  G__G__Gui1LN_TGVerticalLayout.tagnum = -1 ;
  G__G__Gui1LN_TGHorizontalLayout.tagnum = -1 ;
  G__G__Gui1LN_TGRowLayout.tagnum = -1 ;
  G__G__Gui1LN_TGColumnLayout.tagnum = -1 ;
  G__G__Gui1LN_TGMatrixLayout.tagnum = -1 ;
  G__G__Gui1LN_TGTileLayout.tagnum = -1 ;
  G__G__Gui1LN_TGListLayout.tagnum = -1 ;
  G__G__Gui1LN_TGListDetailsLayout.tagnum = -1 ;
  G__G__Gui1LN_TGString.tagnum = -1 ;
  G__G__Gui1LN_TGHotString.tagnum = -1 ;
  G__G__Gui1LN_EFrameState.tagnum = -1 ;
  G__G__Gui1LN_EFrameType.tagnum = -1 ;
  G__G__Gui1LN_EMWMHints.tagnum = -1 ;
  G__G__Gui1LN_TGVerticalFrame.tagnum = -1 ;
  G__G__Gui1LN_TGHorizontalFrame.tagnum = -1 ;
  G__G__Gui1LN_TGMainFrame.tagnum = -1 ;
  G__G__Gui1LN_TGTransientFrame.tagnum = -1 ;
  G__G__Gui1LN_TGGroupFrame.tagnum = -1 ;
  G__G__Gui1LN_ETextJustification.tagnum = -1 ;
  G__G__Gui1LN_EWidgetStatus.tagnum = -1 ;
  G__G__Gui1LN_EWidgetMessageTypes.tagnum = -1 ;
  G__G__Gui1LN_TGWidget.tagnum = -1 ;
  G__G__Gui1LN_TGIcon.tagnum = -1 ;
  G__G__Gui1LN_TGLabel.tagnum = -1 ;
  G__G__Gui1LN_EButtonState.tagnum = -1 ;
  G__G__Gui1LN_TGToolTip.tagnum = -1 ;
  G__G__Gui1LN_TGButton.tagnum = -1 ;
  G__G__Gui1LN_TGTextButton.tagnum = -1 ;
  G__G__Gui1LN_TGPictureButton.tagnum = -1 ;
  G__G__Gui1LN_TGCheckButton.tagnum = -1 ;
  G__G__Gui1LN_TGRadioButton.tagnum = -1 ;
  G__G__Gui1LN_TGTextBuffer.tagnum = -1 ;
  G__G__Gui1LN_TBlinkTimer.tagnum = -1 ;
  G__G__Gui1LN_TGTextEntry.tagnum = -1 ;
  G__G__Gui1LN_EMsgBoxIcon.tagnum = -1 ;
  G__G__Gui1LN_EMsgBoxButton.tagnum = -1 ;
  G__G__Gui1LN_TGMsgBox.tagnum = -1 ;
  G__G__Gui1LN_EMenuEntryState.tagnum = -1 ;
  G__G__Gui1LN_EMenuEntryType.tagnum = -1 ;
  G__G__Gui1LN_TGPopupMenu.tagnum = -1 ;
  G__G__Gui1LN_TGMenuEntry.tagnum = -1 ;
  G__G__Gui1LN_TGMenuTitle.tagnum = -1 ;
  G__G__Gui1LN_TGMenuBar.tagnum = -1 ;
}

extern "C" void G__cpp_setup_tagtableG__Gui1() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGClient),sizeof(TGClient),-1,0,"Class making connection to display server",G__setup_memvarTGClient,G__setup_memfuncTGClient);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGObject),sizeof(TGObject),-1,0,"ROOT GUI base class",G__setup_memvarTGObject,G__setup_memfuncTGObject);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGWindow),sizeof(TGWindow),-1,0,"GUI Window base class",G__setup_memvarTGWindow,G__setup_memfuncTGWindow);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicturePool),sizeof(TGPicturePool),-1,0,"Picture and icon cache",G__setup_memvarTGPicturePool,G__setup_memfuncTGPicturePool);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPicture),sizeof(TGPicture),-1,0,"Pictures and icons used by the GUI classes",G__setup_memvarTGPicture,G__setup_memfuncTGPicture);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGSelectedPicture),sizeof(TGSelectedPicture),-1,0,"Selected looking picture",G__setup_memvarTGSelectedPicture,G__setup_memfuncTGSelectedPicture);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGDimension),sizeof(TGDimension),-1,0,"Dimension object (width, height)",G__setup_memvarTGDimension,G__setup_memfuncTGDimension);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPosition),sizeof(TGPosition),-1,0,"Position object (x and y)",G__setup_memvarTGPosition,G__setup_memfuncTGPosition);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_ELayoutHints),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrame),sizeof(TGFrame),-1,0,"Base class for simple widgets (button, etc.)",G__setup_memvarTGFrame,G__setup_memfuncTGFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCompositeFrame),sizeof(TGCompositeFrame),-1,0,"Base class for composite widgets (menubars, etc.)",G__setup_memvarTGCompositeFrame,G__setup_memfuncTGCompositeFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutHints),sizeof(TGLayoutHints),-1,0,"Class describing GUI layout hints",G__setup_memvarTGLayoutHints,G__setup_memfuncTGLayoutHints);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGFrameElement),sizeof(TGFrameElement),-1,0,(char*)NULL,G__setup_memvarTGFrameElement,G__setup_memfuncTGFrameElement);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLayoutManager),sizeof(TGLayoutManager),-1,2,"Layout manager abstract base class",G__setup_memvarTGLayoutManager,G__setup_memfuncTGLayoutManager);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalLayout),sizeof(TGVerticalLayout),-1,0,"Vertical layout manager",G__setup_memvarTGVerticalLayout,G__setup_memfuncTGVerticalLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalLayout),sizeof(TGHorizontalLayout),-1,0,"Horizontal layout manager",G__setup_memvarTGHorizontalLayout,G__setup_memfuncTGHorizontalLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRowLayout),sizeof(TGRowLayout),-1,0,"Row layout manager",G__setup_memvarTGRowLayout,G__setup_memfuncTGRowLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGColumnLayout),sizeof(TGColumnLayout),-1,0,"Column layout manager",G__setup_memvarTGColumnLayout,G__setup_memfuncTGColumnLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMatrixLayout),sizeof(TGMatrixLayout),-1,0,"Matrix layout manager",G__setup_memvarTGMatrixLayout,G__setup_memfuncTGMatrixLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTileLayout),sizeof(TGTileLayout),-1,0,"Tile layout manager",G__setup_memvarTGTileLayout,G__setup_memfuncTGTileLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListLayout),sizeof(TGListLayout),-1,0,"Layout manager for TGListView widget",G__setup_memvarTGListLayout,G__setup_memfuncTGListLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGListDetailsLayout),sizeof(TGListDetailsLayout),-1,0,"Layout manager for TGListView details",G__setup_memvarTGListDetailsLayout,G__setup_memfuncTGListDetailsLayout);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGString),sizeof(TGString),-1,0,"Graphics string",G__setup_memvarTGString,G__setup_memfuncTGString);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHotString),sizeof(TGHotString),-1,0,"Graphics string with hot character",G__setup_memvarTGHotString,G__setup_memfuncTGHotString);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EFrameState),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EFrameType),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EMWMHints),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGVerticalFrame),sizeof(TGVerticalFrame),-1,0,"Composite frame with vertical child layout",G__setup_memvarTGVerticalFrame,G__setup_memfuncTGVerticalFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGHorizontalFrame),sizeof(TGHorizontalFrame),-1,0,"Composite frame with horizontal child layout",G__setup_memvarTGHorizontalFrame,G__setup_memfuncTGHorizontalFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMainFrame),sizeof(TGMainFrame),-1,0,"Top level window frame",G__setup_memvarTGMainFrame,G__setup_memfuncTGMainFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTransientFrame),sizeof(TGTransientFrame),-1,0,"Frame for dialog (transient) windows",G__setup_memvarTGTransientFrame,G__setup_memfuncTGTransientFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGGroupFrame),sizeof(TGGroupFrame),-1,0,"A composite frame with border and title",G__setup_memvarTGGroupFrame,G__setup_memfuncTGGroupFrame);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_ETextJustification),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EWidgetStatus),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EWidgetMessageTypes),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGWidget),sizeof(TGWidget),-1,0,"Widget base class",G__setup_memvarTGWidget,G__setup_memfuncTGWidget);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGIcon),sizeof(TGIcon),-1,0,"Icon GUI class",G__setup_memvarTGIcon,G__setup_memfuncTGIcon);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGLabel),sizeof(TGLabel),-1,0,"A label GUI element",G__setup_memvarTGLabel,G__setup_memfuncTGLabel);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EButtonState),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGButton),sizeof(TGButton),-1,0,"Button widget abstract base class",G__setup_memvarTGButton,G__setup_memfuncTGButton);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextButton),sizeof(TGTextButton),-1,0,"A text button widget",G__setup_memvarTGTextButton,G__setup_memfuncTGTextButton);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPictureButton),sizeof(TGPictureButton),-1,0,"A picture button widget",G__setup_memvarTGPictureButton,G__setup_memfuncTGPictureButton);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGCheckButton),sizeof(TGCheckButton),-1,0,"A check button widget",G__setup_memvarTGCheckButton,G__setup_memfuncTGCheckButton);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGRadioButton),sizeof(TGRadioButton),-1,0,"A radio button widget",G__setup_memvarTGRadioButton,G__setup_memfuncTGRadioButton);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextBuffer),sizeof(TGTextBuffer),-1,0,"Text buffer used by widgets like TGTextEntry, etc.",G__setup_memvarTGTextBuffer,G__setup_memfuncTGTextBuffer);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGTextEntry),sizeof(TGTextEntry),-1,0,"One line text entry widget",G__setup_memvarTGTextEntry,G__setup_memfuncTGTextEntry);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxIcon),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EMsgBoxButton),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMsgBox),sizeof(TGMsgBox),-1,0,"A message dialog box",G__setup_memvarTGMsgBox,G__setup_memfuncTGMsgBox);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryState),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_EMenuEntryType),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGPopupMenu),sizeof(TGPopupMenu),-1,0,"Popup menu",G__setup_memvarTGPopupMenu,G__setup_memfuncTGPopupMenu);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuTitle),sizeof(TGMenuTitle),-1,0,"Menu title class",G__setup_memvarTGMenuTitle,G__setup_memfuncTGMenuTitle);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Gui1LN_TGMenuBar),sizeof(TGMenuBar),-1,0,"Menu bar class",G__setup_memvarTGMenuBar,G__setup_memfuncTGMenuBar);
}
extern "C" void G__cpp_setupG__Gui1() {
  G__check_setup_version(51111,"G__cpp_setupG__Gui1()");
  G__set_cpp_environmentG__Gui1();
  G__cpp_setup_tagtableG__Gui1();

  G__cpp_setup_inheritanceG__Gui1();

  G__cpp_setup_typetableG__Gui1();

  G__cpp_setup_memvarG__Gui1();

  G__cpp_setup_memfuncG__Gui1();
  G__cpp_setup_globalG__Gui1();
  G__cpp_setup_funcG__Gui1();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Gui1();
  return;
}
class G__cpp_setup_initG__Gui1 {
  public:
    G__cpp_setup_initG__Gui1() { G__add_setup_func("G__Gui1",&G__cpp_setupG__Gui1); }
   ~G__cpp_setup_initG__Gui1() { G__remove_setup_func("G__Gui1"); }
};
G__cpp_setup_initG__Gui1 G__cpp_setup_initializerG__Gui1;

//
// File generated by /user/brun/root/bin/rootcint at Mon Mar 15 08:52:05 1999.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGClient *&obj)
{
   // Read a pointer to an object of class TGClient.

   obj = (TGClient *) buf.ReadObject(TGClient::Class());
   return buf;
}

//______________________________________________________________________________
void TGClient::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGClient.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TGClient::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGClient.

   TClass *R__cl  = TGClient::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fBackColor", &fBackColor);
   R__insp.Inspect(R__cl, R__parent, "fForeColor", &fForeColor);
   R__insp.Inspect(R__cl, R__parent, "fHilite", &fHilite);
   R__insp.Inspect(R__cl, R__parent, "fShadow", &fShadow);
   R__insp.Inspect(R__cl, R__parent, "fSelBackColor", &fSelBackColor);
   R__insp.Inspect(R__cl, R__parent, "fSelForeColor", &fSelForeColor);
   R__insp.Inspect(R__cl, R__parent, "fWhite", &fWhite);
   R__insp.Inspect(R__cl, R__parent, "fBlack", &fBlack);
   R__insp.Inspect(R__cl, R__parent, "*fRoot", &fRoot);
   R__insp.Inspect(R__cl, R__parent, "fXfd", &fXfd);
   R__insp.Inspect(R__cl, R__parent, "*fPicturePool", &fPicturePool);
   R__insp.Inspect(R__cl, R__parent, "*fMimeTypeList", &fMimeTypeList);
   R__insp.Inspect(R__cl, R__parent, "fGlobalNeedRedraw", &fGlobalNeedRedraw);
   R__insp.Inspect(R__cl, R__parent, "*fWlist", &fWlist);
   R__insp.Inspect(R__cl, R__parent, "fWaitForEvent", &fWaitForEvent);
   R__insp.Inspect(R__cl, R__parent, "fWaitForWindow", &fWaitForWindow);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGObject *&obj)
{
   // Read a pointer to an object of class TGObject.

   obj = (TGObject *) buf.ReadObject(TGObject::Class());
   return buf;
}

//______________________________________________________________________________
void TGObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGObject.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TGObject::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGObject.

   TClass *R__cl  = TGObject::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fId", &fId);
   R__insp.Inspect(R__cl, R__parent, "*fClient", &fClient);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGWindow *&obj)
{
   // Read a pointer to an object of class TGWindow.

   obj = (TGWindow *) buf.ReadObject(TGWindow::Class());
   return buf;
}

//______________________________________________________________________________
void TGWindow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGWindow.

   TGObject::Streamer(R__b);
}

//______________________________________________________________________________
void TGWindow::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGWindow.

   TClass *R__cl  = TGWindow::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fParent", &fParent);
   R__insp.Inspect(R__cl, R__parent, "fNeedRedraw", &fNeedRedraw);
   TGObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGPicturePool *&obj)
{
   // Read a pointer to an object of class TGPicturePool.

   obj = (TGPicturePool *) buf.ReadObject(TGPicturePool::Class());
   return buf;
}

//______________________________________________________________________________
void TGPicturePool::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPicturePool.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TGPicturePool::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGPicturePool.

   TClass *R__cl  = TGPicturePool::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fClient", &fClient);
   fPath.ShowMembers(R__insp, strcat(R__parent,"fPath.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fPicList", &fPicList);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGPicture *&obj)
{
   // Read a pointer to an object of class TGPicture.

   obj = (TGPicture *) buf.ReadObject(TGPicture::Class());
   return buf;
}

//______________________________________________________________________________
void TGPicture::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPicture.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TGPicture::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGPicture.

   TClass *R__cl  = TGPicture::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fName.ShowMembers(R__insp, strcat(R__parent,"fName.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fScaled", &fScaled);
   R__insp.Inspect(R__cl, R__parent, "fPic", &fPic);
   R__insp.Inspect(R__cl, R__parent, "fMask", &fMask);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGSelectedPicture *&obj)
{
   // Read a pointer to an object of class TGSelectedPicture.

   obj = (TGSelectedPicture *) buf.ReadObject(TGSelectedPicture::Class());
   return buf;
}

//______________________________________________________________________________
void TGSelectedPicture::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSelectedPicture.

   TGPicture::Streamer(R__b);
}

//______________________________________________________________________________
void TGSelectedPicture::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGSelectedPicture.

   TClass *R__cl  = TGSelectedPicture::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fClient", &fClient);
   TGPicture::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGDimension *&obj)
{
   // Read a pointer to an object of class TGDimension.

   ::Error("TGDimension::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TGDimension::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDimension.

   ::Error("TGDimension::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TGDimension::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGDimension.

   TClass *R__cl  = TGDimension::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fWidth", &fWidth);
   R__insp.Inspect(R__cl, R__parent, "fHeight", &fHeight);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGPosition *&obj)
{
   // Read a pointer to an object of class TGPosition.

   ::Error("TGPosition::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TGPosition::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPosition.

   ::Error("TGPosition::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TGPosition::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGPosition.

   TClass *R__cl  = TGPosition::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGFrame *&obj)
{
   // Read a pointer to an object of class TGFrame.

   obj = (TGFrame *) buf.ReadObject(TGFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TGFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFrame.

   TGWindow::Streamer(R__b);
}

//______________________________________________________________________________
void TGFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGFrame.

   TClass *R__cl  = TGFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
   R__insp.Inspect(R__cl, R__parent, "fWidth", &fWidth);
   R__insp.Inspect(R__cl, R__parent, "fHeight", &fHeight);
   R__insp.Inspect(R__cl, R__parent, "fBorderWidth", &fBorderWidth);
   R__insp.Inspect(R__cl, R__parent, "fOptions", &fOptions);
   R__insp.Inspect(R__cl, R__parent, "fBackground", &fBackground);
   TGWindow::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGCompositeFrame *&obj)
{
   // Read a pointer to an object of class TGCompositeFrame.

   obj = (TGCompositeFrame *) buf.ReadObject(TGCompositeFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TGCompositeFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGCompositeFrame.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGCompositeFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGCompositeFrame.

   TClass *R__cl  = TGCompositeFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLayoutManager", &fLayoutManager);
   R__insp.Inspect(R__cl, R__parent, "*fList", &fList);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGLayoutHints *&obj)
{
   // Read a pointer to an object of class TGLayoutHints.

   obj = (TGLayoutHints *) buf.ReadObject(TGLayoutHints::Class());
   return buf;
}

//______________________________________________________________________________
void TGLayoutHints::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLayoutHints.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TGLayoutHints::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGLayoutHints.

   TClass *R__cl  = TGLayoutHints::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fLayoutHints", &fLayoutHints);
   R__insp.Inspect(R__cl, R__parent, "fPadtop", &fPadtop);
   R__insp.Inspect(R__cl, R__parent, "fPadbottom", &fPadbottom);
   R__insp.Inspect(R__cl, R__parent, "fPadleft", &fPadleft);
   R__insp.Inspect(R__cl, R__parent, "fPadright", &fPadright);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGLayoutManager *&obj)
{
   // Read a pointer to an object of class TGLayoutManager.

   obj = (TGLayoutManager *) buf.ReadObject(TGLayoutManager::Class());
   return buf;
}

//______________________________________________________________________________
void TGLayoutManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLayoutManager.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TGLayoutManager::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGLayoutManager.

   TClass *R__cl  = TGLayoutManager::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGVerticalLayout *&obj)
{
   // Read a pointer to an object of class TGVerticalLayout.

   obj = (TGVerticalLayout *) buf.ReadObject(TGVerticalLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGVerticalLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVerticalLayout.

   TGLayoutManager::Streamer(R__b);
}

//______________________________________________________________________________
void TGVerticalLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGVerticalLayout.

   TClass *R__cl  = TGVerticalLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMain", &fMain);
   R__insp.Inspect(R__cl, R__parent, "*fList", &fList);
   TGLayoutManager::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGHorizontalLayout *&obj)
{
   // Read a pointer to an object of class TGHorizontalLayout.

   obj = (TGHorizontalLayout *) buf.ReadObject(TGHorizontalLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGHorizontalLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHorizontalLayout.

   TGVerticalLayout::Streamer(R__b);
}

//______________________________________________________________________________
void TGHorizontalLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGHorizontalLayout.

   TClass *R__cl  = TGHorizontalLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGVerticalLayout::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGRowLayout *&obj)
{
   // Read a pointer to an object of class TGRowLayout.

   obj = (TGRowLayout *) buf.ReadObject(TGRowLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGRowLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRowLayout.

   TGVerticalLayout::Streamer(R__b);
}

//______________________________________________________________________________
void TGRowLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGRowLayout.

   TClass *R__cl  = TGRowLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSep", &fSep);
   TGVerticalLayout::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGColumnLayout *&obj)
{
   // Read a pointer to an object of class TGColumnLayout.

   obj = (TGColumnLayout *) buf.ReadObject(TGColumnLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGColumnLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGColumnLayout.

   TGRowLayout::Streamer(R__b);
}

//______________________________________________________________________________
void TGColumnLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGColumnLayout.

   TClass *R__cl  = TGColumnLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGRowLayout::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGMatrixLayout *&obj)
{
   // Read a pointer to an object of class TGMatrixLayout.

   obj = (TGMatrixLayout *) buf.ReadObject(TGMatrixLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGMatrixLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMatrixLayout.

   TGLayoutManager::Streamer(R__b);
}

//______________________________________________________________________________
void TGMatrixLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGMatrixLayout.

   TClass *R__cl  = TGMatrixLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMain", &fMain);
   R__insp.Inspect(R__cl, R__parent, "*fList", &fList);
   R__insp.Inspect(R__cl, R__parent, "fSep", &fSep);
   R__insp.Inspect(R__cl, R__parent, "fHints", &fHints);
   R__insp.Inspect(R__cl, R__parent, "fRows", &fRows);
   R__insp.Inspect(R__cl, R__parent, "fColumns", &fColumns);
   TGLayoutManager::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTileLayout *&obj)
{
   // Read a pointer to an object of class TGTileLayout.

   obj = (TGTileLayout *) buf.ReadObject(TGTileLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGTileLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTileLayout.

   TGLayoutManager::Streamer(R__b);
}

//______________________________________________________________________________
void TGTileLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTileLayout.

   TClass *R__cl  = TGTileLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSep", &fSep);
   R__insp.Inspect(R__cl, R__parent, "*fMain", &fMain);
   R__insp.Inspect(R__cl, R__parent, "*fList", &fList);
   TGLayoutManager::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGListLayout *&obj)
{
   // Read a pointer to an object of class TGListLayout.

   obj = (TGListLayout *) buf.ReadObject(TGListLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGListLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListLayout.

   TGTileLayout::Streamer(R__b);
}

//______________________________________________________________________________
void TGListLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGListLayout.

   TClass *R__cl  = TGListLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGTileLayout::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGListDetailsLayout *&obj)
{
   // Read a pointer to an object of class TGListDetailsLayout.

   obj = (TGListDetailsLayout *) buf.ReadObject(TGListDetailsLayout::Class());
   return buf;
}

//______________________________________________________________________________
void TGListDetailsLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListDetailsLayout.

   TGTileLayout::Streamer(R__b);
}

//______________________________________________________________________________
void TGListDetailsLayout::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGListDetailsLayout.

   TClass *R__cl  = TGListDetailsLayout::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGTileLayout::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGString *&obj)
{
   // Read a pointer to an object of class TGString.

   ::Error("TGString::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TGString::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGString.

   ::Error("TGString::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TGString::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGString.

   TClass *R__cl  = TGString::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fString.ShowMembers(R__insp, strcat(R__parent,"fString.")); R__parent[R__ncp] = 0;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGHotString *&obj)
{
   // Read a pointer to an object of class TGHotString.

   ::Error("TGHotString::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TGHotString::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHotString.

   TGString::Streamer(R__b);
}

//______________________________________________________________________________
void TGHotString::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGHotString.

   TClass *R__cl  = TGHotString::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fHotChar", &fHotChar);
   R__insp.Inspect(R__cl, R__parent, "fHotPos", &fHotPos);
   R__insp.Inspect(R__cl, R__parent, "fLastGC", &fLastGC);
   R__insp.Inspect(R__cl, R__parent, "fOff1", &fOff1);
   R__insp.Inspect(R__cl, R__parent, "fOff2", &fOff2);
   TGString::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGVerticalFrame *&obj)
{
   // Read a pointer to an object of class TGVerticalFrame.

   obj = (TGVerticalFrame *) buf.ReadObject(TGVerticalFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TGVerticalFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVerticalFrame.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGVerticalFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGVerticalFrame.

   TClass *R__cl  = TGVerticalFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGHorizontalFrame *&obj)
{
   // Read a pointer to an object of class TGHorizontalFrame.

   obj = (TGHorizontalFrame *) buf.ReadObject(TGHorizontalFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TGHorizontalFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHorizontalFrame.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGHorizontalFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGHorizontalFrame.

   TClass *R__cl  = TGHorizontalFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGMainFrame *&obj)
{
   // Read a pointer to an object of class TGMainFrame.

   obj = (TGMainFrame *) buf.ReadObject(TGMainFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TGMainFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMainFrame.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGMainFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGMainFrame.

   TClass *R__cl  = TGMainFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fBindList", &fBindList);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTransientFrame *&obj)
{
   // Read a pointer to an object of class TGTransientFrame.

   obj = (TGTransientFrame *) buf.ReadObject(TGTransientFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TGTransientFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTransientFrame.

   TGMainFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGTransientFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTransientFrame.

   TClass *R__cl  = TGTransientFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMain", &fMain);
   TGMainFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGGroupFrame *&obj)
{
   // Read a pointer to an object of class TGGroupFrame.

   obj = (TGGroupFrame *) buf.ReadObject(TGGroupFrame::Class());
   return buf;
}

//______________________________________________________________________________
void TGGroupFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGGroupFrame.

   TGCompositeFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGGroupFrame::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGGroupFrame.

   TClass *R__cl  = TGGroupFrame::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fText", &fText);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   TGCompositeFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGWidget *&obj)
{
   // Read a pointer to an object of class TGWidget.

   ::Error("TGWidget::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TGWidget::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGWidget.

   ::Error("TGWidget::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TGWidget::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGWidget.

   TClass *R__cl  = TGWidget::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fWidgetId", &fWidgetId);
   R__insp.Inspect(R__cl, R__parent, "fWidgetFlags", &fWidgetFlags);
   R__insp.Inspect(R__cl, R__parent, "*fMsgWindow", &fMsgWindow);
   fCommand.ShowMembers(R__insp, strcat(R__parent,"fCommand.")); R__parent[R__ncp] = 0;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGIcon *&obj)
{
   // Read a pointer to an object of class TGIcon.

   obj = (TGIcon *) buf.ReadObject(TGIcon::Class());
   return buf;
}

//______________________________________________________________________________
void TGIcon::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGIcon.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGIcon::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGIcon.

   TClass *R__cl  = TGIcon::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fPic", &fPic);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGLabel *&obj)
{
   // Read a pointer to an object of class TGLabel.

   obj = (TGLabel *) buf.ReadObject(TGLabel::Class());
   return buf;
}

//______________________________________________________________________________
void TGLabel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLabel.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGLabel::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGLabel.

   TClass *R__cl  = TGLabel::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fText", &fText);
   R__insp.Inspect(R__cl, R__parent, "fTWidth", &fTWidth);
   R__insp.Inspect(R__cl, R__parent, "fTHeight", &fTHeight);
   R__insp.Inspect(R__cl, R__parent, "fTMode", &fTMode);
   R__insp.Inspect(R__cl, R__parent, "fTextChanged", &fTextChanged);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGButton *&obj)
{
   // Read a pointer to an object of class TGButton.

   obj = (TGButton *) buf.ReadObject(TGButton::Class());
   return buf;
}

//______________________________________________________________________________
void TGButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGButton.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

//______________________________________________________________________________
void TGButton::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGButton.

   TClass *R__cl  = TGButton::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fTWidth", &fTWidth);
   R__insp.Inspect(R__cl, R__parent, "fTHeight", &fTHeight);
   R__insp.Inspect(R__cl, R__parent, "fState", &fState);
   R__insp.Inspect(R__cl, R__parent, "fStayDown", &fStayDown);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   R__insp.Inspect(R__cl, R__parent, "*fUserData", &fUserData);
   R__insp.Inspect(R__cl, R__parent, "*fTip", &fTip);
   TGFrame::ShowMembers(R__insp, R__parent);
   TGWidget::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTextButton *&obj)
{
   // Read a pointer to an object of class TGTextButton.

   obj = (TGTextButton *) buf.ReadObject(TGTextButton::Class());
   return buf;
}

//______________________________________________________________________________
void TGTextButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextButton.

   TGButton::Streamer(R__b);
}

//______________________________________________________________________________
void TGTextButton::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTextButton.

   TClass *R__cl  = TGTextButton::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLabel", &fLabel);
   R__insp.Inspect(R__cl, R__parent, "fTMode", &fTMode);
   R__insp.Inspect(R__cl, R__parent, "fHKeycode", &fHKeycode);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   TGButton::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGPictureButton *&obj)
{
   // Read a pointer to an object of class TGPictureButton.

   obj = (TGPictureButton *) buf.ReadObject(TGPictureButton::Class());
   return buf;
}

//______________________________________________________________________________
void TGPictureButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPictureButton.

   TGButton::Streamer(R__b);
}

//______________________________________________________________________________
void TGPictureButton::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGPictureButton.

   TClass *R__cl  = TGPictureButton::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fPic", &fPic);
   TGButton::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGCheckButton *&obj)
{
   // Read a pointer to an object of class TGCheckButton.

   obj = (TGCheckButton *) buf.ReadObject(TGCheckButton::Class());
   return buf;
}

//______________________________________________________________________________
void TGCheckButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGCheckButton.

   TGButton::Streamer(R__b);
}

//______________________________________________________________________________
void TGCheckButton::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGCheckButton.

   TClass *R__cl  = TGCheckButton::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLabel", &fLabel);
   R__insp.Inspect(R__cl, R__parent, "fHKeycode", &fHKeycode);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   R__insp.Inspect(R__cl, R__parent, "fPrevState", &fPrevState);
   TGButton::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGRadioButton *&obj)
{
   // Read a pointer to an object of class TGRadioButton.

   obj = (TGRadioButton *) buf.ReadObject(TGRadioButton::Class());
   return buf;
}

//______________________________________________________________________________
void TGRadioButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRadioButton.

   TGButton::Streamer(R__b);
}

//______________________________________________________________________________
void TGRadioButton::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGRadioButton.

   TClass *R__cl  = TGRadioButton::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLabel", &fLabel);
   R__insp.Inspect(R__cl, R__parent, "fHKeycode", &fHKeycode);
   R__insp.Inspect(R__cl, R__parent, "fPrevState", &fPrevState);
   R__insp.Inspect(R__cl, R__parent, "*fOn", &fOn);
   R__insp.Inspect(R__cl, R__parent, "*fOff", &fOff);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   TGButton::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTextBuffer *&obj)
{
   // Read a pointer to an object of class TGTextBuffer.

   ::Error("TGTextBuffer::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TGTextBuffer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextBuffer.

   ::Error("TGTextBuffer::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TGTextBuffer::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTextBuffer.

   TClass *R__cl  = TGTextBuffer::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fBuffer", &fBuffer);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTextEntry *&obj)
{
   // Read a pointer to an object of class TGTextEntry.

   obj = (TGTextEntry *) buf.ReadObject(TGTextEntry::Class());
   return buf;
}

//______________________________________________________________________________
void TGTextEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextEntry.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

//______________________________________________________________________________
void TGTextEntry::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTextEntry.

   TClass *R__cl  = TGTextEntry::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fText", &fText);
   R__insp.Inspect(R__cl, R__parent, "fStartX", &fStartX);
   R__insp.Inspect(R__cl, R__parent, "fEndX", &fEndX);
   R__insp.Inspect(R__cl, R__parent, "fStartIX", &fStartIX);
   R__insp.Inspect(R__cl, R__parent, "fEndIX", &fEndIX);
   R__insp.Inspect(R__cl, R__parent, "fSelectionOn", &fSelectionOn);
   R__insp.Inspect(R__cl, R__parent, "fCursorX", &fCursorX);
   R__insp.Inspect(R__cl, R__parent, "fCursorIX", &fCursorIX);
   R__insp.Inspect(R__cl, R__parent, "fCursorOn", &fCursorOn);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   R__insp.Inspect(R__cl, R__parent, "fSelGC", &fSelGC);
   R__insp.Inspect(R__cl, R__parent, "fSelbackGC", &fSelbackGC);
   R__insp.Inspect(R__cl, R__parent, "*fCurBlink", &fCurBlink);
   TGFrame::ShowMembers(R__insp, R__parent);
   TGWidget::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGMsgBox *&obj)
{
   // Read a pointer to an object of class TGMsgBox.

   obj = (TGMsgBox *) buf.ReadObject(TGMsgBox::Class());
   return buf;
}

//______________________________________________________________________________
void TGMsgBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMsgBox.

   TGTransientFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGMsgBox::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGMsgBox.

   TClass *R__cl  = TGMsgBox::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fYes", &fYes);
   R__insp.Inspect(R__cl, R__parent, "*fNo", &fNo);
   R__insp.Inspect(R__cl, R__parent, "*fOK", &fOK);
   R__insp.Inspect(R__cl, R__parent, "*fApply", &fApply);
   R__insp.Inspect(R__cl, R__parent, "*fRetry", &fRetry);
   R__insp.Inspect(R__cl, R__parent, "*fIgnore", &fIgnore);
   R__insp.Inspect(R__cl, R__parent, "*fCancel", &fCancel);
   R__insp.Inspect(R__cl, R__parent, "*fClose", &fClose);
   R__insp.Inspect(R__cl, R__parent, "*fDismiss", &fDismiss);
   R__insp.Inspect(R__cl, R__parent, "*fIcon", &fIcon);
   R__insp.Inspect(R__cl, R__parent, "*fButtonFrame", &fButtonFrame);
   R__insp.Inspect(R__cl, R__parent, "*fIconFrame", &fIconFrame);
   R__insp.Inspect(R__cl, R__parent, "*fLabelFrame", &fLabelFrame);
   R__insp.Inspect(R__cl, R__parent, "*fL1", &fL1);
   R__insp.Inspect(R__cl, R__parent, "*fL2", &fL2);
   R__insp.Inspect(R__cl, R__parent, "*fL3", &fL3);
   R__insp.Inspect(R__cl, R__parent, "*fL4", &fL4);
   R__insp.Inspect(R__cl, R__parent, "*fL5", &fL5);
   R__insp.Inspect(R__cl, R__parent, "*fMsgList", &fMsgList);
   R__insp.Inspect(R__cl, R__parent, "*fRetCode", &fRetCode);
   TGTransientFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGPopupMenu *&obj)
{
   // Read a pointer to an object of class TGPopupMenu.

   obj = (TGPopupMenu *) buf.ReadObject(TGPopupMenu::Class());
   return buf;
}

//______________________________________________________________________________
void TGPopupMenu::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPopupMenu.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGPopupMenu::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGPopupMenu.

   TClass *R__cl  = TGPopupMenu::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fEntryList", &fEntryList);
   R__insp.Inspect(R__cl, R__parent, "*fCurrent", &fCurrent);
   R__insp.Inspect(R__cl, R__parent, "fStick", &fStick);
   R__insp.Inspect(R__cl, R__parent, "fHasGrab", &fHasGrab);
   R__insp.Inspect(R__cl, R__parent, "fXl", &fXl);
   R__insp.Inspect(R__cl, R__parent, "fWidth", &fWidth);
   R__insp.Inspect(R__cl, R__parent, "fHeight", &fHeight);
   R__insp.Inspect(R__cl, R__parent, "*fDelay", &fDelay);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   R__insp.Inspect(R__cl, R__parent, "fSelGC", &fSelGC);
   R__insp.Inspect(R__cl, R__parent, "fSelbackGC", &fSelbackGC);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   R__insp.Inspect(R__cl, R__parent, "fHifontStruct", &fHifontStruct);
   R__insp.Inspect(R__cl, R__parent, "*fMsgWindow", &fMsgWindow);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGMenuTitle *&obj)
{
   // Read a pointer to an object of class TGMenuTitle.

   obj = (TGMenuTitle *) buf.ReadObject(TGMenuTitle::Class());
   return buf;
}

//______________________________________________________________________________
void TGMenuTitle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMenuTitle.

   TGFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGMenuTitle::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGMenuTitle.

   TClass *R__cl  = TGMenuTitle::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMenu", &fMenu);
   R__insp.Inspect(R__cl, R__parent, "*fLabel", &fLabel);
   R__insp.Inspect(R__cl, R__parent, "fTitleId", &fTitleId);
   R__insp.Inspect(R__cl, R__parent, "*fTitleData", &fTitleData);
   R__insp.Inspect(R__cl, R__parent, "fState", &fState);
   R__insp.Inspect(R__cl, R__parent, "fHkeycode", &fHkeycode);
   R__insp.Inspect(R__cl, R__parent, "fFontStruct", &fFontStruct);
   R__insp.Inspect(R__cl, R__parent, "fNormGC", &fNormGC);
   R__insp.Inspect(R__cl, R__parent, "fSelGC", &fSelGC);
   TGFrame::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGMenuBar *&obj)
{
   // Read a pointer to an object of class TGMenuBar.

   obj = (TGMenuBar *) buf.ReadObject(TGMenuBar::Class());
   return buf;
}

//______________________________________________________________________________
void TGMenuBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMenuBar.

   TGHorizontalFrame::Streamer(R__b);
}

//______________________________________________________________________________
void TGMenuBar::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGMenuBar.

   TClass *R__cl  = TGMenuBar::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fCurrent", &fCurrent);
   R__insp.Inspect(R__cl, R__parent, "*fTitles", &fTitles);
   R__insp.Inspect(R__cl, R__parent, "fStick", &fStick);
   TGHorizontalFrame::ShowMembers(R__insp, R__parent);
}

