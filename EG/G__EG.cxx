//*CMZ :  2.00/12 08/10/98  19.49.34  by  Fons Rademakers
//*-- Author :    Fons Rademakers   08/10/98
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
extern void G__cpp_setup_tagtableG__EG();
extern void G__cpp_setup_inheritanceG__EG();
extern void G__cpp_setup_typetableG__EG();
extern void G__cpp_setup_memvarG__EG();
extern void G__cpp_setup_globalG__EG();
extern void G__cpp_setup_memfuncG__EG();
extern void G__cpp_setup_funcG__EG();
extern void G__set_cpp_environmentG__EG();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TGenerator.h"
#include "TPrimary.h"
#include "TAttParticle.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__EGLN_TClass;
extern G__linked_taginfo G__G__EGLN_TObjArray;
extern G__linked_taginfo G__G__EGLN_TObject;
extern G__linked_taginfo G__G__EGLN_TString;
extern G__linked_taginfo G__G__EGLN_TNamed;
extern G__linked_taginfo G__G__EGLN_TPrimary;
extern G__linked_taginfo G__G__EGLN_TGenerator;
extern G__linked_taginfo G__G__EGLN_TAttLine;
extern G__linked_taginfo G__G__EGLN__x3d_data_;
extern G__linked_taginfo G__G__EGLN__x3d_sizeof_;
extern G__linked_taginfo G__G__EGLN_TAttParticle;
extern G__linked_taginfo G__G__EGLN_THashList;
/********************************************************
* G__EG.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__EG() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TGenerator.h");
  G__add_compiledheader("TPrimary.h");
  G__add_compiledheader("TAttParticle.h");
}
int G__cpp_dllrevG__EG() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TPrimary */
static int G__TPrimary_TPrimary_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPrimary *p=NULL;
   if(G__getaryconstruct()) p=new TPrimary[G__getaryconstruct()];
   else                    p=new TPrimary;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TPrimary);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_TPrimary_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TPrimary *p=NULL;
   switch(libp->paran) {
   case 14:
      p = new TPrimary(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Double_t)G__double(libp->para[7])
,(Double_t)G__double(libp->para[8]),(Double_t)G__double(libp->para[9])
,(Double_t)G__double(libp->para[10]),(Double_t)G__double(libp->para[11])
,(Double_t)G__double(libp->para[12]),(Text_t*)G__int(libp->para[13]));
      break;
   case 13:
      p = new TPrimary(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Double_t)G__double(libp->para[7])
,(Double_t)G__double(libp->para[8]),(Double_t)G__double(libp->para[9])
,(Double_t)G__double(libp->para[10]),(Double_t)G__double(libp->para[11])
,(Double_t)G__double(libp->para[12]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TPrimary);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_DistancetoPrimitive_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPrimary*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_ExecuteEvent_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetParticle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPrimary*)(G__getstructoffset()))->GetParticle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPrimary*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetTitle_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPrimary*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetFirstMother_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPrimary*)(G__getstructoffset()))->GetFirstMother());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetSecondMother_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPrimary*)(G__getstructoffset()))->GetSecondMother());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetGeneration_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPrimary*)(G__getstructoffset()))->GetGeneration());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetXMomentum_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetXMomentum());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetYMomentum_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetYMomentum());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetZMomentum_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetZMomentum());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetTotalEnergy_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetTotalEnergy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetXPosition_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetXPosition());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetYPosition_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetYPosition());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetZPosition_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetZPosition());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetTime_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetTimeEnd_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TPrimary*)(G__getstructoffset()))->GetTimeEnd());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_GetType_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPrimary*)(G__getstructoffset()))->GetType());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_Is3D_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TPrimary*)(G__getstructoffset()))->Is3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_Paint_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_Print_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_Sizeof3D_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_DeclFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPrimary*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_DeclFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPrimary*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_ImplFileName_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TPrimary*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_ImplFileLine_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TPrimary*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_Class_Version_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TPrimary*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_Class_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPrimary*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_Dictionary_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_IsA_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TPrimary*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_ShowMembers_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TPrimary_Streamer_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TPrimary*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TPrimary_TPrimary_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TPrimary *p;
   if(1!=libp->paran) ;
   p=new TPrimary(*(TPrimary*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TPrimary);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TPrimary_wATPrimary_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TPrimary *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TPrimary *)((G__getstructoffset())+sizeof(TPrimary)*i);
   else  delete (TPrimary *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGenerator */
static int G__TGenerator_TGenerator_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGenerator *p=NULL;
   if(G__getaryconstruct()) p=new TGenerator[G__getaryconstruct()];
   else                    p=new TGenerator;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TGenerator);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_TGenerator_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGenerator *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TGenerator((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGenerator((Text_t*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TGenerator);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_Browse_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_DistancetoPrimitive_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGenerator*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_Draw_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_ExecuteEvent_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_GetPrimaries_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,85,(long)((TGenerator*)(G__getstructoffset()))->GetPrimaries((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TGenerator*)(G__getstructoffset()))->GetPrimaries());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_GetPrimary_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGenerator*)(G__getstructoffset()))->GetPrimary((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_GetNumberOfPrimaries_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGenerator*)(G__getstructoffset()))->GetNumberOfPrimaries());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_GetListOfPrimaries_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGenerator*)(G__getstructoffset()))->GetListOfPrimaries());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_GetPtCut_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TGenerator*)(G__getstructoffset()))->GetPtCut());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_Paint_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_SetPtCut_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetPtCut((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetPtCut();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_SetViewRadius_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRadius((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRadius();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_SetViewRange_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 6:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRange((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->SetViewRange();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_ShowNeutrons_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->ShowNeutrons((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->ShowNeutrons();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_DeclFileName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGenerator*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_DeclFileLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGenerator*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_ImplFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGenerator*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_ImplFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGenerator*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_Class_Version_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGenerator*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_Class_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGenerator*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_Dictionary_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_IsA_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGenerator*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_ShowMembers_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGenerator_Streamer_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGenerator*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGenerator_TGenerator_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGenerator *p;
   if(1!=libp->paran) ;
   p=new TGenerator(*(TGenerator*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TGenerator);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGenerator_wATGenerator_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGenerator *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGenerator *)((G__getstructoffset())+sizeof(TGenerator)*i);
   else  delete (TGenerator *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttParticle */
static int G__TAttParticle_TAttParticle_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttParticle *p=NULL;
   if(G__getaryconstruct()) p=new TAttParticle[G__getaryconstruct()];
   else                    p=new TAttParticle;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TAttParticle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_TAttParticle_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttParticle *p=NULL;
   switch(libp->paran) {
   case 11:
      p = new TAttParticle(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Bool_t)G__int(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Text_t*)G__int(libp->para[6]),(Int_t)G__int(libp->para[7])
,(Int_t)G__int(libp->para[8]),(Double_t)G__double(libp->para[9])
,(Double_t)G__double(libp->para[10]));
      break;
   case 10:
      p = new TAttParticle(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Bool_t)G__int(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Text_t*)G__int(libp->para[6]),(Int_t)G__int(libp->para[7])
,(Int_t)G__int(libp->para[8]),(Double_t)G__double(libp->para[9]));
      break;
   case 9:
      p = new TAttParticle(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Bool_t)G__int(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Text_t*)G__int(libp->para[6]),(Int_t)G__int(libp->para[7])
,(Int_t)G__int(libp->para[8]));
      break;
   case 8:
      p = new TAttParticle(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Bool_t)G__int(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Text_t*)G__int(libp->para[6]),(Int_t)G__int(libp->para[7]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TAttParticle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_ConvertISAtoPDG_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttParticle*)(G__getstructoffset()))->ConvertISAtoPDG((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_DefinePDG_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttParticle*)(G__getstructoffset()))->DefinePDG();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetCharge_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TAttParticle*)(G__getstructoffset()))->GetCharge());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetEnergyCut_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TAttParticle*)(G__getstructoffset()))->GetEnergyCut());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetEnergyLimit_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TAttParticle*)(G__getstructoffset()))->GetEnergyLimit());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetGranularity_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TAttParticle*)(G__getstructoffset()))->GetGranularity());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetDecayWidth_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TAttParticle*)(G__getstructoffset()))->GetDecayWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetMass_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TAttParticle*)(G__getstructoffset()))->GetMass());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetMCNumber_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttParticle*)(G__getstructoffset()))->GetMCNumber());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetParticle_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttParticle*)(G__getstructoffset()))->GetParticle((Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetParticle_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttParticle*)(G__getstructoffset()))->GetParticle((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetParticleType_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttParticle*)(G__getstructoffset()))->GetParticleType());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_GetStable_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TAttParticle*)(G__getstructoffset()))->GetStable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_Hash_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TAttParticle*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_Print_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttParticle*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttParticle*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_SampleMass_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TAttParticle*)(G__getstructoffset()))->SampleMass());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_SampleMass_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TAttParticle*)(G__getstructoffset()))->SampleMass((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_DeclFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttParticle*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_DeclFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttParticle*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_ImplFileName_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttParticle*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_ImplFileLine_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttParticle*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_Class_Version_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttParticle*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_Class_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttParticle*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_Dictionary_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttParticle*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_IsA_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttParticle*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_ShowMembers_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttParticle*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttParticle_Streamer_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttParticle*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttParticle_TAttParticle_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttParticle *p;
   if(1!=libp->paran) ;
   p=new TAttParticle(*(TAttParticle*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__EGLN_TAttParticle);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttParticle_wATAttParticle_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttParticle *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttParticle *)((G__getstructoffset())+sizeof(TAttParticle)*i);
   else  delete (TAttParticle *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TPrimary */

/* TGenerator */

/* TAttParticle */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__EG {
 public:
  G__Sizep2memfuncG__EG() {p=&G__Sizep2memfuncG__EG::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__EG::*p)();
};

size_t G__get_sizep2memfuncG__EG()
{
  G__Sizep2memfuncG__EG a;
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
extern "C" void G__cpp_setup_inheritanceG__EG() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__EGLN_TPrimary))) {
     TPrimary *G__Lderived;
     G__Lderived=(TPrimary*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__EGLN_TPrimary),G__get_linked_tagnum(&G__G__EGLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__EGLN_TPrimary),G__get_linked_tagnum(&G__G__EGLN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__EGLN_TGenerator))) {
     TGenerator *G__Lderived;
     G__Lderived=(TGenerator*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__EGLN_TGenerator),G__get_linked_tagnum(&G__G__EGLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__EGLN_TGenerator),G__get_linked_tagnum(&G__G__EGLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__EGLN_TAttParticle))) {
     TAttParticle *G__Lderived;
     G__Lderived=(TAttParticle*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__EGLN_TAttParticle),G__get_linked_tagnum(&G__G__EGLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__EGLN_TAttParticle),G__get_linked_tagnum(&G__G__EGLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__EG() {

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
   G__search_typename2("ReAllocFun_t",81,-1,2,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("ReAllocCFun_t",81,-1,2,
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
   G__search_typename2("X3DBuffer",117,G__get_linked_tagnum(&G__G__EGLN__x3d_data_),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Size3D",117,G__get_linked_tagnum(&G__G__EGLN__x3d_sizeof_),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TPrimary */
static void G__setup_memvarTPrimary(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__EGLN_TPrimary));
   { TPrimary *p; p=(TPrimary*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPart=",0,"Particle id produced");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fFirstMother=",0,"Index of the first mother particle");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSecondMother=",0,"Index of the second mother particle(if any)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fGeneration=",0,"Generation flag: last gen. (0) or not (1) or ghost (2)");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPx=",0,"Momentum in x direction in GeV/c");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPy=",0,"Momentum in y direction in GeV/c");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPz=",0,"Momentum in z direction in GeV/c");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fEtot=",0,"Total energy in GeV");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fVx=",0,"Production vertex x position in user units");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fVy=",0,"Production vertex y position in user units");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fVz=",0,"Production vertex z position in user units");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fTime=",0,"Time of particle production in user units");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fTimeEnd=",0,"Time of particle destruction (always in the pp-cms!)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__EGLN_TString),-1,-1,2,"fType=",0,"Indicator of primary type");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGenerator */
static void G__setup_memvarTGenerator(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__EGLN_TGenerator));
   { TGenerator *p; p=(TGenerator*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPtCut=",0,"Pt cut. Do not show primaries below");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fShowNeutrons=",0,"display neutrons if true");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__EGLN_TObjArray),-1,-1,2,"fPrimaries=",0,"static container of the primaries");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttParticle */
static void G__setup_memvarTAttParticle(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__EGLN_TAttParticle));
   { TAttParticle *p; p=(TAttParticle*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fPDGMass=",0,"Mass of the particle in GeV/c2");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fPDGStable=",0,"Logical indicator, if TRUE the particle can not decay");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fPDGDecayWidth=",0,"Life time of the particle in sec.");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fPDGCharge=",0,"Charge of the particle in units of e");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__EGLN_TString),-1,-1,4,"fParticleType=",0,"Text indicator for the particle family");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fMCnumberOfPDG=",0,"PDG MC number followed by");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fEnergyCut=",0,"Lower energy cut off, the default is 10 keV");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fEnergyLimit=",0,"High energy cut off, the default is 10 TeV");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fGranularity=",0,"Granularity of the fLogEScale");
   G__memvar_setup((void*)(&TAttParticle::fgList),85,0,0,G__get_linked_tagnum(&G__G__EGLN_THashList),-1,-2,1,"fgList=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__EG() {
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
static void G__setup_memfuncTPrimary(void) {
   /* TPrimary */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__EGLN_TPrimary));
   G__memfunc_setup("TPrimary",824,G__TPrimary_TPrimary_0_0,105,G__get_linked_tagnum(&G__G__EGLN_TPrimary),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TPrimary",824,G__TPrimary_TPrimary_1_0,105,G__get_linked_tagnum(&G__G__EGLN_TPrimary),-1,0,14,1,1,0,
"i - 'Int_t' 0 - part i - 'Int_t' 0 - first "
"i - 'Int_t' 0 - second i - 'Int_t' 0 - gener "
"d - 'Double_t' 0 - px d - 'Double_t' 0 - py "
"d - 'Double_t' 0 - pz d - 'Double_t' 0 - etot "
"d - 'Double_t' 0 - vx d - 'Double_t' 0 - vy "
"d - 'Double_t' 0 - vz d - 'Double_t' 0 - time "
"d - 'Double_t' 0 - timend C - 'Text_t' 0 \"\" type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TPrimary_DistancetoPrimitive_3_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TPrimary_ExecuteEvent_4_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetParticle",1108,G__TPrimary_GetParticle_5_0,85,G__get_linked_tagnum(&G__G__EGLN_TAttParticle),-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetName",673,G__TPrimary_GetName_6_0,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TPrimary_GetTitle_7_0,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFirstMother",1431,G__TPrimary_GetFirstMother_8_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSecondMother",1515,G__TPrimary_GetSecondMother_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGeneration",1324,G__TPrimary_GetGeneration_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetXMomentum",1226,G__TPrimary_GetXMomentum_1_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetYMomentum",1227,G__TPrimary_GetYMomentum_2_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetZMomentum",1228,G__TPrimary_GetZMomentum_3_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTotalEnergy",1422,G__TPrimary_GetTotalEnergy_4_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetXPosition",1229,G__TPrimary_GetXPosition_5_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetYPosition",1230,G__TPrimary_GetYPosition_6_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetZPosition",1231,G__TPrimary_GetZPosition_7_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTime",687,G__TPrimary_GetTime_8_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTimeEnd",966,G__TPrimary_GetTimeEnd_9_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetType",706,G__TPrimary_GetType_0_2,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Is3D",307,G__TPrimary_Is3D_1_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TPrimary_Paint_2_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TPrimary_Print_3_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof3D",743,G__TPrimary_Sizeof3D_4_2,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TPrimary_DeclFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TPrimary_DeclFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TPrimary_ImplFileName_7_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TPrimary_ImplFileLine_8_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TPrimary_Class_Version_9_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TPrimary_Class_0_3,85,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TPrimary_Dictionary_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TPrimary_IsA_2_3,85,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TPrimary_ShowMembers_3_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TPrimary_Streamer_4_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TPrimary",824,G__TPrimary_TPrimary_5_3,(int)('i'),G__get_linked_tagnum(&G__G__EGLN_TPrimary),-1,0,1,1,1,0,"u 'TPrimary' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TPrimary",950,G__TPrimary_wATPrimary_6_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGenerator(void) {
   /* TGenerator */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__EGLN_TGenerator));
   G__memfunc_setup("TGenerator",1019,G__TGenerator_TGenerator_0_0,105,G__get_linked_tagnum(&G__G__EGLN_TGenerator),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TGenerator",1019,G__TGenerator_TGenerator_1_0,105,G__get_linked_tagnum(&G__G__EGLN_TGenerator),-1,0,2,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 \"Generator class\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TGenerator_Browse_3_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TGenerator_DistancetoPrimitive_4_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TGenerator_Draw_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TGenerator_ExecuteEvent_6_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrimaries",1228,G__TGenerator_GetPrimaries_7_0,85,G__get_linked_tagnum(&G__G__EGLN_TObjArray),-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrimary",1028,G__TGenerator_GetPrimary_8_0,85,G__get_linked_tagnum(&G__G__EGLN_TPrimary),-1,0,1,1,1,0,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNumberOfPrimaries",2026,G__TGenerator_GetNumberOfPrimaries_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfPrimaries",1821,G__TGenerator_GetListOfPrimaries_0_1,85,G__get_linked_tagnum(&G__G__EGLN_TObjArray),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPtCut",784,G__TGenerator_GetPtCut_1_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Paint",508,G__TGenerator_Paint_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPtCut",796,G__TGenerator_SetPtCut_3_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 ptcut","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetViewRadius",1327,G__TGenerator_SetViewRadius_4_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1000 rbox","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetViewRange",1204,G__TGenerator_SetViewRange_5_1,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 -10000 xmin f - 'Float_t' 0 -10000 ymin "
"f - 'Float_t' 0 -10000 zmin f - 'Float_t' 0 10000 xmax "
"f - 'Float_t' 0 10000 ymax f - 'Float_t' 0 10000 zmax","*MENU*",(void*)NULL,1);
   G__memfunc_setup("ShowNeutrons",1279,G__TGenerator_ShowNeutrons_6_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 1 show","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGenerator_DeclFileName_7_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGenerator_DeclFileLine_8_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGenerator_ImplFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGenerator_ImplFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGenerator_Class_Version_1_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGenerator_Class_2_2,85,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGenerator_Dictionary_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGenerator_IsA_4_2,85,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGenerator_ShowMembers_5_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGenerator_Streamer_6_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGenerator",1019,G__TGenerator_TGenerator_7_2,(int)('i'),G__get_linked_tagnum(&G__G__EGLN_TGenerator),-1,0,1,1,1,0,"u 'TGenerator' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGenerator",1145,G__TGenerator_wATGenerator_8_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttParticle(void) {
   /* TAttParticle */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__EGLN_TAttParticle));
   G__memfunc_setup("TAttParticle",1201,G__TAttParticle_TAttParticle_0_0,105,G__get_linked_tagnum(&G__G__EGLN_TAttParticle),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttParticle",1201,G__TAttParticle_TAttParticle_1_0,105,G__get_linked_tagnum(&G__G__EGLN_TAttParticle),-1,0,11,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"d - 'Double_t' 0 - Mass b - 'Bool_t' 0 - Stable "
"d - 'Double_t' 0 - DecayWidth d - 'Double_t' 0 - Charge "
"C - 'Text_t' 0 - Type i - 'Int_t' 0 - MCnumber "
"i - 'Int_t' 0 90 granularity d - 'Double_t' 0 1.e-5 LowerCutOff "
"d - 'Double_t' 0 1.e4 HighCutOff",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ConvertISAtoPDG",1404,G__TAttParticle_ConvertISAtoPDG_3_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - isaNumber",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DefinePDG",806,G__TAttParticle_DefinePDG_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCharge",874,G__TAttParticle_GetCharge_5_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEnergyCut",1206,G__TAttParticle_GetEnergyCut_6_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetEnergyLimit",1417,G__TAttParticle_GetEnergyLimit_7_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGranularity",1458,G__TAttParticle_GetGranularity_8_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDecayWidth",1286,G__TAttParticle_GetDecayWidth_9_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMass",692,G__TAttParticle_GetMass_0_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMCNumber",1049,G__TAttParticle_GetMCNumber_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetParticle",1108,G__TAttParticle_GetParticle_2_1,85,G__get_linked_tagnum(&G__G__EGLN_TAttParticle),-1,0,1,1,1,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParticle",1108,G__TAttParticle_GetParticle_3_1,85,G__get_linked_tagnum(&G__G__EGLN_TAttParticle),-1,0,1,1,1,0,"i - 'Int_t' 0 - mcnumber",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParticleType",1526,G__TAttParticle_GetParticleType_4_1,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetStable",891,G__TAttParticle_GetStable_5_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TAttParticle_Hash_6_1,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TAttParticle_Print_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SampleMass",1014,G__TAttParticle_SampleMass_8_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SampleMass",1014,G__TAttParticle_SampleMass_9_1,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"d - 'Double_t' 0 - widthcut",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttParticle_DeclFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttParticle_DeclFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttParticle_ImplFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttParticle_ImplFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttParticle_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttParticle_Class_5_2,85,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttParticle_Dictionary_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttParticle_IsA_7_2,85,G__get_linked_tagnum(&G__G__EGLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttParticle_ShowMembers_8_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttParticle_Streamer_9_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttParticle",1201,G__TAttParticle_TAttParticle_0_3,(int)('i'),G__get_linked_tagnum(&G__G__EGLN_TAttParticle),-1,0,1,1,1,0,"u 'TAttParticle' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttParticle",1327,G__TAttParticle_wATAttParticle_1_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__EG() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__EG() {

   /* Setting up global variables */
   G__resetplocal();


   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__EG() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__EGLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__EGLN_TObjArray = { "TObjArray" , 99 , -1 };
G__linked_taginfo G__G__EGLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__EGLN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__EGLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__EGLN_TPrimary = { "TPrimary" , 99 , -1 };
G__linked_taginfo G__G__EGLN_TGenerator = { "TGenerator" , 99 , -1 };
G__linked_taginfo G__G__EGLN_TAttLine = { "TAttLine" , 99 , -1 };
G__linked_taginfo G__G__EGLN__x3d_data_ = { "_x3d_data_" , 115 , -1 };
G__linked_taginfo G__G__EGLN__x3d_sizeof_ = { "_x3d_sizeof_" , 115 , -1 };
G__linked_taginfo G__G__EGLN_TAttParticle = { "TAttParticle" , 99 , -1 };
G__linked_taginfo G__G__EGLN_THashList = { "THashList" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__EG() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__EGLN_TPrimary),sizeof(TPrimary),-1,0,"TPrimary vertex particle information",G__setup_memvarTPrimary,G__setup_memfuncTPrimary);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__EGLN_TGenerator),sizeof(TGenerator),-1,0,"Event generator interface abstract baseclass",G__setup_memvarTGenerator,G__setup_memfuncTGenerator);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__EGLN_TAttParticle),sizeof(TAttParticle),-1,0,"Particle definition",G__setup_memvarTAttParticle,G__setup_memfuncTAttParticle);
}
extern "C" void G__cpp_setupG__EG() {
  G__check_setup_version(51111,"G__cpp_setupG__EG()");
  G__set_cpp_environmentG__EG();
  G__cpp_setup_tagtableG__EG();

  G__cpp_setup_inheritanceG__EG();

  G__cpp_setup_typetableG__EG();

  G__cpp_setup_memvarG__EG();

  G__cpp_setup_memfuncG__EG();
  G__cpp_setup_globalG__EG();
  G__cpp_setup_funcG__EG();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__EG();
  return;
}
class G__cpp_setup_initG__EG {
  public:
    G__cpp_setup_initG__EG() { G__add_setup_func("G__EG",&G__cpp_setupG__EG); }
   ~G__cpp_setup_initG__EG() { G__remove_setup_func("G__EG"); }
};
G__cpp_setup_initG__EG G__cpp_setup_initializerG__EG;

//
// File generated by /home/rdm/root/bin/rootcint at Thu Oct  8 19:49:34 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TPrimary *&obj)
{
   // Read a pointer to an object of class TPrimary.

   obj = (TPrimary *) buf.ReadObject(TPrimary::Class());
   return buf;
}

//______________________________________________________________________________
void TPrimary::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPrimary.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      R__b >> fPart;
      R__b >> fFirstMother;
      R__b >> fSecondMother;
      R__b >> fGeneration;
      R__b >> fPx;
      R__b >> fPy;
      R__b >> fPz;
      R__b >> fEtot;
      R__b >> fVx;
      R__b >> fVy;
      R__b >> fVz;
      R__b >> fTime;
      R__b >> fTimeEnd;
      fType.Streamer(R__b);
   } else {
      R__b.WriteVersion(TPrimary::IsA());
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      R__b << fPart;
      R__b << fFirstMother;
      R__b << fSecondMother;
      R__b << fGeneration;
      R__b << fPx;
      R__b << fPy;
      R__b << fPz;
      R__b << fEtot;
      R__b << fVx;
      R__b << fVy;
      R__b << fVz;
      R__b << fTime;
      R__b << fTimeEnd;
      fType.Streamer(R__b);
   }
}

//______________________________________________________________________________
void TPrimary::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TPrimary.

   TClass *R__cl  = TPrimary::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fPart", &fPart);
   R__insp.Inspect(R__cl, R__parent, "fFirstMother", &fFirstMother);
   R__insp.Inspect(R__cl, R__parent, "fSecondMother", &fSecondMother);
   R__insp.Inspect(R__cl, R__parent, "fGeneration", &fGeneration);
   R__insp.Inspect(R__cl, R__parent, "fPx", &fPx);
   R__insp.Inspect(R__cl, R__parent, "fPy", &fPy);
   R__insp.Inspect(R__cl, R__parent, "fPz", &fPz);
   R__insp.Inspect(R__cl, R__parent, "fEtot", &fEtot);
   R__insp.Inspect(R__cl, R__parent, "fVx", &fVx);
   R__insp.Inspect(R__cl, R__parent, "fVy", &fVy);
   R__insp.Inspect(R__cl, R__parent, "fVz", &fVz);
   R__insp.Inspect(R__cl, R__parent, "fTime", &fTime);
   R__insp.Inspect(R__cl, R__parent, "fTimeEnd", &fTimeEnd);
   fType.ShowMembers(R__insp, strcat(R__parent,"fType.")); R__parent[R__ncp] = 0;
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGenerator *&obj)
{
   // Read a pointer to an object of class TGenerator.

   obj = (TGenerator *) buf.ReadObject(TGenerator::Class());
   return buf;
}

//______________________________________________________________________________
void TGenerator::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGenerator.

   TClass *R__cl  = TGenerator::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fPtCut", &fPtCut);
   R__insp.Inspect(R__cl, R__parent, "fShowNeutrons", &fShowNeutrons);
   R__insp.Inspect(R__cl, R__parent, "*fPrimaries", &fPrimaries);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttParticle *&obj)
{
   // Read a pointer to an object of class TAttParticle.

   obj = (TAttParticle *) buf.ReadObject(TAttParticle::Class());
   return buf;
}

//______________________________________________________________________________
void TAttParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttParticle.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fPDGMass;
      R__b >> fPDGStable;
      R__b >> fPDGDecayWidth;
      R__b >> fPDGCharge;
      fParticleType.Streamer(R__b);
      R__b >> fMCnumberOfPDG;
      R__b >> fEnergyCut;
      R__b >> fEnergyLimit;
      R__b >> fGranularity;
   } else {
      R__b.WriteVersion(TAttParticle::IsA());
      TNamed::Streamer(R__b);
      R__b << fPDGMass;
      R__b << fPDGStable;
      R__b << fPDGDecayWidth;
      R__b << fPDGCharge;
      fParticleType.Streamer(R__b);
      R__b << fMCnumberOfPDG;
      R__b << fEnergyCut;
      R__b << fEnergyLimit;
      R__b << fGranularity;
   }
}

//______________________________________________________________________________
void TAttParticle::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttParticle.

   TClass *R__cl  = TAttParticle::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fPDGMass", &fPDGMass);
   R__insp.Inspect(R__cl, R__parent, "fPDGStable", &fPDGStable);
   R__insp.Inspect(R__cl, R__parent, "fPDGDecayWidth", &fPDGDecayWidth);
   R__insp.Inspect(R__cl, R__parent, "fPDGCharge", &fPDGCharge);
   fParticleType.ShowMembers(R__insp, strcat(R__parent,"fParticleType.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fMCnumberOfPDG", &fMCnumberOfPDG);
   R__insp.Inspect(R__cl, R__parent, "fEnergyCut", &fEnergyCut);
   R__insp.Inspect(R__cl, R__parent, "fEnergyLimit", &fEnergyLimit);
   R__insp.Inspect(R__cl, R__parent, "fGranularity", &fGranularity);
   TNamed::ShowMembers(R__insp, R__parent);
}

