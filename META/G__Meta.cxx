//*CMZ :  2.21/07 08/03/99  12.34.48  by  Fons Rademakers
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
extern void G__cpp_setup_tagtableG__Meta();
extern void G__cpp_setup_inheritanceG__Meta();
extern void G__cpp_setup_typetableG__Meta();
extern void G__cpp_setup_memvarG__Meta();
extern void G__cpp_setup_globalG__Meta();
extern void G__cpp_setup_memfuncG__Meta();
extern void G__cpp_setup_funcG__Meta();
extern void G__set_cpp_environmentG__Meta();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TBaseClass.h"
#include "TClass.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "TFunction.h"
#include "TGlobal.h"
#include "TMethod.h"
#include "TMethodArg.h"
#include "TMethodCall.h"
#include "TCint.h"
#include "TInterpreter.h"
#include "TToggle.h"
#include "TToggleGroup.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__MetaLN_TClass;
extern G__linked_taginfo G__G__MetaLN_TList;
extern G__linked_taginfo G__G__MetaLN_TMethod;
extern G__linked_taginfo G__G__MetaLN_TObject;
extern G__linked_taginfo G__G__MetaLN_TString;
extern G__linked_taginfo G__G__MetaLN_TNamed;
extern G__linked_taginfo G__G__MetaLN_TDataType;
extern G__linked_taginfo G__G__MetaLN_TInterpreter;
extern G__linked_taginfo G__G__MetaLN_TGlobal;
extern G__linked_taginfo G__G__MetaLN_TFunction;
extern G__linked_taginfo G__G__MetaLN_TCint;
extern G__linked_taginfo G__G__MetaLN_EProperty;
extern G__linked_taginfo G__G__MetaLN_TDictionary;
extern G__linked_taginfo G__G__MetaLN_G__BaseClassInfo;
extern G__linked_taginfo G__G__MetaLN_TBaseClass;
extern G__linked_taginfo G__G__MetaLN_TDataMember;
extern G__linked_taginfo G__G__MetaLN_G__ClassInfo;
extern G__linked_taginfo G__G__MetaLN_G__DataMemberInfo;
extern G__linked_taginfo G__G__MetaLN_TMethodCall;
extern G__linked_taginfo G__G__MetaLN_EDataType;
extern G__linked_taginfo G__G__MetaLN_G__TypedefInfo;
extern G__linked_taginfo G__G__MetaLN_G__MethodInfo;
extern G__linked_taginfo G__G__MetaLN_EMenuItemKind;
extern G__linked_taginfo G__G__MetaLN_G__MethodArgInfo;
extern G__linked_taginfo G__G__MetaLN_TMethodArg;
extern G__linked_taginfo G__G__MetaLN_G__CallFunc;
extern G__linked_taginfo G__G__MetaLN_EReturnType;
extern G__linked_taginfo G__G__MetaLN_G__value;
extern G__linked_taginfo G__G__MetaLN_G__linked_taginfo;
extern G__linked_taginfo G__G__MetaLN_G__COMPLETIONLIST;
extern G__linked_taginfo G__G__MetaLN_G__dictposition;
extern G__linked_taginfo G__G__MetaLN_TToggle;
extern G__linked_taginfo G__G__MetaLN_TOrdCollection;
extern G__linked_taginfo G__G__MetaLN_TToggleGroup;
/********************************************************
* G__Meta.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif

extern "C" void G__cpp_reset_tagtableG__Meta();

extern "C" void G__set_cpp_environmentG__Meta() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TBaseClass.h");
  G__add_compiledheader("TClass.h");
  G__add_compiledheader("TDataMember.h");
  G__add_compiledheader("TDataType.h");
  G__add_compiledheader("TFunction.h");
  G__add_compiledheader("TGlobal.h");
  G__add_compiledheader("TMethod.h");
  G__add_compiledheader("TMethodArg.h");
  G__add_compiledheader("TMethodCall.h");
  G__add_compiledheader("TCint.h");
  G__add_compiledheader("TInterpreter.h");
  G__add_compiledheader("TToggle.h");
  G__add_compiledheader("TToggleGroup.h");
  G__cpp_reset_tagtableG__Meta();
}
extern "C" int G__cpp_dllrevG__Meta() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TClass */
static int G__TClass_TClass_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TClass *p=NULL;
   if(G__getaryconstruct()) p=new TClass[G__getaryconstruct()];
   else                    p=new TClass;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TClass);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_TClass_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TClass *p=NULL;
   switch(libp->paran) {
   case 6:
      p = new TClass(
(const Text_t*)G__int(libp->para[0]),(Version_t)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(const Text_t*)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
      break;
   case 5:
      p = new TClass(
(const Text_t*)G__int(libp->para[0]),(Version_t)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(const Text_t*)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      p = new TClass(
(const Text_t*)G__int(libp->para[0]),(Version_t)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(const Text_t*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TClass(
(const Text_t*)G__int(libp->para[0]),(Version_t)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TClass((const Text_t*)G__int(libp->para[0]),(Version_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TClass);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_AddInstance_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->AddInstance((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->AddInstance();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Browse_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_BuildRealData_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->BuildRealData();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Draw_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_EscapeChars_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClass*)(G__getstructoffset()))->EscapeChars((Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetClassVersion_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TClass*)(G__getstructoffset()))->GetClassVersion());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetDataMember_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetDataMember((Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetDeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClass*)(G__getstructoffset()))->GetDeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetDeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TClass*)(G__getstructoffset()))->GetDeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetClassInfo_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetClassInfo());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetListOfDataMembers_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetListOfDataMembers());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetListOfBases_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetListOfBases());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetListOfMethods_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetListOfMethods());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetListOfRealData_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetListOfRealData());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClass*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetTitle_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClass*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetImplFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClass*)(G__getstructoffset()))->GetImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetImplFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TClass*)(G__getstructoffset()))->GetImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetBaseClass_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetBaseClass((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetBaseClass_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetBaseClass((const TClass*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetBaseDataMember_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetBaseDataMember((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetInstanceCount_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TClass*)(G__getstructoffset()))->GetInstanceCount());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetHeapInstanceCount_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TClass*)(G__getstructoffset()))->GetHeapInstanceCount());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetMenuItems_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->GetMenuItems((TList*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetMethod_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetMethod((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetMethodWithPrototype_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetMethodWithPrototype((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetMethodAny_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->GetMethodAny((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetNdata_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClass*)(G__getstructoffset()))->GetNdata());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_GetNmethods_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClass*)(G__getstructoffset()))->GetNmethods());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Compare_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClass*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Hash_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TClass*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_InheritsFrom_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TClass*)(G__getstructoffset()))->InheritsFrom((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_InheritsFrom_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TClass*)(G__getstructoffset()))->InheritsFrom((const TClass*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_IsFolder_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TClass*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_New_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TClass*)(G__getstructoffset()))->New());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Destructor_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->Destructor((void*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->Destructor((void*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_ResetInstanceCount_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->ResetInstanceCount();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Size_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClass*)(G__getstructoffset()))->Size());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Property_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TClass*)(G__getstructoffset()))->Property());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Load_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->Load(*(TBuffer*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Store_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->Store(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_DeclFileName_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClass*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_DeclFileLine_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClass*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_ImplFileName_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TClass*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_ImplFileLine_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TClass*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Class_Version_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TClass*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Class_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Dictionary_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_IsA_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TClass*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_ShowMembers_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TClass_Streamer_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TClass*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TClass_TClass_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TClass *p;
   if(1!=libp->paran) ;
   p=new TClass(*(TClass*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TClass);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TClass_wATClass_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TClass *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TClass *)((G__getstructoffset())+sizeof(TClass)*i);
   else  delete (TClass *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMethod */
static int G__TMethod_TMethod_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMethod *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TMethod((G__MethodInfo*)G__int(libp->para[0]),(TClass*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TMethod((G__MethodInfo*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TMethod[G__getaryconstruct()];
   else                    p=new TMethod;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TMethod);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_GetClass_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethod*)(G__getstructoffset()))->GetClass());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_IsMenuItem_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethod*)(G__getstructoffset()))->IsMenuItem());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_GetCommentString_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethod*)(G__getstructoffset()))->GetCommentString());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_FindDataMember_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethod*)(G__getstructoffset()))->FindDataMember());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_GetListOfMethodArgs_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethod*)(G__getstructoffset()))->GetListOfMethodArgs());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethod*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethod*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethod*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethod*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMethod*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethod*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethod*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethod*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethod*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethod_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethod*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMethod_TMethod_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMethod *p;
   if(1!=libp->paran) ;
   p=new TMethod(*(TMethod*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TMethod);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMethod_wATMethod_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMethod *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMethod *)((G__getstructoffset())+sizeof(TMethod)*i);
   else  delete (TMethod *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TDataType */
static int G__TDataType_TDataType_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDataType *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TDataType((G__TypedefInfo*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TDataType[G__getaryconstruct()];
   else                    p=new TDataType;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TDataType);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_TDataType_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDataType *p=NULL;
      p = new TDataType((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TDataType);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_Size_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataType*)(G__getstructoffset()))->Size());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_GetType_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataType*)(G__getstructoffset()))->GetType());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_GetTypeName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataType*)(G__getstructoffset()))->GetTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_GetFullTypeName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataType*)(G__getstructoffset()))->GetFullTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_GetName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataType*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_GetTitle_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataType*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_Compare_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataType*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_Hash_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TDataType*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_AsString_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataType*)(G__getstructoffset()))->AsString((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_Property_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TDataType*)(G__getstructoffset()))->Property());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_DeclFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataType*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_DeclFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataType*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_ImplFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataType*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_ImplFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataType*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_Class_Version_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDataType*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_Class_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataType*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_Dictionary_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDataType*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_IsA_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataType*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_ShowMembers_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDataType*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataType_Streamer_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDataType*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TDataType_TDataType_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TDataType *p;
   if(1!=libp->paran) ;
   p=new TDataType(*(TDataType*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TDataType);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDataType_wATDataType_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TDataType *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TDataType *)((G__getstructoffset())+sizeof(TDataType)*i);
   else  delete (TDataType *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TInterpreter */
static int G__TInterpreter_EndOfLineAction_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->EndOfLineAction();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_GetMore_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInterpreter*)(G__getstructoffset()))->GetMore());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_GetPrompt_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TInterpreter*)(G__getstructoffset()))->GetPrompt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_InitializeDictionaries_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInterpreter*)(G__getstructoffset()))->InitializeDictionaries());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_LoadMacro_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->LoadMacro((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_ProcessLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInterpreter*)(G__getstructoffset()))->ProcessLine((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_ProcessLineSynch_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInterpreter*)(G__getstructoffset()))->ProcessLineSynch((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_PrintIntro_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->PrintIntro();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Reset_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_ResetAll_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->ResetAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_ResetGlobals_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->ResetGlobals();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_DeleteGlobal_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInterpreter*)(G__getstructoffset()))->DeleteGlobal((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_SaveContext_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->SaveContext();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_SaveGlobalsContext_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->SaveGlobalsContext();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_UpdateListOfGlobals_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->UpdateListOfGlobals();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_UpdateListOfGlobalFunctions_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->UpdateListOfGlobalFunctions();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_SetClassInfo_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->SetClassInfo((TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Calc_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TInterpreter*)(G__getstructoffset()))->Calc((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_CreateListOfBaseClasses_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->CreateListOfBaseClasses((TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_CreateListOfDataMembers_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->CreateListOfDataMembers((TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_CreateListOfMethods_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->CreateListOfMethods((TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_CreateListOfMethodArgs_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->CreateListOfMethodArgs((TFunction*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_CreateListOfTypes_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->CreateListOfTypes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_GetInterfaceMethod_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TInterpreter*)(G__getstructoffset()))->GetInterfaceMethod((TClass*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_GetInterfaceMethodWithPrototype_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TInterpreter*)(G__getstructoffset()))->GetInterfaceMethodWithPrototype((TClass*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Execute_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->Execute((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Execute_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->Execute((TObject*)G__int(libp->para[0]),(TClass*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Text_t*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Execute_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->Execute((TObject*)G__int(libp->para[0]),(TClass*)G__int(libp->para[1])
,(TMethod*)G__int(libp->para[2]),(TObjArray*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_ExecuteMacro_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInterpreter*)(G__getstructoffset()))->ExecuteMacro((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_TypeName_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TInterpreter*)(G__getstructoffset()))->TypeName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_DeclFileName_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TInterpreter*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_DeclFileLine_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInterpreter*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_ImplFileName_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TInterpreter*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_ImplFileLine_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInterpreter*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Class_Version_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TInterpreter*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Class_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TInterpreter*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Dictionary_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_IsA_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TInterpreter*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_ShowMembers_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInterpreter_Streamer_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInterpreter*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TInterpreter_wATInterpreter_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TInterpreter *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TInterpreter *)((G__getstructoffset())+sizeof(TInterpreter)*i);
   else  delete (TInterpreter *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGlobal */
static int G__TGlobal_TGlobal_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TGlobal *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TGlobal((G__DataMemberInfo*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TGlobal[G__getaryconstruct()];
   else                    p=new TGlobal;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TGlobal);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_GetArrayDim_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGlobal*)(G__getstructoffset()))->GetArrayDim());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_GetMaxIndex_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGlobal*)(G__getstructoffset()))->GetMaxIndex((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_GetAddress_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TGlobal*)(G__getstructoffset()))->GetAddress());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_GetTypeName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGlobal*)(G__getstructoffset()))->GetTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_GetFullTypeName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGlobal*)(G__getstructoffset()))->GetFullTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_GetName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGlobal*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_GetTitle_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGlobal*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_Compare_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGlobal*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_Hash_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TGlobal*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_Property_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TGlobal*)(G__getstructoffset()))->Property());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGlobal*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGlobal*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGlobal*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGlobal*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGlobal*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGlobal*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGlobal*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGlobal*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGlobal*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGlobal_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGlobal*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGlobal_TGlobal_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TGlobal *p;
   if(1!=libp->paran) ;
   p=new TGlobal(*(TGlobal*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TGlobal);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGlobal_wATGlobal_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGlobal *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGlobal *)((G__getstructoffset())+sizeof(TGlobal)*i);
   else  delete (TGlobal *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TFunction */
static int G__TFunction_TFunction_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFunction *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TFunction((G__MethodInfo*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TFunction[G__getaryconstruct()];
   else                    p=new TFunction;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TFunction);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_GetName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFunction*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_GetSignature_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFunction*)(G__getstructoffset()))->GetSignature());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_GetTitle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFunction*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_GetReturnTypeName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFunction*)(G__getstructoffset()))->GetReturnTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_GetListOfMethodArgs_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFunction*)(G__getstructoffset()))->GetListOfMethodArgs());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_GetNargs_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFunction*)(G__getstructoffset()))->GetNargs());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_GetNargsOpt_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFunction*)(G__getstructoffset()))->GetNargsOpt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_Compare_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFunction*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_Hash_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TFunction*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_InterfaceMethod_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TFunction*)(G__getstructoffset()))->InterfaceMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_Property_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TFunction*)(G__getstructoffset()))->Property());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_DeclFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFunction*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_DeclFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFunction*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_ImplFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFunction*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_ImplFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFunction*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_Class_Version_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFunction*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_Class_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFunction*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_Dictionary_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFunction*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_IsA_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFunction*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_ShowMembers_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFunction*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFunction_Streamer_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFunction*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TFunction_TFunction_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TFunction *p;
   if(1!=libp->paran) ;
   p=new TFunction(*(TFunction*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TFunction);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFunction_wATFunction_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFunction *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFunction *)((G__getstructoffset())+sizeof(TFunction)*i);
   else  delete (TFunction *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TCint */
static int G__TCint_TCint_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TCint *p=NULL;
      p = new TCint((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TCint);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_EndOfLineAction_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->EndOfLineAction();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_GetMore_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->GetMore());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_GetPrompt_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCint*)(G__getstructoffset()))->GetPrompt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_InitializeDictionaries_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->InitializeDictionaries());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_LoadMacro_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->LoadMacro((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ProcessLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->ProcessLine((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ProcessLineAsynch_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->ProcessLineAsynch((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ProcessLineSynch_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->ProcessLineSynch((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_PrintIntro_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->PrintIntro();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Reset_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ResetAll_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->ResetAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ResetGlobals_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->ResetGlobals();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_DeleteGlobal_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->DeleteGlobal((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_SaveContext_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->SaveContext();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_SaveGlobalsContext_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->SaveGlobalsContext();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_UpdateListOfGlobals_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->UpdateListOfGlobals();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_UpdateListOfGlobalFunctions_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->UpdateListOfGlobalFunctions();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_SetClassInfo_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->SetClassInfo((TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Calc_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TCint*)(G__getstructoffset()))->Calc((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_CreateListOfBaseClasses_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->CreateListOfBaseClasses((TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_CreateListOfDataMembers_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->CreateListOfDataMembers((TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_CreateListOfMethods_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->CreateListOfMethods((TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_CreateListOfMethodArgs_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->CreateListOfMethodArgs((TFunction*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_CreateListOfTypes_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->CreateListOfTypes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_GetInterfaceMethod_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TCint*)(G__getstructoffset()))->GetInterfaceMethod((TClass*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_GetInterfaceMethodWithPrototype_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TCint*)(G__getstructoffset()))->GetInterfaceMethodWithPrototype((TClass*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Execute_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->Execute((Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Execute_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->Execute((TObject*)G__int(libp->para[0]),(TClass*)G__int(libp->para[1])
,(Text_t*)G__int(libp->para[2]),(Text_t*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Execute_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->Execute((TObject*)G__int(libp->para[0]),(TClass*)G__int(libp->para[1])
,(TMethod*)G__int(libp->para[2]),(TObjArray*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ExecuteMacro_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->ExecuteMacro((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_TypeName_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCint*)(G__getstructoffset()))->TypeName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_FindObject_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TCint*)(G__getstructoffset()))->FindObject((char*)G__int(libp->para[0]),(G__ClassInfo*)G__int(libp->para[1])
,(void**)G__int(libp->para[2]),(void**)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_UpdateAllCanvases_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->UpdateAllCanvases();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_DeclFileName_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCint*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_DeclFileLine_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ImplFileName_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCint*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ImplFileLine_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCint*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Class_Version_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TCint*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Class_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCint*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Dictionary_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_IsA_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCint*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_ShowMembers_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCint_Streamer_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCint*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TCint_TCint_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TCint *p;
   if(1!=libp->paran) ;
   p=new TCint(*(TCint*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TCint);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TCint_wATCint_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TCint *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TCint *)((G__getstructoffset())+sizeof(TCint)*i);
   else  delete (TCint *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TDictionary */
static int G__TDictionary_GetName_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDictionary*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_GetTitle_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDictionary*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_Property_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TDictionary*)(G__getstructoffset()))->Property());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_Hash_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TDictionary*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_IsSortable_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDictionary*)(G__getstructoffset()))->IsSortable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_Compare_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDictionary*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_DeclFileName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDictionary*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_DeclFileLine_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDictionary*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_ImplFileName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDictionary*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_ImplFileLine_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDictionary*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_Class_Version_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDictionary*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_Class_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDictionary*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_Dictionary_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDictionary*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_IsA_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDictionary*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_ShowMembers_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDictionary*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDictionary_Streamer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDictionary*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDictionary_wATDictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TDictionary *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TDictionary *)((G__getstructoffset())+sizeof(TDictionary)*i);
   else  delete (TDictionary *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TBaseClass */
static int G__TBaseClass_TBaseClass_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBaseClass *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TBaseClass((G__BaseClassInfo*)G__int(libp->para[0]),(TClass*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TBaseClass((G__BaseClassInfo*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TBaseClass[G__getaryconstruct()];
   else                    p=new TBaseClass;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TBaseClass);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_Browse_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBaseClass*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_GetName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBaseClass*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_GetTitle_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBaseClass*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_GetClassPointer_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBaseClass*)(G__getstructoffset()))->GetClassPointer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_GetDelta_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBaseClass*)(G__getstructoffset()))->GetDelta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_Compare_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBaseClass*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_Hash_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TBaseClass*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_IsFolder_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TBaseClass*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_Property_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TBaseClass*)(G__getstructoffset()))->Property());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBaseClass*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBaseClass*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBaseClass*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBaseClass*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBaseClass*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBaseClass*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBaseClass*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBaseClass*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBaseClass*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBaseClass_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBaseClass*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TBaseClass_TBaseClass_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TBaseClass *p;
   if(1!=libp->paran) ;
   p=new TBaseClass(*(TBaseClass*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TBaseClass);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBaseClass_wATBaseClass_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TBaseClass *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TBaseClass *)((G__getstructoffset())+sizeof(TBaseClass)*i);
   else  delete (TBaseClass *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TDataMember */
static int G__TDataMember_TDataMember_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDataMember *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TDataMember((G__DataMemberInfo*)G__int(libp->para[0]),(TClass*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TDataMember((G__DataMemberInfo*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TDataMember[G__getaryconstruct()];
   else                    p=new TDataMember;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TDataMember);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetArrayDim_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataMember*)(G__getstructoffset()))->GetArrayDim());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetMaxIndex_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataMember*)(G__getstructoffset()))->GetMaxIndex((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetClass_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataMember*)(G__getstructoffset()))->GetClass());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetDataType_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataMember*)(G__getstructoffset()))->GetDataType());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataMember*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetOffset_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataMember*)(G__getstructoffset()))->GetOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetTitle_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataMember*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetTypeName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataMember*)(G__getstructoffset()))->GetTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetFullTypeName_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataMember*)(G__getstructoffset()))->GetFullTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetOptions_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataMember*)(G__getstructoffset()))->GetOptions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_SetterMethod_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataMember*)(G__getstructoffset()))->SetterMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_GetterMethod_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataMember*)(G__getstructoffset()))->GetterMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_Compare_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataMember*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_Hash_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TDataMember*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_IsBasic_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDataMember*)(G__getstructoffset()))->IsBasic());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_IsEnum_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDataMember*)(G__getstructoffset()))->IsEnum());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_IsaPointer_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDataMember*)(G__getstructoffset()))->IsaPointer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_IsPersistent_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDataMember*)(G__getstructoffset()))->IsPersistent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_Property_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TDataMember*)(G__getstructoffset()))->Property());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_DeclFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataMember*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_DeclFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataMember*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_ImplFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDataMember*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_ImplFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDataMember*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_Class_Version_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDataMember*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_Class_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataMember*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_Dictionary_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDataMember*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_IsA_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDataMember*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_ShowMembers_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDataMember*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDataMember_Streamer_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDataMember*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TDataMember_TDataMember_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TDataMember *p;
   if(1!=libp->paran) ;
   p=new TDataMember(*(TDataMember*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TDataMember);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDataMember_wATDataMember_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TDataMember *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TDataMember *)((G__getstructoffset())+sizeof(TDataMember)*i);
   else  delete (TDataMember *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMethodCall */
static int G__TMethodCall_TMethodCall_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMethodCall *p=NULL;
   if(G__getaryconstruct()) p=new TMethodCall[G__getaryconstruct()];
   else                    p=new TMethodCall;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TMethodCall);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_TMethodCall_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMethodCall *p=NULL;
      p = new TMethodCall(
(TClass*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TMethodCall);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_TMethodCall_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMethodCall *p=NULL;
      p = new TMethodCall((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TMethodCall);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Init_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Init((TClass*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Init_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Init((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_InitWithPrototype_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->InitWithPrototype((TClass*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_InitWithPrototype_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->InitWithPrototype((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_CallDtorOnly_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->CallDtorOnly((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->CallDtorOnly();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_GetMethod_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethodCall*)(G__getstructoffset()))->GetMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_GetMethodName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodCall*)(G__getstructoffset()))->GetMethodName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_GetParams_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodCall*)(G__getstructoffset()))->GetParams());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_GetProto_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodCall*)(G__getstructoffset()))->GetProto());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_ReturnType_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethodCall*)(G__getstructoffset()))->ReturnType());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_SetParamPtrs_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->SetParamPtrs((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((void*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((void*)G__int(libp->para[0]),libp->para[1].ref?*(Long_t*)libp->para[1].ref:G__Mlong(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((void*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,libp->para[2].ref?*(Long_t*)libp->para[2].ref:G__Mlong(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((void*)G__int(libp->para[0]),libp->para[1].ref?*(Double_t*)libp->para[1].ref:G__Mdouble(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((void*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,libp->para[2].ref?*(Double_t*)libp->para[2].ref:G__Mdouble(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((void*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Text_t**)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute(libp->para[0].ref?*(Long_t*)libp->para[0].ref:G__Mlong(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((const char*)G__int(libp->para[0]),libp->para[1].ref?*(Long_t*)libp->para[1].ref:G__Mlong(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute(libp->para[0].ref?*(Double_t*)libp->para[0].ref:G__Mdouble(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Execute_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Execute((const char*)G__int(libp->para[0]),libp->para[1].ref?*(Double_t*)libp->para[1].ref:G__Mdouble(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_DeclFileName_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodCall*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_DeclFileLine_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethodCall*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_ImplFileName_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodCall*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_ImplFileLine_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethodCall*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Class_Version_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMethodCall*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Class_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethodCall*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Dictionary_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_IsA_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethodCall*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_ShowMembers_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodCall_Streamer_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodCall*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMethodCall_TMethodCall_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMethodCall *p;
   if(1!=libp->paran) ;
   p=new TMethodCall(*(TMethodCall*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TMethodCall);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMethodCall_wATMethodCall_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMethodCall *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMethodCall *)((G__getstructoffset())+sizeof(TMethodCall)*i);
   else  delete (TMethodCall *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMethodArg */
static int G__TMethodArg_TMethodArg_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMethodArg *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TMethodArg((G__MethodArgInfo*)G__int(libp->para[0]),(TFunction*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TMethodArg((G__MethodArgInfo*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TMethodArg[G__getaryconstruct()];
   else                    p=new TMethodArg;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TMethodArg);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_GetDefault_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodArg*)(G__getstructoffset()))->GetDefault());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_GetMethod_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethodArg*)(G__getstructoffset()))->GetMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_GetName_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodArg*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_GetTitle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodArg*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_GetTypeName_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodArg*)(G__getstructoffset()))->GetTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_GetFullTypeName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodArg*)(G__getstructoffset()))->GetFullTypeName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_Compare_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethodArg*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_Hash_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TMethodArg*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_Property_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMethodArg*)(G__getstructoffset()))->Property());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_GetDataMember_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethodArg*)(G__getstructoffset()))->GetDataMember());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_GetOptions_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethodArg*)(G__getstructoffset()))->GetOptions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_DeclFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodArg*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_DeclFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethodArg*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_ImplFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMethodArg*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_ImplFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMethodArg*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_Class_Version_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMethodArg*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_Class_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethodArg*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_Dictionary_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodArg*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_IsA_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMethodArg*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_ShowMembers_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodArg*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMethodArg_Streamer_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMethodArg*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMethodArg_TMethodArg_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMethodArg *p;
   if(1!=libp->paran) ;
   p=new TMethodArg(*(TMethodArg*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TMethodArg);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMethodArg_wATMethodArg_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMethodArg *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMethodArg *)((G__getstructoffset())+sizeof(TMethodArg)*i);
   else  delete (TMethodArg *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TToggle */
static int G__TToggle_TToggle_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TToggle *p=NULL;
   if(G__getaryconstruct()) p=new TToggle[G__getaryconstruct()];
   else                    p=new TToggle;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TToggle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_SetToggledObject_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->SetToggledObject((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_SetToggledVariable_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->SetToggledVariable(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_IsInitialized_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TToggle*)(G__getstructoffset()))->IsInitialized());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_GetState_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TToggle*)(G__getstructoffset()))->GetState());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_SetState_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->SetState((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_Toggle_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->Toggle();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_SetOnValue_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->SetOnValue((Long_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_GetOnValue_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TToggle*)(G__getstructoffset()))->GetOnValue());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_SetOffValue_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->SetOffValue((Long_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_GetOffValue_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TToggle*)(G__getstructoffset()))->GetOffValue());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_GetValue_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TToggle*)(G__getstructoffset()))->GetValue());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_SetValue_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->SetValue((Long_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_DeclFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TToggle*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_DeclFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TToggle*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_ImplFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TToggle*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_ImplFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TToggle*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_Class_Version_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TToggle*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_Class_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TToggle*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_Dictionary_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_IsA_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TToggle*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_ShowMembers_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggle_Streamer_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggle*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TToggle_TToggle_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TToggle *p;
   if(1!=libp->paran) ;
   p=new TToggle(*(TToggle*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TToggle);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TToggle_wATToggle_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TToggle *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TToggle *)((G__getstructoffset())+sizeof(TToggle)*i);
   else  delete (TToggle *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TToggleGroup */
static int G__TToggleGroup_TToggleGroup_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TToggleGroup *p=NULL;
   if(G__getaryconstruct()) p=new TToggleGroup[G__getaryconstruct()];
   else                    p=new TToggleGroup;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_GetTogglesCount_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TToggleGroup*)(G__getstructoffset()))->GetTogglesCount());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_At_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TToggleGroup*)(G__getstructoffset()))->At((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Remove_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggleGroup*)(G__getstructoffset()))->Remove((TToggle*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Remove_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggleGroup*)(G__getstructoffset()))->Remove((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_DeleteAll_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggleGroup*)(G__getstructoffset()))->DeleteAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_First_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TToggleGroup*)(G__getstructoffset()))->First());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Last_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TToggleGroup*)(G__getstructoffset()))->Last());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_IndexOf_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TToggleGroup*)(G__getstructoffset()))->IndexOf((TToggle*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Add_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((TToggleGroup*)(G__getstructoffset()))->Add((TToggle*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((TToggleGroup*)(G__getstructoffset()))->Add((TToggle*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_InsertAt_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((TToggleGroup*)(G__getstructoffset()))->InsertAt((TToggle*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((TToggleGroup*)(G__getstructoffset()))->InsertAt((TToggle*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Select_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggleGroup*)(G__getstructoffset()))->Select((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Select_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggleGroup*)(G__getstructoffset()))->Select((TToggle*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_DeclFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TToggleGroup*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_DeclFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TToggleGroup*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_ImplFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TToggleGroup*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_ImplFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TToggleGroup*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Class_Version_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TToggleGroup*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Class_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TToggleGroup*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Dictionary_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggleGroup*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_IsA_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TToggleGroup*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_ShowMembers_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggleGroup*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TToggleGroup_Streamer_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TToggleGroup*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TToggleGroup_TToggleGroup_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TToggleGroup *p;
   if(1!=libp->paran) ;
   p=new TToggleGroup(*(TToggleGroup*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TToggleGroup_wATToggleGroup_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TToggleGroup *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TToggleGroup *)((G__getstructoffset())+sizeof(TToggleGroup)*i);
   else  delete (TToggleGroup *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TClass */

/* TMethod */

/* TDataType */

/* TInterpreter */

/* TGlobal */

/* TFunction */

/* TCint */

/* TDictionary */

/* TBaseClass */

/* TDataMember */

/* TMethodCall */

/* TMethodArg */

/* TToggle */

/* TToggleGroup */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Meta {
 public:
  G__Sizep2memfuncG__Meta() {p=&G__Sizep2memfuncG__Meta::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Meta::*p)();
};

size_t G__get_sizep2memfuncG__Meta()
{
  G__Sizep2memfuncG__Meta a;
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
extern "C" void G__cpp_setup_inheritanceG__Meta() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TClass))) {
     TClass *G__Lderived;
     G__Lderived=(TClass*)0x1000;
     {
       TDictionary *G__Lpbase=(TDictionary*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TClass),G__get_linked_tagnum(&G__G__MetaLN_TDictionary),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TClass),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TMethod))) {
     TMethod *G__Lderived;
     G__Lderived=(TMethod*)0x1000;
     {
       TFunction *G__Lpbase=(TFunction*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethod),G__get_linked_tagnum(&G__G__MetaLN_TFunction),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TDictionary *G__Lpbase=(TDictionary*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethod),G__get_linked_tagnum(&G__G__MetaLN_TDictionary),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethod),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TDataType))) {
     TDataType *G__Lderived;
     G__Lderived=(TDataType*)0x1000;
     {
       TDictionary *G__Lpbase=(TDictionary*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataType),G__get_linked_tagnum(&G__G__MetaLN_TDictionary),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataType),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TInterpreter))) {
     TInterpreter *G__Lderived;
     G__Lderived=(TInterpreter*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TInterpreter),G__get_linked_tagnum(&G__G__MetaLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TInterpreter),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TGlobal))) {
     TGlobal *G__Lderived;
     G__Lderived=(TGlobal*)0x1000;
     {
       TDictionary *G__Lpbase=(TDictionary*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TGlobal),G__get_linked_tagnum(&G__G__MetaLN_TDictionary),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TGlobal),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TFunction))) {
     TFunction *G__Lderived;
     G__Lderived=(TFunction*)0x1000;
     {
       TDictionary *G__Lpbase=(TDictionary*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TFunction),G__get_linked_tagnum(&G__G__MetaLN_TDictionary),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TFunction),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TCint))) {
     TCint *G__Lderived;
     G__Lderived=(TCint*)0x1000;
     {
       TInterpreter *G__Lpbase=(TInterpreter*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TCint),G__get_linked_tagnum(&G__G__MetaLN_TInterpreter),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TCint),G__get_linked_tagnum(&G__G__MetaLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TCint),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TDictionary))) {
     TDictionary *G__Lderived;
     G__Lderived=(TDictionary*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TDictionary),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TBaseClass))) {
     TBaseClass *G__Lderived;
     G__Lderived=(TBaseClass*)0x1000;
     {
       TDictionary *G__Lpbase=(TDictionary*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TBaseClass),G__get_linked_tagnum(&G__G__MetaLN_TDictionary),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TBaseClass),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TDataMember))) {
     TDataMember *G__Lderived;
     G__Lderived=(TDataMember*)0x1000;
     {
       TDictionary *G__Lpbase=(TDictionary*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataMember),G__get_linked_tagnum(&G__G__MetaLN_TDictionary),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataMember),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TMethodCall))) {
     TMethodCall *G__Lderived;
     G__Lderived=(TMethodCall*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TMethodArg))) {
     TMethodArg *G__Lderived;
     G__Lderived=(TMethodArg*)0x1000;
     {
       TDictionary *G__Lpbase=(TDictionary*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodArg),G__get_linked_tagnum(&G__G__MetaLN_TDictionary),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodArg),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TToggle))) {
     TToggle *G__Lderived;
     G__Lderived=(TToggle*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggle),G__get_linked_tagnum(&G__G__MetaLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggle),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup))) {
     TToggleGroup *G__Lderived;
     G__Lderived=(TToggleGroup*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup),G__get_linked_tagnum(&G__G__MetaLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup),G__get_linked_tagnum(&G__G__MetaLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Meta() {

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
   G__search_typename2("G__SIGNEDCHAR_T",99,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("G__value",117,G__get_linked_tagnum(&G__G__MetaLN_G__value),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("G__incsetup",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("G__linked_taginfo",117,G__get_linked_tagnum(&G__G__MetaLN_G__linked_taginfo),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("G__COMPLETIONLIST",117,G__get_linked_tagnum(&G__G__MetaLN_G__COMPLETIONLIST),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("void (*)()",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("G__InterfaceMethod",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("G__UINT32",107,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TWin32SendClass",99,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TClass */
static void G__setup_memvarTClass(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TClass));
   { TClass *p; p=(TClass*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__MetaLN_TString),-1,-1,4,"fName=",0,"name of class");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,-1,4,"fRealData=",0,"linked list for persistent members including base classes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,-1,4,"fBase=",0,"linked list for base classes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,-1,4,"fData=",0,"linked list for data members");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,-1,4,"fMethod=",0,"linked list for methods");
   G__memvar_setup((void*)NULL,67,0,1,-1,-1,-1,4,"fDeclFileName=",0,"name of class declaration file");
   G__memvar_setup((void*)NULL,67,0,1,-1,-1,-1,4,"fImplFileName=",0,"name of class implementation file");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Short_t"),-1,4,"fDeclFileLine=",0,"line of class declaration");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Short_t"),-1,4,"fImplFileLine=",0,"line of class implementation");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fInstanceCount=",0,"number of instances of this class");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fOnHeap=",0,"number of instances on heap");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Version_t"),-1,4,"fClassVersion=",0,"Class version Identifier");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__ClassInfo),-1,-1,4,"fClassInfo=",0,"pointer to CINT class info class");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMethod */
static void G__setup_memvarTMethod(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethod));
   { TMethod *p; p=(TMethod*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-1,4,"fClass=",0,"pointer to the class");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__MetaLN_EMenuItemKind),-1,-1,4,"fMenuItem=",0,"type of menuitem in context menu");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TDataType */
static void G__setup_memvarTDataType(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataType));
   { TDataType *p; p=(TDataType*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__TypedefInfo),-1,-1,4,"fInfo=",0,"pointer to CINT typedef info");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__MetaLN_TString),-1,-1,4,"fName=",0,"name of basic type (in case fInfo==0)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fSize=",0,"size of basic type (in case fInfo==0)");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__MetaLN_EDataType),-1,-1,4,"fType=",0,"type id");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TInterpreter */
static void G__setup_memvarTInterpreter(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TInterpreter));
   { TInterpreter *p; p=(TInterpreter*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGlobal */
static void G__setup_memvarTGlobal(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TGlobal));
   { TGlobal *p; p=(TGlobal*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__DataMemberInfo),-1,-1,4,"fInfo=",0,"pointer to CINT data member info");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TFunction */
static void G__setup_memvarTFunction(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TFunction));
   { TFunction *p; p=(TFunction*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__MethodInfo),-1,-1,2,"fInfo=",0,"pointer to CINT function info");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__MetaLN_TString),-1,-1,2,"fSignature=",0,"string containing function signature");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,-1,2,"fMethodArgs=",0,"list of function arguments");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TCint */
static void G__setup_memvarTCint(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TCint));
   { TCint *p; p=(TCint*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fMore=",0,"1 if more input is required");
   G__memvar_setup((void*)NULL,99,0,0,-1,-1,-1,4,"fPrompt[64]=",0,"proposed prompt string");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__dictposition),-1,-1,4,"fDictPos=",0,"CINT dictionary context after init");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__dictposition),-1,-1,4,"fDictPosGlobals=",0,"CINT dictionary context after ResetGlobals()");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TDictionary */
static void G__setup_memvarTDictionary(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TDictionary));
   { TDictionary *p; p=(TDictionary*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TBaseClass */
static void G__setup_memvarTBaseClass(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TBaseClass));
   { TBaseClass *p; p=(TBaseClass*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__BaseClassInfo),-1,-1,4,"fInfo=",0,"pointer to CINT base class info");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-1,4,"fClassPtr=",0,"pointer to the base class TClass");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-1,4,"fClass=",0,"pointer to class");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TDataMember */
static void G__setup_memvarTDataMember(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataMember));
   { TDataMember *p; p=(TDataMember*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__DataMemberInfo),-1,-1,4,"fInfo=",0,"pointer to CINT data member info");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-1,4,"fClass=",0,"pointer to the class");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TDataType),-1,-1,4,"fDataType=",0,"pointer to data basic type descriptor");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,-1,4,"fValueGetter=",0,"method that returns a value;");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,-1,4,"fValueSetter=",0,"method which sets value;");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,-1,4,"fOptions=",0,"list of possible values 0=no restrictions");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMethodCall */
static void G__setup_memvarTMethodCall(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodCall));
   { TMethodCall *p; p=(TMethodCall*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__CallFunc),-1,-1,4,"fFunc=",0,"CINT method invocation environment");
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-1,4,"fOffset=",0,"offset added to object pointer before method invocation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-1,4,"fClass=",0,"pointer to the class info");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TFunction),-1,-1,4,"fMetPtr=",0,"pointer to the method or function info");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__MetaLN_TString),-1,-1,4,"fMethod=",0,"method name");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__MetaLN_TString),-1,-1,4,"fParams=",0,"argument string");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__MetaLN_TString),-1,-1,4,"fProto=",0,"prototype string");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fDtorOnly=",0,"call only dtor and not delete when calling ~xxx");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__MetaLN_EReturnType),-1,-1,4,"fRetType=",0,"method return type");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMethodArg */
static void G__setup_memvarTMethodArg(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodArg));
   { TMethodArg *p; p=(TMethodArg*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_G__MethodArgInfo),-1,-1,4,"fInfo=",0,"pointer to CINT method argument info");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TFunction),-1,-1,4,"fMethod=",0,"pointer to the method or global function");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TDataMember),-1,-1,4,"fDataMember=",0,"TDataMember pointed by this arg,to get values and options from.");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TToggle */
static void G__setup_memvarTToggle(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggle));
   { TToggle *p; p=(TToggle*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fState=",0,"Object's state - \"a local copy\"");
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-1,4,"fOnValue=",0,"Value recognized as switched ON (Def=1)");
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-1,4,"fOffValue=",0,"Value recognized as switched OFF(Def=0)");
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-1,4,"fValue=",0,"Local copy of a value returned by called function");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fInitialized=",0,"True if either SetToggledObject or SetToggledVariable called - enables Toggle() method.");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TObject),-1,-1,2,"fObject=",0,"The object this Toggle belongs to");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,-1,2,"fGetter=",0,"Method to Get a value of fObject;");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,-1,2,"fSetter=",0,"Method to Set a value of fObject;");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTglVariable=",0,"Alternatively: pointer to an integer value to be Toggled instead of TObjectl");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TToggleGroup */
static void G__setup_memvarTToggleGroup(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup));
   { TToggleGroup *p; p=(TToggleGroup*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TOrdCollection),-1,-1,4,"fToggles=",0,"list of TToggle objects");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TToggle),-1,-1,4,"fSelected=",0,"currently selected object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Meta() {
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
static void G__setup_memfuncTClass(void) {
   /* TClass */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TClass));
   G__memfunc_setup("GetClassMethod",1399,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__MetaLN_TMethod),-1,0,1,1,4,0,"l - 'Long_t' 0 - faddr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TClass",586,G__TClass_TClass_1_0,105,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TClass",586,G__TClass_TClass_2_0,105,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,6,1,1,0,
"C - 'Text_t' 0 - name s - 'Version_t' 0 - cversion "
"C - 'Text_t' 0 0 dfil C - 'Text_t' 0 0 ifil "
"i - 'Int_t' 0 0 dl i - 'Int_t' 0 0 il",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddInstance",1086,G__TClass_AddInstance_4_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE heap",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TClass_Browse_5_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BuildRealData",1262,G__TClass_BuildRealData_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Draw",398,G__TClass_Draw_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EscapeChars",1090,G__TClass_EscapeChars_8_0,67,-1,G__defined_typename("Text_t"),0,1,1,1,0,"C - 'Text_t' 0 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetClassVersion",1532,G__TClass_GetClassVersion_9_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDataMember",1266,G__TClass_GetDataMember_0_1,85,G__get_linked_tagnum(&G__G__MetaLN_TDataMember),-1,0,1,1,1,0,"C - 'Text_t' 0 - datamember",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDeclFileName",1433,G__TClass_GetDeclFileName_1_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDeclFileLine",1440,G__TClass_GetDeclFileLine_2_1,115,-1,G__defined_typename("Short_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetClassInfo",1186,G__TClass_GetClassInfo_3_1,85,G__get_linked_tagnum(&G__G__MetaLN_G__ClassInfo),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfDataMembers",1974,G__TClass_GetListOfDataMembers_4_1,85,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfBases",1375,G__TClass_GetListOfBases_5_1,85,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfMethods",1605,G__TClass_GetListOfMethods_6_1,85,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfRealData",1647,G__TClass_GetListOfRealData_7_1,85,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TClass_GetName_8_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TClass_GetTitle_9_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetImplFileName",1459,G__TClass_GetImplFileName_0_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetImplFileLine",1466,G__TClass_GetImplFileLine_1_2,115,-1,G__defined_typename("Short_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBaseClass",1169,G__TClass_GetBaseClass_2_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,1,1,1,0,"C - 'Text_t' 0 - classname",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBaseClass",1169,G__TClass_GetBaseClass_3_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBaseDataMember",1645,G__TClass_GetBaseDataMember_4_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,1,1,1,0,"C - 'Text_t' 0 - datamember",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetInstanceCount",1630,G__TClass_GetInstanceCount_5_2,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHeapInstanceCount",2012,G__TClass_GetHeapInstanceCount_6_2,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMenuItems",1207,G__TClass_GetMenuItems_7_2,121,-1,-1,0,1,1,1,0,"U 'TList' - 0 - listitems",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMethod",897,G__TClass_GetMethod_8_2,85,G__get_linked_tagnum(&G__G__MetaLN_TMethod),-1,0,2,1,1,0,
"C - 'Text_t' 0 - method C - 'Text_t' 0 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMethodWithPrototype",2291,G__TClass_GetMethodWithPrototype_9_2,85,G__get_linked_tagnum(&G__G__MetaLN_TMethod),-1,0,2,1,1,0,
"C - 'Text_t' 0 - method C - 'Text_t' 0 - proto",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMethodAny",1193,G__TClass_GetMethodAny_0_3,85,G__get_linked_tagnum(&G__G__MetaLN_TMethod),-1,0,1,1,1,0,"C - 'Text_t' 0 - method",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNdata",776,G__TClass_GetNdata_1_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNmethods",1122,G__TClass_GetNmethods_2_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G__TClass_Compare_3_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TClass_Hash_4_3,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InheritsFrom",1242,G__TClass_InheritsFrom_5_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - 'Text_t' 0 - cl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InheritsFrom",1242,G__TClass_InheritsFrom_6_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsFolder",792,G__TClass_IsFolder_7_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("New",298,G__TClass_New_8_3,89,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Destructor",1071,G__TClass_Destructor_9_3,121,-1,-1,0,2,1,1,0,
"Y - - 0 - obj b - 'Bool_t' 0 kFALSE dtorOnly",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResetInstanceCount",1857,G__TClass_ResetInstanceCount_0_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Size",411,G__TClass_Size_1_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Property",869,G__TClass_Property_2_4,108,-1,G__defined_typename("Long_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Load",384,G__TClass_Load_3_4,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Store",525,G__TClass_Store_4_4,121,-1,-1,0,1,1,1,8,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TClass_DeclFileName_5_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TClass_DeclFileLine_6_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TClass_ImplFileName_7_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TClass_ImplFileLine_8_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TClass_Class_Version_9_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TClass_Class_0_5,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TClass_Dictionary_1_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TClass_IsA_2_5,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TClass_ShowMembers_3_5,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TClass_Streamer_4_5,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TClass",586,G__TClass_TClass_5_5,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,1,1,1,0,"u 'TClass' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TClass",712,G__TClass_wATClass_6_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMethod(void) {
   /* TMethod */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethod));
   G__memfunc_setup("CreateSignature",1542,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TMethod",693,G__TMethod_TMethod_1_0,105,G__get_linked_tagnum(&G__G__MetaLN_TMethod),-1,0,2,1,1,0,
"U 'G__MethodInfo' - 0 0 info U 'TClass' - 0 0 cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetClass",790,G__TMethod_GetClass_3_0,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsMenuItem",992,G__TMethod_IsMenuItem_4_0,105,G__get_linked_tagnum(&G__G__MetaLN_EMenuItemKind),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCommentString",1642,G__TMethod_GetCommentString_5_0,67,-1,G__defined_typename("Text_t"),0,0,1,1,1,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FindDataMember",1363,G__TMethod_FindDataMember_6_0,85,G__get_linked_tagnum(&G__G__MetaLN_TDataMember),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetListOfMethodArgs",1887,G__TMethod_GetListOfMethodArgs_7_0,85,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TMethod_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMethod_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMethod_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMethod_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMethod_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMethod_Class_3_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMethod_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMethod_IsA_5_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMethod_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMethod_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMethod",693,G__TMethod_TMethod_8_1,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TMethod),-1,0,1,1,1,0,"u 'TMethod' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMethod",819,G__TMethod_wATMethod_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDataType(void) {
   /* TDataType */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataType));
   G__memfunc_setup("SetType",718,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDataType",880,G__TDataType_TDataType_1_0,105,G__get_linked_tagnum(&G__G__MetaLN_TDataType),-1,0,1,1,1,0,"U 'G__TypedefInfo' - 0 0 info",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDataType",880,G__TDataType_TDataType_2_0,105,G__get_linked_tagnum(&G__G__MetaLN_TDataType),-1,0,1,1,1,0,"C - - 0 - typenam",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Size",411,G__TDataType_Size_4_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetType",706,G__TDataType_GetType_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTypeName",1091,G__TDataType_GetTypeName_6_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFullTypeName",1494,G__TDataType_GetFullTypeName_7_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TDataType_GetName_8_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TDataType_GetTitle_9_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Compare",711,G__TDataType_Compare_0_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TDataType_Hash_1_1,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AsString",811,G__TDataType_AsString_2_1,67,-1,-1,0,1,1,1,9,"Y - - 0 - buf",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Property",869,G__TDataType_Property_3_1,108,-1,G__defined_typename("Long_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TDataType_DeclFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDataType_DeclFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDataType_ImplFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDataType_ImplFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDataType_Class_Version_8_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDataType_Class_9_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TDataType_Dictionary_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDataType_IsA_1_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDataType_ShowMembers_2_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDataType_Streamer_3_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TDataType",880,G__TDataType_TDataType_4_2,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TDataType),-1,0,1,1,1,0,"u 'TDataType' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TDataType",1006,G__TDataType_wATDataType_5_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTInterpreter(void) {
   /* TInterpreter */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TInterpreter));
   G__memfunc_setup("Execute",723,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"U 'TMethod' - 0 - method U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("EndOfLineAction",1458,G__TInterpreter_EndOfLineAction_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetMore",691,G__TInterpreter_GetMore_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPrompt",930,G__TInterpreter_GetPrompt_6_0,67,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("InitializeDictionaries",2288,G__TInterpreter_InitializeDictionaries_7_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("LoadMacro",882,G__TInterpreter_LoadMacro_8_0,121,-1,-1,0,1,1,1,0,"C - - 0 - filename",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ProcessLine",1127,G__TInterpreter_ProcessLine_9_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - line",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ProcessLineSynch",1644,G__TInterpreter_ProcessLineSynch_0_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - line",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PrintIntro",1049,G__TInterpreter_PrintIntro_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Reset",515,G__TInterpreter_Reset_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ResetAll",796,G__TInterpreter_ResetAll_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ResetGlobals",1223,G__TInterpreter_ResetGlobals_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeleteGlobal",1188,G__TInterpreter_DeleteGlobal_5_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"Y - - 0 - obj",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SaveContext",1140,G__TInterpreter_SaveContext_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SaveGlobalsContext",1848,G__TInterpreter_SaveGlobalsContext_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("UpdateListOfGlobals",1912,G__TInterpreter_UpdateListOfGlobals_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("UpdateListOfGlobalFunctions",2750,G__TInterpreter_UpdateListOfGlobalFunctions_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetClassInfo",1198,G__TInterpreter_SetClassInfo_0_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Calc",371,G__TInterpreter_Calc_1_2,108,-1,G__defined_typename("Long_t"),0,1,1,1,0,"C - - 0 - line",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CreateListOfBaseClasses",2286,G__TInterpreter_CreateListOfBaseClasses_2_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CreateListOfDataMembers",2282,G__TInterpreter_CreateListOfDataMembers_3_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CreateListOfMethods",1913,G__TInterpreter_CreateListOfMethods_4_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CreateListOfMethodArgs",2195,G__TInterpreter_CreateListOfMethodArgs_5_2,121,-1,-1,0,1,1,1,0,"U 'TFunction' - 0 - m",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CreateListOfTypes",1722,G__TInterpreter_CreateListOfTypes_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetInterfaceMethod",1810,G__TInterpreter_GetInterfaceMethod_7_2,89,-1,-1,0,3,1,1,0,
"U 'TClass' - 0 - cl C - 'Text_t' 0 - method "
"C - 'Text_t' 0 - params",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetInterfaceMethodWithPrototype",3204,G__TInterpreter_GetInterfaceMethodWithPrototype_8_2,89,-1,-1,0,3,1,1,0,
"U 'TClass' - 0 - cl C - 'Text_t' 0 - method "
"C - 'Text_t' 0 - proto",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Execute",723,G__TInterpreter_Execute_9_2,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 - function C - 'Text_t' 0 - params",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Execute",723,G__TInterpreter_Execute_0_3,121,-1,-1,0,4,1,1,0,
"U 'TObject' - 0 - obj U 'TClass' - 0 - cl "
"C - 'Text_t' 0 - method C - 'Text_t' 0 - params",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Execute",723,G__TInterpreter_Execute_1_3,121,-1,-1,0,4,1,1,0,
"U 'TObject' - 0 - obj U 'TClass' - 0 - cl "
"U 'TMethod' - 0 - method U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ExecuteMacro",1221,G__TInterpreter_ExecuteMacro_2_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - filename",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("TypeName",803,G__TInterpreter_TypeName_3_3,67,-1,-1,0,1,1,1,1,"C - - 0 - s",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeclFileName",1145,G__TInterpreter_DeclFileName_4_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TInterpreter_DeclFileLine_5_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TInterpreter_ImplFileName_6_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TInterpreter_ImplFileLine_7_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TInterpreter_Class_Version_8_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TInterpreter_Class_9_3,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TInterpreter_Dictionary_0_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TInterpreter_IsA_1_4,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TInterpreter_ShowMembers_2_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TInterpreter_Streamer_3_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TInterpreter",1382,G__TInterpreter_wATInterpreter_4_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGlobal(void) {
   /* TGlobal */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TGlobal));
   G__memfunc_setup("TGlobal",677,G__TGlobal_TGlobal_0_0,105,G__get_linked_tagnum(&G__G__MetaLN_TGlobal),-1,0,1,1,1,0,"U 'G__DataMemberInfo' - 0 0 info",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetArrayDim",1081,G__TGlobal_GetArrayDim_2_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMaxIndex",1086,G__TGlobal_GetMaxIndex_3_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"i - 'Int_t' 0 - dim",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAddress",998,G__TGlobal_GetAddress_4_0,89,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTypeName",1091,G__TGlobal_GetTypeName_5_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFullTypeName",1494,G__TGlobal_GetFullTypeName_6_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TGlobal_GetName_7_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TGlobal_GetTitle_8_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Compare",711,G__TGlobal_Compare_9_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TGlobal_Hash_0_1,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Property",869,G__TGlobal_Property_1_1,108,-1,G__defined_typename("Long_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGlobal_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGlobal_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGlobal_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGlobal_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGlobal_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGlobal_Class_7_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TGlobal_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGlobal_IsA_9_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGlobal_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGlobal_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TGlobal",677,G__TGlobal_TGlobal_2_2,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TGlobal),-1,0,1,1,1,0,"u 'TGlobal' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGlobal",803,G__TGlobal_wATGlobal_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFunction(void) {
   /* TFunction */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TFunction));
   G__memfunc_setup("CreateSignature",1542,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TFunction",922,G__TFunction_TFunction_1_0,105,G__get_linked_tagnum(&G__G__MetaLN_TFunction),-1,0,1,1,1,0,"U 'G__MethodInfo' - 0 0 info",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TFunction_GetName_3_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSignature",1234,G__TFunction_GetSignature_4_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitle",802,G__TFunction_GetTitle_5_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetReturnTypeName",1731,G__TFunction_GetReturnTypeName_6_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfMethodArgs",1887,G__TFunction_GetListOfMethodArgs_7_0,85,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNargs",795,G__TFunction_GetNargs_8_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNargsOpt",1102,G__TFunction_GetNargsOpt_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G__TFunction_Compare_0_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TFunction_Hash_1_1,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InterfaceMethod",1522,G__TFunction_InterfaceMethod_2_1,89,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Property",869,G__TFunction_Property_3_1,108,-1,G__defined_typename("Long_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TFunction_DeclFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFunction_DeclFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFunction_ImplFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFunction_ImplFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFunction_Class_Version_8_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFunction_Class_9_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TFunction_Dictionary_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFunction_IsA_1_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFunction_ShowMembers_2_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFunction_Streamer_3_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TFunction",922,G__TFunction_TFunction_4_2,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TFunction),-1,0,1,1,1,0,"u 'TFunction' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TFunction",1048,G__TFunction_wATFunction_5_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTCint(void) {
   /* TCint */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TCint));
   G__memfunc_setup("TCint",482,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__MetaLN_TCint),-1,0,0,1,4,0,"","for Dictionary() only",(void*)NULL,0);
   G__memfunc_setup("Execute",723,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"U 'TMethod' - 0 - - U 'TObjArray' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecThreadCB",1122,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - 'TWin32SendClass' 0 - command",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TCint",482,G__TCint_TCint_3_0,105,G__get_linked_tagnum(&G__G__MetaLN_TCint),-1,0,2,1,1,0,
"C - - 0 - name C - - 0 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EndOfLineAction",1458,G__TCint_EndOfLineAction_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMore",691,G__TCint_GetMore_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrompt",930,G__TCint_GetPrompt_7_0,67,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitializeDictionaries",2288,G__TCint_InitializeDictionaries_8_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LoadMacro",882,G__TCint_LoadMacro_9_0,121,-1,-1,0,1,1,1,0,"C - - 0 - filename",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessLine",1127,G__TCint_ProcessLine_0_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - line",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessLineAsynch",1741,G__TCint_ProcessLineAsynch_1_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - line",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ProcessLineSynch",1644,G__TCint_ProcessLineSynch_2_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - line",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PrintIntro",1049,G__TCint_PrintIntro_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Reset",515,G__TCint_Reset_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetAll",796,G__TCint_ResetAll_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetGlobals",1223,G__TCint_ResetGlobals_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteGlobal",1188,G__TCint_DeleteGlobal_7_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"Y - - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveContext",1140,G__TCint_SaveContext_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveGlobalsContext",1848,G__TCint_SaveGlobalsContext_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateListOfGlobals",1912,G__TCint_UpdateListOfGlobals_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateListOfGlobalFunctions",2750,G__TCint_UpdateListOfGlobalFunctions_1_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClassInfo",1198,G__TCint_SetClassInfo_2_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Calc",371,G__TCint_Calc_3_2,108,-1,G__defined_typename("Long_t"),0,1,1,1,0,"C - - 0 - line",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateListOfBaseClasses",2286,G__TCint_CreateListOfBaseClasses_4_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateListOfDataMembers",2282,G__TCint_CreateListOfDataMembers_5_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateListOfMethods",1913,G__TCint_CreateListOfMethods_6_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateListOfMethodArgs",2195,G__TCint_CreateListOfMethodArgs_7_2,121,-1,-1,0,1,1,1,0,"U 'TFunction' - 0 - m",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateListOfTypes",1722,G__TCint_CreateListOfTypes_8_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetInterfaceMethod",1810,G__TCint_GetInterfaceMethod_9_2,89,-1,-1,0,3,1,1,0,
"U 'TClass' - 0 - cl C - 'Text_t' 0 - method "
"C - 'Text_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetInterfaceMethodWithPrototype",3204,G__TCint_GetInterfaceMethodWithPrototype_0_3,89,-1,-1,0,3,1,1,0,
"U 'TClass' - 0 - cl C - 'Text_t' 0 - method "
"C - 'Text_t' 0 - proto",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TCint_Execute_1_3,121,-1,-1,0,2,1,1,0,
"C - 'Text_t' 0 - function C - 'Text_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TCint_Execute_2_3,121,-1,-1,0,4,1,1,0,
"U 'TObject' - 0 - obj U 'TClass' - 0 - cl "
"C - 'Text_t' 0 - method C - 'Text_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TCint_Execute_3_3,121,-1,-1,0,4,1,1,0,
"U 'TObject' - 0 - obj U 'TClass' - 0 - cl "
"U 'TMethod' - 0 - method U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteMacro",1221,G__TCint_ExecuteMacro_4_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - filename",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TypeName",803,G__TCint_TypeName_5_3,67,-1,-1,0,1,1,1,1,"C - - 0 - typeDesc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FindObject",984,G__TCint_FindObject_6_3,89,-1,-1,0,4,1,1,0,
"C - - 0 - name U 'G__ClassInfo' - 0 - type "
"Y - - 2 - prevObj Y - - 2 - assocPtr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("UpdateAllCanvases",1712,G__TCint_UpdateAllCanvases_7_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TCint_DeclFileName_8_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TCint_DeclFileLine_9_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TCint_ImplFileName_0_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TCint_ImplFileLine_1_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TCint_Class_Version_2_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TCint_Class_3_4,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TCint_Dictionary_4_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TCint_IsA_5_4,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TCint_ShowMembers_6_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TCint_Streamer_7_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TCint",482,G__TCint_TCint_8_4,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TCint),-1,0,1,1,1,0,"u 'TCint' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TCint",608,G__TCint_wATCint_9_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDictionary(void) {
   /* TDictionary */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TDictionary));
   G__memfunc_setup("GetName",673,G__TDictionary_GetName_2_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTitle",802,G__TDictionary_GetTitle_3_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Property",869,G__TDictionary_Property_4_0,108,-1,G__defined_typename("Long_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Hash",388,G__TDictionary_Hash_5_0,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("IsSortable",1016,G__TDictionary_IsSortable_6_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Compare",711,G__TDictionary_Compare_7_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeclFileName",1145,G__TDictionary_DeclFileName_8_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDictionary_DeclFileLine_9_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDictionary_ImplFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDictionary_ImplFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDictionary_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDictionary_Class_3_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TDictionary_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDictionary_IsA_5_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDictionary_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDictionary_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TDictionary",1256,G__TDictionary_wATDictionary_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTBaseClass(void) {
   /* TBaseClass */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TBaseClass));
   G__memfunc_setup("TBaseClass",965,G__TBaseClass_TBaseClass_0_0,105,G__get_linked_tagnum(&G__G__MetaLN_TBaseClass),-1,0,2,1,1,0,
"U 'G__BaseClassInfo' - 0 0 info U 'TClass' - 0 0 cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TBaseClass_Browse_2_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetName",673,G__TBaseClass_GetName_3_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TBaseClass_GetTitle_4_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetClassPointer",1527,G__TBaseClass_GetClassPointer_5_0,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDelta",778,G__TBaseClass_GetDelta_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G__TBaseClass_Compare_7_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TBaseClass_Hash_8_0,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsFolder",792,G__TBaseClass_IsFolder_9_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Property",869,G__TBaseClass_Property_0_1,108,-1,G__defined_typename("Long_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TBaseClass_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBaseClass_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBaseClass_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBaseClass_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBaseClass_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBaseClass_Class_6_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TBaseClass_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBaseClass_IsA_8_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBaseClass_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBaseClass_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TBaseClass",965,G__TBaseClass_TBaseClass_1_2,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TBaseClass),-1,0,1,1,1,0,"u 'TBaseClass' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBaseClass",1091,G__TBaseClass_wATBaseClass_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDataMember(void) {
   /* TDataMember */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataMember));
   G__memfunc_setup("TDataMember",1062,G__TDataMember_TDataMember_0_0,105,G__get_linked_tagnum(&G__G__MetaLN_TDataMember),-1,0,2,1,1,0,
"U 'G__DataMemberInfo' - 0 0 info U 'TClass' - 0 0 cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetArrayDim",1081,G__TDataMember_GetArrayDim_2_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMaxIndex",1086,G__TDataMember_GetMaxIndex_3_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"i - 'Int_t' 0 - dim",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetClass",790,G__TDataMember_GetClass_4_0,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDataType",1084,G__TDataMember_GetDataType_5_0,85,G__get_linked_tagnum(&G__G__MetaLN_TDataType),-1,0,0,1,1,8,"","only for basic type",(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TDataMember_GetName_6_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOffset",903,G__TDataMember_GetOffset_7_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitle",802,G__TDataMember_GetTitle_8_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTypeName",1091,G__TDataMember_GetTypeName_9_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFullTypeName",1494,G__TDataMember_GetFullTypeName_0_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptions",1036,G__TDataMember_GetOptions_1_1,85,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetterMethod",1240,G__TDataMember_SetterMethod_2_1,85,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetterMethod",1228,G__TDataMember_GetterMethod_3_1,85,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G__TDataMember_Compare_4_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TDataMember_Hash_5_1,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsBasic",670,G__TDataMember_IsBasic_6_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsEnum",593,G__TDataMember_IsEnum_7_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsaPointer",1022,G__TDataMember_IsaPointer_8_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsPersistent",1261,G__TDataMember_IsPersistent_9_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Property",869,G__TDataMember_Property_0_2,108,-1,G__defined_typename("Long_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TDataMember_DeclFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDataMember_DeclFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDataMember_ImplFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDataMember_ImplFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDataMember_Class_Version_5_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDataMember_Class_6_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TDataMember_Dictionary_7_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDataMember_IsA_8_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDataMember_ShowMembers_9_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDataMember_Streamer_0_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TDataMember",1062,G__TDataMember_TDataMember_1_3,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TDataMember),-1,0,1,1,1,0,"u 'TDataMember' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TDataMember",1188,G__TDataMember_wATDataMember_2_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMethodCall(void) {
   /* TMethodCall */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodCall));
   G__memfunc_setup("Execute",723,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"C - 'Text_t' 0 - - C - 'Text_t' 0 - -","versions of TObject",(void*)NULL,1);
   G__memfunc_setup("Execute",723,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"U 'TMethod' - 0 - - U 'TObjArray' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TMethodCall",1073,G__TMethodCall_TMethodCall_2_0,105,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMethodCall",1073,G__TMethodCall_TMethodCall_3_0,105,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,0,3,1,1,0,
"U 'TClass' - 0 - cl C - - 0 - method "
"C - - 0 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMethodCall",1073,G__TMethodCall_TMethodCall_4_0,105,G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,0,2,1,1,0,
"C - - 0 - function C - - 0 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,G__TMethodCall_Init_6_0,121,-1,-1,0,3,1,1,0,
"U 'TClass' - 0 - cl C - - 0 - method "
"C - - 0 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,G__TMethodCall_Init_7_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - function C - - 0 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitWithPrototype",1798,G__TMethodCall_InitWithPrototype_8_0,121,-1,-1,0,3,1,1,0,
"U 'TClass' - 0 - cl C - - 0 - method "
"C - - 0 - proto",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitWithPrototype",1798,G__TMethodCall_InitWithPrototype_9_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - function C - - 0 - proto",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CallDtorOnly",1207,G__TMethodCall_CallDtorOnly_0_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE set",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMethod",897,G__TMethodCall_GetMethod_1_1,85,G__get_linked_tagnum(&G__G__MetaLN_TFunction),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMethodName",1282,G__TMethodCall_GetMethodName_2_1,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParams",900,G__TMethodCall_GetParams_3_1,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetProto",820,G__TMethodCall_GetProto_4_1,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReturnType",1058,G__TMethodCall_ReturnType_5_1,105,G__get_linked_tagnum(&G__G__MetaLN_EReturnType),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetParamPtrs",1222,G__TMethodCall_SetParamPtrs_6_1,121,-1,-1,0,1,1,1,0,"Y - - 0 - paramArr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_7_1,121,-1,-1,0,1,1,1,0,"Y - - 0 - object",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_8_1,121,-1,-1,0,2,1,1,0,
"Y - - 0 - object C - - 0 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_9_1,121,-1,-1,0,2,1,1,0,
"Y - - 0 - object l - 'Long_t' 1 - retLong",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_0_2,121,-1,-1,0,3,1,1,0,
"Y - - 0 - object C - - 0 - params "
"l - 'Long_t' 1 - retLong",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_1_2,121,-1,-1,0,2,1,1,0,
"Y - - 0 - object d - 'Double_t' 1 - retDouble",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_2_2,121,-1,-1,0,3,1,1,0,
"Y - - 0 - object C - - 0 - params "
"d - 'Double_t' 1 - retDouble",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_3_2,121,-1,-1,0,3,1,1,0,
"Y - - 0 - object C - - 0 - params "
"C - 'Text_t' 2 - retText",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_5_2,121,-1,-1,0,1,1,1,0,"C - - 0 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_6_2,121,-1,-1,0,1,1,1,0,"l - 'Long_t' 1 - retLong",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_7_2,121,-1,-1,0,2,1,1,0,
"C - - 0 - params l - 'Long_t' 1 - retLong",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_8_2,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 1 - retDouble",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TMethodCall_Execute_9_2,121,-1,-1,0,2,1,1,0,
"C - - 0 - params d - 'Double_t' 1 - retDouble",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMethodCall_DeclFileName_0_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMethodCall_DeclFileLine_1_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMethodCall_ImplFileName_2_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMethodCall_ImplFileLine_3_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMethodCall_Class_Version_4_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMethodCall_Class_5_3,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMethodCall_Dictionary_6_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMethodCall_IsA_7_3,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMethodCall_ShowMembers_8_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMethodCall_Streamer_9_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMethodCall",1073,G__TMethodCall_TMethodCall_0_4,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),-1,0,1,1,1,0,"u 'TMethodCall' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMethodCall",1199,G__TMethodCall_wATMethodCall_1_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMethodArg(void) {
   /* TMethodArg */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodArg));
   G__memfunc_setup("TMethodArg",975,G__TMethodArg_TMethodArg_0_0,105,G__get_linked_tagnum(&G__G__MetaLN_TMethodArg),-1,0,2,1,1,0,
"U 'G__MethodArgInfo' - 0 0 info U 'TFunction' - 0 0 method",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefault",997,G__TMethodArg_GetDefault_2_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMethod",897,G__TMethodArg_GetMethod_3_0,85,G__get_linked_tagnum(&G__G__MetaLN_TFunction),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TMethodArg_GetName_4_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TMethodArg_GetTitle_5_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTypeName",1091,G__TMethodArg_GetTypeName_6_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFullTypeName",1494,G__TMethodArg_GetFullTypeName_7_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G__TMethodArg_Compare_8_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TMethodArg_Hash_9_0,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Property",869,G__TMethodArg_Property_0_1,108,-1,G__defined_typename("Long_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDataMember",1266,G__TMethodArg_GetDataMember_1_1,85,G__get_linked_tagnum(&G__G__MetaLN_TDataMember),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptions",1036,G__TMethodArg_GetOptions_2_1,85,G__get_linked_tagnum(&G__G__MetaLN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMethodArg_DeclFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMethodArg_DeclFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMethodArg_ImplFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMethodArg_ImplFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMethodArg_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMethodArg_Class_8_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMethodArg_Dictionary_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMethodArg_IsA_0_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMethodArg_ShowMembers_1_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMethodArg_Streamer_2_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMethodArg",975,G__TMethodArg_TMethodArg_3_2,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TMethodArg),-1,0,1,1,1,0,"u 'TMethodArg' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMethodArg",1101,G__TMethodArg_wATMethodArg_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTToggle(void) {
   /* TToggle */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggle));
   G__memfunc_setup("TToggle",694,G__TToggle_TToggle_0_0,105,G__get_linked_tagnum(&G__G__MetaLN_TToggle),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetToggledObject",1609,G__TToggle_SetToggledObject_1_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - obj U 'TMethod' - 0 - anymethod",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetToggledVariable",1816,G__TToggle_SetToggledVariable_2_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 1 - var",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsInitialized",1330,G__TToggle_IsInitialized_3_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetState",801,G__TToggle_GetState_4_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetState",813,G__TToggle_SetState_5_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Toggle",610,G__TToggle_Toggle_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOnValue",998,G__TToggle_SetOnValue_7_0,121,-1,-1,0,1,1,1,0,"l - 'Long_t' 0 - lon",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOnValue",986,G__TToggle_GetOnValue_8_0,108,-1,G__defined_typename("Long_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOffValue",1092,G__TToggle_SetOffValue_9_0,121,-1,-1,0,1,1,1,0,"l - 'Long_t' 0 - lof",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOffValue",1080,G__TToggle_GetOffValue_0_1,108,-1,G__defined_typename("Long_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetValue",797,G__TToggle_GetValue_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetValue",809,G__TToggle_SetValue_2_1,121,-1,-1,0,1,1,1,0,"l - 'Long_t' 0 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TToggle_DeclFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TToggle_DeclFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TToggle_ImplFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TToggle_ImplFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TToggle_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TToggle_Class_8_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TToggle_Dictionary_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TToggle_IsA_0_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TToggle_ShowMembers_1_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TToggle_Streamer_2_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TToggle",694,G__TToggle_TToggle_3_2,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TToggle),-1,0,1,1,1,0,"u 'TToggle' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TToggle",820,G__TToggle_wATToggle_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTToggleGroup(void) {
   /* TToggleGroup */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup));
   G__memfunc_setup("TToggleGroup",1219,G__TToggleGroup_TToggleGroup_0_0,105,G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTogglesCount",1534,G__TToggleGroup_GetTogglesCount_2_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("At",181,G__TToggleGroup_At_3_0,85,G__get_linked_tagnum(&G__G__MetaLN_TToggle),-1,0,1,1,1,0,"i - 'Int_t' 0 - idx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Remove",622,G__TToggleGroup_Remove_4_0,121,-1,-1,0,1,1,1,0,"U 'TToggle' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Remove",622,G__TToggleGroup_Remove_5_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - pos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteAll",876,G__TToggleGroup_DeleteAll_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("First",520,G__TToggleGroup_First_7_0,85,G__get_linked_tagnum(&G__G__MetaLN_TToggle),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Last",404,G__TToggleGroup_Last_8_0,85,G__get_linked_tagnum(&G__G__MetaLN_TToggle),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IndexOf",685,G__TToggleGroup_IndexOf_9_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TToggle' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Add",265,G__TToggleGroup_Add_0_1,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"U 'TToggle' - 0 - t b - 'Bool_t' 0 1 select",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InsertAt",810,G__TToggleGroup_InsertAt_1_1,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"U 'TToggle' - 0 - t i - 'Int_t' 0 - pos "
"b - 'Bool_t' 0 1 select",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Select",608,G__TToggleGroup_Select_2_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - idx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Select",608,G__TToggleGroup_Select_3_1,121,-1,-1,0,1,1,1,0,"U 'TToggle' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TToggleGroup_DeclFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TToggleGroup_DeclFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TToggleGroup_ImplFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TToggleGroup_ImplFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TToggleGroup_Class_Version_8_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TToggleGroup_Class_9_1,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TToggleGroup_Dictionary_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TToggleGroup_IsA_1_2,85,G__get_linked_tagnum(&G__G__MetaLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TToggleGroup_ShowMembers_2_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TToggleGroup_Streamer_3_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TToggleGroup",1219,G__TToggleGroup_TToggleGroup_4_2,(int)('i'),G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup),-1,0,1,1,1,0,"u 'TToggleGroup' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TToggleGroup",1345,G__TToggleGroup_wATToggleGroup_5_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Meta() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Meta() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsClass=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsStruct=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsUnion=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsEnum=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsTypedef=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsFundamental=32",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsAbstract=64",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsVirtual=128",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsPureVirtual=256",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsPublic=512",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsProtected=1024",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsPrivate=2048",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsPointer=4096",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsArray=8192",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsStatic=16384",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsDefault=32768",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsReference=65536",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaLN_EProperty),-1,-1,1,"kIsConstant=1048576",0,(char*)NULL);
   G__memvar_setup((void*)(&gInterpreter),85,0,0,G__get_linked_tagnum(&G__G__MetaLN_TInterpreter),-1,-1,1,"gInterpreter=",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Meta() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__MetaLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TMethod = { "TMethod" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TDataType = { "TDataType" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TInterpreter = { "TInterpreter" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TGlobal = { "TGlobal" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TFunction = { "TFunction" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TCint = { "TCint" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_EProperty = { "EProperty" , 101 , -1 };
G__linked_taginfo G__G__MetaLN_TDictionary = { "TDictionary" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_G__BaseClassInfo = { "G__BaseClassInfo" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TBaseClass = { "TBaseClass" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TDataMember = { "TDataMember" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_G__ClassInfo = { "G__ClassInfo" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_G__DataMemberInfo = { "G__DataMemberInfo" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TMethodCall = { "TMethodCall" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_EDataType = { "EDataType" , 101 , -1 };
G__linked_taginfo G__G__MetaLN_G__TypedefInfo = { "G__TypedefInfo" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_G__MethodInfo = { "G__MethodInfo" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_EMenuItemKind = { "EMenuItemKind" , 101 , -1 };
G__linked_taginfo G__G__MetaLN_G__MethodArgInfo = { "G__MethodArgInfo" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TMethodArg = { "TMethodArg" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_G__CallFunc = { "G__CallFunc" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_EReturnType = { "EReturnType" , 101 , -1 };
G__linked_taginfo G__G__MetaLN_G__value = { "G__value" , 115 , -1 };
G__linked_taginfo G__G__MetaLN_G__linked_taginfo = { "G__linked_taginfo" , 115 , -1 };
G__linked_taginfo G__G__MetaLN_G__COMPLETIONLIST = { "G__COMPLETIONLIST" , 115 , -1 };
G__linked_taginfo G__G__MetaLN_G__dictposition = { "G__dictposition" , 115 , -1 };
G__linked_taginfo G__G__MetaLN_TToggle = { "TToggle" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TOrdCollection = { "TOrdCollection" , 99 , -1 };
G__linked_taginfo G__G__MetaLN_TToggleGroup = { "TToggleGroup" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__Meta() {
  G__G__MetaLN_TClass.tagnum = -1 ;
  G__G__MetaLN_TList.tagnum = -1 ;
  G__G__MetaLN_TMethod.tagnum = -1 ;
  G__G__MetaLN_TObject.tagnum = -1 ;
  G__G__MetaLN_TString.tagnum = -1 ;
  G__G__MetaLN_TNamed.tagnum = -1 ;
  G__G__MetaLN_TDataType.tagnum = -1 ;
  G__G__MetaLN_TInterpreter.tagnum = -1 ;
  G__G__MetaLN_TGlobal.tagnum = -1 ;
  G__G__MetaLN_TFunction.tagnum = -1 ;
  G__G__MetaLN_TCint.tagnum = -1 ;
  G__G__MetaLN_EProperty.tagnum = -1 ;
  G__G__MetaLN_TDictionary.tagnum = -1 ;
  G__G__MetaLN_G__BaseClassInfo.tagnum = -1 ;
  G__G__MetaLN_TBaseClass.tagnum = -1 ;
  G__G__MetaLN_TDataMember.tagnum = -1 ;
  G__G__MetaLN_G__ClassInfo.tagnum = -1 ;
  G__G__MetaLN_G__DataMemberInfo.tagnum = -1 ;
  G__G__MetaLN_TMethodCall.tagnum = -1 ;
  G__G__MetaLN_EDataType.tagnum = -1 ;
  G__G__MetaLN_G__TypedefInfo.tagnum = -1 ;
  G__G__MetaLN_G__MethodInfo.tagnum = -1 ;
  G__G__MetaLN_EMenuItemKind.tagnum = -1 ;
  G__G__MetaLN_G__MethodArgInfo.tagnum = -1 ;
  G__G__MetaLN_TMethodArg.tagnum = -1 ;
  G__G__MetaLN_G__CallFunc.tagnum = -1 ;
  G__G__MetaLN_EReturnType.tagnum = -1 ;
  G__G__MetaLN_G__value.tagnum = -1 ;
  G__G__MetaLN_G__linked_taginfo.tagnum = -1 ;
  G__G__MetaLN_G__COMPLETIONLIST.tagnum = -1 ;
  G__G__MetaLN_G__dictposition.tagnum = -1 ;
  G__G__MetaLN_TToggle.tagnum = -1 ;
  G__G__MetaLN_TOrdCollection.tagnum = -1 ;
  G__G__MetaLN_TToggleGroup.tagnum = -1 ;
}

extern "C" void G__cpp_setup_tagtableG__Meta() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TClass),sizeof(TClass),-1,0,"Dictionary containing class information",G__setup_memvarTClass,G__setup_memfuncTClass);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethod),sizeof(TMethod),-1,0,"Dictionary for a class member function (method)",G__setup_memvarTMethod,G__setup_memfuncTMethod);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataType),sizeof(TDataType),-1,0,"Basic data type descriptor",G__setup_memvarTDataType,G__setup_memfuncTDataType);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TInterpreter),sizeof(TInterpreter),-1,31,"ABC defining interface to generic interpreter",G__setup_memvarTInterpreter,G__setup_memfuncTInterpreter);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TGlobal),sizeof(TGlobal),-1,0,"Global variable class",G__setup_memvarTGlobal,G__setup_memfuncTGlobal);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TFunction),sizeof(TFunction),-1,0,"Dictionary for global function",G__setup_memvarTFunction,G__setup_memfuncTFunction);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TCint),sizeof(TCint),-1,0,"Interface to CINT C/C++ interpreter",G__setup_memvarTCint,G__setup_memfuncTCint);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TDictionary),sizeof(TDictionary),-1,5,"ABC defining interface to dictionary",G__setup_memvarTDictionary,G__setup_memfuncTDictionary);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TBaseClass),sizeof(TBaseClass),-1,0,"Description of a base class",G__setup_memvarTBaseClass,G__setup_memfuncTBaseClass);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TDataMember),sizeof(TDataMember),-1,0,"Dictionary for a class data member",G__setup_memvarTDataMember,G__setup_memfuncTDataMember);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodCall),sizeof(TMethodCall),-1,0,"Method calling interface",G__setup_memvarTMethodCall,G__setup_memfuncTMethodCall);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TMethodArg),sizeof(TMethodArg),-1,0,"Dictionary for a method argument",G__setup_memvarTMethodArg,G__setup_memfuncTMethodArg);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggle),sizeof(TToggle),-1,0,"Facility for toggling datamembers on/off",G__setup_memvarTToggle,G__setup_memfuncTToggle);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__MetaLN_TToggleGroup),sizeof(TToggleGroup),-1,0,"Group of contex-menu toggle objects",G__setup_memvarTToggleGroup,G__setup_memfuncTToggleGroup);
}
extern "C" void G__cpp_setupG__Meta() {
  G__check_setup_version(51111,"G__cpp_setupG__Meta()");
  G__set_cpp_environmentG__Meta();
  G__cpp_setup_tagtableG__Meta();

  G__cpp_setup_inheritanceG__Meta();

  G__cpp_setup_typetableG__Meta();

  G__cpp_setup_memvarG__Meta();

  G__cpp_setup_memfuncG__Meta();
  G__cpp_setup_globalG__Meta();
  G__cpp_setup_funcG__Meta();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Meta();
  return;
}
class G__cpp_setup_initG__Meta {
  public:
    G__cpp_setup_initG__Meta() { G__add_setup_func("G__Meta",&G__cpp_setupG__Meta); }
   ~G__cpp_setup_initG__Meta() { G__remove_setup_func("G__Meta"); }
};
G__cpp_setup_initG__Meta G__cpp_setup_initializerG__Meta;

//
// File generated by /home/rdm/root/bin/rootcint at Mon Mar  8 12:34:47 1999.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TClass *&obj)
{
   // Read a pointer to an object of class TClass.

   obj = (TClass *) buf.ReadObject(TClass::Class());
   return buf;
}

//______________________________________________________________________________
void TClass::Streamer(TBuffer &R__b)
{
   // Stream an object of class TClass.

   TDictionary::Streamer(R__b);
}

//______________________________________________________________________________
void TClass::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TClass.

   TClass *R__cl  = TClass::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fName.ShowMembers(R__insp, strcat(R__parent,"fName.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fRealData", &fRealData);
   R__insp.Inspect(R__cl, R__parent, "*fBase", &fBase);
   R__insp.Inspect(R__cl, R__parent, "*fData", &fData);
   R__insp.Inspect(R__cl, R__parent, "*fMethod", &fMethod);
   R__insp.Inspect(R__cl, R__parent, "*fDeclFileName", &fDeclFileName);
   R__insp.Inspect(R__cl, R__parent, "*fImplFileName", &fImplFileName);
   R__insp.Inspect(R__cl, R__parent, "fDeclFileLine", &fDeclFileLine);
   R__insp.Inspect(R__cl, R__parent, "fImplFileLine", &fImplFileLine);
   R__insp.Inspect(R__cl, R__parent, "fInstanceCount", &fInstanceCount);
   R__insp.Inspect(R__cl, R__parent, "fOnHeap", &fOnHeap);
   R__insp.Inspect(R__cl, R__parent, "fClassVersion", &fClassVersion);
   R__insp.Inspect(R__cl, R__parent, "*fClassInfo", &fClassInfo);
   TDictionary::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMethod *&obj)
{
   // Read a pointer to an object of class TMethod.

   obj = (TMethod *) buf.ReadObject(TMethod::Class());
   return buf;
}

//______________________________________________________________________________
void TMethod::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMethod.

   TFunction::Streamer(R__b);
}

//______________________________________________________________________________
void TMethod::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMethod.

   TClass *R__cl  = TMethod::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fClass", &fClass);
   R__insp.Inspect(R__cl, R__parent, "fMenuItem", &fMenuItem);
   TFunction::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDataType *&obj)
{
   // Read a pointer to an object of class TDataType.

   obj = (TDataType *) buf.ReadObject(TDataType::Class());
   return buf;
}

//______________________________________________________________________________
void TDataType::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDataType.

   TDictionary::Streamer(R__b);
}

//______________________________________________________________________________
void TDataType::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TDataType.

   TClass *R__cl  = TDataType::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fInfo", &fInfo);
   fName.ShowMembers(R__insp, strcat(R__parent,"fName.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fSize", &fSize);
   R__insp.Inspect(R__cl, R__parent, "fType", &fType);
   TDictionary::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TInterpreter *&obj)
{
   // Read a pointer to an object of class TInterpreter.

   obj = (TInterpreter *) buf.ReadObject(TInterpreter::Class());
   return buf;
}

//______________________________________________________________________________
void TInterpreter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TInterpreter.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TInterpreter::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TInterpreter.

   TClass *R__cl  = TInterpreter::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGlobal *&obj)
{
   // Read a pointer to an object of class TGlobal.

   obj = (TGlobal *) buf.ReadObject(TGlobal::Class());
   return buf;
}

//______________________________________________________________________________
void TGlobal::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGlobal.

   TDictionary::Streamer(R__b);
}

//______________________________________________________________________________
void TGlobal::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGlobal.

   TClass *R__cl  = TGlobal::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fInfo", &fInfo);
   TDictionary::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TFunction *&obj)
{
   // Read a pointer to an object of class TFunction.

   obj = (TFunction *) buf.ReadObject(TFunction::Class());
   return buf;
}

//______________________________________________________________________________
void TFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFunction.

   TDictionary::Streamer(R__b);
}

//______________________________________________________________________________
void TFunction::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TFunction.

   TClass *R__cl  = TFunction::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fInfo", &fInfo);
   fSignature.ShowMembers(R__insp, strcat(R__parent,"fSignature.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fMethodArgs", &fMethodArgs);
   TDictionary::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TCint *&obj)
{
   // Read a pointer to an object of class TCint.

   obj = (TCint *) buf.ReadObject(TCint::Class());
   return buf;
}

//______________________________________________________________________________
void TCint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCint.

   TInterpreter::Streamer(R__b);
}

//______________________________________________________________________________
void TCint::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TCint.

   TClass *R__cl  = TCint::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fMore", &fMore);
   R__insp.Inspect(R__cl, R__parent, "fPrompt[64]", fPrompt);
   TInterpreter::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDictionary *&obj)
{
   // Read a pointer to an object of class TDictionary.

   obj = (TDictionary *) buf.ReadObject(TDictionary::Class());
   return buf;
}

//______________________________________________________________________________
void TDictionary::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDictionary.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TDictionary::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TDictionary.

   TClass *R__cl  = TDictionary::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TBaseClass *&obj)
{
   // Read a pointer to an object of class TBaseClass.

   obj = (TBaseClass *) buf.ReadObject(TBaseClass::Class());
   return buf;
}

//______________________________________________________________________________
void TBaseClass::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBaseClass.

   TDictionary::Streamer(R__b);
}

//______________________________________________________________________________
void TBaseClass::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TBaseClass.

   TClass *R__cl  = TBaseClass::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fInfo", &fInfo);
   R__insp.Inspect(R__cl, R__parent, "*fClassPtr", &fClassPtr);
   R__insp.Inspect(R__cl, R__parent, "*fClass", &fClass);
   TDictionary::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDataMember *&obj)
{
   // Read a pointer to an object of class TDataMember.

   obj = (TDataMember *) buf.ReadObject(TDataMember::Class());
   return buf;
}

//______________________________________________________________________________
void TDataMember::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDataMember.

   TDictionary::Streamer(R__b);
}

//______________________________________________________________________________
void TDataMember::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TDataMember.

   TClass *R__cl  = TDataMember::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fInfo", &fInfo);
   R__insp.Inspect(R__cl, R__parent, "*fClass", &fClass);
   R__insp.Inspect(R__cl, R__parent, "*fDataType", &fDataType);
   R__insp.Inspect(R__cl, R__parent, "*fValueGetter", &fValueGetter);
   R__insp.Inspect(R__cl, R__parent, "*fValueSetter", &fValueSetter);
   R__insp.Inspect(R__cl, R__parent, "*fOptions", &fOptions);
   TDictionary::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMethodCall *&obj)
{
   // Read a pointer to an object of class TMethodCall.

   obj = (TMethodCall *) buf.ReadObject(TMethodCall::Class());
   return buf;
}

//______________________________________________________________________________
void TMethodCall::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMethodCall.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TMethodCall::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMethodCall.

   TClass *R__cl  = TMethodCall::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fFunc", &fFunc);
   R__insp.Inspect(R__cl, R__parent, "fOffset", &fOffset);
   R__insp.Inspect(R__cl, R__parent, "*fClass", &fClass);
   R__insp.Inspect(R__cl, R__parent, "*fMetPtr", &fMetPtr);
   fMethod.ShowMembers(R__insp, strcat(R__parent,"fMethod.")); R__parent[R__ncp] = 0;
   fParams.ShowMembers(R__insp, strcat(R__parent,"fParams.")); R__parent[R__ncp] = 0;
   fProto.ShowMembers(R__insp, strcat(R__parent,"fProto.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fDtorOnly", &fDtorOnly);
   R__insp.Inspect(R__cl, R__parent, "fRetType", &fRetType);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMethodArg *&obj)
{
   // Read a pointer to an object of class TMethodArg.

   obj = (TMethodArg *) buf.ReadObject(TMethodArg::Class());
   return buf;
}

//______________________________________________________________________________
void TMethodArg::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMethodArg.

   TDictionary::Streamer(R__b);
}

//______________________________________________________________________________
void TMethodArg::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMethodArg.

   TClass *R__cl  = TMethodArg::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fInfo", &fInfo);
   R__insp.Inspect(R__cl, R__parent, "*fMethod", &fMethod);
   R__insp.Inspect(R__cl, R__parent, "*fDataMember", &fDataMember);
   TDictionary::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TToggle *&obj)
{
   // Read a pointer to an object of class TToggle.

   obj = (TToggle *) buf.ReadObject(TToggle::Class());
   return buf;
}

//______________________________________________________________________________
void TToggle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TToggle.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TToggle::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TToggle.

   TClass *R__cl  = TToggle::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fState", &fState);
   R__insp.Inspect(R__cl, R__parent, "fOnValue", &fOnValue);
   R__insp.Inspect(R__cl, R__parent, "fOffValue", &fOffValue);
   R__insp.Inspect(R__cl, R__parent, "fValue", &fValue);
   R__insp.Inspect(R__cl, R__parent, "fInitialized", &fInitialized);
   R__insp.Inspect(R__cl, R__parent, "*fObject", &fObject);
   R__insp.Inspect(R__cl, R__parent, "*fGetter", &fGetter);
   R__insp.Inspect(R__cl, R__parent, "*fSetter", &fSetter);
   R__insp.Inspect(R__cl, R__parent, "*fTglVariable", &fTglVariable);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TToggleGroup *&obj)
{
   // Read a pointer to an object of class TToggleGroup.

   obj = (TToggleGroup *) buf.ReadObject(TToggleGroup::Class());
   return buf;
}

//______________________________________________________________________________
void TToggleGroup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TToggleGroup.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TToggleGroup::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TToggleGroup.

   TClass *R__cl  = TToggleGroup::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fToggles", &fToggles);
   R__insp.Inspect(R__cl, R__parent, "*fSelected", &fSelected);
   TNamed::ShowMembers(R__insp, R__parent);
}

