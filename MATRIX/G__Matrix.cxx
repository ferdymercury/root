//*CMZ :  2.00/12 08/10/98  19.50.19  by  Fons Rademakers
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
extern void G__cpp_setup_tagtableG__Matrix();
extern void G__cpp_setup_inheritanceG__Matrix();
extern void G__cpp_setup_typetableG__Matrix();
extern void G__cpp_setup_memvarG__Matrix();
extern void G__cpp_setup_globalG__Matrix();
extern void G__cpp_setup_memfuncG__Matrix();
extern void G__cpp_setup_funcG__Matrix();
extern void G__set_cpp_environmentG__Matrix();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TVector.h"
#include "TMatrix.h"
#include "TMatrixUtils.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__MatrixLN_TClass;
extern G__linked_taginfo G__G__MatrixLN_TObject;
extern G__linked_taginfo G__G__MatrixLN_TMatrix;
extern G__linked_taginfo G__G__MatrixLN_TVector;
extern G__linked_taginfo G__G__MatrixLN_TMatrixRow;
extern G__linked_taginfo G__G__MatrixLN_TMatrixColumn;
extern G__linked_taginfo G__G__MatrixLN_TMatrixDiag;
extern G__linked_taginfo G__G__MatrixLN_TLazyMatrix;
extern G__linked_taginfo G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp1;
extern G__linked_taginfo G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp2;
/********************************************************
* G__Matrix.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__Matrix() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TVector.h");
  G__add_compiledheader("TMatrix.h");
  G__add_compiledheader("TMatrixUtils.h");
}
int G__cpp_dllrevG__Matrix() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TMatrix */
static int G__TMatrix_TMatrix_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrix *p=NULL;
   if(G__getaryconstruct()) p=new TMatrix[G__getaryconstruct()];
   else                    p=new TMatrix;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_TMatrix_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrix *p=NULL;
      p = new TMatrix((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_TMatrix_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrix *p=NULL;
      p = new TMatrix(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_TMatrix_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrix *p=NULL;
      p = new TMatrix(*(TMatrix*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_TMatrix_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrix *p=NULL;
      p = new TMatrix((TMatrix::EMatrixCreatorsOp1)G__int(libp->para[0]),*(TMatrix*)libp->para[1].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_TMatrix_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrix *p=NULL;
      p = new TMatrix(
*(TMatrix*)libp->para[0].ref,(TMatrix::EMatrixCreatorsOp2)G__int(libp->para[1])
,*(TMatrix*)libp->para[2].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_TMatrix_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrix *p=NULL;
      p = new TMatrix(*(TLazyMatrix*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrix);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_ResizeTo_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->ResizeTo((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_ResizeTo_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->ResizeTo((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_ResizeTo_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->ResizeTo(*(TMatrix*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_IsValid_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMatrix*)(G__getstructoffset()))->IsValid());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_GetRowLwb_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->GetRowLwb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_GetRowUpb_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->GetRowUpb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_GetNrows_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->GetNrows());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_GetColLwb_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->GetColLwb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_GetColUpb_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->GetColUpb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_GetNcols_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->GetNcols());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_GetNoElements_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->GetNoElements());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatoroPcP_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        const Real_t& obj=((TMatrix*)(G__getstructoffset()))->operator()((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.d=(double)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatoreQ_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->operator=(*(TMatrix*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatoreQ_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->operator=(*(TLazyMatrix*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatoreQ_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->operator=((Real_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatormIeQ_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->operator-=((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatorpLeQ_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->operator+=((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatormUeQ_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->operator*=((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatoreQeQ_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMatrix*)(G__getstructoffset()))->operator==((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatornOeQ_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMatrix*)(G__getstructoffset()))->operator!=((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatorlE_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMatrix*)(G__getstructoffset()))->operator<((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatorlEeQ_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMatrix*)(G__getstructoffset()))->operator<=((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatorgR_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMatrix*)(G__getstructoffset()))->operator>((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatorgReQ_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMatrix*)(G__getstructoffset()))->operator>=((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Zero_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->Zero();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Abs_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->Abs();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Sqr_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->Sqr();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Sqrt_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->Sqrt();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Apply_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->Apply(*(TElementAction*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Apply_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->Apply(*(TElementPosAction*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Invert_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->Invert((Double_t*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   case 0:
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->Invert();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_UnitMatrix_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->UnitMatrix();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_HilbertMatrix_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->HilbertMatrix();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatormUeQ_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->operator*=(*(TMatrix*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_operatormUeQ_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=((TMatrix*)(G__getstructoffset()))->operator*=(*(TMatrixDiag*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Mult_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->Mult(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_RowNorm_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMatrix*)(G__getstructoffset()))->RowNorm());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_NormInf_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMatrix*)(G__getstructoffset()))->NormInf());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_ColNorm_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMatrix*)(G__getstructoffset()))->ColNorm());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Norm1_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMatrix*)(G__getstructoffset()))->Norm1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_E2Norm_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMatrix*)(G__getstructoffset()))->E2Norm());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Determinant_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMatrix*)(G__getstructoffset()))->Determinant());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Print_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_DeclFileName_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMatrix*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_DeclFileLine_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_ImplFileName_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMatrix*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_ImplFileLine_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrix*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Class_Version_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMatrix*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Class_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMatrix*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Dictionary_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_IsA_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMatrix*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_ShowMembers_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrix_Streamer_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrix*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMatrix_wATMatrix_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMatrix *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMatrix *)((G__getstructoffset())+sizeof(TMatrix)*i);
   else  delete (TMatrix *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TVector */
static int G__TVector_TVector_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector *p=NULL;
   if(G__getaryconstruct()) p=new TVector[G__getaryconstruct()];
   else                    p=new TVector;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_TVector_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector *p=NULL;
      p = new TVector((Int_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_TVector_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector *p=NULL;
      p = new TVector((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_TVector_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector *p=NULL;
      p = new TVector(*(TVector*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_TVector_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVector *p=NULL;
      p = new TVector(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(int)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TVector);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_ResizeTo_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector*)(G__getstructoffset()))->ResizeTo((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_ResizeTo_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector*)(G__getstructoffset()))->ResizeTo((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_ResizeTo_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector*)(G__getstructoffset()))->ResizeTo(*(TVector*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_IsValid_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVector*)(G__getstructoffset()))->IsValid());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatoroPcP_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        Real_t& obj=((TVector*)(G__getstructoffset()))->operator()((Int_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.d=(double)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_GetLwb_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector*)(G__getstructoffset()))->GetLwb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_GetUpb_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector*)(G__getstructoffset()))->GetUpb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_GetNrows_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector*)(G__getstructoffset()))->GetNrows());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_GetNoElements_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector*)(G__getstructoffset()))->GetNoElements());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatoreQ_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator=(*(TVector*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatoreQ_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator=((Real_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatoreQ_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator=(*(TMatrixRow*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatoreQ_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator=(*(TMatrixColumn*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatoreQ_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator=(*(TMatrixDiag*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatormIeQ_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator-=((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatorpLeQ_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator+=((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatormUeQ_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator*=((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatormUeQ_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->operator*=(*(TMatrix*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatoreQeQ_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVector*)(G__getstructoffset()))->operator==((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatornOeQ_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVector*)(G__getstructoffset()))->operator!=((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatorlE_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVector*)(G__getstructoffset()))->operator<((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatorlEeQ_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVector*)(G__getstructoffset()))->operator<=((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatorgR_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVector*)(G__getstructoffset()))->operator>((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_operatorgReQ_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVector*)(G__getstructoffset()))->operator>=((Real_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Zero_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->Zero();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Abs_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->Abs();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Sqr_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->Sqr();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Sqrt_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->Sqrt();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Apply_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->Apply(*(TElementAction*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Apply_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=((TVector*)(G__getstructoffset()))->Apply(*(TElementPosAction*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Norm1_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector*)(G__getstructoffset()))->Norm1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Norm2Sqr_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector*)(G__getstructoffset()))->Norm2Sqr());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_NormInf_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVector*)(G__getstructoffset()))->NormInf());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Print_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVector*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVector*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_DeclFileName_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVector*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_DeclFileLine_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_ImplFileName_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVector*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_ImplFileLine_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVector*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Class_Version_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVector*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Class_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVector*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Dictionary_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_IsA_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVector*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_ShowMembers_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVector_Streamer_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVector*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVector_wATVector_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVector *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVector *)((G__getstructoffset())+sizeof(TVector)*i);
   else  delete (TVector *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMatrixRow */
static int G__TMatrixRow_TMatrixRow_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrixRow *p=NULL;
      p = new TMatrixRow(*(TMatrix*)libp->para[0].ref,(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_operatoreQ_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixRow*)(G__getstructoffset()))->operator=((Real_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_operatorpLeQ_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixRow*)(G__getstructoffset()))->operator+=((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_operatormUeQ_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixRow*)(G__getstructoffset()))->operator*=((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_operatoreQ_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixRow*)(G__getstructoffset()))->operator=(*(TVector*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_operatoroPcP_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        const Real_t& obj=((TMatrixRow*)(G__getstructoffset()))->operator()((Int_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.d=(double)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMatrixRow*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrixRow*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMatrixRow*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrixRow*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMatrixRow*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMatrixRow*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixRow*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMatrixRow*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixRow*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixRow_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixRow*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMatrixRow_TMatrixRow_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMatrixRow *p;
   if(1!=libp->paran) ;
   p=new TMatrixRow(*(TMatrixRow*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMatrixRow_wATMatrixRow_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMatrixRow *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMatrixRow *)((G__getstructoffset())+sizeof(TMatrixRow)*i);
   else  delete (TMatrixRow *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMatrixColumn */
static int G__TMatrixColumn_TMatrixColumn_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrixColumn *p=NULL;
      p = new TMatrixColumn(*(TMatrix*)libp->para[0].ref,(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_operatoreQ_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixColumn*)(G__getstructoffset()))->operator=((Real_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_operatorpLeQ_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixColumn*)(G__getstructoffset()))->operator+=((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_operatormUeQ_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixColumn*)(G__getstructoffset()))->operator*=((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_operatoreQ_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixColumn*)(G__getstructoffset()))->operator=(*(TVector*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_operatoroPcP_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        const Real_t& obj=((TMatrixColumn*)(G__getstructoffset()))->operator()((Int_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.d=(double)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMatrixColumn*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrixColumn*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMatrixColumn*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrixColumn*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMatrixColumn*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMatrixColumn*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixColumn*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMatrixColumn*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixColumn*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixColumn_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixColumn*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMatrixColumn_TMatrixColumn_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMatrixColumn *p;
   if(1!=libp->paran) ;
   p=new TMatrixColumn(*(TMatrixColumn*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMatrixColumn_wATMatrixColumn_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMatrixColumn *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMatrixColumn *)((G__getstructoffset())+sizeof(TMatrixColumn)*i);
   else  delete (TMatrixColumn *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMatrixDiag */
static int G__TMatrixDiag_TMatrixDiag_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMatrixDiag *p=NULL;
      p = new TMatrixDiag(*(TMatrix*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_operatoreQ_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixDiag*)(G__getstructoffset()))->operator=((Real_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_operatorpLeQ_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixDiag*)(G__getstructoffset()))->operator+=((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_operatormUeQ_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixDiag*)(G__getstructoffset()))->operator*=((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_operatoreQ_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixDiag*)(G__getstructoffset()))->operator=(*(TVector*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_operatoroPcP_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        const Real_t& obj=((TMatrixDiag*)(G__getstructoffset()))->operator()((Int_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.d=(double)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_GetNdiags_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrixDiag*)(G__getstructoffset()))->GetNdiags());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMatrixDiag*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrixDiag*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMatrixDiag*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMatrixDiag*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMatrixDiag*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMatrixDiag*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixDiag*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMatrixDiag*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixDiag*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMatrixDiag_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMatrixDiag*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMatrixDiag_TMatrixDiag_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMatrixDiag *p;
   if(1!=libp->paran) ;
   p=new TMatrixDiag(*(TMatrixDiag*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMatrixDiag_wATMatrixDiag_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMatrixDiag *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMatrixDiag *)((G__getstructoffset())+sizeof(TMatrixDiag)*i);
   else  delete (TMatrixDiag *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TLazyMatrix */
static int G__TLazyMatrix_DeclFileName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLazyMatrix*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_DeclFileLine_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLazyMatrix*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_ImplFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TLazyMatrix*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_ImplFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TLazyMatrix*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_Class_Version_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TLazyMatrix*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_Class_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLazyMatrix*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_Dictionary_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLazyMatrix*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_IsA_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TLazyMatrix*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_ShowMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLazyMatrix*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TLazyMatrix_Streamer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TLazyMatrix*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TLazyMatrix_wATLazyMatrix_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TLazyMatrix *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TLazyMatrix *)((G__getstructoffset())+sizeof(TLazyMatrix)*i);
   else  delete (TLazyMatrix *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */
static int G___operatorpLeQ_4_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=operator+=(*(TVector*)libp->para[0].ref,*(TVector*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatormIeQ_5_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=operator-=(*(TVector*)libp->para[0].ref,*(TVector*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatormU_6_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)operator*(*(TVector*)libp->para[0].ref,*(TVector*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___Add_7_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=Add(*(TVector*)libp->para[0].ref,(Double_t)G__double(libp->para[1])
,*(TVector*)libp->para[2].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___ElementMult_8_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=ElementMult(*(TVector*)libp->para[0].ref,*(TVector*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___ElementDiv_9_12(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TVector& obj=ElementDiv(*(TVector*)libp->para[0].ref,*(TVector*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_0_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==(*(TVector*)libp->para[0].ref,*(TVector*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___Compare_1_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      Compare(*(TVector*)libp->para[0].ref,*(TVector*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___AreCompatible_2_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)AreCompatible(*(TVector*)libp->para[0].ref,*(TVector*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorpLeQ_7_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=operator+=(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatormIeQ_8_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=operator-=(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___Add_9_13(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=Add(*(TMatrix*)libp->para[0].ref,(Double_t)G__double(libp->para[1])
,*(TMatrix*)libp->para[2].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___ElementMult_0_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=ElementMult(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___ElementDiv_1_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TMatrix& obj=ElementDiv(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_2_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___Compare_3_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      Compare(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___AreCompatible_4_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)AreCompatible(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___E2Norm_5_14(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)E2Norm(*(TMatrix*)libp->para[0].ref,*(TMatrix*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}


/*********************************************************
* Member function Stub
*********************************************************/

/* TMatrix */

/* TVector */

/* TMatrixRow */

/* TMatrixColumn */

/* TMatrixDiag */

/* TLazyMatrix */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Matrix {
 public:
  G__Sizep2memfuncG__Matrix() {p=&G__Sizep2memfuncG__Matrix::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Matrix::*p)();
};

size_t G__get_sizep2memfuncG__Matrix()
{
  G__Sizep2memfuncG__Matrix a;
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
extern "C" void G__cpp_setup_inheritanceG__Matrix() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MatrixLN_TMatrix))) {
     TMatrix *G__Lderived;
     G__Lderived=(TMatrix*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),G__get_linked_tagnum(&G__G__MatrixLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MatrixLN_TVector))) {
     TVector *G__Lderived;
     G__Lderived=(TVector*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MatrixLN_TVector),G__get_linked_tagnum(&G__G__MatrixLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow))) {
     TMatrixRow *G__Lderived;
     G__Lderived=(TMatrixRow*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow),G__get_linked_tagnum(&G__G__MatrixLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn))) {
     TMatrixColumn *G__Lderived;
     G__Lderived=(TMatrixColumn*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn),G__get_linked_tagnum(&G__G__MatrixLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag))) {
     TMatrixDiag *G__Lderived;
     G__Lderived=(TMatrixDiag*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag),G__get_linked_tagnum(&G__G__MatrixLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MatrixLN_TLazyMatrix))) {
     TLazyMatrix *G__Lderived;
     G__Lderived=(TLazyMatrix*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MatrixLN_TLazyMatrix),G__get_linked_tagnum(&G__G__MatrixLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Matrix() {

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
   G__search_typename2("ErrorHandlerFunc_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TMatrix */
static void G__setup_memvarTMatrix(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrix));
   { TMatrix *p; p=(TMatrix*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNrows=",0,"number of rows");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNcols=",0,"number of columns");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNelems=",0,"number of elements in matrix");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRowLwb=",0,"lower bound of the row index");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fColLwb=",0,"lower bound of the col index");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Real_t"),-1,2,"fElements=",0,"elements themselves");
   G__memvar_setup((void*)NULL,70,2,0,-1,G__defined_typename("Real_t"),-1,2,"fIndex=",0,"index[i] = &matrix(0,i) (col index)");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp1),-1,-2,1,"kZero=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp1),-1,-2,1,"kUnit=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp1),-1,-2,1,"kTransposed=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp1),-1,-2,1,"kInverted=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp2),-1,-2,1,"kMult=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp2),-1,-2,1,"kTransposeMult=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp2),-1,-2,1,"kInvMult=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp2),-1,-2,1,"kAtBA=3",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TVector */
static void G__setup_memvarTVector(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MatrixLN_TVector));
   { TVector *p; p=(TVector*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNrows=",0,"number of rows");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRowLwb=",0,"lower bound of the row index");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Real_t"),-1,2,"fElements=",0,"elements themselves");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMatrixRow */
static void G__setup_memvarTMatrixRow(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow));
   { TMatrixRow *p; p=(TMatrixRow*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,-1,4,"fMatrix=",0,"the matrix I am a row of");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fRowInd=",0,"effective row index");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fInc=",0,"if ptr = @a[row,i], then ptr+inc = @a[row,i+1]");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Real_t"),-1,4,"fPtr=",0,"pointer to the a[row,0]");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMatrixColumn */
static void G__setup_memvarTMatrixColumn(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn));
   { TMatrixColumn *p; p=(TMatrixColumn*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,-1,4,"fMatrix=",0,"the matrix I am a column of");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fColInd=",0,"effective column index");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Real_t"),-1,4,"fPtr=",0,"pointer to the a[0,i] column");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMatrixDiag */
static void G__setup_memvarTMatrixDiag(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag));
   { TMatrixDiag *p; p=(TMatrixDiag*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,1,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,-1,4,"fMatrix=",0,"the matrix I am the diagonal of");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fInc=",0,"if ptr=@a[i,i], then ptr+inc = @a[i+1,i+1]");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNdiag=",0,"number of diag elems, min(nrows,ncols)");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Real_t"),-1,4,"fPtr=",0,"pointer to the a[0,0]");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TLazyMatrix */
static void G__setup_memvarTLazyMatrix(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MatrixLN_TLazyMatrix));
   { TLazyMatrix *p; p=(TLazyMatrix*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRowUpb=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRowLwb=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fColUpb=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fColLwb=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Matrix() {
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
static void G__setup_memfuncTMatrix(void) {
   /* TMatrix */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrix));
   G__memfunc_setup("Allocate",805,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,2,0,
"i - 'Int_t' 0 - nrows i - 'Int_t' 0 - ncols "
"i - 'Int_t' 0 0 row_lwb i - 'Int_t' 0 0 col_lwb",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Invalidate",1025,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Transpose",959,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"u 'TMatrix' - 1 - m",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Invert",632,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"u 'TMatrix' - 1 - m",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AMultB",549,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"u 'TMatrix' - 1 - a u 'TMatrix' - 1 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AtMultB",665,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"u 'TMatrix' - 1 - a u 'TMatrix' - 1 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrix",713,G__TMatrix_TMatrix_6_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrix",713,G__TMatrix_TMatrix_7_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,0,2,1,1,0,
"i - 'Int_t' 0 - nrows i - 'Int_t' 0 - ncols",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrix",713,G__TMatrix_TMatrix_8_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,0,4,1,1,0,
"i - 'Int_t' 0 - row_lwb i - 'Int_t' 0 - row_upb "
"i - 'Int_t' 0 - col_lwb i - 'Int_t' 0 - col_upb",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrix",713,G__TMatrix_TMatrix_9_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,0,1,1,1,0,"u 'TMatrix' - 1 - another",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrix",713,G__TMatrix_TMatrix_0_1,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,0,2,1,1,0,
"i 'TMatrix::EMatrixCreatorsOp1' - 0 - op u 'TMatrix' - 1 - prototype",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrix",713,G__TMatrix_TMatrix_1_1,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,0,3,1,1,0,
"u 'TMatrix' - 1 - a i 'TMatrix::EMatrixCreatorsOp2' - 0 - op "
"u 'TMatrix' - 1 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrix",713,G__TMatrix_TMatrix_2_1,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,0,1,1,1,0,"u 'TLazyMatrix' - 1 - lazy_constructor",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResizeTo",821,G__TMatrix_ResizeTo_4_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - nrows i - 'Int_t' 0 - ncols",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResizeTo",821,G__TMatrix_ResizeTo_5_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - row_lwb i - 'Int_t' 0 - row_upb "
"i - 'Int_t' 0 - col_lwb i - 'Int_t' 0 - col_upb",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResizeTo",821,G__TMatrix_ResizeTo_6_1,121,-1,-1,0,1,1,1,0,"u 'TMatrix' - 1 - m",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsValid",684,G__TMatrix_IsValid_7_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRowLwb",893,G__TMatrix_GetRowLwb_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRowUpb",895,G__TMatrix_GetRowUpb_9_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNrows",825,G__TMatrix_GetNrows_0_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetColLwb",867,G__TMatrix_GetColLwb_1_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetColUpb",869,G__TMatrix_GetColUpb_2_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNcols",799,G__TMatrix_GetNcols_3_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNoElements",1306,G__TMatrix_GetNoElements_4_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TMatrix_operatoroPcP_5_2,102,-1,G__defined_typename("Real_t"),1,2,1,1,9,
"i - 'Int_t' 0 - rown i - 'Int_t' 0 - coln",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrix_operatoreQ_6_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"u 'TMatrix' - 1 - source",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrix_operatoreQ_7_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"u 'TLazyMatrix' - 1 - source",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrix_operatoreQ_8_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator-=",982,G__TMatrix_operatormIeQ_9_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TMatrix_operatorpLeQ_0_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TMatrix_operatormUeQ_1_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G__TMatrix_operatoreQeQ_2_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator!=",970,G__TMatrix_operatornOeQ_3_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<",936,G__TMatrix_operatorlE_4_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<=",997,G__TMatrix_operatorlEeQ_5_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>",938,G__TMatrix_operatorgR_6_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>=",999,G__TMatrix_operatorgReQ_7_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Zero",416,G__TMatrix_Zero_8_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Abs",278,G__TMatrix_Abs_9_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sqr",310,G__TMatrix_Sqr_0_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sqrt",426,G__TMatrix_Sqrt_1_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Apply",518,G__TMatrix_Apply_2_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"u 'TElementAction' - 1 - action",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Apply",518,G__TMatrix_Apply_3_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"u 'TElementPosAction' - 1 - action",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Invert",632,G__TMatrix_Invert_4_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"D - 'Double_t' 0 0 determ_ptr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UnitMatrix",1045,G__TMatrix_UnitMatrix_5_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HilbertMatrix",1343,G__TMatrix_HilbertMatrix_6_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TMatrix_operatormUeQ_7_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"u 'TMatrix' - 1 - source",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TMatrix_operatormUeQ_8_4,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,1,1,1,0,"u 'TMatrixDiag' - 1 - diag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Mult",418,G__TMatrix_Mult_9_4,121,-1,-1,0,2,1,1,0,
"u 'TMatrix' - 1 - a u 'TMatrix' - 1 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RowNorm",724,G__TMatrix_RowNorm_0_5,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("NormInf",697,G__TMatrix_NormInf_1_5,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ColNorm",698,G__TMatrix_ColNorm_2_5,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Norm1",461,G__TMatrix_Norm1_3_5,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("E2Norm",531,G__TMatrix_E2Norm_4_5,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Determinant",1147,G__TMatrix_Determinant_5_5,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TMatrix_Print_6_5,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TMatrix_DeclFileName_7_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMatrix_DeclFileLine_8_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMatrix_ImplFileName_9_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMatrix_ImplFileLine_0_6,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMatrix_Class_Version_1_6,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMatrix_Class_2_6,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMatrix_Dictionary_3_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMatrix_IsA_4_6,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMatrix_ShowMembers_5_6,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMatrix_Streamer_6_6,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TMatrix",839,G__TMatrix_wATMatrix_7_6,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTVector(void) {
   /* TVector */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MatrixLN_TVector));
   G__memfunc_setup("Allocate",805,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"i - 'Int_t' 0 - nrows i - 'Int_t' 0 0 row_lwb",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Invalidate",1025,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector",711,G__TVector_TVector_2_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector",711,G__TVector_TVector_3_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,0,1,1,1,0,"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector",711,G__TVector_TVector_4_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,0,2,1,1,0,
"i - 'Int_t' 0 - lwb i - 'Int_t' 0 - upb",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector",711,G__TVector_TVector_5_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,0,1,1,1,0,"u 'TVector' - 1 - another",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVector",711,G__TVector_TVector_6_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,0,4,2,1,0,
"i - 'Int_t' 0 - lwb i - 'Int_t' 0 - upb "
"d - 'Double_t' 0 - iv1 i - - 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResizeTo",821,G__TVector_ResizeTo_8_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResizeTo",821,G__TVector_ResizeTo_9_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - lwb i - 'Int_t' 0 - upb",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResizeTo",821,G__TVector_ResizeTo_0_1,121,-1,-1,0,1,1,1,0,"u 'TVector' - 1 - v",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsValid",684,G__TVector_IsValid_1_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TVector_operatoroPcP_2_1,102,-1,G__defined_typename("Real_t"),1,1,1,1,8,"i - 'Int_t' 0 - index",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLwb",581,G__TVector_GetLwb_3_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetUpb",583,G__TVector_GetUpb_4_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNrows",825,G__TVector_GetNrows_5_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNoElements",1306,G__TVector_GetNoElements_6_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TVector_operatoreQ_7_1,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"u 'TVector' - 1 - source",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TVector_operatoreQ_8_1,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TVector_operatoreQ_9_1,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"u 'TMatrixRow' - 1 - mr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TVector_operatoreQ_0_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"u 'TMatrixColumn' - 1 - mc",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TVector_operatoreQ_1_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"u 'TMatrixDiag' - 1 - md",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator-=",982,G__TVector_operatormIeQ_2_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TVector_operatorpLeQ_3_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TVector_operatormUeQ_4_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TVector_operatormUeQ_5_2,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"u 'TMatrix' - 1 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G__TVector_operatoreQeQ_6_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator!=",970,G__TVector_operatornOeQ_7_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<",936,G__TVector_operatorlE_8_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<=",997,G__TVector_operatorlEeQ_9_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>",938,G__TVector_operatorgR_0_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>=",999,G__TVector_operatorgReQ_1_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Zero",416,G__TVector_Zero_2_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Abs",278,G__TVector_Abs_3_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sqr",310,G__TVector_Sqr_4_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sqrt",426,G__TVector_Sqrt_5_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Apply",518,G__TVector_Apply_6_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"u 'TElementAction' - 1 - action",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Apply",518,G__TVector_Apply_7_3,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,1,1,1,0,"u 'TElementPosAction' - 1 - action",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Norm1",461,G__TVector_Norm1_8_3,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Norm2Sqr",772,G__TVector_Norm2Sqr_9_3,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("NormInf",697,G__TVector_NormInf_0_4,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TVector_Print_1_4,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TVector_DeclFileName_2_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVector_DeclFileLine_3_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVector_ImplFileName_4_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVector_ImplFileLine_5_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVector_Class_Version_6_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVector_Class_7_4,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TVector_Dictionary_8_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVector_IsA_9_4,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVector_ShowMembers_0_5,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVector_Streamer_1_5,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TVector",837,G__TVector_wATVector_2_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMatrixRow(void) {
   /* TMatrixRow */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow));
   G__memfunc_setup("TMatrixRow",1025,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrixRow",1025,G__TMatrixRow_TMatrixRow_1_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow),-1,0,2,1,1,0,
"u 'TMatrix' - 1 - matrix i - 'Int_t' 0 - row",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrixRow_operatoreQ_2_0,121,-1,-1,0,1,1,1,0,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TMatrixRow_operatorpLeQ_3_0,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TMatrixRow_operatormUeQ_4_0,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrixRow_operatoreQ_5_0,121,-1,-1,0,1,1,1,0,"u 'TVector' - 1 - vec",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TMatrixRow_operatoroPcP_6_0,102,-1,G__defined_typename("Real_t"),1,1,1,1,9,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMatrixRow_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMatrixRow_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMatrixRow_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMatrixRow_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMatrixRow_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMatrixRow_Class_2_1,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMatrixRow_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMatrixRow_IsA_4_1,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMatrixRow_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMatrixRow_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMatrixRow",1025,G__TMatrixRow_TMatrixRow_7_1,(int)('i'),G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow),-1,0,1,1,1,0,"u 'TMatrixRow' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMatrixRow",1151,G__TMatrixRow_wATMatrixRow_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMatrixColumn(void) {
   /* TMatrixColumn */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn));
   G__memfunc_setup("TMatrixColumn",1335,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrixColumn",1335,G__TMatrixColumn_TMatrixColumn_1_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn),-1,0,2,1,1,0,
"u 'TMatrix' - 1 - matrix i - 'Int_t' 0 - col",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrixColumn_operatoreQ_2_0,121,-1,-1,0,1,1,1,0,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TMatrixColumn_operatorpLeQ_3_0,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TMatrixColumn_operatormUeQ_4_0,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrixColumn_operatoreQ_5_0,121,-1,-1,0,1,1,1,0,"u 'TVector' - 1 - vec",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TMatrixColumn_operatoroPcP_6_0,102,-1,G__defined_typename("Real_t"),1,1,1,1,9,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMatrixColumn_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMatrixColumn_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMatrixColumn_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMatrixColumn_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMatrixColumn_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMatrixColumn_Class_2_1,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMatrixColumn_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMatrixColumn_IsA_4_1,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMatrixColumn_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMatrixColumn_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMatrixColumn",1335,G__TMatrixColumn_TMatrixColumn_7_1,(int)('i'),G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn),-1,0,1,1,1,0,"u 'TMatrixColumn' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMatrixColumn",1461,G__TMatrixColumn_wATMatrixColumn_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMatrixDiag(void) {
   /* TMatrixDiag */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag));
   G__memfunc_setup("TMatrixDiag",1086,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMatrixDiag",1086,G__TMatrixDiag_TMatrixDiag_1_0,105,G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag),-1,0,1,1,1,0,"u 'TMatrix' - 1 - matrix",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrixDiag_operatoreQ_2_0,121,-1,-1,0,1,1,1,0,"f - 'Real_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TMatrixDiag_operatorpLeQ_3_0,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TMatrixDiag_operatormUeQ_4_0,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - val",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TMatrixDiag_operatoreQ_5_0,121,-1,-1,0,1,1,1,0,"u 'TVector' - 1 - vec",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TMatrixDiag_operatoroPcP_6_0,102,-1,G__defined_typename("Real_t"),1,1,1,1,9,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNdiags",886,G__TMatrixDiag_GetNdiags_7_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMatrixDiag_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMatrixDiag_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMatrixDiag_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMatrixDiag_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMatrixDiag_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMatrixDiag_Class_3_1,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMatrixDiag_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMatrixDiag_IsA_5_1,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMatrixDiag_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMatrixDiag_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMatrixDiag",1086,G__TMatrixDiag_TMatrixDiag_8_1,(int)('i'),G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag),-1,0,1,1,1,0,"u 'TMatrixDiag' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMatrixDiag",1212,G__TMatrixDiag_wATMatrixDiag_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTLazyMatrix(void) {
   /* TLazyMatrix */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MatrixLN_TLazyMatrix));
   G__memfunc_setup("FillIn",574,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,8,"u 'TMatrix' - 1 - m",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"u 'TLazyMatrix' - 1 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TLazyMatrix_DeclFileName_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TLazyMatrix_DeclFileLine_7_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TLazyMatrix_ImplFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TLazyMatrix_ImplFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TLazyMatrix_Class_Version_0_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TLazyMatrix_Class_1_1,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TLazyMatrix_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TLazyMatrix_IsA_3_1,85,G__get_linked_tagnum(&G__G__MatrixLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TLazyMatrix_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TLazyMatrix_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TLazyMatrix",1255,G__TLazyMatrix_wATLazyMatrix_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Matrix() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Matrix() {

   /* Setting up global variables */
   G__resetplocal();


   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Matrix() {
   G__lastifuncposition();

   G__memfunc_setup("operator+=",980,G___operatorpLeQ_4_12,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,2,1,1,0,
"u 'TVector' - 1 - target u 'TVector' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator-=",982,G___operatormIeQ_5_12,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,2,1,1,0,
"u 'TVector' - 1 - target u 'TVector' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator*",918,G___operatormU_6_12,100,-1,G__defined_typename("Double_t"),0,2,1,1,0,
"u 'TVector' - 1 - v1 u 'TVector' - 1 - v2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("Add",265,G___Add_7_12,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,3,1,1,0,
"u 'TVector' - 1 - target d - 'Double_t' 0 - scalar "
"u 'TVector' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("ElementMult",1132,G___ElementMult_8_12,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,2,1,1,0,
"u 'TVector' - 1 - target u 'TVector' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("ElementDiv",1005,G___ElementDiv_9_12,117,G__get_linked_tagnum(&G__G__MatrixLN_TVector),-1,1,2,1,1,0,
"u 'TVector' - 1 - target u 'TVector' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_0_13,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TVector' - 1 - v1 u 'TVector' - 1 - v2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G___Compare_1_13,121,-1,-1,0,2,1,1,0,
"u 'TVector' - 1 - im1 u 'TVector' - 1 - im2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("AreCompatible",1304,G___AreCompatible_2_13,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TVector' - 1 - v1 u 'TVector' - 1 - v2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G___operatorpLeQ_7_13,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,2,1,1,0,
"u 'TMatrix' - 1 - target u 'TMatrix' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator-=",982,G___operatormIeQ_8_13,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,2,1,1,0,
"u 'TMatrix' - 1 - target u 'TMatrix' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("Add",265,G___Add_9_13,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,3,1,1,0,
"u 'TMatrix' - 1 - target d - 'Double_t' 0 - scalar "
"u 'TMatrix' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("ElementMult",1132,G___ElementMult_0_14,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,2,1,1,0,
"u 'TMatrix' - 1 - target u 'TMatrix' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("ElementDiv",1005,G___ElementDiv_1_14,117,G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),-1,1,2,1,1,0,
"u 'TMatrix' - 1 - target u 'TMatrix' - 1 - source",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_2_14,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TMatrix' - 1 - im1 u 'TMatrix' - 1 - im2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G___Compare_3_14,121,-1,-1,0,2,1,1,0,
"u 'TMatrix' - 1 - im1 u 'TMatrix' - 1 - im2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("AreCompatible",1304,G___AreCompatible_4_14,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TMatrix' - 1 - im1 u 'TMatrix' - 1 - im2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("E2Norm",531,G___E2Norm_5_14,100,-1,G__defined_typename("Double_t"),0,2,1,1,0,
"u 'TMatrix' - 1 - m1 u 'TMatrix' - 1 - m2",(char*)NULL
,(void*)NULL,0);

   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__MatrixLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__MatrixLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__MatrixLN_TMatrix = { "TMatrix" , 99 , -1 };
G__linked_taginfo G__G__MatrixLN_TVector = { "TVector" , 99 , -1 };
G__linked_taginfo G__G__MatrixLN_TMatrixRow = { "TMatrixRow" , 99 , -1 };
G__linked_taginfo G__G__MatrixLN_TMatrixColumn = { "TMatrixColumn" , 99 , -1 };
G__linked_taginfo G__G__MatrixLN_TMatrixDiag = { "TMatrixDiag" , 99 , -1 };
G__linked_taginfo G__G__MatrixLN_TLazyMatrix = { "TLazyMatrix" , 99 , -1 };
G__linked_taginfo G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp1 = { "TMatrix::EMatrixCreatorsOp1" , 101 , -1 };
G__linked_taginfo G__G__MatrixLN_TMatrixcLcLEMatrixCreatorsOp2 = { "TMatrix::EMatrixCreatorsOp2" , 101 , -1 };

extern "C" void G__cpp_setup_tagtableG__Matrix() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrix),sizeof(TMatrix),-1,0,"Matrix class",G__setup_memvarTMatrix,G__setup_memfuncTMatrix);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MatrixLN_TVector),sizeof(TVector),-1,0,"Vector class",G__setup_memvarTVector,G__setup_memfuncTVector);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixRow),sizeof(TMatrixRow),-1,0,"One row of a matrix",G__setup_memvarTMatrixRow,G__setup_memfuncTMatrixRow);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixColumn),sizeof(TMatrixColumn),-1,0,"One column of a matrix",G__setup_memvarTMatrixColumn,G__setup_memfuncTMatrixColumn);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MatrixLN_TMatrixDiag),sizeof(TMatrixDiag),-1,0,"Diagonal of a matrix",G__setup_memvarTMatrixDiag,G__setup_memfuncTMatrixDiag);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MatrixLN_TLazyMatrix),sizeof(TLazyMatrix),-1,1,"Lazy matrix",G__setup_memvarTLazyMatrix,G__setup_memfuncTLazyMatrix);
}
extern "C" void G__cpp_setupG__Matrix() {
  G__check_setup_version(51111,"G__cpp_setupG__Matrix()");
  G__set_cpp_environmentG__Matrix();
  G__cpp_setup_tagtableG__Matrix();

  G__cpp_setup_inheritanceG__Matrix();

  G__cpp_setup_typetableG__Matrix();

  G__cpp_setup_memvarG__Matrix();

  G__cpp_setup_memfuncG__Matrix();
  G__cpp_setup_globalG__Matrix();
  G__cpp_setup_funcG__Matrix();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Matrix();
  return;
}
class G__cpp_setup_initG__Matrix {
  public:
    G__cpp_setup_initG__Matrix() { G__add_setup_func("G__Matrix",&G__cpp_setupG__Matrix); }
   ~G__cpp_setup_initG__Matrix() { G__remove_setup_func("G__Matrix"); }
};
G__cpp_setup_initG__Matrix G__cpp_setup_initializerG__Matrix;

//
// File generated by /home/rdm/root/bin/rootcint at Thu Oct  8 19:50:19 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMatrix *&obj)
{
   // Read a pointer to an object of class TMatrix.

   obj = (TMatrix *) buf.ReadObject(TMatrix::Class());
   return buf;
}

//______________________________________________________________________________
void TMatrix::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMatrix.

   TClass *R__cl  = TMatrix::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNrows", &fNrows);
   R__insp.Inspect(R__cl, R__parent, "fNcols", &fNcols);
   R__insp.Inspect(R__cl, R__parent, "fNelems", &fNelems);
   R__insp.Inspect(R__cl, R__parent, "fRowLwb", &fRowLwb);
   R__insp.Inspect(R__cl, R__parent, "fColLwb", &fColLwb);
   R__insp.Inspect(R__cl, R__parent, "*fElements", &fElements);
   R__insp.Inspect(R__cl, R__parent, "*fIndex", &fIndex);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVector *&obj)
{
   // Read a pointer to an object of class TVector.

   obj = (TVector *) buf.ReadObject(TVector::Class());
   return buf;
}

//______________________________________________________________________________
void TVector::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TVector.

   TClass *R__cl  = TVector::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNrows", &fNrows);
   R__insp.Inspect(R__cl, R__parent, "fRowLwb", &fRowLwb);
   R__insp.Inspect(R__cl, R__parent, "*fElements", &fElements);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMatrixRow *&obj)
{
   // Read a pointer to an object of class TMatrixRow.

   obj = (TMatrixRow *) buf.ReadObject(TMatrixRow::Class());
   return buf;
}

//______________________________________________________________________________
void TMatrixRow::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMatrixRow.

   TClass *R__cl  = TMatrixRow::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMatrix", &fMatrix);
   R__insp.Inspect(R__cl, R__parent, "fRowInd", &fRowInd);
   R__insp.Inspect(R__cl, R__parent, "fInc", &fInc);
   R__insp.Inspect(R__cl, R__parent, "*fPtr", &fPtr);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMatrixColumn *&obj)
{
   // Read a pointer to an object of class TMatrixColumn.

   obj = (TMatrixColumn *) buf.ReadObject(TMatrixColumn::Class());
   return buf;
}

//______________________________________________________________________________
void TMatrixColumn::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMatrixColumn.

   TClass *R__cl  = TMatrixColumn::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMatrix", &fMatrix);
   R__insp.Inspect(R__cl, R__parent, "fColInd", &fColInd);
   R__insp.Inspect(R__cl, R__parent, "*fPtr", &fPtr);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMatrixDiag *&obj)
{
   // Read a pointer to an object of class TMatrixDiag.

   obj = (TMatrixDiag *) buf.ReadObject(TMatrixDiag::Class());
   return buf;
}

//______________________________________________________________________________
void TMatrixDiag::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMatrixDiag.

   TClass *R__cl  = TMatrixDiag::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMatrix", &fMatrix);
   R__insp.Inspect(R__cl, R__parent, "fInc", &fInc);
   R__insp.Inspect(R__cl, R__parent, "fNdiag", &fNdiag);
   R__insp.Inspect(R__cl, R__parent, "*fPtr", &fPtr);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TLazyMatrix *&obj)
{
   // Read a pointer to an object of class TLazyMatrix.

   obj = (TLazyMatrix *) buf.ReadObject(TLazyMatrix::Class());
   return buf;
}

//______________________________________________________________________________
void TLazyMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLazyMatrix.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fRowUpb;
      R__b >> fRowLwb;
      R__b >> fColUpb;
      R__b >> fColLwb;
   } else {
      R__b.WriteVersion(TLazyMatrix::IsA());
      TObject::Streamer(R__b);
      R__b << fRowUpb;
      R__b << fRowLwb;
      R__b << fColUpb;
      R__b << fColLwb;
   }
}

//______________________________________________________________________________
void TLazyMatrix::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TLazyMatrix.

   TClass *R__cl  = TLazyMatrix::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fRowUpb", &fRowUpb);
   R__insp.Inspect(R__cl, R__parent, "fRowLwb", &fRowLwb);
   R__insp.Inspect(R__cl, R__parent, "fColUpb", &fColUpb);
   R__insp.Inspect(R__cl, R__parent, "fColLwb", &fColLwb);
   TObject::ShowMembers(R__insp, R__parent);
}

