/*CMZ :  2.21/08 17/03/99  13.13.37  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   17/03/99*/
/********************************************************************
* Apiif.h
********************************************************************/
#ifdef __CINT__
#error Apiif.h/C is only for compilation. Abort cint.
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
extern "C" {
#define G__ANSIHEADER
#include "G__ci.h"
extern void G__cpp_setup_tagtableG__API();
extern void G__cpp_setup_inheritanceG__API();
extern void G__cpp_setup_typetableG__API();
extern void G__cpp_setup_memvarG__API();
extern void G__cpp_setup_globalG__API();
extern void G__cpp_setup_memfuncG__API();
extern void G__cpp_setup_funcG__API();
extern void G__set_cpp_environmentG__API();
}


#include "Api.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__APILN_G__value;
extern G__linked_taginfo G__G__APILN_G__linked_taginfo;
extern G__linked_taginfo G__G__APILN_G__COMPLETIONLIST;
extern G__linked_taginfo G__G__APILN_G__MethodInfo;
extern G__linked_taginfo G__G__APILN_G__DataMemberInfo;
extern G__linked_taginfo G__G__APILN_G__FriendInfo;
extern G__linked_taginfo G__G__APILN_G__ClassInfo;
extern G__linked_taginfo G__G__APILN_G__BaseClassInfo;
extern G__linked_taginfo G__G__APILN_G__TypeInfo;
extern G__linked_taginfo G__G__APILN_G__MethodArgInfo;
extern G__linked_taginfo G__G__APILN_G__CallFunc;
extern G__linked_taginfo G__G__APILN_G__TypedefInfo;
extern G__linked_taginfo G__G__APILN_G__TokenInfo;
extern G__linked_taginfo G__G__APILN_G__TokenInfocLcLG__TokenType;
extern G__linked_taginfo G__G__APILN_G__TokenInfocLcLG__TokenProperty;
