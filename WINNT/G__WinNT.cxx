//*CMZ :  2.20/00 27/11/98  15.19.22  by  Rene Brun
//*-- Author :    Rene Brun   27/11/98
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
extern void G__cpp_setup_tagtableG__WinNT();
extern void G__cpp_setup_inheritanceG__WinNT();
extern void G__cpp_setup_typetableG__WinNT();
extern void G__cpp_setup_memvarG__WinNT();
extern void G__cpp_setup_globalG__WinNT();
extern void G__cpp_setup_memfuncG__WinNT();
extern void G__cpp_setup_funcG__WinNT();
extern void G__set_cpp_environmentG__WinNT();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TWinNTSystem.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__WinNTLN_TClass;
extern G__linked_taginfo G__G__WinNTLN_TObject;
extern G__linked_taginfo G__G__WinNTLN_TNamed;
extern G__linked_taginfo G__G__WinNTLN_void;
extern G__linked_taginfo G__G__WinNTLN_TInetAddress;
extern G__linked_taginfo G__G__WinNTLN_TSystem;
extern G__linked_taginfo G__G__WinNTLN_TWinNTSystem;
extern G__linked_taginfo G__G__WinNTLN_TFileHandler;
extern G__linked_taginfo G__G__WinNTLN_TSignalHandler;
extern G__linked_taginfo G__G__WinNTLN_TTime;
extern G__linked_taginfo G__G__WinNTLN_TTimer;
extern G__linked_taginfo G__G__WinNTLN_TFdSet;
extern G__linked_taginfo G__G__WinNTLN_TWin32Timer;
/********************************************************
* G__WinNT.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__WinNT() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TWinNTSystem.h");
}
int G__cpp_dllrevG__WinNT() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TWinNTSystem */
static int G__TWinNTSystem_TWinNTSystem_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TWinNTSystem *p=NULL;
   if(G__getaryconstruct()) p=new TWinNTSystem[G__getaryconstruct()];
   else                    p=new TWinNTSystem;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Init_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->Init());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_BaseName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->BaseName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_SetProgname_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->SetProgname((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetError_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->GetError());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Hostname_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->Hostname());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_CreateInspectView_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->CreateInspectView((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_HIMAGELISTGetSmallIconList_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->HIMAGELISTGetSmallIconList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_HICONGetSmallIcon_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->HICONGetSmallIcon((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_HICONGetNormalIcon_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->HICONGetNormalIcon((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_HIMAGELISTGetNormalIconList_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->HIMAGELISTGetNormalIconList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetShellName_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->GetShellName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_SetShellName_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->SetShellName((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->SetShellName();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ProcessEvents_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->ProcessEvents());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DispatchOneEvent_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->DispatchOneEvent((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->DispatchOneEvent();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_CheckChilds_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->CheckChilds();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_CheckSignals_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->CheckSignals((Bool_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DispatchSignals_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->DispatchSignals((ESignals)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_AddSignalHandler_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->AddSignalHandler((TSignalHandler*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_RemoveSignalHandler_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWinNTSystem*)(G__getstructoffset()))->RemoveSignalHandler((TSignalHandler*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_AddFileHandler_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->AddFileHandler((TFileHandler*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_RemoveFileHandler_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWinNTSystem*)(G__getstructoffset()))->RemoveFileHandler((TFileHandler*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_BOOLHandleConsoleEvent_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->BOOLHandleConsoleEvent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_IgnoreInterrupt_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->IgnoreInterrupt((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->IgnoreInterrupt();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Exec_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->Exec((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_OpenPipe_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,69,(long)((TWinNTSystem*)(G__getstructoffset()))->OpenPipe((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ClosePipe_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->ClosePipe((FILE*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Exit_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Exit((int)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Exit((int)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Abort_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Abort((int)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Abort();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetPid_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->GetPid());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_HANDLEGetProcess_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->HANDLEGetProcess());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Getenv_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->Getenv((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Setenv_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Setenv((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_MakeDirectory_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->MakeDirectory((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ChangeDirectory_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->ChangeDirectory((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetDirEntry_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->GetDirEntry((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DirName_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->DirName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_FreeDirectory_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->FreeDirectory((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_OpenDirectory_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TWinNTSystem*)(G__getstructoffset()))->OpenDirectory((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_WorkingDirectory_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->WorkingDirectory((char)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_WorkingDirectory_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->WorkingDirectory());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_HomeDirectory_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->HomeDirectory());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ConcatFileName_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->ConcatFileName((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DriveName_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,99,(long)((TWinNTSystem*)(G__getstructoffset()))->DriveName((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,99,(long)((TWinNTSystem*)(G__getstructoffset()))->DriveName());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ExpandPathName_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->ExpandPathName(*(TString*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ExpandPathName_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->ExpandPathName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_AccessPathName_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->AccessPathName((const char*)G__int(libp->para[0]),(EAccessMode)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->AccessPathName((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_IsAbsoluteFileName_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->IsAbsoluteFileName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Rename_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Rename((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Link_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->Link((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Unlink_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->Unlink((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_SetNonBlock_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->SetNonBlock((int)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetPathInfo_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->GetPathInfo((const char*)G__int(libp->para[0]),(Long_t*)G__int(libp->para[1])
,(Long_t*)G__int(libp->para[2]),(Long_t*)G__int(libp->para[3])
,(Long_t*)G__int(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_UnixPathName_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->UnixPathName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DynamicPathName_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->DynamicPathName((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->DynamicPathName((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DynFindSymbol_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TWinNTSystem*)(G__getstructoffset()))->DynFindSymbol((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Unload_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Unload((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ListSymbols_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->ListSymbols((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->ListSymbols((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ListLibraries_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->ListLibraries((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->ListLibraries();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Now_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=((TWinNTSystem*)(G__getstructoffset()))->Now();
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_AddTimer_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->AddTimer((TTimer*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_RemoveTimer_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWinNTSystem*)(G__getstructoffset()))->RemoveTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DispatchSynchTimers_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWinNTSystem*)(G__getstructoffset()))->DispatchSynchTimers());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Sleep_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Sleep((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetRealTime_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TWinNTSystem*)(G__getstructoffset()))->GetRealTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetCPUTime_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TWinNTSystem*)(G__getstructoffset()))->GetCPUTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ConnectService_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->ConnectService((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetHostByName_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TWinNTSystem*)(G__getstructoffset()))->GetHostByName((const char*)G__int(libp->para[0]));
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetPeerName_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TWinNTSystem*)(G__getstructoffset()))->GetPeerName((int)G__int(libp->para[0]));
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetSockName_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TWinNTSystem*)(G__getstructoffset()))->GetSockName((int)G__int(libp->para[0]));
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetServiceByName_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->GetServiceByName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetServiceByPort_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->GetServiceByPort((int)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_OpenConnection_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->OpenConnection((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_AnnounceTcpService_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->AnnounceTcpService((int)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])
,(int)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_AnnounceUnixService_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->AnnounceUnixService((int)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_AcceptConnection_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->AcceptConnection((int)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_CloseConnection_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->CloseConnection((int)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_RecvRaw_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->RecvRaw((int)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(int)G__int(libp->para[2]),(int)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_SendRaw_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->SendRaw((int)G__int(libp->para[0]),(const void*)G__int(libp->para[1])
,(int)G__int(libp->para[2]),(int)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_RecvBuf_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->RecvBuf((int)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(int)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_SendBuf_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->SendBuf((int)G__int(libp->para[0]),(const void*)G__int(libp->para[1])
,(int)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_SetSockOpt_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->SetSockOpt((int)G__int(libp->para[0]),(int)G__int(libp->para[1])
,(int)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetSockOpt_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->GetSockOpt((int)G__int(libp->para[0]),(int)G__int(libp->para[1])
,(int*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Which_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->Which((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(EAccessMode)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->Which((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_GetDynamicPath_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->GetDynamicPath());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DeclFileName_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_DeclFileLine_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ImplFileName_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWinNTSystem*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ImplFileLine_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWinNTSystem*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Class_Version_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TWinNTSystem*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Class_3_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWinNTSystem*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Dictionary_4_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_IsA_5_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWinNTSystem*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_ShowMembers_6_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWinNTSystem_Streamer_7_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWinNTSystem*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TWinNTSystem_TWinNTSystem_8_11(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TWinNTSystem *p;
   if(1!=libp->paran) ;
   p=new TWinNTSystem(*(TWinNTSystem*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TWinNTSystem_wATWinNTSystem_9_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TWinNTSystem *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TWinNTSystem *)((G__getstructoffset())+sizeof(TWinNTSystem)*i);
   else  delete (TWinNTSystem *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TFdSet */
static int G__TFdSet_TFdSet_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFdSet *p=NULL;
   if(G__getaryconstruct()) p=new TFdSet[G__getaryconstruct()];
   else                    p=new TFdSet;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__WinNTLN_TFdSet);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFdSet_Zero_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFdSet*)(G__getstructoffset()))->Zero();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFdSet_Set_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFdSet*)(G__getstructoffset()))->Set((int)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFdSet_Clr_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFdSet*)(G__getstructoffset()))->Clr((int)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFdSet_IsSet_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFdSet*)(G__getstructoffset()))->IsSet((int)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFdSet_GetBits_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,73,(long)((TFdSet*)(G__getstructoffset()))->GetBits());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TFdSet_TFdSet_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TFdSet *p;
   if(1!=libp->paran) ;
   p=new TFdSet(*(TFdSet*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__WinNTLN_TFdSet);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFdSet_wATFdSet_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFdSet *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFdSet *)((G__getstructoffset())+sizeof(TFdSet)*i);
   else  delete (TFdSet *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TWinNTSystem */

/* TFdSet */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__WinNT {
 public:
  G__Sizep2memfuncG__WinNT() {p=&G__Sizep2memfuncG__WinNT::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__WinNT::*p)();
};

size_t G__get_sizep2memfuncG__WinNT()
{
  G__Sizep2memfuncG__WinNT a;
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
extern "C" void G__cpp_setup_inheritanceG__WinNT() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem))) {
     TWinNTSystem *G__Lderived;
     G__Lderived=(TWinNTSystem*)0x1000;
     {
       TSystem *G__Lpbase=(TSystem*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),G__get_linked_tagnum(&G__G__WinNTLN_TSystem),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),G__get_linked_tagnum(&G__G__WinNTLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),G__get_linked_tagnum(&G__G__WinNTLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__WinNT() {

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
   G__search_typename2("void",117,G__get_linked_tagnum(&G__G__WinNTLN_void),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("G__InterfaceMethod",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Func_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("SigHandler_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TWinNTSystem */
static void G__setup_memvarTWinNTSystem(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem));
   { TWinNTSystem *p; p=(TWinNTSystem*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fDirNameBuffer=",0,"The string buffer to hold path name");
   G__memvar_setup((void*)NULL,67,0,1,-1,-1,-1,2,"fShellName=",0,"the name of the \"shell\" file to pool the icons");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__WinNTLN_TWin32Timer),-1,-1,2,"fWin32Timer=",0,"Windows -asynch timer");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__WinNTLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TFdSet */
static void G__setup_memvarTFdSet(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__WinNTLN_TFdSet));
   { TFdSet *p; p=(TFdSet*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-1,4,"fds_bits[8]=",0,"upto 255 file descriptors");
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__WinNT() {
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
static void G__setup_memfuncTWinNTSystem(void) {
   /* TWinNTSystem */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem));
   G__memfunc_setup("CreateIcons",1104,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Create a list of the icons for Root appl",(void*)NULL,0);
   G__memfunc_setup("WinNTHomedirectory",1838,(G__InterfaceMethod)NULL,67,-1,-1,0,1,1,2,1,"C - - 0 0 user",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTWaitchild",1385,(G__InterfaceMethod)NULL,105,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTSetitimer",1414,(G__InterfaceMethod)NULL,105,-1,-1,0,1,1,2,0,"U 'TTimer' - 0 - ti",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTSelect",1072,(G__InterfaceMethod)NULL,105,-1,-1,0,4,1,2,0,
"h - 'UInt_t' 0 - nfds U 'TFdSet' - 0 - readready "
"U 'TFdSet' - 0 - writeready l - 'Long_t' 0 - timeout",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTSignal",1070,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"i 'ESignals' - 0 - sig Y - 'SigHandler_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTSigname",1172,(G__InterfaceMethod)NULL,67,-1,-1,0,1,1,2,0,"i 'ESignals' - 0 - sig",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTFilestat",1292,(G__InterfaceMethod)NULL,105,-1,-1,0,5,1,2,0,
"C - - 0 - path L - 'Long_t' 0 - id "
"L - 'Long_t' 0 - size L - 'Long_t' 0 - flags "
"L - 'Long_t' 0 - modtime",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTTcpConnect",1473,(G__InterfaceMethod)NULL,105,-1,-1,0,2,1,2,0,
"C - - 0 - hostname i - - 0 - port",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTWinNTConnect",1642,(G__InterfaceMethod)NULL,105,-1,-1,0,2,1,2,0,
"C - - 0 - hostname i - - 0 - port",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTTcpService",1480,(G__InterfaceMethod)NULL,105,-1,-1,0,3,1,2,0,
"i - - 0 - port b - 'Bool_t' 0 - reuse "
"i - - 0 - backlog",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTWinNTService",1649,(G__InterfaceMethod)NULL,105,-1,-1,0,2,1,2,0,
"i - - 0 - port i - - 0 - backlog",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTSend",858,(G__InterfaceMethod)NULL,105,-1,-1,0,4,1,2,0,
"i - - 0 - socket Y - - 0 - buffer "
"i - - 0 - length i - - 0 - flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTRecv",864,(G__InterfaceMethod)NULL,105,-1,-1,0,4,1,2,0,
"i - - 0 - socket Y - - 0 - buffer "
"i - - 0 - length i - - 0 - flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTIoctl",971,(G__InterfaceMethod)NULL,105,-1,-1,0,3,1,2,0,
"i - - 0 - fd i - - 0 - code "
"Y - - 0 - vp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTNonblock",1286,(G__InterfaceMethod)NULL,105,-1,-1,0,1,1,2,0,"i - - 0 - fd",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTNow",772,(G__InterfaceMethod)NULL,108,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTDynLoad",1147,(G__InterfaceMethod)NULL,105,-1,-1,0,1,1,2,0,"C - - 0 - lib",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTDynFindSymbol",1778,(G__InterfaceMethod)NULL,89,-1,G__defined_typename("Func_t"),0,2,1,2,0,
"C - - 0 - lib C - - 0 - entry",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTDynUnload",1374,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - - 0 - lib",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTDynListSymbols",1920,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"C - - 0 - lib C - - 0 \"\" re",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WinNTDynListLibs",1569,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - - 0 \"\" lib",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TWinNTSystem",1193,G__TWinNTSystem_TWinNTSystem_2_2,105,G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,G__TWinNTSystem_Init_4_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BaseName",764,G__TWinNTSystem_BaseName_5_2,67,-1,-1,0,1,1,1,1,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetProgname",1125,G__TWinNTSystem_SetProgname_6_2,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetError",810,G__TWinNTSystem_GetError_7_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hostname",831,G__TWinNTSystem_Hostname_8_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateInspectView",1733,G__TWinNTSystem_CreateInspectView_9_2,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj","Create an inspect view of the obj to perform TObject::Inspect",(void*)NULL,1);
   G__memfunc_setup("HIMAGELISTGetSmallIconList",2341,G__TWinNTSystem_HIMAGELISTGetSmallIconList_0_3,105,G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HICONGetSmallIcon",1555,G__TWinNTSystem_HICONGetSmallIcon_1_3,105,G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),-1,0,1,1,1,0,"i - 'Int_t' 0 - IconIdx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HICONGetNormalIcon",1667,G__TWinNTSystem_HICONGetNormalIcon_2_3,105,G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),-1,0,1,1,1,0,"i - 'Int_t' 0 - IconIdx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HIMAGELISTGetNormalIconList",2453,G__TWinNTSystem_HIMAGELISTGetNormalIconList_3_3,105,G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShellName",1177,G__TWinNTSystem_GetShellName_4_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetShellName",1189,G__TWinNTSystem_SetShellName_5_3,121,-1,-1,0,1,1,1,0,"C - - 0 0 name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ProcessEvents",1364,G__TWinNTSystem_ProcessEvents_6_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DispatchOneEvent",1620,G__TWinNTSystem_DispatchOneEvent_7_3,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE pendingOnly",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CheckChilds",1077,G__TWinNTSystem_CheckChilds_8_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CheckSignals",1199,G__TWinNTSystem_CheckSignals_9_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"b - 'Bool_t' 0 - sync",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DispatchSignals",1537,G__TWinNTSystem_DispatchSignals_0_4,121,-1,-1,0,1,1,1,0,"i 'ESignals' - 0 - sig",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddSignalHandler",1573,G__TWinNTSystem_AddSignalHandler_1_4,121,-1,-1,0,1,1,1,0,"U 'TSignalHandler' - 0 - sh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveSignalHandler",1930,G__TWinNTSystem_RemoveSignalHandler_2_4,85,G__get_linked_tagnum(&G__G__WinNTLN_TSignalHandler),-1,0,1,1,1,0,"U 'TSignalHandler' - 0 - sh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddFileHandler",1351,G__TWinNTSystem_AddFileHandler_3_4,121,-1,-1,0,1,1,1,0,"U 'TFileHandler' - 0 - fh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveFileHandler",1708,G__TWinNTSystem_RemoveFileHandler_4_4,85,G__get_linked_tagnum(&G__G__WinNTLN_TFileHandler),-1,0,1,1,1,0,"U 'TFileHandler' - 0 - fh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BOOLHandleConsoleEvent",2125,G__TWinNTSystem_BOOLHandleConsoleEvent_5_4,105,G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IgnoreInterrupt",1585,G__TWinNTSystem_IgnoreInterrupt_6_4,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE ignore",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Exec",389,G__TWinNTSystem_Exec_7_4,105,-1,-1,0,1,1,1,0,"C - - 0 - shellcmd",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenPipe",800,G__TWinNTSystem_OpenPipe_8_4,69,-1,-1,0,2,1,1,0,
"C - - 0 - shellcmd C - - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClosePipe",900,G__TWinNTSystem_ClosePipe_9_4,105,-1,-1,0,1,1,1,0,"E - - 0 - pipe",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Exit",410,G__TWinNTSystem_Exit_0_5,121,-1,-1,0,2,1,1,0,
"i - - 0 - code b - 'Bool_t' 0 kTRUE mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Abort",504,G__TWinNTSystem_Abort_1_5,121,-1,-1,0,1,1,1,0,"i - - 0 0 code",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPid",573,G__TWinNTSystem_GetPid_2_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HANDLEGetProcess",1451,G__TWinNTSystem_HANDLEGetProcess_3_5,105,G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Getenv",617,G__TWinNTSystem_Getenv_4_5,67,-1,-1,0,1,1,1,1,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Setenv",629,G__TWinNTSystem_Setenv_5_5,121,-1,-1,0,2,1,1,0,
"C - - 0 - name C - - 0 - value",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MakeDirectory",1331,G__TWinNTSystem_MakeDirectory_6_5,105,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeDirectory",1531,G__TWinNTSystem_ChangeDirectory_7_5,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - path",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDirEntry",1105,G__TWinNTSystem_GetDirEntry_8_5,67,-1,-1,0,1,1,1,1,"Y - - 0 - dirp",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DirName",672,G__TWinNTSystem_DirName_9_5,67,-1,-1,0,1,1,1,1,"C - - 0 - pathname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FreeDirectory",1335,G__TWinNTSystem_FreeDirectory_0_6,121,-1,-1,0,1,1,1,0,"Y - - 0 - dirp",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenDirectory",1351,G__TWinNTSystem_OpenDirectory_1_6,89,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WorkingDirectory",1686,G__TWinNTSystem_WorkingDirectory_2_6,67,-1,-1,0,1,1,1,1,"c - - 0 - driveletter","The working directory for the selecte drive",(void*)NULL,0);
   G__memfunc_setup("WorkingDirectory",1686,G__TWinNTSystem_WorkingDirectory_3_6,67,-1,-1,0,0,1,1,1,"","The working directory for the default drive",(void*)NULL,1);
   G__memfunc_setup("HomeDirectory",1342,G__TWinNTSystem_HomeDirectory_4_6,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ConcatFileName",1369,G__TWinNTSystem_ConcatFileName_5_6,67,-1,-1,0,2,1,1,0,
"C - - 0 - dir C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DriveName",891,G__TWinNTSystem_DriveName_6_6,99,-1,-1,0,1,1,1,1,"C - - 0 \"/\" pathname",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ExpandPathName",1390,G__TWinNTSystem_ExpandPathName_7_6,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"u 'TString' - 1 - patbuf",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExpandPathName",1390,G__TWinNTSystem_ExpandPathName_8_6,67,-1,-1,0,1,1,1,0,"C - - 0 - path",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AccessPathName",1376,G__TWinNTSystem_AccessPathName_9_6,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - path i 'EAccessMode' - 0 kFileExists mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsAbsoluteFileName",1788,G__TWinNTSystem_IsAbsoluteFileName_0_7,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - dir",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Rename",600,G__TWinNTSystem_Rename_1_7,121,-1,-1,0,2,1,1,0,
"C - - 0 - from C - - 0 - to",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Link",398,G__TWinNTSystem_Link_2_7,105,-1,-1,0,2,1,1,0,
"C - - 0 - from C - - 0 - to",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Unlink",625,G__TWinNTSystem_Unlink_3_7,105,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNonBlock",1090,G__TWinNTSystem_SetNonBlock_4_7,105,-1,-1,0,1,1,1,0,"i - - 0 - fd",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPathInfo",1081,G__TWinNTSystem_GetPathInfo_5_7,105,-1,-1,0,5,1,1,0,
"C - - 0 - path L - 'Long_t' 0 - id "
"L - 'Long_t' 0 - size L - 'Long_t' 0 - flags "
"L - 'Long_t' 0 - modtime",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UnixPathName",1202,G__TWinNTSystem_UnixPathName_6_7,67,-1,-1,0,1,1,1,1,"C - - 0 - unixpathname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DynamicPathName",1491,G__TWinNTSystem_DynamicPathName_7_7,67,-1,-1,0,2,1,1,0,
"C - - 0 - lib b - 'Bool_t' 0 kFALSE quiet",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DynFindSymbol",1314,G__TWinNTSystem_DynFindSymbol_8_7,89,-1,G__defined_typename("Func_t"),0,2,1,1,0,
"C - - 0 - module C - - 0 - entry",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Unload",611,G__TWinNTSystem_Unload_9_7,121,-1,-1,0,1,1,1,0,"C - - 0 - module",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ListSymbols",1157,G__TWinNTSystem_ListSymbols_0_8,121,-1,-1,0,2,1,1,0,
"C - - 0 - module C - - 0 \"\" re",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ListLibraries",1337,G__TWinNTSystem_ListLibraries_1_8,121,-1,-1,0,1,1,1,0,"C - - 0 \"\" regexp",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Now",308,G__TWinNTSystem_Now_2_8,117,G__get_linked_tagnum(&G__G__WinNTLN_TTime),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddTimer",778,G__TWinNTSystem_AddTimer_3_8,121,-1,-1,0,1,1,1,0,"U 'TTimer' - 0 - ti",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveTimer",1135,G__TWinNTSystem_RemoveTimer_4_8,85,G__get_linked_tagnum(&G__G__WinNTLN_TTimer),-1,0,1,1,1,0,"U 'TTimer' - 0 - ti",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DispatchSynchTimers",1961,G__TWinNTSystem_DispatchSynchTimers_5_8,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sleep",505,G__TWinNTSystem_Sleep_6_8,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - milliSec",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRealTime",1075,G__TWinNTSystem_GetRealTime_7_8,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCPUTime",919,G__TWinNTSystem_GetCPUTime_8_8,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ConnectService",1435,G__TWinNTSystem_ConnectService_9_8,105,-1,-1,0,2,1,1,0,
"C - - 0 - servername i - - 0 - port",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHostByName",1274,G__TWinNTSystem_GetHostByName_0_9,117,G__get_linked_tagnum(&G__G__WinNTLN_TInetAddress),-1,0,1,1,1,0,"C - - 0 - server",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPeerName",1069,G__TWinNTSystem_GetPeerName_1_9,117,G__get_linked_tagnum(&G__G__WinNTLN_TInetAddress),-1,0,1,1,1,0,"i - - 0 - sock",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSockName",1073,G__TWinNTSystem_GetSockName_2_9,117,G__get_linked_tagnum(&G__G__WinNTLN_TInetAddress),-1,0,1,1,1,0,"i - - 0 - sock",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetServiceByName",1581,G__TWinNTSystem_GetServiceByName_3_9,105,-1,-1,0,1,1,1,0,"C - - 0 - service",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetServiceByPort",1617,G__TWinNTSystem_GetServiceByPort_4_9,67,-1,-1,0,1,1,1,0,"i - - 0 - port",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenConnection",1442,G__TWinNTSystem_OpenConnection_5_9,105,-1,-1,0,2,1,1,0,
"C - - 0 - server i - - 0 - port",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AnnounceTcpService",1839,G__TWinNTSystem_AnnounceTcpService_6_9,105,-1,-1,0,3,1,1,0,
"i - - 0 - port b - 'Bool_t' 0 - reuse "
"i - - 0 - backlog",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AnnounceUnixService",1964,G__TWinNTSystem_AnnounceUnixService_7_9,105,-1,-1,0,2,1,1,0,
"i - - 0 - port i - - 0 - backlog",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AcceptConnection",1632,G__TWinNTSystem_AcceptConnection_8_9,105,-1,-1,0,1,1,1,0,"i - - 0 - sock",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseConnection",1542,G__TWinNTSystem_CloseConnection_9_9,121,-1,-1,0,1,1,1,0,"i - - 0 - sock",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecvRaw",698,G__TWinNTSystem_RecvRaw_0_10,105,-1,-1,0,4,1,1,0,
"i - - 0 - sock Y - - 0 - buffer "
"i - - 0 - length i - - 0 - flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendRaw",692,G__TWinNTSystem_SendRaw_1_10,105,-1,-1,0,4,1,1,0,
"i - - 0 - sock Y - - 0 - buffer "
"i - - 0 - length i - - 0 - flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecvBuf",685,G__TWinNTSystem_RecvBuf_2_10,105,-1,-1,0,3,1,1,0,
"i - - 0 - sock Y - - 0 - buffer "
"i - - 0 - length",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendBuf",679,G__TWinNTSystem_SendBuf_3_10,105,-1,-1,0,3,1,1,0,
"i - - 0 - sock Y - - 0 - buffer "
"i - - 0 - length",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSockOpt",1007,G__TWinNTSystem_SetSockOpt_4_10,105,-1,-1,0,3,1,1,0,
"i - - 0 - sock i - - 0 - opt "
"i - - 0 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSockOpt",995,G__TWinNTSystem_GetSockOpt_5_10,105,-1,-1,0,3,1,1,0,
"i - - 0 - sock i - - 0 - opt "
"I - - 0 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Which",499,G__TWinNTSystem_Which_6_10,67,-1,-1,0,3,1,1,0,
"C - - 0 - search C - - 0 - file "
"i 'EAccessMode' - 0 kFileExists mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDynamicPath",1394,G__TWinNTSystem_GetDynamicPath_7_10,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TWinNTSystem_DeclFileName_8_10,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TWinNTSystem_DeclFileLine_9_10,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TWinNTSystem_ImplFileName_0_11,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TWinNTSystem_ImplFileLine_1_11,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TWinNTSystem_Class_Version_2_11,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TWinNTSystem_Class_3_11,85,G__get_linked_tagnum(&G__G__WinNTLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TWinNTSystem_Dictionary_4_11,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TWinNTSystem_IsA_5_11,85,G__get_linked_tagnum(&G__G__WinNTLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TWinNTSystem_ShowMembers_6_11,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TWinNTSystem_Streamer_7_11,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TWinNTSystem",1193,G__TWinNTSystem_TWinNTSystem_8_11,(int)('i'),G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),-1,0,1,1,1,0,"u 'TWinNTSystem' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TWinNTSystem",1319,G__TWinNTSystem_wATWinNTSystem_9_11,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFdSet(void) {
   /* TFdSet */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__WinNTLN_TFdSet));
   G__memfunc_setup("TFdSet",554,G__TFdSet_TFdSet_0_0,105,G__get_linked_tagnum(&G__G__WinNTLN_TFdSet),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Zero",416,G__TFdSet_Zero_1_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TFdSet_Set_2_0,121,-1,-1,0,1,1,1,0,"i - - 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Clr",289,G__TFdSet_Clr_3_0,121,-1,-1,0,1,1,1,0,"i - - 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsSet",488,G__TFdSet_IsSet_4_0,105,-1,-1,0,1,1,1,0,"i - - 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBits",690,G__TFdSet_GetBits_5_0,73,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TFdSet",554,G__TFdSet_TFdSet_6_0,(int)('i'),G__get_linked_tagnum(&G__G__WinNTLN_TFdSet),-1,0,1,1,1,0,"u 'TFdSet' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TFdSet",680,G__TFdSet_wATFdSet_7_0,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__WinNT() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__WinNT() {

   /* Setting up global variables */
   G__resetplocal();


   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__WinNT() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__WinNTLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_void = { "void" , 0 , -1 };
G__linked_taginfo G__G__WinNTLN_TInetAddress = { "TInetAddress" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TSystem = { "TSystem" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TWinNTSystem = { "TWinNTSystem" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TFileHandler = { "TFileHandler" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TSignalHandler = { "TSignalHandler" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TTime = { "TTime" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TTimer = { "TTimer" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TFdSet = { "TFdSet" , 99 , -1 };
G__linked_taginfo G__G__WinNTLN_TWin32Timer = { "TWin32Timer" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__WinNT() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__WinNTLN_TWinNTSystem),sizeof(TWinNTSystem),-1,0,(char*)NULL,G__setup_memvarTWinNTSystem,G__setup_memfuncTWinNTSystem);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__WinNTLN_TFdSet),sizeof(TFdSet),-1,0,(char*)NULL,G__setup_memvarTFdSet,G__setup_memfuncTFdSet);
}
extern "C" void G__cpp_setupG__WinNT() {
  G__check_setup_version(51111,"G__cpp_setupG__WinNT()");
  G__set_cpp_environmentG__WinNT();
  G__cpp_setup_tagtableG__WinNT();

  G__cpp_setup_inheritanceG__WinNT();

  G__cpp_setup_typetableG__WinNT();

  G__cpp_setup_memvarG__WinNT();

  G__cpp_setup_memfuncG__WinNT();
  G__cpp_setup_globalG__WinNT();
  G__cpp_setup_funcG__WinNT();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__WinNT();
  return;
}
class G__cpp_setup_initG__WinNT {
  public:
    G__cpp_setup_initG__WinNT() { G__add_setup_func("G__WinNT",&G__cpp_setupG__WinNT); }
   ~G__cpp_setup_initG__WinNT() { G__remove_setup_func("G__WinNT"); }
};
G__cpp_setup_initG__WinNT G__cpp_setup_initializerG__WinNT;

//
// File generated by /user/brun/root/bin/rootcint at Fri Nov 27 15:19:22 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TWinNTSystem *&obj)
{
   // Read a pointer to an object of class TWinNTSystem.

   obj = (TWinNTSystem *) buf.ReadObject(TWinNTSystem::Class());
   return buf;
}

//______________________________________________________________________________
void TWinNTSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWinNTSystem.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TSystem::Streamer(R__b);
      //R__b.ReadArray(fDirNameBuffer);
      //R__b.ReadArray(fShellName);
      R__b >> fWin32Timer;
   } else {
      R__b.WriteVersion(TWinNTSystem::IsA());
      TSystem::Streamer(R__b);
      //R__b.WriteArray(fDirNameBuffer, __COUNTER__);
      //R__b.WriteArray(fShellName, __COUNTER__);
      R__b << fWin32Timer;
   }
}

//______________________________________________________________________________
void TWinNTSystem::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TWinNTSystem.

   TClass *R__cl  = TWinNTSystem::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fDirNameBuffer", &fDirNameBuffer);
   R__insp.Inspect(R__cl, R__parent, "*fShellName", &fShellName);
   R__insp.Inspect(R__cl, R__parent, "*fWin32Timer", &fWin32Timer);
   TSystem::ShowMembers(R__insp, R__parent);
}
