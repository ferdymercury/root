//*CMZ :  2.20/04 08/12/98  09.36.55  by  Rene Brun
//*-- Author :    Rene Brun   08/12/98
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
extern void G__cpp_setup_tagtableG__G3D();
extern void G__cpp_setup_inheritanceG__G3D();
extern void G__cpp_setup_typetableG__G3D();
extern void G__cpp_setup_memvarG__G3D();
extern void G__cpp_setup_globalG__G3D();
extern void G__cpp_setup_memfuncG__G3D();
extern void G__cpp_setup_funcG__G3D();
extern void G__set_cpp_environmentG__G3D();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TPolyLine3D.h"
#include "TPolyMarker3D.h"
#include "TGeometry.h"
#include "TMaterial.h"
#include "TMixture.h"
#include "TNode.h"
#include "TNodeDiv.h"
#include "TRotMatrix.h"
#include "TShape.h"
#include "TBRIK.h"
#include "TTRD1.h"
#include "TTRD2.h"
#include "TTUBE.h"
#include "TCONE.h"
#include "TCTUB.h"
#include "TELTU.h"
#include "TTUBS.h"
#include "TCONS.h"
#include "TTRAP.h"
#include "TPARA.h"
#include "TGTRA.h"
#include "TPCON.h"
#include "TPGON.h"
#include "TSPHE.h"
#include "TGLKernelABC.h"
#include "TPadOpenGLView.h"
#include "TPadView3D.h"
#include "TMarker3DBox.h"
#include "THelix.h"
#include "THYPE.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__G3DLN_TClass;
extern G__linked_taginfo G__G__G3DLN_TList;
extern G__linked_taginfo G__G__G3DLN_TObject;
extern G__linked_taginfo G__G__G3DLN_TString;
extern G__linked_taginfo G__G__G3DLN_TNamed;
extern G__linked_taginfo G__G__G3DLN_TVirtualPad;
extern G__linked_taginfo G__G__G3DLN_TGeometry;
extern G__linked_taginfo G__G__G3DLN_TAttLine;
extern G__linked_taginfo G__G__G3DLN__x3d_data_;
extern G__linked_taginfo G__G__G3DLN__x3d_sizeof_;
extern G__linked_taginfo G__G__G3DLN_TPolyLine3D;
extern G__linked_taginfo G__G__G3DLN_TAttMarker;
extern G__linked_taginfo G__G__G3DLN_TPolyMarker3D;
extern G__linked_taginfo G__G__G3DLN_THashList;
extern G__linked_taginfo G__G__G3DLN_TNode;
extern G__linked_taginfo G__G__G3DLN_TMaterial;
extern G__linked_taginfo G__G__G3DLN_TRotMatrix;
extern G__linked_taginfo G__G__G3DLN_TShape;
extern G__linked_taginfo G__G__G3DLN_TAttFill;
extern G__linked_taginfo G__G__G3DLN_TMixture;
extern G__linked_taginfo G__G__G3DLN_dA;
extern G__linked_taginfo G__G__G3DLN_TNodeDiv;
extern G__linked_taginfo G__G__G3DLN_TBRIK;
extern G__linked_taginfo G__G__G3DLN_TTRD1;
extern G__linked_taginfo G__G__G3DLN_TTRD2;
extern G__linked_taginfo G__G__G3DLN_TTUBE;
extern G__linked_taginfo G__G__G3DLN_TCONE;
extern G__linked_taginfo G__G__G3DLN_TTUBS;
extern G__linked_taginfo G__G__G3DLN_TCTUB;
extern G__linked_taginfo G__G__G3DLN_TELTU;
extern G__linked_taginfo G__G__G3DLN_TCONS;
extern G__linked_taginfo G__G__G3DLN_TTRAP;
extern G__linked_taginfo G__G__G3DLN_TPARA;
extern G__linked_taginfo G__G__G3DLN_TGTRA;
extern G__linked_taginfo G__G__G3DLN_TPCON;
extern G__linked_taginfo G__G__G3DLN_TPGON;
extern G__linked_taginfo G__G__G3DLN_TSPHE;
extern G__linked_taginfo G__G__G3DLN_TGLKernelABC;
extern G__linked_taginfo G__G__G3DLN_TGLViewerImp;
extern G__linked_taginfo G__G__G3DLN_TPadView3D;
extern G__linked_taginfo G__G__G3DLN_TPadOpenGLView;
extern G__linked_taginfo G__G__G3DLN_EG3D2GLmode;
extern G__linked_taginfo G__G__G3DLN_TPadOpenGLViewcLcLEDrawMode;
extern G__linked_taginfo G__G__G3DLN_TMarker3DBox;
extern G__linked_taginfo G__G__G3DLN_THelix;
extern G__linked_taginfo G__G__G3DLN_THYPE;
/********************************************************
* G__G3D.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__G3D() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TPolyLine3D.h");
  G__add_compiledheader("TPolyMarker3D.h");
  G__add_compiledheader("TGeometry.h");
  G__add_compiledheader("TMaterial.h");
  G__add_compiledheader("TMixture.h");
  G__add_compiledheader("TNode.h");
  G__add_compiledheader("TNodeDiv.h");
  G__add_compiledheader("TRotMatrix.h");
  G__add_compiledheader("TShape.h");
  G__add_compiledheader("TBRIK.h");
  G__add_compiledheader("TTRD1.h");
  G__add_compiledheader("TTRD2.h");
  G__add_compiledheader("TTUBE.h");
  G__add_compiledheader("TCONE.h");
  G__add_compiledheader("TCTUB.h");
  G__add_compiledheader("TELTU.h");
  G__add_compiledheader("TTUBS.h");
  G__add_compiledheader("TCONS.h");
  G__add_compiledheader("TTRAP.h");
  G__add_compiledheader("TPARA.h");
  G__add_compiledheader("TGTRA.h");
  G__add_compiledheader("TPCON.h");
  G__add_compiledheader("TPGON.h");
  G__add_compiledheader("TSPHE.h");
  G__add_compiledheader("TGLKernelABC.h");
  G__add_compiledheader("TPadOpenGLView.h");
  G__add_compiledheader("TPadView3D.h");
  G__add_compiledheader("TMarker3DBox.h");
  G__add_compiledheader("THelix.h");
  G__add_compiledheader("THYPE.h");
}
extern "C" int G__cpp_dllrevG__G3D() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TGeometry */
static int G__TGeometry_TGeometry_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGeometry *p=NULL;
   if(G__getaryconstruct()) p=new TGeometry[G__getaryconstruct()];
   else                    p=new TGeometry;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TGeometry);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_TGeometry_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGeometry *p=NULL;
      p = new TGeometry((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TGeometry);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_Browse_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_cd_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->cd((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->cd();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_Draw_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetBomb_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGeometry*)(G__getstructoffset()))->GetBomb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetListOfShapes_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetListOfShapes());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetListOfNodes_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetListOfNodes());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetListOfMaterials_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetListOfMaterials());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetListOfMatrices_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetListOfMatrices());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetCurrentNode_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetCurrentNode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetMaterial_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetMaterial((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetMaterialByNumber_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetMaterialByNumber((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetNode_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetNode((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetShape_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetShape((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetShapeByNumber_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetShapeByNumber((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetRotMatrix_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetRotMatrix((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_GetRotMatrixByNumber_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->GetRotMatrixByNumber((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_IsFolder_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGeometry*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_ls_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_Node_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 8:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Node(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(const Text_t*)G__int(libp->para[6]),(Option_t*)G__int(libp->para[7]));
      break;
   case 7:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Node(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(const Text_t*)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Node((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Node((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Node((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Node((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_RecursiveRemove_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_SetBomb_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->SetBomb((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->SetBomb();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_SetCurrentNode_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->SetCurrentNode((TNode*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_DeclFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGeometry*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_DeclFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGeometry*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_ImplFileName_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGeometry*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_ImplFileLine_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGeometry*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_Class_Version_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGeometry*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_Class_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_Dictionary_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_IsA_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGeometry*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_ShowMembers_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGeometry_Streamer_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGeometry*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGeometry_TGeometry_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGeometry *p;
   if(1!=libp->paran) ;
   p=new TGeometry(*(TGeometry*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TGeometry);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGeometry_wATGeometry_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGeometry *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGeometry *)((G__getstructoffset())+sizeof(TGeometry)*i);
   else  delete (TGeometry *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPolyLine3D */
static int G__TPolyLine3D_TPolyLine3D_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine3D *p=NULL;
   if(G__getaryconstruct()) p=new TPolyLine3D[G__getaryconstruct()];
   else                    p=new TPolyLine3D;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_TPolyLine3D_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine3D *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TPolyLine3D((Int_t)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TPolyLine3D((Int_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_TPolyLine3D_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine3D *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TPolyLine3D(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TPolyLine3D((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_TPolyLine3D_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine3D *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TPolyLine3D(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Option_t*)G__int(libp->para[4]));
      break;
   case 4:
      p = new TPolyLine3D(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_TPolyLine3D_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyLine3D *p=NULL;
      p = new TPolyLine3D(*(TPolyLine3D*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Copy_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_DistancetoPrimitive_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine3D*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Draw_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_DrawPolyLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_ExecuteEvent_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_GetLastPoint_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine3D*)(G__getstructoffset()))->GetLastPoint());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_GetN_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine3D*)(G__getstructoffset()))->GetN());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_GetP_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPolyLine3D*)(G__getstructoffset()))->GetP());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_GetOption_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyLine3D*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Is3D_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPolyLine3D*)(G__getstructoffset()))->Is3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_ls_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Paint_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_PaintPolyLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Print_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_SavePrimitive_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_SetNextPoint_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->SetNextPoint((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_SetOption_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->SetOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->SetOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_SetPoint_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->SetPoint((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_SetPolyLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->SetPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->SetPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->SetPolyLine((Int_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Sizeof3D_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_DeclFileName_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyLine3D*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_DeclFileLine_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine3D*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_ImplFileName_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyLine3D*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_ImplFileLine_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyLine3D*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Class_Version_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPolyLine3D*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Class_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPolyLine3D*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Dictionary_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_IsA_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPolyLine3D*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_ShowMembers_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyLine3D_Streamer_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyLine3D*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPolyLine3D_wATPolyLine3D_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPolyLine3D *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPolyLine3D *)((G__getstructoffset())+sizeof(TPolyLine3D)*i);
   else  delete (TPolyLine3D *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPolyMarker3D */
static int G__TPolyMarker3D_TPolyMarker3D_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyMarker3D *p=NULL;
   if(G__getaryconstruct()) p=new TPolyMarker3D[G__getaryconstruct()];
   else                    p=new TPolyMarker3D;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_TPolyMarker3D_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyMarker3D *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TPolyMarker3D(
(Int_t)G__int(libp->para[0]),(Marker_t)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TPolyMarker3D((Int_t)G__int(libp->para[0]),(Marker_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TPolyMarker3D((Int_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_TPolyMarker3D_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyMarker3D *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TPolyMarker3D(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Marker_t)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TPolyMarker3D(
(Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Marker_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TPolyMarker3D((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_TPolyMarker3D_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPolyMarker3D *p=NULL;
      p = new TPolyMarker3D(*(TPolyMarker3D*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Copy_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_DistancetoPrimitive_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyMarker3D*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Draw_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_DrawPolyMarker_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Marker_t)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Marker_t)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_ExecuteEvent_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_GetN_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyMarker3D*)(G__getstructoffset()))->GetN());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_GetP_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPolyMarker3D*)(G__getstructoffset()))->GetP());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_GetOption_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyMarker3D*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Is3D_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPolyMarker3D*)(G__getstructoffset()))->Is3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_ls_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Paint_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_PaintPolyMarker_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->PaintPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Marker_t)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->PaintPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Marker_t)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Print_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_SavePrimitive_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_SetPoint_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->SetPoint((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_SetPolyMarker_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->SetPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Marker_t)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->SetPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Marker_t)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Sizeof3D_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_DeclFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyMarker3D*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_DeclFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyMarker3D*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_ImplFileName_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPolyMarker3D*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_ImplFileLine_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPolyMarker3D*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Class_Version_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPolyMarker3D*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Class_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPolyMarker3D*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Dictionary_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_IsA_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPolyMarker3D*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_ShowMembers_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPolyMarker3D_Streamer_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPolyMarker3D*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPolyMarker3D_wATPolyMarker3D_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPolyMarker3D *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPolyMarker3D *)((G__getstructoffset())+sizeof(TPolyMarker3D)*i);
   else  delete (TPolyMarker3D *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TNode */
static int G__TNode_TNode_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TNode *p=NULL;
   if(G__getaryconstruct()) p=new TNode[G__getaryconstruct()];
   else                    p=new TNode;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TNode);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_TNode_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TNode *p=NULL;
   switch(libp->paran) {
   case 8:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(const Text_t*)G__int(libp->para[6]),(Option_t*)G__int(libp->para[7]));
      break;
   case 7:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(const Text_t*)G__int(libp->para[6]));
      break;
   case 6:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TNode);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_TNode_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TNode *p=NULL;
   switch(libp->paran) {
   case 8:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(TShape*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(TRotMatrix*)G__int(libp->para[6]),(Option_t*)G__int(libp->para[7]));
      break;
   case 7:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(TShape*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(TRotMatrix*)G__int(libp->para[6]));
      break;
   case 6:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(TShape*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(TShape*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]));
      break;
   case 4:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(TShape*)G__int(libp->para[2]),(Double_t)G__double(libp->para[3]));
      break;
   case 3:
      p = new TNode(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(TShape*)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TNode);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Browse_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_BuildListOfNodes_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->BuildListOfNodes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_cd_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->cd((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->cd();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_DistancetoPrimitive_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNode*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Draw_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_DrawOnly_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->DrawOnly((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->DrawOnly();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_ExecuteEvent_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetListOfNodes_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNode*)(G__getstructoffset()))->GetListOfNodes());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetMatrix_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNode*)(G__getstructoffset()))->GetMatrix());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetNode_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNode*)(G__getstructoffset()))->GetNode((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetObjectInfo_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNode*)(G__getstructoffset()))->GetObjectInfo((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetOption_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNode*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetParent_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNode*)(G__getstructoffset()))->GetParent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetShape_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNode*)(G__getstructoffset()))->GetShape());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetVisibility_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNode*)(G__getstructoffset()))->GetVisibility());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetX_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TNode*)(G__getstructoffset()))->GetX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetY_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TNode*)(G__getstructoffset()))->GetY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_GetZ_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TNode*)(G__getstructoffset()))->GetZ());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_ImportShapeAttributes_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->ImportShapeAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_IsFolder_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TNode*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Is3D_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TNode*)(G__getstructoffset()))->Is3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Local2Master_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Local2Master((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Local2Master_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Local2Master((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_ls_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Paint_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_RecursiveRemove_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_SetMatrix_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetMatrix((TRotMatrix*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetMatrix();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_SetName_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetName((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_SetParent_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetParent((TNode*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_SetPosition_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetPosition((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetPosition((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetPosition((Double_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetPosition();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_SetVisibility_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetVisibility((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->SetVisibility();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Sizeof3D_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_UpdateMatrix_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->UpdateMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_UpdateTempMatrix_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->UpdateTempMatrix(
(Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t*)G__int(libp->para[5])
,(Double_t*)G__int(libp->para[6]),(Double_t*)G__int(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_DeclFileName_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNode*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_DeclFileLine_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNode*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_ImplFileName_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNode*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_ImplFileLine_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNode*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Class_Version_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TNode*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Class_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNode*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Dictionary_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_IsA_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNode*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_ShowMembers_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNode_Streamer_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNode*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TNode_TNode_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TNode *p;
   if(1!=libp->paran) ;
   p=new TNode(*(TNode*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TNode);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TNode_wATNode_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TNode *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TNode *)((G__getstructoffset())+sizeof(TNode)*i);
   else  delete (TNode *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMaterial */
static int G__TMaterial_TMaterial_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMaterial *p=NULL;
   if(G__getaryconstruct()) p=new TMaterial[G__getaryconstruct()];
   else                    p=new TMaterial;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMaterial);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_TMaterial_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMaterial *p=NULL;
      p = new TMaterial(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMaterial);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_TMaterial_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMaterial *p=NULL;
      p = new TMaterial(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMaterial);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_GetNumber_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMaterial*)(G__getstructoffset()))->GetNumber());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_GetA_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMaterial*)(G__getstructoffset()))->GetA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_GetZ_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMaterial*)(G__getstructoffset()))->GetZ());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_GetDensity_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMaterial*)(G__getstructoffset()))->GetDensity());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_GetRadLength_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMaterial*)(G__getstructoffset()))->GetRadLength());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_GetInterLength_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMaterial*)(G__getstructoffset()))->GetInterLength());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_DeclFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMaterial*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_DeclFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMaterial*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_ImplFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMaterial*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_ImplFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMaterial*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_Class_Version_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMaterial*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_Class_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMaterial*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_Dictionary_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMaterial*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_IsA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMaterial*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_ShowMembers_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMaterial*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMaterial_Streamer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMaterial*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMaterial_TMaterial_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMaterial *p;
   if(1!=libp->paran) ;
   p=new TMaterial(*(TMaterial*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMaterial);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMaterial_wATMaterial_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMaterial *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMaterial *)((G__getstructoffset())+sizeof(TMaterial)*i);
   else  delete (TMaterial *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TRotMatrix */
static int G__TRotMatrix_TRotMatrix_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TRotMatrix *p=NULL;
   if(G__getaryconstruct()) p=new TRotMatrix[G__getaryconstruct()];
   else                    p=new TRotMatrix;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_TRotMatrix_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TRotMatrix *p=NULL;
      p = new TRotMatrix(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Double_t*)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_TRotMatrix_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TRotMatrix *p=NULL;
      p = new TRotMatrix(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_TRotMatrix_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TRotMatrix *p=NULL;
      p = new TRotMatrix(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Double_t)G__double(libp->para[7]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_Determinant_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TRotMatrix*)(G__getstructoffset()))->Determinant());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_GetMatrix_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,68,(long)((TRotMatrix*)(G__getstructoffset()))->GetMatrix());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_GetNumber_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRotMatrix*)(G__getstructoffset()))->GetNumber());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_GetType_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRotMatrix*)(G__getstructoffset()))->GetType());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_GetTheta_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TRotMatrix*)(G__getstructoffset()))->GetTheta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_GetPhi_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TRotMatrix*)(G__getstructoffset()))->GetPhi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_GetPsi_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TRotMatrix*)(G__getstructoffset()))->GetPsi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_GetGLMatrix_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,68,(long)((TRotMatrix*)(G__getstructoffset()))->GetGLMatrix((Double_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_IsReflection_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TRotMatrix*)(G__getstructoffset()))->IsReflection());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_SetMatrix_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRotMatrix*)(G__getstructoffset()))->SetMatrix((const Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_SetName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRotMatrix*)(G__getstructoffset()))->SetName((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_DeclFileName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRotMatrix*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_DeclFileLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRotMatrix*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_ImplFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRotMatrix*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_ImplFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRotMatrix*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_Class_Version_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TRotMatrix*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_Class_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRotMatrix*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_Dictionary_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRotMatrix*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_IsA_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRotMatrix*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_ShowMembers_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRotMatrix*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRotMatrix_Streamer_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRotMatrix*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TRotMatrix_TRotMatrix_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TRotMatrix *p;
   if(1!=libp->paran) ;
   p=new TRotMatrix(*(TRotMatrix*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TRotMatrix_wATRotMatrix_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TRotMatrix *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TRotMatrix *)((G__getstructoffset())+sizeof(TRotMatrix)*i);
   else  delete (TRotMatrix *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TShape */
static int G__TShape_TShape_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TShape *p=NULL;
   if(G__getaryconstruct()) p=new TShape[G__getaryconstruct()];
   else                    p=new TShape;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TShape);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_TShape_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TShape *p=NULL;
      p = new TShape(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TShape);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_Is3D_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TShape*)(G__getstructoffset()))->Is3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_GetMaterial_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TShape*)(G__getstructoffset()))->GetMaterial());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_GetNumber_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TShape*)(G__getstructoffset()))->GetNumber());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_GetVisibility_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TShape*)(G__getstructoffset()))->GetVisibility());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_Paint_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_PaintGLPoints_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->PaintGLPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_PaintShape_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->PaintShape((X3DBuffer*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_SetName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->SetName((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_SetVisibility_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->SetVisibility((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TShape*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TShape*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TShape*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TShape*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TShape*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TShape*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TShape*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TShape_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TShape*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TShape_TShape_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TShape *p;
   if(1!=libp->paran) ;
   p=new TShape(*(TShape*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TShape);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TShape_wATShape_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TShape *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TShape *)((G__getstructoffset())+sizeof(TShape)*i);
   else  delete (TShape *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMixture */
static int G__TMixture_TMixture_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMixture *p=NULL;
   if(G__getaryconstruct()) p=new TMixture[G__getaryconstruct()];
   else                    p=new TMixture;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMixture);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_TMixture_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMixture *p=NULL;
      p = new TMixture(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMixture);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_DefineElement_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMixture*)(G__getstructoffset()))->DefineElement((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_GetNmixt_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMixture*)(G__getstructoffset()))->GetNmixt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_GetAmixt_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TMixture*)(G__getstructoffset()))->GetAmixt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_GetZmixt_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TMixture*)(G__getstructoffset()))->GetZmixt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_GetWmixt_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TMixture*)(G__getstructoffset()))->GetWmixt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMixture*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMixture*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMixture*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMixture*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMixture*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMixture*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMixture*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMixture*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMixture*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMixture_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMixture*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMixture_TMixture_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMixture *p;
   if(1!=libp->paran) ;
   p=new TMixture(*(TMixture*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMixture);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMixture_wATMixture_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMixture *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMixture *)((G__getstructoffset())+sizeof(TMixture)*i);
   else  delete (TMixture *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TNodeDiv */
static int G__TNodeDiv_TNodeDiv_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TNodeDiv *p=NULL;
   if(G__getaryconstruct()) p=new TNodeDiv[G__getaryconstruct()];
   else                    p=new TNodeDiv;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_TNodeDiv_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TNodeDiv *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TNodeDiv(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      p = new TNodeDiv(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_TNodeDiv_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TNodeDiv *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TNodeDiv(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(TShape*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Option_t*)G__int(libp->para[5]));
      break;
   case 5:
      p = new TNodeDiv(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(TShape*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_Draw_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNodeDiv*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNodeDiv*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_Paint_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNodeDiv*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNodeDiv*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNodeDiv*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNodeDiv*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNodeDiv*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNodeDiv*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TNodeDiv*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNodeDiv*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNodeDiv*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNodeDiv*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNodeDiv*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNodeDiv_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNodeDiv*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TNodeDiv_TNodeDiv_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TNodeDiv *p;
   if(1!=libp->paran) ;
   p=new TNodeDiv(*(TNodeDiv*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TNodeDiv_wATNodeDiv_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TNodeDiv *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TNodeDiv *)((G__getstructoffset())+sizeof(TNodeDiv)*i);
   else  delete (TNodeDiv *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TBRIK */
static int G__TBRIK_TBRIK_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBRIK *p=NULL;
   if(G__getaryconstruct()) p=new TBRIK[G__getaryconstruct()];
   else                    p=new TBRIK;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TBRIK);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_TBRIK_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBRIK *p=NULL;
      p = new TBRIK(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TBRIK);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_DistancetoPrimitive_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBRIK*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_GetDx_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBRIK*)(G__getstructoffset()))->GetDx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_GetDy_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBRIK*)(G__getstructoffset()))->GetDy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_GetDz_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBRIK*)(G__getstructoffset()))->GetDz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_Paint_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBRIK*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_PaintGLPoints_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBRIK*)(G__getstructoffset()))->PaintGLPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_SetPoints_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBRIK*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_Sizeof3D_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBRIK*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBRIK*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBRIK*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBRIK*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBRIK*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBRIK*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBRIK*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBRIK*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBRIK*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBRIK*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBRIK_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBRIK*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TBRIK_TBRIK_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TBRIK *p;
   if(1!=libp->paran) ;
   p=new TBRIK(*(TBRIK*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TBRIK);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBRIK_wATBRIK_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TBRIK *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TBRIK *)((G__getstructoffset())+sizeof(TBRIK)*i);
   else  delete (TBRIK *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TTRD1 */
static int G__TTRD1_TTRD1_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTRD1 *p=NULL;
   if(G__getaryconstruct()) p=new TTRD1[G__getaryconstruct()];
   else                    p=new TTRD1;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRD1);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_TTRD1_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTRD1 *p=NULL;
      p = new TTRD1(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRD1);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_GetDx2_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRD1*)(G__getstructoffset()))->GetDx2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_SetPoints_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRD1*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_DeclFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTRD1*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_DeclFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTRD1*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_ImplFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTRD1*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_ImplFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTRD1*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_Class_Version_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TTRD1*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_Class_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTRD1*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_Dictionary_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRD1*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_IsA_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTRD1*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_ShowMembers_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRD1*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD1_Streamer_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRD1*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TTRD1_TTRD1_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TTRD1 *p;
   if(1!=libp->paran) ;
   p=new TTRD1(*(TTRD1*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRD1);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TTRD1_wATTRD1_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TTRD1 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TTRD1 *)((G__getstructoffset())+sizeof(TTRD1)*i);
   else  delete (TTRD1 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TTRD2 */
static int G__TTRD2_TTRD2_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTRD2 *p=NULL;
   if(G__getaryconstruct()) p=new TTRD2[G__getaryconstruct()];
   else                    p=new TTRD2;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRD2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_TTRD2_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTRD2 *p=NULL;
      p = new TTRD2(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRD2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_GetDx2_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRD2*)(G__getstructoffset()))->GetDx2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_GetDy2_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRD2*)(G__getstructoffset()))->GetDy2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_SetPoints_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRD2*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTRD2*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTRD2*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTRD2*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTRD2*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TTRD2*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTRD2*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRD2*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTRD2*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRD2*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRD2_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRD2*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TTRD2_TTRD2_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TTRD2 *p;
   if(1!=libp->paran) ;
   p=new TTRD2(*(TTRD2*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRD2);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TTRD2_wATTRD2_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TTRD2 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TTRD2 *)((G__getstructoffset())+sizeof(TTRD2)*i);
   else  delete (TTRD2 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TTUBE */
static int G__TTUBE_TTUBE_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTUBE *p=NULL;
   if(G__getaryconstruct()) p=new TTUBE[G__getaryconstruct()];
   else                    p=new TTUBE;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTUBE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_TTUBE_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTUBE *p=NULL;
   switch(libp->paran) {
   case 7:
      p = new TTUBE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      break;
   case 6:
      p = new TTUBE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTUBE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_TTUBE_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTUBE *p=NULL;
      p = new TTUBE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTUBE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_DistancetoPrimitive_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTUBE*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_GetRmin_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTUBE*)(G__getstructoffset()))->GetRmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_GetRmax_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTUBE*)(G__getstructoffset()))->GetRmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_GetDz_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTUBE*)(G__getstructoffset()))->GetDz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_GetNdiv_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTUBE*)(G__getstructoffset()))->GetNdiv());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_GetAspectRatio_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTUBE*)(G__getstructoffset()))->GetAspectRatio());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_GetNumberOfDivisions_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTUBE*)(G__getstructoffset()))->GetNumberOfDivisions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_Paint_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_SetNumberOfDivisions_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->SetNumberOfDivisions((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_SetPoints_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_SetAspectRatio_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->SetAspectRatio((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->SetAspectRatio();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_Sizeof3D_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_DeclFileName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTUBE*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_DeclFileLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTUBE*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_ImplFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTUBE*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_ImplFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTUBE*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_Class_Version_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TTUBE*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_Class_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTUBE*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_Dictionary_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_IsA_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTUBE*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_ShowMembers_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBE_Streamer_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBE*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TTUBE_TTUBE_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TTUBE *p;
   if(1!=libp->paran) ;
   p=new TTUBE(*(TTUBE*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTUBE);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TTUBE_wATTUBE_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TTUBE *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TTUBE *)((G__getstructoffset())+sizeof(TTUBE)*i);
   else  delete (TTUBE *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TCONE */
static int G__TCONE_TCONE_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCONE *p=NULL;
   if(G__getaryconstruct()) p=new TCONE[G__getaryconstruct()];
   else                    p=new TCONE;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCONE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_TCONE_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCONE *p=NULL;
      p = new TCONE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCONE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_TCONE_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCONE *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TCONE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      p = new TCONE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCONE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_GetRmin2_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TCONE*)(G__getstructoffset()))->GetRmin2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_GetRmax2_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TCONE*)(G__getstructoffset()))->GetRmax2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_SetPoints_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCONE*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCONE*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCONE*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCONE*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCONE*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TCONE*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCONE*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCONE*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCONE*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCONE*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONE_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCONE*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TCONE_TCONE_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TCONE *p;
   if(1!=libp->paran) ;
   p=new TCONE(*(TCONE*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCONE);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TCONE_wATCONE_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TCONE *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TCONE *)((G__getstructoffset())+sizeof(TCONE)*i);
   else  delete (TCONE *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TTUBS */
static int G__TTUBS_TTUBS_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTUBS *p=NULL;
   if(G__getaryconstruct()) p=new TTUBS[G__getaryconstruct()];
   else                    p=new TTUBS;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTUBS);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_TTUBS_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTUBS *p=NULL;
      p = new TTUBS(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTUBS);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_TTUBS_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTUBS *p=NULL;
      p = new TTUBS(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTUBS);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_DistancetoPrimitive_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTUBS*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_GetPhi1_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTUBS*)(G__getstructoffset()))->GetPhi1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_GetPhi2_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTUBS*)(G__getstructoffset()))->GetPhi2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_Paint_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBS*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_SetPoints_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBS*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_Sizeof3D_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBS*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTUBS*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTUBS*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTUBS*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTUBS*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TTUBS*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTUBS*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBS*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTUBS*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBS*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTUBS_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTUBS*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TTUBS_TTUBS_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TTUBS *p;
   if(1!=libp->paran) ;
   p=new TTUBS(*(TTUBS*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTUBS);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TTUBS_wATTUBS_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TTUBS *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TTUBS *)((G__getstructoffset())+sizeof(TTUBS)*i);
   else  delete (TTUBS *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TCTUB */
static int G__TCTUB_TCTUB_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCTUB *p=NULL;
   if(G__getaryconstruct()) p=new TCTUB[G__getaryconstruct()];
   else                    p=new TCTUB;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCTUB);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_TCTUB_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCTUB *p=NULL;
      p = new TCTUB(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7])
,(Float_t)G__double(libp->para[8]),(Float_t)G__double(libp->para[9])
,(Float_t)G__double(libp->para[10]),(Float_t)G__double(libp->para[11])
,(Float_t)G__double(libp->para[12]),(Float_t)G__double(libp->para[13]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCTUB);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCTUB*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCTUB*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCTUB*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCTUB*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TCTUB*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCTUB*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCTUB*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCTUB*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCTUB*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCTUB_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCTUB*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TCTUB_TCTUB_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TCTUB *p;
   if(1!=libp->paran) ;
   p=new TCTUB(*(TCTUB*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCTUB);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TCTUB_wATCTUB_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TCTUB *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TCTUB *)((G__getstructoffset())+sizeof(TCTUB)*i);
   else  delete (TCTUB *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TELTU */
static int G__TELTU_TELTU_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TELTU *p=NULL;
   if(G__getaryconstruct()) p=new TELTU[G__getaryconstruct()];
   else                    p=new TELTU;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TELTU);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_TELTU_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TELTU *p=NULL;
      p = new TELTU(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TELTU);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TELTU*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TELTU*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TELTU*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TELTU*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TELTU*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TELTU*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TELTU*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TELTU*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TELTU*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TELTU_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TELTU*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TELTU_TELTU_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TELTU *p;
   if(1!=libp->paran) ;
   p=new TELTU(*(TELTU*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TELTU);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TELTU_wATELTU_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TELTU *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TELTU *)((G__getstructoffset())+sizeof(TELTU)*i);
   else  delete (TELTU *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TCONS */
static int G__TCONS_TCONS_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCONS *p=NULL;
   if(G__getaryconstruct()) p=new TCONS[G__getaryconstruct()];
   else                    p=new TCONS;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCONS);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_TCONS_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCONS *p=NULL;
      p = new TCONS(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7])
,(Float_t)G__double(libp->para[8]),(Float_t)G__double(libp->para[9]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCONS);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_TCONS_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCONS *p=NULL;
   switch(libp->paran) {
   case 8:
      p = new TCONS(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7]));
      break;
   case 7:
      p = new TCONS(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCONS);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_GetRmin2_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TCONS*)(G__getstructoffset()))->GetRmin2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_GetRmax2_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TCONS*)(G__getstructoffset()))->GetRmax2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_SetPoints_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCONS*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCONS*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCONS*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCONS*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCONS*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TCONS*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCONS*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCONS*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCONS*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCONS*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCONS_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCONS*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TCONS_TCONS_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TCONS *p;
   if(1!=libp->paran) ;
   p=new TCONS(*(TCONS*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TCONS);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TCONS_wATCONS_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TCONS *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TCONS *)((G__getstructoffset())+sizeof(TCONS)*i);
   else  delete (TCONS *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TTRAP */
static int G__TTRAP_TTRAP_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTRAP *p=NULL;
   if(G__getaryconstruct()) p=new TTRAP[G__getaryconstruct()];
   else                    p=new TTRAP;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRAP);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_TTRAP_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TTRAP *p=NULL;
      p = new TTRAP(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7])
,(Float_t)G__double(libp->para[8]),(Float_t)G__double(libp->para[9])
,(Float_t)G__double(libp->para[10]),(Float_t)G__double(libp->para[11])
,(Float_t)G__double(libp->para[12]),(Float_t)G__double(libp->para[13]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRAP);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_GetH1_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRAP*)(G__getstructoffset()))->GetH1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_GetBl1_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRAP*)(G__getstructoffset()))->GetBl1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_GetTl1_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRAP*)(G__getstructoffset()))->GetTl1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_GetAlpha1_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRAP*)(G__getstructoffset()))->GetAlpha1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_GetH2_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRAP*)(G__getstructoffset()))->GetH2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_GetBl2_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRAP*)(G__getstructoffset()))->GetBl2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_GetTl2_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRAP*)(G__getstructoffset()))->GetTl2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_GetAlpha2_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TTRAP*)(G__getstructoffset()))->GetAlpha2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_SetPoints_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRAP*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTRAP*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTRAP*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTRAP*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTRAP*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TTRAP*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTRAP*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRAP*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTRAP*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRAP*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTRAP_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTRAP*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TTRAP_TTRAP_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TTRAP *p;
   if(1!=libp->paran) ;
   p=new TTRAP(*(TTRAP*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TTRAP);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TTRAP_wATTRAP_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TTRAP *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TTRAP *)((G__getstructoffset())+sizeof(TTRAP)*i);
   else  delete (TTRAP *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPARA */
static int G__TPARA_TPARA_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPARA *p=NULL;
   if(G__getaryconstruct()) p=new TPARA[G__getaryconstruct()];
   else                    p=new TPARA;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPARA);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_TPARA_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPARA *p=NULL;
      p = new TPARA(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7])
,(Float_t)G__double(libp->para[8]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPARA);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_GetAlpha_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPARA*)(G__getstructoffset()))->GetAlpha());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_GetTheta_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPARA*)(G__getstructoffset()))->GetTheta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_GetPhi_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPARA*)(G__getstructoffset()))->GetPhi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_SetPoints_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPARA*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPARA*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPARA*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPARA*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPARA*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPARA*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPARA*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPARA*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPARA*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPARA*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPARA_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPARA*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TPARA_TPARA_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TPARA *p;
   if(1!=libp->paran) ;
   p=new TPARA(*(TPARA*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPARA);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPARA_wATPARA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPARA *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPARA *)((G__getstructoffset())+sizeof(TPARA)*i);
   else  delete (TPARA *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGTRA */
static int G__TGTRA_TGTRA_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTRA *p=NULL;
   if(G__getaryconstruct()) p=new TGTRA[G__getaryconstruct()];
   else                    p=new TGTRA;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TGTRA);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_TGTRA_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGTRA *p=NULL;
      p = new TGTRA(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7])
,(Float_t)G__double(libp->para[8]),(Float_t)G__double(libp->para[9])
,(Float_t)G__double(libp->para[10]),(Float_t)G__double(libp->para[11])
,(Float_t)G__double(libp->para[12]),(Float_t)G__double(libp->para[13])
,(Float_t)G__double(libp->para[14]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TGTRA);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetTwist_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetTwist());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetH1_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetH1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetBl1_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetBl1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetTl1_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetTl1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetAlpha1_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetAlpha1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetH2_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetH2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetBl2_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetBl2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetTl2_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetTl2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_GetAlpha2_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGTRA*)(G__getstructoffset()))->GetAlpha2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_SetPoints_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTRA*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_DeclFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTRA*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_DeclFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTRA*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_ImplFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGTRA*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_ImplFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGTRA*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_Class_Version_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGTRA*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_Class_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTRA*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_Dictionary_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTRA*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_IsA_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGTRA*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_ShowMembers_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTRA*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGTRA_Streamer_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGTRA*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGTRA_TGTRA_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGTRA *p;
   if(1!=libp->paran) ;
   p=new TGTRA(*(TGTRA*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TGTRA);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGTRA_wATGTRA_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGTRA *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGTRA *)((G__getstructoffset())+sizeof(TGTRA)*i);
   else  delete (TGTRA *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPCON */
static int G__TPCON_TPCON_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPCON *p=NULL;
   if(G__getaryconstruct()) p=new TPCON[G__getaryconstruct()];
   else                    p=new TPCON;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPCON);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_TPCON_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPCON *p=NULL;
      p = new TPCON(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Int_t)G__int(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPCON);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_DefineSection_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPCON*)(G__getstructoffset()))->DefineSection((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_DistancetoPrimitive_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPCON*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_GetNumberOfDivisions_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPCON*)(G__getstructoffset()))->GetNumberOfDivisions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_GetPhi1_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPCON*)(G__getstructoffset()))->GetPhi1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_GetDhi1_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPCON*)(G__getstructoffset()))->GetDhi1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_GetNz_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPCON*)(G__getstructoffset()))->GetNz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_GetRmin_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPCON*)(G__getstructoffset()))->GetRmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_GetRmax_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPCON*)(G__getstructoffset()))->GetRmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_GetDz_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TPCON*)(G__getstructoffset()))->GetDz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_GetNdiv_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPCON*)(G__getstructoffset()))->GetNdiv());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_Paint_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPCON*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_SetNumberOfDivisions_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPCON*)(G__getstructoffset()))->SetNumberOfDivisions((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_SetPoints_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPCON*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_Sizeof3D_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPCON*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_DeclFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPCON*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_DeclFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPCON*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_ImplFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPCON*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_ImplFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPCON*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_Class_Version_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPCON*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_Class_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPCON*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_Dictionary_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPCON*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_IsA_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPCON*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_ShowMembers_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPCON*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPCON_Streamer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPCON*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TPCON_TPCON_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TPCON *p;
   if(1!=libp->paran) ;
   p=new TPCON(*(TPCON*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPCON);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPCON_wATPCON_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPCON *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPCON *)((G__getstructoffset())+sizeof(TPCON)*i);
   else  delete (TPCON *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPGON */
static int G__TPGON_TPGON_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPGON *p=NULL;
   if(G__getaryconstruct()) p=new TPGON[G__getaryconstruct()];
   else                    p=new TPGON;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPGON);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_TPGON_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPGON *p=NULL;
      p = new TPGON(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPGON);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_DeclFileName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPGON*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_DeclFileLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPGON*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_ImplFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPGON*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_ImplFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPGON*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_Class_Version_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPGON*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_Class_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPGON*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_Dictionary_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPGON*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_IsA_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPGON*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_ShowMembers_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPGON*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPGON_Streamer_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPGON*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TPGON_TPGON_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TPGON *p;
   if(1!=libp->paran) ;
   p=new TPGON(*(TPGON*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPGON);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPGON_wATPGON_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPGON *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPGON *)((G__getstructoffset())+sizeof(TPGON)*i);
   else  delete (TPGON *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSPHE */
static int G__TSPHE_TSPHE_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSPHE *p=NULL;
   if(G__getaryconstruct()) p=new TSPHE[G__getaryconstruct()];
   else                    p=new TSPHE;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TSPHE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_TSPHE_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSPHE *p=NULL;
      p = new TSPHE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7])
,(Float_t)G__double(libp->para[8]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TSPHE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_TSPHE_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSPHE *p=NULL;
      p = new TSPHE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TSPHE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_DistancetoPrimitive_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSPHE*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_GetRmin_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSPHE*)(G__getstructoffset()))->GetRmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_GetRmax_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSPHE*)(G__getstructoffset()))->GetRmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_GetThemin_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSPHE*)(G__getstructoffset()))->GetThemin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_GetThemax_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSPHE*)(G__getstructoffset()))->GetThemax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_GetPhimin_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSPHE*)(G__getstructoffset()))->GetPhimin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_GetPhimax_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSPHE*)(G__getstructoffset()))->GetPhimax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_GetAspectRatio_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TSPHE*)(G__getstructoffset()))->GetAspectRatio());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_GetNumberOfDivisions_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSPHE*)(G__getstructoffset()))->GetNumberOfDivisions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_Paint_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_SetAspectRatio_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->SetAspectRatio((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->SetAspectRatio();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_SetEllipse_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->SetEllipse((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_SetNumberOfDivisions_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->SetNumberOfDivisions((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_SetPoints_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_Sizeof3D_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_DeclFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSPHE*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_DeclFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSPHE*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_ImplFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSPHE*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_ImplFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSPHE*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_Class_Version_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSPHE*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_Class_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSPHE*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_Dictionary_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_IsA_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSPHE*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_ShowMembers_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSPHE_Streamer_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSPHE*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TSPHE_TSPHE_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TSPHE *p;
   if(1!=libp->paran) ;
   p=new TSPHE(*(TSPHE*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TSPHE);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSPHE_wATSPHE_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSPHE *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSPHE *)((G__getstructoffset())+sizeof(TSPHE)*i);
   else  delete (TSPHE *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGLKernelABC */
static int G__TGLKernelABC_TGLKernelABC_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGLKernelABC *p=NULL;
   if(G__getaryconstruct()) p=new TGLKernelABC[G__getaryconstruct()];
   else                    p=new TGLKernelABC;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TGLKernelABC);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_AddRotation_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->AddRotation((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_BeginGLCmd_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->BeginGLCmd((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_ClearColor_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->ClearColor((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_ClearGLColor_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->ClearGLColor((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_ClearGL_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->ClearGL((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_CreateGLLists_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLKernelABC*)(G__getstructoffset()))->CreateGLLists((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_CreateGLViewerImp_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLKernelABC*)(G__getstructoffset()))->CreateGLViewerImp((TPadOpenGLView*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_CreatePadGLView_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGLKernelABC*)(G__getstructoffset()))->CreatePadGLView((TVirtualPad*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_DeleteGLLists_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->DeleteGLLists((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_DisableGL_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->DisableGL((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_EnableGL_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->EnableGL((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_EndGLList_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->EndGLList();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_EndGLCmd_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->EndGLCmd();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_FlushGL_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->FlushGL();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_FrontGLFace_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->FrontGLFace((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_GetGL_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->GetGL((EG3D2GLmode)G__int(libp->para[0]),(Bool_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_GetGL_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->GetGL((EG3D2GLmode)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_GetGL_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->GetGL((EG3D2GLmode)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_GetGL_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->GetGL((EG3D2GLmode)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_GetGLError_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGLKernelABC*)(G__getstructoffset()))->GetGLError());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_GetRootLight_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLKernelABC*)(G__getstructoffset()))->GetRootLight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_GetTrueColorMode_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TGLKernelABC*)(G__getstructoffset()))->GetTrueColorMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_MultGLMatrix_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->MultGLMatrix((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_NewGLList_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->NewGLList((UInt_t)G__int(libp->para[0]),(EG3D2GLmode)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->NewGLList((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->NewGLList();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_NewGLModelView_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->NewGLModelView((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_PaintGLPoints_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->PaintGLPoints((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_PolygonGLMode_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->PolygonGLMode((EG3D2GLmode)G__int(libp->para[0]),(EG3D2GLmode)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_PushGLMatrix_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->PushGLMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_PopGLMatrix_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->PopGLMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_RotateGL_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->RotateGL((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_RotateGL_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->RotateGL((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetGLVertex_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetGLVertex((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetGLColor_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetGLColor((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetGLColorIndex_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetGLColorIndex((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetGLLineWidth_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetGLLineWidth((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetGLPointSize_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetGLPointSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetStack_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetStack((Double_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetStack();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_ShadeGLModel_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->ShadeGLModel((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_TranslateGL_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->TranslateGL((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_RunGLList_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->RunGLList((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_NewProjectionView_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->NewProjectionView((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->NewProjectionView((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_NewModelView_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->NewModelView((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_PaintCone_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->PaintCone((Float_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_PaintPolyLine_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_PaintBrik_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->PaintBrik((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetRootLight_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetRootLight((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetRootLight();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetLineAttr_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetLineAttr((Color_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetLineAttr((Color_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_UpdateMatrix_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->UpdateMatrix((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->UpdateMatrix((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->UpdateMatrix((Double_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->UpdateMatrix();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGLKernelABC_SetTrueColorMode_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetTrueColorMode((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGLKernelABC*)(G__getstructoffset()))->SetTrueColorMode();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGLKernelABC_TGLKernelABC_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGLKernelABC *p;
   if(1!=libp->paran) ;
   p=new TGLKernelABC(*(TGLKernelABC*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TGLKernelABC);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGLKernelABC_wATGLKernelABC_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGLKernelABC *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGLKernelABC *)((G__getstructoffset())+sizeof(TGLKernelABC)*i);
   else  delete (TGLKernelABC *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPadView3D */
static int G__TPadView3D_TPadView3D_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPadView3D *p=NULL;
   if(G__getaryconstruct()) p=new TPadView3D[G__getaryconstruct()];
   else                    p=new TPadView3D;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPadView3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_TPadView3D_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPadView3D *p=NULL;
      p = new TPadView3D((TVirtualPad*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPadView3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_ExecuteEvent_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_GetPad_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPadView3D*)(G__getstructoffset()))->GetPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_Paint_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_Size_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->Size((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_PaintBeginModel_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintBeginModel((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintBeginModel();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_PaintEnd_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintEnd((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintEnd();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_PaintScene_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintScene((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintScene();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_PaintPolyMarker_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintPolyMarker((TPolyMarker3D*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintPolyMarker((TPolyMarker3D*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_PaintPolyLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintPolyLine((TPolyLine3D*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PaintPolyLine((TPolyLine3D*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_PushMatrix_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PushMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_PopMatrix_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->PopMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_SetAttNode_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetAttNode((TNode*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetAttNode((TNode*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_SetPad_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetPad((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetPad();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_UpdateNodeMatrix_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->UpdateNodeMatrix((TNode*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->UpdateNodeMatrix((TNode*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_UpdateView_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->UpdateView();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_GetRange_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->GetRange((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_SetRange_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetRange((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_GetShift_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->GetShift((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_SetShift_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetShift((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_GetAngles_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->GetAngles((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_SetAngles_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetAngles((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_GetAnglesFactors_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->GetAnglesFactors((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_SetAnglesFactors_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetAnglesFactors((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_GetScale_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPadView3D*)(G__getstructoffset()))->GetScale());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadView3D_SetScale_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadView3D*)(G__getstructoffset()))->SetScale((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TPadView3D_TPadView3D_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TPadView3D *p;
   if(1!=libp->paran) ;
   p=new TPadView3D(*(TPadView3D*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPadView3D);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPadView3D_wATPadView3D_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPadView3D *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPadView3D *)((G__getstructoffset())+sizeof(TPadView3D)*i);
   else  delete (TPadView3D *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TPadOpenGLView */
static int G__TPadOpenGLView_MapOpenGL_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->MapOpenGL();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_UpdateModelView_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->UpdateModelView();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_UpdateObjectView_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->UpdateObjectView();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_MoveModelView_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->MoveModelView((Char_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->MoveModelView((Char_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_MoveModelView_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->MoveModelView((Char_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->MoveModelView((Char_t*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_RotateView_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->RotateView((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_TPadOpenGLView_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPadOpenGLView *p=NULL;
   if(G__getaryconstruct()) p=new TPadOpenGLView[G__getaryconstruct()];
   else                    p=new TPadOpenGLView;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_TPadOpenGLView_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPadOpenGLView *p=NULL;
      p = new TPadOpenGLView((TVirtualPad*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_ExecuteEvent_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_GetGLList_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPadOpenGLView*)(G__getstructoffset()))->GetGLList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_GetNextGLList_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TPadOpenGLView*)(G__getstructoffset()))->GetNextGLList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_GetSpeedMove_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TPadOpenGLView*)(G__getstructoffset()))->GetSpeedMove());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_GetSteps_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->GetSteps((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_Paint_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_Size_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->Size((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_ReleaseLastGLList_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TPadOpenGLView*)(G__getstructoffset()))->ReleaseLastGLList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_PaintBeginModel_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintBeginModel((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintBeginModel();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_PaintEnd_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintEnd((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintEnd();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_PaintScene_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintScene((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintScene();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_PaintPolyMarker_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintPolyMarker((TPolyMarker3D*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintPolyMarker((TPolyMarker3D*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_PaintPolyLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintPolyLine((TPolyLine3D*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PaintPolyLine((TPolyLine3D*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_PushMatrix_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PushMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_PopMatrix_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->PopMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_ResetView_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->ResetView((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->ResetView();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_SetAttNode_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->SetAttNode((TNode*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->SetAttNode((TNode*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_SetSpeedMove_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->SetSpeedMove((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_SetSteps_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->SetSteps((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_UpdateNodeMatrix_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->UpdateNodeMatrix((TNode*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->UpdateNodeMatrix((TNode*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPadOpenGLView_UpdateProjectView_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPadOpenGLView*)(G__getstructoffset()))->UpdateProjectView();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TPadOpenGLView_TPadOpenGLView_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TPadOpenGLView *p;
   if(1!=libp->paran) ;
   p=new TPadOpenGLView(*(TPadOpenGLView*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPadOpenGLView_wATPadOpenGLView_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPadOpenGLView *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPadOpenGLView *)((G__getstructoffset())+sizeof(TPadOpenGLView)*i);
   else  delete (TPadOpenGLView *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMarker3DBox */
static int G__TMarker3DBox_TMarker3DBox_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMarker3DBox *p=NULL;
   if(G__getaryconstruct()) p=new TMarker3DBox[G__getaryconstruct()];
   else                    p=new TMarker3DBox;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_TMarker3DBox_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMarker3DBox *p=NULL;
      p = new TMarker3DBox(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]),(Float_t)G__double(libp->para[7]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_GetRefObject_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMarker3DBox*)(G__getstructoffset()))->GetRefObject());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_GetDirection_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->GetDirection(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_GetPosition_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->GetPosition(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_GetSize_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->GetSize(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(Float_t*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(Float_t*)libp->para[2].ref:G__Mfloat(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_Is3D_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMarker3DBox*)(G__getstructoffset()))->Is3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_Paint_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_PaintShape_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->PaintShape((X3DBuffer*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_SavePrimitive_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_SetPoints_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->SetPoints((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_SetDirection_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->SetDirection((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_SetPosition_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->SetPosition((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_SetSize_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->SetSize((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_SetRefObject_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->SetRefObject((TObject*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->SetRefObject();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_Sizeof3D_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_DeclFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMarker3DBox*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_DeclFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMarker3DBox*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_ImplFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMarker3DBox*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_ImplFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMarker3DBox*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_Class_Version_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMarker3DBox*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_Class_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMarker3DBox*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_Dictionary_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_IsA_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMarker3DBox*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_ShowMembers_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMarker3DBox_Streamer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMarker3DBox*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMarker3DBox_TMarker3DBox_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMarker3DBox *p;
   if(1!=libp->paran) ;
   p=new TMarker3DBox(*(TMarker3DBox*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMarker3DBox_wATMarker3DBox_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMarker3DBox *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMarker3DBox *)((G__getstructoffset())+sizeof(TMarker3DBox)*i);
   else  delete (TMarker3DBox *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* THelix */
static int G__THelix_THelix_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   THelix *p=NULL;
   if(G__getaryconstruct()) p=new THelix[G__getaryconstruct()];
   else                    p=new THelix;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_THelix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_THelix_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   THelix *p=NULL;
      p = new THelix(
(Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_THelix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_THelix_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   THelix *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new THelix(
(Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t*)G__int(libp->para[3])
,(EHelixRangeType)G__int(libp->para[4]),(Double_t*)G__int(libp->para[5]));
      break;
   case 5:
      p = new THelix(
(Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t*)G__int(libp->para[3])
,(EHelixRangeType)G__int(libp->para[4]));
      break;
   case 4:
      p = new THelix(
(Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t*)G__int(libp->para[3]));
      break;
   case 3:
      p = new THelix(
(Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_THelix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_THelix_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   THelix *p=NULL;
      p = new THelix(*(THelix*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_THelix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Copy_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Draw_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_GetOption_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((THelix*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Is3D_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((THelix*)(G__getstructoffset()))->Is3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Paint_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Print_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_SavePrimitive_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_SetOption_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_SetAxis_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetAxis((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_SetAxis_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetAxis((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_SetRange_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetRange((Double_t*)G__int(libp->para[0]),(EHelixRangeType)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetRange((Double_t*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_SetRange_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetRange((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(EHelixRangeType)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetRange((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_SetHelix_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetHelix((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t*)G__int(libp->para[3])
,(EHelixRangeType)G__int(libp->para[4]),(Double_t*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetHelix((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t*)G__int(libp->para[3])
,(EHelixRangeType)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetHelix((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->SetHelix((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Sizeof3D_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_DeclFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((THelix*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_DeclFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((THelix*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_ImplFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((THelix*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_ImplFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((THelix*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Class_Version_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((THelix*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Class_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((THelix*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Dictionary_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_IsA_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((THelix*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_ShowMembers_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THelix_Streamer_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THelix*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__THelix_wATHelix_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (THelix *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (THelix *)((G__getstructoffset())+sizeof(THelix)*i);
   else  delete (THelix *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* THYPE */
static int G__THYPE_THYPE_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   THYPE *p=NULL;
   if(G__getaryconstruct()) p=new THYPE[G__getaryconstruct()];
   else                    p=new THYPE;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_THYPE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_THYPE_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   THYPE *p=NULL;
      p = new THYPE(
(Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_THYPE);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_GetPhi_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((THYPE*)(G__getstructoffset()))->GetPhi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_DeclFileName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((THYPE*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_DeclFileLine_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((THYPE*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_ImplFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((THYPE*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_ImplFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((THYPE*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_Class_Version_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((THYPE*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_Class_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((THYPE*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_Dictionary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THYPE*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_IsA_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((THYPE*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_ShowMembers_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THYPE*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__THYPE_Streamer_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((THYPE*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__THYPE_THYPE_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   THYPE *p;
   if(1!=libp->paran) ;
   p=new THYPE(*(THYPE*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__G3DLN_THYPE);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__THYPE_wATHYPE_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (THYPE *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (THYPE *)((G__getstructoffset())+sizeof(THYPE)*i);
   else  delete (THYPE *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TGeometry */

/* TPolyLine3D */

/* TPolyMarker3D */

/* TNode */

/* TMaterial */

/* TRotMatrix */

/* TShape */

/* TMixture */

/* TNodeDiv */

/* TBRIK */

/* TTRD1 */

/* TTRD2 */

/* TTUBE */

/* TCONE */

/* TTUBS */

/* TCTUB */

/* TELTU */

/* TCONS */

/* TTRAP */

/* TPARA */

/* TGTRA */

/* TPCON */

/* TPGON */

/* TSPHE */

/* TGLKernelABC */

/* TPadView3D */

/* TPadOpenGLView */

/* TMarker3DBox */

/* THelix */

/* THYPE */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__G3D {
 public:
  G__Sizep2memfuncG__G3D() {p=&G__Sizep2memfuncG__G3D::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__G3D::*p)();
};

size_t G__get_sizep2memfuncG__G3D()
{
  G__Sizep2memfuncG__G3D a;
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
extern "C" void G__cpp_setup_inheritanceG__G3D() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TGeometry))) {
     TGeometry *G__Lderived;
     G__Lderived=(TGeometry*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TGeometry),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TGeometry),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D))) {
     TPolyLine3D *G__Lderived;
     G__Lderived=(TPolyLine3D*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D))) {
     TPolyMarker3D *G__Lderived;
     G__Lderived=(TPolyMarker3D*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D),G__get_linked_tagnum(&G__G__G3DLN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TNode))) {
     TNode *G__Lderived;
     G__Lderived=(TNode*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNode),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNode),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNode),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNode),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TMaterial))) {
     TMaterial *G__Lderived;
     G__Lderived=(TMaterial*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMaterial),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMaterial),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMaterial),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix))) {
     TRotMatrix *G__Lderived;
     G__Lderived=(TRotMatrix*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TShape))) {
     TShape *G__Lderived;
     G__Lderived=(TShape*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TShape),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TShape),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TShape),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TShape),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TMixture))) {
     TMixture *G__Lderived;
     G__Lderived=(TMixture*)0x1000;
     {
       TMaterial *G__Lpbase=(TMaterial*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMixture),G__get_linked_tagnum(&G__G__G3DLN_TMaterial),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMixture),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMixture),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMixture),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv))) {
     TNodeDiv *G__Lderived;
     G__Lderived=(TNodeDiv*)0x1000;
     {
       TNode *G__Lpbase=(TNode*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),G__get_linked_tagnum(&G__G__G3DLN_TNode),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TBRIK))) {
     TBRIK *G__Lderived;
     G__Lderived=(TBRIK*)0x1000;
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TBRIK),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TBRIK),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TBRIK),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TBRIK),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TBRIK),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TTRD1))) {
     TTRD1 *G__Lderived;
     G__Lderived=(TTRD1*)0x1000;
     {
       TBRIK *G__Lpbase=(TBRIK*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1),G__get_linked_tagnum(&G__G__G3DLN_TBRIK),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TTRD2))) {
     TTRD2 *G__Lderived;
     G__Lderived=(TTRD2*)0x1000;
     {
       TBRIK *G__Lpbase=(TBRIK*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2),G__get_linked_tagnum(&G__G__G3DLN_TBRIK),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TTUBE))) {
     TTUBE *G__Lderived;
     G__Lderived=(TTUBE*)0x1000;
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBE),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBE),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBE),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBE),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBE),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TCONE))) {
     TCONE *G__Lderived;
     G__Lderived=(TCONE*)0x1000;
     {
       TTUBE *G__Lpbase=(TTUBE*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE),G__get_linked_tagnum(&G__G__G3DLN_TTUBE),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TTUBS))) {
     TTUBS *G__Lderived;
     G__Lderived=(TTUBS*)0x1000;
     {
       TTUBE *G__Lpbase=(TTUBE*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS),G__get_linked_tagnum(&G__G__G3DLN_TTUBE),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TCTUB))) {
     TCTUB *G__Lderived;
     G__Lderived=(TCTUB*)0x1000;
     {
       TTUBS *G__Lpbase=(TTUBS*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB),G__get_linked_tagnum(&G__G__G3DLN_TTUBS),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TTUBE *G__Lpbase=(TTUBE*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB),G__get_linked_tagnum(&G__G__G3DLN_TTUBE),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TELTU))) {
     TELTU *G__Lderived;
     G__Lderived=(TELTU*)0x1000;
     {
       TTUBE *G__Lpbase=(TTUBE*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU),G__get_linked_tagnum(&G__G__G3DLN_TTUBE),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TCONS))) {
     TCONS *G__Lderived;
     G__Lderived=(TCONS*)0x1000;
     {
       TTUBS *G__Lpbase=(TTUBS*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS),G__get_linked_tagnum(&G__G__G3DLN_TTUBS),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TTUBE *G__Lpbase=(TTUBE*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS),G__get_linked_tagnum(&G__G__G3DLN_TTUBE),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TTRAP))) {
     TTRAP *G__Lderived;
     G__Lderived=(TTRAP*)0x1000;
     {
       TBRIK *G__Lpbase=(TBRIK*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP),G__get_linked_tagnum(&G__G__G3DLN_TBRIK),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TPARA))) {
     TPARA *G__Lderived;
     G__Lderived=(TPARA*)0x1000;
     {
       TBRIK *G__Lpbase=(TBRIK*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA),G__get_linked_tagnum(&G__G__G3DLN_TBRIK),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TGTRA))) {
     TGTRA *G__Lderived;
     G__Lderived=(TGTRA*)0x1000;
     {
       TBRIK *G__Lpbase=(TBRIK*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA),G__get_linked_tagnum(&G__G__G3DLN_TBRIK),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TPCON))) {
     TPCON *G__Lderived;
     G__Lderived=(TPCON*)0x1000;
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPCON),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPCON),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPCON),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPCON),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPCON),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TPGON))) {
     TPGON *G__Lderived;
     G__Lderived=(TPGON*)0x1000;
     {
       TPCON *G__Lpbase=(TPCON*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON),G__get_linked_tagnum(&G__G__G3DLN_TPCON),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TSPHE))) {
     TSPHE *G__Lderived;
     G__Lderived=(TSPHE*)0x1000;
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TSPHE),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TSPHE),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TSPHE),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TSPHE),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TSPHE),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView))) {
     TPadOpenGLView *G__Lderived;
     G__Lderived=(TPadOpenGLView*)0x1000;
     {
       TPadView3D *G__Lpbase=(TPadView3D*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView),G__get_linked_tagnum(&G__G__G3DLN_TPadView3D),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox))) {
     TMarker3DBox *G__Lderived;
     G__Lderived=(TMarker3DBox*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_THelix))) {
     THelix *G__Lderived;
     G__Lderived=(THelix*)0x1000;
     {
       TPolyLine3D *G__Lpbase=(TPolyLine3D*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THelix),G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THelix),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THelix),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__G3DLN_THYPE))) {
     THYPE *G__Lderived;
     G__Lderived=(THYPE*)0x1000;
     {
       TTUBE *G__Lpbase=(TTUBE*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE),G__get_linked_tagnum(&G__G__G3DLN_TTUBE),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TShape *G__Lpbase=(TShape*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE),G__get_linked_tagnum(&G__G__G3DLN_TShape),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE),G__get_linked_tagnum(&G__G__G3DLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE),G__get_linked_tagnum(&G__G__G3DLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE),G__get_linked_tagnum(&G__G__G3DLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE),G__get_linked_tagnum(&G__G__G3DLN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__G3D() {

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
   G__search_typename2("X3DBuffer",117,G__get_linked_tagnum(&G__G__G3DLN__x3d_data_),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Size3D",117,G__get_linked_tagnum(&G__G__G3DLN__x3d_sizeof_),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TGeometry */
static void G__setup_memvarTGeometry(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TGeometry));
   { TGeometry *p; p=(TGeometry*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_THashList),-1,-1,4,"fMaterials=",0,"Collection of materials");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_THashList),-1,-1,4,"fMatrices=",0,"Collection of rotation matrices");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_THashList),-1,-1,4,"fShapes=",0,"Collection of shapes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TList),-1,-1,4,"fNodes=",0,"Collection of nodes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,-1,4,"fCurrentNode=",0,"Pointer to current node");
   G__memvar_setup((void*)NULL,85,2,0,G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,-1,4,"fMaterialPointer=",0,"Pointers to materials");
   G__memvar_setup((void*)NULL,85,2,0,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,-1,4,"fMatrixPointer=",0,"Pointers to rotation matrices");
   G__memvar_setup((void*)NULL,85,2,0,G__get_linked_tagnum(&G__G__G3DLN_TShape),-1,-1,4,"fShapePointer=",0,"Pointers to shapes");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fBomb=",0,"Bomb factor for exploded geometry");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPolyLine3D */
static void G__setup_memvarTPolyLine3D(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D));
   { TPolyLine3D *p; p=(TPolyLine3D*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fN=",0,"Number of points");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fP=",0,"Array of 3-D coordinates  (x,y,z)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__G3DLN_TString),-1,-1,2,"fOption=",0,"options");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fGLList=",0,"The list number for OpenGL view");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLastPoint=",0,"The number of the last filled point");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPolyMarker3D */
static void G__setup_memvarTPolyMarker3D(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D));
   { TPolyMarker3D *p; p=(TPolyMarker3D*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fN=",0,"number of points");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fP=",0,"Array of X,Y,Z coordinates");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__G3DLN_TString),-1,-1,2,"fOption=",0,"options");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fGLList=",0,"The list number for OpenGL view");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TNode */
static void G__setup_memvarTNode(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TNode));
   { TNode *p; p=(TNode*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fX=",0,"X offset with respect to parent object");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fY=",0,"Y offset with respect to parent object");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fZ=",0,"Z offset with respect to parent object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,-1,2,"fMatrix=",0,"Pointer to rotation matrix");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TShape),-1,-1,2,"fShape=",0,"Pointer to shape definition");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,-1,2,"fParent=",0,"Pointer to parent positioned volume");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TList),-1,-1,2,"fNodes=",0,"List of son nodes (if any)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__G3DLN_TString),-1,-1,2,"fOption=",0,"List of options if any");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVisibility=",0,"Visibility flag");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMaterial */
static void G__setup_memvarTMaterial(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TMaterial));
   { TMaterial *p; p=(TMaterial*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNumber=",0,"Material matrix number");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fA=",0,"A of Material");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fZ=",0,"Z of Material");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDensity=",0,"Material density in gr/cm3");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRadLength=",0,"Material radiation length");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fInterLength=",0,"Material interaction length");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TRotMatrix */
static void G__setup_memvarTRotMatrix(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix));
   { TRotMatrix *p; p=(TRotMatrix*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNumber=",0,"Rotation matrix number");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fType=",0,"Type of matrix (0=identity, 1=reflexion, 2=otherwise)");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fTheta=",0,"theta angle");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPhi=",0,"phi angle");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPsi=",0,"psi angle");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMatrix[9]=",0,"Rotation matrix");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TShape */
static void G__setup_memvarTShape(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TShape));
   { TShape *p; p=(TShape*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNumber=",0,"Shape number");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVisibility=",0,"Visibility flag");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,-1,2,"fMaterial=",0,"Pointer to material");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMixture */
static void G__setup_memvarTMixture(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TMixture));
   { TMixture *p; p=(TMixture*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNmixt=",0,"Number of elements in mixture");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAmixt=",0,"Array of A of mixtures");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fZmixt=",0,"Array of Z of mixtures");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fWmixt=",0,"Array of relative weights");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TNodeDiv */
static void G__setup_memvarTNodeDiv(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv));
   { TNodeDiv *p; p=(TNodeDiv*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNdiv=",0,"Number of divisions");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fAxis=",0,"Axis number where object is divided");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TBRIK */
static void G__setup_memvarTBRIK(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TBRIK));
   { TBRIK *p; p=(TBRIK*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDx=",0,"half length in x");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDy=",0,"half length in y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDz=",0,"half length in z");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TTRD1 */
static void G__setup_memvarTTRD1(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1));
   { TTRD1 *p; p=(TTRD1*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDx2=",0,"half length in x at the high z surface");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TTRD2 */
static void G__setup_memvarTTRD2(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2));
   { TTRD2 *p; p=(TTRD2*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDx2=",0,"half length in x at the high z surface");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDy2=",0,"half length in y at the high z surface");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TTUBE */
static void G__setup_memvarTTUBE(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBE));
   { TTUBE *p; p=(TTUBE*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmin=",0,"ellipse  semi-axis   in  X inside");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmax=",0,"ellipse  semi-axis   in  X outside");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDz=",0,"half length in z");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNdiv=",0,"number of segments (precision)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAspectRatio=",0,"defines  (the ellipse semi-axis in Y)/(the ellipse semi-axis in X)");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSiTab=",0,"Table of sin(fPhi1) .... sin(fPhil+fDphi1)");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fCoTab=",0,"Table of cos(fPhi1) .... cos(fPhil+fDphi1)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TCONE */
static void G__setup_memvarTCONE(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE));
   { TCONE *p; p=(TCONE*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmin2=",0,"inside radius at the high z limit");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmax2=",0,"outside radius at the high z limit");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TTUBS */
static void G__setup_memvarTTUBS(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS));
   { TTUBS *p; p=(TTUBS*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhi1=",0,"first phi limit");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhi2=",0,"second phi limit");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TCTUB */
static void G__setup_memvarTCTUB(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB));
   { TCTUB *p; p=(TCTUB*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fCosLow[3]=",0,"dir cosinus of surface cutting tube at low z");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fCosHigh[3]=",0,"dir cosinus of surface cutting tube at high z");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TELTU */
static void G__setup_memvarTELTU(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU));
   { TELTU *p; p=(TELTU*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TCONS */
static void G__setup_memvarTCONS(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS));
   { TCONS *p; p=(TCONS*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmin2=",0,"inside radius at the high z limit");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmax2=",0,"outside radius at the high z limit");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TTRAP */
static void G__setup_memvarTTRAP(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP));
   { TTRAP *p; p=(TTRAP*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fH1=",0,"half length in y at low z");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fBl1=",0,"half length in x at low z and y low edge");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTl1=",0,"half length in x at low z and y high edge");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAlpha1=",0,"angle w.r.t. the y axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fH2=",0,"half length in y at high z");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fBl2=",0,"half length in x at high z and y low edge");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTl2=",0,"half length in x at high z and y high edge");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAlpha2=",0,"angle w.r.t. the y axis");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPARA */
static void G__setup_memvarTPARA(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA));
   { TPARA *p; p=(TPARA*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAlpha=",0,"angle w.r.t. the y axis from the centre of the low y to the high y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTheta=",0,"polar angle from the centre of the low z to the high z");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhi=",0,"polar angle from the centre of the low z to the high z");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGTRA */
static void G__setup_memvarTGTRA(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA));
   { TGTRA *p; p=(TGTRA*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTwist=",0,"twisting parameter");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fH1=",0,"half length in y at low z");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fBl1=",0,"half length in x at low z and y low edge");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTl1=",0,"half length in x at low z and y high edge");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAlpha1=",0,"angle w.r.t. the y axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fH2=",0,"half length in y at high z");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fBl2=",0,"half length in x at high z and y low edge");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTl2=",0,"half length in x at high z and y high edge");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fAlpha2=",0,"angle w.r.t. the y axis");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPCON */
static void G__setup_memvarTPCON(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TPCON));
   { TPCON *p; p=(TPCON*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,4,"fSiTab=",0,"Table of sin(fPhi1) .... sin(fPhil+fDphi1)");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,4,"fCoTab=",0,"Table of cos(fPhi1) .... cos(fPhil+fDphi1)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhi1=",0,"lower phi limit");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDphi1=",0,"range in phi");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNz=",0,"number of z segments");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmin=",0,"pointer to array of inside radiuses");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmax=",0,"pointer to array of outside radiuses");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDz=",0,"pointer to array of half lengths in z");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNdiv=",0,"number of divisions");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPGON */
static void G__setup_memvarTPGON(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON));
   { TPGON *p; p=(TPGON*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSPHE */
static void G__setup_memvarTSPHE(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TSPHE));
   { TSPHE *p; p=(TSPHE*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,4,"fSiTab=",0,"Table of sin(fPhimin) .... sin(Phi)");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,4,"fCoTab=",0,"Table of cos(fPhimin) .... cos(Phi)");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,4,"fCoThetaTab=",0,"Table of sin(gThemin) .... cos(Theta)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNdiv=",0,"number of divisions");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNz=",0,"number of sections");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fAspectRatio=",0,"Relation between asumth and grid size (by default 1.0)");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmin=",0,"minimum radius");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmax=",0,"maximum radius");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fThemin=",0,"minimum theta");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fThemax=",0,"maximum theta");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhimin=",0,"minimum phi");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhimax=",0,"maximum phi");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"faX=",0,"Coeff along Ox");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"faY=",0,"Coeff along Oy");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"faZ=",0,"Coeff along Oz");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGLKernelABC */
static void G__setup_memvarTGLKernelABC(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TGLKernelABC));
   { TGLKernelABC *p; p=(TGLKernelABC*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fColorIndx=",0,"Current color index;");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fRootLight=",0,"Whether the \"ROOT\" light will be used (otherwise OpenGL)");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fTrueColorMode=",0,"Defines the whether the current hardware layer supports the true colors");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__G3DLN_EG3D2GLmode),-1,-1,2,"fFaceFlag=",0,"The current \"face\" definiton - clockwise/counterclockwise");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPadView3D */
static void G__setup_memvarTPadView3D(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TPadView3D));
   { TPadView3D *p; p=(TPadView3D*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TVirtualPad),-1,-1,2,"fParent=",0,"Pointer to the original TPad object");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fViewBoxMin[3]=",0,"Minimum of clip box");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fViewBoxMax[3]=",0,"Maximum of clip box");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fTranslate[3]=",0,"The vector to move object into the center of the scene");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fExtraTranslate[3]=",0,"The vector to move object with a mouse");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fAngles[3]=",0,"Latitude, Longitude, Psi");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fExtraAngles[3]=",0,"Latitude, Longitude, Psi");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fAnglFactor[3]=",0,"Latitude, Longitude, Psi");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fScale=",0,"The scale factor to control the border of the clip box");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TPadOpenGLView */
static void G__setup_memvarTPadOpenGLView(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView));
   { TPadOpenGLView *p; p=(TPadOpenGLView*)0x1000; if (p) { }
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLViewcLcLEDrawMode),-1,-2,1,"kHiddenLine=-1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLViewcLcLEDrawMode),-1,-2,1,"kSolidView=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLViewcLcLEDrawMode),-1,-2,1,"kWireFrame=1",0,(char*)NULL);
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fGLList=",0,"OpenGL lis to implement PROJECTION");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fGLLastList=",0,"OpenGL free list free to implement PROJECTION");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fMouseInit=",0,"Turn mouse activities on/off");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fMouseX=",0,"Current X mouse position");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fMouseY=",0,"Current Y mouse position");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fSpeedMove=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStep[3]=",0,"the steps to move object with keyboard interactions");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fResetView=",0,"Flag whether we need to reset OpenGL view from the TPad::GetView();");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fPerspective=",0,"Flag to switch between the perspectibe and orthographic projection view");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fExtraRotMatrix[16]=",0,"The current GL projection rotation matrix defined via \"mouse\"");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLViewcLcLEDrawMode),-1,-1,4,"fCurrentMode=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TGLViewerImp),-1,-1,4,"fGLViewerImp=",0,"Pointer to the OpenGL viewer");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_dA),-1,-2,1,"kScene=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_dA),-1,-2,1,"kProject=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_dA),-1,-2,1,"kUpdateView=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_dA),-1,-2,1,"kView=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_dA),-1,-2,1,"kModel=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__G3DLN_dA),-1,-2,1,"kGLListSize=5",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMarker3DBox */
static void G__setup_memvarTMarker3DBox(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox));
   { TMarker3DBox *p; p=(TMarker3DBox*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX=",0,"X coordinate of center of box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY=",0,"Y coordinate of center of box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fZ=",0,"Z coordinate of center of box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDx=",0,"half length in x");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDy=",0,"half length in y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fDz=",0,"half length in z");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTheta=",0,"Angle of box z axis with respect to main Z axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhi=",0,"Angle of box x axis with respect to main Xaxis");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TObject),-1,-1,2,"fRefObject=",0,"Pointer to an object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* THelix */
static void G__setup_memvarTHelix(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_THelix));
   { THelix *p; p=(THelix*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fX0=",0,"Initial X position");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fY0=",0,"Initial Y position");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fZ0=",0,"Initial Z position");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fVt=",0,"Transverse velocity (constant of motion)");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPhi0=",0,"Initial phase, so vx0 = fVt*cos(fPhi0)");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fVz=",0,"Z velocity (constant of motion)");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fW=",0,"Angular frequency");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fAxis[3]=",0,"Direction unit vector of the helix axis");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,-1,2,"fRotMat=",0,"Rotation matrix: axis // z  -->  axis // fAxis");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fRange[2]=",0,"Range of helix parameter t");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-2,2,"fgMinNSeg=",0,"minimal number of segments in polyline");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* THYPE */
static void G__setup_memvarTHYPE(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE));
   { THYPE *p; p=(THYPE*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPhi=",0,"stereo angle");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__G3D() {
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
static void G__setup_memfuncTGeometry(void) {
   /* TGeometry */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TGeometry));
   G__memfunc_setup("TGeometry",928,G__TGeometry_TGeometry_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TGeometry),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGeometry",928,G__TGeometry_TGeometry_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TGeometry),-1,0,2,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TGeometry_Browse_3_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("cd",199,G__TGeometry_cd_4_0,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 0 path",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TGeometry_Draw_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBomb",672,G__TGeometry_GetBomb_6_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfShapes",1493,G__TGeometry_GetListOfShapes_7_0,85,G__get_linked_tagnum(&G__G__G3DLN_THashList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfNodes",1386,G__TGeometry_GetListOfNodes_8_0,85,G__get_linked_tagnum(&G__G__G3DLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfMaterials",1811,G__TGeometry_GetListOfMaterials_9_0,85,G__get_linked_tagnum(&G__G__G3DLN_THashList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfMatrices",1705,G__TGeometry_GetListOfMatrices_0_1,85,G__get_linked_tagnum(&G__G__G3DLN_THashList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCurrentNode",1417,G__TGeometry_GetCurrentNode_1_1,85,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMaterial",1103,G__TGeometry_GetMaterial_2_1,85,G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMaterialByNumber",1907,G__TGeometry_GetMaterialByNumber_3_1,85,G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,0,1,1,1,0,"i - 'Int_t' 0 - number",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNode",678,G__TGeometry_GetNode_4_1,85,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShape",785,G__TGeometry_GetShape_5_1,85,G__get_linked_tagnum(&G__G__G3DLN_TShape),-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShapeByNumber",1589,G__TGeometry_GetShapeByNumber_6_1,85,G__get_linked_tagnum(&G__G__G3DLN_TShape),-1,0,1,1,1,0,"i - 'Int_t' 0 - number",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRotMatrix",1226,G__TGeometry_GetRotMatrix_7_1,85,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRotMatrixByNumber",2030,G__TGeometry_GetRotMatrixByNumber_8_1,85,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,0,1,1,1,0,"i - 'Int_t' 0 - number",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsFolder",792,G__TGeometry_IsFolder_9_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TGeometry_ls_0_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"rsn2\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Node",390,G__TGeometry_Node_1_2,121,-1,-1,0,8,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - shapename d - 'Double_t' 0 0 x "
"d - 'Double_t' 0 0 y d - 'Double_t' 0 0 z "
"C - 'Text_t' 0 \"\" matrixname C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecursiveRemove",1574,G__TGeometry_RecursiveRemove_2_2,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBomb",684,G__TGeometry_SetBomb_3_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.4 bomb",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCurrentNode",1429,G__TGeometry_SetCurrentNode_4_2,121,-1,-1,0,1,1,1,0,"U 'TNode' - 0 - node",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGeometry_DeclFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGeometry_DeclFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGeometry_ImplFileName_7_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGeometry_ImplFileLine_8_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGeometry_Class_Version_9_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGeometry_Class_0_3,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGeometry_Dictionary_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGeometry_IsA_2_3,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGeometry_ShowMembers_3_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGeometry_Streamer_4_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGeometry",928,G__TGeometry_TGeometry_5_3,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TGeometry),-1,0,1,1,1,0,"u 'TGeometry' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGeometry",1054,G__TGeometry_wATGeometry_6_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPolyLine3D(void) {
   /* TPolyLine3D */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D));
   G__memfunc_setup("TPolyLine3D",1015,G__TPolyLine3D_TPolyLine3D_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyLine3D",1015,G__TPolyLine3D_TPolyLine3D_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),-1,0,2,1,1,0,
"i - 'Int_t' 0 - n C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyLine3D",1015,G__TPolyLine3D_TPolyLine3D_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyLine3D",1015,G__TPolyLine3D_TPolyLine3D_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),-1,0,5,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y F - 'Float_t' 0 - z "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyLine3D",1015,G__TPolyLine3D_TPolyLine3D_4_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),-1,0,1,1,1,0,"u 'TPolyLine3D' - 1 - polylin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TPolyLine3D_Copy_6_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - polyline",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TPolyLine3D_DistancetoPrimitive_7_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPolyLine3D_Draw_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyLine",1210,G__TPolyLine3D_DrawPolyLine_9_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TPolyLine3D_ExecuteEvent_0_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLastPoint",1214,G__TPolyLine3D_GetLastPoint_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetN",366,G__TPolyLine3D_GetN_2_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetP",368,G__TPolyLine3D_GetP_3_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOption",921,G__TPolyLine3D_GetOption_4_1,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Is3D",307,G__TPolyLine3D_Is3D_5_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TPolyLine3D_ls_6_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPolyLine3D_Paint_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLine",1320,G__TPolyLine3D_PaintPolyLine_8_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPolyLine3D_Print_9_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPolyLine3D_SavePrimitive_0_2,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNextPoint",1237,G__TPolyLine3D_SetNextPoint_1_2,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - z","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetOption",933,G__TPolyLine3D_SetOption_2_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoint",822,G__TPolyLine3D_SetPoint_3_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - point f - 'Float_t' 0 - x "
"f - 'Float_t' 0 - y f - 'Float_t' 0 - z","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetPolyLine",1112,G__TPolyLine3D_SetPolyLine_4_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 0 p "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TPolyLine3D_Sizeof3D_5_2,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPolyLine3D_DeclFileName_6_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPolyLine3D_DeclFileLine_7_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPolyLine3D_ImplFileName_8_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPolyLine3D_ImplFileLine_9_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPolyLine3D_Class_Version_0_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPolyLine3D_Class_1_3,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPolyLine3D_Dictionary_2_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPolyLine3D_IsA_3_3,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPolyLine3D_ShowMembers_4_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPolyLine3D_Streamer_5_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPolyLine3D",1141,G__TPolyLine3D_wATPolyLine3D_6_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPolyMarker3D(void) {
   /* TPolyMarker3D */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D));
   G__memfunc_setup("TPolyMarker3D",1233,G__TPolyMarker3D_TPolyMarker3D_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyMarker3D",1233,G__TPolyMarker3D_TPolyMarker3D_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D),-1,0,3,1,1,0,
"i - 'Int_t' 0 - n s - 'Marker_t' 0 1 marker "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyMarker3D",1233,G__TPolyMarker3D_TPolyMarker3D_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D),-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"s - 'Marker_t' 0 1 marker C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPolyMarker3D",1233,G__TPolyMarker3D_TPolyMarker3D_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D),-1,0,1,1,1,0,"u 'TPolyMarker3D' - 1 - polymarker",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TPolyMarker3D_Copy_5_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - polymarker",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TPolyMarker3D_DistancetoPrimitive_6_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TPolyMarker3D_Draw_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyMarker",1428,G__TPolyMarker3D_DrawPolyMarker_8_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"s - 'Marker_t' 0 - marker C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TPolyMarker3D_ExecuteEvent_9_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetN",366,G__TPolyMarker3D_GetN_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetP",368,G__TPolyMarker3D_GetP_1_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__TPolyMarker3D_GetOption_2_1,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Is3D",307,G__TPolyMarker3D_Is3D_3_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TPolyMarker3D_ls_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPolyMarker3D_Paint_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyMarker",1538,G__TPolyMarker3D_PaintPolyMarker_6_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"s - 'Marker_t' 0 - marker C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPolyMarker3D_Print_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TPolyMarker3D_SavePrimitive_8_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoint",822,G__TPolyMarker3D_SetPoint_9_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n f - 'Float_t' 0 - x "
"f - 'Float_t' 0 - y f - 'Float_t' 0 - z","*MENU*",(void*)NULL,0);
   G__memfunc_setup("SetPolyMarker",1330,G__TPolyMarker3D_SetPolyMarker_0_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"s - 'Marker_t' 0 - marker C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TPolyMarker3D_Sizeof3D_1_2,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPolyMarker3D_DeclFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPolyMarker3D_DeclFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPolyMarker3D_ImplFileName_4_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPolyMarker3D_ImplFileLine_5_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPolyMarker3D_Class_Version_6_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPolyMarker3D_Class_7_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPolyMarker3D_Dictionary_8_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPolyMarker3D_IsA_9_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPolyMarker3D_ShowMembers_0_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPolyMarker3D_Streamer_1_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TPolyMarker3D",1359,G__TPolyMarker3D_wATPolyMarker3D_2_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTNode(void) {
   /* TNode */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TNode));
   G__memfunc_setup("TNode",474,G__TNode_TNode_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TNode",474,G__TNode_TNode_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,0,8,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - shapename d - 'Double_t' 0 0 x "
"d - 'Double_t' 0 0 y d - 'Double_t' 0 0 z "
"C - 'Text_t' 0 \"\" matrixname C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TNode",474,G__TNode_TNode_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,0,8,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"U 'TShape' - 0 - shape d - 'Double_t' 0 0 x "
"d - 'Double_t' 0 0 y d - 'Double_t' 0 0 z "
"U 'TRotMatrix' - 0 0 matrix C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TNode_Browse_4_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BuildListOfNodes",1594,G__TNode_BuildListOfNodes_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("cd",199,G__TNode_cd_6_0,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 0 path","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TNode_DistancetoPrimitive_7_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TNode_Draw_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DrawOnly",816,G__TNode_DrawOnly_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TNode_ExecuteEvent_0_1,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetListOfNodes",1386,G__TNode_GetListOfNodes_1_1,85,G__get_linked_tagnum(&G__G__G3DLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMatrix",917,G__TNode_GetMatrix_2_1,85,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNode",678,G__TNode_GetNode_3_1,85,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetObjectInfo",1283,G__TNode_GetObjectInfo_4_1,67,-1,G__defined_typename("Text_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__TNode_GetOption_5_1,67,-1,G__defined_typename("Option_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetParent",906,G__TNode_GetParent_6_1,85,G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetShape",785,G__TNode_GetShape_7_1,85,G__get_linked_tagnum(&G__G__G3DLN_TShape),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVisibility",1352,G__TNode_GetVisibility_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetX",376,G__TNode_GetX_9_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetY",377,G__TNode_GetY_0_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetZ",378,G__TNode_GetZ_1_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ImportShapeAttributes",2195,G__TNode_ImportShapeAttributes_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsFolder",792,G__TNode_IsFolder_3_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Is3D",307,G__TNode_Is3D_4_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Local2Master",1161,G__TNode_Local2Master_5_2,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - local D - 'Double_t' 0 - master",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Local2Master",1161,G__TNode_Local2Master_6_2,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - local F - 'Float_t' 0 - master",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TNode_ls_7_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"2\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TNode_Paint_8_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecursiveRemove",1574,G__TNode_RecursiveRemove_9_2,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMatrix",929,G__TNode_SetMatrix_0_3,121,-1,-1,0,1,1,1,0,"U 'TRotMatrix' - 0 0 matrix",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetName",685,G__TNode_SetName_1_3,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParent",918,G__TNode_SetParent_2_3,121,-1,-1,0,1,1,1,0,"U 'TNode' - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPosition",1153,G__TNode_SetPosition_3_3,121,-1,-1,0,3,1,1,0,
"d - 'Double_t' 0 0 x d - 'Double_t' 0 0 y "
"d - 'Double_t' 0 0 z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetVisibility",1364,G__TNode_SetVisibility_4_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 vis","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TNode_Sizeof3D_5_3,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateMatrix",1240,G__TNode_UpdateMatrix_6_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateTempMatrix",1646,G__TNode_UpdateTempMatrix_7_3,121,-1,-1,0,8,1,1,0,
"D - 'Double_t' 0 - dx1 D - 'Double_t' 0 - rmat1 "
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y "
"d - 'Double_t' 0 - z D - 'Double_t' 0 - matrix "
"D - 'Double_t' 0 - dxnew D - 'Double_t' 0 - rmatnew",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TNode_DeclFileName_8_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TNode_DeclFileLine_9_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TNode_ImplFileName_0_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TNode_ImplFileLine_1_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TNode_Class_Version_2_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TNode_Class_3_4,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TNode_Dictionary_4_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TNode_IsA_5_4,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TNode_ShowMembers_6_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TNode_Streamer_7_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TNode",474,G__TNode_TNode_8_4,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TNode),-1,0,1,1,1,0,"u 'TNode' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TNode",600,G__TNode_wATNode_9_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMaterial(void) {
   /* TMaterial */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TMaterial));
   G__memfunc_setup("TMaterial",899,G__TMaterial_TMaterial_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMaterial",899,G__TMaterial_TMaterial_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,0,5,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"f - 'Float_t' 0 - a f - 'Float_t' 0 - z "
"f - 'Float_t' 0 - density",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMaterial",899,G__TMaterial_TMaterial_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,0,7,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"f - 'Float_t' 0 - a f - 'Float_t' 0 - z "
"f - 'Float_t' 0 - density f - 'Float_t' 0 - radl "
"f - 'Float_t' 0 - inter",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNumber",905,G__TMaterial_GetNumber_4_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetA",353,G__TMaterial_GetA_5_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetZ",378,G__TMaterial_GetZ_6_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDensity",1024,G__TMaterial_GetDensity_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRadLength",1177,G__TMaterial_GetRadLength_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetInterLength",1412,G__TMaterial_GetInterLength_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TMaterial_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMaterial_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMaterial_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMaterial_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMaterial_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMaterial_Class_5_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMaterial_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMaterial_IsA_7_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMaterial_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMaterial_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMaterial",899,G__TMaterial_TMaterial_0_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,0,1,1,1,0,"u 'TMaterial' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMaterial",1025,G__TMaterial_wATMaterial_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTRotMatrix(void) {
   /* TRotMatrix */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix));
   G__memfunc_setup("SetReflection",1335,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,0,"","Set the \"reflection\" flag if det < 0",(void*)NULL,1);
   G__memfunc_setup("TRotMatrix",1022,G__TRotMatrix_TRotMatrix_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TRotMatrix",1022,G__TRotMatrix_TRotMatrix_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,0,3,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"D - 'Double_t' 0 - matrix",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TRotMatrix",1022,G__TRotMatrix_TRotMatrix_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,0,5,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"d - 'Double_t' 0 - theta d - 'Double_t' 0 - phi "
"d - 'Double_t' 0 - psi",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TRotMatrix",1022,G__TRotMatrix_TRotMatrix_4_0,105,G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,0,8,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"d - 'Double_t' 0 - theta1 d - 'Double_t' 0 - phi1 "
"d - 'Double_t' 0 - theta2 d - 'Double_t' 0 - phi2 "
"d - 'Double_t' 0 - theta3 d - 'Double_t' 0 - phi3",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Determinant",1147,G__TRotMatrix_Determinant_6_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"","returns the determinant of this matrix",(void*)NULL,1);
   G__memfunc_setup("GetMatrix",917,G__TRotMatrix_GetMatrix_7_0,68,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNumber",905,G__TRotMatrix_GetNumber_8_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetType",706,G__TRotMatrix_GetType_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTheta",790,G__TRotMatrix_GetTheta_0_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPhi",577,G__TRotMatrix_GetPhi_1_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPsi",588,G__TRotMatrix_GetPsi_2_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGLMatrix",1064,G__TRotMatrix_GetGLMatrix_3_1,68,-1,G__defined_typename("Double_t"),0,1,1,1,0,"D - 'Double_t' 0 - rGLMatrix","Convert this matrix to the OpenGL [4x4]",(void*)NULL,1);
   G__memfunc_setup("IsReflection",1223,G__TRotMatrix_IsReflection_4_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"","Return kTRUE if this matrix defines the reflection",(void*)NULL,1);
   G__memfunc_setup("SetMatrix",929,G__TRotMatrix_SetMatrix_5_1,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - matrix",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetName",685,G__TRotMatrix_SetName_6_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TRotMatrix_DeclFileName_7_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TRotMatrix_DeclFileLine_8_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TRotMatrix_ImplFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TRotMatrix_ImplFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TRotMatrix_Class_Version_1_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TRotMatrix_Class_2_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TRotMatrix_Dictionary_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TRotMatrix_IsA_4_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TRotMatrix_ShowMembers_5_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TRotMatrix_Streamer_6_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TRotMatrix",1022,G__TRotMatrix_TRotMatrix_7_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),-1,0,1,1,1,0,"u 'TRotMatrix' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TRotMatrix",1148,G__TRotMatrix_wATRotMatrix_8_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTShape(void) {
   /* TShape */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TShape));
   G__memfunc_setup("TShape",581,G__TShape_TShape_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TShape),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TShape",581,G__TShape_TShape_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TShape),-1,0,3,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Is3D",307,G__TShape_Is3D_3_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMaterial",1103,G__TShape_GetMaterial_4_0,85,G__get_linked_tagnum(&G__G__G3DLN_TMaterial),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNumber",905,G__TShape_GetNumber_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetVisibility",1352,G__TShape_GetVisibility_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Paint",508,G__TShape_Paint_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,G__TShape_PaintGLPoints_8_0,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintShape",1005,G__TShape_PaintShape_9_0,121,-1,-1,0,1,1,1,0,"U '_x3d_data_' 'X3DBuffer' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetName",685,G__TShape_SetName_0_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetVisibility",1364,G__TShape_SetVisibility_1_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - vis","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TShape_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TShape_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TShape_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TShape_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TShape_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TShape_Class_7_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TShape_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TShape_IsA_9_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TShape_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TShape_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TShape",581,G__TShape_TShape_2_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TShape),-1,0,1,1,1,0,"u 'TShape' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TShape",707,G__TShape_wATShape_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMixture(void) {
   /* TMixture */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TMixture));
   G__memfunc_setup("TMixture",834,G__TMixture_TMixture_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TMixture),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMixture",834,G__TMixture_TMixture_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TMixture),-1,0,3,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"i - 'Int_t' 0 - nmixt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DefineElement",1301,G__TMixture_DefineElement_3_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n f - 'Float_t' 0 - a "
"f - 'Float_t' 0 - z f - 'Float_t' 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNmixt",816,G__TMixture_GetNmixt_4_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAmixt",803,G__TMixture_GetAmixt_5_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetZmixt",828,G__TMixture_GetZmixt_6_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetWmixt",825,G__TMixture_GetWmixt_7_0,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMixture_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMixture_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMixture_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMixture_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMixture_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMixture_Class_3_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMixture_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMixture_IsA_5_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMixture_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMixture_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMixture",834,G__TMixture_TMixture_8_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TMixture),-1,0,1,1,1,0,"u 'TMixture' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMixture",960,G__TMixture_wATMixture_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTNodeDiv(void) {
   /* TNodeDiv */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv));
   G__memfunc_setup("TNodeDiv",765,G__TNodeDiv_TNodeDiv_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TNodeDiv",765,G__TNodeDiv_TNodeDiv_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),-1,0,6,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - shapename i - 'Int_t' 0 - ndiv "
"i - 'Int_t' 0 - axis C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TNodeDiv",765,G__TNodeDiv_TNodeDiv_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),-1,0,6,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"U 'TShape' - 0 - shape i - 'Int_t' 0 - ndiv "
"i - 'Int_t' 0 - axis C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Draw",398,G__TNodeDiv_Draw_4_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TNodeDiv_Paint_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TNodeDiv_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TNodeDiv_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TNodeDiv_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TNodeDiv_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TNodeDiv_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TNodeDiv_Class_1_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TNodeDiv_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TNodeDiv_IsA_3_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TNodeDiv_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TNodeDiv_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TNodeDiv",765,G__TNodeDiv_TNodeDiv_6_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),-1,0,1,1,1,0,"u 'TNodeDiv' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TNodeDiv",891,G__TNodeDiv_wATNodeDiv_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTBRIK(void) {
   /* TBRIK */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TBRIK));
   G__memfunc_setup("TBRIK",380,G__TBRIK_TBRIK_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TBRIK),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBRIK",380,G__TBRIK_TBRIK_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TBRIK),-1,0,6,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - dx "
"f - 'Float_t' 0 - dy f - 'Float_t' 0 - dz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TBRIK_DistancetoPrimitive_3_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDx",476,G__TBRIK_GetDx_4_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDy",477,G__TBRIK_GetDy_5_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDz",478,G__TBRIK_GetDz_6_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Paint",508,G__TBRIK_Paint_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,G__TBRIK_PaintGLPoints_8_0,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TBRIK_SetPoints_9_0,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TBRIK_Sizeof3D_0_1,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TBRIK_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBRIK_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBRIK_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBRIK_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBRIK_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBRIK_Class_6_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TBRIK_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBRIK_IsA_8_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBRIK_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBRIK_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TBRIK",380,G__TBRIK_TBRIK_1_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TBRIK),-1,0,1,1,1,0,"u 'TBRIK' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBRIK",506,G__TBRIK_wATBRIK_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTTRD1(void) {
   /* TTRD1 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1));
   G__memfunc_setup("TTRD1",367,G__TTRD1_TTRD1_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTRD1),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTRD1",367,G__TTRD1_TTRD1_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTRD1),-1,0,7,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - dx1 "
"f - 'Float_t' 0 - dx2 f - 'Float_t' 0 - dy "
"f - 'Float_t' 0 - dz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDx2",526,G__TTRD1_GetDx2_3_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TTRD1_SetPoints_4_0,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TTRD1_DeclFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TTRD1_DeclFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TTRD1_ImplFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TTRD1_ImplFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TTRD1_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TTRD1_Class_0_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TTRD1_Dictionary_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TTRD1_IsA_2_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TTRD1_ShowMembers_3_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TTRD1_Streamer_4_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TTRD1",367,G__TTRD1_TTRD1_5_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TTRD1),-1,0,1,1,1,0,"u 'TTRD1' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TTRD1",493,G__TTRD1_wATTRD1_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTTRD2(void) {
   /* TTRD2 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2));
   G__memfunc_setup("TTRD2",368,G__TTRD2_TTRD2_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTRD2),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTRD2",368,G__TTRD2_TTRD2_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTRD2),-1,0,8,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - dx1 "
"f - 'Float_t' 0 - dx2 f - 'Float_t' 0 - dy1 "
"f - 'Float_t' 0 - dy2 f - 'Float_t' 0 - dz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDx2",526,G__TTRD2_GetDx2_3_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDy2",527,G__TTRD2_GetDy2_4_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPoints",937,G__TTRD2_SetPoints_5_0,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TTRD2_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TTRD2_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TTRD2_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TTRD2_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TTRD2_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TTRD2_Class_1_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TTRD2_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TTRD2_IsA_3_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TTRD2_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TTRD2_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TTRD2",368,G__TTRD2_TTRD2_6_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TTRD2),-1,0,1,1,1,0,"u 'TTRD2' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TTRD2",494,G__TTRD2_wATTRD2_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTTUBE(void) {
   /* TTUBE */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBE));
   G__memfunc_setup("MakeTableOfCoSin",1527,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Create the table of the fSiTab; fCoTab",(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TTUBE",388,G__TTUBE_TTUBE_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTUBE),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTUBE",388,G__TTUBE_TTUBE_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTUBE),-1,0,7,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmin "
"f - 'Float_t' 0 - rmax f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 1 aspect",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTUBE",388,G__TTUBE_TTUBE_4_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTUBE),-1,0,5,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmax "
"f - 'Float_t' 0 - dz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TTUBE_DistancetoPrimitive_6_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRmin",694,G__TTUBE_GetRmin_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRmax",696,G__TTUBE_GetRmax_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDz",478,G__TTUBE_GetDz_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNdiv",689,G__TTUBE_GetNdiv_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAspectRatio",1407,G__TTUBE_GetAspectRatio_1_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNumberOfDivisions",2038,G__TTUBE_GetNumberOfDivisions_2_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TTUBE_Paint_3_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNumberOfDivisions",2050,G__TTUBE_SetNumberOfDivisions_4_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - ndiv",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TTUBE_SetPoints_5_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAspectRatio",1419,G__TTUBE_SetAspectRatio_6_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 factor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TTUBE_Sizeof3D_7_1,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TTUBE_DeclFileName_8_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TTUBE_DeclFileLine_9_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TTUBE_ImplFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TTUBE_ImplFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TTUBE_Class_Version_2_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TTUBE_Class_3_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TTUBE_Dictionary_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TTUBE_IsA_5_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TTUBE_ShowMembers_6_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TTUBE_Streamer_7_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TTUBE",388,G__TTUBE_TTUBE_8_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TTUBE),-1,0,1,1,1,0,"u 'TTUBE' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TTUBE",514,G__TTUBE_wATTUBE_9_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTCONE(void) {
   /* TCONE */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE));
   G__memfunc_setup("TCONE",377,G__TCONE_TCONE_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TCONE),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCONE",377,G__TCONE_TCONE_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TCONE),-1,0,8,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - rmin1 f - 'Float_t' 0 - rmax1 "
"f - 'Float_t' 0 - rmin2 f - 'Float_t' 0 - rmax2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCONE",377,G__TCONE_TCONE_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TCONE),-1,0,6,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - rmax1 f - 'Float_t' 0 0 rmax2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRmin2",744,G__TCONE_GetRmin2_4_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRmax2",746,G__TCONE_GetRmax2_5_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPoints",937,G__TCONE_SetPoints_6_0,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TCONE_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TCONE_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TCONE_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TCONE_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TCONE_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TCONE_Class_2_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TCONE_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TCONE_IsA_4_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TCONE_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TCONE_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TCONE",377,G__TCONE_TCONE_7_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TCONE),-1,0,1,1,1,0,"u 'TCONE' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TCONE",503,G__TCONE_wATCONE_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTTUBS(void) {
   /* TTUBS */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS));
   G__memfunc_setup("MakeTableOfCoSin",1527,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Create the table of the fSiTab; fCoTab",(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TTUBS",402,G__TTUBS_TTUBS_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTUBS),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTUBS",402,G__TTUBS_TTUBS_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTUBS),-1,0,8,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmin "
"f - 'Float_t' 0 - rmax f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - phi1 f - 'Float_t' 0 - phi2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTUBS",402,G__TTUBS_TTUBS_4_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTUBS),-1,0,7,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmax "
"f - 'Float_t' 0 - dz f - 'Float_t' 0 - phi1 "
"f - 'Float_t' 0 - phi2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TTUBS_DistancetoPrimitive_6_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPhi1",626,G__TTUBS_GetPhi1_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPhi2",627,G__TTUBS_GetPhi2_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TTUBS_Paint_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TTUBS_SetPoints_0_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TTUBS_Sizeof3D_1_1,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TTUBS_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TTUBS_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TTUBS_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TTUBS_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TTUBS_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TTUBS_Class_7_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TTUBS_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TTUBS_IsA_9_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TTUBS_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TTUBS_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TTUBS",402,G__TTUBS_TTUBS_2_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TTUBS),-1,0,1,1,1,0,"u 'TTUBS' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TTUBS",528,G__TTUBS_wATTUBS_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTCTUB(void) {
   /* TCTUB */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB));
   G__memfunc_setup("TCTUB",386,G__TCTUB_TCTUB_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TCTUB),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCTUB",386,G__TCTUB_TCTUB_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TCTUB),-1,0,14,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmin "
"f - 'Float_t' 0 - rmax f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - phi1 f - 'Float_t' 0 - phi2 "
"f - 'Float_t' 0 - coslx f - 'Float_t' 0 - cosly "
"f - 'Float_t' 0 - coslz f - 'Float_t' 0 - coshx "
"f - 'Float_t' 0 - coshy f - 'Float_t' 0 - coshz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TCTUB_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TCTUB_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TCTUB_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TCTUB_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TCTUB_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TCTUB_Class_8_0,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TCTUB_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TCTUB_IsA_0_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TCTUB_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TCTUB_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TCTUB",386,G__TCTUB_TCTUB_3_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TCTUB),-1,0,1,1,1,0,"u 'TCTUB' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TCTUB",512,G__TCTUB_wATCTUB_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTELTU(void) {
   /* TELTU */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU));
   G__memfunc_setup("TELTU",398,G__TELTU_TELTU_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TELTU),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TELTU",398,G__TELTU_TELTU_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TELTU),-1,0,6,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rx "
"f - 'Float_t' 0 - ry f - 'Float_t' 0 - dz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TELTU_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TELTU_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TELTU_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TELTU_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TELTU_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TELTU_Class_8_0,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TELTU_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TELTU_IsA_0_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TELTU_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TELTU_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TELTU",398,G__TELTU_TELTU_3_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TELTU),-1,0,1,1,1,0,"u 'TELTU' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TELTU",524,G__TELTU_wATELTU_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTCONS(void) {
   /* TCONS */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS));
   G__memfunc_setup("TCONS",391,G__TCONS_TCONS_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TCONS),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCONS",391,G__TCONS_TCONS_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TCONS),-1,0,10,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmin1 "
"f - 'Float_t' 0 - rmax1 f - 'Float_t' 0 - rmin2 "
"f - 'Float_t' 0 - rmax2 f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - phi1 f - 'Float_t' 0 - phi2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCONS",391,G__TCONS_TCONS_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TCONS),-1,0,8,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmax1 "
"f - 'Float_t' 0 - dz f - 'Float_t' 0 - phi1 "
"f - 'Float_t' 0 - phi2 f - 'Float_t' 0 0 rmax2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRmin2",744,G__TCONS_GetRmin2_4_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRmax2",746,G__TCONS_GetRmax2_5_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TCONS_SetPoints_6_0,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TCONS_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TCONS_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TCONS_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TCONS_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TCONS_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TCONS_Class_2_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TCONS_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TCONS_IsA_4_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TCONS_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TCONS_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TCONS",391,G__TCONS_TCONS_7_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TCONS),-1,0,1,1,1,0,"u 'TCONS' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TCONS",517,G__TCONS_wATCONS_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTTRAP(void) {
   /* TTRAP */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP));
   G__memfunc_setup("TTRAP",395,G__TTRAP_TTRAP_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTRAP),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTRAP",395,G__TTRAP_TTRAP_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TTRAP),-1,0,14,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - theta f - 'Float_t' 0 - phi "
"f - 'Float_t' 0 - h1 f - 'Float_t' 0 - bl1 "
"f - 'Float_t' 0 - tl1 f - 'Float_t' 0 - alpha1 "
"f - 'Float_t' 0 - h2 f - 'Float_t' 0 - bl2 "
"f - 'Float_t' 0 - tl2 f - 'Float_t' 0 - alpha2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetH1",409,G__TTRAP_GetH1_3_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBl1",511,G__TTRAP_GetBl1_4_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTl1",529,G__TTRAP_GetTl1_5_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAlpha1",823,G__TTRAP_GetAlpha1_6_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetH2",410,G__TTRAP_GetH2_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBl2",512,G__TTRAP_GetBl2_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTl2",530,G__TTRAP_GetTl2_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAlpha2",824,G__TTRAP_GetAlpha2_0_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TTRAP_SetPoints_1_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TTRAP_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TTRAP_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TTRAP_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TTRAP_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TTRAP_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TTRAP_Class_7_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TTRAP_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TTRAP_IsA_9_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TTRAP_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TTRAP_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TTRAP",395,G__TTRAP_TTRAP_2_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TTRAP),-1,0,1,1,1,0,"u 'TTRAP' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TTRAP",521,G__TTRAP_wATTRAP_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPARA(void) {
   /* TPARA */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA));
   G__memfunc_setup("TPARA",376,G__TPARA_TPARA_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPARA),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPARA",376,G__TPARA_TPARA_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPARA),-1,0,9,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - dx "
"f - 'Float_t' 0 - dy f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - alpha f - 'Float_t' 0 - theta "
"f - 'Float_t' 0 - phi",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAlpha",774,G__TPARA_GetAlpha_3_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTheta",790,G__TPARA_GetTheta_4_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPhi",577,G__TPARA_GetPhi_5_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TPARA_SetPoints_6_0,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPARA_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPARA_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPARA_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPARA_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPARA_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPARA_Class_2_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPARA_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPARA_IsA_4_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPARA_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPARA_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TPARA",376,G__TPARA_TPARA_7_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TPARA),-1,0,1,1,1,0,"u 'TPARA' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TPARA",502,G__TPARA_wATPARA_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGTRA(void) {
   /* TGTRA */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA));
   G__memfunc_setup("TGTRA",386,G__TGTRA_TGTRA_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TGTRA),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGTRA",386,G__TGTRA_TGTRA_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TGTRA),-1,0,15,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - theta f - 'Float_t' 0 - phi "
"f - 'Float_t' 0 - twist f - 'Float_t' 0 - h1 "
"f - 'Float_t' 0 - bl1 f - 'Float_t' 0 - tl1 "
"f - 'Float_t' 0 - alpha1 f - 'Float_t' 0 - h2 "
"f - 'Float_t' 0 - bl2 f - 'Float_t' 0 - tl2 "
"f - 'Float_t' 0 - alpha2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTwist",827,G__TGTRA_GetTwist_3_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetH1",409,G__TGTRA_GetH1_4_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBl1",511,G__TGTRA_GetBl1_5_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTl1",529,G__TGTRA_GetTl1_6_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAlpha1",823,G__TGTRA_GetAlpha1_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetH2",410,G__TGTRA_GetH2_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBl2",512,G__TGTRA_GetBl2_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTl2",530,G__TGTRA_GetTl2_0_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAlpha2",824,G__TGTRA_GetAlpha2_1_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPoints",937,G__TGTRA_SetPoints_2_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGTRA_DeclFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGTRA_DeclFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGTRA_ImplFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGTRA_ImplFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGTRA_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGTRA_Class_8_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGTRA_Dictionary_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGTRA_IsA_0_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGTRA_ShowMembers_1_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGTRA_Streamer_2_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGTRA",386,G__TGTRA_TGTRA_3_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TGTRA),-1,0,1,1,1,0,"u 'TGTRA' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGTRA",512,G__TGTRA_wATGTRA_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPCON(void) {
   /* TPCON */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TPCON));
   G__memfunc_setup("MakeTableOfCoSin",1527,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Create the table of the fSiTab; fCoTab",(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TPCON",388,G__TPCON_TPCON_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPCON),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPCON",388,G__TPCON_TPCON_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPCON),-1,0,6,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - phi1 "
"f - 'Float_t' 0 - dphi1 i - 'Int_t' 0 - nz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DefineSection",1312,G__TPCON_DefineSection_5_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - secNum f - 'Float_t' 0 - z "
"f - 'Float_t' 0 - rmin f - 'Float_t' 0 - rmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TPCON_DistancetoPrimitive_6_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNumberOfDivisions",2038,G__TPCON_GetNumberOfDivisions_7_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPhi1",626,G__TPCON_GetPhi1_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDhi1",614,G__TPCON_GetDhi1_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNz",488,G__TPCON_GetNz_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRmin",694,G__TPCON_GetRmin_1_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRmax",696,G__TPCON_GetRmax_2_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDz",478,G__TPCON_GetDz_3_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNdiv",689,G__TPCON_GetNdiv_4_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPCON_Paint_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNumberOfDivisions",2050,G__TPCON_SetNumberOfDivisions_6_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - p",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TPCON_SetPoints_7_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TPCON_Sizeof3D_8_1,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPCON_DeclFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPCON_DeclFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPCON_ImplFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPCON_ImplFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPCON_Class_Version_3_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPCON_Class_4_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPCON_Dictionary_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPCON_IsA_6_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPCON_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPCON_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TPCON",388,G__TPCON_TPCON_9_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TPCON),-1,0,1,1,1,0,"u 'TPCON' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TPCON",514,G__TPCON_wATPCON_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPGON(void) {
   /* TPGON */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON));
   G__memfunc_setup("TPGON",392,G__TPGON_TPGON_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPGON),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPGON",392,G__TPGON_TPGON_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPGON),-1,0,7,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - phi1 "
"f - 'Float_t' 0 - dphi1 i - 'Int_t' 0 - npdv "
"i - 'Int_t' 0 - nz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TPGON_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPGON_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPGON_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPGON_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPGON_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPGON_Class_8_0,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPGON_Dictionary_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPGON_IsA_0_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPGON_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPGON_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TPGON",392,G__TPGON_TPGON_3_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TPGON),-1,0,1,1,1,0,"u 'TPGON' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TPGON",518,G__TPGON_wATPGON_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSPHE(void) {
   /* TSPHE */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TSPHE));
   G__memfunc_setup("MakeTableOfCoSin",1527,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Create the table of the fSiTab; fCoTab",(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TSPHE",388,G__TSPHE_TSPHE_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TSPHE),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSPHE",388,G__TSPHE_TSPHE_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_TSPHE),-1,0,9,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmin "
"f - 'Float_t' 0 - rmax f - 'Float_t' 0 - themin "
"f - 'Float_t' 0 - themax f - 'Float_t' 0 - phimin "
"f - 'Float_t' 0 - phimax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSPHE",388,G__TSPHE_TSPHE_4_0,105,G__get_linked_tagnum(&G__G__G3DLN_TSPHE),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TSPHE_DistancetoPrimitive_6_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRmin",694,G__TSPHE_GetRmin_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRmax",696,G__TSPHE_GetRmax_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetThemin",901,G__TSPHE_GetThemin_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetThemax",903,G__TSPHE_GetThemax_0_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPhimin",901,G__TSPHE_GetPhimin_1_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPhimax",903,G__TSPHE_GetPhimax_2_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAspectRatio",1407,G__TSPHE_GetAspectRatio_3_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNumberOfDivisions",2038,G__TSPHE_GetNumberOfDivisions_4_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TSPHE_Paint_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAspectRatio",1419,G__TSPHE_SetAspectRatio_6_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.0 factor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetEllipse",1018,G__TSPHE_SetEllipse_7_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - factors",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNumberOfDivisions",2050,G__TSPHE_SetNumberOfDivisions_8_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - p",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TSPHE_SetPoints_9_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TSPHE_Sizeof3D_0_2,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TSPHE_DeclFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSPHE_DeclFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSPHE_ImplFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSPHE_ImplFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSPHE_Class_Version_5_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TSPHE_Class_6_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSPHE_Dictionary_7_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSPHE_IsA_8_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSPHE_ShowMembers_9_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSPHE_Streamer_0_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TSPHE",388,G__TSPHE_TSPHE_1_3,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TSPHE),-1,0,1,1,1,0,"u 'TSPHE' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TSPHE",514,G__TSPHE_wATSPHE_2_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGLKernelABC(void) {
   /* TGLKernelABC */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TGLKernelABC));
   G__memfunc_setup("Invert",632,(G__InterfaceMethod)NULL,70,-1,G__defined_typename("Float_t"),0,1,1,2,0,"F - 'Float_t' 0 - vector",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGLKernelABC",1038,G__TGLKernelABC_TGLKernelABC_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TGLKernelABC),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddRotation",1113,G__TGLKernelABC_AddRotation_3_0,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - rotmatrix D - 'Double_t' 0 - extraangles",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BeginGLCmd",908,G__TGLKernelABC_BeginGLCmd_4_0,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - mode","Begins the vertices of a primitive or a group of like primitives.",(void*)NULL,1);
   G__memfunc_setup("ClearColor",998,G__TGLKernelABC_ClearColor_5_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearGLColor",1145,G__TGLKernelABC_ClearGLColor_6_0,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - red f - 'Float_t' 0 - green "
"f - 'Float_t' 0 - blue f - 'Float_t' 0 - alpha",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearGL",634,G__TGLKernelABC_ClearGL_7_0,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - bufbits",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateGLLists",1270,G__TGLKernelABC_CreateGLLists_8_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - range",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateGLViewerImp",1663,G__TGLKernelABC_CreateGLViewerImp_9_0,85,G__get_linked_tagnum(&G__G__G3DLN_TGLViewerImp),-1,0,4,1,1,0,
"U 'TPadOpenGLView' - 0 - c C - - 0 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePadGLView",1431,G__TGLKernelABC_CreatePadGLView_0_1,85,G__get_linked_tagnum(&G__G__G3DLN_TPadView3D),-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - c",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteGLLists",1269,G__TGLKernelABC_DeleteGLLists_1_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - ilist i - 'Int_t' 0 - range",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DisableGL",839,G__TGLKernelABC_DisableGL_2_1,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EnableGL",730,G__TGLKernelABC_EnableGL_3_1,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EndGLList",838,G__TGLKernelABC_EndGLList_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EndGLCmd",702,G__TGLKernelABC_EndGLCmd_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FlushGL",661,G__TGLKernelABC_FlushGL_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FrontGLFace",1035,G__TGLKernelABC_FrontGLFace_7_1,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - faceflag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGL",435,G__TGLKernelABC_GetGL_8_1,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - mode B - 'Bool_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGL",435,G__TGLKernelABC_GetGL_9_1,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - mode D - 'Double_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGL",435,G__TGLKernelABC_GetGL_0_2,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - mode F - 'Float_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGL",435,G__TGLKernelABC_GetGL_1_2,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - mode I - 'Int_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGLError",957,G__TGLKernelABC_GetGLError_2_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRootLight",1212,G__TGLKernelABC_GetRootLight_3_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTrueColorMode",1604,G__TGLKernelABC_GetTrueColorMode_4_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MultGLMatrix",1194,G__TGLKernelABC_MultGLMatrix_5_2,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - mat",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NewGLList",857,G__TGLKernelABC_NewGLList_6_2,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 1 ilist i 'EG3D2GLmode' - 0 kCOMPILE mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NewGLModelView",1353,G__TGLKernelABC_NewGLModelView_7_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - ilist",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,G__TGLKernelABC_PaintGLPoints_8_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PolygonGLMode",1280,G__TGLKernelABC_PolygonGLMode_9_2,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - face i 'EG3D2GLmode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PushGLMatrix",1192,G__TGLKernelABC_PushGLMatrix_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PopGLMatrix",1079,G__TGLKernelABC_PopGLMatrix_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RotateGL",770,G__TGLKernelABC_RotateGL_2_3,121,-1,-1,0,4,1,1,0,
"d - 'Double_t' 0 - angle d - 'Double_t' 0 - x "
"d - 'Double_t' 0 - y d - 'Double_t' 0 - z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RotateGL",770,G__TGLKernelABC_RotateGL_3_3,121,-1,-1,0,3,1,1,0,
"d - 'Double_t' 0 - Theta d - 'Double_t' 0 - Phi "
"d - 'Double_t' 0 - Psi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLVertex",1085,G__TGLKernelABC_SetGLVertex_4_3,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLColor",958,G__TGLKernelABC_SetGLColor_5_3,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - rgb",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLColorIndex",1462,G__TGLKernelABC_SetGLColorIndex_6_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLLineWidth",1351,G__TGLKernelABC_SetGLLineWidth_7_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLPointSize",1380,G__TGLKernelABC_SetGLPointSize_8_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - size",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStack",802,G__TGLKernelABC_SetStack_9_3,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 0 matrix",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShadeGLModel",1129,G__TGLKernelABC_ShadeGLModel_0_4,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TranslateGL",1089,G__TGLKernelABC_TranslateGL_1_4,121,-1,-1,0,3,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y "
"d - 'Double_t' 0 - z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RunGLList",868,G__TGLKernelABC_RunGLList_2_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - list",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NewProjectionView",1762,G__TGLKernelABC_NewProjectionView_3_4,121,-1,-1,0,3,1,1,0,
"D - 'Double_t' 0 - viewboxmin D - 'Double_t' 0 - viewboxmax "
"b - 'Bool_t' 0 kTRUE perspective",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NewModelView",1206,G__TGLKernelABC_NewModelView_4_4,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - angles D - 'Double_t' 0 - delta",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintCone",897,G__TGLKernelABC_PaintCone_5_4,121,-1,-1,0,3,1,1,0,
"F - 'Float_t' 0 - vertex i - 'Int_t' 0 - ndiv "
"i - 'Int_t' 0 - nstacks",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLine",1320,G__TGLKernelABC_PaintPolyLine_6_4,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintBrik",900,G__TGLKernelABC_PaintBrik_7_4,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRootLight",1224,G__TGLKernelABC_SetRootLight_8_4,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineAttr",1103,G__TGLKernelABC_SetLineAttr_9_4,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 - color i - 'Int_t' 0 1 width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateMatrix",1240,G__TGLKernelABC_UpdateMatrix_0_5,121,-1,-1,0,3,1,1,0,
"D - 'Double_t' 0 0 translate D - 'Double_t' 0 0 rotate "
"b - 'Bool_t' 0 kFALSE isreflection",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTrueColorMode",1616,G__TGLKernelABC_SetTrueColorMode_1_5,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TGLKernelABC",1038,G__TGLKernelABC_TGLKernelABC_2_5,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TGLKernelABC),-1,0,1,1,1,0,"u 'TGLKernelABC' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGLKernelABC",1164,G__TGLKernelABC_wATGLKernelABC_3_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPadView3D(void) {
   /* TPadView3D */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TPadView3D));
   G__memfunc_setup("TPadView3D",891,G__TPadView3D_TPadView3D_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPadView3D),-1,0,0,1,1,0,"","default ctor",(void*)NULL,0);
   G__memfunc_setup("TPadView3D",891,G__TPadView3D_TPadView3D_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPadView3D),-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - pad",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ExecuteEvent",1237,G__TPadView3D_ExecuteEvent_3_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPad",565,G__TPadView3D_GetPad_4_0,85,G__get_linked_tagnum(&G__G__G3DLN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Paint",508,G__TPadView3D_Paint_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Size",411,G__TPadView3D_Size_6_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - width i - 'Int_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintBeginModel",1490,G__TPadView3D_PaintBeginModel_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintEnd",787,G__TPadView3D_PaintEnd_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintScene",1002,G__TPadView3D_PaintScene_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyMarker",1538,G__TPadView3D_PaintPolyMarker_0_1,121,-1,-1,0,2,1,1,0,
"U 'TPolyMarker3D' - 0 - marker C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLine",1320,G__TPadView3D_PaintPolyLine_1_1,121,-1,-1,0,2,1,1,0,
"U 'TPolyLine3D' - 0 - line C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PushMatrix",1045,G__TPadView3D_PushMatrix_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PopMatrix",932,G__TPadView3D_PopMatrix_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAttNode",987,G__TPadView3D_SetAttNode_4_1,121,-1,-1,0,2,1,1,0,
"U 'TNode' - 0 - node C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPad",577,G__TPadView3D_SetPad_5_1,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpdateNodeMatrix",1630,G__TPadView3D_UpdateNodeMatrix_6_1,121,-1,-1,0,2,1,1,0,
"U 'TNode' - 0 - node C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateView",1022,G__TPadView3D_UpdateView_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRange",781,G__TPadView3D_GetRange_8_1,121,-1,-1,0,2,1,1,8,
"D - 'Double_t' 0 - min D - 'Double_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TPadView3D_SetRange_9_1,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - min D - 'Double_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetShift",798,G__TPadView3D_GetShift_0_2,121,-1,-1,0,2,1,1,8,
"D - 'Double_t' 0 - main_shift D - 'Double_t' 0 - extra_shift",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetShift",810,G__TPadView3D_SetShift_1_2,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - main_shift D - 'Double_t' 0 - extra_shift",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAngles",890,G__TPadView3D_GetAngles_2_2,121,-1,-1,0,2,1,1,8,
"D - 'Double_t' 0 - main_angles D - 'Double_t' 0 - extra_angles",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAngles",902,G__TPadView3D_SetAngles_3_2,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - main_angles D - 'Double_t' 0 - extra_angles",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAnglesFactors",1612,G__TPadView3D_GetAnglesFactors_4_2,121,-1,-1,0,1,1,1,8,"D - 'Double_t' 0 - factors",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAnglesFactors",1624,G__TPadView3D_SetAnglesFactors_5_2,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - factors",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetScale",776,G__TPadView3D_GetScale_6_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetScale",788,G__TPadView3D_SetScale_7_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - scale",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TPadView3D",891,G__TPadView3D_TPadView3D_8_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TPadView3D),-1,0,1,1,1,0,"u 'TPadView3D' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TPadView3D",1017,G__TPadView3D_wATPadView3D_9_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTPadOpenGLView(void) {
   /* TPadOpenGLView */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView));
   G__memfunc_setup("MapOpenGL",835,G__TPadOpenGLView_MapOpenGL_0_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateModelView",1519,G__TPadOpenGLView_UpdateModelView_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpdateObjectView",1621,G__TPadOpenGLView_UpdateObjectView_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MoveModelView",1315,G__TPadOpenGLView_MoveModelView_3_0,121,-1,-1,0,2,1,1,0,
"c - 'Char_t' 0 - option i - 'Int_t' 0 1 count",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MoveModelView",1315,G__TPadOpenGLView_MoveModelView_4_0,121,-1,-1,0,2,1,1,0,
"C - 'Char_t' 0 - commands i - 'Int_t' 0 0 display_time",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RotateView",1034,G__TPadOpenGLView_RotateView_5_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPadOpenGLView",1321,G__TPadOpenGLView_TPadOpenGLView_6_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPadOpenGLView",1321,G__TPadOpenGLView_TPadOpenGLView_7_0,105,G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView),-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - pad",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ExecuteEvent",1237,G__TPadOpenGLView_ExecuteEvent_9_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGLList",847,G__TPadOpenGLView_GetGLList_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNextGLList",1262,G__TPadOpenGLView_GetNextGLList_1_1,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSpeedMove",1192,G__TPadOpenGLView_GetSpeedMove_2_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSteps",815,G__TPadOpenGLView_GetSteps_3_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - steps",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPadOpenGLView_Paint_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Size",411,G__TPadOpenGLView_Size_5_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - width i - 'Int_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReleaseLastGLList",1668,G__TPadOpenGLView_ReleaseLastGLList_6_1,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PaintBeginModel",1490,G__TPadOpenGLView_PaintBeginModel_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintEnd",787,G__TPadOpenGLView_PaintEnd_8_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintScene",1002,G__TPadOpenGLView_PaintScene_9_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyMarker",1538,G__TPadOpenGLView_PaintPolyMarker_0_2,121,-1,-1,0,2,1,1,0,
"U 'TPolyMarker3D' - 0 - marker C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLine",1320,G__TPadOpenGLView_PaintPolyLine_1_2,121,-1,-1,0,2,1,1,0,
"U 'TPolyLine3D' - 0 - line C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PushMatrix",1045,G__TPadOpenGLView_PushMatrix_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PopMatrix",932,G__TPadOpenGLView_PopMatrix_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetView",926,G__TPadOpenGLView_ResetView_4_2,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAttNode",987,G__TPadOpenGLView_SetAttNode_5_2,121,-1,-1,0,2,1,1,0,
"U 'TNode' - 0 - node C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSpeedMove",1204,G__TPadOpenGLView_SetSpeedMove_6_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - speed",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSteps",827,G__TPadOpenGLView_SetSteps_7_2,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - steps",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateNodeMatrix",1630,G__TPadOpenGLView_UpdateNodeMatrix_8_2,121,-1,-1,0,2,1,1,0,
"U 'TNode' - 0 - node C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateProjectView",1749,G__TPadOpenGLView_UpdateProjectView_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TPadOpenGLView",1321,G__TPadOpenGLView_TPadOpenGLView_0_3,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView),-1,0,1,1,1,0,"u 'TPadOpenGLView' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TPadOpenGLView",1447,G__TPadOpenGLView_wATPadOpenGLView_1_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMarker3DBox(void) {
   /* TMarker3DBox */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox));
   G__memfunc_setup("DistancetoPrimitive",1991,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,2,1,2,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TMarker3DBox",1110,G__TMarker3DBox_TMarker3DBox_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMarker3DBox",1110,G__TMarker3DBox_TMarker3DBox_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox),-1,0,8,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - z f - 'Float_t' 0 - dx "
"f - 'Float_t' 0 - dy f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - theta f - 'Float_t' 0 - phi",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRefObject",1172,G__TMarker3DBox_GetRefObject_5_0,85,G__get_linked_tagnum(&G__G__G3DLN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDirection",1217,G__TMarker3DBox_GetDirection_6_0,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - theta f - 'Float_t' 1 - phi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPosition",1141,G__TMarker3DBox_GetPosition_7_0,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 1 - x f - 'Float_t' 1 - y "
"f - 'Float_t' 1 - z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSize",699,G__TMarker3DBox_GetSize_8_0,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 1 - dx f - 'Float_t' 1 - dy "
"f - 'Float_t' 1 - dz",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Is3D",307,G__TMarker3DBox_Is3D_9_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TMarker3DBox_Paint_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintShape",1005,G__TMarker3DBox_PaintShape_1_1,121,-1,-1,0,1,1,1,0,"U '_x3d_data_' 'X3DBuffer' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TMarker3DBox_SavePrimitive_2_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPoints",937,G__TMarker3DBox_SetPoints_3_1,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - buff",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDirection",1229,G__TMarker3DBox_SetDirection_4_1,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - theta f - 'Float_t' 0 - phi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPosition",1153,G__TMarker3DBox_SetPosition_5_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSize",711,G__TMarker3DBox_SetSize_6_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - dx f - 'Float_t' 0 - dy "
"f - 'Float_t' 0 - dz",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRefObject",1184,G__TMarker3DBox_SetRefObject_7_1,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 0 obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TMarker3DBox_Sizeof3D_8_1,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TMarker3DBox_DeclFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMarker3DBox_DeclFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMarker3DBox_ImplFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMarker3DBox_ImplFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMarker3DBox_Class_Version_3_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMarker3DBox_Class_4_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMarker3DBox_Dictionary_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMarker3DBox_IsA_6_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMarker3DBox_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMarker3DBox_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMarker3DBox",1110,G__TMarker3DBox_TMarker3DBox_9_2,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox),-1,0,1,1,1,0,"u 'TMarker3DBox' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMarker3DBox",1236,G__TMarker3DBox_wATMarker3DBox_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTHelix(void) {
   /* THelix */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_THelix));
   G__memfunc_setup("SetRotMatrix",1238,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Set rotation matrix",(void*)NULL,0);
   G__memfunc_setup("FindClosestPhase",1615,(G__InterfaceMethod)NULL,100,-1,G__defined_typename("Double_t"),0,2,1,2,0,
"d - 'Double_t' 0 - phi0 d - 'Double_t' 0 - cosine",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("THelix",590,G__THelix_THelix_2_0,105,G__get_linked_tagnum(&G__G__G3DLN_THelix),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("THelix",590,G__THelix_THelix_3_0,105,G__get_linked_tagnum(&G__G__G3DLN_THelix),-1,0,7,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y "
"d - 'Double_t' 0 - z d - 'Double_t' 0 - vx "
"d - 'Double_t' 0 - vy d - 'Double_t' 0 - vz "
"d - 'Double_t' 0 - w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("THelix",590,G__THelix_THelix_4_0,105,G__get_linked_tagnum(&G__G__G3DLN_THelix),-1,0,6,1,1,0,
"D - 'Double_t' 0 - xyz D - 'Double_t' 0 - v "
"d - 'Double_t' 0 - w D - 'Double_t' 0 0 range "
"i 'EHelixRangeType' - 0 kHelixZ rtype D - 'Double_t' 0 0 axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("THelix",590,G__THelix_THelix_5_0,105,G__get_linked_tagnum(&G__G__G3DLN_THelix),-1,0,1,1,1,0,"u 'THelix' - 1 - helix",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__THelix_Copy_7_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - helix",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__THelix_Draw_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__THelix_GetOption_9_0,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Is3D",307,G__THelix_Is3D_0_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__THelix_Paint_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__THelix_Print_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__THelix_SavePrimitive_3_1,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOption",933,G__THelix_SetOption_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAxis",705,G__THelix_SetAxis_5_1,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - axis","Define new axis",(void*)NULL,1);
   G__memfunc_setup("SetAxis",705,G__THelix_SetAxis_6_1,121,-1,-1,0,3,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y "
"d - 'Double_t' 0 - z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__THelix_SetRange_7_1,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - range i 'EHelixRangeType' - 0 kHelixZ rtype",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__THelix_SetRange_8_1,121,-1,-1,0,3,1,1,0,
"d - 'Double_t' 0 - r1 d - 'Double_t' 0 - r2 "
"i 'EHelixRangeType' - 0 kHelixZ rtype",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHelix",806,G__THelix_SetHelix_9_1,121,-1,-1,0,6,1,1,0,
"D - 'Double_t' 0 - xyz D - 'Double_t' 0 - v "
"d - 'Double_t' 0 - w D - 'Double_t' 0 0 range "
"i 'EHelixRangeType' - 0 kUnchanged type D - 'Double_t' 0 0 axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sizeof3D",743,G__THelix_Sizeof3D_0_2,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__THelix_DeclFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__THelix_DeclFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__THelix_ImplFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__THelix_ImplFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__THelix_Class_Version_5_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__THelix_Class_6_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__THelix_Dictionary_7_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__THelix_IsA_8_2,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__THelix_ShowMembers_9_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__THelix_Streamer_0_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~THelix",716,G__THelix_wATHelix_1_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTHYPE(void) {
   /* THYPE */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE));
   G__memfunc_setup("THYPE",394,G__THYPE_THYPE_0_0,105,G__get_linked_tagnum(&G__G__G3DLN_THYPE),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("THYPE",394,G__THYPE_THYPE_1_0,105,G__get_linked_tagnum(&G__G__G3DLN_THYPE),-1,0,7,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Text_t' 0 - material f - 'Float_t' 0 - rmin "
"f - 'Float_t' 0 - rmax f - 'Float_t' 0 - dz "
"f - 'Float_t' 0 - phi",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPhi",577,G__THYPE_GetPhi_3_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__THYPE_DeclFileName_4_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__THYPE_DeclFileLine_5_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__THYPE_ImplFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__THYPE_ImplFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__THYPE_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__THYPE_Class_9_0,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__THYPE_Dictionary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__THYPE_IsA_1_1,85,G__get_linked_tagnum(&G__G__G3DLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__THYPE_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__THYPE_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("THYPE",394,G__THYPE_THYPE_4_1,(int)('i'),G__get_linked_tagnum(&G__G__G3DLN_THYPE),-1,0,1,1,1,0,"u 'THYPE' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~THYPE",520,G__THYPE_wATHYPE_5_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__G3D() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__G3D() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)(&gGeometry),85,0,0,G__get_linked_tagnum(&G__G__G3DLN_TGeometry),-1,-1,1,"gGeometry=",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__G3D() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__G3DLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TVirtualPad = { "TVirtualPad" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TGeometry = { "TGeometry" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TAttLine = { "TAttLine" , 99 , -1 };
G__linked_taginfo G__G__G3DLN__x3d_data_ = { "_x3d_data_" , 115 , -1 };
G__linked_taginfo G__G__G3DLN__x3d_sizeof_ = { "_x3d_sizeof_" , 115 , -1 };
G__linked_taginfo G__G__G3DLN_TPolyLine3D = { "TPolyLine3D" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TAttMarker = { "TAttMarker" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TPolyMarker3D = { "TPolyMarker3D" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_THashList = { "THashList" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TNode = { "TNode" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TMaterial = { "TMaterial" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TRotMatrix = { "TRotMatrix" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TShape = { "TShape" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TAttFill = { "TAttFill" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TMixture = { "TMixture" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_dA = { "$" , 101 , -1 };
G__linked_taginfo G__G__G3DLN_TNodeDiv = { "TNodeDiv" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TBRIK = { "TBRIK" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TTRD1 = { "TTRD1" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TTRD2 = { "TTRD2" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TTUBE = { "TTUBE" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TCONE = { "TCONE" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TTUBS = { "TTUBS" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TCTUB = { "TCTUB" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TELTU = { "TELTU" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TCONS = { "TCONS" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TTRAP = { "TTRAP" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TPARA = { "TPARA" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TGTRA = { "TGTRA" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TPCON = { "TPCON" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TPGON = { "TPGON" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TSPHE = { "TSPHE" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TGLKernelABC = { "TGLKernelABC" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TGLViewerImp = { "TGLViewerImp" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TPadView3D = { "TPadView3D" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_TPadOpenGLView = { "TPadOpenGLView" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_EG3D2GLmode = { "EG3D2GLmode" , 101 , -1 };
G__linked_taginfo G__G__G3DLN_TPadOpenGLViewcLcLEDrawMode = { "TPadOpenGLView::EDrawMode" , 101 , -1 };
G__linked_taginfo G__G__G3DLN_TMarker3DBox = { "TMarker3DBox" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_THelix = { "THelix" , 99 , -1 };
G__linked_taginfo G__G__G3DLN_THYPE = { "THYPE" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__G3D() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TGeometry),sizeof(TGeometry),-1,0,"Structure for Matrices, Shapes and Nodes",G__setup_memvarTGeometry,G__setup_memfuncTGeometry);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyLine3D),sizeof(TPolyLine3D),-1,0,"A 3-D PolyLine",G__setup_memvarTPolyLine3D,G__setup_memfuncTPolyLine3D);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TPolyMarker3D),sizeof(TPolyMarker3D),-1,0,"An array of 3-D points with the same marker",G__setup_memvarTPolyMarker3D,G__setup_memfuncTPolyMarker3D);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TNode),sizeof(TNode),-1,0,"Description of parameters to position a 3-D geometry object",G__setup_memvarTNode,G__setup_memfuncTNode);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TMaterial),sizeof(TMaterial),-1,0,"Materials used in the Geometry Shapes",G__setup_memvarTMaterial,G__setup_memfuncTMaterial);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TRotMatrix),sizeof(TRotMatrix),-1,0,"Rotation Matrix for 3-D geometry objects",G__setup_memvarTRotMatrix,G__setup_memfuncTRotMatrix);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TShape),sizeof(TShape),-1,0,"Basic shape",G__setup_memvarTShape,G__setup_memfuncTShape);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TMixture),sizeof(TMixture),-1,0,"Mixtures used in the Geometry Shapes",G__setup_memvarTMixture,G__setup_memfuncTMixture);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TNodeDiv),sizeof(TNodeDiv),-1,0,"Description of parameters to divide a 3-D geometry object",G__setup_memvarTNodeDiv,G__setup_memfuncTNodeDiv);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TBRIK),sizeof(TBRIK),-1,0,"TBRIK shape",G__setup_memvarTBRIK,G__setup_memfuncTBRIK);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD1),sizeof(TTRD1),-1,0,"TRD1 shape",G__setup_memvarTTRD1,G__setup_memfuncTTRD1);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRD2),sizeof(TTRD2),-1,0,"TRD2 shape",G__setup_memvarTTRD2,G__setup_memfuncTTRD2);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBE),sizeof(TTUBE),-1,0,"TUBE shape",G__setup_memvarTTUBE,G__setup_memfuncTTUBE);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONE),sizeof(TCONE),-1,0,"CONE shape",G__setup_memvarTCONE,G__setup_memfuncTCONE);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TTUBS),sizeof(TTUBS),-1,0,"TUBS shape",G__setup_memvarTTUBS,G__setup_memfuncTTUBS);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TCTUB),sizeof(TCTUB),-1,0,"The Cut Tube shape",G__setup_memvarTCTUB,G__setup_memfuncTCTUB);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TELTU),sizeof(TELTU),-1,0,"ELTU shape",G__setup_memvarTELTU,G__setup_memfuncTELTU);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TCONS),sizeof(TCONS),-1,0,"CONS shape",G__setup_memvarTCONS,G__setup_memfuncTCONS);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TTRAP),sizeof(TTRAP),-1,0,"TRAP shape",G__setup_memvarTTRAP,G__setup_memfuncTTRAP);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TPARA),sizeof(TPARA),-1,0,"PARA shape",G__setup_memvarTPARA,G__setup_memfuncTPARA);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TGTRA),sizeof(TGTRA),-1,0,"GTRA shape",G__setup_memvarTGTRA,G__setup_memfuncTGTRA);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TPCON),sizeof(TPCON),-1,0,"PCON shape",G__setup_memvarTPCON,G__setup_memfuncTPCON);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TPGON),sizeof(TPGON),-1,0,"PGON shape",G__setup_memvarTPGON,G__setup_memfuncTPGON);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TSPHE),sizeof(TSPHE),-1,0,"SPHE shape",G__setup_memvarTSPHE,G__setup_memfuncTSPHE);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TGLKernelABC),sizeof(TGLKernelABC),-1,0,(char*)NULL,G__setup_memvarTGLKernelABC,G__setup_memfuncTGLKernelABC);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TPadView3D),sizeof(TPadView3D),-1,0,(char*)NULL,G__setup_memvarTPadView3D,G__setup_memfuncTPadView3D);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TPadOpenGLView),sizeof(TPadOpenGLView),-1,0,(char*)NULL,G__setup_memvarTPadOpenGLView,G__setup_memfuncTPadOpenGLView);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_TMarker3DBox),sizeof(TMarker3DBox),-1,0,"a special 3-D marker designed for event display",G__setup_memvarTMarker3DBox,G__setup_memfuncTMarker3DBox);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_THelix),sizeof(THelix),-1,0,"A Helix drawn as a PolyLine3D",G__setup_memvarTHelix,G__setup_memfuncTHelix);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__G3DLN_THYPE),sizeof(THYPE),-1,0,"HYPE shape",G__setup_memvarTHYPE,G__setup_memfuncTHYPE);
}
extern "C" void G__cpp_setupG__G3D() {
  G__check_setup_version(51111,"G__cpp_setupG__G3D()");
  G__set_cpp_environmentG__G3D();
  G__cpp_setup_tagtableG__G3D();

  G__cpp_setup_inheritanceG__G3D();

  G__cpp_setup_typetableG__G3D();

  G__cpp_setup_memvarG__G3D();

  G__cpp_setup_memfuncG__G3D();
  G__cpp_setup_globalG__G3D();
  G__cpp_setup_funcG__G3D();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__G3D();
  return;
}
class G__cpp_setup_initG__G3D {
  public:
    G__cpp_setup_initG__G3D() { G__add_setup_func("G__G3D",&G__cpp_setupG__G3D); }
   ~G__cpp_setup_initG__G3D() { G__remove_setup_func("G__G3D"); }
};
G__cpp_setup_initG__G3D G__cpp_setup_initializerG__G3D;

//
// File generated by /user/brun/root/bin/rootcint at Tue Dec  8 09:36:53 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGeometry *&obj)
{
   // Read a pointer to an object of class TGeometry.

   obj = (TGeometry *) buf.ReadObject(TGeometry::Class());
   return buf;
}

//______________________________________________________________________________
void TGeometry::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGeometry.

   TClass *R__cl  = TGeometry::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMaterials", &fMaterials);
   R__insp.Inspect(R__cl, R__parent, "*fMatrices", &fMatrices);
   R__insp.Inspect(R__cl, R__parent, "*fShapes", &fShapes);
   R__insp.Inspect(R__cl, R__parent, "*fNodes", &fNodes);
   R__insp.Inspect(R__cl, R__parent, "*fCurrentNode", &fCurrentNode);
   R__insp.Inspect(R__cl, R__parent, "*fMaterialPointer", &fMaterialPointer);
   R__insp.Inspect(R__cl, R__parent, "*fMatrixPointer", &fMatrixPointer);
   R__insp.Inspect(R__cl, R__parent, "*fShapePointer", &fShapePointer);
   R__insp.Inspect(R__cl, R__parent, "fBomb", &fBomb);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPolyLine3D *&obj)
{
   // Read a pointer to an object of class TPolyLine3D.

   obj = (TPolyLine3D *) buf.ReadObject(TPolyLine3D::Class());
   return buf;
}

//______________________________________________________________________________
void TPolyLine3D::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPolyLine3D.

   TClass *R__cl  = TPolyLine3D::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fN", &fN);
   R__insp.Inspect(R__cl, R__parent, "*fP", &fP);
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fGLList", &fGLList);
   R__insp.Inspect(R__cl, R__parent, "fLastPoint", &fLastPoint);
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPolyMarker3D *&obj)
{
   // Read a pointer to an object of class TPolyMarker3D.

   obj = (TPolyMarker3D *) buf.ReadObject(TPolyMarker3D::Class());
   return buf;
}

//______________________________________________________________________________
void TPolyMarker3D::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPolyMarker3D.

   TClass *R__cl  = TPolyMarker3D::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fN", &fN);
   R__insp.Inspect(R__cl, R__parent, "*fP", &fP);
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fGLList", &fGLList);
   TObject::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TNode *&obj)
{
   // Read a pointer to an object of class TNode.

   obj = (TNode *) buf.ReadObject(TNode::Class());
   return buf;
}

//______________________________________________________________________________
void TNode::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TNode.

   TClass *R__cl  = TNode::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
   R__insp.Inspect(R__cl, R__parent, "fZ", &fZ);
   R__insp.Inspect(R__cl, R__parent, "*fMatrix", &fMatrix);
   R__insp.Inspect(R__cl, R__parent, "*fShape", &fShape);
   R__insp.Inspect(R__cl, R__parent, "*fParent", &fParent);
   R__insp.Inspect(R__cl, R__parent, "*fNodes", &fNodes);
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fVisibility", &fVisibility);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMaterial *&obj)
{
   // Read a pointer to an object of class TMaterial.

   obj = (TMaterial *) buf.ReadObject(TMaterial::Class());
   return buf;
}

//______________________________________________________________________________
void TMaterial::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMaterial.

   TClass *R__cl  = TMaterial::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNumber", &fNumber);
   R__insp.Inspect(R__cl, R__parent, "fA", &fA);
   R__insp.Inspect(R__cl, R__parent, "fZ", &fZ);
   R__insp.Inspect(R__cl, R__parent, "fDensity", &fDensity);
   R__insp.Inspect(R__cl, R__parent, "fRadLength", &fRadLength);
   R__insp.Inspect(R__cl, R__parent, "fInterLength", &fInterLength);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TRotMatrix *&obj)
{
   // Read a pointer to an object of class TRotMatrix.

   obj = (TRotMatrix *) buf.ReadObject(TRotMatrix::Class());
   return buf;
}

//______________________________________________________________________________
void TRotMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRotMatrix.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fNumber;
      R__b >> fType;
      R__b >> fTheta;
      R__b >> fPhi;
      R__b >> fPsi;
      R__b.ReadStaticArray(fMatrix);
   } else {
      R__b.WriteVersion(TRotMatrix::IsA());
      TNamed::Streamer(R__b);
      R__b << fNumber;
      R__b << fType;
      R__b << fTheta;
      R__b << fPhi;
      R__b << fPsi;
      R__b.WriteArray(fMatrix, 9);
   }
}

//______________________________________________________________________________
void TRotMatrix::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TRotMatrix.

   TClass *R__cl  = TRotMatrix::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNumber", &fNumber);
   R__insp.Inspect(R__cl, R__parent, "fType", &fType);
   R__insp.Inspect(R__cl, R__parent, "fTheta", &fTheta);
   R__insp.Inspect(R__cl, R__parent, "fPhi", &fPhi);
   R__insp.Inspect(R__cl, R__parent, "fPsi", &fPsi);
   R__insp.Inspect(R__cl, R__parent, "fMatrix[9]", fMatrix);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TShape *&obj)
{
   // Read a pointer to an object of class TShape.

   obj = (TShape *) buf.ReadObject(TShape::Class());
   return buf;
}

//______________________________________________________________________________
void TShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TShape.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TNamed::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b >> fNumber;
      R__b >> fVisibility;
      R__b >> fMaterial;
   } else {
      R__b.WriteVersion(TShape::IsA());
      TNamed::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b << fNumber;
      R__b << fVisibility;
      R__b << fMaterial;
   }
}

//______________________________________________________________________________
void TShape::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TShape.

   TClass *R__cl  = TShape::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNumber", &fNumber);
   R__insp.Inspect(R__cl, R__parent, "fVisibility", &fVisibility);
   R__insp.Inspect(R__cl, R__parent, "*fMaterial", &fMaterial);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMixture *&obj)
{
   // Read a pointer to an object of class TMixture.

   obj = (TMixture *) buf.ReadObject(TMixture::Class());
   return buf;
}

//______________________________________________________________________________
void TMixture::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMixture.

   TClass *R__cl  = TMixture::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNmixt", &fNmixt);
   R__insp.Inspect(R__cl, R__parent, "*fAmixt", &fAmixt);
   R__insp.Inspect(R__cl, R__parent, "*fZmixt", &fZmixt);
   R__insp.Inspect(R__cl, R__parent, "*fWmixt", &fWmixt);
   TMaterial::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TNodeDiv *&obj)
{
   // Read a pointer to an object of class TNodeDiv.

   obj = (TNodeDiv *) buf.ReadObject(TNodeDiv::Class());
   return buf;
}

//______________________________________________________________________________
void TNodeDiv::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNodeDiv.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TNode::Streamer(R__b);
      R__b >> fNdiv;
      R__b >> fAxis;
   } else {
      R__b.WriteVersion(TNodeDiv::IsA());
      TNode::Streamer(R__b);
      R__b << fNdiv;
      R__b << fAxis;
   }
}

//______________________________________________________________________________
void TNodeDiv::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TNodeDiv.

   TClass *R__cl  = TNodeDiv::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNdiv", &fNdiv);
   R__insp.Inspect(R__cl, R__parent, "fAxis", &fAxis);
   TNode::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TBRIK *&obj)
{
   // Read a pointer to an object of class TBRIK.

   obj = (TBRIK *) buf.ReadObject(TBRIK::Class());
   return buf;
}

//______________________________________________________________________________
void TBRIK::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBRIK.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TShape::Streamer(R__b);
      R__b >> fDx;
      R__b >> fDy;
      R__b >> fDz;
   } else {
      R__b.WriteVersion(TBRIK::IsA());
      TShape::Streamer(R__b);
      R__b << fDx;
      R__b << fDy;
      R__b << fDz;
   }
}

//______________________________________________________________________________
void TBRIK::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TBRIK.

   TClass *R__cl  = TBRIK::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fDx", &fDx);
   R__insp.Inspect(R__cl, R__parent, "fDy", &fDy);
   R__insp.Inspect(R__cl, R__parent, "fDz", &fDz);
   TShape::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TTRD1 *&obj)
{
   // Read a pointer to an object of class TTRD1.

   obj = (TTRD1 *) buf.ReadObject(TTRD1::Class());
   return buf;
}

//______________________________________________________________________________
void TTRD1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTRD1.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TBRIK::Streamer(R__b);
      R__b >> fDx2;
   } else {
      R__b.WriteVersion(TTRD1::IsA());
      TBRIK::Streamer(R__b);
      R__b << fDx2;
   }
}

//______________________________________________________________________________
void TTRD1::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TTRD1.

   TClass *R__cl  = TTRD1::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fDx2", &fDx2);
   TBRIK::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TTRD2 *&obj)
{
   // Read a pointer to an object of class TTRD2.

   obj = (TTRD2 *) buf.ReadObject(TTRD2::Class());
   return buf;
}

//______________________________________________________________________________
void TTRD2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTRD2.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TBRIK::Streamer(R__b);
      R__b >> fDx2;
      R__b >> fDy2;
   } else {
      R__b.WriteVersion(TTRD2::IsA());
      TBRIK::Streamer(R__b);
      R__b << fDx2;
      R__b << fDy2;
   }
}

//______________________________________________________________________________
void TTRD2::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TTRD2.

   TClass *R__cl  = TTRD2::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fDx2", &fDx2);
   R__insp.Inspect(R__cl, R__parent, "fDy2", &fDy2);
   TBRIK::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TTUBE *&obj)
{
   // Read a pointer to an object of class TTUBE.

   obj = (TTUBE *) buf.ReadObject(TTUBE::Class());
   return buf;
}

//______________________________________________________________________________
void TTUBE::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TTUBE.

   TClass *R__cl  = TTUBE::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fRmin", &fRmin);
   R__insp.Inspect(R__cl, R__parent, "fRmax", &fRmax);
   R__insp.Inspect(R__cl, R__parent, "fDz", &fDz);
   R__insp.Inspect(R__cl, R__parent, "fNdiv", &fNdiv);
   R__insp.Inspect(R__cl, R__parent, "fAspectRatio", &fAspectRatio);
   R__insp.Inspect(R__cl, R__parent, "*fSiTab", &fSiTab);
   R__insp.Inspect(R__cl, R__parent, "*fCoTab", &fCoTab);
   TShape::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TCONE *&obj)
{
   // Read a pointer to an object of class TCONE.

   obj = (TCONE *) buf.ReadObject(TCONE::Class());
   return buf;
}

//______________________________________________________________________________
void TCONE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCONE.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TTUBE::Streamer(R__b);
      R__b >> fRmin2;
      R__b >> fRmax2;
   } else {
      R__b.WriteVersion(TCONE::IsA());
      TTUBE::Streamer(R__b);
      R__b << fRmin2;
      R__b << fRmax2;
   }
}

//______________________________________________________________________________
void TCONE::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TCONE.

   TClass *R__cl  = TCONE::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fRmin2", &fRmin2);
   R__insp.Inspect(R__cl, R__parent, "fRmax2", &fRmax2);
   TTUBE::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TTUBS *&obj)
{
   // Read a pointer to an object of class TTUBS.

   obj = (TTUBS *) buf.ReadObject(TTUBS::Class());
   return buf;
}

//______________________________________________________________________________
void TTUBS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTUBS.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TTUBE::Streamer(R__b);
      R__b >> fPhi1;
      R__b >> fPhi2;
   } else {
      R__b.WriteVersion(TTUBS::IsA());
      TTUBE::Streamer(R__b);
      R__b << fPhi1;
      R__b << fPhi2;
   }
}

//______________________________________________________________________________
void TTUBS::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TTUBS.

   TClass *R__cl  = TTUBS::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fPhi1", &fPhi1);
   R__insp.Inspect(R__cl, R__parent, "fPhi2", &fPhi2);
   TTUBE::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TCTUB *&obj)
{
   // Read a pointer to an object of class TCTUB.

   obj = (TCTUB *) buf.ReadObject(TCTUB::Class());
   return buf;
}

//______________________________________________________________________________
void TCTUB::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCTUB.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TTUBS::Streamer(R__b);
      R__b.ReadStaticArray(fCosLow);
      R__b.ReadStaticArray(fCosHigh);
   } else {
      R__b.WriteVersion(TCTUB::IsA());
      TTUBS::Streamer(R__b);
      R__b.WriteArray(fCosLow, 3);
      R__b.WriteArray(fCosHigh, 3);
   }
}

//______________________________________________________________________________
void TCTUB::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TCTUB.

   TClass *R__cl  = TCTUB::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fCosLow[3]", fCosLow);
   R__insp.Inspect(R__cl, R__parent, "fCosHigh[3]", fCosHigh);
   TTUBS::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TELTU *&obj)
{
   // Read a pointer to an object of class TELTU.

   obj = (TELTU *) buf.ReadObject(TELTU::Class());
   return buf;
}

//______________________________________________________________________________
void TELTU::Streamer(TBuffer &R__b)
{
   // Stream an object of class TELTU.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TTUBE::Streamer(R__b);
   } else {
      R__b.WriteVersion(TELTU::IsA());
      TTUBE::Streamer(R__b);
   }
}

//______________________________________________________________________________
void TELTU::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TELTU.

   TClass *R__cl  = TELTU::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TTUBE::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TCONS *&obj)
{
   // Read a pointer to an object of class TCONS.

   obj = (TCONS *) buf.ReadObject(TCONS::Class());
   return buf;
}

//______________________________________________________________________________
void TCONS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCONS.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TTUBS::Streamer(R__b);
      R__b >> fRmin2;
      R__b >> fRmax2;
   } else {
      R__b.WriteVersion(TCONS::IsA());
      TTUBS::Streamer(R__b);
      R__b << fRmin2;
      R__b << fRmax2;
   }
}

//______________________________________________________________________________
void TCONS::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TCONS.

   TClass *R__cl  = TCONS::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fRmin2", &fRmin2);
   R__insp.Inspect(R__cl, R__parent, "fRmax2", &fRmax2);
   TTUBS::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TTRAP *&obj)
{
   // Read a pointer to an object of class TTRAP.

   obj = (TTRAP *) buf.ReadObject(TTRAP::Class());
   return buf;
}

//______________________________________________________________________________
void TTRAP::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTRAP.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TBRIK::Streamer(R__b);
      R__b >> fH1;
      R__b >> fBl1;
      R__b >> fTl1;
      R__b >> fAlpha1;
      R__b >> fH2;
      R__b >> fBl2;
      R__b >> fTl2;
      R__b >> fAlpha2;
   } else {
      R__b.WriteVersion(TTRAP::IsA());
      TBRIK::Streamer(R__b);
      R__b << fH1;
      R__b << fBl1;
      R__b << fTl1;
      R__b << fAlpha1;
      R__b << fH2;
      R__b << fBl2;
      R__b << fTl2;
      R__b << fAlpha2;
   }
}

//______________________________________________________________________________
void TTRAP::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TTRAP.

   TClass *R__cl  = TTRAP::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fH1", &fH1);
   R__insp.Inspect(R__cl, R__parent, "fBl1", &fBl1);
   R__insp.Inspect(R__cl, R__parent, "fTl1", &fTl1);
   R__insp.Inspect(R__cl, R__parent, "fAlpha1", &fAlpha1);
   R__insp.Inspect(R__cl, R__parent, "fH2", &fH2);
   R__insp.Inspect(R__cl, R__parent, "fBl2", &fBl2);
   R__insp.Inspect(R__cl, R__parent, "fTl2", &fTl2);
   R__insp.Inspect(R__cl, R__parent, "fAlpha2", &fAlpha2);
   TBRIK::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPARA *&obj)
{
   // Read a pointer to an object of class TPARA.

   obj = (TPARA *) buf.ReadObject(TPARA::Class());
   return buf;
}

//______________________________________________________________________________
void TPARA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPARA.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TBRIK::Streamer(R__b);
      R__b >> fAlpha;
      R__b >> fTheta;
      R__b >> fPhi;
   } else {
      R__b.WriteVersion(TPARA::IsA());
      TBRIK::Streamer(R__b);
      R__b << fAlpha;
      R__b << fTheta;
      R__b << fPhi;
   }
}

//______________________________________________________________________________
void TPARA::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPARA.

   TClass *R__cl  = TPARA::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fAlpha", &fAlpha);
   R__insp.Inspect(R__cl, R__parent, "fTheta", &fTheta);
   R__insp.Inspect(R__cl, R__parent, "fPhi", &fPhi);
   TBRIK::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGTRA *&obj)
{
   // Read a pointer to an object of class TGTRA.

   obj = (TGTRA *) buf.ReadObject(TGTRA::Class());
   return buf;
}

//______________________________________________________________________________
void TGTRA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTRA.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TBRIK::Streamer(R__b);
      R__b >> fTwist;
      R__b >> fH1;
      R__b >> fBl1;
      R__b >> fTl1;
      R__b >> fAlpha1;
      R__b >> fH2;
      R__b >> fBl2;
      R__b >> fTl2;
      R__b >> fAlpha2;
   } else {
      R__b.WriteVersion(TGTRA::IsA());
      TBRIK::Streamer(R__b);
      R__b << fTwist;
      R__b << fH1;
      R__b << fBl1;
      R__b << fTl1;
      R__b << fAlpha1;
      R__b << fH2;
      R__b << fBl2;
      R__b << fTl2;
      R__b << fAlpha2;
   }
}

//______________________________________________________________________________
void TGTRA::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGTRA.

   TClass *R__cl  = TGTRA::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fTwist", &fTwist);
   R__insp.Inspect(R__cl, R__parent, "fH1", &fH1);
   R__insp.Inspect(R__cl, R__parent, "fBl1", &fBl1);
   R__insp.Inspect(R__cl, R__parent, "fTl1", &fTl1);
   R__insp.Inspect(R__cl, R__parent, "fAlpha1", &fAlpha1);
   R__insp.Inspect(R__cl, R__parent, "fH2", &fH2);
   R__insp.Inspect(R__cl, R__parent, "fBl2", &fBl2);
   R__insp.Inspect(R__cl, R__parent, "fTl2", &fTl2);
   R__insp.Inspect(R__cl, R__parent, "fAlpha2", &fAlpha2);
   TBRIK::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPCON *&obj)
{
   // Read a pointer to an object of class TPCON.

   obj = (TPCON *) buf.ReadObject(TPCON::Class());
   return buf;
}

//______________________________________________________________________________
void TPCON::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPCON.

   TClass *R__cl  = TPCON::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fSiTab", &fSiTab);
   R__insp.Inspect(R__cl, R__parent, "*fCoTab", &fCoTab);
   R__insp.Inspect(R__cl, R__parent, "fPhi1", &fPhi1);
   R__insp.Inspect(R__cl, R__parent, "fDphi1", &fDphi1);
   R__insp.Inspect(R__cl, R__parent, "fNz", &fNz);
   R__insp.Inspect(R__cl, R__parent, "*fRmin", &fRmin);
   R__insp.Inspect(R__cl, R__parent, "*fRmax", &fRmax);
   R__insp.Inspect(R__cl, R__parent, "*fDz", &fDz);
   R__insp.Inspect(R__cl, R__parent, "fNdiv", &fNdiv);
   TShape::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPGON *&obj)
{
   // Read a pointer to an object of class TPGON.

   obj = (TPGON *) buf.ReadObject(TPGON::Class());
   return buf;
}

//______________________________________________________________________________
void TPGON::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPGON.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TPCON::Streamer(R__b);
   } else {
      R__b.WriteVersion(TPGON::IsA());
      TPCON::Streamer(R__b);
   }
}

//______________________________________________________________________________
void TPGON::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPGON.

   TClass *R__cl  = TPGON::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TPCON::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSPHE *&obj)
{
   // Read a pointer to an object of class TSPHE.

   obj = (TSPHE *) buf.ReadObject(TSPHE::Class());
   return buf;
}

//______________________________________________________________________________
void TSPHE::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSPHE.

   TClass *R__cl  = TSPHE::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fSiTab", &fSiTab);
   R__insp.Inspect(R__cl, R__parent, "*fCoTab", &fCoTab);
   R__insp.Inspect(R__cl, R__parent, "*fCoThetaTab", &fCoThetaTab);
   R__insp.Inspect(R__cl, R__parent, "fNdiv", &fNdiv);
   R__insp.Inspect(R__cl, R__parent, "fNz", &fNz);
   R__insp.Inspect(R__cl, R__parent, "fAspectRatio", &fAspectRatio);
   R__insp.Inspect(R__cl, R__parent, "fRmin", &fRmin);
   R__insp.Inspect(R__cl, R__parent, "fRmax", &fRmax);
   R__insp.Inspect(R__cl, R__parent, "fThemin", &fThemin);
   R__insp.Inspect(R__cl, R__parent, "fThemax", &fThemax);
   R__insp.Inspect(R__cl, R__parent, "fPhimin", &fPhimin);
   R__insp.Inspect(R__cl, R__parent, "fPhimax", &fPhimax);
   R__insp.Inspect(R__cl, R__parent, "faX", &faX);
   R__insp.Inspect(R__cl, R__parent, "faY", &faY);
   R__insp.Inspect(R__cl, R__parent, "faZ", &faZ);
   TShape::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMarker3DBox *&obj)
{
   // Read a pointer to an object of class TMarker3DBox.

   obj = (TMarker3DBox *) buf.ReadObject(TMarker3DBox::Class());
   return buf;
}

//______________________________________________________________________________
void TMarker3DBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMarker3DBox.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b >> fX;
      R__b >> fY;
      R__b >> fZ;
      R__b >> fDx;
      R__b >> fDy;
      R__b >> fDz;
      R__b >> fTheta;
      R__b >> fPhi;
      R__b >> fRefObject;
   } else {
      R__b.WriteVersion(TMarker3DBox::IsA());
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      R__b << fX;
      R__b << fY;
      R__b << fZ;
      R__b << fDx;
      R__b << fDy;
      R__b << fDz;
      R__b << fTheta;
      R__b << fPhi;
      R__b << fRefObject;
   }
}

//______________________________________________________________________________
void TMarker3DBox::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMarker3DBox.

   TClass *R__cl  = TMarker3DBox::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
   R__insp.Inspect(R__cl, R__parent, "fZ", &fZ);
   R__insp.Inspect(R__cl, R__parent, "fDx", &fDx);
   R__insp.Inspect(R__cl, R__parent, "fDy", &fDy);
   R__insp.Inspect(R__cl, R__parent, "fDz", &fDz);
   R__insp.Inspect(R__cl, R__parent, "fTheta", &fTheta);
   R__insp.Inspect(R__cl, R__parent, "fPhi", &fPhi);
   R__insp.Inspect(R__cl, R__parent, "*fRefObject", &fRefObject);
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, THelix *&obj)
{
   // Read a pointer to an object of class THelix.

   obj = (THelix *) buf.ReadObject(THelix::Class());
   return buf;
}

//______________________________________________________________________________
void THelix::Streamer(TBuffer &R__b)
{
   // Stream an object of class THelix.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TPolyLine3D::Streamer(R__b);
      R__b >> fX0;
      R__b >> fY0;
      R__b >> fZ0;
      R__b >> fVt;
      R__b >> fPhi0;
      R__b >> fVz;
      R__b >> fW;
      R__b.ReadStaticArray(fAxis);
      R__b >> fRotMat;
      R__b.ReadStaticArray(fRange);
   } else {
      R__b.WriteVersion(THelix::IsA());
      TPolyLine3D::Streamer(R__b);
      R__b << fX0;
      R__b << fY0;
      R__b << fZ0;
      R__b << fVt;
      R__b << fPhi0;
      R__b << fVz;
      R__b << fW;
      R__b.WriteArray(fAxis, 3);
      R__b << fRotMat;
      R__b.WriteArray(fRange, 2);
   }
}

//______________________________________________________________________________
void THelix::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class THelix.

   TClass *R__cl  = THelix::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX0", &fX0);
   R__insp.Inspect(R__cl, R__parent, "fY0", &fY0);
   R__insp.Inspect(R__cl, R__parent, "fZ0", &fZ0);
   R__insp.Inspect(R__cl, R__parent, "fVt", &fVt);
   R__insp.Inspect(R__cl, R__parent, "fPhi0", &fPhi0);
   R__insp.Inspect(R__cl, R__parent, "fVz", &fVz);
   R__insp.Inspect(R__cl, R__parent, "fW", &fW);
   R__insp.Inspect(R__cl, R__parent, "fAxis[3]", fAxis);
   R__insp.Inspect(R__cl, R__parent, "*fRotMat", &fRotMat);
   R__insp.Inspect(R__cl, R__parent, "fRange[2]", fRange);
   TPolyLine3D::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, THYPE *&obj)
{
   // Read a pointer to an object of class THYPE.

   obj = (THYPE *) buf.ReadObject(THYPE::Class());
   return buf;
}

//______________________________________________________________________________
void THYPE::Streamer(TBuffer &R__b)
{
   // Stream an object of class THYPE.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TTUBE::Streamer(R__b);
      R__b >> fPhi;
   } else {
      R__b.WriteVersion(THYPE::IsA());
      TTUBE::Streamer(R__b);
      R__b << fPhi;
   }
}

//______________________________________________________________________________
void THYPE::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class THYPE.

   TClass *R__cl  = THYPE::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fPhi", &fPhi);
   TTUBE::ShowMembers(R__insp, R__parent);
}

