//*CMZ :  2.21/07 08/03/99  12.39.36  by  Fons Rademakers
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
extern void G__cpp_setup_tagtableG__PHYSICS();
extern void G__cpp_setup_inheritanceG__PHYSICS();
extern void G__cpp_setup_typetableG__PHYSICS();
extern void G__cpp_setup_memvarG__PHYSICS();
extern void G__cpp_setup_globalG__PHYSICS();
extern void G__cpp_setup_memfuncG__PHYSICS();
extern void G__cpp_setup_funcG__PHYSICS();
extern void G__set_cpp_environmentG__PHYSICS();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TLorentzVector.h"
#include "TVector2.h"
#include "TVector3.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__PHYSICSLN_TClass;
extern G__linked_taginfo G__G__PHYSICSLN_TObject;
extern G__linked_taginfo G__G__PHYSICSLN_TVector2;
extern G__linked_taginfo G__G__PHYSICSLN_TVector3;
extern G__linked_taginfo G__G__PHYSICSLN_TLorentzVector;
/********************************************************
* G__PHYSICS.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif

extern "C" void G__cpp_reset_tagtableG__PHYSICS();

extern "C" void G__set_cpp_environmentG__PHYSICS() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TLorentzVector.h");
  G__add_compiledheader("TVector2.h");
  G__add_compiledheader("TVector3.h");
  G__cpp_reset_tagtableG__PHYSICS();
}
extern "C" int G__cpp_dllrevG__PHYSICS() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TVector2 */
static int G__TVector2_TVector2_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector2 *p=NULL;
   if(G__getaryconstruct()) p=new TVector2[G__getaryconstruct()];
   else                    p=new TVector2;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_TVector2_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector2 *p=NULL;
      p = new TVector2((Double_t*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_TVector2_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector2 *p=NULL;
      p = new TVector2((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_operatoreQ_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2& obj=((TVector2*)(G__getstructoffset()))->operator=(*(TVector2*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_operatorpLeQ_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2& obj=((TVector2*)(G__getstructoffset()))->operator+=(*(TVector2*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_operatormIeQ_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2& obj=((TVector2*)(G__getstructoffset()))->operator-=(*(TVector2*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_operatormUeQ_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->operator*=(*(TVector2*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_operatormUeQ_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2& obj=((TVector2*)(G__getstructoffset()))->operator*=((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_operatordIeQ_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2& obj=((TVector2*)(G__getstructoffset()))->operator/=((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Set_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector2*)(G__getstructoffset()))->Set(*(TVector2*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Set_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector2*)(G__getstructoffset()))->Set((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Set_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector2*)(G__getstructoffset()))->Set((float)G__double(libp->para[0]),(float)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Mod2_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->Mod2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Mod_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->Mod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Px_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->Px());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Py_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->Py());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_X_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->X());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Y_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->Y());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Phi_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->Phi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_DeltaPhi_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector2*)(G__getstructoffset()))->DeltaPhi(*(TVector2*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Unit_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2 *pobj,xobj=((TVector2*)(G__getstructoffset()))->Unit();
        pobj=new TVector2(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Ort_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2 *pobj,xobj=((TVector2*)(G__getstructoffset()))->Ort();
        pobj=new TVector2(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Proj_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2 *pobj,xobj=((TVector2*)(G__getstructoffset()))->Proj(*(TVector2*)libp->para[0].ref);
        pobj=new TVector2(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Norm_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2 *pobj,xobj=((TVector2*)(G__getstructoffset()))->Norm(*(TVector2*)libp->para[0].ref);
        pobj=new TVector2(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Rotate_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2 *pobj,xobj=((TVector2*)(G__getstructoffset()))->Rotate((Double_t)G__double(libp->para[0]));
        pobj=new TVector2(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_DeclFileName_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVector2*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_DeclFileLine_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector2*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_ImplFileName_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVector2*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_ImplFileLine_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector2*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Class_Version_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVector2*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Class_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVector2*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Dictionary_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector2*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_IsA_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVector2*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_ShowMembers_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector2*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector2_Streamer_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector2*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TVector2_TVector2_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TVector2 *p;
   if(1!=libp->paran) ;
   p=new TVector2(*(TVector2*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVector2_wATVector2_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVector2 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVector2 *)((G__getstructoffset())+sizeof(TVector2)*i);
   else  delete (TVector2 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TVector3 */
static int G__TVector3_TVector3_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector3 *p=NULL;
   if(G__getaryconstruct()) p=new TVector3[G__getaryconstruct()];
   else                    p=new TVector3;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_TVector3_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector3 *p=NULL;
      p = new TVector3(
(Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_TVector3_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector3 *p=NULL;
      p = new TVector3(
(float)G__double(libp->para[0]),(float)G__double(libp->para[1])
,(float)G__double(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_TVector3_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector3 *p=NULL;
      p = new TVector3((Double_t*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_TVector3_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector3 *p=NULL;
      p = new TVector3((float*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_X_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->X());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Y_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Y());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Z_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Z());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Ort_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector3 *pobj,xobj=((TVector3*)(G__getstructoffset()))->Ort();
        pobj=new TVector3(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_operatoroPcP_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->operator()((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_operatorpL_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector3& obj=((TVector3*)(G__getstructoffset()))->operator+(*(TVector3*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_operatormI_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector3& obj=((TVector3*)(G__getstructoffset()))->operator-(*(TVector3*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Mod2_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Mod2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Mod_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Mod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Pmod_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Pmod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Rmod_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Rmod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_P_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->P());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_R_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->R());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Px_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Px());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Py_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Py());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Pz_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Pz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Pt2_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Pt2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Pt_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Pt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Phi_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Phi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Theta_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Theta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_DeltaPhi_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->DeltaPhi(*(TVector3*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Eta_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->Eta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_DrEtaPhi_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector3*)(G__getstructoffset()))->DrEtaPhi(*(TVector3*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_EtaPhiVector_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2 *pobj,xobj=((TVector3*)(G__getstructoffset()))->EtaPhiVector();
        pobj=new TVector2(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Set_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Set((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Set_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Set((float)G__double(libp->para[0]),(float)G__double(libp->para[1])
,(float)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Set_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Set((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Set_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Set((float*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Get_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Get(libp->para[0].ref?*(double*)libp->para[0].ref:G__Mdouble(libp->para[0]),libp->para[1].ref?*(double*)libp->para[1].ref:G__Mdouble(libp->para[1])
,libp->para[2].ref?*(double*)libp->para[2].ref:G__Mdouble(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Get_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Get(libp->para[0].ref?*(float*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(float*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(float*)libp->para[2].ref:G__Mfloat(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Get_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Get((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Get_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Get((float*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Xy_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2 *pobj,xobj=((TVector3*)(G__getstructoffset()))->Xy();
        pobj=new TVector2(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Pxy_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector2 *pobj,xobj=((TVector3*)(G__getstructoffset()))->Pxy();
        pobj=new TVector2(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Normal_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector3 *pobj,xobj=((TVector3*)(G__getstructoffset()))->Normal(*(TVector3*)libp->para[0].ref);
        pobj=new TVector3(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_DeclFileName_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVector3*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_DeclFileLine_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector3*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_ImplFileName_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVector3*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_ImplFileLine_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector3*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Class_Version_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVector3*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Class_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVector3*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Dictionary_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_IsA_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVector3*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_ShowMembers_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector3_Streamer_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector3*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TVector3_TVector3_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TVector3 *p;
   if(1!=libp->paran) ;
   p=new TVector3(*(TVector3*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVector3_wATVector3_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVector3 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVector3 *)((G__getstructoffset())+sizeof(TVector3)*i);
   else  delete (TVector3 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TLorentzVector */
static int G__TLorentzVector_TLorentzVector_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLorentzVector *p=NULL;
   if(G__getaryconstruct()) p=new TLorentzVector[G__getaryconstruct()];
   else                    p=new TLorentzVector;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_TLorentzVector_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLorentzVector *p=NULL;
      p = new TLorentzVector(*(TVector3*)libp->para[0].ref,(Double_t)G__double(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_TLorentzVector_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLorentzVector *p=NULL;
      p = new TLorentzVector((Double_t*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_TLorentzVector_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLorentzVector *p=NULL;
      p = new TLorentzVector(
(Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_TLorentzVector_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TLorentzVector *p=NULL;
      p = new TLorentzVector(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_T_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TLorentzVector*)(G__getstructoffset()))->T());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Time_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TLorentzVector*)(G__getstructoffset()))->Time());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_operatoreQ_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TLorentzVector& obj=((TLorentzVector*)(G__getstructoffset()))->operator=(*(TLorentzVector*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_operatorpLeQ_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TLorentzVector& obj=((TLorentzVector*)(G__getstructoffset()))->operator+=(*(TLorentzVector*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_operatormIeQ_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TLorentzVector& obj=((TLorentzVector*)(G__getstructoffset()))->operator-=(*(TLorentzVector*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Mod2_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TLorentzVector*)(G__getstructoffset()))->Mod2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Mod_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TLorentzVector*)(G__getstructoffset()))->Mod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Energy_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TLorentzVector*)(G__getstructoffset()))->Energy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Et_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TLorentzVector*)(G__getstructoffset()))->Et());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Mass_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TLorentzVector*)(G__getstructoffset()))->Mass());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Rapidity_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TLorentzVector*)(G__getstructoffset()))->Rapidity());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_SetT_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->SetT((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_SetV4E_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->SetV4E((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_SetV4E_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->SetV4E((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_SetV4T_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->SetV4T((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_SetV4T_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->SetV4T((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_PsetV4E_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->PsetV4E((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_PsetV4E_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->PsetV4E((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_SetV4M_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->SetV4M((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_SetV4M_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->SetV4M((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_PsetV4M_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->PsetV4M((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_PsetV4M_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->PsetV4M((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Set_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Set((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Set_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Set((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Set_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Set((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Set_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Set((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Get_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Get(libp->para[0].ref?*(double*)libp->para[0].ref:G__Mdouble(libp->para[0]),libp->para[1].ref?*(double*)libp->para[1].ref:G__Mdouble(libp->para[1])
,libp->para[2].ref?*(double*)libp->para[2].ref:G__Mdouble(libp->para[2]),libp->para[3].ref?*(double*)libp->para[3].ref:G__Mdouble(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Get_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Get(libp->para[0].ref?*(float*)libp->para[0].ref:G__Mfloat(libp->para[0]),libp->para[1].ref?*(float*)libp->para[1].ref:G__Mfloat(libp->para[1])
,libp->para[2].ref?*(float*)libp->para[2].ref:G__Mfloat(libp->para[2]),libp->para[3].ref?*(float*)libp->para[3].ref:G__Mfloat(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Get_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Get((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Get_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Get((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_DeclFileName_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLorentzVector*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_DeclFileLine_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLorentzVector*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_ImplFileName_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLorentzVector*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_ImplFileLine_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLorentzVector*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Class_Version_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TLorentzVector*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Class_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLorentzVector*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Dictionary_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_IsA_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLorentzVector*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_ShowMembers_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLorentzVector_Streamer_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLorentzVector*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TLorentzVector_TLorentzVector_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TLorentzVector *p;
   if(1!=libp->paran) ;
   p=new TLorentzVector(*(TLorentzVector*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TLorentzVector_wATLorentzVector_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TLorentzVector *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TLorentzVector *)((G__getstructoffset())+sizeof(TLorentzVector)*i);
   else  delete (TLorentzVector *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TVector2 */

/* TVector3 */

/* TLorentzVector */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__PHYSICS {
 public:
  G__Sizep2memfuncG__PHYSICS() {p=&G__Sizep2memfuncG__PHYSICS::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__PHYSICS::*p)();
};

size_t G__get_sizep2memfuncG__PHYSICS()
{
  G__Sizep2memfuncG__PHYSICS a;
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
extern "C" void G__cpp_setup_inheritanceG__PHYSICS() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2))) {
     TVector2 *G__Lderived;
     G__Lderived=(TVector2*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),G__get_linked_tagnum(&G__G__PHYSICSLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3))) {
     TVector3 *G__Lderived;
     G__Lderived=(TVector3*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),G__get_linked_tagnum(&G__G__PHYSICSLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector))) {
     TLorentzVector *G__Lderived;
     G__Lderived=(TLorentzVector*)0x1000;
     {
       TVector3 *G__Lpbase=(TVector3*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),G__get_linked_tagnum(&G__G__PHYSICSLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__PHYSICS() {

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
   G__search_typename2("ErrorHandlerFunc_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TVector2 */
static void G__setup_memvarTVector2(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2));
   { TVector2 *p; p=(TVector2*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fX=",0,"components of the vector");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fY=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TVector3 */
static void G__setup_memvarTVector3(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3));
   { TVector3 *p; p=(TVector3*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fX=",0,"components of the vector");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fY=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fZ=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TLorentzVector */
static void G__setup_memvarTLorentzVector(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector));
   { TLorentzVector *p; p=(TLorentzVector*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fT=",0,"time component of 4-vector");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__PHYSICS() {
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
static void G__setup_memfuncTVector2(void) {
   /* TVector2 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2));
   G__memfunc_setup("TVector2",761,G__TVector2_TVector2_0_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector2",761,G__TVector2_TVector2_1_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,1,1,1,0,"D - 'Double_t' 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector2",761,G__TVector2_TVector2_2_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,2,1,1,0,
"d - 'Double_t' 0 - x0 d - 'Double_t' 0 - y0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TVector2_operatoreQ_4_0,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,1,1,1,1,0,"u 'TVector2' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TVector2_operatorpLeQ_5_0,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,1,1,1,1,0,"u 'TVector2' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator-=",982,G__TVector2_operatormIeQ_6_0,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,1,1,1,1,0,"u 'TVector2' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TVector2_operatormUeQ_7_0,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"u 'TVector2' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TVector2_operatormUeQ_8_0,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,1,1,1,1,0,"d - 'Double_t' 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator/=",984,G__TVector2_operatordIeQ_9_0,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,1,1,1,1,0,"d - 'Double_t' 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TVector2_Set_0_1,121,-1,-1,0,1,1,1,0,"u 'TVector2' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TVector2_Set_1_1,121,-1,-1,0,2,1,1,0,
"d - 'Double_t' 0 - x0 d - 'Double_t' 0 - y0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TVector2_Set_2_1,121,-1,-1,0,2,1,1,0,
"f - - 0 - x0 f - - 0 - y0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Mod2",338,G__TVector2_Mod2_3_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Mod",288,G__TVector2_Mod_4_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Px",200,G__TVector2_Px_5_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Py",201,G__TVector2_Py_6_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("X",88,G__TVector2_X_7_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Y",89,G__TVector2_Y_8_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Phi",289,G__TVector2_Phi_9_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeltaPhi",779,G__TVector2_DeltaPhi_0_2,100,-1,G__defined_typename("Double_t"),0,1,1,1,8,"u 'TVector2' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Unit",416,G__TVector2_Unit_1_2,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Ort",309,G__TVector2_Ort_2_2,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Proj",411,G__TVector2_Proj_3_2,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,1,1,1,8,"u 'TVector2' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Norm",412,G__TVector2_Norm_4_2,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,1,1,1,8,"u 'TVector2' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Rotate",623,G__TVector2_Rotate_5_2,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,1,1,1,0,"d - 'Double_t' 0 - phi",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TVector2_DeclFileName_6_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVector2_DeclFileLine_7_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVector2_ImplFileName_8_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVector2_ImplFileLine_9_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVector2_Class_Version_0_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVector2_Class_1_3,85,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TVector2_Dictionary_2_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVector2_IsA_3_3,85,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVector2_ShowMembers_4_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVector2_Streamer_5_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TVector2",761,G__TVector2_TVector2_6_3,(int)('i'),G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,1,1,1,0,"u 'TVector2' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TVector2",887,G__TVector2_wATVector2_7_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTVector3(void) {
   /* TVector3 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3));
   G__memfunc_setup("TVector3",762,G__TVector3_TVector3_0_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector3",762,G__TVector3_TVector3_1_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,0,3,1,1,0,
"d - 'Double_t' 0 - x0 d - 'Double_t' 0 - y0 "
"d - 'Double_t' 0 - z0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector3",762,G__TVector3_TVector3_2_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,0,3,1,1,0,
"f - - 0 - x0 f - - 0 - y0 "
"f - - 0 - z0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector3",762,G__TVector3_TVector3_3_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,0,1,1,1,0,"D - 'Double_t' 0 - x0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector3",762,G__TVector3_TVector3_4_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,0,1,1,1,0,"F - - 0 - x0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("X",88,G__TVector3_X_6_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Y",89,G__TVector3_Y_7_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Z",90,G__TVector3_Z_8_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Ort",309,G__TVector3_Ort_9_0,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TVector3_operatoroPcP_0_1,100,-1,G__defined_typename("Double_t"),0,1,1,1,8,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+",919,G__TVector3_operatorpL_1_1,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,1,1,1,1,0,"u 'TVector3' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator-",921,G__TVector3_operatormI_2_1,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,1,1,1,1,0,"u 'TVector3' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Mod2",338,G__TVector3_Mod2_3_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Mod",288,G__TVector3_Mod_4_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Pmod",400,G__TVector3_Pmod_5_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Rmod",402,G__TVector3_Rmod_6_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("P",80,G__TVector3_P_7_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("R",82,G__TVector3_R_8_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Px",200,G__TVector3_Px_9_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Py",201,G__TVector3_Py_0_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Pz",202,G__TVector3_Pz_1_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Pt2",246,G__TVector3_Pt2_2_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Pt",196,G__TVector3_Pt_3_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Phi",289,G__TVector3_Phi_4_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Theta",502,G__TVector3_Theta_5_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeltaPhi",779,G__TVector3_DeltaPhi_6_2,100,-1,G__defined_typename("Double_t"),0,1,1,1,8,"u 'TVector3' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Eta",282,G__TVector3_Eta_7_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DrEtaPhi",753,G__TVector3_DrEtaPhi_8_2,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"u 'TVector3' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EtaPhiVector",1198,G__TVector3_EtaPhiVector_9_2,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TVector3_Set_0_3,121,-1,-1,0,3,1,1,0,
"d - 'Double_t' 0 - x0 d - 'Double_t' 0 - y0 "
"d - 'Double_t' 0 - z0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TVector3_Set_1_3,121,-1,-1,0,3,1,1,0,
"f - - 0 - x0 f - - 0 - y0 "
"f - - 0 - z0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TVector3_Set_2_3,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - v0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TVector3_Set_3_3,121,-1,-1,0,1,1,1,0,"F - - 0 - v0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TVector3_Get_4_3,121,-1,-1,0,3,1,1,0,
"d - - 1 - x0 d - - 1 - y0 "
"d - - 1 - z0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TVector3_Get_5_3,121,-1,-1,0,3,1,1,0,
"f - - 1 - x0 f - - 1 - y0 "
"f - - 1 - z0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TVector3_Get_6_3,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - v0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TVector3_Get_7_3,121,-1,-1,0,1,1,1,0,"F - - 0 - v0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Xy",209,G__TVector3_Xy_8_3,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Pxy",321,G__TVector3_Pxy_9_3,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Normal",617,G__TVector3_Normal_0_4,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,0,1,1,1,0,"u 'TVector3' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TVector3_DeclFileName_1_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVector3_DeclFileLine_2_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVector3_ImplFileName_3_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVector3_ImplFileLine_4_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVector3_Class_Version_5_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVector3_Class_6_4,85,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TVector3_Dictionary_7_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVector3_IsA_8_4,85,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVector3_ShowMembers_9_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVector3_Streamer_0_5,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TVector3",762,G__TVector3_TVector3_1_5,(int)('i'),G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),-1,0,1,1,1,0,"u 'TVector3' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TVector3",888,G__TVector3_wATVector3_2_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTLorentzVector(void) {
   /* TLorentzVector */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector));
   G__memfunc_setup("TLorentzVector",1461,G__TLorentzVector_TLorentzVector_0_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLorentzVector",1461,G__TLorentzVector_TLorentzVector_1_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,0,2,1,1,0,
"u 'TVector3' - 1 - v d - 'Double_t' 0 - m",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLorentzVector",1461,G__TLorentzVector_TLorentzVector_2_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,0,1,1,1,0,"D - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLorentzVector",1461,G__TLorentzVector_TLorentzVector_3_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,0,4,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y "
"d - 'Double_t' 0 - z d - 'Double_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TLorentzVector",1461,G__TLorentzVector_TLorentzVector_4_0,105,G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,0,4,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - z f - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("T",84,G__TLorentzVector_T_6_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Time",399,G__TLorentzVector_Time_7_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TLorentzVector_operatoreQ_8_0,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,1,1,1,1,0,"u 'TLorentzVector' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TLorentzVector_operatorpLeQ_9_0,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,1,1,1,1,0,"u 'TLorentzVector' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator-=",982,G__TLorentzVector_operatormIeQ_0_1,117,G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,1,1,1,1,0,"u 'TLorentzVector' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Mod2",338,G__TLorentzVector_Mod2_1_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Mod",288,G__TLorentzVector_Mod_2_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Energy",618,G__TLorentzVector_Energy_3_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Et",185,G__TLorentzVector_Et_4_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Mass",404,G__TLorentzVector_Mass_5_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Rapidity",838,G__TLorentzVector_Rapidity_6_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetT",384,G__TLorentzVector_SetT_7_1,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - t0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetV4E",507,G__TLorentzVector_SetV4E_8_1,121,-1,-1,0,4,1,1,0,
"d - 'Double_t' 0 - px d - 'Double_t' 0 - py "
"d - 'Double_t' 0 - pz d - 'Double_t' 0 - e",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetV4E",507,G__TLorentzVector_SetV4E_9_1,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - z f - 'Float_t' 0 - e",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetV4T",522,G__TLorentzVector_SetV4T_0_2,121,-1,-1,0,4,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y "
"d - 'Double_t' 0 - z d - 'Double_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetV4T",522,G__TLorentzVector_SetV4T_1_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - z f - 'Float_t' 0 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PsetV4E",619,G__TLorentzVector_PsetV4E_2_2,121,-1,-1,0,4,1,1,0,
"d - 'Double_t' 0 - pt d - 'Double_t' 0 - eta "
"d - 'Double_t' 0 - phi d - 'Double_t' 0 - e",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PsetV4E",619,G__TLorentzVector_PsetV4E_3_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - pt f - 'Float_t' 0 - eta "
"f - 'Float_t' 0 - phi f - 'Float_t' 0 - e",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetV4M",515,G__TLorentzVector_SetV4M_4_2,121,-1,-1,0,4,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y "
"d - 'Double_t' 0 - z d - 'Double_t' 0 - m",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetV4M",515,G__TLorentzVector_SetV4M_5_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - z f - 'Float_t' 0 - m",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PsetV4M",627,G__TLorentzVector_PsetV4M_6_2,121,-1,-1,0,4,1,1,0,
"d - 'Double_t' 0 - pt d - 'Double_t' 0 - eta "
"d - 'Double_t' 0 - phi d - 'Double_t' 0 - m",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PsetV4M",627,G__TLorentzVector_PsetV4M_7_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - pt f - 'Float_t' 0 - eta "
"f - 'Float_t' 0 - phi f - 'Float_t' 0 - m",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TLorentzVector_Set_8_2,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TLorentzVector_Set_9_2,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TLorentzVector_Set_0_3,121,-1,-1,0,4,1,1,0,
"d - 'Double_t' 0 - x0 d - 'Double_t' 0 - y0 "
"d - 'Double_t' 0 - z0 d - 'Double_t' 0 - t0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TLorentzVector_Set_1_3,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x0 f - 'Float_t' 0 - y0 "
"f - 'Float_t' 0 - z0 f - 'Float_t' 0 - t0",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TLorentzVector_Get_2_3,121,-1,-1,0,4,1,1,0,
"d - - 1 - x d - - 1 - y "
"d - - 1 - z d - - 1 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TLorentzVector_Get_3_3,121,-1,-1,0,4,1,1,0,
"f - - 1 - x f - - 1 - y "
"f - - 1 - z f - - 1 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TLorentzVector_Get_4_3,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TLorentzVector_Get_5_3,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TLorentzVector_DeclFileName_6_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TLorentzVector_DeclFileLine_7_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TLorentzVector_ImplFileName_8_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TLorentzVector_ImplFileLine_9_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TLorentzVector_Class_Version_0_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TLorentzVector_Class_1_4,85,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TLorentzVector_Dictionary_2_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TLorentzVector_IsA_3_4,85,G__get_linked_tagnum(&G__G__PHYSICSLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TLorentzVector_ShowMembers_4_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TLorentzVector_Streamer_5_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TLorentzVector",1461,G__TLorentzVector_TLorentzVector_6_4,(int)('i'),G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),-1,0,1,1,1,0,"u 'TLorentzVector' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TLorentzVector",1587,G__TLorentzVector_wATLorentzVector_7_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__PHYSICS() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__PHYSICS() {

   /* Setting up global variables */
   G__resetplocal();


   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__PHYSICS() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__PHYSICSLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__PHYSICSLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__PHYSICSLN_TVector2 = { "TVector2" , 99 , -1 };
G__linked_taginfo G__G__PHYSICSLN_TVector3 = { "TVector3" , 99 , -1 };
G__linked_taginfo G__G__PHYSICSLN_TLorentzVector = { "TLorentzVector" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__PHYSICS() {
  G__G__PHYSICSLN_TClass.tagnum = -1 ;
  G__G__PHYSICSLN_TObject.tagnum = -1 ;
  G__G__PHYSICSLN_TVector2.tagnum = -1 ;
  G__G__PHYSICSLN_TVector3.tagnum = -1 ;
  G__G__PHYSICSLN_TLorentzVector.tagnum = -1 ;
}

extern "C" void G__cpp_setup_tagtableG__PHYSICS() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector2),sizeof(TVector2),-1,0,(char*)NULL,G__setup_memvarTVector2,G__setup_memfuncTVector2);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TVector3),sizeof(TVector3),-1,0,(char*)NULL,G__setup_memvarTVector3,G__setup_memfuncTVector3);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__PHYSICSLN_TLorentzVector),sizeof(TLorentzVector),-1,0,(char*)NULL,G__setup_memvarTLorentzVector,G__setup_memfuncTLorentzVector);
}
extern "C" void G__cpp_setupG__PHYSICS() {
  G__check_setup_version(51111,"G__cpp_setupG__PHYSICS()");
  G__set_cpp_environmentG__PHYSICS();
  G__cpp_setup_tagtableG__PHYSICS();

  G__cpp_setup_inheritanceG__PHYSICS();

  G__cpp_setup_typetableG__PHYSICS();

  G__cpp_setup_memvarG__PHYSICS();

  G__cpp_setup_memfuncG__PHYSICS();
  G__cpp_setup_globalG__PHYSICS();
  G__cpp_setup_funcG__PHYSICS();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__PHYSICS();
  return;
}
class G__cpp_setup_initG__PHYSICS {
  public:
    G__cpp_setup_initG__PHYSICS() { G__add_setup_func("G__PHYSICS",&G__cpp_setupG__PHYSICS); }
   ~G__cpp_setup_initG__PHYSICS() { G__remove_setup_func("G__PHYSICS"); }
};
G__cpp_setup_initG__PHYSICS G__cpp_setup_initializerG__PHYSICS;

//
// File generated by /home/rdm/root/bin/rootcint at Mon Mar  8 12:39:36 1999.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVector2 *&obj)
{
   // Read a pointer to an object of class TVector2.

   obj = (TVector2 *) buf.ReadObject(TVector2::Class());
   return buf;
}

//______________________________________________________________________________
void TVector2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVector2.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fX;
      R__b >> fY;
   } else {
      R__b.WriteVersion(TVector2::IsA());
      TObject::Streamer(R__b);
      R__b << fX;
      R__b << fY;
   }
}

//______________________________________________________________________________
void TVector2::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TVector2.

   TClass *R__cl  = TVector2::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVector3 *&obj)
{
   // Read a pointer to an object of class TVector3.

   obj = (TVector3 *) buf.ReadObject(TVector3::Class());
   return buf;
}

//______________________________________________________________________________
void TVector3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVector3.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fX;
      R__b >> fY;
      R__b >> fZ;
   } else {
      R__b.WriteVersion(TVector3::IsA());
      TObject::Streamer(R__b);
      R__b << fX;
      R__b << fY;
      R__b << fZ;
   }
}

//______________________________________________________________________________
void TVector3::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TVector3.

   TClass *R__cl  = TVector3::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fX", &fX);
   R__insp.Inspect(R__cl, R__parent, "fY", &fY);
   R__insp.Inspect(R__cl, R__parent, "fZ", &fZ);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TLorentzVector *&obj)
{
   // Read a pointer to an object of class TLorentzVector.

   obj = (TLorentzVector *) buf.ReadObject(TLorentzVector::Class());
   return buf;
}

//______________________________________________________________________________
void TLorentzVector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLorentzVector.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TVector3::Streamer(R__b);
      R__b >> fT;
   } else {
      R__b.WriteVersion(TLorentzVector::IsA());
      TVector3::Streamer(R__b);
      R__b << fT;
   }
}

//______________________________________________________________________________
void TLorentzVector::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TLorentzVector.

   TClass *R__cl  = TLorentzVector::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fT", &fT);
   TVector3::ShowMembers(R__insp, R__parent);
}

