//*CMZ :  2.21/07 08/03/99  12.34.18  by  Fons Rademakers
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
extern void G__cpp_setup_tagtableG__Graf2();
extern void G__cpp_setup_inheritanceG__Graf2();
extern void G__cpp_setup_typetableG__Graf2();
extern void G__cpp_setup_memvarG__Graf2();
extern void G__cpp_setup_globalG__Graf2();
extern void G__cpp_setup_memfuncG__Graf2();
extern void G__cpp_setup_funcG__Graf2();
extern void G__set_cpp_environmentG__Graf2();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TBrowser.h"
#include "TGuiFactory.h"
#include "TLego.h"
#include "TLink.h"
#include "TPoints.h"
#include "TVirtualPad.h"
#include "TPostScript.h"
#include "TStyle.h"
#include "TView.h"
#include "TGXW.h"
#include "TGXClient.h"
#include "TContextMenu.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__Graf2LN_TClass;
extern G__linked_taginfo G__G__Graf2LN_ofstream;
extern G__linked_taginfo G__G__Graf2LN_TList;
extern G__linked_taginfo G__G__Graf2LN_TBrowser;
extern G__linked_taginfo G__G__Graf2LN_TMethod;
extern G__linked_taginfo G__G__Graf2LN_TObject;
extern G__linked_taginfo G__G__Graf2LN_TSeqCollection;
extern G__linked_taginfo G__G__Graf2LN_TString;
extern G__linked_taginfo G__G__Graf2LN_TNamed;
extern G__linked_taginfo G__G__Graf2LN_TStyle;
extern G__linked_taginfo G__G__Graf2LN_TVirtualPad;
extern G__linked_taginfo G__G__Graf2LN_TBrowserImp;
extern G__linked_taginfo G__G__Graf2LN_TContextMenu;
extern G__linked_taginfo G__G__Graf2LN_TBrowserTimer;
extern G__linked_taginfo G__G__Graf2LN_TApplicationImp;
extern G__linked_taginfo G__G__Graf2LN_TCanvasImp;
extern G__linked_taginfo G__G__Graf2LN_TCanvas;
extern G__linked_taginfo G__G__Graf2LN_TContextMenuImp;
extern G__linked_taginfo G__G__Graf2LN_TControlBarImp;
extern G__linked_taginfo G__G__Graf2LN_TGuiFactory;
extern G__linked_taginfo G__G__Graf2LN_TAttLine;
extern G__linked_taginfo G__G__Graf2LN_TAttFill;
extern G__linked_taginfo G__G__Graf2LN_TLego;
extern G__linked_taginfo G__G__Graf2LN_TAttText;
extern G__linked_taginfo G__G__Graf2LN_TText;
extern G__linked_taginfo G__G__Graf2LN_TLink;
extern G__linked_taginfo G__G__Graf2LN_TPoints;
extern G__linked_taginfo G__G__Graf2LN_TAttPad;
extern G__linked_taginfo G__G__Graf2LN_TGToolTip;
extern G__linked_taginfo G__G__Graf2LN_TBox;
extern G__linked_taginfo G__G__Graf2LN_TWbox;
extern G__linked_taginfo G__G__Graf2LN_TFrame;
extern G__linked_taginfo G__G__Graf2LN_TAttMarker;
extern G__linked_taginfo G__G__Graf2LN_TGXW;
extern G__linked_taginfo G__G__Graf2LN_TGXWcLcLEDrawMode;
extern G__linked_taginfo G__G__Graf2LN_TGXWcLcLEBoxMode;
extern G__linked_taginfo G__G__Graf2LN_TGXWcLcLETextMode;
extern G__linked_taginfo G__G__Graf2LN_TGXWcLcLETextSetMode;
extern G__linked_taginfo G__G__Graf2LN_TView;
extern G__linked_taginfo G__G__Graf2LN_TPadView3D;
extern G__linked_taginfo G__G__Graf2LN_TPostScript;
extern G__linked_taginfo G__G__Graf2LN_TAttAxis;
extern G__linked_taginfo G__G__Graf2LN_TArrayI;
extern G__linked_taginfo G__G__Graf2LN_TStylecLcLEPaperSize;
extern G__linked_taginfo G__G__Graf2LN_TMessage;
extern G__linked_taginfo G__G__Graf2LN_TSocket;
extern G__linked_taginfo G__G__Graf2LN_TGXClient;
/********************************************************
* G__Graf2.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif

extern "C" void G__cpp_reset_tagtableG__Graf2();

extern "C" void G__set_cpp_environmentG__Graf2() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TBrowser.h");
  G__add_compiledheader("TGuiFactory.h");
  G__add_compiledheader("TLego.h");
  G__add_compiledheader("TLink.h");
  G__add_compiledheader("TPoints.h");
  G__add_compiledheader("TVirtualPad.h");
  G__add_compiledheader("TPostScript.h");
  G__add_compiledheader("TStyle.h");
  G__add_compiledheader("TView.h");
  G__add_compiledheader("TGXW.h");
  G__add_compiledheader("TGXClient.h");
  G__add_compiledheader("TContextMenu.h");
  G__cpp_reset_tagtableG__Graf2();
}
extern "C" int G__cpp_dllrevG__Graf2() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TBrowser */
static int G__TBrowser_TBrowser_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Add_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBrowser_Create_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBrowser_ExecuteDefaultAction_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->ExecuteDefaultAction((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_GetBrowserImp_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowser*)(G__getstructoffset()))->GetBrowserImp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_GetContextMenu_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowser*)(G__getstructoffset()))->GetContextMenu());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_GetRefreshFlag_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TBrowser*)(G__getstructoffset()))->GetRefreshFlag());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_GetSelected_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowser*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_SetRefreshFlag_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->SetRefreshFlag((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Iconify_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_RecursiveRemove_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Refresh_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Refresh();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_SetSelected_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->SetSelected((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Show_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_DeclFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBrowser*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_DeclFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBrowser*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_ImplFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBrowser*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_ImplFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBrowser*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Class_Version_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBrowser*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Class_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowser*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Dictionary_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_IsA_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowser*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_ShowMembers_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Streamer_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TBrowser_TBrowser_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TBrowser *p;
   if(1!=libp->paran) ;
   p=new TBrowser(*(TBrowser*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBrowser_wATBrowser_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TStyle */
static int G__TStyle_TStyle_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TStyle *p=NULL;
   if(G__getaryconstruct()) p=new TStyle[G__getaryconstruct()];
   else                    p=new TStyle;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TStyle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_TStyle_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TStyle *p=NULL;
      p = new TStyle((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TStyle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_TStyle_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TStyle *p=NULL;
      p = new TStyle(*(TStyle*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TStyle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_AxisChoice_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->AxisChoice((Option_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Browse_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Copy_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_cd_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->cd();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetNdivisions_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetAxisColor_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetLabelColor_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetLabelFont_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetLabelOffset_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetLabelSize_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetTitleOffset_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetTitleSize_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetTickLength_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_GetBarOffset_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetBarOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetBarWidth_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetBarWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetDrawBorder_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetDrawBorder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetErrorMarker_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetErrorMarker());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetErrorMsize_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetErrorMsize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetErrorX_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetErrorX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasColor_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetCanvasColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasBorderSize_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetCanvasBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasBorderMode_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasDefH_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasDefH());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasDefW_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasDefW());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasDefX_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasDefX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasDefY_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasDefY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetColorPalette_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetColorPalette((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetNumberOfColors_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetNumberOfColors());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadColor_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetPadColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadBorderSize_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetPadBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadBorderMode_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetPadBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadBottomMargin_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetPadBottomMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadTopMargin_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetPadTopMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadLeftMargin_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetPadLeftMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadRightMargin_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetPadRightMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadGridX_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TStyle*)(G__getstructoffset()))->GetPadGridX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadGridY_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TStyle*)(G__getstructoffset()))->GetPadGridY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadTickX_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetPadTickX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadTickY_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetPadTickY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFuncColor_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFuncColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFuncStyle_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFuncStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFuncWidth_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFuncWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameFillColor_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameLineColor_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameFillStyle_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameLineStyle_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameLineWidth_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameBorderSize_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameBorderMode_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetFrameBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistFillColor_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistLineColor_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistFillStyle_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistLineStyle_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistLineWidth_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLegoInnerR_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetLegoInnerR());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptDate_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptDate());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptFile_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptFile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptFit_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptFit());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptStat_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptStat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptTitle_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptLogx_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptLogx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptLogy_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptLogy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptLogz_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptLogz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPaperSize_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->GetPaperSize(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetShowEventStatus_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetShowEventStatus());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetScreenFactor_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetScreenFactor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatColor_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetStatColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatBorderSize_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetStatBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatX_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetStatX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatY_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetStatY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatW_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetStatW());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatH_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetStatH());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleColor_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetTitleColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleBorderSize_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetTitleBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleXOffset_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleXOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleXSize_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleXSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleYOffset_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleYOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleYSize_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleYSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleX_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleY_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleW_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleW());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleH_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleH());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHeaderPS_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStyle*)(G__getstructoffset()))->GetHeaderPS());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLineStyleString_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((TStyle*)(G__getstructoffset()))->GetLineStyleString((Int_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((TStyle*)(G__getstructoffset()))->GetLineStyleString());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Reset_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetHeaderPS_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHeaderPS((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetLineStyleString_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLineStyleString((Int_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetNdivisions_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetAxisColor_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetLabelColor_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetLabelFont_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetLabelOffset_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetLabelSize_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetLegoInnerR_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetScreenFactor_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTickLength_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleOffset_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleSize_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetOptDate_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetOptFile_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetOptFit_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetOptLogx_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetOptLogy_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetOptLogz_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetOptStat_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetOptTitle_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetBarOffset_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetBarWidth_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetErrorMarker_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetErrorMsize_3_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetErrorX_4_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetDrawBorder_5_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetCanvasColor_6_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetCanvasBorderSize_7_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetCanvasBorderMode_8_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetCanvasDefH_9_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetCanvasDefW_0_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetCanvasDefX_1_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetCanvasDefY_2_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPadColor_3_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPadBorderSize_4_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPadBorderMode_5_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPadBottomMargin_6_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPadTopMargin_7_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPadLeftMargin_8_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPadRightMargin_9_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPadGridX_0_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadGridX((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadGridY_1_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadGridY((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadTickX_2_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadTickX((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadTickY_3_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadTickY((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFuncStyle_4_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFuncColor_5_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFuncWidth_6_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFrameFillColor_7_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFrameLineColor_8_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFrameFillStyle_9_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFrameLineStyle_0_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFrameLineWidth_1_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFrameBorderSize_2_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetFrameBorderMode_3_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetHistFillColor_4_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetHistLineColor_5_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetHistFillStyle_6_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetHistLineStyle_7_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetHistLineWidth_8_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetPaperSize_9_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPaperSize((TStyle::EPaperSize)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPaperSize_0_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetStatColor_1_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetStatBorderSize_2_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetStatX_3_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetStatY_4_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetStatW_5_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetStatH_6_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleColor_7_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleBorderSize_8_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleXOffset_9_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleXSize_0_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleYOffset_1_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleYSize_2_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleX_3_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleY_4_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleW_5_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_SetTitleH_6_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_ToggleEventStatus_7_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->ToggleEventStatus();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPalette_8_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TStyle_DeclFileName_9_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStyle*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_DeclFileLine_0_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_ImplFileName_1_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStyle*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_ImplFileLine_2_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Class_Version_3_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Class_4_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TStyle*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Dictionary_5_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_IsA_6_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TStyle*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_ShowMembers_7_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Streamer_8_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TStyle_wATStyle_9_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
static int G__TVirtualPad_AbsCoordinates_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->AbsCoordinates((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_AbsPixeltoX_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->AbsPixeltoX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_AbsPixeltoY_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->AbsPixeltoY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_cd_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_Clear_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_Close_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_CopyPixmap_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->CopyPixmap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_CopyPixmaps_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->CopyPixmaps();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Divide_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_Draw_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_DrawClassObject_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_DrawFrame_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Text_t*)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawLineNDC_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawLineNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawText_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawText((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawTextNDC_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawTextNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ExecuteEvent_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetCanvasID_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetCanvasID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetCanvas_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetVirtCanvas_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetVirtCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetEvent_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetEvent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetEventX_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetEventX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetEventY_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetEventY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetFrame_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetFrame());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetHighLightColor_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVirtualPad*)(G__getstructoffset()))->GetHighLightColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetRange_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->GetRange(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetRangeAxis_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->GetRangeAxis(libp->para[0].ref?*(Axis_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Axis_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Axis_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Axis_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPadPar_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->GetPadPar(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetXlowNDC_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetXlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetYlowNDC_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetYlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetWNDC_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetWNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetHNDC_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetHNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetWw_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TVirtualPad*)(G__getstructoffset()))->GetWw());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetWh_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TVirtualPad*)(G__getstructoffset()))->GetWh());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetAbsXlowNDC_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetAbsXlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetAbsYlowNDC_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetAbsYlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetAbsWNDC_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetAbsWNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetAbsHNDC_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetAbsHNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPhi_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetPhi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetTheta_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetTheta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetUxmin_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetUxmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetUymin_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetUymin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetUxmax_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetUxmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetUymax_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetUymax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetGridx_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->GetGridx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetGridy_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->GetGridy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetTickx_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetTickx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetTicky_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetTicky());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetListOfPrimitives_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetListOfPrimitives());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPrimitive_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetPrimitive((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetSelected_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPadPointer_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetPadPointer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPadSave_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetPadSave());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetSelectedPad_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetSelectedPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetView_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetView());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetLogx_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetLogx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetLogy_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetLogy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetLogz_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetLogz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetMother_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetMother());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetName_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualPad*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetTitle_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualPad*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPadPaint_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetPadPaint());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPixmapID_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetPixmapID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetView3D_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetView3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_HighLight_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_InspectObject_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->InspectObject((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsBatch_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->IsBatch());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsModified_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->IsModified());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsRetained_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->IsRetained());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ls_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_Modified_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_OpaqueMoving_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->OpaqueMoving());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_OpaqueResizing_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->OpaqueResizing());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PadtoX_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->PadtoX((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PadtoY_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->PadtoY((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Paint_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_PaintBox_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_PaintFillArea_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_PaintPadFrame_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPadFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintLine_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintLineNDC_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintLineNDC((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintLine3D_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintLine3D((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintPolyLine_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_PaintPolyLine3D_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPolyLine3D((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintPolyLineNDC_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_PaintPolyMarker_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_PaintModified_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintModified();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintText_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintText((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintTextNDC_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintTextNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PixeltoX_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->PixeltoX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PixeltoY_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->PixeltoY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Pop_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Pop();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Print_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Print((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Print_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Print((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Range_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Range((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_RangeAxis_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->RangeAxis((Axis_t)G__double(libp->para[0]),(Axis_t)G__double(libp->para[1])
,(Axis_t)G__double(libp->para[2]),(Axis_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_RecursiveRemove_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_RedrawAxis_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->RedrawAxis();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ResetView3D_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_ResizePad_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SaveAs_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SaveAs((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SaveAs();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetBorderMode_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetBorderMode((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetBorderSize_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetBorderSize((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetCanvasSize_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetCanvasSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetCursor_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetCursor((ECursor)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetDoubleBuffer_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetGrid_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetGridx_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetGridy_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetFillStyle_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetLogx_3_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetLogy_4_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetLogz_5_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetPad_6_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 9:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7])
,(Short_t)G__int(libp->para[8]));
      break;
   case 8:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7]));
      break;
   case 7:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetPad_7_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetName_8_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetName((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetSelected_9_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetSelected((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetTicks_0_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetTickx_1_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetTicky_2_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetTitle_3_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTitle((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTitle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetTheta_4_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetPhi_5_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_SetView_6_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetView((TView*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Update_7_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Update();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_UtoAbsPixel_8_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->UtoAbsPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_VtoAbsPixel_9_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->VtoAbsPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_UtoPixel_0_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->UtoPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_VtoPixel_1_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->VtoPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_XtoAbsPixel_2_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->XtoAbsPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_YtoAbsPixel_3_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->YtoAbsPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_XtoPad_4_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->XtoPad((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_YtoPad_5_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->YtoPad((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_XtoPixel_6_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->XtoPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_YtoPixel_7_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->YtoPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_CreateToolTip_8_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->CreateToolTip((const TBox*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DeleteToolTip_9_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DeleteToolTip((TGToolTip*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ResetToolTip_0_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ResetToolTip((TGToolTip*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_CloseToolTip_1_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->CloseToolTip((TGToolTip*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_x3d_2_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TVirtualPad_DeclFileName_3_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualPad*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DeclFileLine_4_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ImplFileName_5_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualPad*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ImplFileLine_6_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Class_Version_7_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVirtualPad*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Class_8_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Dictionary_9_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsA_0_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ShowMembers_1_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Streamer_2_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVirtualPad_wATVirtualPad_3_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TContextMenu */
static int G__TContextMenu_TContextMenu_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Action_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Action((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_CreateArgumentTitle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->CreateArgumentTitle((TMethodArg*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_CreateDialogTitle_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->CreateDialogTitle((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_CreatePopupTitle_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->CreatePopupTitle((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((TMethod*)G__int(libp->para[0]),(TObjArray*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1])
,(Char_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1])
,(TObjArray*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetBrowser_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetBrowser());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetContextMenuImp_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetContextMenuImp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetSelectedCanvas_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetSelectedCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetSelectedMethod_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetSelectedMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetSelectedObject_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetSelectedObject());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetSelectedPad_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetSelectedPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Popup_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TContextMenu_Popup_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Popup((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(TObject*)G__int(libp->para[2]),(TBrowser*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetCanvas_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetCanvas((TVirtualPad*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetBrowser_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetBrowser((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetMethod_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetMethod((TMethod*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetObject_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetObject((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetObject_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetObject((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetPad_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetPad((TVirtualPad*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_DeclFileName_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_DeclFileLine_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TContextMenu*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_ImplFileName_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_ImplFileLine_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TContextMenu*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Class_Version_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TContextMenu*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Class_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Dictionary_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_IsA_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_ShowMembers_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Streamer_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TContextMenu_TContextMenu_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TContextMenu *p;
   if(1!=libp->paran) ;
   p=new TContextMenu(*(TContextMenu*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TContextMenu_wATContextMenu_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TGuiFactory */
static int G__TGuiFactory_TGuiFactory_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateApplicationImp_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateApplicationImp((const char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]),(void*)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateCanvasImp_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateCanvasImp((TCanvas*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateCanvasImp_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateCanvasImp((TCanvas*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateBrowserImp_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateBrowserImp((TBrowser*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateBrowserImp_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateBrowserImp((TBrowser*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateContextMenuImp_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateContextMenuImp((TContextMenu*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateControlBarImp_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateControlBarImp((TControlBar*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateControlBarImp_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateControlBarImp((TControlBar*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGuiFactory*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGuiFactory*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGuiFactory*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGuiFactory*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGuiFactory*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGuiFactory*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGuiFactory*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGuiFactory*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGuiFactory_TGuiFactory_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGuiFactory *p;
   if(1!=libp->paran) ;
   p=new TGuiFactory(*(TGuiFactory*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGuiFactory_wATGuiFactory_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TLego */
static int G__TLego_TLego_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLego *p=NULL;
   if(G__getaryconstruct()) p=new TLego[G__getaryconstruct()];
   else                    p=new TLego;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TLego);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_TLego_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLego *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TLego(
(Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TLego((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TLego);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_BackBox_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->BackBox((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_ClearRaster_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->ClearRaster();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_ColorFunction_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->ColorFunction((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DrawFaceMode1_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->DrawFaceMode1((Int_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DrawFaceMode2_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->DrawFaceMode2((Int_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DrawFaceMode3_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->DrawFaceMode3((Int_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DrawFaceMove1_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->DrawFaceMove1((Int_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DrawFaceMove2_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->DrawFaceMove2((Int_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DrawFaceRaster1_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->DrawFaceRaster1((Int_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DrawFaceRaster2_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->DrawFaceRaster2((Int_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_FillPolygon_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->FillPolygon((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_FillPolygonBorder_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->FillPolygonBorder((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_FindLevelLines_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->FindLevelLines((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_FindPartEdge_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->FindPartEdge(
(Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]),(Float_t*)G__int(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_FindVisibleLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->FindVisibleLine((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_FindVisibleDraw_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->FindVisibleDraw((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_FrontBox_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->FrontBox((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_GouraudFunction_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->GouraudFunction((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_InitMoveScreen_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->InitMoveScreen((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_InitRaster_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->InitRaster((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_LegoCartesian_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->LegoCartesian((Float_t)G__double(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_LegoFunction_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->LegoFunction((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]),(Float_t*)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_LegoPolar_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->LegoPolar((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_LegoCylindrical_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->LegoCylindrical((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_LegoSpherical_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->LegoSpherical((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(char*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_LightSource_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->LightSource((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_Luminosity_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->Luminosity((Float_t*)G__int(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_ModifyScreen_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->ModifyScreen((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SetDrawFace_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetDrawFace(*(TLego::DrawFaceFunc_t *)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SetLegoFunction_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetLegoFunction(*(TLego::LegoFunc_t *)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SetMesh_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetMesh((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetMesh();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SetSurfaceFunction_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetSurfaceFunction(*(TLego::SurfaceFunc_t *)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SetColorDark_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetColorDark((Color_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetColorDark((Color_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SetColorMain_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetColorMain((Color_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SetColorMain((Color_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SideVisibilityDecode_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SideVisibilityDecode(
(Float_t)G__double(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]),libp->para[7].ref?*(Int_t*)libp->para[7].ref:G__Mint(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SideVisibilityEncode_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SideVisibilityEncode((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_Spectrum_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->Spectrum((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SurfaceCartesian_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SurfaceCartesian((Float_t)G__double(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SurfacePolar_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SurfacePolar((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SurfaceCylindrical_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SurfaceCylindrical((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SurfaceFunction_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SurfaceFunction((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SurfaceSpherical_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SurfaceSpherical((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(char*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_SurfaceProperty_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->SurfaceProperty((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Int_t)G__int(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DeclFileName_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLego*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_DeclFileLine_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLego*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_ImplFileName_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLego*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_ImplFileLine_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLego*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_Class_Version_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TLego*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_Class_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLego*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_Dictionary_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_IsA_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLego*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_ShowMembers_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLego_Streamer_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLego*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TLego_TLego_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TLego *p;
   if(1!=libp->paran) ;
   p=new TLego(*(TLego*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TLego);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TLego_wATLego_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TLego *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TLego *)((G__getstructoffset())+sizeof(TLego)*i);
   else  delete (TLego *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TLink */
static int G__TLink_TLink_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLink *p=NULL;
   if(G__getaryconstruct()) p=new TLink[G__getaryconstruct()];
   else                    p=new TLink;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TLink);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_TLink_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLink *p=NULL;
      p = new TLink(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(void*)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TLink);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_ExecuteEvent_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLink*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLink*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLink*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLink*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLink*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TLink*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLink*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLink*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLink*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLink*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLink_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLink*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TLink_TLink_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TLink *p;
   if(1!=libp->paran) ;
   p=new TLink(*(TLink*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TLink);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TLink_wATLink_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TLink *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TLink *)((G__getstructoffset())+sizeof(TLink)*i);
   else  delete (TLink *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPoints */
static int G__TPoints_TPoints_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPoints *p=NULL;
   if(G__getaryconstruct()) p=new TPoints[G__getaryconstruct()];
   else                    p=new TPoints;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TPoints);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_TPoints_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPoints *p=NULL;
      p = new TPoints((Coord_t)G__double(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TPoints);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_TPoints_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPoints *p=NULL;
      p = new TPoints((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TPoints);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_GetX_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPoints*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_GetY_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPoints*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_SetX_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPoints*)(G__getstructoffset()))->SetX((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_SetY_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPoints*)(G__getstructoffset()))->SetY((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPoints*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPoints*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPoints*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPoints*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPoints*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPoints*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPoints*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPoints*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPoints*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPoints_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPoints*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TPoints_TPoints_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TPoints *p;
   if(1!=libp->paran) ;
   p=new TPoints(*(TPoints*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TPoints);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPoints_wATPoints_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPoints *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPoints *)((G__getstructoffset())+sizeof(TPoints)*i);
   else  delete (TPoints *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGXW */
static int G__TGXW_TGXW_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGXW *p=NULL;
   if(G__getaryconstruct()) p=new TGXW[G__getaryconstruct()];
   else                    p=new TGXW;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TGXW);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_TGXW_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGXW *p=NULL;
      p = new TGXW((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TGXW);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_Init_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->Init((void*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->Init());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ClearWindow_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ClearWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ClosePixmap_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ClosePixmap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CloseWindow_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->CloseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CopyPixmap_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->CopyPixmap((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreateOpenGLContext_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->CreateOpenGLContext((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->CreateOpenGLContext();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DeleteOpenGLContext_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DeleteOpenGLContext((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DeleteOpenGLContext();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawBox_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawBox((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(TGXW::EBoxMode)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawCellArray_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawCellArray(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t*)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawFillArea_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawFillArea((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawLine((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawPolyLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawPolyMarker_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawText_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawText((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(const char*)G__int(libp->para[4]),(TGXW::ETextMode)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetCharacterUp_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetCharacterUp(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetDrawMode_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->GetDrawMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetDoubleBuffer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->GetDoubleBuffer((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetGeometry_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetGeometry((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3])
,libp->para[4].ref?*(UInt_t*)libp->para[4].ref:G__Muint(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DisplayName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((TGXW*)(G__getstructoffset()))->DisplayName((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((TGXW*)(G__getstructoffset()))->DisplayName());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetPlanes_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetPlanes(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetRGB_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetRGB((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetTextExtent_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetTextExtent(libp->para[0].ref?*(UInt_t*)libp->para[0].ref:G__Muint(libp->para[0]),libp->para[1].ref?*(UInt_t*)libp->para[1].ref:G__Muint(libp->para[1])
,(char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetTextMagnitude_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGXW*)(G__getstructoffset()))->GetTextMagnitude());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetWindowID_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->GetWindowID((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_HasTTFonts_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->HasTTFonts());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_InitWindow_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->InitWindow((ULong_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_MoveWindow_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->MoveWindow((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_OpenPixmap_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->OpenPixmap((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_QueryPointer_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->QueryPointer(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ReadGIF_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ReadGIF((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_RequestLocator_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->RequestLocator((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_RequestString_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->RequestString((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(char*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_RescaleWindow_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->RescaleWindow((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ResizePixmap_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->ResizePixmap((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ResizeWindow_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ResizeWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SelectWindow_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SelectWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetCharacterUp_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetCharacterUp((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetClipOFF_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetClipOFF((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetClipRegion_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetClipRegion((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetCursor_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetCursor((Int_t)G__int(libp->para[0]),(ECursor)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetDoubleBuffer_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetDoubleBuffer((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetDoubleBufferOFF_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetDoubleBufferOFF();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetDoubleBufferON_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetDoubleBufferON();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetDrawMode_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetDrawMode((TGXW::EDrawMode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetFillColor_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetFillColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetFillStyle_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetLineColor_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetLineColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetLineType_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetLineType((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetLineStyle_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetLineStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetLineWidth_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetLineWidth((Width_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetMarkerColor_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetMarkerColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetMarkerSize_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetMarkerSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetMarkerStyle_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetMarkerStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetOpacity_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetOpacity((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetRGB_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetRGB((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetTextAlign_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetTextAlign((Short_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetTextAlign();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetTextColor_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetTextColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetTextFont_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->SetTextFont((char*)G__int(libp->para[0]),(TGXW::ETextSetMode)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetTextFont_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetTextFont((Font_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetTextMagnitude_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetTextMagnitude((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetTextSize_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetTextSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_UpdateWindow_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->UpdateWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_Warp_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->Warp((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_WriteGIF_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->WriteGIF((char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_WritePixmap_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->WritePixmap((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetWindowAttributes_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetWindowAttributes((Window_t)G__int(libp->para[0]),*(WindowAttributes_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_MapWindow_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->MapWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_MapSubwindows_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->MapSubwindows((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_MapRaised_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->MapRaised((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_UnmapWindow_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->UnmapWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DestroyWindow_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DestroyWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_RaiseWindow_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->RaiseWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_LowerWindow_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->LowerWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_MoveWindow_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->MoveWindow((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_MoveResizeWindow_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->MoveResizeWindow((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ResizeWindow_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ResizeWindow((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetWindowBackground_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetWindowBackground((Window_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetWindowBackgroundPixmap_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetWindowBackgroundPixmap((Window_t)G__int(libp->para[0]),(Pixmap_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreateWindow_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->CreateWindow(
(Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7])
,(void*)G__int(libp->para[8]),(SetWindowAttributes_t*)G__int(libp->para[9])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_OpenDisplay_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->OpenDisplay((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CloseDisplay_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->CloseDisplay();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetDisplay_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->GetDisplay());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_InternAtom_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->InternAtom((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetDefaultRootWindow_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->GetDefaultRootWindow());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetParent_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->GetParent((Window_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_LoadQueryFont_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->LoadQueryFont((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetFontHandle_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->GetFontHandle((FontStruct_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DeleteFont_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DeleteFont((FontStruct_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreateGC_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->CreateGC((Drawable_t)G__int(libp->para[0]),(GCValues_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ChangeGC_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ChangeGC((GContext_t)G__int(libp->para[0]),(GCValues_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CopyGC_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->CopyGC((GContext_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Mask_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DeleteGC_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DeleteGC((GContext_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreateCursor_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->CreateCursor((ECursor)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetCursor_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetCursor((Window_t)G__int(libp->para[0]),(Cursor_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreatePixmap_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->CreatePixmap((Drawable_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreatePixmap_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->CreatePixmap(
(Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreateBitmap_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->CreateBitmap((Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DeletePixmap_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DeletePixmap((Pixmap_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreatePictureFromFile_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->CreatePictureFromFile((Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,libp->para[2].ref?*(Pixmap_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Pixmap_t*)libp->para[3].ref:G__Mulong(libp->para[3])
,*(PictureAttributes_t*)libp->para[4].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CreatePictureFromData_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->CreatePictureFromData((Drawable_t)G__int(libp->para[0]),(char**)G__int(libp->para[1])
,libp->para[2].ref?*(Pixmap_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Pixmap_t*)libp->para[3].ref:G__Mulong(libp->para[3])
,*(PictureAttributes_t*)libp->para[4].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ReadPictureDataFromFile_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->ReadPictureDataFromFile((const char*)G__int(libp->para[0]),(char***)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DeletePictureData_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DeletePictureData((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetDashes_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetDashes((GContext_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ParseColor_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->ParseColor((Colormap_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,*(ColorStruct_t*)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_AllocColor_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->AllocColor((Colormap_t)G__int(libp->para[0]),*(ColorStruct_t*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_QueryColor_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->QueryColor((Colormap_t)G__int(libp->para[0]),*(ColorStruct_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_EventsPending_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->EventsPending());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_NextEvent_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->NextEvent(*(Event_t*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_Bell_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->Bell((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CopyArea_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->CopyArea(
(Drawable_t)G__int(libp->para[0]),(Drawable_t)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]),(Int_t)G__int(libp->para[7])
,(Int_t)G__int(libp->para[8]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ChangeWindowAttributes_3_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ChangeWindowAttributes((Window_t)G__int(libp->para[0]),(SetWindowAttributes_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawLine_4_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawLine((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ClearArea_5_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ClearArea((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_CheckEvent_6_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXW*)(G__getstructoffset()))->CheckEvent((Window_t)G__int(libp->para[0]),(EGEventType)G__int(libp->para[1])
,*(Event_t*)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SendEvent_7_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SendEvent((Window_t)G__int(libp->para[0]),(Event_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_WMDeleteNotify_8_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->WMDeleteNotify((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetKeyAutoRepeat_9_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetKeyAutoRepeat((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetKeyAutoRepeat();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GrabKey_0_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GrabKey((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GrabKey((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GrabButton_1_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GrabButton(
(Window_t)G__int(libp->para[0]),(EMouseButton)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(Window_t)G__int(libp->para[4]),(Cursor_t)G__int(libp->para[5])
,(Bool_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GrabButton((Window_t)G__int(libp->para[0]),(EMouseButton)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(Window_t)G__int(libp->para[4]),(Cursor_t)G__int(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GrabPointer_2_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GrabPointer((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(Window_t)G__int(libp->para[2]),(Cursor_t)G__int(libp->para[3])
,(Bool_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GrabPointer((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(Window_t)G__int(libp->para[2]),(Cursor_t)G__int(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetWindowName_3_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetWindowName((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetIconName_4_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetIconName((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetClassHints_5_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetClassHints((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetMWMHints_6_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetMWMHints((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetWMPosition_7_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetWMPosition((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetWMSize_8_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetWMSize((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetWMSizeHints_9_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetWMSizeHints(
(Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetWMState_0_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetWMState((Window_t)G__int(libp->para[0]),(EInitialState)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetWMTransientHint_1_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetWMTransientHint((Window_t)G__int(libp->para[0]),(Window_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawString_2_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawString((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_TextWidth_3_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->TextWidth((FontStruct_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetFontProperties_4_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetFontProperties((FontStruct_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetGCValues_5_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetGCValues((GContext_t)G__int(libp->para[0]),*(GCValues_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetFontStruct_6_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->GetFontStruct((FontH_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ClearWindow_7_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ClearWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_KeysymToKeycode_8_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->KeysymToKeycode((UInt_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_FillRectangle_9_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->FillRectangle((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawRectangle_0_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawRectangle((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DrawSegments_1_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->DrawSegments((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Segment_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SelectInput_2_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SelectInput((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetInputFocus_3_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetInputFocus((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetPrimarySelectionOwner_4_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXW*)(G__getstructoffset()))->GetPrimarySelectionOwner());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ConvertPrimarySelection_5_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ConvertPrimarySelection((Window_t)G__int(libp->para[0]),(Time_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_LookupString_6_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->LookupString((Event_t*)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetPasteBuffer_7_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetPasteBuffer((Window_t)G__int(libp->para[0]),(Atom_t)G__int(libp->para[1])
,*(TString*)libp->para[2].ref,libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,(Bool_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_TranslateCoordinates_8_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->TranslateCoordinates(
(Window_t)G__int(libp->para[0]),(Window_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Window_t*)libp->para[6].ref:G__Mulong(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_GetWindowSize_9_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->GetWindowSize((Drawable_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3])
,libp->para[4].ref?*(UInt_t*)libp->para[4].ref:G__Muint(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_FillPolygon_0_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->FillPolygon((Window_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Point_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_QueryPointer_1_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->QueryPointer(
(Window_t)G__int(libp->para[0]),libp->para[1].ref?*(Window_t*)libp->para[1].ref:G__Mulong(libp->para[1])
,libp->para[2].ref?*(Window_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]),libp->para[7].ref?*(UInt_t*)libp->para[7].ref:G__Muint(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetForeground_2_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetForeground((GContext_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_SetClipRectangles_3_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->SetClipRectangles((GContext_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Rectangle_t*)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_Update_4_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->Update((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->Update();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DeclFileName_5_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGXW*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_DeclFileLine_6_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ImplFileName_7_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGXW*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ImplFileLine_8_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXW*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_Class_Version_9_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGXW*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_Class_0_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGXW*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_Dictionary_1_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_IsA_2_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGXW*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_ShowMembers_3_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXW_Streamer_4_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXW*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGXW_TGXW_5_16(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGXW *p;
   if(1!=libp->paran) ;
   p=new TGXW(*(TGXW*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TGXW);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGXW_wATGXW_6_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGXW *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGXW *)((G__getstructoffset())+sizeof(TGXW)*i);
   else  delete (TGXW *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TView */
static int G__TView_TView_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TView *p=NULL;
   if(G__getaryconstruct()) p=new TView[G__getaryconstruct()];
   else                    p=new TView;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_TView_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TView *p=NULL;
      p = new TView((Int_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_TView_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_AxisVertex_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->AxisVertex(
(Float_t)G__double(libp->para[0]),(Float_t*)G__int(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]),libp->para[7].ref?*(Int_t*)libp->para[7].ref:G__Mint(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_DefineViewDirection_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->DefineViewDirection(
(Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Double_t)G__double(libp->para[7])
,(Float_t*)G__int(libp->para[8]),(Float_t*)G__int(libp->para[9]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ExecuteEvent_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ExecuteRotateView_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ExecuteRotateView((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FindScope_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FindScope((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetDistancetoAxis_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TView*)(G__getstructoffset()))->GetDistancetoAxis((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetAutoRange_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TView*)(G__getstructoffset()))->GetAutoRange());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetLatitude_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TView*)(G__getstructoffset()))->GetLatitude());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetLongitude_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TView*)(G__getstructoffset()))->GetLongitude());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetPsi_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TView*)(G__getstructoffset()))->GetPsi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetRange_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->GetRange((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetRmax_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TView*)(G__getstructoffset()))->GetRmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetRmin_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TView*)(G__getstructoffset()))->GetRmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetOutline_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TView*)(G__getstructoffset()))->GetOutline());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetTN_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TView*)(G__getstructoffset()))->GetTN());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetTnorm_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TView*)(G__getstructoffset()))->GetTnorm());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetSystem_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TView*)(G__getstructoffset()))->GetSystem());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FindNormal_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FindNormal((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FindPhiSectors_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FindPhiSectors((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,(Float_t*)G__int(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FindThetaSectors_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FindThetaSectors((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),(Float_t*)G__int(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_NormalWCtoNDC_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->NormalWCtoNDC((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_PadRange_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->PadRange((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetAutoRange_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TView_SetAxisNDC_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetAxisNDC((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]),(Float_t*)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetLatitude_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetLatitude((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetLongitude_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetLongitude((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetPsi_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetPsi((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetOutlineToCube_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetOutlineToCube();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetRange_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetRange((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetRange_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TView_SetSystem_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetSystem((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetView_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetView((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_WCtoNDC_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->WCtoNDC((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_DeclFileName_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TView*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_DeclFileLine_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TView*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ImplFileName_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TView*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ImplFileLine_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TView*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Class_Version_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TView*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Class_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TView*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Dictionary_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_IsA_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TView*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ShowMembers_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Streamer_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TView_TView_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TView *p;
   if(1!=libp->paran) ;
   p=new TView(*(TView*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TView);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TView_wATView_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TPostScript */
static int G__TPostScript_TPostScript_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPostScript *p=NULL;
   if(G__getaryconstruct()) p=new TPostScript[G__getaryconstruct()];
   else                    p=new TPostScript;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TPostScript);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_TPostScript_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPostScript *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TPostScript((Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TPostScript((Text_t*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TPostScript);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Close_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_CMtoPS_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPostScript*)(G__getstructoffset()))->CMtoPS((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DefineFillPatterns_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DefineFillPatterns();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DefineMarkers_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DefineMarkers();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DrawBox_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DrawBox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DrawFrame_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DrawFrame(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(Int_t)G__int(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DrawHatch_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DrawHatch((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DrawPolyLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(TPoints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DrawPolyLineNDC_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DrawPolyLineNDC((Int_t)G__int(libp->para[0]),(TPoints*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DrawPolyMarker_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DrawPS_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->DrawPS((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_FontEncode_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->FontEncode();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetFillColor_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetFillStyle_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetLineColor_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetLineStyle_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetLineWidth_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetMarkerColor_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetMarkerColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetMarkerSize_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPostScript*)(G__getstructoffset()))->GetMarkerSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetMarkerStyle_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetMarkerStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetTextAlign_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetTextAlign());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetTextAngle_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPostScript*)(G__getstructoffset()))->GetTextAngle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetTextColor_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetTextColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetTextFont_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->GetTextFont());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_GetTextSize_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPostScript*)(G__getstructoffset()))->GetTextSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Initialize_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Initialize();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_NewPage_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->NewPage();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Off_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Off();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_On_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->On();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Open_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Open((Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Open((Text_t*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SaveRestore_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SaveRestore((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetFillColor_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetFillColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetFillColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetFillStyle_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetLineColor_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetLineColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetLineColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetLineStyle_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetLineStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetLineStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetLineWidth_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetLineWidth((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetLineWidth();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetMarkerColor_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetMarkerColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetMarkerColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetMarkerSize_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetMarkerSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetMarkerStyle_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetMarkerStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetTextAlign_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextAlign((Short_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextAlign();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetTextAngle_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextAngle((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextAngle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetTextColor_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetTextFont_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextFont((Font_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextFont();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetTextSize_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetTextSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_ls_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_MakeGreek_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->MakeGreek();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_MovePS_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->MovePS((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Print_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_PrintStr_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->PrintStr((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->PrintStr();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_PrintFast_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->PrintFast((Int_t)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->PrintFast((Int_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Range_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Range((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Resize_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Resize();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_SetColor_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetColor((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->SetColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Text_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Text((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_TextNDC_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->TextNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_UtoPS_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPostScript*)(G__getstructoffset()))->UtoPS((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_VtoPS_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPostScript*)(G__getstructoffset()))->VtoPS((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_WriteInteger_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->WriteInteger((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_WriteReal_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->WriteReal((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_XtoPS_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPostScript*)(G__getstructoffset()))->XtoPS((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_YtoPS_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPostScript*)(G__getstructoffset()))->YtoPS((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Zone_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Zone();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DeclFileName_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPostScript*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_DeclFileLine_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPostScript*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_ImplFileName_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPostScript*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_ImplFileLine_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPostScript*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Class_Version_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPostScript*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Class_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPostScript*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Dictionary_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_IsA_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPostScript*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_ShowMembers_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPostScript_Streamer_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPostScript*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TPostScript_TPostScript_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TPostScript *p;
   if(1!=libp->paran) ;
   p=new TPostScript(*(TPostScript*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TPostScript);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPostScript_wATPostScript_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPostScript *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPostScript *)((G__getstructoffset())+sizeof(TPostScript)*i);
   else  delete (TPostScript *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGXClient */
static int G__TGXClient_TGXClient_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGXClient *p=NULL;
   if(G__getaryconstruct()) p=new TGXClient[G__getaryconstruct()];
   else                    p=new TGXClient;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TGXClient);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_TGXClient_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGXClient *p=NULL;
      p = new TGXClient((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TGXClient);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_Init_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,98,(long)((TGXClient*)(G__getstructoffset()))->Init((void*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,98,(long)((TGXClient*)(G__getstructoffset()))->Init());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ClearWindow_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ClearWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ClosePixmap_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ClosePixmap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CloseWindow_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->CloseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CopyPixmap_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->CopyPixmap((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreateOpenGLContext_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->CreateOpenGLContext((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->CreateOpenGLContext();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DeleteOpenGLContext_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DeleteOpenGLContext((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DeleteOpenGLContext();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawBox_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawBox((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(TGXW::EBoxMode)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawCellArray_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawCellArray(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t*)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawFillArea_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawFillArea((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawLine((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawPolyLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawPolyMarker_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawText_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawText((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(const char*)G__int(libp->para[4]),(TGXW::ETextMode)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetCharacterUp_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetCharacterUp(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetDrawMode_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->GetDrawMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetDoubleBuffer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->GetDoubleBuffer((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DisplayName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((TGXClient*)(G__getstructoffset()))->DisplayName((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((TGXClient*)(G__getstructoffset()))->DisplayName());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetPlanes_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetPlanes(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetRGB_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetRGB((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetTextExtent_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetTextExtent(libp->para[0].ref?*(UInt_t*)libp->para[0].ref:G__Muint(libp->para[0]),libp->para[1].ref?*(UInt_t*)libp->para[1].ref:G__Muint(libp->para[1])
,(char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetTextMagnitude_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGXClient*)(G__getstructoffset()))->GetTextMagnitude());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_InitWindow_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->InitWindow((ULong_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_MoveWindow_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->MoveWindow((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_OpenPixmap_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->OpenPixmap((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_QueryPointer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->QueryPointer(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ReadGIF_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ReadGIF((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ResizeWindow_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ResizeWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SelectWindow_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SelectWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetCursor_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetCursor((Int_t)G__int(libp->para[0]),(ECursor)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetFillColor_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetFillColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetFillStyle_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetLineColor_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetLineColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetLineType_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetLineType((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetLineStyle_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetLineStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetLineWidth_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetLineWidth((Width_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetMarkerColor_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetMarkerColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetMarkerSize_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetMarkerSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetMarkerStyle_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetMarkerStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetRGB_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetRGB((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetTextAlign_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetTextAlign((Short_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetTextAlign();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetTextColor_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetTextColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetTextFont_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->SetTextFont((char*)G__int(libp->para[0]),(TGXW::ETextSetMode)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetTextFont_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetTextFont((Font_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetTextMagnitude_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetTextMagnitude((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetTextSize_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetTextSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_UpdateWindow_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->UpdateWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetWindowAttributes_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetWindowAttributes((Window_t)G__int(libp->para[0]),*(WindowAttributes_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_MapWindow_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->MapWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_MapSubwindows_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->MapSubwindows((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_MapRaised_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->MapRaised((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_UnmapWindow_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->UnmapWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DestroyWindow_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DestroyWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_RaiseWindow_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->RaiseWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_LowerWindow_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->LowerWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_MoveWindow_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->MoveWindow((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_MoveResizeWindow_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->MoveResizeWindow((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ResizeWindow_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ResizeWindow((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetWindowBackground_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetWindowBackground((Window_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetWindowBackgroundPixmap_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetWindowBackgroundPixmap((Window_t)G__int(libp->para[0]),(Pixmap_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreateWindow_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->CreateWindow(
(Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7])
,(void*)G__int(libp->para[8]),(SetWindowAttributes_t*)G__int(libp->para[9])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_OpenDisplay_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->OpenDisplay((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CloseDisplay_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->CloseDisplay();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_InternAtom_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->InternAtom((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetDefaultRootWindow_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->GetDefaultRootWindow());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_LoadQueryFont_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->LoadQueryFont((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetFontHandle_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->GetFontHandle((FontStruct_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DeleteFont_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DeleteFont((FontStruct_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreateGC_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->CreateGC((Drawable_t)G__int(libp->para[0]),(GCValues_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ChangeGC_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ChangeGC((GContext_t)G__int(libp->para[0]),(GCValues_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CopyGC_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->CopyGC((GContext_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Mask_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DeleteGC_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DeleteGC((GContext_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreateCursor_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->CreateCursor((ECursor)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetCursor_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetCursor((Window_t)G__int(libp->para[0]),(Cursor_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreatePixmap_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->CreatePixmap((Drawable_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreatePixmap_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->CreatePixmap(
(Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreateBitmap_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->CreateBitmap((Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DeletePixmap_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DeletePixmap((Pixmap_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreatePictureFromFile_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXClient*)(G__getstructoffset()))->CreatePictureFromFile((Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,libp->para[2].ref?*(Pixmap_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Pixmap_t*)libp->para[3].ref:G__Mulong(libp->para[3])
,*(PictureAttributes_t*)libp->para[4].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CreatePictureFromData_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXClient*)(G__getstructoffset()))->CreatePictureFromData((Drawable_t)G__int(libp->para[0]),(char**)G__int(libp->para[1])
,libp->para[2].ref?*(Pixmap_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Pixmap_t*)libp->para[3].ref:G__Mulong(libp->para[3])
,*(PictureAttributes_t*)libp->para[4].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ReadPictureDataFromFile_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXClient*)(G__getstructoffset()))->ReadPictureDataFromFile((const char*)G__int(libp->para[0]),(char***)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DeletePictureData_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DeletePictureData((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetDashes_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetDashes((GContext_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ParseColor_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXClient*)(G__getstructoffset()))->ParseColor((Colormap_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,*(ColorStruct_t*)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_AllocColor_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXClient*)(G__getstructoffset()))->AllocColor((Colormap_t)G__int(libp->para[0]),*(ColorStruct_t*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_QueryColor_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->QueryColor((Colormap_t)G__int(libp->para[0]),*(ColorStruct_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_EventsPending_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->EventsPending());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_NextEvent_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->NextEvent(*(Event_t*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_Bell_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->Bell((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CopyArea_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->CopyArea(
(Drawable_t)G__int(libp->para[0]),(Drawable_t)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]),(Int_t)G__int(libp->para[7])
,(Int_t)G__int(libp->para[8]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ChangeWindowAttributes_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ChangeWindowAttributes((Window_t)G__int(libp->para[0]),(SetWindowAttributes_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawLine_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawLine((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ClearArea_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ClearArea((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_CheckEvent_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGXClient*)(G__getstructoffset()))->CheckEvent((Window_t)G__int(libp->para[0]),(EGEventType)G__int(libp->para[1])
,*(Event_t*)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SendEvent_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SendEvent((Window_t)G__int(libp->para[0]),(Event_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_WMDeleteNotify_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->WMDeleteNotify((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetKeyAutoRepeat_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetKeyAutoRepeat((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetKeyAutoRepeat();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GrabKey_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GrabKey((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GrabKey((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GrabButton_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GrabButton(
(Window_t)G__int(libp->para[0]),(EMouseButton)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(Window_t)G__int(libp->para[4]),(Cursor_t)G__int(libp->para[5])
,(Bool_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GrabButton((Window_t)G__int(libp->para[0]),(EMouseButton)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(Window_t)G__int(libp->para[4]),(Cursor_t)G__int(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GrabPointer_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GrabPointer((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(Window_t)G__int(libp->para[2]),(Cursor_t)G__int(libp->para[3])
,(Bool_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GrabPointer((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(Window_t)G__int(libp->para[2]),(Cursor_t)G__int(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetWindowName_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetWindowName((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetIconName_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetIconName((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetClassHints_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetClassHints((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetMWMHints_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetMWMHints((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetWMPosition_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetWMPosition((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetWMSize_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetWMSize((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetWMSizeHints_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetWMSizeHints(
(Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetWMState_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetWMState((Window_t)G__int(libp->para[0]),(EInitialState)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetWMTransientHint_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetWMTransientHint((Window_t)G__int(libp->para[0]),(Window_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawString_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawString((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_TextWidth_3_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->TextWidth((FontStruct_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetFontProperties_4_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetFontProperties((FontStruct_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetGCValues_5_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetGCValues((GContext_t)G__int(libp->para[0]),*(GCValues_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetFontStruct_6_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->GetFontStruct((FontH_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ClearWindow_7_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ClearWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_KeysymToKeycode_8_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->KeysymToKeycode((UInt_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_FillRectangle_9_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->FillRectangle((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawRectangle_0_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawRectangle((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DrawSegments_1_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->DrawSegments((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Segment_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SelectInput_2_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SelectInput((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetInputFocus_3_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetInputFocus((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetPrimarySelectionOwner_4_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGXClient*)(G__getstructoffset()))->GetPrimarySelectionOwner());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ConvertPrimarySelection_5_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ConvertPrimarySelection((Window_t)G__int(libp->para[0]),(Time_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_LookupString_6_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->LookupString((Event_t*)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetPasteBuffer_7_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetPasteBuffer((Window_t)G__int(libp->para[0]),(Atom_t)G__int(libp->para[1])
,*(TString*)libp->para[2].ref,libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,(Bool_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_TranslateCoordinates_8_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->TranslateCoordinates(
(Window_t)G__int(libp->para[0]),(Window_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Window_t*)libp->para[6].ref:G__Mulong(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_GetWindowSize_9_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->GetWindowSize((Drawable_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3])
,libp->para[4].ref?*(UInt_t*)libp->para[4].ref:G__Muint(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_FillPolygon_0_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->FillPolygon((Window_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Point_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_QueryPointer_1_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->QueryPointer(
(Window_t)G__int(libp->para[0]),libp->para[1].ref?*(Window_t*)libp->para[1].ref:G__Mulong(libp->para[1])
,libp->para[2].ref?*(Window_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]),libp->para[7].ref?*(UInt_t*)libp->para[7].ref:G__Muint(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetForeground_2_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetForeground((GContext_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_SetClipRectangles_3_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->SetClipRectangles((GContext_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Rectangle_t*)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_WriteCode_4_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->WriteCode((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_WriteCodeSend_5_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->WriteCodeSend((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_WriteGCValues_6_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->WriteGCValues((GCValues_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_WriteSetWindowAttributes_7_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->WriteSetWindowAttributes((SetWindowAttributes_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DeclFileName_8_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGXClient*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_DeclFileLine_9_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ImplFileName_0_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGXClient*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ImplFileLine_1_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGXClient*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_Class_Version_2_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGXClient*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_Class_3_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGXClient*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_Dictionary_4_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_IsA_5_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGXClient*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_ShowMembers_6_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGXClient_Streamer_7_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGXClient*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGXClient_TGXClient_8_14(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGXClient *p;
   if(1!=libp->paran) ;
   p=new TGXClient(*(TGXClient*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Graf2LN_TGXClient);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGXClient_wATGXClient_9_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGXClient *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGXClient *)((G__getstructoffset())+sizeof(TGXClient)*i);
   else  delete (TGXClient *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TBrowser */

/* TStyle */

/* TVirtualPad */

/* TContextMenu */

/* TGuiFactory */

/* TLego */

/* TLink */

/* TPoints */

/* TGXW */

/* TView */

/* TPostScript */

/* TGXClient */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Graf2 {
 public:
  G__Sizep2memfuncG__Graf2() {p=&G__Sizep2memfuncG__Graf2::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Graf2::*p)();
};

size_t G__get_sizep2memfuncG__Graf2()
{
  G__Sizep2memfuncG__Graf2 a;
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
extern "C" void G__cpp_setup_inheritanceG__Graf2() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TBrowser))) {
     TBrowser *G__Lderived;
     G__Lderived=(TBrowser*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),G__get_linked_tagnum(&G__G__Graf2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TNamed))) {
     TNamed *G__Lderived;
     G__Lderived=(TNamed*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TNamed),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TStyle))) {
     TStyle *G__Lderived;
     G__Lderived=(TStyle*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle),G__get_linked_tagnum(&G__G__Graf2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle),G__get_linked_tagnum(&G__G__Graf2LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle),G__get_linked_tagnum(&G__G__Graf2LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle),G__get_linked_tagnum(&G__G__Graf2LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle),G__get_linked_tagnum(&G__G__Graf2LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad))) {
     TVirtualPad *G__Lderived;
     G__Lderived=(TVirtualPad*)0x1000;
     {
       TWbox *G__Lpbase=(TWbox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),G__get_linked_tagnum(&G__G__Graf2LN_TWbox),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),G__get_linked_tagnum(&G__G__Graf2LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),G__get_linked_tagnum(&G__G__Graf2LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),G__get_linked_tagnum(&G__G__Graf2LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),G__get_linked_tagnum(&G__G__Graf2LN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu))) {
     TContextMenu *G__Lderived;
     G__Lderived=(TContextMenu*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu),G__get_linked_tagnum(&G__G__Graf2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory))) {
     TGuiFactory *G__Lderived;
     G__Lderived=(TGuiFactory*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory),G__get_linked_tagnum(&G__G__Graf2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TLego))) {
     TLego *G__Lderived;
     G__Lderived=(TLego*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLego),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLego),G__get_linked_tagnum(&G__G__Graf2LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLego),G__get_linked_tagnum(&G__G__Graf2LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TLink))) {
     TLink *G__Lderived;
     G__Lderived=(TLink*)0x1000;
     {
       TText *G__Lpbase=(TText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLink),G__get_linked_tagnum(&G__G__Graf2LN_TText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLink),G__get_linked_tagnum(&G__G__Graf2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLink),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLink),G__get_linked_tagnum(&G__G__Graf2LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TBox))) {
     TBox *G__Lderived;
     G__Lderived=(TBox*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TBox),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TBox),G__get_linked_tagnum(&G__G__Graf2LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TBox),G__get_linked_tagnum(&G__G__Graf2LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TWbox))) {
     TWbox *G__Lderived;
     G__Lderived=(TWbox*)0x1000;
     {
       TBox *G__Lpbase=(TBox*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TWbox),G__get_linked_tagnum(&G__G__Graf2LN_TBox),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TWbox),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TWbox),G__get_linked_tagnum(&G__G__Graf2LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TWbox),G__get_linked_tagnum(&G__G__Graf2LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TGXW))) {
     TGXW *G__Lderived;
     G__Lderived=(TGXW*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW),G__get_linked_tagnum(&G__G__Graf2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW),G__get_linked_tagnum(&G__G__Graf2LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW),G__get_linked_tagnum(&G__G__Graf2LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW),G__get_linked_tagnum(&G__G__Graf2LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW),G__get_linked_tagnum(&G__G__Graf2LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TView))) {
     TView *G__Lderived;
     G__Lderived=(TView*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TView),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript))) {
     TPostScript *G__Lderived;
     G__Lderived=(TPostScript*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),G__get_linked_tagnum(&G__G__Graf2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),G__get_linked_tagnum(&G__G__Graf2LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),G__get_linked_tagnum(&G__G__Graf2LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),G__get_linked_tagnum(&G__G__Graf2LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),G__get_linked_tagnum(&G__G__Graf2LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient))) {
     TGXClient *G__Lderived;
     G__Lderived=(TGXClient*)0x1000;
     {
       TGXW *G__Lpbase=(TGXW*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),G__get_linked_tagnum(&G__G__Graf2LN_TGXW),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),G__get_linked_tagnum(&G__G__Graf2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),G__get_linked_tagnum(&G__G__Graf2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),G__get_linked_tagnum(&G__G__Graf2LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),G__get_linked_tagnum(&G__G__Graf2LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),G__get_linked_tagnum(&G__G__Graf2LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),G__get_linked_tagnum(&G__G__Graf2LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Graf2() {

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

   /* TBrowser */
static void G__setup_memvarTBrowser(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TBrowser));
   { TBrowser *p; p=(TBrowser*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TBrowserImp),-1,-1,4,"fImp=",0,"Window system specific browser implementation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TBrowserTimer),-1,-1,4,"fTimer=",0,"Browser's timer");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TObject),-1,-1,4,"fLastSelectedObject=",0,"The last TObject selected by user");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu),-1,-1,2,"fContextMenu=",0,"Context menu pointer");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fNeedRefresh=",0,"True if the browser needs refresh");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TStyle */
static void G__setup_memvarTStyle(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle));
   { TStyle *p; p=(TStyle*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TAttAxis),-1,-1,4,"fXaxis=",0,"X axis attributes");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TAttAxis),-1,-1,4,"fYaxis=",0,"Y axis attributes");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TAttAxis),-1,-1,4,"fZaxis=",0,"Z axis attributes");
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
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fStatColor=",0,"stat color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fStatBorderSize=",0,"border size of Stats PavelLabel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStatX=",0,"X position of top right corner of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStatY=",0,"Y position of top right corner of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStatW=",0,"width of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStatH=",0,"height of stat box");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fTitleColor=",0,"title color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fTitleBorderSize=",0,"border size of Title PavelLabel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleX=",0,"X position of top left corner of title box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleY=",0,"Y position of top left corner of title box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleW=",0,"width of title box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleH=",0,"height of title box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fLegoInnerR=",0,"Inner radius for cylindrical legos");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TArrayI),-1,-1,4,"fPalette=",0,"Color palette");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TString),-1,-1,4,"fLineStyle[30]=",0,"String describing line style i (for postScript)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TString),-1,-1,4,"fHeaderPS=",0,"User defined additional Postscript header");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TStylecLcLEPaperSize),-1,-2,1,"kA4=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TStylecLcLEPaperSize),-1,-2,1,"kUSLetter=1",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TVirtualPad */
static void G__setup_memvarTVirtualPad(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad));
   { TVirtualPad *p; p=(TVirtualPad*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TContextMenu */
static void G__setup_memvarTContextMenu(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu));
   { TContextMenu *p; p=(TContextMenu*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TContextMenuImp),-1,-1,2,"fContextMenuImp=",0,"Context menu system specific implementation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TMethod),-1,-1,2,"fSelectedMethod=",0,"selected method");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TObject),-1,-1,2,"fSelectedObject=",0,"selected object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,-1,2,"fSelectedCanvas=",0,"selected canvas (if exist)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,-1,2,"fSelectedPad=",0,"selected pad (if exist)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,-1,2,"fBrowser=",0,"selected browser (if exist)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGuiFactory */
static void G__setup_memvarTGuiFactory(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory));
   { TGuiFactory *p; p=(TGuiFactory*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TLego */
static void G__setup_memvarTLego(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLego));
   { TLego *p; p=(TLego*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fSystem=",0,"Coordinate system");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNT=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fX0=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fDX=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fRmin[3]=",0,"Lower limits of lego");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fRmax[3]=",0,"Upper limits of lego");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fU[2000]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fD[2000]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fT[200]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNlevel=",0,"Number of color levels");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fFunLevel[257]=",0,"Function levels corresponding to colors");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fColorLevel[258]=",0,"Color levels corresponding to functions");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fColorMain[10]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fColorDark[10]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fColorTop=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fColorBottom=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fMesh=",0,"(=1 if mesh to draw, o otherwise)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNlines=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fLevelLine[200]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fPlines[1200]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fAphi[183]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fLoff=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fYdl=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fYls[4]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fVls[12]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fQA=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fQD=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fQS=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNqs=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNxrast=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNyrast=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fXrast=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fYrast=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fDXrast=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fDYrast=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fIfrast=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,4,"fRaster=",0,"pointer to raster buffer");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fJmask[30]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fMask[465]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,97,0,0,-1,G__defined_typename("DrawFaceFunc_t"),-1,4,"fDrawFace=",0,"pointer to face drawing function");
   G__memvar_setup((void*)NULL,97,0,0,-1,G__defined_typename("LegoFunc_t"),-1,4,"fLegoFunction=",0,"pointer to lego function");
   G__memvar_setup((void*)NULL,97,0,0,-1,G__defined_typename("SurfaceFunc_t"),-1,4,"fSurfaceFunction=",0,"pointer to surface function");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TLink */
static void G__setup_memvarTLink(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLink));
   { TLink *p; p=(TLink*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-1,2,"fLink=",0,"pointer to object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPoints */
static void G__setup_memvarTPoints(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPoints));
   { TPoints *p; p=(TPoints*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,4,"fX=",0,"X world coordinate");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,4,"fY=",0,"Y world coordinate");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGXW */
static void G__setup_memvarTGXW(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW));
   { TGXW *p; p=(TGXW*)0x1000; if (p) { }
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLEDrawMode),-1,-2,1,"kCopy=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLEDrawMode),-1,-2,1,"kXor=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLEDrawMode),-1,-2,1,"kInvert=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLEBoxMode),-1,-2,1,"kHollow=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLEBoxMode),-1,-2,1,"kFilled=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLETextMode),-1,-2,1,"kClear=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLETextMode),-1,-2,1,"kOpaque=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLETextSetMode),-1,-2,1,"kCheck=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLETextSetMode),-1,-2,1,"kLoad=1",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLEDrawMode),-1,-1,2,"fDrawMode=",0,"Drawing mode");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TView */
static void G__setup_memvarTView(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TView));
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
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TSeqCollection),-1,-1,2,"fOutline=",0,"Collection of outline's objects");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fDefaultOutline=",0,"Set to TRUE if outline is default cube");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fAutoRange=",0,"Set to TRUE if range computed automatically");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPostScript */
static void G__setup_memvarTPostScript(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript));
   { TPostScript *p; p=(TPostScript*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX1v=",0,"X bottom left corner of paper");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY1v=",0,"Y bottom left corner of paper");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX2v=",0,"X top right corner of paper");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY2v=",0,"Y top right corner of paper");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX1w=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY1w=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX2w=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY2w=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDXC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDYC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYC=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fFX=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fFY=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXVP1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXVP2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYVP1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYVP2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXVS1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXVS2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYVS1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYVS2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fXsize=",0,"Page size along X");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fYsize=",0,"Page size along Y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMaxsize=",0,"Largest dimension of X and Y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRed=",0,"Per cent of red");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fGreen=",0,"Per cent of green");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fBlue=",0,"Per cent of blue");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSave=",0,"Number of gsave for restore");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNXzone=",0,"Number of zones along X");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNYzone=",0,"Number of zones along Y");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fIXzone=",0,"Current zone along X");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fIYzone=",0,"Current zone along Y");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLenBuffer=",0,"buffer length");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMarkerSizeCur=",0,"current transformed value of marker size");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCurrentColor=",0,"current Postscript color index");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpages=",0,"number of pages");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fType=",0,"PostScript workstation type");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMode=",0,"PostScript mode");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fClip=",0,"Clipping mode");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fBoundingBox=",0,"True for Encapsulated PostScript");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fClear=",0,"True when page must be cleared");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fClipStatus=",0,"Clipping Indicator");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fPrinted=",0,"True when a page must be printed");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fRange=",0,"True when a range has been defined");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fZone=",0,"Zone indicator");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_ofstream),-1,-1,2,"fStream=",0,"File stream identifier");
   G__memvar_setup((void*)NULL,99,0,0,-1,G__defined_typename("Text_t"),-1,2,"fBuffer[512]=",0,"PostScript file buffer");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGXClient */
static void G__setup_memvarTGXClient(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient));
   { TGXClient *p; p=(TGXClient*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TSocket),-1,-1,2,"fSocket=",0,"Socket for communication with server");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TMessage),-1,-1,2,"fBuffer=",0,"Client buffer");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fHeaderSize=",0,"Size of header for primitives");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fBeginCode=",0,"Position in buffer when starting encoding a primitive");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCurrentColor=",0,"Current color on server");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fChupx=",0,"Character up on X");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fChupy=",0,"Character up on Y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fMagnitude=",0,"Text magnitude");
   G__memvar_setup((void*)NULL,99,0,0,-1,-1,-1,2,"fText[256]=",0,"Communication text array");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Graf2() {
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
static void G__setup_memfuncTBrowser(void) {
   /* TBrowser */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TBrowser));
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,0,2,1,1,0,
"C - - 0 \"Browser\" name C - - 0 \"ROOT Object Browser\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,0,4,1,1,0,
"C - - 0 - name C - - 0 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_2_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,0,6,1,1,0,
"C - - 0 - name C - - 0 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_3_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,0,3,1,1,0,
"C - - 0 - name U 'TObject' - 0 - obj "
"C - - 0 \"ROOT Object Browser\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_4_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,0,5,1,1,0,
"C - - 0 - name U 'TObject' - 0 - obj "
"C - - 0 - title h - 'UInt_t' 0 - width "
"h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_5_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,0,7,1,1,0,
"C - - 0 - name U 'TObject' - 0 - obj "
"C - - 0 - title i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - width "
"h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Add",265,G__TBrowser_Add_7_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - obj C - - 0 0 name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Create",596,G__TBrowser_Create_8_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 0 obj","Create this Browser",(void*)NULL,0);
   G__memfunc_setup("ExecuteDefaultAction",2038,G__TBrowser_ExecuteDefaultAction_9_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBrowserImp",1322,G__TBrowser_GetBrowserImp_0_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TBrowserImp),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetContextMenu",1434,G__TBrowser_GetContextMenu_1_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRefreshFlag",1385,G__TBrowser_GetRefreshFlag_2_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSelected",1097,G__TBrowser_GetSelected_3_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
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
   G__memfunc_setup("Class",502,G__TBrowser_Class_5_2,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TBrowser_Dictionary_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBrowser_IsA_7_2,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBrowser_ShowMembers_8_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBrowser_Streamer_9_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_0_3,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,0,1,1,1,0,"u 'TBrowser' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBrowser",950,G__TBrowser_wATBrowser_1_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTStyle(void) {
   /* TStyle */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle));
   G__memfunc_setup("TStyle",613,G__TStyle_TStyle_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TStyle),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TStyle",613,G__TStyle_TStyle_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TStyle),-1,0,2,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TStyle",613,G__TStyle_TStyle_2_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TStyle),-1,0,1,1,1,0,"u 'TStyle' - 1 - style",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AxisChoice",992,G__TStyle_AxisChoice_4_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - 'Option_t' 0 - axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TStyle_Browse_5_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TStyle_Copy_6_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - style",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("cd",199,G__TStyle_cd_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNdivisions",1350,G__TStyle_GetNdivisions_8_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAxisColor",1204,G__TStyle_GetAxisColor_9_0,115,-1,G__defined_typename("Color_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelColor",1279,G__TStyle_GetLabelColor_0_1,115,-1,G__defined_typename("Color_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelFont",1175,G__TStyle_GetLabelFont_1_1,115,-1,G__defined_typename("Style_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelOffset",1383,G__TStyle_GetLabelOffset_2_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelSize",1179,G__TStyle_GetLabelSize_3_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitleOffset",1417,G__TStyle_GetTitleOffset_4_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis","return axis title offset",(void*)NULL,0);
   G__memfunc_setup("GetTitleSize",1213,G__TStyle_GetTitleSize_5_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis","return axis title size",(void*)NULL,0);
   G__memfunc_setup("GetTickLength",1293,G__TStyle_GetTickLength_6_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBarOffset",1180,G__TStyle_GetBarOffset_7_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBarWidth",1077,G__TStyle_GetBarWidth_8_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDrawBorder",1292,G__TStyle_GetDrawBorder_9_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetErrorMarker",1420,G__TStyle_GetErrorMarker_0_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetErrorMsize",1330,G__TStyle_GetErrorMsize_1_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetErrorX",898,G__TStyle_GetErrorX_2_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasColor",1403,G__TStyle_GetCanvasColor_3_2,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasBorderSize",1909,G__TStyle_GetCanvasBorderSize_4_2,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasBorderMode",1887,G__TStyle_GetCanvasBorderMode_5_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasDefH",1235,G__TStyle_GetCanvasDefH_6_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasDefW",1250,G__TStyle_GetCanvasDefW_7_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasDefX",1251,G__TStyle_GetCanvasDefX_8_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasDefY",1252,G__TStyle_GetCanvasDefY_9_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetColorPalette",1518,G__TStyle_GetColorPalette_0_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNumberOfColors",1712,G__TStyle_GetNumberOfColors_1_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadColor",1076,G__TStyle_GetPadColor_2_3,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadBorderSize",1582,G__TStyle_GetPadBorderSize_3_3,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadBorderMode",1560,G__TStyle_GetPadBorderMode_4_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadBottomMargin",1800,G__TStyle_GetPadBottomMargin_5_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadTopMargin",1478,G__TStyle_GetPadTopMargin_6_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadLeftMargin",1566,G__TStyle_GetPadLeftMargin_7_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadRightMargin",1681,G__TStyle_GetPadRightMargin_8_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadGridX",1043,G__TStyle_GetPadGridX_9_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadGridY",1044,G__TStyle_GetPadGridY_0_4,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadTickX",1048,G__TStyle_GetPadTickX_1_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadTickY",1049,G__TStyle_GetPadTickY_2_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncColor",1195,G__TStyle_GetFuncColor_3_4,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncStyle",1213,G__TStyle_GetFuncStyle_4_4,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncWidth",1196,G__TStyle_GetFuncWidth_5_4,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameFillColor",1681,G__TStyle_GetFrameFillColor_6_4,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineColor",1682,G__TStyle_GetFrameLineColor_7_4,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameFillStyle",1699,G__TStyle_GetFrameFillStyle_8_4,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineStyle",1700,G__TStyle_GetFrameLineStyle_9_4,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineWidth",1683,G__TStyle_GetFrameLineWidth_0_5,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameBorderSize",1796,G__TStyle_GetFrameBorderSize_1_5,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameBorderMode",1774,G__TStyle_GetFrameBorderMode_2_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistFillColor",1598,G__TStyle_GetHistFillColor_3_5,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistLineColor",1599,G__TStyle_GetHistLineColor_4_5,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistFillStyle",1616,G__TStyle_GetHistFillStyle_5_5,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistLineStyle",1617,G__TStyle_GetHistLineStyle_6_5,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistLineWidth",1600,G__TStyle_GetHistLineWidth_7_5,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLegoInnerR",1269,G__TStyle_GetLegoInnerR_8_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptDate",977,G__TStyle_GetOptDate_9_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptFile",979,G__TStyle_GetOptFile_0_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptFit",886,G__TStyle_GetOptFit_1_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptStat",1007,G__TStyle_GetOptStat_2_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptTitle",1109,G__TStyle_GetOptTitle_3_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptLogx",1005,G__TStyle_GetOptLogx_4_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptLogy",1006,G__TStyle_GetOptLogy_5_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptLogz",1007,G__TStyle_GetOptLogz_6_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPaperSize",1203,G__TStyle_GetPaperSize_7_6,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - xsize f - 'Float_t' 1 - ysize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShowEventStatus",1863,G__TStyle_GetShowEventStatus_8_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetScreenFactor",1503,G__TStyle_GetScreenFactor_9_6,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatColor",1211,G__TStyle_GetStatColor_0_7,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatBorderSize",1717,G__TStyle_GetStatBorderSize_1_7,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatX",788,G__TStyle_GetStatX_2_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatY",789,G__TStyle_GetStatY_3_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatW",787,G__TStyle_GetStatW_4_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatH",772,G__TStyle_GetStatH_5_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitleColor",1313,G__TStyle_GetTitleColor_6_7,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"","return histogram title color",(void*)NULL,0);
   G__memfunc_setup("GetTitleBorderSize",1819,G__TStyle_GetTitleBorderSize_7_7,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"","return border size of histogram title TPaveLabel",(void*)NULL,0);
   G__memfunc_setup("GetTitleXOffset",1505,G__TStyle_GetTitleXOffset_8_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return X axis title offset",(void*)NULL,0);
   G__memfunc_setup("GetTitleXSize",1301,G__TStyle_GetTitleXSize_9_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return X axis title size",(void*)NULL,0);
   G__memfunc_setup("GetTitleYOffset",1506,G__TStyle_GetTitleYOffset_0_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return Y axis title offset",(void*)NULL,0);
   G__memfunc_setup("GetTitleYSize",1302,G__TStyle_GetTitleYSize_1_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return Y axis title size",(void*)NULL,0);
   G__memfunc_setup("GetTitleX",890,G__TStyle_GetTitleX_2_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return left X position of histogram title TPavelabel",(void*)NULL,0);
   G__memfunc_setup("GetTitleY",891,G__TStyle_GetTitleY_3_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return left bottom position of histogram title TPavelabel",(void*)NULL,0);
   G__memfunc_setup("GetTitleW",889,G__TStyle_GetTitleW_4_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return width of histogram title TPaveLabel",(void*)NULL,0);
   G__memfunc_setup("GetTitleH",874,G__TStyle_GetTitleH_5_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return height of histogram title TPavelabel",(void*)NULL,0);
   G__memfunc_setup("GetHeaderPS",1036,G__TStyle_GetHeaderPS_6_8,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineStyleString",1840,G__TStyle_GetLineStyleString_7_8,67,-1,G__defined_typename("Text_t"),0,1,1,1,9,"i - 'Int_t' 0 1 i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TStyle_Reset_8_8,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHeaderPS",1048,G__TStyle_SetHeaderPS_9_8,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - header",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLineStyleString",1852,G__TStyle_SetLineStyleString_0_9,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - i C - - 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetNdivisions",1362,G__TStyle_SetNdivisions_1_9,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 510 n C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetAxisColor",1216,G__TStyle_SetAxisColor_2_9,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 1 color C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelColor",1291,G__TStyle_SetLabelColor_3_9,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 1 color C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelFont",1187,G__TStyle_SetLabelFont_4_9,121,-1,-1,0,2,1,1,0,
"s - 'Style_t' 0 62 font C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelOffset",1395,G__TStyle_SetLabelOffset_5_9,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0.005 offset C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelSize",1191,G__TStyle_SetLabelSize_6_9,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0.04 size C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLegoInnerR",1281,G__TStyle_SetLegoInnerR_7_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 rad",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetScreenFactor",1515,G__TStyle_SetScreenFactor_8_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 factor",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTickLength",1305,G__TStyle_SetTickLength_9_9,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0.03 length C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleOffset",1429,G__TStyle_SetTitleOffset_0_10,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 1 offset C - 'Option_t' 0 \"X\" axis","set axis title offset",(void*)NULL,0);
   G__memfunc_setup("SetTitleSize",1225,G__TStyle_SetTitleSize_1_10,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0.02 size C - 'Option_t' 0 \"X\" axis","set axis title size",(void*)NULL,0);
   G__memfunc_setup("SetOptDate",989,G__TStyle_SetOptDate_2_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 datefl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptFile",991,G__TStyle_SetOptFile_3_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 file",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptFit",898,G__TStyle_SetOptFit_4_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 fit",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptLogx",1017,G__TStyle_SetOptLogx_5_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 logx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptLogy",1018,G__TStyle_SetOptLogy_6_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 logy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptLogz",1019,G__TStyle_SetOptLogz_7_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 logz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptStat",1019,G__TStyle_SetOptStat_8_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 stat",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptTitle",1121,G__TStyle_SetOptTitle_9_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 tit",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBarOffset",1192,G__TStyle_SetBarOffset_0_11,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 baroff",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBarWidth",1089,G__TStyle_SetBarWidth_1_11,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 barwidth",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetErrorMarker",1432,G__TStyle_SetErrorMarker_2_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 21 marker",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetErrorMsize",1342,G__TStyle_SetErrorMsize_3_11,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.05 msize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetErrorX",910,G__TStyle_SetErrorX_4_11,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 errorx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetDrawBorder",1304,G__TStyle_SetDrawBorder_5_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 drawborder",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasColor",1415,G__TStyle_SetCanvasColor_6_11,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 19 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasBorderSize",1921,G__TStyle_SetCanvasBorderSize_7_11,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasBorderMode",1899,G__TStyle_SetCanvasBorderMode_8_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasDefH",1247,G__TStyle_SetCanvasDefH_9_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 500 h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasDefW",1262,G__TStyle_SetCanvasDefW_0_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 700 w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasDefX",1263,G__TStyle_SetCanvasDefX_1_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 10 topx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasDefY",1264,G__TStyle_SetCanvasDefY_2_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 10 topy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadColor",1088,G__TStyle_SetPadColor_3_12,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 19 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadBorderSize",1594,G__TStyle_SetPadBorderSize_4_12,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadBorderMode",1572,G__TStyle_SetPadBorderMode_5_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadBottomMargin",1812,G__TStyle_SetPadBottomMargin_6_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 margin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadTopMargin",1490,G__TStyle_SetPadTopMargin_7_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 margin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadLeftMargin",1578,G__TStyle_SetPadLeftMargin_8_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 margin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadRightMargin",1693,G__TStyle_SetPadRightMargin_9_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 margin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadGridX",1055,G__TStyle_SetPadGridX_0_13,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - gridx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadGridY",1056,G__TStyle_SetPadGridY_1_13,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - gridy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadTickX",1060,G__TStyle_SetPadTickX_2_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - tickx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadTickY",1061,G__TStyle_SetPadTickY_3_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - ticky",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFuncStyle",1225,G__TStyle_SetFuncStyle_4_13,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 1 style",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFuncColor",1207,G__TStyle_SetFuncColor_5_13,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFuncWidth",1208,G__TStyle_SetFuncWidth_6_13,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 4 width",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameFillColor",1693,G__TStyle_SetFrameFillColor_7_13,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineColor",1694,G__TStyle_SetFrameLineColor_8_13,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameFillStyle",1711,G__TStyle_SetFrameFillStyle_9_13,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineStyle",1712,G__TStyle_SetFrameLineStyle_0_14,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineWidth",1695,G__TStyle_SetFrameLineWidth_1_14,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 width",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameBorderSize",1808,G__TStyle_SetFrameBorderSize_2_14,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameBorderMode",1786,G__TStyle_SetFrameBorderMode_3_14,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistFillColor",1610,G__TStyle_SetHistFillColor_4_14,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistLineColor",1611,G__TStyle_SetHistLineColor_5_14,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistFillStyle",1628,G__TStyle_SetHistFillStyle_6_14,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistLineStyle",1629,G__TStyle_SetHistLineStyle_7_14,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistLineWidth",1612,G__TStyle_SetHistLineWidth_8_14,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 width",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPaperSize",1215,G__TStyle_SetPaperSize_9_14,121,-1,-1,0,1,1,1,0,"i 'TStyle::EPaperSize' - 0 - size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPaperSize",1215,G__TStyle_SetPaperSize_0_15,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 20 xsize f - 'Float_t' 0 26 ysize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatColor",1223,G__TStyle_SetStatColor_1_15,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 19 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatBorderSize",1729,G__TStyle_SetStatBorderSize_2_15,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 2 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatX",800,G__TStyle_SetStatX_3_15,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatY",801,G__TStyle_SetStatY_4_15,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatW",799,G__TStyle_SetStatW_5_15,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.19 w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatH",784,G__TStyle_SetStatH_6_15,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleColor",1325,G__TStyle_SetTitleColor_7_15,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 19 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleBorderSize",1831,G__TStyle_SetTitleBorderSize_8_15,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 2 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleXOffset",1517,G__TStyle_SetTitleXOffset_9_15,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleXSize",1313,G__TStyle_SetTitleXSize_0_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.02 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleYOffset",1518,G__TStyle_SetTitleYOffset_1_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleYSize",1314,G__TStyle_SetTitleYSize_2_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.02 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleX",902,G__TStyle_SetTitleX_3_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleY",903,G__TStyle_SetTitleY_4_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleW",901,G__TStyle_SetTitleW_5_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleH",886,G__TStyle_SetTitleH_6_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ToggleEventStatus",1768,G__TStyle_ToggleEventStatus_7_16,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPalette",1019,G__TStyle_SetPalette_8_16,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 0 ncolors I - 'Int_t' 0 0 colors",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TStyle_DeclFileName_9_16,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TStyle_DeclFileLine_0_17,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TStyle_ImplFileName_1_17,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TStyle_ImplFileLine_2_17,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TStyle_Class_Version_3_17,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TStyle_Class_4_17,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TStyle_Dictionary_5_17,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TStyle_IsA_6_17,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TStyle_ShowMembers_7_17,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TStyle_Streamer_8_17,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TStyle",739,G__TStyle_wATStyle_9_17,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTVirtualPad(void) {
   /* TVirtualPad */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad));
   G__memfunc_setup("AbsCoordinates",1425,G__TVirtualPad_AbsCoordinates_3_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - set",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("AbsPixeltoX",1107,G__TVirtualPad_AbsPixeltoX_4_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - px",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("AbsPixeltoY",1108,G__TVirtualPad_AbsPixeltoY_5_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("cd",199,G__TVirtualPad_cd_6_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 subpadnumber",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Clear",487,G__TVirtualPad_Clear_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Close",502,G__TVirtualPad_Close_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CopyPixmap",1034,G__TVirtualPad_CopyPixmap_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CopyPixmaps",1149,G__TVirtualPad_CopyPixmaps_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Divide",597,G__TVirtualPad_Divide_1_1,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 1 nx i - 'Int_t' 0 1 ny "
"f - 'Float_t' 0 0.01 xmargin f - 'Float_t' 0 0.01 ymargin "
"i - 'Int_t' 0 0 color",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Draw",398,G__TVirtualPad_Draw_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawClassObject",1499,G__TVirtualPad_DrawClassObject_3_1,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - obj C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawFrame",889,G__TVirtualPad_DrawFrame_4_1,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax "
"C - 'Text_t' 0 \"\" title",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawLine",790,G__TVirtualPad_DrawLine_5_1,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawLineNDC",1003,G__TVirtualPad_DrawLineNDC_6_1,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - u1 f - 'Float_t' 0 - v1 "
"f - 'Float_t' 0 - u2 f - 'Float_t' 0 - v2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawText",819,G__TVirtualPad_DrawText_7_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawTextNDC",1032,G__TVirtualPad_DrawTextNDC_8_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - u f - 'Float_t' 0 - v "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ExecuteEvent",1237,G__TVirtualPad_ExecuteEvent_9_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetCanvasID",1033,G__TVirtualPad_GetCanvasID_0_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetCanvas",892,G__TVirtualPad_GetCanvas_1_2,85,G__get_linked_tagnum(&G__G__Graf2LN_TCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetVirtCanvas",1313,G__TVirtualPad_GetVirtCanvas_2_2,85,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetEvent",802,G__TVirtualPad_GetEvent_3_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetEventX",890,G__TVirtualPad_GetEventX_4_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetEventY",891,G__TVirtualPad_GetEventY_5_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetFrame",779,G__TVirtualPad_GetFrame_6_2,85,G__get_linked_tagnum(&G__G__Graf2LN_TFrame),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetHighLightColor",1687,G__TVirtualPad_GetHighLightColor_7_2,115,-1,G__defined_typename("Color_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetRange",781,G__TVirtualPad_GetRange_8_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - x1 f - 'Float_t' 1 - y1 "
"f - 'Float_t' 1 - x2 f - 'Float_t' 1 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetRangeAxis",1186,G__TVirtualPad_GetRangeAxis_9_2,121,-1,-1,0,4,1,1,0,
"f - 'Axis_t' 1 - xmin f - 'Axis_t' 1 - ymin "
"f - 'Axis_t' 1 - xmax f - 'Axis_t' 1 - ymax",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPadPar",856,G__TVirtualPad_GetPadPar_0_3,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xlow f - 'Float_t' 1 - ylow "
"f - 'Float_t' 1 - xup f - 'Float_t' 1 - yup",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetXlowNDC",927,G__TVirtualPad_GetXlowNDC_1_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetYlowNDC",928,G__TVirtualPad_GetYlowNDC_2_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetWNDC",588,G__TVirtualPad_GetWNDC_3_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetHNDC",573,G__TVirtualPad_GetHNDC_4_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetWw",494,G__TVirtualPad_GetWw_5_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetWh",479,G__TVirtualPad_GetWh_6_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetAbsXlowNDC",1205,G__TVirtualPad_GetAbsXlowNDC_7_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetAbsYlowNDC",1206,G__TVirtualPad_GetAbsYlowNDC_8_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetAbsWNDC",866,G__TVirtualPad_GetAbsWNDC_9_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetAbsHNDC",851,G__TVirtualPad_GetAbsHNDC_0_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPhi",577,G__TVirtualPad_GetPhi_1_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTheta",790,G__TVirtualPad_GetTheta_2_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetUxmin",817,G__TVirtualPad_GetUxmin_3_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetUymin",818,G__TVirtualPad_GetUymin_4_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetUxmax",819,G__TVirtualPad_GetUxmax_5_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetUymax",820,G__TVirtualPad_GetUymax_6_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetGridx",798,G__TVirtualPad_GetGridx_7_4,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetGridy",799,G__TVirtualPad_GetGridy_8_4,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTickx",803,G__TVirtualPad_GetTickx_9_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTicky",804,G__TVirtualPad_GetTicky_0_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetListOfPrimitives",1949,G__TVirtualPad_GetListOfPrimitives_1_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPrimitive",1241,G__TVirtualPad_GetPrimitive_2_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TObject),-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetSelected",1097,G__TVirtualPad_GetSelected_3_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPadPointer",1302,G__TVirtualPad_GetPadPointer_4_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPadSave",964,G__TVirtualPad_GetPadSave_5_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetSelectedPad",1374,G__TVirtualPad_GetSelectedPad_6_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetView",699,G__TVirtualPad_GetView_7_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TView),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetLogx",698,G__TVirtualPad_GetLogx_8_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetLogy",699,G__TVirtualPad_GetLogy_9_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetLogz",700,G__TVirtualPad_GetLogz_0_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetMother",911,G__TVirtualPad_GetMother_1_6,85,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetName",673,G__TVirtualPad_GetName_2_6,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTitle",802,G__TVirtualPad_GetTitle_3_6,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPadPaint",1073,G__TVirtualPad_GetPadPaint_4_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPixmapID",1052,G__TVirtualPad_GetPixmapID_5_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetView3D",818,G__TVirtualPad_GetView3D_6_6,85,G__get_linked_tagnum(&G__G__Graf2LN_TPadView3D),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("HighLight",888,G__TVirtualPad_HighLight_7_6,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 kRed col b - 'Bool_t' 0 kTRUE set",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("InspectObject",1325,G__TVirtualPad_InspectObject_8_6,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("IsBatch",670,G__TVirtualPad_IsBatch_9_6,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("IsModified",989,G__TVirtualPad_IsModified_0_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("IsRetained",1000,G__TVirtualPad_IsRetained_1_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ls",223,G__TVirtualPad_ls_2_7,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Modified",801,G__TVirtualPad_Modified_3_7,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 1 flag",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("OpaqueMoving",1243,G__TVirtualPad_OpaqueMoving_4_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("OpaqueResizing",1462,G__TVirtualPad_OpaqueResizing_5_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PadtoX",592,G__TVirtualPad_PadtoX_6_7,102,-1,G__defined_typename("Float_t"),0,1,1,1,8,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PadtoY",593,G__TVirtualPad_PadtoY_7_7,102,-1,G__defined_typename("Float_t"),0,1,1,1,8,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Paint",508,G__TVirtualPad_Paint_8_7,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintBox",805,G__TVirtualPad_PaintBox_9_7,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2 "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintFillArea",1276,G__TVirtualPad_PaintFillArea_0_8,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPadFrame",1276,G__TVirtualPad_PaintPadFrame_1_8,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintLine",900,G__TVirtualPad_PaintLine_2_8,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintLineNDC",1113,G__TVirtualPad_PaintLineNDC_3_8,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - u1 f - 'Coord_t' 0 - v1 "
"f - 'Coord_t' 0 - u2 f - 'Coord_t' 0 - v2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintLine3D",1019,G__TVirtualPad_PaintLine3D_4_8,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - p1 F - 'Float_t' 0 - p2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPolyLine",1320,G__TVirtualPad_PaintPolyLine_5_8,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPolyLine3D",1439,G__TVirtualPad_PaintPolyLine3D_6_8,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPolyLineNDC",1533,G__TVirtualPad_PaintPolyLineNDC_7_8,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPolyMarker",1538,G__TVirtualPad_PaintPolyMarker_8_8,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintModified",1309,G__TVirtualPad_PaintModified_9_8,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintText",929,G__TVirtualPad_PaintText_0_9,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintTextNDC",1142,G__TVirtualPad_PaintTextNDC_1_9,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - u f - 'Float_t' 0 - v "
"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PixeltoX",829,G__TVirtualPad_PixeltoX_2_9,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - px",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PixeltoY",830,G__TVirtualPad_PixeltoY_3_9,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Pop",303,G__TVirtualPad_Pop_4_9,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Print",525,G__TVirtualPad_Print_5_9,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" filename",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Print",525,G__TVirtualPad_Print_6_9,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 - filename C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Range",493,G__TVirtualPad_Range_7_9,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("RangeAxis",898,G__TVirtualPad_RangeAxis_8_9,121,-1,-1,0,4,1,1,0,
"f - 'Axis_t' 0 - xmin f - 'Axis_t' 0 - ymin "
"f - 'Axis_t' 0 - xmax f - 'Axis_t' 0 - ymax",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("RecursiveRemove",1574,G__TVirtualPad_RecursiveRemove_9_9,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("RedrawAxis",1018,G__TVirtualPad_RedrawAxis_0_10,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ResetView3D",1045,G__TVirtualPad_ResetView3D_1_10,121,-1,-1,0,1,1,1,0,"U 'TPadView3D' - 0 0 view",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ResizePad",903,G__TVirtualPad_ResizePad_2_10,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SaveAs",579,G__TVirtualPad_SaveAs_3_10,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" filename",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetBorderMode",1295,G__TVirtualPad_SetBorderMode_4_10,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordermode",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetBorderSize",1317,G__TVirtualPad_SetBorderSize_5_10,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordersize",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetCanvasSize",1315,G__TVirtualPad_SetCanvasSize_6_10,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - ww h - 'UInt_t' 0 - wh",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetCursor",938,G__TVirtualPad_SetCursor_7_10,121,-1,-1,0,1,1,1,0,"i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetDoubleBuffer",1505,G__TVirtualPad_SetDoubleBuffer_8_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetGrid",690,G__TVirtualPad_SetGrid_9_10,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetGridx",810,G__TVirtualPad_SetGridx_0_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetGridy",811,G__TVirtualPad_SetGridy_1_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetFillStyle",1220,G__TVirtualPad_SetFillStyle_2_11,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - fstyle",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetLogx",710,G__TVirtualPad_SetLogx_3_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetLogy",711,G__TVirtualPad_SetLogy_4_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetLogz",712,G__TVirtualPad_SetLogz_5_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetPad",577,G__TVirtualPad_SetPad_6_11,121,-1,-1,0,9,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"f - 'Float_t' 0 - xlow f - 'Float_t' 0 - ylow "
"f - 'Float_t' 0 - xup f - 'Float_t' 0 - yup "
"s - 'Color_t' 0 35 color s - 'Short_t' 0 5 bordersize "
"s - 'Short_t' 0 -1 bordermode",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetPad",577,G__TVirtualPad_SetPad_7_11,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xlow f - 'Float_t' 0 - ylow "
"f - 'Float_t' 0 - xup f - 'Float_t' 0 - yup",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetName",685,G__TVirtualPad_SetName_8_11,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetSelected",1109,G__TVirtualPad_SetSelected_9_11,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTicks",810,G__TVirtualPad_SetTicks_0_12,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTickx",815,G__TVirtualPad_SetTickx_1_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTicky",816,G__TVirtualPad_SetTicky_2_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTitle",814,G__TVirtualPad_SetTitle_3_12,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" title",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTheta",802,G__TVirtualPad_SetTheta_4_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 30 theta",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetPhi",589,G__TVirtualPad_SetPhi_5_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 30 phi",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetView",711,G__TVirtualPad_SetView_6_12,121,-1,-1,0,1,1,1,0,"U 'TView' - 0 - view",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Update",611,G__TVirtualPad_Update_7_12,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("UtoAbsPixel",1104,G__TVirtualPad_UtoAbsPixel_8_12,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Float_t' 0 - u",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("VtoAbsPixel",1105,G__TVirtualPad_VtoAbsPixel_9_12,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("UtoPixel",826,G__TVirtualPad_UtoPixel_0_13,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Float_t' 0 - u",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("VtoPixel",827,G__TVirtualPad_VtoPixel_1_13,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("XtoAbsPixel",1107,G__TVirtualPad_XtoAbsPixel_2_13,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("YtoAbsPixel",1108,G__TVirtualPad_YtoAbsPixel_3_13,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("XtoPad",592,G__TVirtualPad_XtoPad_4_13,102,-1,G__defined_typename("Float_t"),0,1,1,1,8,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("YtoPad",593,G__TVirtualPad_YtoPad_5_13,102,-1,G__defined_typename("Float_t"),0,1,1,1,8,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("XtoPixel",829,G__TVirtualPad_XtoPixel_6_13,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("YtoPixel",830,G__TVirtualPad_YtoPixel_7_13,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CreateToolTip",1311,G__TVirtualPad_CreateToolTip_8_13,85,G__get_linked_tagnum(&G__G__Graf2LN_TGToolTip),-1,0,3,1,1,0,
"U 'TBox' - 0 - b C - - 0 - text "
"l - 'Long_t' 0 - delayms",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeleteToolTip",1310,G__TVirtualPad_DeleteToolTip_9_13,121,-1,-1,0,1,1,1,0,"U 'TGToolTip' - 0 - tip",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ResetToolTip",1230,G__TVirtualPad_ResetToolTip_0_14,121,-1,-1,0,1,1,1,0,"U 'TGToolTip' - 0 - tip",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CloseToolTip",1217,G__TVirtualPad_CloseToolTip_1_14,121,-1,-1,0,1,1,1,0,"U 'TGToolTip' - 0 - tip",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("x3d",271,G__TVirtualPad_x3d_2_14,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeclFileName",1145,G__TVirtualPad_DeclFileName_3_14,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVirtualPad_DeclFileLine_4_14,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVirtualPad_ImplFileName_5_14,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVirtualPad_ImplFileLine_6_14,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVirtualPad_Class_Version_7_14,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVirtualPad_Class_8_14,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TVirtualPad_Dictionary_9_14,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVirtualPad_IsA_0_15,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVirtualPad_ShowMembers_1_15,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVirtualPad_Streamer_2_15,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TVirtualPad",1230,G__TVirtualPad_wATVirtualPad_3_15,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTContextMenu(void) {
   /* TContextMenu */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu));
   G__memfunc_setup("DisplayPopUp",1226,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TContextMenu",1230,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TContextMenu",1230,G__TContextMenu_TContextMenu_2_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu),-1,0,2,1,1,0,
"C - - 0 - name C - - 0 \"Context sensitive popup menu\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Action",606,G__TContextMenu_Action_4_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateArgumentTitle",1945,G__TContextMenu_CreateArgumentTitle_5_0,67,-1,G__defined_typename("Char_t"),0,1,1,1,0,"U 'TMethodArg' - 0 - argument",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateDialogTitle",1702,G__TContextMenu_CreateDialogTitle_6_0,67,-1,G__defined_typename("Char_t"),0,2,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePopupTitle",1642,G__TContextMenu_CreatePopupTitle_7_0,67,-1,G__defined_typename("Char_t"),0,1,1,1,0,"U 'TObject' - 0 - object",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_8_0,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 - method C - 'Text_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_9_0,121,-1,-1,0,2,1,1,0,
"U 'TMethod' - 0 - method U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_0_1,121,-1,-1,0,3,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method "
"C - 'Char_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_1_1,121,-1,-1,0,3,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method "
"U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBrowser",1028,G__TContextMenu_GetBrowser_2_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetContextMenuImp",1728,G__TContextMenu_GetContextMenuImp_3_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TContextMenuImp),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedCanvas",1701,G__TContextMenu_GetSelectedCanvas_4_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedMethod",1706,G__TContextMenu_GetSelectedMethod_5_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TMethod),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedObject",1696,G__TContextMenu_GetSelectedObject_6_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedPad",1374,G__TContextMenu_GetSelectedPad_7_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Popup",532,G__TContextMenu_Popup_8_1,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"U 'TObject' - 0 - obj U 'TVirtualPad' - 0 0 c "
"U 'TVirtualPad' - 0 0 p","Create menu from canvas",(void*)NULL,1);
   G__memfunc_setup("Popup",532,G__TContextMenu_Popup_9_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"U 'TObject' - 0 - obj U 'TBrowser' - 0 - b","Create menu from Browser",(void*)NULL,1);
   G__memfunc_setup("SetCanvas",904,G__TContextMenu_SetCanvas_0_2,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - c",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBrowser",1040,G__TContextMenu_SetBrowser_1_2,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMethod",909,G__TContextMenu_SetMethod_2_2,121,-1,-1,0,1,1,1,0,"U 'TMethod' - 0 - m",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetObject",899,G__TContextMenu_SetObject_3_2,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetObject",899,G__TContextMenu_SetObject_4_2,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - o",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPad",577,G__TContextMenu_SetPad_5_2,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - p",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TContextMenu_DeclFileName_6_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TContextMenu_DeclFileLine_7_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TContextMenu_ImplFileName_8_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TContextMenu_ImplFileLine_9_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TContextMenu_Class_Version_0_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TContextMenu_Class_1_3,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TContextMenu_Dictionary_2_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TContextMenu_IsA_3_3,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TContextMenu_ShowMembers_4_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TContextMenu_Streamer_5_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TContextMenu",1230,G__TContextMenu_TContextMenu_6_3,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu),-1,0,1,1,1,0,"u 'TContextMenu' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TContextMenu",1356,G__TContextMenu_wATContextMenu_7_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGuiFactory(void) {
   /* TGuiFactory */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory));
   G__memfunc_setup("TGuiFactory",1105,G__TGuiFactory_TGuiFactory_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory),-1,0,2,1,1,0,
"C - - 0 \"Batch\" name C - - 0 \"Batch GUI Factory\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateApplicationImp",2030,G__TGuiFactory_CreateApplicationImp_2_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TApplicationImp),-1,0,5,1,1,0,
"C - - 0 - classname I - - 0 - argc "
"C - - 2 - argv Y - - 0 - option "
"i - 'Int_t' 0 - numOptions",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateCanvasImp",1494,G__TGuiFactory_CreateCanvasImp_3_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TCanvasImp),-1,0,4,1,1,0,
"U 'TCanvas' - 0 - c C - - 0 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateCanvasImp",1494,G__TGuiFactory_CreateCanvasImp_4_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TCanvasImp),-1,0,6,1,1,0,
"U 'TCanvas' - 0 - c C - - 0 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateBrowserImp",1630,G__TGuiFactory_CreateBrowserImp_5_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TBrowserImp),-1,0,4,1,1,0,
"U 'TBrowser' - 0 - b C - - 0 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateBrowserImp",1630,G__TGuiFactory_CreateBrowserImp_6_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TBrowserImp),-1,0,6,1,1,0,
"U 'TBrowser' - 0 - b C - - 0 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateContextMenuImp",2036,G__TGuiFactory_CreateContextMenuImp_7_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TContextMenuImp),-1,0,3,1,1,0,
"U 'TContextMenu' - 0 - c C - - 0 - name "
"C - - 0 - title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateControlBarImp",1904,G__TGuiFactory_CreateControlBarImp_8_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TControlBarImp),-1,0,2,1,1,0,
"U 'TControlBar' - 0 - c C - - 0 - title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateControlBarImp",1904,G__TGuiFactory_CreateControlBarImp_9_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TControlBarImp),-1,0,4,1,1,0,
"U 'TControlBar' - 0 - c C - - 0 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGuiFactory_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGuiFactory_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGuiFactory_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGuiFactory_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGuiFactory_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGuiFactory_Class_5_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGuiFactory_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGuiFactory_IsA_7_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGuiFactory_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGuiFactory_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGuiFactory",1105,G__TGuiFactory_TGuiFactory_0_2,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory),-1,0,1,1,1,0,"u 'TGuiFactory' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGuiFactory",1231,G__TGuiFactory_wATGuiFactory_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTLego(void) {
   /* TLego */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLego));
   G__memfunc_setup("TLego",475,G__TLego_TLego_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TLego),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLego",475,G__TLego_TLego_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TLego),-1,0,3,1,1,0,
"F - 'Float_t' 0 - rmin F - 'Float_t' 0 - rmax "
"i - 'Int_t' 0 1 system",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BackBox",666,G__TLego_BackBox_3_0,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - ang",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ClearRaster",1112,G__TLego_ClearRaster_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ColorFunction",1349,G__TLego_ColorFunction_5_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - nl F - 'Float_t' 0 - fl "
"I - 'Int_t' 0 - icl i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawFaceMode1",1203,G__TLego_DrawFaceMode1_6_0,121,-1,-1,0,5,1,1,0,
"I - 'Int_t' 0 - icodes F - 'Float_t' 0 - xyz "
"i - 'Int_t' 0 - np I - 'Int_t' 0 - iface "
"F - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawFaceMode2",1204,G__TLego_DrawFaceMode2_7_0,121,-1,-1,0,5,1,1,0,
"I - 'Int_t' 0 - icodes F - 'Float_t' 0 - xyz "
"i - 'Int_t' 0 - np I - 'Int_t' 0 - iface "
"F - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawFaceMode3",1205,G__TLego_DrawFaceMode3_8_0,121,-1,-1,0,5,1,1,0,
"I - 'Int_t' 0 - icodes F - 'Float_t' 0 - xyz "
"i - 'Int_t' 0 - np I - 'Int_t' 0 - iface "
"F - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawFaceMove1",1221,G__TLego_DrawFaceMove1_9_0,121,-1,-1,0,5,1,1,0,
"I - 'Int_t' 0 - icodes F - 'Float_t' 0 - xyz "
"i - 'Int_t' 0 - np I - 'Int_t' 0 - iface "
"F - 'Float_t' 0 - tt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawFaceMove2",1222,G__TLego_DrawFaceMove2_0_1,121,-1,-1,0,5,1,1,0,
"I - 'Int_t' 0 - icodes F - 'Float_t' 0 - xyz "
"i - 'Int_t' 0 - np I - 'Int_t' 0 - iface "
"F - 'Float_t' 0 - tt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawFaceRaster1",1439,G__TLego_DrawFaceRaster1_1_1,121,-1,-1,0,5,1,1,0,
"I - 'Int_t' 0 - icodes F - 'Float_t' 0 - xyz "
"i - 'Int_t' 0 - np I - 'Int_t' 0 - iface "
"F - 'Float_t' 0 - tt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawFaceRaster2",1440,G__TLego_DrawFaceRaster2_2_1,121,-1,-1,0,5,1,1,0,
"I - 'Int_t' 0 - icodes F - 'Float_t' 0 - xyz "
"i - 'Int_t' 0 - np I - 'Int_t' 0 - iface "
"F - 'Float_t' 0 - tt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FillPolygon",1135,G__TLego_FillPolygon_3_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"F - 'Float_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FillPolygonBorder",1741,G__TLego_FillPolygonBorder_4_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - nn F - 'Float_t' 0 - xy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindLevelLines",1396,G__TLego_FindLevelLines_5_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - np F - 'Float_t' 0 - f "
"F - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindPartEdge",1165,G__TLego_FindPartEdge_6_1,121,-1,-1,0,8,1,1,0,
"F - 'Float_t' 0 - p1 F - 'Float_t' 0 - p2 "
"f - 'Float_t' 0 - f1 f - 'Float_t' 0 - f2 "
"f - 'Float_t' 0 - fmin f - 'Float_t' 0 - fmax "
"i - 'Int_t' 1 - kpp F - 'Float_t' 0 - pp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindVisibleLine",1495,G__TLego_FindVisibleLine_7_1,121,-1,-1,0,5,1,1,0,
"F - 'Float_t' 0 - p1 F - 'Float_t' 0 - p2 "
"i - 'Int_t' 0 - ntmax i - 'Int_t' 1 - nt "
"F - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindVisibleDraw",1501,G__TLego_FindVisibleDraw_8_1,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - r1 F - 'Float_t' 0 - r2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FrontBox",818,G__TLego_FrontBox_9_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - ang",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GouraudFunction",1565,G__TLego_GouraudFunction_0_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - ia i - 'Int_t' 0 - ib "
"F - 'Float_t' 0 - f F - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitMoveScreen",1419,G__TLego_InitMoveScreen_1_2,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - xmax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitRaster",1029,G__TLego_InitRaster_2_2,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax "
"i - 'Int_t' 0 - nx i - 'Int_t' 0 - ny",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LegoCartesian",1313,G__TLego_LegoCartesian_3_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - ang i - 'Int_t' 0 - nx "
"i - 'Int_t' 0 - ny C - - 0 - chopt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LegoFunction",1229,G__TLego_LegoFunction_4_2,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - ia i - 'Int_t' 0 - ib "
"i - 'Int_t' 1 - nv F - 'Float_t' 0 - ab "
"F - 'Float_t' 0 - vv F - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LegoPolar",901,G__TLego_LegoPolar_5_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - iordr i - 'Int_t' 0 - na "
"i - 'Int_t' 0 - nb C - - 0 - chopt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LegoCylindrical",1525,G__TLego_LegoCylindrical_6_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - iordr i - 'Int_t' 0 - na "
"i - 'Int_t' 0 - nb C - - 0 - chopt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LegoSpherical",1314,G__TLego_LegoSpherical_7_2,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - ipsdr i - 'Int_t' 0 - iordr "
"i - 'Int_t' 0 - na i - 'Int_t' 0 - nb "
"C - - 0 - chopt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LightSource",1129,G__TLego_LightSource_8_2,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - nl f - 'Float_t' 0 - yl "
"f - 'Float_t' 0 - xscr f - 'Float_t' 0 - yscr "
"f - 'Float_t' 0 - zscr i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Luminosity",1085,G__TLego_Luminosity_9_2,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - anorm f - 'Float_t' 1 - flum",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ModifyScreen",1224,G__TLego_ModifyScreen_0_3,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - r1 F - 'Float_t' 0 - r2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetDrawFace",1065,G__TLego_SetDrawFace_1_3,121,-1,-1,0,1,1,1,0,"a - 'DrawFaceFunc_t' 0 - pointer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLegoFunction",1529,G__TLego_SetLegoFunction_2_3,121,-1,-1,0,1,1,1,0,"a - 'LegoFunc_t' 0 - pointer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMesh",697,G__TLego_SetMesh_3_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mesh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSurfaceFunction",1851,G__TLego_SetSurfaceFunction_4_3,121,-1,-1,0,1,1,1,0,"a - 'SurfaceFunc_t' 0 - pointer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetColorDark",1197,G__TLego_SetColorDark_5_3,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 - color i - 'Int_t' 0 0 n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetColorMain",1200,G__TLego_SetColorMain_6_3,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 - color i - 'Int_t' 0 0 n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SideVisibilityDecode",2033,G__TLego_SideVisibilityDecode_7_3,121,-1,-1,0,8,1,1,0,
"f - 'Float_t' 0 - val i - 'Int_t' 1 - iv1 "
"i - 'Int_t' 1 - iv2 i - 'Int_t' 1 - iv3 "
"i - 'Int_t' 1 - iv4 i - 'Int_t' 1 - iv5 "
"i - 'Int_t' 1 - iv6 i - 'Int_t' 1 - ir",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SideVisibilityEncode",2043,G__TLego_SideVisibilityEncode_8_3,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - iopt f - 'Float_t' 0 - phi1 "
"f - 'Float_t' 0 - phi2 f - 'Float_t' 1 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Spectrum",851,G__TLego_Spectrum_9_3,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - nl f - 'Float_t' 0 - fmin "
"f - 'Float_t' 0 - fmax i - 'Int_t' 0 - ic "
"i - 'Int_t' 0 - idc i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SurfaceCartesian",1635,G__TLego_SurfaceCartesian_0_4,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - ang i - 'Int_t' 0 - nx "
"i - 'Int_t' 0 - ny C - - 0 - chopt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SurfacePolar",1223,G__TLego_SurfacePolar_1_4,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - iordr i - 'Int_t' 0 - na "
"i - 'Int_t' 0 - nb C - - 0 - chopt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SurfaceCylindrical",1847,G__TLego_SurfaceCylindrical_2_4,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - iordr i - 'Int_t' 0 - na "
"i - 'Int_t' 0 - nb C - - 0 - chopt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SurfaceFunction",1551,G__TLego_SurfaceFunction_3_4,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - ia i - 'Int_t' 0 - ib "
"F - 'Float_t' 0 - f F - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SurfaceSpherical",1636,G__TLego_SurfaceSpherical_4_4,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - ipsdr i - 'Int_t' 0 - iordr "
"i - 'Int_t' 0 - na i - 'Int_t' 0 - nb "
"C - - 0 - chopt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SurfaceProperty",1582,G__TLego_SurfaceProperty_5_4,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - qqa f - 'Float_t' 0 - qqd "
"f - 'Float_t' 0 - qqs i - 'Int_t' 0 - nnqs "
"i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TLego_DeclFileName_6_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TLego_DeclFileLine_7_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TLego_ImplFileName_8_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TLego_ImplFileLine_9_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TLego_Class_Version_0_5,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TLego_Class_1_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TLego_Dictionary_2_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TLego_IsA_3_5,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TLego_ShowMembers_4_5,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TLego_Streamer_5_5,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TLego",475,G__TLego_TLego_6_5,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TLego),-1,0,1,1,1,0,"u 'TLego' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TLego",601,G__TLego_wATLego_7_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTLink(void) {
   /* TLink */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLink));
   G__memfunc_setup("TLink",482,G__TLink_TLink_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TLink),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLink",482,G__TLink_TLink_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TLink),-1,0,3,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y "
"Y - - 0 - pointer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ExecuteEvent",1237,G__TLink_ExecuteEvent_3_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TLink_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TLink_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TLink_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TLink_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TLink_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TLink_Class_9_0,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TLink_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TLink_IsA_1_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TLink_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TLink_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TLink",482,G__TLink_TLink_4_1,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TLink),-1,0,1,1,1,0,"u 'TLink' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TLink",608,G__TLink_wATLink_5_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPoints(void) {
   /* TPoints */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPoints));
   G__memfunc_setup("TPoints",721,G__TPoints_TPoints_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TPoints),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPoints",721,G__TPoints_TPoints_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TPoints),-1,0,1,1,1,0,"f - 'Coord_t' 0 - xy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPoints",721,G__TPoints_TPoints_2_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TPoints),-1,0,2,1,1,0,
"f - 'Coord_t' 0 - x f - 'Coord_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX",376,G__TPoints_GetX_4_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetY",377,G__TPoints_GetY_5_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetX",388,G__TPoints_SetX_6_0,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetY",389,G__TPoints_SetY_7_0,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TPoints_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPoints_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPoints_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPoints_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPoints_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPoints_Class_3_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPoints_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPoints_IsA_5_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPoints_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPoints_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TPoints",721,G__TPoints_TPoints_8_1,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TPoints),-1,0,1,1,1,0,"u 'TPoints' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TPoints",847,G__TPoints_wATPoints_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGXW(void) {
   /* TGXW */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW));
   G__memfunc_setup("TGXW",330,G__TGXW_TGXW_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TGXW),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGXW",330,G__TGXW_TGXW_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TGXW),-1,0,2,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,G__TGXW_Init_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"Y - - 0 0 display",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearWindow",1119,G__TGXW_ClearWindow_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClosePixmap",1125,G__TGXW_ClosePixmap_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseWindow",1134,G__TGXW_CloseWindow_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyPixmap",1034,G__TGXW_CopyPixmap_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - xpos "
"i - 'Int_t' 0 - ypos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateOpenGLContext",1886,G__TGXW_CreateOpenGLContext_8_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteOpenGLContext",1885,G__TGXW_DeleteOpenGLContext_9_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBox",695,G__TGXW_DrawBox_0_1,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2 "
"i 'TGXW::EBoxMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawCellArray",1293,G__TGXW_DrawCellArray_1_1,121,-1,-1,0,7,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2 "
"i - 'Int_t' 0 - nx i - 'Int_t' 0 - ny "
"I - 'Int_t' 0 - ic",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawFillArea",1166,G__TGXW_DrawFillArea_2_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TGXW_DrawLine_3_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyLine",1210,G__TGXW_DrawPolyLine_4_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyMarker",1428,G__TGXW_DrawPolyMarker_5_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawText",819,G__TGXW_DrawText_6_1,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"f - 'Float_t' 0 - angle f - 'Float_t' 0 - mgn "
"C - - 0 - text i 'TGXW::ETextMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCharacterUp",1394,G__TGXW_GetCharacterUp_7_1,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - chupx f - 'Float_t' 1 - chupy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDrawMode",1075,G__TGXW_GetDrawMode_8_1,105,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLEDrawMode),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDoubleBuffer",1493,G__TGXW_GetDoubleBuffer_9_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGeometry",1132,G__TGXW_GetGeometry_0_2,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 1 - x "
"i - 'Int_t' 1 - y h - 'UInt_t' 1 - w "
"h - 'UInt_t' 1 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DisplayName",1111,G__TGXW_DisplayName_1_2,67,-1,-1,0,1,1,1,1,"C - - 0 0 -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPlanes",899,G__TGXW_GetPlanes_2_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 1 - nplanes",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRGB",507,G__TGXW_GetRGB_3_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - index f - 'Float_t' 1 - r "
"f - 'Float_t' 1 - g f - 'Float_t' 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextExtent",1341,G__TGXW_GetTextExtent_4_2,121,-1,-1,0,3,1,1,0,
"h - 'UInt_t' 1 - w h - 'UInt_t' 1 - h "
"C - - 0 - mess",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextMagnitude",1635,G__TGXW_GetTextMagnitude_5_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowID",1061,G__TGXW_GetWindowID_6_2,107,-1,G__defined_typename("Window_t"),0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HasTTFonts",974,G__TGXW_HasTTFonts_7_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitWindow",1036,G__TGXW_InitWindow_8_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"k - 'ULong_t' 0 - window",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveWindow",1039,G__TGXW_MoveWindow_9_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenPixmap",1025,G__TGXW_OpenPixmap_0_3,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryPointer",1271,G__TGXW_QueryPointer_1_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 1 - ix i - 'Int_t' 1 - iy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadGIF",594,G__TGXW_ReadGIF_2_3,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - x0 i - 'Int_t' 0 - y0 "
"C - - 0 - file",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RequestLocator",1469,G__TGXW_RequestLocator_3_3,105,-1,G__defined_typename("Int_t"),0,4,1,1,0,
"i - 'Int_t' 0 - mode i - 'Int_t' 0 - ctyp "
"i - 'Int_t' 1 - x i - 'Int_t' 1 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RequestString",1376,G__TGXW_RequestString_4_3,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"C - - 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RescaleWindow",1335,G__TGXW_RescaleWindow_5_3,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizePixmap",1249,G__TGXW_ResizePixmap_6_3,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeWindow",1258,G__TGXW_ResizeWindow_7_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectWindow",1240,G__TGXW_SelectWindow_8_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCharacterUp",1406,G__TGXW_SetCharacterUp_9_3,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - chupx f - 'Float_t' 0 - chupy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipOFF",911,G__TGXW_SetClipOFF_0_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipRegion",1304,G__TGXW_SetClipRegion_1_4,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TGXW_SetCursor_2_4,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - win i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBuffer",1505,G__TGXW_SetDoubleBuffer_3_4,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBufferOFF",1724,G__TGXW_SetDoubleBufferOFF_4_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBufferON",1662,G__TGXW_SetDoubleBufferON_5_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDrawMode",1087,G__TGXW_SetDrawMode_6_4,121,-1,-1,0,1,1,1,0,"i 'TGXW::EDrawMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillColor",1202,G__TGXW_SetFillColor_7_4,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillStyle",1220,G__TGXW_SetFillStyle_8_4,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - style",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineColor",1203,G__TGXW_SetLineColor_9_4,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineType",1110,G__TGXW_SetLineType_0_5,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 0 - dash",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineStyle",1221,G__TGXW_SetLineStyle_1_5,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - linestyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineWidth",1204,G__TGXW_SetLineWidth_2_5,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 - width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerColor",1421,G__TGXW_SetMarkerColor_3_5,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerSize",1321,G__TGXW_SetMarkerSize_4_5,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - markersize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerStyle",1439,G__TGXW_SetMarkerStyle_5_5,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - markerstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOpacity",1029,G__TGXW_SetOpacity_6_5,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - percent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRGB",519,G__TGXW_SetRGB_7_5,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - cindex f - 'Float_t' 0 - r "
"f - 'Float_t' 0 - g f - 'Float_t' 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextAlign",1212,G__TGXW_SetTextAlign_8_5,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 11 talign",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextColor",1232,G__TGXW_SetTextColor_9_5,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TGXW_SetTextFont_0_6,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 0 - fontname i 'TGXW::ETextSetMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TGXW_SetTextFont_1_6,121,-1,-1,0,1,1,1,0,"s - 'Font_t' 0 - fontnumber",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextMagnitude",1647,G__TGXW_SetTextMagnitude_2_6,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - mgn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextSize",1132,G__TGXW_SetTextSize_3_6,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - textsize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateWindow",1243,G__TGXW_UpdateWindow_4_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Warp",410,G__TGXW_Warp_5_6,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - ix i - 'Int_t' 0 - iy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteGIF",737,G__TGXW_WriteGIF_6_6,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WritePixmap",1146,G__TGXW_WritePixmap_7_6,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h C - - 0 - pxname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowAttributes",1983,G__TGXW_GetWindowAttributes_8_6,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id u 'WindowAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapWindow",918,G__TGXW_MapWindow_9_6,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGXW_MapSubwindows_0_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapRaised",886,G__TGXW_MapRaised_1_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UnmapWindow",1145,G__TGXW_UnmapWindow_2_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DestroyWindow",1378,G__TGXW_DestroyWindow_3_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RaiseWindow",1132,G__TGXW_RaiseWindow_4_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LowerWindow",1153,G__TGXW_LowerWindow_5_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveWindow",1039,G__TGXW_MoveWindow_6_7,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveResizeWindow",1665,G__TGXW_MoveResizeWindow_7_7,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeWindow",1258,G__TGXW_ResizeWindow_8_7,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowBackground",1956,G__TGXW_SetWindowBackground_9_7,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'ULong_t' 0 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowBackgroundPixmap",2579,G__TGXW_SetWindowBackgroundPixmap_0_8,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Pixmap_t' 0 - pxm",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateWindow",1228,G__TGXW_CreateWindow_1_8,107,-1,G__defined_typename("Window_t"),0,10,1,1,0,
"k - 'Window_t' 0 - parent i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 - border "
"i - 'Int_t' 0 - depth h - 'UInt_t' 0 - clss "
"Y - - 0 - visual U 'SetWindowAttributes_t' - 0 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenDisplay",1128,G__TGXW_OpenDisplay_2_8,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - dpyName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseDisplay",1228,G__TGXW_CloseDisplay_3_8,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDisplay",1014,G__TGXW_GetDisplay_4_8,107,-1,G__defined_typename("Display_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InternAtom",1025,G__TGXW_InternAtom_5_8,107,-1,G__defined_typename("Atom_t"),0,2,1,1,0,
"C - - 0 - atom_name b - 'Bool_t' 0 - only_if_exist",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultRootWindow",2049,G__TGXW_GetDefaultRootWindow_6_8,107,-1,G__defined_typename("Window_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetParent",906,G__TGXW_GetParent_7_8,107,-1,G__defined_typename("Window_t"),0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LoadQueryFont",1325,G__TGXW_LoadQueryFont_8_8,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,0,"C - - 0 - font_name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontHandle",1283,G__TGXW_GetFontHandle_9_8,107,-1,G__defined_typename("FontH_t"),0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteFont",1002,G__TGXW_DeleteFont_0_9,121,-1,-1,0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateGC",734,G__TGXW_CreateGC_1_9,107,-1,G__defined_typename("GContext_t"),0,2,1,1,0,
"k - 'Drawable_t' 0 - id U 'GCValues_t' - 0 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeGC",720,G__TGXW_ChangeGC_2_9,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc U 'GCValues_t' - 0 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyGC",549,G__TGXW_CopyGC_3_9,121,-1,-1,0,3,1,1,0,
"k - 'GContext_t' 0 - org k - 'GContext_t' 0 - dest "
"h - 'Mask_t' 0 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteGC",733,G__TGXW_DeleteGC_4_9,121,-1,-1,0,1,1,1,0,"k - 'GContext_t' 0 - gc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateCursor",1234,G__TGXW_CreateCursor_5_9,107,-1,G__defined_typename("Cursor_t"),0,1,1,1,0,"i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TGXW_SetCursor_6_9,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Cursor_t' 0 - curid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePixmap",1219,G__TGXW_CreatePixmap_7_9,107,-1,G__defined_typename("Pixmap_t"),0,3,1,1,0,
"k - 'Drawable_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePixmap",1219,G__TGXW_CreatePixmap_8_9,107,-1,G__defined_typename("Pixmap_t"),0,7,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - bitmap "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height "
"k - 'ULong_t' 0 - forecolor k - 'ULong_t' 0 - backcolor "
"i - 'Int_t' 0 - depth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateBitmap",1201,G__TGXW_CreateBitmap_9_9,107,-1,G__defined_typename("Pixmap_t"),0,4,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - bitmap "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeletePixmap",1218,G__TGXW_DeletePixmap_0_10,121,-1,-1,0,1,1,1,0,"k - 'Pixmap_t' 0 - pmap",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePictureFromFile",2116,G__TGXW_CreatePictureFromFile_1_10,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - filename "
"k - 'Pixmap_t' 1 - pict k - 'Pixmap_t' 1 - pict_mask "
"u 'PictureAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePictureFromData",2110,G__TGXW_CreatePictureFromData_2_10,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"k - 'Drawable_t' 0 - id C - - 2 - data "
"k - 'Pixmap_t' 1 - pict k - 'Pixmap_t' 1 - pict_mask "
"u 'PictureAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadPictureDataFromFile",2278,G__TGXW_ReadPictureDataFromFile_3_10,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - filename C - - 3 - ret_data",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeletePictureData",1705,G__TGXW_DeletePictureData_4_10,121,-1,-1,0,1,1,1,0,"Y - - 0 - data",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDashes",900,G__TGXW_SetDashes_5_10,121,-1,-1,0,4,1,1,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - offset "
"C - - 0 - dash_list i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ParseColor",1018,G__TGXW_ParseColor_6_10,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"k - 'Colormap_t' 0 - cmap C - - 0 - cname "
"u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AllocColor",1002,G__TGXW_AllocColor_7_10,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"k - 'Colormap_t' 0 - cmap u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryColor",1045,G__TGXW_QueryColor_8_10,121,-1,-1,0,2,1,1,0,
"k - 'Colormap_t' 0 - cmap u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EventsPending",1338,G__TGXW_EventsPending_9_10,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NextEvent",929,G__TGXW_NextEvent_0_11,121,-1,-1,0,1,1,1,0,"u 'Event_t' - 1 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Bell",383,G__TGXW_Bell_1_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - percent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyArea",788,G__TGXW_CopyArea_2_11,121,-1,-1,0,9,1,1,0,
"k - 'Drawable_t' 0 - src k - 'Drawable_t' 0 - dest "
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - src_x "
"i - 'Int_t' 0 - src_y h - 'UInt_t' 0 - width "
"h - 'UInt_t' 0 - height i - 'Int_t' 0 - dest_x "
"i - 'Int_t' 0 - dest_y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeWindowAttributes",2277,G__TGXW_ChangeWindowAttributes_3_11,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id U 'SetWindowAttributes_t' - 0 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TGXW_DrawLine_4_11,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearArea",864,G__TGXW_ClearArea_5_11,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CheckEvent",992,G__TGXW_CheckEvent_6_11,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"k - 'Window_t' 0 - id i 'EGEventType' - 0 - type "
"u 'Event_t' - 1 - ev",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendEvent",908,G__TGXW_SendEvent_7_11,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id U 'Event_t' - 0 - ev",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WMDeleteNotify",1392,G__TGXW_WMDeleteNotify_8_11,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetKeyAutoRepeat",1615,G__TGXW_SetKeyAutoRepeat_9_11,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE on",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabKey",677,G__TGXW_GrabKey_0_12,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - keycode "
"h - 'UInt_t' 0 - modifier b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabButton",1016,G__TGXW_GrabButton_1_12,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - id i 'EMouseButton' - 0 - button "
"h - 'UInt_t' 0 - modifier h - 'UInt_t' 0 - evmask "
"k - 'Window_t' 0 - confine k - 'Cursor_t' 0 - cursor "
"b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabPointer",1117,G__TGXW_GrabPointer_2_12,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - evmask "
"k - 'Window_t' 0 - confine k - 'Cursor_t' 0 - cursor "
"b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowName",1317,G__TGXW_SetWindowName_3_12,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIconName",1078,G__TGXW_SetIconName_4_12,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClassHints",1320,G__TGXW_SetClassHints_5_12,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - className "
"C - - 0 - resourceName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMWMHints",1059,G__TGXW_SetMWMHints_6_12,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - value "
"h - 'UInt_t' 0 - funcs h - 'UInt_t' 0 - input",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMPosition",1317,G__TGXW_SetWMPosition_7_12,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMSize",875,G__TGXW_SetWMSize_8_12,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMSizeHints",1393,G__TGXW_SetWMSizeHints_9_12,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - wmin "
"h - 'UInt_t' 0 - hmin h - 'UInt_t' 0 - wmax "
"h - 'UInt_t' 0 - hmax h - 'UInt_t' 0 - winc "
"h - 'UInt_t' 0 - hinc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMState",977,G__TGXW_SetWMState_0_13,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id i 'EInitialState' - 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMTransientHint",1819,G__TGXW_SetWMTransientHint_1_13,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Window_t' 0 - main_id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawString",1029,G__TGXW_DrawString_2_13,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"C - - 0 - s i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TextWidth",933,G__TGXW_TextWidth_3_13,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"k - 'FontStruct_t' 0 - font C - - 0 - s "
"i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontProperties",1764,G__TGXW_GetFontProperties_4_13,121,-1,-1,0,3,1,1,0,
"k - 'FontStruct_t' 0 - font i - 'Int_t' 1 - max_ascent "
"i - 'Int_t' 1 - max_descent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGCValues",1050,G__TGXW_GetGCValues_5_13,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc u 'GCValues_t' - 1 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontStruct",1340,G__TGXW_GetFontStruct_6_13,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,0,"k - 'FontH_t' 0 - fh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearWindow",1119,G__TGXW_ClearWindow_7_13,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("KeysymToKeycode",1545,G__TGXW_KeysymToKeycode_8_13,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"h - 'UInt_t' 0 - keysym",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillRectangle",1308,G__TGXW_FillRectangle_9_13,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawRectangle",1315,G__TGXW_DrawRectangle_0_14,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawSegments",1236,G__TGXW_DrawSegments_1_14,121,-1,-1,0,4,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"U 'Segment_t' - 0 - seg i - 'Int_t' 0 - nseg",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectInput",1136,G__TGXW_SelectInput_2_14,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - evmask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetInputFocus",1340,G__TGXW_SetInputFocus_3_14,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrimarySelectionOwner",2485,G__TGXW_GetPrimarySelectionOwner_4_14,107,-1,G__defined_typename("Window_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ConvertPrimarySelection",2411,G__TGXW_ConvertPrimarySelection_5_14,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Time_t' 0 - when",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LookupString",1265,G__TGXW_LookupString_6_14,121,-1,-1,0,4,1,1,0,
"U 'Event_t' - 0 - event C - - 0 - buf "
"i - 'Int_t' 0 - buflen h - 'UInt_t' 1 - keysym",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPasteBuffer",1399,G__TGXW_GetPasteBuffer_7_14,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id k - 'Atom_t' 0 - atom "
"u 'TString' - 1 - text i - 'Int_t' 1 - nchar "
"b - 'Bool_t' 0 - del",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TranslateCoordinates",2089,G__TGXW_TranslateCoordinates_8_14,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - src k - 'Window_t' 0 - dest "
"i - 'Int_t' 0 - src_x i - 'Int_t' 0 - src_y "
"i - 'Int_t' 1 - dest_x i - 'Int_t' 1 - dest_y "
"k - 'Window_t' 1 - child",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowSize",1331,G__TGXW_GetWindowSize_9_14,121,-1,-1,0,5,1,1,0,
"k - 'Drawable_t' 0 - id i - 'Int_t' 1 - x "
"i - 'Int_t' 1 - y h - 'UInt_t' 1 - w "
"h - 'UInt_t' 1 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillPolygon",1135,G__TGXW_FillPolygon_0_15,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id k - 'GContext_t' 0 - gc "
"U 'Point_t' - 0 - points i - 'Int_t' 0 - npnt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryPointer",1271,G__TGXW_QueryPointer_1_15,121,-1,-1,0,8,1,1,0,
"k - 'Window_t' 0 - id k - 'Window_t' 1 - rootw "
"k - 'Window_t' 1 - childw i - 'Int_t' 1 - root_x "
"i - 'Int_t' 1 - root_y i - 'Int_t' 1 - win_x "
"i - 'Int_t' 1 - win_y h - 'UInt_t' 1 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetForeground",1351,G__TGXW_SetForeground_2_15,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc k - 'ULong_t' 0 - foreground",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipRectangles",1724,G__TGXW_SetClipRectangles_3_15,121,-1,-1,0,5,1,1,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y U 'Rectangle_t' - 0 - recs "
"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Update",611,G__TGXW_Update_4_15,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGXW_DeclFileName_5_15,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGXW_DeclFileLine_6_15,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGXW_ImplFileName_7_15,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGXW_ImplFileLine_8_15,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGXW_Class_Version_9_15,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGXW_Class_0_16,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGXW_Dictionary_1_16,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGXW_IsA_2_16,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGXW_ShowMembers_3_16,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGXW_Streamer_4_16,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGXW",330,G__TGXW_TGXW_5_16,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TGXW),-1,0,1,1,1,0,"u 'TGXW' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGXW",456,G__TGXW_wATGXW_6_16,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTView(void) {
   /* TView */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TView));
   G__memfunc_setup("ResetView",926,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,2,0,
"f - 'Float_t' 0 - longitude f - 'Float_t' 0 - latitude "
"f - 'Float_t' 0 - psi i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TView",495,G__TView_TView_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TView),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TView",495,G__TView_TView_2_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TView),-1,0,1,1,1,0,"i - 'Int_t' 0 - system",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TView",495,G__TView_TView_3_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TView),-1,0,3,1,1,0,
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
   G__memfunc_setup("GetOutline",1024,G__TView_GetOutline_8_1,85,G__get_linked_tagnum(&G__G__Graf2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
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
   G__memfunc_setup("NormalWCtoNDC",1211,G__TView_NormalWCtoNDC_5_2,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - pw F - 'Float_t' 0 - pn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PadRange",770,G__TView_PadRange_6_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - rback",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAutoRange",1202,G__TView_SetAutoRange_7_2,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE autorange",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAxisNDC",918,G__TView_SetAxisNDC_8_2,121,-1,-1,0,6,1,1,0,
"F - 'Float_t' 0 - x1 F - 'Float_t' 0 - x2 "
"F - 'Float_t' 0 - y1 F - 'Float_t' 0 - y2 "
"F - 'Float_t' 0 - z1 F - 'Float_t' 0 - z2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLatitude",1128,G__TView_SetLatitude_9_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - latitude",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLongitude",1239,G__TView_SetLongitude_0_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - longitude",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPsi",600,G__TView_SetPsi_1_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - psi",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOutlineToCube",1614,G__TView_SetOutlineToCube_2_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TView_SetRange_3_3,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - min F - 'Float_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TView_SetRange_4_3,121,-1,-1,0,7,1,1,0,
"f - 'Float_t' 0 - x0 f - 'Float_t' 0 - y0 "
"f - 'Float_t' 0 - z0 f - 'Float_t' 0 - x1 "
"f - 'Float_t' 0 - y1 f - 'Float_t' 0 - z1 "
"i - 'Int_t' 0 0 flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSystem",945,G__TView_SetSystem_5_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - system",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetView",711,G__TView_SetView_6_3,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - longitude f - 'Float_t' 0 - latitude "
"f - 'Float_t' 0 - psi i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WCtoNDC",594,G__TView_WCtoNDC_7_3,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - pw F - 'Float_t' 0 - pn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TView_DeclFileName_8_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TView_DeclFileLine_9_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TView_ImplFileName_0_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TView_ImplFileLine_1_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TView_Class_Version_2_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TView_Class_3_4,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TView_Dictionary_4_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TView_IsA_5_4,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TView_ShowMembers_6_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TView_Streamer_7_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TView",495,G__TView_TView_8_4,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TView),-1,0,1,1,1,0,"u 'TView' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TView",621,G__TView_wATView_9_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPostScript(void) {
   /* TPostScript */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript));
   G__memfunc_setup("TPostScript",1135,G__TPostScript_TPostScript_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPostScript",1135,G__TPostScript_TPostScript_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),-1,0,2,1,1,0,
"C - 'Text_t' 0 - filename i - 'Int_t' 0 -111 type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Close",502,G__TPostScript_Close_3_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CMtoPS",534,G__TPostScript_CMtoPS_4_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - u",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DefineFillPatterns",1827,G__TPostScript_DefineFillPatterns_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DefineMarkers",1312,G__TPostScript_DefineMarkers_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawBox",695,G__TPostScript_DrawBox_7_0,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawFrame",889,G__TPostScript_DrawFrame_8_0,121,-1,-1,0,8,1,1,0,
"f - 'Coord_t' 0 - xl f - 'Coord_t' 0 - yl "
"f - 'Coord_t' 0 - xt f - 'Coord_t' 0 - yt "
"i - 'Int_t' 0 - mode i - 'Int_t' 0 - border "
"i - 'Int_t' 0 - dark i - 'Int_t' 0 - light",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawHatch",886,G__TPostScript_DrawHatch_9_0,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - dy f - 'Float_t' 0 - angle "
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawPolyLine",1210,G__TPostScript_DrawPolyLine_0_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoints' - 0 - xy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawPolyLineNDC",1423,G__TPostScript_DrawPolyLineNDC_1_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoints' - 0 - uv",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawPolyMarker",1428,G__TPostScript_DrawPolyMarker_2_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrawPS",561,G__TPostScript_DrawPS_3_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - xw "
"F - 'Float_t' 0 - yw",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FontEncode",997,G__TPostScript_FontEncode_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFillColor",1190,G__TPostScript_GetFillColor_5_1,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFillStyle",1208,G__TPostScript_GetFillStyle_6_1,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineColor",1191,G__TPostScript_GetLineColor_7_1,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineStyle",1209,G__TPostScript_GetLineStyle_8_1,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineWidth",1192,G__TPostScript_GetLineWidth_9_1,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMarkerColor",1409,G__TPostScript_GetMarkerColor_0_2,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMarkerSize",1309,G__TPostScript_GetMarkerSize_1_2,102,-1,G__defined_typename("Size_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMarkerStyle",1427,G__TPostScript_GetMarkerStyle_2_2,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextAlign",1200,G__TPostScript_GetTextAlign_3_2,115,-1,G__defined_typename("Short_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextAngle",1196,G__TPostScript_GetTextAngle_4_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextColor",1220,G__TPostScript_GetTextColor_5_2,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextFont",1116,G__TPostScript_GetTextFont_6_2,115,-1,G__defined_typename("Font_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextSize",1120,G__TPostScript_GetTextSize_7_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Initialize",1042,G__TPostScript_Initialize_8_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("NewPage",679,G__TPostScript_NewPage_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Off",283,G__TPostScript_Off_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("On",189,G__TPostScript_On_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Open",402,G__TPostScript_Open_2_3,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 - filename i - 'Int_t' 0 -111 type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SaveRestore",1139,G__TPostScript_SaveRestore_3_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFillColor",1202,G__TPostScript_SetFillColor_4_3,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillStyle",1220,G__TPostScript_SetFillStyle_5_3,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - style",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineColor",1203,G__TPostScript_SetLineColor_6_3,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineStyle",1221,G__TPostScript_SetLineStyle_7_3,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 1 linestyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineWidth",1204,G__TPostScript_SetLineWidth_8_3,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 linewidth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerColor",1421,G__TPostScript_SetMarkerColor_9_3,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerSize",1321,G__TPostScript_SetMarkerSize_0_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - markersize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerStyle",1439,G__TPostScript_SetMarkerStyle_1_4,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - markerstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextAlign",1212,G__TPostScript_SetTextAlign_2_4,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 11 talign",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextAngle",1208,G__TPostScript_SetTextAngle_3_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 tangle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextColor",1232,G__TPostScript_SetTextColor_4_4,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TPostScript_SetTextFont_5_4,121,-1,-1,0,1,1,1,0,"s - 'Font_t' 0 62 fontnumber",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextSize",1132,G__TPostScript_SetTextSize_6_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - tsize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TPostScript_ls_7_4,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MakeGreek",876,G__TPostScript_MakeGreek_8_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MovePS",570,G__TPostScript_MovePS_9_4,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TPostScript_Print_0_5,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PrintStr",838,G__TPostScript_PrintStr_1_5,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" string",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PrintFast",923,G__TPostScript_PrintFast_2_5,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - nch C - 'Text_t' 0 \"\" string",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Range",493,G__TPostScript_Range_3_5,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - xrange f - 'Float_t' 0 - yrange",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Resize",626,G__TPostScript_Resize_4_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetColor",811,G__TPostScript_SetColor_5_5,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Text",421,G__TPostScript_Text_6_5,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - 'Text_t' 0 - string",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TextNDC",634,G__TPostScript_TextNDC_7_5,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - u f - 'Float_t' 0 - v "
"C - 'Text_t' 0 - string",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UtoPS",475,G__TPostScript_UtoPS_8_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - u",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("VtoPS",476,G__TPostScript_VtoPS_9_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteInteger",1241,G__TPostScript_WriteInteger_0_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteReal",911,G__TPostScript_WriteReal_1_6,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - r",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("XtoPS",478,G__TPostScript_XtoPS_2_6,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("YtoPS",479,G__TPostScript_YtoPS_3_6,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Zone",412,G__TPostScript_Zone_4_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TPostScript_DeclFileName_5_6,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPostScript_DeclFileLine_6_6,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPostScript_ImplFileName_7_6,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPostScript_ImplFileLine_8_6,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPostScript_Class_Version_9_6,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPostScript_Class_0_7,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPostScript_Dictionary_1_7,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPostScript_IsA_2_7,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPostScript_ShowMembers_3_7,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPostScript_Streamer_4_7,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TPostScript",1135,G__TPostScript_TPostScript_5_7,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),-1,0,1,1,1,0,"u 'TPostScript' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TPostScript",1261,G__TPostScript_wATPostScript_6_7,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGXClient(void) {
   /* TGXClient */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient));
   G__memfunc_setup("TGXClient",850,G__TGXClient_TGXClient_0_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGXClient",850,G__TGXClient_TGXClient_1_0,105,G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,G__TGXClient_Init_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"Y - - 0 0 display",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearWindow",1119,G__TGXClient_ClearWindow_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClosePixmap",1125,G__TGXClient_ClosePixmap_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseWindow",1134,G__TGXClient_CloseWindow_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyPixmap",1034,G__TGXClient_CopyPixmap_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - xpos "
"i - 'Int_t' 0 - ypos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateOpenGLContext",1886,G__TGXClient_CreateOpenGLContext_8_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteOpenGLContext",1885,G__TGXClient_DeleteOpenGLContext_9_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBox",695,G__TGXClient_DrawBox_0_1,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2 "
"i 'TGXW::EBoxMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawCellArray",1293,G__TGXClient_DrawCellArray_1_1,121,-1,-1,0,7,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2 "
"i - 'Int_t' 0 - nx i - 'Int_t' 0 - ny "
"I - 'Int_t' 0 - ic",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawFillArea",1166,G__TGXClient_DrawFillArea_2_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TGXClient_DrawLine_3_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyLine",1210,G__TGXClient_DrawPolyLine_4_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyMarker",1428,G__TGXClient_DrawPolyMarker_5_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawText",819,G__TGXClient_DrawText_6_1,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"f - 'Float_t' 0 - angle f - 'Float_t' 0 - mgn "
"C - - 0 - text i 'TGXW::ETextMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCharacterUp",1394,G__TGXClient_GetCharacterUp_7_1,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - chupx f - 'Float_t' 1 - chupy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDrawMode",1075,G__TGXClient_GetDrawMode_8_1,105,G__get_linked_tagnum(&G__G__Graf2LN_TGXWcLcLEDrawMode),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDoubleBuffer",1493,G__TGXClient_GetDoubleBuffer_9_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DisplayName",1111,G__TGXClient_DisplayName_0_2,67,-1,-1,0,1,1,1,1,"C - - 0 0 -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPlanes",899,G__TGXClient_GetPlanes_1_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 1 - nplanes",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRGB",507,G__TGXClient_GetRGB_2_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - index f - 'Float_t' 1 - r "
"f - 'Float_t' 1 - g f - 'Float_t' 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextExtent",1341,G__TGXClient_GetTextExtent_3_2,121,-1,-1,0,3,1,1,0,
"h - 'UInt_t' 1 - w h - 'UInt_t' 1 - h "
"C - - 0 - mess",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextMagnitude",1635,G__TGXClient_GetTextMagnitude_4_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitWindow",1036,G__TGXClient_InitWindow_5_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"k - 'ULong_t' 0 - window",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveWindow",1039,G__TGXClient_MoveWindow_6_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenPixmap",1025,G__TGXClient_OpenPixmap_7_2,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryPointer",1271,G__TGXClient_QueryPointer_8_2,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 1 - ix i - 'Int_t' 1 - iy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadGIF",594,G__TGXClient_ReadGIF_9_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - x0 i - 'Int_t' 0 - y0 "
"C - - 0 - file",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeWindow",1258,G__TGXClient_ResizeWindow_0_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectWindow",1240,G__TGXClient_SelectWindow_1_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TGXClient_SetCursor_2_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - win i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillColor",1202,G__TGXClient_SetFillColor_3_3,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillStyle",1220,G__TGXClient_SetFillStyle_4_3,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - style",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineColor",1203,G__TGXClient_SetLineColor_5_3,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineType",1110,G__TGXClient_SetLineType_6_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 0 - dash",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineStyle",1221,G__TGXClient_SetLineStyle_7_3,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - linestyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineWidth",1204,G__TGXClient_SetLineWidth_8_3,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 - width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerColor",1421,G__TGXClient_SetMarkerColor_9_3,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerSize",1321,G__TGXClient_SetMarkerSize_0_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - markersize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerStyle",1439,G__TGXClient_SetMarkerStyle_1_4,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - markerstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRGB",519,G__TGXClient_SetRGB_2_4,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - cindex f - 'Float_t' 0 - r "
"f - 'Float_t' 0 - g f - 'Float_t' 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextAlign",1212,G__TGXClient_SetTextAlign_3_4,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 11 talign",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextColor",1232,G__TGXClient_SetTextColor_4_4,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TGXClient_SetTextFont_5_4,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 0 - fontname i 'TGXW::ETextSetMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TGXClient_SetTextFont_6_4,121,-1,-1,0,1,1,1,0,"s - 'Font_t' 0 - fontnumber",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextMagnitude",1647,G__TGXClient_SetTextMagnitude_7_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - mgn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextSize",1132,G__TGXClient_SetTextSize_8_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - textsize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateWindow",1243,G__TGXClient_UpdateWindow_9_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowAttributes",1983,G__TGXClient_GetWindowAttributes_0_5,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id u 'WindowAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapWindow",918,G__TGXClient_MapWindow_1_5,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGXClient_MapSubwindows_2_5,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapRaised",886,G__TGXClient_MapRaised_3_5,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UnmapWindow",1145,G__TGXClient_UnmapWindow_4_5,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DestroyWindow",1378,G__TGXClient_DestroyWindow_5_5,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RaiseWindow",1132,G__TGXClient_RaiseWindow_6_5,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LowerWindow",1153,G__TGXClient_LowerWindow_7_5,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveWindow",1039,G__TGXClient_MoveWindow_8_5,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveResizeWindow",1665,G__TGXClient_MoveResizeWindow_9_5,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeWindow",1258,G__TGXClient_ResizeWindow_0_6,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowBackground",1956,G__TGXClient_SetWindowBackground_1_6,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'ULong_t' 0 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowBackgroundPixmap",2579,G__TGXClient_SetWindowBackgroundPixmap_2_6,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Pixmap_t' 0 - pxm",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateWindow",1228,G__TGXClient_CreateWindow_3_6,107,-1,G__defined_typename("Window_t"),0,10,1,1,0,
"k - 'Window_t' 0 - parent i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 - border "
"i - 'Int_t' 0 - depth h - 'UInt_t' 0 - clss "
"Y - - 0 - visual U 'SetWindowAttributes_t' - 0 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenDisplay",1128,G__TGXClient_OpenDisplay_4_6,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - dpyName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseDisplay",1228,G__TGXClient_CloseDisplay_5_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InternAtom",1025,G__TGXClient_InternAtom_6_6,107,-1,G__defined_typename("Atom_t"),0,2,1,1,0,
"C - - 0 - atom_name b - 'Bool_t' 0 - only_if_exist",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultRootWindow",2049,G__TGXClient_GetDefaultRootWindow_7_6,107,-1,G__defined_typename("Window_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LoadQueryFont",1325,G__TGXClient_LoadQueryFont_8_6,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,0,"C - - 0 - font_name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontHandle",1283,G__TGXClient_GetFontHandle_9_6,107,-1,G__defined_typename("FontH_t"),0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteFont",1002,G__TGXClient_DeleteFont_0_7,121,-1,-1,0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateGC",734,G__TGXClient_CreateGC_1_7,107,-1,G__defined_typename("GContext_t"),0,2,1,1,0,
"k - 'Drawable_t' 0 - id U 'GCValues_t' - 0 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeGC",720,G__TGXClient_ChangeGC_2_7,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc U 'GCValues_t' - 0 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyGC",549,G__TGXClient_CopyGC_3_7,121,-1,-1,0,3,1,1,0,
"k - 'GContext_t' 0 - org k - 'GContext_t' 0 - dest "
"h - 'Mask_t' 0 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteGC",733,G__TGXClient_DeleteGC_4_7,121,-1,-1,0,1,1,1,0,"k - 'GContext_t' 0 - gc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateCursor",1234,G__TGXClient_CreateCursor_5_7,107,-1,G__defined_typename("Cursor_t"),0,1,1,1,0,"i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TGXClient_SetCursor_6_7,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Cursor_t' 0 - curid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePixmap",1219,G__TGXClient_CreatePixmap_7_7,107,-1,G__defined_typename("Pixmap_t"),0,3,1,1,0,
"k - 'Drawable_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePixmap",1219,G__TGXClient_CreatePixmap_8_7,107,-1,G__defined_typename("Pixmap_t"),0,7,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - bitmap "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height "
"k - 'ULong_t' 0 - forecolor k - 'ULong_t' 0 - backcolor "
"i - 'Int_t' 0 - depth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateBitmap",1201,G__TGXClient_CreateBitmap_9_7,107,-1,G__defined_typename("Pixmap_t"),0,4,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - bitmap "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeletePixmap",1218,G__TGXClient_DeletePixmap_0_8,121,-1,-1,0,1,1,1,0,"k - 'Pixmap_t' 0 - pmap",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePictureFromFile",2116,G__TGXClient_CreatePictureFromFile_1_8,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - filename "
"k - 'Pixmap_t' 1 - pict k - 'Pixmap_t' 1 - pict_mask "
"u 'PictureAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePictureFromData",2110,G__TGXClient_CreatePictureFromData_2_8,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"k - 'Drawable_t' 0 - id C - - 2 - data "
"k - 'Pixmap_t' 1 - pict k - 'Pixmap_t' 1 - pict_mask "
"u 'PictureAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadPictureDataFromFile",2278,G__TGXClient_ReadPictureDataFromFile_3_8,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - filename C - - 3 - ret_data",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeletePictureData",1705,G__TGXClient_DeletePictureData_4_8,121,-1,-1,0,1,1,1,0,"Y - - 0 - data",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDashes",900,G__TGXClient_SetDashes_5_8,121,-1,-1,0,4,1,1,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - offset "
"C - - 0 - dash_list i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ParseColor",1018,G__TGXClient_ParseColor_6_8,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"k - 'Colormap_t' 0 - cmap C - - 0 - cname "
"u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AllocColor",1002,G__TGXClient_AllocColor_7_8,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"k - 'Colormap_t' 0 - cmap u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryColor",1045,G__TGXClient_QueryColor_8_8,121,-1,-1,0,2,1,1,0,
"k - 'Colormap_t' 0 - cmap u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EventsPending",1338,G__TGXClient_EventsPending_9_8,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NextEvent",929,G__TGXClient_NextEvent_0_9,121,-1,-1,0,1,1,1,0,"u 'Event_t' - 1 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Bell",383,G__TGXClient_Bell_1_9,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - percent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyArea",788,G__TGXClient_CopyArea_2_9,121,-1,-1,0,9,1,1,0,
"k - 'Drawable_t' 0 - src k - 'Drawable_t' 0 - dest "
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - src_x "
"i - 'Int_t' 0 - src_y h - 'UInt_t' 0 - width "
"h - 'UInt_t' 0 - height i - 'Int_t' 0 - dest_x "
"i - 'Int_t' 0 - dest_y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeWindowAttributes",2277,G__TGXClient_ChangeWindowAttributes_3_9,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id U 'SetWindowAttributes_t' - 0 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TGXClient_DrawLine_4_9,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearArea",864,G__TGXClient_ClearArea_5_9,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CheckEvent",992,G__TGXClient_CheckEvent_6_9,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"k - 'Window_t' 0 - id i 'EGEventType' - 0 - type "
"u 'Event_t' - 1 - ev",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendEvent",908,G__TGXClient_SendEvent_7_9,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id U 'Event_t' - 0 - ev",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WMDeleteNotify",1392,G__TGXClient_WMDeleteNotify_8_9,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetKeyAutoRepeat",1615,G__TGXClient_SetKeyAutoRepeat_9_9,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE on",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabKey",677,G__TGXClient_GrabKey_0_10,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - keycode "
"h - 'UInt_t' 0 - modifier b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabButton",1016,G__TGXClient_GrabButton_1_10,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - id i 'EMouseButton' - 0 - button "
"h - 'UInt_t' 0 - modifier h - 'UInt_t' 0 - evmask "
"k - 'Window_t' 0 - confine k - 'Cursor_t' 0 - cursor "
"b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabPointer",1117,G__TGXClient_GrabPointer_2_10,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - evmask "
"k - 'Window_t' 0 - confine k - 'Cursor_t' 0 - cursor "
"b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowName",1317,G__TGXClient_SetWindowName_3_10,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIconName",1078,G__TGXClient_SetIconName_4_10,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClassHints",1320,G__TGXClient_SetClassHints_5_10,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - className "
"C - - 0 - resourceName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMWMHints",1059,G__TGXClient_SetMWMHints_6_10,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - value "
"h - 'UInt_t' 0 - funcs h - 'UInt_t' 0 - input",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMPosition",1317,G__TGXClient_SetWMPosition_7_10,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMSize",875,G__TGXClient_SetWMSize_8_10,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMSizeHints",1393,G__TGXClient_SetWMSizeHints_9_10,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - wmin "
"h - 'UInt_t' 0 - hmin h - 'UInt_t' 0 - wmax "
"h - 'UInt_t' 0 - hmax h - 'UInt_t' 0 - winc "
"h - 'UInt_t' 0 - hinc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMState",977,G__TGXClient_SetWMState_0_11,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id i 'EInitialState' - 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMTransientHint",1819,G__TGXClient_SetWMTransientHint_1_11,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Window_t' 0 - main_id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawString",1029,G__TGXClient_DrawString_2_11,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"C - - 0 - s i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TextWidth",933,G__TGXClient_TextWidth_3_11,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"k - 'FontStruct_t' 0 - font C - - 0 - s "
"i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontProperties",1764,G__TGXClient_GetFontProperties_4_11,121,-1,-1,0,3,1,1,0,
"k - 'FontStruct_t' 0 - font i - 'Int_t' 1 - max_ascent "
"i - 'Int_t' 1 - max_descent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGCValues",1050,G__TGXClient_GetGCValues_5_11,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc u 'GCValues_t' - 1 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontStruct",1340,G__TGXClient_GetFontStruct_6_11,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,0,"k - 'FontH_t' 0 - fh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearWindow",1119,G__TGXClient_ClearWindow_7_11,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("KeysymToKeycode",1545,G__TGXClient_KeysymToKeycode_8_11,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"h - 'UInt_t' 0 - keysym",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillRectangle",1308,G__TGXClient_FillRectangle_9_11,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawRectangle",1315,G__TGXClient_DrawRectangle_0_12,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawSegments",1236,G__TGXClient_DrawSegments_1_12,121,-1,-1,0,4,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"U 'Segment_t' - 0 - seg i - 'Int_t' 0 - nseg",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectInput",1136,G__TGXClient_SelectInput_2_12,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - evmask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetInputFocus",1340,G__TGXClient_SetInputFocus_3_12,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrimarySelectionOwner",2485,G__TGXClient_GetPrimarySelectionOwner_4_12,107,-1,G__defined_typename("Window_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ConvertPrimarySelection",2411,G__TGXClient_ConvertPrimarySelection_5_12,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Time_t' 0 - when",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LookupString",1265,G__TGXClient_LookupString_6_12,121,-1,-1,0,4,1,1,0,
"U 'Event_t' - 0 - event C - - 0 - buf "
"i - 'Int_t' 0 - buflen h - 'UInt_t' 1 - keysym",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPasteBuffer",1399,G__TGXClient_GetPasteBuffer_7_12,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id k - 'Atom_t' 0 - atom "
"u 'TString' - 1 - text i - 'Int_t' 1 - nchar "
"b - 'Bool_t' 0 - del",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TranslateCoordinates",2089,G__TGXClient_TranslateCoordinates_8_12,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - src k - 'Window_t' 0 - dest "
"i - 'Int_t' 0 - src_x i - 'Int_t' 0 - src_y "
"i - 'Int_t' 1 - dest_x i - 'Int_t' 1 - dest_y "
"k - 'Window_t' 1 - child",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowSize",1331,G__TGXClient_GetWindowSize_9_12,121,-1,-1,0,5,1,1,0,
"k - 'Drawable_t' 0 - id i - 'Int_t' 1 - x "
"i - 'Int_t' 1 - y h - 'UInt_t' 1 - w "
"h - 'UInt_t' 1 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillPolygon",1135,G__TGXClient_FillPolygon_0_13,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id k - 'GContext_t' 0 - gc "
"U 'Point_t' - 0 - points i - 'Int_t' 0 - npnt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryPointer",1271,G__TGXClient_QueryPointer_1_13,121,-1,-1,0,8,1,1,0,
"k - 'Window_t' 0 - id k - 'Window_t' 1 - rootw "
"k - 'Window_t' 1 - childw i - 'Int_t' 1 - root_x "
"i - 'Int_t' 1 - root_y i - 'Int_t' 1 - win_x "
"i - 'Int_t' 1 - win_y h - 'UInt_t' 1 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetForeground",1351,G__TGXClient_SetForeground_2_13,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc k - 'ULong_t' 0 - foreground",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipRectangles",1724,G__TGXClient_SetClipRectangles_3_13,121,-1,-1,0,5,1,1,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y U 'Rectangle_t' - 0 - recs "
"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteCode",902,G__TGXClient_WriteCode_4_13,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - code",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteCodeSend",1296,G__TGXClient_WriteCodeSend_5_13,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - code",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteGCValues",1285,G__TGXClient_WriteGCValues_6_13,121,-1,-1,0,1,1,1,0,"U 'GCValues_t' - 0 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteSetWindowAttributes",2518,G__TGXClient_WriteSetWindowAttributes_7_13,121,-1,-1,0,1,1,1,0,"U 'SetWindowAttributes_t' - 0 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGXClient_DeclFileName_8_13,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGXClient_DeclFileLine_9_13,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGXClient_ImplFileName_0_14,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGXClient_ImplFileLine_1_14,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGXClient_Class_Version_2_14,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGXClient_Class_3_14,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGXClient_Dictionary_4_14,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGXClient_IsA_5_14,85,G__get_linked_tagnum(&G__G__Graf2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGXClient_ShowMembers_6_14,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGXClient_Streamer_7_14,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGXClient",850,G__TGXClient_TGXClient_8_14,(int)('i'),G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),-1,0,1,1,1,0,"u 'TGXClient' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGXClient",976,G__TGXClient_wATGXClient_9_14,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Graf2() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Graf2() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)(&gGXW),85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TGXW),-1,-1,1,"gGXW=",0,(char*)NULL);
   G__memvar_setup((void*)(&gPad),85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),-1,-1,1,"gPad=",0,(char*)NULL);
   G__memvar_setup((void*)(&gCurrentPS),85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),-1,-1,1,"gCurrentPS=",0,(char*)NULL);
   G__memvar_setup((void*)(&gStyle),85,0,0,G__get_linked_tagnum(&G__G__Graf2LN_TStyle),-1,-1,1,"gStyle=",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Graf2() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__Graf2LN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_ofstream = { "ofstream" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TBrowser = { "TBrowser" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TMethod = { "TMethod" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TSeqCollection = { "TSeqCollection" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TStyle = { "TStyle" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TVirtualPad = { "TVirtualPad" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TBrowserImp = { "TBrowserImp" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TContextMenu = { "TContextMenu" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TBrowserTimer = { "TBrowserTimer" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TApplicationImp = { "TApplicationImp" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TCanvasImp = { "TCanvasImp" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TCanvas = { "TCanvas" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TContextMenuImp = { "TContextMenuImp" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TControlBarImp = { "TControlBarImp" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TGuiFactory = { "TGuiFactory" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TAttLine = { "TAttLine" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TAttFill = { "TAttFill" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TLego = { "TLego" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TAttText = { "TAttText" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TText = { "TText" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TLink = { "TLink" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TPoints = { "TPoints" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TAttPad = { "TAttPad" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TGToolTip = { "TGToolTip" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TBox = { "TBox" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TWbox = { "TWbox" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TFrame = { "TFrame" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TAttMarker = { "TAttMarker" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TGXW = { "TGXW" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TGXWcLcLEDrawMode = { "TGXW::EDrawMode" , 101 , -1 };
G__linked_taginfo G__G__Graf2LN_TGXWcLcLEBoxMode = { "TGXW::EBoxMode" , 101 , -1 };
G__linked_taginfo G__G__Graf2LN_TGXWcLcLETextMode = { "TGXW::ETextMode" , 101 , -1 };
G__linked_taginfo G__G__Graf2LN_TGXWcLcLETextSetMode = { "TGXW::ETextSetMode" , 101 , -1 };
G__linked_taginfo G__G__Graf2LN_TView = { "TView" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TPadView3D = { "TPadView3D" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TPostScript = { "TPostScript" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TAttAxis = { "TAttAxis" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TArrayI = { "TArrayI" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TStylecLcLEPaperSize = { "TStyle::EPaperSize" , 101 , -1 };
G__linked_taginfo G__G__Graf2LN_TMessage = { "TMessage" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TSocket = { "TSocket" , 99 , -1 };
G__linked_taginfo G__G__Graf2LN_TGXClient = { "TGXClient" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__Graf2() {
  G__G__Graf2LN_TClass.tagnum = -1 ;
  G__G__Graf2LN_ofstream.tagnum = -1 ;
  G__G__Graf2LN_TList.tagnum = -1 ;
  G__G__Graf2LN_TBrowser.tagnum = -1 ;
  G__G__Graf2LN_TMethod.tagnum = -1 ;
  G__G__Graf2LN_TObject.tagnum = -1 ;
  G__G__Graf2LN_TSeqCollection.tagnum = -1 ;
  G__G__Graf2LN_TString.tagnum = -1 ;
  G__G__Graf2LN_TNamed.tagnum = -1 ;
  G__G__Graf2LN_TStyle.tagnum = -1 ;
  G__G__Graf2LN_TVirtualPad.tagnum = -1 ;
  G__G__Graf2LN_TBrowserImp.tagnum = -1 ;
  G__G__Graf2LN_TContextMenu.tagnum = -1 ;
  G__G__Graf2LN_TBrowserTimer.tagnum = -1 ;
  G__G__Graf2LN_TApplicationImp.tagnum = -1 ;
  G__G__Graf2LN_TCanvasImp.tagnum = -1 ;
  G__G__Graf2LN_TCanvas.tagnum = -1 ;
  G__G__Graf2LN_TContextMenuImp.tagnum = -1 ;
  G__G__Graf2LN_TControlBarImp.tagnum = -1 ;
  G__G__Graf2LN_TGuiFactory.tagnum = -1 ;
  G__G__Graf2LN_TAttLine.tagnum = -1 ;
  G__G__Graf2LN_TAttFill.tagnum = -1 ;
  G__G__Graf2LN_TLego.tagnum = -1 ;
  G__G__Graf2LN_TAttText.tagnum = -1 ;
  G__G__Graf2LN_TText.tagnum = -1 ;
  G__G__Graf2LN_TLink.tagnum = -1 ;
  G__G__Graf2LN_TPoints.tagnum = -1 ;
  G__G__Graf2LN_TAttPad.tagnum = -1 ;
  G__G__Graf2LN_TGToolTip.tagnum = -1 ;
  G__G__Graf2LN_TBox.tagnum = -1 ;
  G__G__Graf2LN_TWbox.tagnum = -1 ;
  G__G__Graf2LN_TFrame.tagnum = -1 ;
  G__G__Graf2LN_TAttMarker.tagnum = -1 ;
  G__G__Graf2LN_TGXW.tagnum = -1 ;
  G__G__Graf2LN_TGXWcLcLEDrawMode.tagnum = -1 ;
  G__G__Graf2LN_TGXWcLcLEBoxMode.tagnum = -1 ;
  G__G__Graf2LN_TGXWcLcLETextMode.tagnum = -1 ;
  G__G__Graf2LN_TGXWcLcLETextSetMode.tagnum = -1 ;
  G__G__Graf2LN_TView.tagnum = -1 ;
  G__G__Graf2LN_TPadView3D.tagnum = -1 ;
  G__G__Graf2LN_TPostScript.tagnum = -1 ;
  G__G__Graf2LN_TAttAxis.tagnum = -1 ;
  G__G__Graf2LN_TArrayI.tagnum = -1 ;
  G__G__Graf2LN_TStylecLcLEPaperSize.tagnum = -1 ;
  G__G__Graf2LN_TMessage.tagnum = -1 ;
  G__G__Graf2LN_TSocket.tagnum = -1 ;
  G__G__Graf2LN_TGXClient.tagnum = -1 ;
}

extern "C" void G__cpp_setup_tagtableG__Graf2() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TBrowser),sizeof(TBrowser),-1,0,"ROOT Object Browser",G__setup_memvarTBrowser,G__setup_memfuncTBrowser);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TStyle),sizeof(TStyle),-1,0,"A collection of all graphics attributes",G__setup_memvarTStyle,G__setup_memfuncTStyle);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TVirtualPad),sizeof(TVirtualPad),-1,-116,"Abstract base class for Pads and Canvases",G__setup_memvarTVirtualPad,G__setup_memfuncTVirtualPad);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TContextMenu),sizeof(TContextMenu),-1,0,"Context sensitive popup menu",G__setup_memvarTContextMenu,G__setup_memfuncTContextMenu);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGuiFactory),sizeof(TGuiFactory),-1,0,"Abstract factory for GUI components",G__setup_memvarTGuiFactory,G__setup_memfuncTGuiFactory);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLego),sizeof(TLego),-1,0,"Hidden line removal package",G__setup_memvarTLego,G__setup_memfuncTLego);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TLink),sizeof(TLink),-1,0,"Link: hypertext link to an object",G__setup_memvarTLink,G__setup_memfuncTLink);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPoints),sizeof(TPoints),-1,0,"2-D graphics point",G__setup_memvarTPoints,G__setup_memfuncTPoints);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXW),sizeof(TGXW),-1,0,"ABC defining a generic interface to graphics system",G__setup_memvarTGXW,G__setup_memfuncTGXW);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TView),sizeof(TView),-1,0,"3-D View",G__setup_memvarTView,G__setup_memfuncTView);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TPostScript),sizeof(TPostScript),-1,0,"PostScript driver",G__setup_memvarTPostScript,G__setup_memfuncTPostScript);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Graf2LN_TGXClient),sizeof(TGXClient),-1,0,"The Root graphics client interface",G__setup_memvarTGXClient,G__setup_memfuncTGXClient);
}
extern "C" void G__cpp_setupG__Graf2() {
  G__check_setup_version(51111,"G__cpp_setupG__Graf2()");
  G__set_cpp_environmentG__Graf2();
  G__cpp_setup_tagtableG__Graf2();

  G__cpp_setup_inheritanceG__Graf2();

  G__cpp_setup_typetableG__Graf2();

  G__cpp_setup_memvarG__Graf2();

  G__cpp_setup_memfuncG__Graf2();
  G__cpp_setup_globalG__Graf2();
  G__cpp_setup_funcG__Graf2();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Graf2();
  return;
}
class G__cpp_setup_initG__Graf2 {
  public:
    G__cpp_setup_initG__Graf2() { G__add_setup_func("G__Graf2",&G__cpp_setupG__Graf2); }
   ~G__cpp_setup_initG__Graf2() { G__remove_setup_func("G__Graf2"); }
};
G__cpp_setup_initG__Graf2 G__cpp_setup_initializerG__Graf2;

//
// File generated by /home/rdm/root/bin/rootcint at Mon Mar  8 12:34:17 1999.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TBrowser *&obj)
{
   // Read a pointer to an object of class TBrowser.

   obj = (TBrowser *) buf.ReadObject(TBrowser::Class());
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TStyle *&obj)
{
   // Read a pointer to an object of class TStyle.

   obj = (TStyle *) buf.ReadObject(TStyle::Class());
   return buf;
}

//______________________________________________________________________________
void TStyle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStyle.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
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
      R__b >> fStatBorderSize;
      R__b >> fStatX;
      R__b >> fStatY;
      R__b >> fStatW;
      R__b >> fStatH;
      R__b >> fTitleColor;
      R__b >> fTitleBorderSize;
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
   } else {
      R__b.WriteVersion(TStyle::IsA());
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
      R__b << fStatBorderSize;
      R__b << fStatX;
      R__b << fStatY;
      R__b << fStatW;
      R__b << fStatH;
      R__b << fTitleColor;
      R__b << fTitleBorderSize;
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
   R__insp.Inspect(R__cl, R__parent, "fStatBorderSize", &fStatBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fStatX", &fStatX);
   R__insp.Inspect(R__cl, R__parent, "fStatY", &fStatY);
   R__insp.Inspect(R__cl, R__parent, "fStatW", &fStatW);
   R__insp.Inspect(R__cl, R__parent, "fStatH", &fStatH);
   R__insp.Inspect(R__cl, R__parent, "fTitleColor", &fTitleColor);
   R__insp.Inspect(R__cl, R__parent, "fTitleBorderSize", &fTitleBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fTitleX", &fTitleX);
   R__insp.Inspect(R__cl, R__parent, "fTitleY", &fTitleY);
   R__insp.Inspect(R__cl, R__parent, "fTitleW", &fTitleW);
   R__insp.Inspect(R__cl, R__parent, "fTitleH", &fTitleH);
   R__insp.Inspect(R__cl, R__parent, "fLegoInnerR", &fLegoInnerR);
   fPalette.ShowMembers(R__insp, strcat(R__parent,"fPalette.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fLineStyle[30]", fLineStyle);
   fHeaderPS.ShowMembers(R__insp, strcat(R__parent,"fHeaderPS.")); R__parent[R__ncp] = 0;
   TNamed::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVirtualPad *&obj)
{
   // Read a pointer to an object of class TVirtualPad.

   obj = (TVirtualPad *) buf.ReadObject(TVirtualPad::Class());
   return buf;
}

//______________________________________________________________________________
void TVirtualPad::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualPad.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TWbox::Streamer(R__b);
      TAttPad::Streamer(R__b);
   } else {
      R__b.WriteVersion(TVirtualPad::IsA());
      TWbox::Streamer(R__b);
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
   TWbox::ShowMembers(R__insp, R__parent);
   TAttPad::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TContextMenu *&obj)
{
   // Read a pointer to an object of class TContextMenu.

   obj = (TContextMenu *) buf.ReadObject(TContextMenu::Class());
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TGuiFactory *&obj)
{
   // Read a pointer to an object of class TGuiFactory.

   obj = (TGuiFactory *) buf.ReadObject(TGuiFactory::Class());
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TLego *&obj)
{
   // Read a pointer to an object of class TLego.

   obj = (TLego *) buf.ReadObject(TLego::Class());
   return buf;
}

//______________________________________________________________________________
void TLego::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLego.

   TObject::Streamer(R__b);
   TAttLine::Streamer(R__b);
   TAttFill::Streamer(R__b);
}

//______________________________________________________________________________
void TLego::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TLego.

   TClass *R__cl  = TLego::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSystem", &fSystem);
   R__insp.Inspect(R__cl, R__parent, "fNT", &fNT);
   R__insp.Inspect(R__cl, R__parent, "fX0", &fX0);
   R__insp.Inspect(R__cl, R__parent, "fDX", &fDX);
   R__insp.Inspect(R__cl, R__parent, "fRmin[3]", fRmin);
   R__insp.Inspect(R__cl, R__parent, "fRmax[3]", fRmax);
   R__insp.Inspect(R__cl, R__parent, "fU[2000]", fU);
   R__insp.Inspect(R__cl, R__parent, "fD[2000]", fD);
   R__insp.Inspect(R__cl, R__parent, "fT[200]", fT);
   R__insp.Inspect(R__cl, R__parent, "fNlevel", &fNlevel);
   R__insp.Inspect(R__cl, R__parent, "fFunLevel[257]", fFunLevel);
   R__insp.Inspect(R__cl, R__parent, "fColorLevel[258]", fColorLevel);
   R__insp.Inspect(R__cl, R__parent, "fColorMain[10]", fColorMain);
   R__insp.Inspect(R__cl, R__parent, "fColorDark[10]", fColorDark);
   R__insp.Inspect(R__cl, R__parent, "fColorTop", &fColorTop);
   R__insp.Inspect(R__cl, R__parent, "fColorBottom", &fColorBottom);
   R__insp.Inspect(R__cl, R__parent, "fMesh", &fMesh);
   R__insp.Inspect(R__cl, R__parent, "fNlines", &fNlines);
   R__insp.Inspect(R__cl, R__parent, "fLevelLine[200]", fLevelLine);
   R__insp.Inspect(R__cl, R__parent, "fPlines[1200]", fPlines);
   R__insp.Inspect(R__cl, R__parent, "fAphi[183]", fAphi);
   R__insp.Inspect(R__cl, R__parent, "fLoff", &fLoff);
   R__insp.Inspect(R__cl, R__parent, "fYdl", &fYdl);
   R__insp.Inspect(R__cl, R__parent, "fYls[4]", fYls);
   R__insp.Inspect(R__cl, R__parent, "fVls[12]", fVls);
   R__insp.Inspect(R__cl, R__parent, "fQA", &fQA);
   R__insp.Inspect(R__cl, R__parent, "fQD", &fQD);
   R__insp.Inspect(R__cl, R__parent, "fQS", &fQS);
   R__insp.Inspect(R__cl, R__parent, "fNqs", &fNqs);
   R__insp.Inspect(R__cl, R__parent, "fNxrast", &fNxrast);
   R__insp.Inspect(R__cl, R__parent, "fNyrast", &fNyrast);
   R__insp.Inspect(R__cl, R__parent, "fXrast", &fXrast);
   R__insp.Inspect(R__cl, R__parent, "fYrast", &fYrast);
   R__insp.Inspect(R__cl, R__parent, "fDXrast", &fDXrast);
   R__insp.Inspect(R__cl, R__parent, "fDYrast", &fDYrast);
   R__insp.Inspect(R__cl, R__parent, "fIfrast", &fIfrast);
   R__insp.Inspect(R__cl, R__parent, "*fRaster", &fRaster);
   R__insp.Inspect(R__cl, R__parent, "fJmask[30]", fJmask);
   R__insp.Inspect(R__cl, R__parent, "fMask[465]", fMask);
   R__insp.Inspect(R__cl, R__parent, "fDrawFace", &fDrawFace);
   R__insp.Inspect(R__cl, R__parent, "fLegoFunction", &fLegoFunction);
   R__insp.Inspect(R__cl, R__parent, "fSurfaceFunction", &fSurfaceFunction);
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TLink *&obj)
{
   // Read a pointer to an object of class TLink.

   obj = (TLink *) buf.ReadObject(TLink::Class());
   return buf;
}

//______________________________________________________________________________
void TLink::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLink.

   TText::Streamer(R__b);
}

//______________________________________________________________________________
void TLink::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TLink.

   TClass *R__cl  = TLink::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fLink", &fLink);
   TText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPoints *&obj)
{
   // Read a pointer to an object of class TPoints.

   ::Error("TPoints::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TPoints::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPoints.

   ::Error("TPoints::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TPoints::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPoints.

   TClass *R__cl  = TPoints::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGXW *&obj)
{
   // Read a pointer to an object of class TGXW.

   obj = (TGXW *) buf.ReadObject(TGXW::Class());
   return buf;
}

//______________________________________________________________________________
void TGXW::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGXW.

   TNamed::Streamer(R__b);
   TAttLine::Streamer(R__b);
   TAttFill::Streamer(R__b);
   TAttText::Streamer(R__b);
   TAttMarker::Streamer(R__b);
}

//______________________________________________________________________________
void TGXW::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGXW.

   TClass *R__cl  = TGXW::IsA();
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
TBuffer &operator>>(TBuffer &buf, TView *&obj)
{
   // Read a pointer to an object of class TView.

   obj = (TView *) buf.ReadObject(TView::Class());
   return buf;
}

//______________________________________________________________________________
void TView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TView.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
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
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPostScript *&obj)
{
   // Read a pointer to an object of class TPostScript.

   obj = (TPostScript *) buf.ReadObject(TPostScript::Class());
   return buf;
}

//______________________________________________________________________________
void TPostScript::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPostScript.

   TNamed::Streamer(R__b);
   TAttLine::Streamer(R__b);
   TAttFill::Streamer(R__b);
   TAttMarker::Streamer(R__b);
   TAttText::Streamer(R__b);
}

//______________________________________________________________________________
void TPostScript::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPostScript.

   TClass *R__cl  = TPostScript::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX1v", &fX1v);
   R__insp.Inspect(R__cl, R__parent, "fY1v", &fY1v);
   R__insp.Inspect(R__cl, R__parent, "fX2v", &fX2v);
   R__insp.Inspect(R__cl, R__parent, "fY2v", &fY2v);
   R__insp.Inspect(R__cl, R__parent, "fX1w", &fX1w);
   R__insp.Inspect(R__cl, R__parent, "fY1w", &fY1w);
   R__insp.Inspect(R__cl, R__parent, "fX2w", &fX2w);
   R__insp.Inspect(R__cl, R__parent, "fY2w", &fY2w);
   R__insp.Inspect(R__cl, R__parent, "fDXC", &fDXC);
   R__insp.Inspect(R__cl, R__parent, "fDYC", &fDYC);
   R__insp.Inspect(R__cl, R__parent, "fXC", &fXC);
   R__insp.Inspect(R__cl, R__parent, "fYC", &fYC);
   R__insp.Inspect(R__cl, R__parent, "fFX", &fFX);
   R__insp.Inspect(R__cl, R__parent, "fFY", &fFY);
   R__insp.Inspect(R__cl, R__parent, "fXVP1", &fXVP1);
   R__insp.Inspect(R__cl, R__parent, "fXVP2", &fXVP2);
   R__insp.Inspect(R__cl, R__parent, "fYVP1", &fYVP1);
   R__insp.Inspect(R__cl, R__parent, "fYVP2", &fYVP2);
   R__insp.Inspect(R__cl, R__parent, "fXVS1", &fXVS1);
   R__insp.Inspect(R__cl, R__parent, "fXVS2", &fXVS2);
   R__insp.Inspect(R__cl, R__parent, "fYVS1", &fYVS1);
   R__insp.Inspect(R__cl, R__parent, "fYVS2", &fYVS2);
   R__insp.Inspect(R__cl, R__parent, "fXsize", &fXsize);
   R__insp.Inspect(R__cl, R__parent, "fYsize", &fYsize);
   R__insp.Inspect(R__cl, R__parent, "fMaxsize", &fMaxsize);
   R__insp.Inspect(R__cl, R__parent, "fRed", &fRed);
   R__insp.Inspect(R__cl, R__parent, "fGreen", &fGreen);
   R__insp.Inspect(R__cl, R__parent, "fBlue", &fBlue);
   R__insp.Inspect(R__cl, R__parent, "fSave", &fSave);
   R__insp.Inspect(R__cl, R__parent, "fNXzone", &fNXzone);
   R__insp.Inspect(R__cl, R__parent, "fNYzone", &fNYzone);
   R__insp.Inspect(R__cl, R__parent, "fIXzone", &fIXzone);
   R__insp.Inspect(R__cl, R__parent, "fIYzone", &fIYzone);
   R__insp.Inspect(R__cl, R__parent, "fLenBuffer", &fLenBuffer);
   R__insp.Inspect(R__cl, R__parent, "fMarkerSizeCur", &fMarkerSizeCur);
   R__insp.Inspect(R__cl, R__parent, "fCurrentColor", &fCurrentColor);
   R__insp.Inspect(R__cl, R__parent, "fNpages", &fNpages);
   R__insp.Inspect(R__cl, R__parent, "fType", &fType);
   R__insp.Inspect(R__cl, R__parent, "fMode", &fMode);
   R__insp.Inspect(R__cl, R__parent, "fClip", &fClip);
   R__insp.Inspect(R__cl, R__parent, "fBoundingBox", &fBoundingBox);
   R__insp.Inspect(R__cl, R__parent, "fClear", &fClear);
   R__insp.Inspect(R__cl, R__parent, "fClipStatus", &fClipStatus);
   R__insp.Inspect(R__cl, R__parent, "fPrinted", &fPrinted);
   R__insp.Inspect(R__cl, R__parent, "fRange", &fRange);
   R__insp.Inspect(R__cl, R__parent, "fZone", &fZone);
   R__insp.Inspect(R__cl, R__parent, "*fStream", &fStream);
   R__insp.Inspect(R__cl, R__parent, "fBuffer[512]", fBuffer);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGXClient *&obj)
{
   // Read a pointer to an object of class TGXClient.

   obj = (TGXClient *) buf.ReadObject(TGXClient::Class());
   return buf;
}

//______________________________________________________________________________
void TGXClient::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGXClient.

   TGXW::Streamer(R__b);
}

//______________________________________________________________________________
void TGXClient::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGXClient.

   TClass *R__cl  = TGXClient::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fSocket", &fSocket);
   fBuffer.ShowMembers(R__insp, strcat(R__parent,"fBuffer.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fHeaderSize", &fHeaderSize);
   R__insp.Inspect(R__cl, R__parent, "fBeginCode", &fBeginCode);
   R__insp.Inspect(R__cl, R__parent, "fCurrentColor", &fCurrentColor);
   R__insp.Inspect(R__cl, R__parent, "fChupx", &fChupx);
   R__insp.Inspect(R__cl, R__parent, "fChupy", &fChupy);
   R__insp.Inspect(R__cl, R__parent, "fMagnitude", &fMagnitude);
   R__insp.Inspect(R__cl, R__parent, "fText[256]", fText);
   TGXW::ShowMembers(R__insp, R__parent);
}

