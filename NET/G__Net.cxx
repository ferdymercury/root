//*CMZ :  2.00/12 08/10/98  19.50.39  by  Fons Rademakers
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
extern void G__cpp_setup_tagtableG__Net();
extern void G__cpp_setup_inheritanceG__Net();
extern void G__cpp_setup_typetableG__Net();
extern void G__cpp_setup_memvarG__Net();
extern void G__cpp_setup_globalG__Net();
extern void G__cpp_setup_memfuncG__Net();
extern void G__cpp_setup_funcG__Net();
extern void G__set_cpp_environmentG__Net();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TInetAddress.h"
#include "TServerSocket.h"
#include "TSocket.h"
#include "TMessage.h"
#include "TMonitor.h"
#include "TUrl.h"
#include "TNetFile.h"
#include "TWebFile.h"
#include "MessageTypes.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__NetLN_TClass;
extern G__linked_taginfo G__G__NetLN_TBuffer;
extern G__linked_taginfo G__G__NetLN_TList;
extern G__linked_taginfo G__G__NetLN_TObject;
extern G__linked_taginfo G__G__NetLN_TObjectcLcLdA;
extern G__linked_taginfo G__G__NetLN_TString;
extern G__linked_taginfo G__G__NetLN_TNamed;
extern G__linked_taginfo G__G__NetLN_TFile;
extern G__linked_taginfo G__G__NetLN_TDirectory;
extern G__linked_taginfo G__G__NetLN_TInetAddress;
extern G__linked_taginfo G__G__NetLN_TSocket;
extern G__linked_taginfo G__G__NetLN_TServerSocket;
extern G__linked_taginfo G__G__NetLN_EMessageTypes;
extern G__linked_taginfo G__G__NetLN_ESockOptions;
extern G__linked_taginfo G__G__NetLN_ESendRecvOptions;
extern G__linked_taginfo G__G__NetLN_TMessage;
extern G__linked_taginfo G__G__NetLN_TMonitor;
extern G__linked_taginfo G__G__NetLN_TUrl;
extern G__linked_taginfo G__G__NetLN_TNetFile;
extern G__linked_taginfo G__G__NetLN_TWebFile;
/********************************************************
* G__Net.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__Net() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TInetAddress.h");
  G__add_compiledheader("TServerSocket.h");
  G__add_compiledheader("TSocket.h");
  G__add_compiledheader("TMessage.h");
  G__add_compiledheader("TMonitor.h");
  G__add_compiledheader("TUrl.h");
  G__add_compiledheader("TNetFile.h");
  G__add_compiledheader("TWebFile.h");
  G__add_compiledheader("MessageTypes.h");
}
int G__cpp_dllrevG__Net() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TInetAddress */
static int G__TInetAddress_TInetAddress_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TInetAddress *p=NULL;
      p = new TInetAddress(*(TInetAddress*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TInetAddress);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_operatoreQ_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress& obj=((TInetAddress*)(G__getstructoffset()))->operator=(*(TInetAddress*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_GetAddress_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TInetAddress*)(G__getstructoffset()))->GetAddress());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_GetAddressBytes_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,66,(long)((TInetAddress*)(G__getstructoffset()))->GetAddressBytes());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_GetHostAddress_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TInetAddress*)(G__getstructoffset()))->GetHostAddress());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_GetHostName_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TInetAddress*)(G__getstructoffset()))->GetHostName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_GetFamily_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInetAddress*)(G__getstructoffset()))->GetFamily());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_GetPort_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInetAddress*)(G__getstructoffset()))->GetPort());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_IsValid_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TInetAddress*)(G__getstructoffset()))->IsValid());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_Print_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TInetAddress*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TInetAddress*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_DeclFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TInetAddress*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_DeclFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInetAddress*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_ImplFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TInetAddress*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_ImplFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TInetAddress*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_Class_Version_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TInetAddress*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_Class_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TInetAddress*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_Dictionary_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInetAddress*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_IsA_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TInetAddress*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_ShowMembers_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInetAddress*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TInetAddress_Streamer_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TInetAddress*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TInetAddress_wATInetAddress_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TInetAddress *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TInetAddress *)((G__getstructoffset())+sizeof(TInetAddress)*i);
   else  delete (TInetAddress *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSocket */
static int G__TSocket_TSocket_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSocket *p=NULL;
      p = new TSocket(*((TInetAddress*)G__int(libp->para[0])),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TSocket);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_TSocket_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSocket *p=NULL;
      p = new TSocket(*((TInetAddress*)G__int(libp->para[0])),(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TSocket);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_TSocket_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSocket *p=NULL;
      p = new TSocket((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TSocket);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_TSocket_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSocket *p=NULL;
      p = new TSocket((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TSocket);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_TSocket_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSocket *p=NULL;
      p = new TSocket((Int_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TSocket);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_TSocket_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TSocket *p=NULL;
      p = new TSocket(*(TSocket*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TSocket);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Close_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSocket*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSocket*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetDescriptor_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->GetDescriptor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetInetAddress_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TSocket*)(G__getstructoffset()))->GetInetAddress();
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetLocalInetAddress_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TSocket*)(G__getstructoffset()))->GetLocalInetAddress();
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetPort_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->GetPort());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetLocalPort_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->GetLocalPort());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetBytesSent_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TSocket*)(G__getstructoffset()))->GetBytesSent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetBytesRecv_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TSocket*)(G__getstructoffset()))->GetBytesRecv());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Send_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->Send(*(TMessage*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Send_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->Send((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Send_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->Send((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->Send((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_SendObject_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->SendObject((const TObject*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->SendObject((const TObject*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_SendRaw_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->SendRaw((const void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(ESendRecvOptions)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->SendRaw((const void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Recv_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->Recv(*(TMessage**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Recv_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->Recv((char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Recv_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->Recv((char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_RecvRaw_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->RecvRaw((void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(ESendRecvOptions)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->RecvRaw((void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_IsValid_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSocket*)(G__getstructoffset()))->IsValid());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetErrorCode_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->GetErrorCode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_SetOption_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->SetOption((ESockOptions)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetOption_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->GetOption((ESockOptions)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetSocketBytesSent_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TSocket*)(G__getstructoffset()))->GetSocketBytesSent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_GetSocketBytesRecv_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TSocket*)(G__getstructoffset()))->GetSocketBytesRecv());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_DeclFileName_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSocket*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_DeclFileLine_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_ImplFileName_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSocket*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_ImplFileLine_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSocket*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Class_Version_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSocket*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Class_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSocket*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Dictionary_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSocket*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_IsA_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSocket*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_ShowMembers_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSocket*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSocket_Streamer_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSocket*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSocket_wATSocket_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSocket *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSocket *)((G__getstructoffset())+sizeof(TSocket)*i);
   else  delete (TSocket *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TServerSocket */
static int G__TServerSocket_TServerSocket_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TServerSocket *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TServerSocket(
(Int_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TServerSocket((Int_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TServerSocket((Int_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TServerSocket);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_TServerSocket_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TServerSocket *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TServerSocket(
(const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TServerSocket((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TServerSocket((const char*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TServerSocket);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Accept_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TServerSocket*)(G__getstructoffset()))->Accept());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_GetLocalInetAddress_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TServerSocket*)(G__getstructoffset()))->GetLocalInetAddress();
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_GetLocalPort_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->GetLocalPort());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Send_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->Send(*(TMessage*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Send_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->Send((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Send_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->Send((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->Send((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_SendObject_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->SendObject((const TObject*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->SendObject((const TObject*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_SendRaw_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->SendRaw((const void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(ESendRecvOptions)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->SendRaw((const void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Recv_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->Recv(*(TMessage**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Recv_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->Recv((char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Recv_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->Recv((char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_RecvRaw_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->RecvRaw((void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(ESendRecvOptions)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->RecvRaw((void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_DeclFileName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TServerSocket*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_DeclFileLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_ImplFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TServerSocket*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_ImplFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TServerSocket*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Class_Version_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TServerSocket*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Class_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TServerSocket*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Dictionary_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TServerSocket*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_IsA_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TServerSocket*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_ShowMembers_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TServerSocket*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TServerSocket_Streamer_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TServerSocket*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TServerSocket_wATServerSocket_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TServerSocket *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TServerSocket *)((G__getstructoffset())+sizeof(TServerSocket)*i);
   else  delete (TServerSocket *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMessage */
static int G__TMessage_TMessage_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMessage *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TMessage((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TMessage[G__getaryconstruct()];
   else                    p=new TMessage;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TMessage);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_GetClass_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMessage*)(G__getstructoffset()))->GetClass());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_Reset_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessage*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_Reset_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessage*)(G__getstructoffset()))->Reset((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_What_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TMessage*)(G__getstructoffset()))->What());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_SetWhat_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessage*)(G__getstructoffset()))->SetWhat((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_DeclFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMessage*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_DeclFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMessage*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_ImplFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMessage*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_ImplFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMessage*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_Class_Version_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMessage*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_Class_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMessage*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_Dictionary_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessage*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_IsA_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMessage*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_ShowMembers_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessage*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessage_Streamer_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessage*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMessage_TMessage_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMessage *p;
   if(1!=libp->paran) ;
   p=new TMessage(*(TMessage*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TMessage);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMessage_wATMessage_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMessage *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMessage *)((G__getstructoffset())+sizeof(TMessage)*i);
   else  delete (TMessage *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMonitor */
static int G__TMonitor_TMonitor_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TMonitor *p=NULL;
   if(G__getaryconstruct()) p=new TMonitor[G__getaryconstruct()];
   else                    p=new TMonitor;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TMonitor);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Add_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->Add((TSocket*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Remove_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->Remove((TSocket*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Activate_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->Activate((TSocket*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_ActivateAll_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->ActivateAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_DeActivate_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->DeActivate((TSocket*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_DeActivateAll_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->DeActivateAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Select_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMonitor*)(G__getstructoffset()))->Select());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Select_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMonitor*)(G__getstructoffset()))->Select((Long_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_SetReady_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->SetReady((TSocket*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_GetActive_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMonitor*)(G__getstructoffset()))->GetActive());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_GetDeActive_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMonitor*)(G__getstructoffset()))->GetDeActive());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_DeclFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMonitor*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_DeclFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMonitor*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_ImplFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMonitor*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_ImplFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMonitor*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Class_Version_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMonitor*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Class_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMonitor*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Dictionary_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_IsA_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMonitor*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_ShowMembers_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMonitor_Streamer_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMonitor*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMonitor_TMonitor_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TMonitor *p;
   if(1!=libp->paran) ;
   p=new TMonitor(*(TMonitor*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TMonitor);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMonitor_wATMonitor_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMonitor *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMonitor *)((G__getstructoffset())+sizeof(TMonitor)*i);
   else  delete (TMonitor *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TUrl */
static int G__TUrl_TUrl_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TUrl *p=NULL;
      p = new TUrl((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TUrl);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_TUrl_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TUrl *p=NULL;
      p = new TUrl(*(TUrl*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TUrl);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_operatoreQ_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TUrl& obj=((TUrl*)(G__getstructoffset()))->operator=(*(TUrl*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_GetUrl_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TUrl*)(G__getstructoffset()))->GetUrl());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_GetProtocol_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TUrl*)(G__getstructoffset()))->GetProtocol());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_GetHost_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TUrl*)(G__getstructoffset()))->GetHost());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_GetFile_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TUrl*)(G__getstructoffset()))->GetFile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_GetAnchor_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TUrl*)(G__getstructoffset()))->GetAnchor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_GetOptions_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TUrl*)(G__getstructoffset()))->GetOptions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_GetPort_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TUrl*)(G__getstructoffset()))->GetPort());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_IsValid_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TUrl*)(G__getstructoffset()))->IsValid());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_Print_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TUrl*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TUrl*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_DeclFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TUrl*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_DeclFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TUrl*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_ImplFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TUrl*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_ImplFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TUrl*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_Class_Version_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TUrl*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_Class_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TUrl*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_Dictionary_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TUrl*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_IsA_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TUrl*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_ShowMembers_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TUrl*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TUrl_Streamer_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TUrl*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TUrl_wATUrl_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TUrl *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TUrl *)((G__getstructoffset())+sizeof(TUrl)*i);
   else  delete (TUrl *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TNetFile */
static int G__TNetFile_TNetFile_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TNetFile *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TNetFile(
(const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TNetFile(
(const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TNetFile((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TNetFile((const char*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TNetFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_Close_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_Flush_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->Flush();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_IsOpen_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TNetFile*)(G__getstructoffset()))->IsOpen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_ReadBuffer_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TNetFile*)(G__getstructoffset()))->ReadBuffer((char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_WriteBuffer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TNetFile*)(G__getstructoffset()))->WriteBuffer((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_Seek_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->Seek((Seek_t)G__int(libp->para[0]),(TFile::ERelativeTo)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->Seek((Seek_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_SetUser_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->SetUser((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_SetPasswd_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->SetPasswd((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_DeclFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNetFile*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_DeclFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNetFile*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_ImplFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNetFile*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_ImplFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNetFile*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_Class_Version_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TNetFile*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_Class_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNetFile*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_Dictionary_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_IsA_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNetFile*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_ShowMembers_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNetFile_Streamer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNetFile*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TNetFile_TNetFile_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TNetFile *p;
   if(1!=libp->paran) ;
   p=new TNetFile(*(TNetFile*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TNetFile);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TNetFile_wATNetFile_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TNetFile *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TNetFile *)((G__getstructoffset())+sizeof(TNetFile)*i);
   else  delete (TNetFile *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TWebFile */
static int G__TWebFile_TWebFile_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TWebFile *p=NULL;
      p = new TWebFile((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TWebFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_TWebFile_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TWebFile *p=NULL;
      p = new TWebFile(*((TUrl*)G__int(libp->para[0])));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TWebFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_IsOpen_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWebFile*)(G__getstructoffset()))->IsOpen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_ReadBuffer_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TWebFile*)(G__getstructoffset()))->ReadBuffer((char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_Seek_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TWebFile*)(G__getstructoffset()))->Seek((Seek_t)G__int(libp->para[0]),(TFile::ERelativeTo)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TWebFile*)(G__getstructoffset()))->Seek((Seek_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWebFile*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWebFile*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TWebFile*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TWebFile*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TWebFile*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWebFile*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWebFile*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TWebFile*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWebFile*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TWebFile_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TWebFile*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TWebFile_TWebFile_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TWebFile *p;
   if(1!=libp->paran) ;
   p=new TWebFile(*(TWebFile*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__NetLN_TWebFile);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TWebFile_wATWebFile_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TWebFile *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TWebFile *)((G__getstructoffset())+sizeof(TWebFile)*i);
   else  delete (TWebFile *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TInetAddress */

/* TSocket */

/* TServerSocket */

/* TMessage */

/* TMonitor */

/* TUrl */

/* TNetFile */

/* TWebFile */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Net {
 public:
  G__Sizep2memfuncG__Net() {p=&G__Sizep2memfuncG__Net::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Net::*p)();
};

size_t G__get_sizep2memfuncG__Net()
{
  G__Sizep2memfuncG__Net a;
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
extern "C" void G__cpp_setup_inheritanceG__Net() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__NetLN_TInetAddress))) {
     TInetAddress *G__Lderived;
     G__Lderived=(TInetAddress*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TInetAddress),G__get_linked_tagnum(&G__G__NetLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__NetLN_TSocket))) {
     TSocket *G__Lderived;
     G__Lderived=(TSocket*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TSocket),G__get_linked_tagnum(&G__G__NetLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TSocket),G__get_linked_tagnum(&G__G__NetLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__NetLN_TServerSocket))) {
     TServerSocket *G__Lderived;
     G__Lderived=(TServerSocket*)0x1000;
     {
       TSocket *G__Lpbase=(TSocket*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TServerSocket),G__get_linked_tagnum(&G__G__NetLN_TSocket),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TServerSocket),G__get_linked_tagnum(&G__G__NetLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TServerSocket),G__get_linked_tagnum(&G__G__NetLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__NetLN_TMessage))) {
     TMessage *G__Lderived;
     G__Lderived=(TMessage*)0x1000;
     {
       TBuffer *G__Lpbase=(TBuffer*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TMessage),G__get_linked_tagnum(&G__G__NetLN_TBuffer),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TMessage),G__get_linked_tagnum(&G__G__NetLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__NetLN_TMonitor))) {
     TMonitor *G__Lderived;
     G__Lderived=(TMonitor*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TMonitor),G__get_linked_tagnum(&G__G__NetLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__NetLN_TUrl))) {
     TUrl *G__Lderived;
     G__Lderived=(TUrl*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TUrl),G__get_linked_tagnum(&G__G__NetLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__NetLN_TNetFile))) {
     TNetFile *G__Lderived;
     G__Lderived=(TNetFile*)0x1000;
     {
       TFile *G__Lpbase=(TFile*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TNetFile),G__get_linked_tagnum(&G__G__NetLN_TFile),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TDirectory *G__Lpbase=(TDirectory*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TNetFile),G__get_linked_tagnum(&G__G__NetLN_TDirectory),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TNetFile),G__get_linked_tagnum(&G__G__NetLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TNetFile),G__get_linked_tagnum(&G__G__NetLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__NetLN_TWebFile))) {
     TWebFile *G__Lderived;
     G__Lderived=(TWebFile*)0x1000;
     {
       TFile *G__Lpbase=(TFile*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TWebFile),G__get_linked_tagnum(&G__G__NetLN_TFile),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TDirectory *G__Lpbase=(TDirectory*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TWebFile),G__get_linked_tagnum(&G__G__NetLN_TDirectory),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TWebFile),G__get_linked_tagnum(&G__G__NetLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__NetLN_TWebFile),G__get_linked_tagnum(&G__G__NetLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Net() {

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

   /* TInetAddress */
static void G__setup_memvarTInetAddress(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__NetLN_TInetAddress));
   { TInetAddress *p; p=(TInetAddress*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,4,"fHostname=",0,"full qualified hostname");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fAddress=",0,"IP address in host byte order");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fFamily=",0,"address family");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fPort=",0,"port through which we are connected");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSocket */
static void G__setup_memvarTSocket(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__NetLN_TSocket));
   { TSocket *p; p=(TSocket*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSocket=",0,"socket descriptor");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,2,"fService=",0,"name of service (matches remote port #)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,-1,2,"fAddress=",0,"remote internet address and port #");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,-1,4,"fLocalAddress=",0,"local internet address and port #");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fBytesSent=",0,"total bytes sent using this socket");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fBytesRecv=",0,"total bytes received over this socket");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-2,4,"fgBytesSent=",0,"total bytes sent by all socket objects");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-2,4,"fgBytesRecv=",0,"total bytes received by all socket objects");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TServerSocket */
static void G__setup_memvarTServerSocket(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__NetLN_TServerSocket));
   { TServerSocket *p; p=(TServerSocket*)0x1000; if (p) { }
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_TObjectcLcLdA),-1,-2,1,"kDefaultBacklog=10",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EMessageTypes */

   /* ESockOptions */

   /* ESendRecvOptions */

   /* TMessage */
static void G__setup_memvarTMessage(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__NetLN_TMessage));
   { TMessage *p; p=(TMessage*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fWhat=",0,"message type");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-1,4,"fClass=",0,"if message is kMESS_OBJECT, pointer to object's class");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMonitor */
static void G__setup_memvarTMonitor(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__NetLN_TMonitor));
   { TMonitor *p; p=(TMonitor*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TList),-1,-1,4,"fActive=",0,"list of sockets to monitor");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TList),-1,-1,4,"fDeActive=",0,"list of (temporary) disabled sockets");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,-1,4,"fReady=",0,"socket which is ready to be read");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TUrl */
static void G__setup_memvarTUrl(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__NetLN_TUrl));
   { TUrl *p; p=(TUrl*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,4,"fUrl=",0,"full URL");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,4,"fProtocol=",0,"protocol: http, ftp, news, root");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,4,"fHost=",0,"remote host");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,4,"fFile=",0,"remote object");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,4,"fAnchor=",0,"anchor in object");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,4,"fOptions=",0,"options (after ?)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fPort=",0,"port through which to contact remote server");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TNetFile */
static void G__setup_memvarTNetFile(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__NetLN_TNetFile));
   { TNetFile *p; p=(TNetFile*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TUrl),-1,-1,4,"fUrl=",0,"URL of file");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TString),-1,-1,4,"fUser=",0,"remote user name");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,4,"fOffset=",0,"seek offset");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,-1,4,"fSocket=",0,"connection to rootd server");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-2,4,"fgUser=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-2,4,"fgPasswd=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TWebFile */
static void G__setup_memvarTWebFile(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__NetLN_TWebFile));
   { TWebFile *p; p=(TWebFile*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__NetLN_TUrl),-1,-1,4,"fUrl=",0,"URL of file");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,4,"fOffset=",0,"seek offset");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Net() {
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
static void G__setup_memfuncTInetAddress(void) {
   /* TInetAddress */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__NetLN_TInetAddress));
   G__memfunc_setup("TInetAddress",1194,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TInetAddress",1194,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,0,4,1,4,0,
"C - - 0 - host h - 'UInt_t' 0 - addr "
"i - 'Int_t' 0 - family i - 'Int_t' 0 -1 port",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TInetAddress",1194,G__TInetAddress_TInetAddress_2_0,105,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,0,1,1,1,0,"u 'TInetAddress' - 1 - adr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TInetAddress_operatoreQ_3_0,117,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,1,1,1,1,0,"u 'TInetAddress' - 1 - rhs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAddress",998,G__TInetAddress_GetAddress_5_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAddressBytes",1517,G__TInetAddress_GetAddressBytes_6_0,66,-1,G__defined_typename("UChar_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHostAddress",1412,G__TInetAddress_GetHostAddress_7_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHostName",1087,G__TInetAddress_GetHostName_8_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFamily",898,G__TInetAddress_GetFamily_9_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPort",709,G__TInetAddress_GetPort_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsValid",684,G__TInetAddress_IsValid_1_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TInetAddress_Print_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TInetAddress_DeclFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TInetAddress_DeclFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TInetAddress_ImplFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TInetAddress_ImplFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TInetAddress_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TInetAddress_Class_8_1,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TInetAddress_Dictionary_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TInetAddress_IsA_0_2,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TInetAddress_ShowMembers_1_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TInetAddress_Streamer_2_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TInetAddress",1320,G__TInetAddress_wATInetAddress_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSocket(void) {
   /* TSocket */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__NetLN_TSocket));
   G__memfunc_setup("TSocket",701,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"u 'TSocket' - 1 - -","not implemented",(void*)NULL,0);
   G__memfunc_setup("SetDescriptor",1355,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"i - 'Int_t' 0 - desc",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOption",921,(G__InterfaceMethod)NULL,67,-1,G__defined_typename("Option_t"),0,0,1,4,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TSocket",701,G__TSocket_TSocket_4_0,105,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,2,1,1,0,
"u 'TInetAddress' - 0 - address C - - 0 - service",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSocket",701,G__TSocket_TSocket_5_0,105,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,2,1,1,0,
"u 'TInetAddress' - 0 - address i - 'Int_t' 0 - port",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSocket",701,G__TSocket_TSocket_6_0,105,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,2,1,1,0,
"C - - 0 - host C - - 0 - service",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSocket",701,G__TSocket_TSocket_7_0,105,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,2,1,1,0,
"C - - 0 - host i - 'Int_t' 0 - port",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSocket",701,G__TSocket_TSocket_8_0,105,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,1,1,1,0,"i - 'Int_t' 0 - descriptor",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSocket",701,G__TSocket_TSocket_9_0,105,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,1,1,1,0,"u 'TSocket' - 1 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Close",502,G__TSocket_Close_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDescriptor",1343,G__TSocket_GetDescriptor_2_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetInetAddress",1398,G__TSocket_GetInetAddress_3_1,117,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLocalInetAddress",1889,G__TSocket_GetLocalInetAddress_4_1,117,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPort",709,G__TSocket_GetPort_5_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLocalPort",1200,G__TSocket_GetLocalPort_6_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBytesSent",1217,G__TSocket_GetBytesSent_7_1,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBytesRecv",1207,G__TSocket_GetBytesRecv_8_1,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Send",394,G__TSocket_Send_9_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"u 'TMessage' - 1 - mess",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Send",394,G__TSocket_Send_0_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - kind",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Send",394,G__TSocket_Send_1_2,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 0 - mess i - 'Int_t' 0 kMESS_STRING kind",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendObject",993,G__TSocket_SendObject_2_2,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"U 'TObject' - 0 - obj i - 'Int_t' 0 kMESS_OBJECT kind",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendRaw",692,G__TSocket_SendRaw_3_2,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"Y - - 0 - buffer i - 'Int_t' 0 - length "
"i 'ESendRecvOptions' - 0 kDefault opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Recv",400,G__TSocket_Recv_4_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TMessage' - 1 - mess",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Recv",400,G__TSocket_Recv_5_2,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 0 - mess i - 'Int_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Recv",400,G__TSocket_Recv_6_2,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"C - - 0 - mess i - 'Int_t' 0 - max "
"i - 'Int_t' 1 - kind",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecvRaw",698,G__TSocket_RecvRaw_7_2,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"Y - - 0 - buffer i - 'Int_t' 0 - length "
"i 'ESendRecvOptions' - 0 kDefault opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsValid",684,G__TSocket_IsValid_8_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetErrorCode",1189,G__TSocket_GetErrorCode_9_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOption",933,G__TSocket_SetOption_0_3,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i 'ESockOptions' - 0 - opt i - 'Int_t' 0 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__TSocket_GetOption_1_3,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i 'ESockOptions' - 0 - opt i - 'Int_t' 1 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSocketBytesSent",1834,G__TSocket_GetSocketBytesSent_2_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSocketBytesRecv",1824,G__TSocket_GetSocketBytesRecv_3_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TSocket_DeclFileName_4_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSocket_DeclFileLine_5_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSocket_ImplFileName_6_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSocket_ImplFileLine_7_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSocket_Class_Version_8_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TSocket_Class_9_3,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSocket_Dictionary_0_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSocket_IsA_1_4,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSocket_ShowMembers_2_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSocket_Streamer_3_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TSocket",827,G__TSocket_wATSocket_4_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTServerSocket(void) {
   /* TServerSocket */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__NetLN_TServerSocket));
   G__memfunc_setup("TServerSocket",1332,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__NetLN_TServerSocket),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TServerSocket",1332,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__NetLN_TServerSocket),-1,0,1,1,4,0,"u 'TServerSocket' - 1 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"u 'TServerSocket' - 1 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TServerSocket",1332,G__TServerSocket_TServerSocket_3_0,105,G__get_linked_tagnum(&G__G__NetLN_TServerSocket),-1,0,3,1,1,0,
"i - 'Int_t' 0 - port b - 'Bool_t' 0 kFALSE reuse "
"i - 'Int_t' 0 kDefaultBacklog backlog",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TServerSocket",1332,G__TServerSocket_TServerSocket_4_0,105,G__get_linked_tagnum(&G__G__NetLN_TServerSocket),-1,0,3,1,1,0,
"C - - 0 - service b - 'Bool_t' 0 kFALSE reuse "
"i - 'Int_t' 0 kDefaultBacklog backlog",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Accept",592,G__TServerSocket_Accept_6_0,85,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLocalInetAddress",1889,G__TServerSocket_GetLocalInetAddress_7_0,117,G__get_linked_tagnum(&G__G__NetLN_TInetAddress),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLocalPort",1200,G__TServerSocket_GetLocalPort_8_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Send",394,G__TServerSocket_Send_9_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"u 'TMessage' - 1 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Send",394,G__TServerSocket_Send_0_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Send",394,G__TServerSocket_Send_1_1,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 0 - - i - 'Int_t' 0 kMESS_STRING -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendObject",993,G__TServerSocket_SendObject_2_1,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"U 'TObject' - 0 - - i - 'Int_t' 0 kMESS_OBJECT -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendRaw",692,G__TServerSocket_SendRaw_3_1,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"Y - - 0 - - i - 'Int_t' 0 - - "
"i 'ESendRecvOptions' - 0 kDefault -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Recv",400,G__TServerSocket_Recv_4_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TMessage' - 1 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Recv",400,G__TServerSocket_Recv_5_1,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 0 - - i - 'Int_t' 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Recv",400,G__TServerSocket_Recv_6_1,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"C - - 0 - - i - 'Int_t' 0 - - "
"i - 'Int_t' 1 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecvRaw",698,G__TServerSocket_RecvRaw_7_1,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"Y - - 0 - - i - 'Int_t' 0 - - "
"i 'ESendRecvOptions' - 0 kDefault -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TServerSocket_DeclFileName_8_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TServerSocket_DeclFileLine_9_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TServerSocket_ImplFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TServerSocket_ImplFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TServerSocket_Class_Version_2_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TServerSocket_Class_3_2,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TServerSocket_Dictionary_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TServerSocket_IsA_5_2,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TServerSocket_ShowMembers_6_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TServerSocket_Streamer_7_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TServerSocket",1458,G__TServerSocket_wATServerSocket_8_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMessage(void) {
   /* TMessage */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__NetLN_TMessage));
   G__memfunc_setup("TMessage",793,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__NetLN_TMessage),-1,0,2,1,4,0,
"Y - - 0 - buf i - 'Int_t' 0 - bufsize","only called by TSocket::Recv()",(void*)NULL,0);
   G__memfunc_setup("SetLength",910,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,8,"","only called by TSocket::Send()",(void*)NULL,0);
   G__memfunc_setup("TMessage",793,G__TMessage_TMessage_2_0,105,G__get_linked_tagnum(&G__G__NetLN_TMessage),-1,0,1,1,1,0,"h - 'UInt_t' 0 kMESS_ANY what",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetClass",790,G__TMessage_GetClass_4_0,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TMessage_Reset_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Reset",515,G__TMessage_Reset_6_0,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - what",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("What",404,G__TMessage_What_7_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWhat",704,G__TMessage_SetWhat_8_0,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - what",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMessage_DeclFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMessage_DeclFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMessage_ImplFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMessage_ImplFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMessage_Class_Version_3_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMessage_Class_4_1,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMessage_Dictionary_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMessage_IsA_6_1,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMessage_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMessage_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMessage",793,G__TMessage_TMessage_9_1,(int)('i'),G__get_linked_tagnum(&G__G__NetLN_TMessage),-1,0,1,1,1,0,"u 'TMessage' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMessage",919,G__TMessage_wATMessage_0_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMonitor(void) {
   /* TMonitor */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__NetLN_TMonitor));
   G__memfunc_setup("TMonitor",828,G__TMonitor_TMonitor_0_0,105,G__get_linked_tagnum(&G__G__NetLN_TMonitor),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Add",265,G__TMonitor_Add_2_0,121,-1,-1,0,1,1,1,0,"U 'TSocket' - 0 - sock",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Remove",622,G__TMonitor_Remove_3_0,121,-1,-1,0,1,1,1,0,"U 'TSocket' - 0 - sock",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Activate",817,G__TMonitor_Activate_4_0,121,-1,-1,0,1,1,1,0,"U 'TSocket' - 0 - sock",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ActivateAll",1098,G__TMonitor_ActivateAll_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeActivate",986,G__TMonitor_DeActivate_6_0,121,-1,-1,0,1,1,1,0,"U 'TSocket' - 0 - sock",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeActivateAll",1267,G__TMonitor_DeActivateAll_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Select",608,G__TMonitor_Select_8_0,85,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Select",608,G__TMonitor_Select_9_0,85,G__get_linked_tagnum(&G__G__NetLN_TSocket),-1,0,1,1,1,0,"l - 'Long_t' 0 - timeout",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetReady",801,G__TMonitor_SetReady_0_1,121,-1,-1,0,1,1,1,0,"U 'TSocket' - 0 - sock",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetActive",892,G__TMonitor_GetActive_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDeActive",1061,G__TMonitor_GetDeActive_2_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TMonitor_DeclFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMonitor_DeclFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMonitor_ImplFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMonitor_ImplFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMonitor_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMonitor_Class_8_1,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMonitor_Dictionary_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMonitor_IsA_0_2,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMonitor_ShowMembers_1_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMonitor_Streamer_2_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TMonitor",828,G__TMonitor_TMonitor_3_2,(int)('i'),G__get_linked_tagnum(&G__G__NetLN_TMonitor),-1,0,1,1,1,0,"u 'TMonitor' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMonitor",954,G__TMonitor_wATMonitor_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTUrl(void) {
   /* TUrl */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__NetLN_TUrl));
   G__memfunc_setup("TUrl",391,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__NetLN_TUrl),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TUrl",391,G__TUrl_TUrl_1_0,105,G__get_linked_tagnum(&G__G__NetLN_TUrl),-1,0,1,1,1,0,"C - - 0 - url",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TUrl",391,G__TUrl_TUrl_2_0,105,G__get_linked_tagnum(&G__G__NetLN_TUrl),-1,0,1,1,1,0,"u 'TUrl' - 1 - url",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TUrl_operatoreQ_3_0,117,G__get_linked_tagnum(&G__G__NetLN_TUrl),-1,1,1,1,1,0,"u 'TUrl' - 1 - rhs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetUrl",595,G__TUrl_GetUrl_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetProtocol",1138,G__TUrl_GetProtocol_6_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHost",702,G__TUrl_GetHost_7_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFile",672,G__TUrl_GetFile_8_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAnchor",891,G__TUrl_GetAnchor_9_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptions",1036,G__TUrl_GetOptions_0_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPort",709,G__TUrl_GetPort_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsValid",684,G__TUrl_IsValid_2_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TUrl_Print_3_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TUrl_DeclFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TUrl_DeclFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TUrl_ImplFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TUrl_ImplFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TUrl_Class_Version_8_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TUrl_Class_9_1,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TUrl_Dictionary_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TUrl_IsA_1_2,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TUrl_ShowMembers_2_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TUrl_Streamer_3_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TUrl",517,G__TUrl_wATUrl_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTNetFile(void) {
   /* TNetFile */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__NetLN_TNetFile));
   G__memfunc_setup("TNetFile",763,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__NetLN_TNetFile),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Authenticate",1247,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CheckNetrc",986,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,2,1,4,0,
"C - - 1 - user C - - 1 - passwd",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"b - 'Bool_t' 0 - create",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PrintError",1047,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,4,0,
"C - - 0 - where i - 'Int_t' 0 - err",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Recv",400,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,2,1,4,0,
"i - 'Int_t' 1 - status i 'EMessageTypes' - 1 - kind",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetUser",703,(G__InterfaceMethod)NULL,67,-1,-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPasswd",914,(G__InterfaceMethod)NULL,67,-1,-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TNetFile",763,G__TNetFile_TNetFile_9_0,105,G__get_linked_tagnum(&G__G__NetLN_TNetFile),-1,0,4,1,1,0,
"C - - 0 - url C - 'Option_t' 0 \"\" option "
"C - 'Text_t' 0 \"\" ftitle i - 'Int_t' 0 1 compress",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Close",502,G__TNetFile_Close_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Flush",514,G__TNetFile_Flush_2_1,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsOpen",590,G__TNetFile_IsOpen_3_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TNetFile_ReadBuffer_4_1,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - buf i - - 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteBuffer",1125,G__TNetFile_WriteBuffer_5_1,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - buf i - - 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Seek",392,G__TNetFile_Seek_6_1,121,-1,-1,0,2,1,1,0,
"i - 'Seek_t' 0 - offset i 'TFile::ERelativeTo' - 0 kBeg pos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetUser",715,G__TNetFile_SetUser_7_1,121,-1,-1,0,1,1,1,0,"C - - 0 - user",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPasswd",926,G__TNetFile_SetPasswd_8_1,121,-1,-1,0,1,1,1,0,"C - - 0 - passwd",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TNetFile_DeclFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TNetFile_DeclFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TNetFile_ImplFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TNetFile_ImplFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TNetFile_Class_Version_3_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TNetFile_Class_4_2,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TNetFile_Dictionary_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TNetFile_IsA_6_2,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TNetFile_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TNetFile_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TNetFile",763,G__TNetFile_TNetFile_9_2,(int)('i'),G__get_linked_tagnum(&G__G__NetLN_TNetFile),-1,0,1,1,1,0,"u 'TNetFile' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TNetFile",889,G__TNetFile_wATNetFile_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTWebFile(void) {
   /* TWebFile */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__NetLN_TWebFile));
   G__memfunc_setup("Init",404,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TWebFile",754,G__TWebFile_TWebFile_1_0,105,G__get_linked_tagnum(&G__G__NetLN_TWebFile),-1,0,1,1,1,0,"C - - 0 - url",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TWebFile",754,G__TWebFile_TWebFile_2_0,105,G__get_linked_tagnum(&G__G__NetLN_TWebFile),-1,0,1,1,1,0,"u 'TUrl' - 0 - url",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsOpen",590,G__TWebFile_IsOpen_4_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TWebFile_ReadBuffer_5_0,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - buf i - - 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Seek",392,G__TWebFile_Seek_6_0,121,-1,-1,0,2,1,1,0,
"i - 'Seek_t' 0 - offset i 'TFile::ERelativeTo' - 0 kBeg pos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TWebFile_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TWebFile_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TWebFile_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TWebFile_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TWebFile_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TWebFile_Class_2_1,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TWebFile_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TWebFile_IsA_4_1,85,G__get_linked_tagnum(&G__G__NetLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TWebFile_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TWebFile_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TWebFile",754,G__TWebFile_TWebFile_7_1,(int)('i'),G__get_linked_tagnum(&G__G__NetLN_TWebFile),-1,0,1,1,1,0,"u 'TWebFile' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TWebFile",880,G__TWebFile_wATWebFile_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Net() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Net() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kMESS_ACK=268435456",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kMESS_ANY=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kMESS_OK=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kMESS_NOTOK=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kMESS_STRING=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kMESS_OBJECT=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kMESS_CINT=5",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_GROUPVIEW=1000",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_STOP=1001",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_FATAL=1002",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_LOGLEVEL=1003",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_LOGFILE=1004",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_LOGDONE=1005",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_STATUS=1006",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_PING=1007",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_RESET=1008",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_GETOBJECT=1009",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_TREEDRAW=1010",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_GETPACKET=1011",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kPROOF_LIMITS=1012",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_USER=2000",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_PASS=2001",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_AUTH=2002",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_FSTAT=2003",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_OPEN=2004",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_PUT=2005",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_GET=2006",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_FLUSH=2007",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_CLOSE=2008",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_STAT=2009",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_ACK=2010",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),-1,-1,1,"kROOTD_ERR=2011",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kSendBuffer=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kRecvBuffer=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kOobInline=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kKeepAlive=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kReuseAddr=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kNoDelay=5",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kNoBlock=6",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kProcessGroup=7",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kAtMark=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESockOptions),-1,-1,1,"kBytesToRead=9",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESendRecvOptions),-1,-1,1,"kDefault=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESendRecvOptions),-1,-1,1,"kOob=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__NetLN_ESendRecvOptions),-1,-1,1,"kPeek=2",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Net() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__NetLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TObjectcLcLdA = { "TObject::$" , 101 , -1 };
G__linked_taginfo G__G__NetLN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TFile = { "TFile" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TDirectory = { "TDirectory" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TInetAddress = { "TInetAddress" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TSocket = { "TSocket" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TServerSocket = { "TServerSocket" , 99 , -1 };
G__linked_taginfo G__G__NetLN_EMessageTypes = { "EMessageTypes" , 101 , -1 };
G__linked_taginfo G__G__NetLN_ESockOptions = { "ESockOptions" , 101 , -1 };
G__linked_taginfo G__G__NetLN_ESendRecvOptions = { "ESendRecvOptions" , 101 , -1 };
G__linked_taginfo G__G__NetLN_TMessage = { "TMessage" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TMonitor = { "TMonitor" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TUrl = { "TUrl" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TNetFile = { "TNetFile" , 99 , -1 };
G__linked_taginfo G__G__NetLN_TWebFile = { "TWebFile" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__Net() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_TInetAddress),sizeof(TInetAddress),-1,0,"Represents an Internet Protocol (IP) address",G__setup_memvarTInetAddress,G__setup_memfuncTInetAddress);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_TSocket),sizeof(TSocket),-1,0,"This class implements client sockets",G__setup_memvarTSocket,G__setup_memfuncTSocket);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_TServerSocket),sizeof(TServerSocket),-1,0,"This class implements server sockets",G__setup_memvarTServerSocket,G__setup_memfuncTServerSocket);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_EMessageTypes),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_ESockOptions),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_ESendRecvOptions),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_TMessage),sizeof(TMessage),-1,0,"Message buffer class",G__setup_memvarTMessage,G__setup_memfuncTMessage);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_TMonitor),sizeof(TMonitor),-1,0,"Monitor activity on a set of TSocket objects",G__setup_memvarTMonitor,G__setup_memfuncTMonitor);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_TUrl),sizeof(TUrl),-1,0,"Represents an URL",G__setup_memvarTUrl,G__setup_memfuncTUrl);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_TNetFile),sizeof(TNetFile),-1,0,"A ROOT file that reads/writes via a rootd server",G__setup_memvarTNetFile,G__setup_memfuncTNetFile);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__NetLN_TWebFile),sizeof(TWebFile),-1,0,"A ROOT file that reads via a http server",G__setup_memvarTWebFile,G__setup_memfuncTWebFile);
}
extern "C" void G__cpp_setupG__Net() {
  G__check_setup_version(51111,"G__cpp_setupG__Net()");
  G__set_cpp_environmentG__Net();
  G__cpp_setup_tagtableG__Net();

  G__cpp_setup_inheritanceG__Net();

  G__cpp_setup_typetableG__Net();

  G__cpp_setup_memvarG__Net();

  G__cpp_setup_memfuncG__Net();
  G__cpp_setup_globalG__Net();
  G__cpp_setup_funcG__Net();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Net();
  return;
}
class G__cpp_setup_initG__Net {
  public:
    G__cpp_setup_initG__Net() { G__add_setup_func("G__Net",&G__cpp_setupG__Net); }
   ~G__cpp_setup_initG__Net() { G__remove_setup_func("G__Net"); }
};
G__cpp_setup_initG__Net G__cpp_setup_initializerG__Net;

//
// File generated by /home/rdm/root/bin/rootcint at Thu Oct  8 19:50:38 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TInetAddress *&obj)
{
   // Read a pointer to an object of class TInetAddress.

   obj = (TInetAddress *) buf.ReadObject(TInetAddress::Class());
   return buf;
}

//______________________________________________________________________________
void TInetAddress::Streamer(TBuffer &R__b)
{
   // Stream an object of class TInetAddress.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      fHostname.Streamer(R__b);
      R__b >> fAddress;
      R__b >> fFamily;
      R__b >> fPort;
   } else {
      R__b.WriteVersion(TInetAddress::IsA());
      TObject::Streamer(R__b);
      fHostname.Streamer(R__b);
      R__b << fAddress;
      R__b << fFamily;
      R__b << fPort;
   }
}

//______________________________________________________________________________
void TInetAddress::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TInetAddress.

   TClass *R__cl  = TInetAddress::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fHostname.ShowMembers(R__insp, strcat(R__parent,"fHostname.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fAddress", &fAddress);
   R__insp.Inspect(R__cl, R__parent, "fFamily", &fFamily);
   R__insp.Inspect(R__cl, R__parent, "fPort", &fPort);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSocket *&obj)
{
   // Read a pointer to an object of class TSocket.

   obj = (TSocket *) buf.ReadObject(TSocket::Class());
   return buf;
}

//______________________________________________________________________________
void TSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSocket.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fSocket;
      fService.Streamer(R__b);
      fAddress.Streamer(R__b);
      fLocalAddress.Streamer(R__b);
      R__b >> fBytesSent;
      R__b >> fBytesRecv;
   } else {
      R__b.WriteVersion(TSocket::IsA());
      TNamed::Streamer(R__b);
      R__b << fSocket;
      fService.Streamer(R__b);
      fAddress.Streamer(R__b);
      fLocalAddress.Streamer(R__b);
      R__b << fBytesSent;
      R__b << fBytesRecv;
   }
}

//______________________________________________________________________________
void TSocket::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSocket.

   TClass *R__cl  = TSocket::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSocket", &fSocket);
   fService.ShowMembers(R__insp, strcat(R__parent,"fService.")); R__parent[R__ncp] = 0;
   fAddress.ShowMembers(R__insp, strcat(R__parent,"fAddress.")); R__parent[R__ncp] = 0;
   fLocalAddress.ShowMembers(R__insp, strcat(R__parent,"fLocalAddress.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fBytesSent", &fBytesSent);
   R__insp.Inspect(R__cl, R__parent, "fBytesRecv", &fBytesRecv);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TServerSocket *&obj)
{
   // Read a pointer to an object of class TServerSocket.

   obj = (TServerSocket *) buf.ReadObject(TServerSocket::Class());
   return buf;
}

//______________________________________________________________________________
void TServerSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TServerSocket.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TSocket::Streamer(R__b);
   } else {
      R__b.WriteVersion(TServerSocket::IsA());
      TSocket::Streamer(R__b);
   }
}

//______________________________________________________________________________
void TServerSocket::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TServerSocket.

   TClass *R__cl  = TServerSocket::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TSocket::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMessage *&obj)
{
   // Read a pointer to an object of class TMessage.

   obj = (TMessage *) buf.ReadObject(TMessage::Class());
   return buf;
}

//______________________________________________________________________________
void TMessage::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMessage.

   TBuffer::Streamer(R__b);
}

//______________________________________________________________________________
void TMessage::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMessage.

   TClass *R__cl  = TMessage::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fWhat", &fWhat);
   R__insp.Inspect(R__cl, R__parent, "*fClass", &fClass);
   TBuffer::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMonitor *&obj)
{
   // Read a pointer to an object of class TMonitor.

   obj = (TMonitor *) buf.ReadObject(TMonitor::Class());
   return buf;
}

//______________________________________________________________________________
void TMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMonitor.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TMonitor::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMonitor.

   TClass *R__cl  = TMonitor::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fActive", &fActive);
   R__insp.Inspect(R__cl, R__parent, "*fDeActive", &fDeActive);
   R__insp.Inspect(R__cl, R__parent, "*fReady", &fReady);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TUrl *&obj)
{
   // Read a pointer to an object of class TUrl.

   obj = (TUrl *) buf.ReadObject(TUrl::Class());
   return buf;
}

//______________________________________________________________________________
void TUrl::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUrl.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      fUrl.Streamer(R__b);
      fProtocol.Streamer(R__b);
      fHost.Streamer(R__b);
      fFile.Streamer(R__b);
      fAnchor.Streamer(R__b);
      fOptions.Streamer(R__b);
      R__b >> fPort;
   } else {
      R__b.WriteVersion(TUrl::IsA());
      TObject::Streamer(R__b);
      fUrl.Streamer(R__b);
      fProtocol.Streamer(R__b);
      fHost.Streamer(R__b);
      fFile.Streamer(R__b);
      fAnchor.Streamer(R__b);
      fOptions.Streamer(R__b);
      R__b << fPort;
   }
}

//______________________________________________________________________________
void TUrl::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TUrl.

   TClass *R__cl  = TUrl::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fUrl.ShowMembers(R__insp, strcat(R__parent,"fUrl.")); R__parent[R__ncp] = 0;
   fProtocol.ShowMembers(R__insp, strcat(R__parent,"fProtocol.")); R__parent[R__ncp] = 0;
   fHost.ShowMembers(R__insp, strcat(R__parent,"fHost.")); R__parent[R__ncp] = 0;
   fFile.ShowMembers(R__insp, strcat(R__parent,"fFile.")); R__parent[R__ncp] = 0;
   fAnchor.ShowMembers(R__insp, strcat(R__parent,"fAnchor.")); R__parent[R__ncp] = 0;
   fOptions.ShowMembers(R__insp, strcat(R__parent,"fOptions.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fPort", &fPort);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TNetFile *&obj)
{
   // Read a pointer to an object of class TNetFile.

   obj = (TNetFile *) buf.ReadObject(TNetFile::Class());
   return buf;
}

//______________________________________________________________________________
void TNetFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNetFile.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TFile::Streamer(R__b);
      fUrl.Streamer(R__b);
      fUser.Streamer(R__b);
      R__b >> fOffset;
      R__b >> fSocket;
   } else {
      R__b.WriteVersion(TNetFile::IsA());
      TFile::Streamer(R__b);
      fUrl.Streamer(R__b);
      fUser.Streamer(R__b);
      R__b << fOffset;
      R__b << fSocket;
   }
}

//______________________________________________________________________________
void TNetFile::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TNetFile.

   TClass *R__cl  = TNetFile::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fUrl.ShowMembers(R__insp, strcat(R__parent,"fUrl.")); R__parent[R__ncp] = 0;
   fUser.ShowMembers(R__insp, strcat(R__parent,"fUser.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fOffset", &fOffset);
   R__insp.Inspect(R__cl, R__parent, "*fSocket", &fSocket);
   TFile::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TWebFile *&obj)
{
   // Read a pointer to an object of class TWebFile.

   obj = (TWebFile *) buf.ReadObject(TWebFile::Class());
   return buf;
}

//______________________________________________________________________________
void TWebFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebFile.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TFile::Streamer(R__b);
      fUrl.Streamer(R__b);
      R__b >> fOffset;
   } else {
      R__b.WriteVersion(TWebFile::IsA());
      TFile::Streamer(R__b);
      fUrl.Streamer(R__b);
      R__b << fOffset;
   }
}

//______________________________________________________________________________
void TWebFile::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TWebFile.

   TClass *R__cl  = TWebFile::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fUrl.ShowMembers(R__insp, strcat(R__parent,"fUrl.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fOffset", &fOffset);
   TFile::ShowMembers(R__insp, R__parent);
}

