//*CMZ :  2.00/13 29/10/98  08.34.33  by  Rene Brun
//*-- Author :    Rene Brun   29/10/98
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
extern void G__cpp_setup_tagtableG__Rint();
extern void G__cpp_setup_inheritanceG__Rint();
extern void G__cpp_setup_typetableG__Rint();
extern void G__cpp_setup_memvarG__Rint();
extern void G__cpp_setup_globalG__Rint();
extern void G__cpp_setup_memfuncG__Rint();
extern void G__cpp_setup_funcG__Rint();
extern void G__set_cpp_environmentG__Rint();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TRint.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__RintLN_TClass;
extern G__linked_taginfo G__G__RintLN_TObject;
extern G__linked_taginfo G__G__RintLN_TApplication;
extern G__linked_taginfo G__G__RintLN_TRint;
/********************************************************
* G__Rint.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__Rint() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TRint.h");
}
int G__cpp_dllrevG__Rint() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TRint */
static int G__TRint_TRint_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TRint *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TRint(
(char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]),(void*)G__int(libp->para[3])
,(int)G__int(libp->para[4]));
      break;
   case 4:
      p = new TRint(
(char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]),(void*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TRint(
(char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__RintLN_TRint);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_GetPrompt_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRint*)(G__getstructoffset()))->GetPrompt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_SetPrompt_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRint*)(G__getstructoffset()))->SetPrompt((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_HandleTermInput_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->HandleTermInput();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_PrintLogo_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->PrintLogo();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_Run_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->Run((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->Run();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_Terminate_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->Terminate((int)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_Interrupt_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->Interrupt();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_DeclFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRint*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_DeclFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRint*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_ImplFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRint*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_ImplFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRint*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_Class_Version_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TRint*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_Class_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRint*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_Dictionary_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_IsA_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRint*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_ShowMembers_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRint_Streamer_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRint*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TRint_TRint_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TRint *p;
   if(1!=libp->paran) ;
   p=new TRint(*(TRint*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__RintLN_TRint);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TRint_wATRint_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TRint *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TRint *)((G__getstructoffset())+sizeof(TRint)*i);
   else  delete (TRint *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TRint */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Rint {
 public:
  G__Sizep2memfuncG__Rint() {p=&G__Sizep2memfuncG__Rint::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Rint::*p)();
};

size_t G__get_sizep2memfuncG__Rint()
{
  G__Sizep2memfuncG__Rint a;
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
extern "C" void G__cpp_setup_inheritanceG__Rint() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__RintLN_TRint))) {
     TRint *G__Lderived;
     G__Lderived=(TRint*)0x1000;
     {
       TApplication *G__Lpbase=(TApplication*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__RintLN_TRint),G__get_linked_tagnum(&G__G__RintLN_TApplication),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__RintLN_TRint),G__get_linked_tagnum(&G__G__RintLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Rint() {

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
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TRint */
static void G__setup_memvarTRint(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__RintLN_TRint));
   { TRint *p; p=(TRint*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNcmd=",0,"Command history number");
   G__memvar_setup((void*)NULL,99,0,0,-1,-1,-1,4,"fPrompt[64]=",0,"Interpreter prompt");
   G__memvar_setup((void*)NULL,67,0,1,-1,-1,-1,4,"fDefaultPrompt=",0,"Default prompt: \"root [%d] \"");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fInterrupt=",0,"If true macro execution will be stopped");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__RintLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Rint() {
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
static void G__setup_memfuncTRint(void) {
   /* TRint */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__RintLN_TRint));
   G__memfunc_setup("TRint",497,G__TRint_TRint_0_0,105,G__get_linked_tagnum(&G__G__RintLN_TRint),-1,0,5,1,1,0,
"C - - 0 - appClassName I - - 0 - argc "
"C - - 2 - argv Y - - 0 NULL options "
"i - - 0 0 numOptions",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPrompt",930,G__TRint_GetPrompt_2_0,67,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPrompt",942,G__TRint_SetPrompt_3_0,67,-1,-1,0,1,1,1,1,"C - - 0 - newPrompt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTermInput",1524,G__TRint_HandleTermInput_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PrintLogo",926,G__TRint_PrintLogo_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Run",309,G__TRint_Run_6_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE retrn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Terminate",937,G__TRint_Terminate_7_0,121,-1,-1,0,1,1,1,0,"i - - 0 - status",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Interrupt",973,G__TRint_Interrupt_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TRint_DeclFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TRint_DeclFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TRint_ImplFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TRint_ImplFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TRint_Class_Version_3_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TRint_Class_4_1,85,G__get_linked_tagnum(&G__G__RintLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TRint_Dictionary_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TRint_IsA_6_1,85,G__get_linked_tagnum(&G__G__RintLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TRint_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TRint_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TRint",497,G__TRint_TRint_9_1,(int)('i'),G__get_linked_tagnum(&G__G__RintLN_TRint),-1,0,1,1,1,0,"u 'TRint' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TRint",623,G__TRint_wATRint_0_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Rint() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Rint() {

   /* Setting up global variables */
   G__resetplocal();


   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Rint() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__RintLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__RintLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__RintLN_TApplication = { "TApplication" , 99 , -1 };
G__linked_taginfo G__G__RintLN_TRint = { "TRint" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__Rint() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__RintLN_TRint),sizeof(TRint),-1,0,"ROOT Interactive Application Interface",G__setup_memvarTRint,G__setup_memfuncTRint);
}
extern "C" void G__cpp_setupG__Rint() {
  G__check_setup_version(51111,"G__cpp_setupG__Rint()");
  G__set_cpp_environmentG__Rint();
  G__cpp_setup_tagtableG__Rint();

  G__cpp_setup_inheritanceG__Rint();

  G__cpp_setup_typetableG__Rint();

  G__cpp_setup_memvarG__Rint();

  G__cpp_setup_memfuncG__Rint();
  G__cpp_setup_globalG__Rint();
  G__cpp_setup_funcG__Rint();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Rint();
  return;
}
class G__cpp_setup_initG__Rint {
  public:
    G__cpp_setup_initG__Rint() { G__add_setup_func("G__Rint",&G__cpp_setupG__Rint); }
   ~G__cpp_setup_initG__Rint() { G__remove_setup_func("G__Rint"); }
};
G__cpp_setup_initG__Rint G__cpp_setup_initializerG__Rint;

//
// File generated by /user/brun/root/bin/rootcint at Thu Oct 29 08:34:32 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TRint *&obj)
{
   // Read a pointer to an object of class TRint.

   obj = (TRint *) buf.ReadObject(TRint::Class());
   return buf;
}

//______________________________________________________________________________
void TRint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRint.

   TApplication::Streamer(R__b);
}

//______________________________________________________________________________
void TRint::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TRint.

   TClass *R__cl  = TRint::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNcmd", &fNcmd);
   R__insp.Inspect(R__cl, R__parent, "fPrompt[64]", fPrompt);
   R__insp.Inspect(R__cl, R__parent, "*fDefaultPrompt", &fDefaultPrompt);
   R__insp.Inspect(R__cl, R__parent, "fInterrupt", &fInterrupt);
   TApplication::ShowMembers(R__insp, R__parent);
}

