//*CMZ :  2.21/08 17/03/99  13.13.46  by  Masaharu Goto
//*-- Author :    Masaharu Goto   17/03/99
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file DataMbr.cxx
 ************************************************************************
 * Description:
 *  Extended Run Time Type Identification API
 ************************************************************************
 * Copyright(c) 1991~1996  [hp] Hewlett Packard Japan, All rights reserved
 * Author                  Masaharu Goto (gotom@jpn.hp.com)
 * Copyright(c) 1995~1998  Masaharu Goto (MXJ02154@niftyserve.or.jp)
 *
 * Permission to use, copy, modify and distribute this software and its
 * documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Japan Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 ************************************************************************/


#include "Api.h"
#include "common.h"

/*********************************************************************
* class G__DataMemberInfo
*
*
*********************************************************************/
///////////////////////////////////////////////////////////////////////////
void G__DataMemberInfo::Init()
{
  belongingclass = (G__ClassInfo*)NULL;
  handle = (long)(&G__global);
  index = -1;
}
///////////////////////////////////////////////////////////////////////////
void G__DataMemberInfo::Init(class G__ClassInfo &a)
{
  if(a.IsValid()) {
    belongingclass = &a;
    handle = (long)G__struct.memvar[a.Tagnum()];
    index = -1;
    G__incsetup_memvar((int)a.Tagnum());
  }
  else {
    belongingclass = (G__ClassInfo*)NULL;
    handle = 0;
    index = -1;
  }
}
///////////////////////////////////////////////////////////////////////////
void G__DataMemberInfo::Init(long handlein,long indexin
	,G__ClassInfo *belongingclassin)
{
  if(handlein) {
    handle = handlein;
    index = indexin;
    if(belongingclassin->IsValid()) belongingclass = belongingclassin;
    else                belongingclass=(G__ClassInfo*)NULL;

    /* Set type */
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    type.type = var->type[index];
    type.tagnum=var->p_tagtable[index];
    type.typenum=var->p_typetable[index];
    type.reftype=var->reftype[index];
#ifndef G__OLDIMPLEMENTATION401
    type.isconst=var->constvar[index];
#endif
  }
}
///////////////////////////////////////////////////////////////////////////
const char* G__DataMemberInfo::Name()
{
  if(IsValid()) {
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    return(var->varnamebuf[index]);
  }
  else {
    return((char*)NULL);
  }
}
///////////////////////////////////////////////////////////////////////////
const char* G__DataMemberInfo::Title()
{
  static char buf[G__INFO_TITLELEN];
  buf[0]='\0';
  if(IsValid()) {
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
#ifndef G__FONS75
    G__getcomment(buf,&var->comment[index],var->tagnum);
#else
    G__getcomment(buf,&var->comment[index],var->p_tagtable[index]);
#endif
    return(buf);
  }
  else {
    return((char*)NULL);
  }
}
///////////////////////////////////////////////////////////////////////////
long G__DataMemberInfo::Property()
{
  if(IsValid()) {
    long property=0;
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    switch(var->access[index]) {
    case G__PUBLIC: property|=G__BIT_ISPUBLIC; break;
    case G__PROTECTED: property|=G__BIT_ISPROTECTED; break;
    case G__PRIVATE: property|=G__BIT_ISPRIVATE; break;
    }
    if(G__LOCALSTATIC==var->statictype[index]) property|=G__BIT_ISSTATIC;
    if(G__PARAREFERENCE==var->reftype[index]) property|=G__BIT_ISREFERENCE;
    if(isupper(var->type[index])) property|=G__BIT_ISPOINTER;
    if(var->constvar[index]&G__CONSTVAR) property|=G__BIT_ISCONSTANT;
    if(var->constvar[index]&G__PCONSTVAR) property|=G__BIT_ISPCONSTANT;
    if(var->paran[index]) property|=G__BIT_ISARRAY;
    return(property);
  }
  else {
    return(0);
  }
}
///////////////////////////////////////////////////////////////////////////
long G__DataMemberInfo::Offset()
{
  if(IsValid()) {
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    return(var->p[index]);
  }
  else {
    return(-1);
  }
}
///////////////////////////////////////////////////////////////////////////
int G__DataMemberInfo::ArrayDim()
{
  if(IsValid()) {
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    return(var->paran[index]);
  }
  else {
    return(-1);
  }
}
///////////////////////////////////////////////////////////////////////////
int G__DataMemberInfo::MaxIndex(int dim)
{
  if(IsValid()) {
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    if(0<=dim&&dim<var->paran[index]) {
      if(dim) {
	return(var->varlabel[index][dim+1]);
      }
      else {
	return((var->varlabel[index][1]+1)/var->varlabel[index][0]);
      }
    }
    else {
      return(-1);
    }
  }
  else {
    return(-1);
  }
}
///////////////////////////////////////////////////////////////////////////
int G__DataMemberInfo::IsValid()
{
  if(handle) {
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    if(0<=index&&index<var->allvar) return(1);
  }
  return(0);
}
///////////////////////////////////////////////////////////////////////////
int G__DataMemberInfo::SetFilePos(const char* fname)
{
  struct G__dictposition* dict=G__get_dictpos((char*)fname);
  if(!dict) return(0);
  handle = (long)dict->var;
  index = (long)(dict->ig15-1);
  belongingclass=(G__ClassInfo*)NULL;
  return(1);
}
///////////////////////////////////////////////////////////////////////////
int G__DataMemberInfo::Next()
{
  if(handle) {
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    ++index;
    if(var->allvar<=index) {
#ifndef G__FONS75
      int t = var->tagnum;
#endif
      var=var->next;
      if(var) {
#ifndef G__FONS75
	var->tagnum=t;
#endif
	index=0;
	handle=(long)var;
      }
      else {
	handle=0;
	index = -1;
      }
    }
    if(IsValid()) {
      type.type = var->type[index];
      type.tagnum=var->p_tagtable[index];
      type.typenum=var->p_typetable[index];
      type.reftype=var->reftype[index];
#ifndef G__OLDIMPLEMENTATION401
      type.isconst=var->constvar[index];
#endif
      return(1);
    }
    else {
      return(0);
    }
  }
  else {
    return(0);
  }
}
///////////////////////////////////////////////////////////////////////////
const char* G__DataMemberInfo::FileName() {
#ifdef G__VARIABLEFPOS
  if(IsValid()) {
    struct G__var_array *var;
    var = (struct G__var_array*)handle;
    if(var->filenum[index]>=0) {
      return(G__srcfile[var->filenum[index]].filename);
    }
    else {
      return("(compiled)");
    }
  }
  else {
    return((char*)NULL);
  }
#else
  return((char*)NULL);
#endif
}
///////////////////////////////////////////////////////////////////////////
