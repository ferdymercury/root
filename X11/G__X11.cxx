//*CMZ :  2.21/07 08/03/99  12.34.58  by  Fons Rademakers
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
extern void G__cpp_setup_tagtableG__X11();
extern void G__cpp_setup_inheritanceG__X11();
extern void G__cpp_setup_typetableG__X11();
extern void G__cpp_setup_memvarG__X11();
extern void G__cpp_setup_globalG__X11();
extern void G__cpp_setup_memfuncG__X11();
extern void G__cpp_setup_funcG__X11();
extern void G__set_cpp_environmentG__X11();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TGX11.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__X11LN_TClass;
extern G__linked_taginfo G__G__X11LN_TObject;
extern G__linked_taginfo G__G__X11LN_TNamed;
extern G__linked_taginfo G__G__X11LN_TAttLine;
extern G__linked_taginfo G__G__X11LN_TAttFill;
extern G__linked_taginfo G__G__X11LN_TAttText;
extern G__linked_taginfo G__G__X11LN_TAttMarker;
extern G__linked_taginfo G__G__X11LN_TGXW;
extern G__linked_taginfo G__G__X11LN_GC;
extern G__linked_taginfo G__G__X11LN_Display;
extern G__linked_taginfo G__G__X11LN_XWindow_t;
extern G__linked_taginfo G__G__X11LN_TGX11;
/********************************************************
* G__X11.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif

extern "C" void G__cpp_reset_tagtableG__X11();

extern "C" void G__set_cpp_environmentG__X11() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TGX11.h");
  G__cpp_reset_tagtableG__X11();
}
extern "C" int G__cpp_dllrevG__X11() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TGX11 */
static int G__TGX11_TGX11_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGX11 *p=NULL;
   if(G__getaryconstruct()) p=new TGX11[G__getaryconstruct()];
   else                    p=new TGX11;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__X11LN_TGX11);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_TGX11_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGX11 *p=NULL;
      p = new TGX11(*(TGX11*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__X11LN_TGX11);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_TGX11_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGX11 *p=NULL;
      p = new TGX11((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__X11LN_TGX11);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Init_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGX11*)(G__getstructoffset()))->Init((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ClearWindow_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ClearWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ClosePixmap_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ClosePixmap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CloseWindow_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->CloseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CopyPixmap_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->CopyPixmap((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawBox_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawBox((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(TGXW::EBoxMode)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawCellArray_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawCellArray(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t*)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawFillArea_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawFillArea((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawLine_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawLine((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawPolyLine_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawPolyMarker_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawText_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawText((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(const char*)G__int(libp->para[4]),(TGXW::ETextMode)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetCharacterUp_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetCharacterUp(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetDoubleBuffer_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->GetDoubleBuffer((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetGeometry_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetGeometry((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3])
,libp->para[4].ref?*(UInt_t*)libp->para[4].ref:G__Muint(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DisplayName_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((TGX11*)(G__getstructoffset()))->DisplayName((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((TGX11*)(G__getstructoffset()))->DisplayName());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetPlanes_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetPlanes(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetRGB_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetRGB((Int_t)G__int(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(Float_t*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetTextExtent_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetTextExtent(libp->para[0].ref?*(UInt_t*)libp->para[0].ref:G__Muint(libp->para[0]),libp->para[1].ref?*(UInt_t*)libp->para[1].ref:G__Muint(libp->para[1])
,(char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetTextMagnitude_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGX11*)(G__getstructoffset()))->GetTextMagnitude());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetWindowID_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->GetWindowID((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_HasTTFonts_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGX11*)(G__getstructoffset()))->HasTTFonts());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_InitWindow_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->InitWindow((ULong_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_MoveWindow_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->MoveWindow((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_OpenDisplay_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->OpenDisplay((Display*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_OpenPixmap_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->OpenPixmap((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_QueryPointer_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->QueryPointer(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ReadGIF_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ReadGIF((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_RequestLocator_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->RequestLocator((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_RequestString_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->RequestString((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(char*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_RescaleWindow_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->RescaleWindow((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ResizePixmap_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->ResizePixmap((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ResizeWindow_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ResizeWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SelectWindow_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SelectWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetCharacterUp_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetCharacterUp((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetClipOFF_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetClipOFF((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetClipRegion_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetClipRegion((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetCursor_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetCursor((Int_t)G__int(libp->para[0]),(ECursor)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetDoubleBuffer_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetDoubleBuffer((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetDoubleBufferOFF_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetDoubleBufferOFF();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetDoubleBufferON_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetDoubleBufferON();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetDrawMode_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetDrawMode((TGXW::EDrawMode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetFillColor_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetFillColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetFillStyle_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetLineColor_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetLineColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetLineType_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetLineType((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetLineStyle_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetLineStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetLineWidth_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetLineWidth((Width_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetMarkerColor_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetMarkerColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetMarkerSize_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetMarkerSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetMarkerStyle_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetMarkerStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetOpacity_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetOpacity((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetRGB_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetRGB((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetTextAlign_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetTextAlign((Short_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetTextAlign();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetTextColor_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetTextColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetTextFont_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->SetTextFont((char*)G__int(libp->para[0]),(TGXW::ETextSetMode)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetTextFont_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetTextFont((Font_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetTextMagnitude_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetTextMagnitude((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetTextMagnitude();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetTextSize_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetTextSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Sync_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->Sync((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_UpdateWindow_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->UpdateWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Warp_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->Warp((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_WriteGIF_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->WriteGIF((char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_WritePixmap_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->WritePixmap((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetWindowAttributes_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetWindowAttributes((Window_t)G__int(libp->para[0]),*(WindowAttributes_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_MapWindow_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->MapWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_MapSubwindows_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->MapSubwindows((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_MapRaised_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->MapRaised((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_UnmapWindow_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->UnmapWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DestroyWindow_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DestroyWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_RaiseWindow_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->RaiseWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_LowerWindow_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->LowerWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_MoveWindow_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->MoveWindow((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_MoveResizeWindow_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->MoveResizeWindow((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ResizeWindow_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ResizeWindow((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetWindowBackground_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetWindowBackground((Window_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetWindowBackgroundPixmap_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetWindowBackgroundPixmap((Window_t)G__int(libp->para[0]),(Pixmap_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CreateWindow_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->CreateWindow(
(Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7])
,(void*)G__int(libp->para[8]),(SetWindowAttributes_t*)G__int(libp->para[9])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_OpenDisplay_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->OpenDisplay((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CloseDisplay_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->CloseDisplay();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetDisplay_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->GetDisplay());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_InternAtom_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->InternAtom((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetDefaultRootWindow_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->GetDefaultRootWindow());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetParent_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->GetParent((Window_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_LoadQueryFont_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->LoadQueryFont((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetFontHandle_3_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->GetFontHandle((FontStruct_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DeleteFont_4_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DeleteFont((FontStruct_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CreateGC_5_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->CreateGC((Drawable_t)G__int(libp->para[0]),(GCValues_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ChangeGC_6_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ChangeGC((GContext_t)G__int(libp->para[0]),(GCValues_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CopyGC_7_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->CopyGC((GContext_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Mask_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DeleteGC_8_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DeleteGC((GContext_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CreateCursor_9_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->CreateCursor((ECursor)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetCursor_0_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetCursor((Window_t)G__int(libp->para[0]),(Cursor_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CreatePixmap_1_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->CreatePixmap((Drawable_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CreatePixmap_2_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->CreatePixmap(
(Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CreateBitmap_3_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->CreateBitmap((Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DeletePixmap_4_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DeletePixmap((Pixmap_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CreatePictureFromFile_5_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGX11*)(G__getstructoffset()))->CreatePictureFromFile((Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,libp->para[2].ref?*(Pixmap_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Pixmap_t*)libp->para[3].ref:G__Mulong(libp->para[3])
,*(PictureAttributes_t*)libp->para[4].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CreatePictureFromData_6_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGX11*)(G__getstructoffset()))->CreatePictureFromData((Drawable_t)G__int(libp->para[0]),(char**)G__int(libp->para[1])
,libp->para[2].ref?*(Pixmap_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Pixmap_t*)libp->para[3].ref:G__Mulong(libp->para[3])
,*(PictureAttributes_t*)libp->para[4].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ReadPictureDataFromFile_7_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGX11*)(G__getstructoffset()))->ReadPictureDataFromFile((const char*)G__int(libp->para[0]),(char***)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DeletePictureData_8_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DeletePictureData((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetDashes_9_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetDashes((GContext_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ParseColor_0_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGX11*)(G__getstructoffset()))->ParseColor((Colormap_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,*(ColorStruct_t*)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_AllocColor_1_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGX11*)(G__getstructoffset()))->AllocColor((Colormap_t)G__int(libp->para[0]),*(ColorStruct_t*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_QueryColor_2_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->QueryColor((Colormap_t)G__int(libp->para[0]),*(ColorStruct_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_EventsPending_3_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->EventsPending());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_NextEvent_4_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->NextEvent(*(Event_t*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Bell_5_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->Bell((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CopyArea_6_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->CopyArea(
(Drawable_t)G__int(libp->para[0]),(Drawable_t)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]),(Int_t)G__int(libp->para[7])
,(Int_t)G__int(libp->para[8]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ChangeWindowAttributes_7_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ChangeWindowAttributes((Window_t)G__int(libp->para[0]),(SetWindowAttributes_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawLine_8_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawLine((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ClearArea_9_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ClearArea((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_CheckEvent_0_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGX11*)(G__getstructoffset()))->CheckEvent((Window_t)G__int(libp->para[0]),(EGEventType)G__int(libp->para[1])
,*(Event_t*)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SendEvent_1_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SendEvent((Window_t)G__int(libp->para[0]),(Event_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_WMDeleteNotify_2_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->WMDeleteNotify((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetKeyAutoRepeat_3_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetKeyAutoRepeat((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetKeyAutoRepeat();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GrabKey_4_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GrabKey((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GrabKey((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GrabButton_5_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GrabButton(
(Window_t)G__int(libp->para[0]),(EMouseButton)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(Window_t)G__int(libp->para[4]),(Cursor_t)G__int(libp->para[5])
,(Bool_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GrabButton((Window_t)G__int(libp->para[0]),(EMouseButton)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(Window_t)G__int(libp->para[4]),(Cursor_t)G__int(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GrabPointer_6_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GrabPointer((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(Window_t)G__int(libp->para[2]),(Cursor_t)G__int(libp->para[3])
,(Bool_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GrabPointer((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(Window_t)G__int(libp->para[2]),(Cursor_t)G__int(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetWindowName_7_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetWindowName((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetIconName_8_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetIconName((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetClassHints_9_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetClassHints((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetMWMHints_0_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetMWMHints((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetWMPosition_1_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetWMPosition((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetWMSize_2_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetWMSize((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetWMSizeHints_3_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetWMSizeHints(
(Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetWMState_4_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetWMState((Window_t)G__int(libp->para[0]),(EInitialState)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetWMTransientHint_5_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetWMTransientHint((Window_t)G__int(libp->para[0]),(Window_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawString_6_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawString((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_TextWidth_7_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->TextWidth((FontStruct_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetFontProperties_8_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetFontProperties((FontStruct_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetGCValues_9_15(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetGCValues((GContext_t)G__int(libp->para[0]),*(GCValues_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetFontStruct_0_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->GetFontStruct((FontH_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ClearWindow_1_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ClearWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_KeysymToKeycode_2_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->KeysymToKeycode((UInt_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_FillRectangle_3_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->FillRectangle((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawRectangle_4_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawRectangle((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DrawSegments_5_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->DrawSegments((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Segment_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SelectInput_6_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SelectInput((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetInputFocus_7_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetInputFocus((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetPrimarySelectionOwner_8_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGX11*)(G__getstructoffset()))->GetPrimarySelectionOwner());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ConvertPrimarySelection_9_16(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ConvertPrimarySelection((Window_t)G__int(libp->para[0]),(Time_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_LookupString_0_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->LookupString((Event_t*)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetPasteBuffer_1_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetPasteBuffer((Window_t)G__int(libp->para[0]),(Atom_t)G__int(libp->para[1])
,*(TString*)libp->para[2].ref,libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,(Bool_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_TranslateCoordinates_2_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->TranslateCoordinates(
(Window_t)G__int(libp->para[0]),(Window_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Window_t*)libp->para[6].ref:G__Mulong(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_GetWindowSize_3_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->GetWindowSize((Drawable_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3])
,libp->para[4].ref?*(UInt_t*)libp->para[4].ref:G__Muint(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_FillPolygon_4_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->FillPolygon((Window_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Point_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_QueryPointer_5_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->QueryPointer(
(Window_t)G__int(libp->para[0]),libp->para[1].ref?*(Window_t*)libp->para[1].ref:G__Mulong(libp->para[1])
,libp->para[2].ref?*(Window_t*)libp->para[2].ref:G__Mulong(libp->para[2]),libp->para[3].ref?*(Int_t*)libp->para[3].ref:G__Mint(libp->para[3])
,libp->para[4].ref?*(Int_t*)libp->para[4].ref:G__Mint(libp->para[4]),libp->para[5].ref?*(Int_t*)libp->para[5].ref:G__Mint(libp->para[5])
,libp->para[6].ref?*(Int_t*)libp->para[6].ref:G__Mint(libp->para[6]),libp->para[7].ref?*(UInt_t*)libp->para[7].ref:G__Muint(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetForeground_6_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetForeground((GContext_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_SetClipRectangles_7_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->SetClipRectangles((GContext_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Rectangle_t*)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Update_8_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->Update((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->Update();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DeclFileName_9_17(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGX11*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_DeclFileLine_0_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ImplFileName_1_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGX11*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ImplFileLine_2_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGX11*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Class_Version_3_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGX11*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Class_4_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGX11*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Dictionary_5_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_IsA_6_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGX11*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_ShowMembers_7_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGX11_Streamer_8_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGX11*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGX11_wATGX11_9_18(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGX11 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGX11 *)((G__getstructoffset())+sizeof(TGX11)*i);
   else  delete (TGX11 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TGX11 */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__X11 {
 public:
  G__Sizep2memfuncG__X11() {p=&G__Sizep2memfuncG__X11::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__X11::*p)();
};

size_t G__get_sizep2memfuncG__X11()
{
  G__Sizep2memfuncG__X11 a;
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
extern "C" void G__cpp_setup_inheritanceG__X11() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__X11LN_TGX11))) {
     TGX11 *G__Lderived;
     G__Lderived=(TGX11*)0x1000;
     {
       TGXW *G__Lpbase=(TGXW*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11),G__get_linked_tagnum(&G__G__X11LN_TGXW),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11),G__get_linked_tagnum(&G__G__X11LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11),G__get_linked_tagnum(&G__G__X11LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11),G__get_linked_tagnum(&G__G__X11LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11),G__get_linked_tagnum(&G__G__X11LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11),G__get_linked_tagnum(&G__G__X11LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11),G__get_linked_tagnum(&G__G__X11LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__X11() {

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
   G__search_typename2("XID",107,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Drawable",107,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Cursor",107,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Colormap",107,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Window",107,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TGX11 */
static void G__setup_memvarTGX11(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11));
   { TGX11 *p; p=(TGX11*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fMaxNumberOfWindows=",0,"Maximum number of windows");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__X11LN_XWindow_t),-1,-1,4,"fWindows=",0,"List of windows");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Cursor"),-1,4,"fCursors[18]=",0,"List of cursors");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__X11LN_Display),-1,-1,2,"fDisplay=",0,"Pointer to display");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("Colormap"),-1,2,"fColormap=",0,"Default colormap, 0 if b/w");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fScreenNumber=",0,"Screen number");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fHasTTFonts=",0,"True when TrueType fonts are used");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTextAlignH=",0,"Text Alignment Horizontal");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTextAlignV=",0,"Text Alignment Vertical");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTextAlign=",0,"Text alignment (set in SetTextAlign)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fCharacterUpX=",0,"Character Up vector along X");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fCharacterUpY=",0,"Character Up vector along Y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTextMagnitude=",0,"Text Magnitude");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__X11LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__X11() {
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
static void G__setup_memfuncTGX11(void) {
   /* TGX11 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11));
   G__memfunc_setup("CloseWindow1",1183,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ClearPixmap",1110,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"K - 'Drawable' 0 - pix",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CopyWindowtoPixmap",1893,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"K - 'Drawable' 0 - pix i - 'Int_t' 0 - xpos "
"i - 'Int_t' 0 - ypos",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PutImage",796,(G__InterfaceMethod)NULL,121,-1,-1,0,11,1,4,0,
"i - 'Int_t' 0 - offset i - 'Int_t' 0 - itran "
"i - 'Int_t' 0 - x0 i - 'Int_t' 0 - y0 "
"i - 'Int_t' 0 - nx i - 'Int_t' 0 - ny "
"i - 'Int_t' 0 - xmin i - 'Int_t' 0 - ymin "
"i - 'Int_t' 0 - xmax i - 'Int_t' 0 - ymax "
"B - 'UChar_t' 0 - image",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RemovePixmap",1245,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"K - 'Drawable' 0 - pix",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetColor",811,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"u 'GC' - 0 - gc i - 'Int_t' 0 - ci",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFillStyleIndex",1724,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"i - 'Int_t' 0 - style i - 'Int_t' 0 - fasi",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetInput",828,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"i - 'Int_t' 0 - inp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMarkerType",1328,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"i - 'Int_t' 0 - type i - 'Int_t' 0 - n "
"I - - 0 - xy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CollectImageColors",1819,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,4,0,
"k - 'ULong_t' 0 - pixel K - 'ULong_t' 1 - orgcolors "
"i - 'Int_t' 1 - ncolors i - 'Int_t' 1 - maxcolors",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MakeOpaqueColors",1627,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"i - 'Int_t' 0 - percent K - 'ULong_t' 0 - orgcolors "
"i - 'Int_t' 0 - ncolors",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindColor",896,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,3,1,4,0,
"k - 'ULong_t' 0 - pixel K - 'ULong_t' 0 - orgcolors "
"i - 'Int_t' 0 - ncolors",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImgPickPalette",1395,(G__InterfaceMethod)NULL,121,-1,-1,0,5,1,4,0,
"U 'XImage' - 0 - image i - 'Int_t' 1 - ncol "
"I - 'Int_t' 1 - R I - 'Int_t' 1 - G "
"I - 'Int_t' 1 - B",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapGCValues",1048,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,4,0,
"u 'GCValues_t' - 1 - gval k - 'ULong_t' 1 - xmask "
"u 'XGCValues' - 1 - xgval b - 'Bool_t' 0 kTRUE tox",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapSetWindowAttributes",2281,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"U 'SetWindowAttributes_t' - 0 - attr k - 'ULong_t' 1 - xmask "
"u 'XSetWindowAttributes' - 1 - xattr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapCursor",924,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"i 'ECursor' - 0 - cursor i - 'Int_t' 1 - xcursor",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapColorStruct",1442,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"U 'ColorStruct_t' - 0 - color u 'XColor' - 1 - xcolor",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapPictureAttributes",2081,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"u 'PictureAttributes_t' - 1 - attr u 'XpmAttributes' - 1 - xpmattr "
"b - 'Bool_t' 0 kTRUE toxpm",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapModifierState",1614,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"h - 'UInt_t' 1 - state h - 'UInt_t' 1 - xstate "
"b - 'Bool_t' 0 kTRUE tox",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapEvent",800,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"u 'Event_t' - 1 - ev u 'XEvent' - 1 - xev "
"b - 'Bool_t' 0 kTRUE tox",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapEventMask",1196,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"h - 'UInt_t' 1 - emask h - 'UInt_t' 1 - xemask "
"b - 'Bool_t' 0 kTRUE tox",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapKeySym",896,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,4,0,
"h - 'UInt_t' 1 - keysym h - 'UInt_t' 1 - xkeysym "
"b - 'Bool_t' 0 kTRUE tox",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCurrentWindow",1659,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__X11LN_XWindow_t),-1,0,0,1,2,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGC",426,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__X11LN_GC),-1,0,1,1,2,8,"i - 'Int_t' 0 - which",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGX11",341,G__TGX11_TGX11_4_2,105,G__get_linked_tagnum(&G__G__X11LN_TGX11),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGX11",341,G__TGX11_TGX11_5_2,105,G__get_linked_tagnum(&G__G__X11LN_TGX11),-1,0,1,1,1,0,"u 'TGX11' - 1 - org",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGX11",341,G__TGX11_TGX11_6_2,105,G__get_linked_tagnum(&G__G__X11LN_TGX11),-1,0,2,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,G__TGX11_Init_8_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"Y - - 0 - display",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearWindow",1119,G__TGX11_ClearWindow_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClosePixmap",1125,G__TGX11_ClosePixmap_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseWindow",1134,G__TGX11_CloseWindow_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyPixmap",1034,G__TGX11_CopyPixmap_2_3,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - xpos "
"i - 'Int_t' 0 - ypos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBox",695,G__TGX11_DrawBox_3_3,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2 "
"i 'TGXW::EBoxMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawCellArray",1293,G__TGX11_DrawCellArray_4_3,121,-1,-1,0,7,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2 "
"i - 'Int_t' 0 - nx i - 'Int_t' 0 - ny "
"I - 'Int_t' 0 - ic",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawFillArea",1166,G__TGX11_DrawFillArea_5_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TGX11_DrawLine_6_3,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyLine",1210,G__TGX11_DrawPolyLine_7_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyMarker",1428,G__TGX11_DrawPolyMarker_8_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawText",819,G__TGX11_DrawText_9_3,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"f - 'Float_t' 0 - angle f - 'Float_t' 0 - mgn "
"C - - 0 - text i 'TGXW::ETextMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCharacterUp",1394,G__TGX11_GetCharacterUp_0_4,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - chupx f - 'Float_t' 1 - chupy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDoubleBuffer",1493,G__TGX11_GetDoubleBuffer_1_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGeometry",1132,G__TGX11_GetGeometry_2_4,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 1 - x "
"i - 'Int_t' 1 - y h - 'UInt_t' 1 - w "
"h - 'UInt_t' 1 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DisplayName",1111,G__TGX11_DisplayName_3_4,67,-1,-1,0,1,1,1,1,"C - - 0 0 dpyName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPlanes",899,G__TGX11_GetPlanes_4_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 1 - nplanes",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRGB",507,G__TGX11_GetRGB_5_4,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - index f - 'Float_t' 1 - r "
"f - 'Float_t' 1 - g f - 'Float_t' 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextExtent",1341,G__TGX11_GetTextExtent_6_4,121,-1,-1,0,3,1,1,0,
"h - 'UInt_t' 1 - w h - 'UInt_t' 1 - h "
"C - - 0 - mess",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextMagnitude",1635,G__TGX11_GetTextMagnitude_7_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowID",1061,G__TGX11_GetWindowID_8_4,107,-1,G__defined_typename("Window_t"),0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HasTTFonts",974,G__TGX11_HasTTFonts_9_4,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitWindow",1036,G__TGX11_InitWindow_0_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"k - 'ULong_t' 0 - window",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveWindow",1039,G__TGX11_MoveWindow_1_5,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenDisplay",1128,G__TGX11_OpenDisplay_2_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'Display' - 0 - display",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("OpenPixmap",1025,G__TGX11_OpenPixmap_3_5,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryPointer",1271,G__TGX11_QueryPointer_4_5,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 1 - ix i - 'Int_t' 1 - iy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadGIF",594,G__TGX11_ReadGIF_5_5,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - x0 i - 'Int_t' 0 - y0 "
"C - - 0 - file",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RequestLocator",1469,G__TGX11_RequestLocator_6_5,105,-1,G__defined_typename("Int_t"),0,4,1,1,0,
"i - 'Int_t' 0 - mode i - 'Int_t' 0 - ctyp "
"i - 'Int_t' 1 - x i - 'Int_t' 1 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RequestString",1376,G__TGX11_RequestString_7_5,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"C - - 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RescaleWindow",1335,G__TGX11_RescaleWindow_8_5,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizePixmap",1249,G__TGX11_ResizePixmap_9_5,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeWindow",1258,G__TGX11_ResizeWindow_0_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectWindow",1240,G__TGX11_SelectWindow_1_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCharacterUp",1406,G__TGX11_SetCharacterUp_2_6,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - chupx f - 'Float_t' 0 - chupy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipOFF",911,G__TGX11_SetClipOFF_3_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipRegion",1304,G__TGX11_SetClipRegion_4_6,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TGX11_SetCursor_5_6,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - win i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBuffer",1505,G__TGX11_SetDoubleBuffer_6_6,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBufferOFF",1724,G__TGX11_SetDoubleBufferOFF_7_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBufferON",1662,G__TGX11_SetDoubleBufferON_8_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDrawMode",1087,G__TGX11_SetDrawMode_9_6,121,-1,-1,0,1,1,1,0,"i 'TGXW::EDrawMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillColor",1202,G__TGX11_SetFillColor_0_7,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillStyle",1220,G__TGX11_SetFillStyle_1_7,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - style",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineColor",1203,G__TGX11_SetLineColor_2_7,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineType",1110,G__TGX11_SetLineType_3_7,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 0 - dash",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineStyle",1221,G__TGX11_SetLineStyle_4_7,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - linestyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineWidth",1204,G__TGX11_SetLineWidth_5_7,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 - width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerColor",1421,G__TGX11_SetMarkerColor_6_7,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerSize",1321,G__TGX11_SetMarkerSize_7_7,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - markersize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerStyle",1439,G__TGX11_SetMarkerStyle_8_7,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - markerstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOpacity",1029,G__TGX11_SetOpacity_9_7,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - percent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRGB",519,G__TGX11_SetRGB_0_8,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - cindex f - 'Float_t' 0 - r "
"f - 'Float_t' 0 - g f - 'Float_t' 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextAlign",1212,G__TGX11_SetTextAlign_1_8,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 11 talign",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextColor",1232,G__TGX11_SetTextColor_2_8,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TGX11_SetTextFont_3_8,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 0 - fontname i 'TGXW::ETextSetMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TGX11_SetTextFont_4_8,121,-1,-1,0,1,1,1,0,"s - 'Font_t' 0 - fontnumber",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextMagnitude",1647,G__TGX11_SetTextMagnitude_5_8,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 mgn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextSize",1132,G__TGX11_SetTextSize_6_8,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - textsize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sync",413,G__TGX11_Sync_7_8,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpdateWindow",1243,G__TGX11_UpdateWindow_8_8,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Warp",410,G__TGX11_Warp_9_8,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - ix i - 'Int_t' 0 - iy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteGIF",737,G__TGX11_WriteGIF_0_9,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WritePixmap",1146,G__TGX11_WritePixmap_1_9,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h C - - 0 - pxname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowAttributes",1983,G__TGX11_GetWindowAttributes_2_9,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id u 'WindowAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapWindow",918,G__TGX11_MapWindow_3_9,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TGX11_MapSubwindows_4_9,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapRaised",886,G__TGX11_MapRaised_5_9,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UnmapWindow",1145,G__TGX11_UnmapWindow_6_9,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DestroyWindow",1378,G__TGX11_DestroyWindow_7_9,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RaiseWindow",1132,G__TGX11_RaiseWindow_8_9,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LowerWindow",1153,G__TGX11_LowerWindow_9_9,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveWindow",1039,G__TGX11_MoveWindow_0_10,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveResizeWindow",1665,G__TGX11_MoveResizeWindow_1_10,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeWindow",1258,G__TGX11_ResizeWindow_2_10,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowBackground",1956,G__TGX11_SetWindowBackground_3_10,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'ULong_t' 0 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowBackgroundPixmap",2579,G__TGX11_SetWindowBackgroundPixmap_4_10,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Pixmap_t' 0 - pxm",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateWindow",1228,G__TGX11_CreateWindow_5_10,107,-1,G__defined_typename("Window_t"),0,10,1,1,0,
"k - 'Window_t' 0 - parent i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 - border "
"i - 'Int_t' 0 - depth h - 'UInt_t' 0 - clss "
"Y - - 0 - visual U 'SetWindowAttributes_t' - 0 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenDisplay",1128,G__TGX11_OpenDisplay_6_10,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - dpyName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseDisplay",1228,G__TGX11_CloseDisplay_7_10,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDisplay",1014,G__TGX11_GetDisplay_8_10,107,-1,G__defined_typename("Display_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InternAtom",1025,G__TGX11_InternAtom_9_10,107,-1,G__defined_typename("Atom_t"),0,2,1,1,0,
"C - - 0 - atom_name b - 'Bool_t' 0 - only_if_exist",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultRootWindow",2049,G__TGX11_GetDefaultRootWindow_0_11,107,-1,G__defined_typename("Window_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetParent",906,G__TGX11_GetParent_1_11,107,-1,G__defined_typename("Window_t"),0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LoadQueryFont",1325,G__TGX11_LoadQueryFont_2_11,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,0,"C - - 0 - font_name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontHandle",1283,G__TGX11_GetFontHandle_3_11,107,-1,G__defined_typename("FontH_t"),0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteFont",1002,G__TGX11_DeleteFont_4_11,121,-1,-1,0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateGC",734,G__TGX11_CreateGC_5_11,107,-1,G__defined_typename("GContext_t"),0,2,1,1,0,
"k - 'Drawable_t' 0 - id U 'GCValues_t' - 0 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeGC",720,G__TGX11_ChangeGC_6_11,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc U 'GCValues_t' - 0 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyGC",549,G__TGX11_CopyGC_7_11,121,-1,-1,0,3,1,1,0,
"k - 'GContext_t' 0 - org k - 'GContext_t' 0 - dest "
"h - 'Mask_t' 0 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteGC",733,G__TGX11_DeleteGC_8_11,121,-1,-1,0,1,1,1,0,"k - 'GContext_t' 0 - gc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateCursor",1234,G__TGX11_CreateCursor_9_11,107,-1,G__defined_typename("Cursor_t"),0,1,1,1,0,"i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TGX11_SetCursor_0_12,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Cursor_t' 0 - curid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePixmap",1219,G__TGX11_CreatePixmap_1_12,107,-1,G__defined_typename("Pixmap_t"),0,3,1,1,0,
"k - 'Drawable_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePixmap",1219,G__TGX11_CreatePixmap_2_12,107,-1,G__defined_typename("Pixmap_t"),0,7,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - bitmap "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height "
"k - 'ULong_t' 0 - forecolor k - 'ULong_t' 0 - backcolor "
"i - 'Int_t' 0 - depth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateBitmap",1201,G__TGX11_CreateBitmap_3_12,107,-1,G__defined_typename("Pixmap_t"),0,4,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - bitmap "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeletePixmap",1218,G__TGX11_DeletePixmap_4_12,121,-1,-1,0,1,1,1,0,"k - 'Pixmap_t' 0 - pmap",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePictureFromFile",2116,G__TGX11_CreatePictureFromFile_5_12,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"k - 'Drawable_t' 0 - id C - - 0 - filename "
"k - 'Pixmap_t' 1 - pict k - 'Pixmap_t' 1 - pict_mask "
"u 'PictureAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePictureFromData",2110,G__TGX11_CreatePictureFromData_6_12,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"k - 'Drawable_t' 0 - id C - - 2 - data "
"k - 'Pixmap_t' 1 - pict k - 'Pixmap_t' 1 - pict_mask "
"u 'PictureAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadPictureDataFromFile",2278,G__TGX11_ReadPictureDataFromFile_7_12,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - filename C - - 3 - ret_data",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeletePictureData",1705,G__TGX11_DeletePictureData_8_12,121,-1,-1,0,1,1,1,0,"Y - - 0 - data",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDashes",900,G__TGX11_SetDashes_9_12,121,-1,-1,0,4,1,1,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - offset "
"C - - 0 - dash_list i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ParseColor",1018,G__TGX11_ParseColor_0_13,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"k - 'Colormap_t' 0 - cmap C - - 0 - cname "
"u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AllocColor",1002,G__TGX11_AllocColor_1_13,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"k - 'Colormap_t' 0 - cmap u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryColor",1045,G__TGX11_QueryColor_2_13,121,-1,-1,0,2,1,1,0,
"k - 'Colormap_t' 0 - cmap u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EventsPending",1338,G__TGX11_EventsPending_3_13,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NextEvent",929,G__TGX11_NextEvent_4_13,121,-1,-1,0,1,1,1,0,"u 'Event_t' - 1 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Bell",383,G__TGX11_Bell_5_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - percent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyArea",788,G__TGX11_CopyArea_6_13,121,-1,-1,0,9,1,1,0,
"k - 'Drawable_t' 0 - src k - 'Drawable_t' 0 - dest "
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - src_x "
"i - 'Int_t' 0 - src_y h - 'UInt_t' 0 - width "
"h - 'UInt_t' 0 - height i - 'Int_t' 0 - dest_x "
"i - 'Int_t' 0 - dest_y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeWindowAttributes",2277,G__TGX11_ChangeWindowAttributes_7_13,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id U 'SetWindowAttributes_t' - 0 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TGX11_DrawLine_8_13,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearArea",864,G__TGX11_ClearArea_9_13,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CheckEvent",992,G__TGX11_CheckEvent_0_14,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"k - 'Window_t' 0 - id i 'EGEventType' - 0 - type "
"u 'Event_t' - 1 - ev",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendEvent",908,G__TGX11_SendEvent_1_14,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id U 'Event_t' - 0 - ev",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WMDeleteNotify",1392,G__TGX11_WMDeleteNotify_2_14,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetKeyAutoRepeat",1615,G__TGX11_SetKeyAutoRepeat_3_14,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE on",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabKey",677,G__TGX11_GrabKey_4_14,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - keycode "
"h - 'UInt_t' 0 - modifier b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabButton",1016,G__TGX11_GrabButton_5_14,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - id i 'EMouseButton' - 0 - button "
"h - 'UInt_t' 0 - modifier h - 'UInt_t' 0 - evmask "
"k - 'Window_t' 0 - confine k - 'Cursor_t' 0 - cursor "
"b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabPointer",1117,G__TGX11_GrabPointer_6_14,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - evmask "
"k - 'Window_t' 0 - confine k - 'Cursor_t' 0 - cursor "
"b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowName",1317,G__TGX11_SetWindowName_7_14,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIconName",1078,G__TGX11_SetIconName_8_14,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClassHints",1320,G__TGX11_SetClassHints_9_14,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - className "
"C - - 0 - resourceName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMWMHints",1059,G__TGX11_SetMWMHints_0_15,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - value "
"h - 'UInt_t' 0 - funcs h - 'UInt_t' 0 - input",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMPosition",1317,G__TGX11_SetWMPosition_1_15,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMSize",875,G__TGX11_SetWMSize_2_15,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMSizeHints",1393,G__TGX11_SetWMSizeHints_3_15,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - wmin "
"h - 'UInt_t' 0 - hmin h - 'UInt_t' 0 - wmax "
"h - 'UInt_t' 0 - hmax h - 'UInt_t' 0 - winc "
"h - 'UInt_t' 0 - hinc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMState",977,G__TGX11_SetWMState_4_15,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id i 'EInitialState' - 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMTransientHint",1819,G__TGX11_SetWMTransientHint_5_15,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Window_t' 0 - main_id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawString",1029,G__TGX11_DrawString_6_15,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"C - - 0 - s i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TextWidth",933,G__TGX11_TextWidth_7_15,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"k - 'FontStruct_t' 0 - font C - - 0 - s "
"i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontProperties",1764,G__TGX11_GetFontProperties_8_15,121,-1,-1,0,3,1,1,0,
"k - 'FontStruct_t' 0 - font i - 'Int_t' 1 - max_ascent "
"i - 'Int_t' 1 - max_descent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGCValues",1050,G__TGX11_GetGCValues_9_15,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc u 'GCValues_t' - 1 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontStruct",1340,G__TGX11_GetFontStruct_0_16,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,0,"k - 'FontH_t' 0 - fh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearWindow",1119,G__TGX11_ClearWindow_1_16,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("KeysymToKeycode",1545,G__TGX11_KeysymToKeycode_2_16,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"h - 'UInt_t' 0 - keysym",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillRectangle",1308,G__TGX11_FillRectangle_3_16,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawRectangle",1315,G__TGX11_DrawRectangle_4_16,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawSegments",1236,G__TGX11_DrawSegments_5_16,121,-1,-1,0,4,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"U 'Segment_t' - 0 - seg i - 'Int_t' 0 - nseg",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectInput",1136,G__TGX11_SelectInput_6_16,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - evmask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetInputFocus",1340,G__TGX11_SetInputFocus_7_16,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrimarySelectionOwner",2485,G__TGX11_GetPrimarySelectionOwner_8_16,107,-1,G__defined_typename("Window_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ConvertPrimarySelection",2411,G__TGX11_ConvertPrimarySelection_9_16,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Time_t' 0 - when",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LookupString",1265,G__TGX11_LookupString_0_17,121,-1,-1,0,4,1,1,0,
"U 'Event_t' - 0 - event C - - 0 - buf "
"i - 'Int_t' 0 - buflen h - 'UInt_t' 1 - keysym",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPasteBuffer",1399,G__TGX11_GetPasteBuffer_1_17,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id k - 'Atom_t' 0 - atom "
"u 'TString' - 1 - text i - 'Int_t' 1 - nchar "
"b - 'Bool_t' 0 - del",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TranslateCoordinates",2089,G__TGX11_TranslateCoordinates_2_17,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - src k - 'Window_t' 0 - dest "
"i - 'Int_t' 0 - src_x i - 'Int_t' 0 - src_y "
"i - 'Int_t' 1 - dest_x i - 'Int_t' 1 - dest_y "
"k - 'Window_t' 1 - child",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowSize",1331,G__TGX11_GetWindowSize_3_17,121,-1,-1,0,5,1,1,0,
"k - 'Drawable_t' 0 - id i - 'Int_t' 1 - x "
"i - 'Int_t' 1 - y h - 'UInt_t' 1 - w "
"h - 'UInt_t' 1 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillPolygon",1135,G__TGX11_FillPolygon_4_17,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id k - 'GContext_t' 0 - gc "
"U 'Point_t' - 0 - points i - 'Int_t' 0 - npnt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryPointer",1271,G__TGX11_QueryPointer_5_17,121,-1,-1,0,8,1,1,0,
"k - 'Window_t' 0 - id k - 'Window_t' 1 - rootw "
"k - 'Window_t' 1 - childw i - 'Int_t' 1 - root_x "
"i - 'Int_t' 1 - root_y i - 'Int_t' 1 - win_x "
"i - 'Int_t' 1 - win_y h - 'UInt_t' 1 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetForeground",1351,G__TGX11_SetForeground_6_17,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc k - 'ULong_t' 0 - foreground",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipRectangles",1724,G__TGX11_SetClipRectangles_7_17,121,-1,-1,0,5,1,1,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y U 'Rectangle_t' - 0 - recs "
"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Update",611,G__TGX11_Update_8_17,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGX11_DeclFileName_9_17,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGX11_DeclFileLine_0_18,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGX11_ImplFileName_1_18,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGX11_ImplFileLine_2_18,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGX11_Class_Version_3_18,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGX11_Class_4_18,85,G__get_linked_tagnum(&G__G__X11LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGX11_Dictionary_5_18,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGX11_IsA_6_18,85,G__get_linked_tagnum(&G__G__X11LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGX11_ShowMembers_7_18,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGX11_Streamer_8_18,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TGX11",467,G__TGX11_wATGX11_9_18,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__X11() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__X11() {

   /* Setting up global variables */
   G__resetplocal();


   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__X11() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__X11LN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__X11LN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__X11LN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__X11LN_TAttLine = { "TAttLine" , 99 , -1 };
G__linked_taginfo G__G__X11LN_TAttFill = { "TAttFill" , 99 , -1 };
G__linked_taginfo G__G__X11LN_TAttText = { "TAttText" , 99 , -1 };
G__linked_taginfo G__G__X11LN_TAttMarker = { "TAttMarker" , 99 , -1 };
G__linked_taginfo G__G__X11LN_TGXW = { "TGXW" , 99 , -1 };
G__linked_taginfo G__G__X11LN_GC = { "GC" , 115 , -1 };
G__linked_taginfo G__G__X11LN_Display = { "Display" , 115 , -1 };
G__linked_taginfo G__G__X11LN_XWindow_t = { "XWindow_t" , 115 , -1 };
G__linked_taginfo G__G__X11LN_TGX11 = { "TGX11" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__X11() {
  G__G__X11LN_TClass.tagnum = -1 ;
  G__G__X11LN_TObject.tagnum = -1 ;
  G__G__X11LN_TNamed.tagnum = -1 ;
  G__G__X11LN_TAttLine.tagnum = -1 ;
  G__G__X11LN_TAttFill.tagnum = -1 ;
  G__G__X11LN_TAttText.tagnum = -1 ;
  G__G__X11LN_TAttMarker.tagnum = -1 ;
  G__G__X11LN_TGXW.tagnum = -1 ;
  G__G__X11LN_GC.tagnum = -1 ;
  G__G__X11LN_Display.tagnum = -1 ;
  G__G__X11LN_XWindow_t.tagnum = -1 ;
  G__G__X11LN_TGX11.tagnum = -1 ;
}

extern "C" void G__cpp_setup_tagtableG__X11() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__X11LN_TGX11),sizeof(TGX11),-1,0,"Interface to X11",G__setup_memvarTGX11,G__setup_memfuncTGX11);
}
extern "C" void G__cpp_setupG__X11() {
  G__check_setup_version(51111,"G__cpp_setupG__X11()");
  G__set_cpp_environmentG__X11();
  G__cpp_setup_tagtableG__X11();

  G__cpp_setup_inheritanceG__X11();

  G__cpp_setup_typetableG__X11();

  G__cpp_setup_memvarG__X11();

  G__cpp_setup_memfuncG__X11();
  G__cpp_setup_globalG__X11();
  G__cpp_setup_funcG__X11();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__X11();
  return;
}
class G__cpp_setup_initG__X11 {
  public:
    G__cpp_setup_initG__X11() { G__add_setup_func("G__X11",&G__cpp_setupG__X11); }
   ~G__cpp_setup_initG__X11() { G__remove_setup_func("G__X11"); }
};
G__cpp_setup_initG__X11 G__cpp_setup_initializerG__X11;

//
// File generated by /home/rdm/root/bin/rootcint at Mon Mar  8 12:34:58 1999.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGX11 *&obj)
{
   // Read a pointer to an object of class TGX11.

   obj = (TGX11 *) buf.ReadObject(TGX11::Class());
   return buf;
}

//______________________________________________________________________________
void TGX11::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGX11.

   TGXW::Streamer(R__b);
}

//______________________________________________________________________________
void TGX11::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGX11.

   TClass *R__cl  = TGX11::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fMaxNumberOfWindows", &fMaxNumberOfWindows);
   R__insp.Inspect(R__cl, R__parent, "*fWindows", &fWindows);
   R__insp.Inspect(R__cl, R__parent, "fCursors[18]", fCursors);
   R__insp.Inspect(R__cl, R__parent, "*fDisplay", &fDisplay);
   R__insp.Inspect(R__cl, R__parent, "fColormap", &fColormap);
   R__insp.Inspect(R__cl, R__parent, "fScreenNumber", &fScreenNumber);
   R__insp.Inspect(R__cl, R__parent, "fHasTTFonts", &fHasTTFonts);
   R__insp.Inspect(R__cl, R__parent, "fTextAlignH", &fTextAlignH);
   R__insp.Inspect(R__cl, R__parent, "fTextAlignV", &fTextAlignV);
   R__insp.Inspect(R__cl, R__parent, "fTextAlign", &fTextAlign);
   R__insp.Inspect(R__cl, R__parent, "fCharacterUpX", &fCharacterUpX);
   R__insp.Inspect(R__cl, R__parent, "fCharacterUpY", &fCharacterUpY);
   R__insp.Inspect(R__cl, R__parent, "fTextMagnitude", &fTextMagnitude);
   TGXW::ShowMembers(R__insp, R__parent);
}

