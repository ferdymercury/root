//*CMZ :  2.22/10 23/07/99  14.42.21  by  Masaharu Goto
//*-- Author :    Masaharu Goto   23/07/99
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file Typedf.cxx
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
* class G__TypedefInfo
*
*********************************************************************/
///////////////////////////////////////////////////////////////////////////
void G__TypedefInfo::Init()
{
  type = 0;
  typenum = -1;
  tagnum = -1;
  isconst = 0;
}
///////////////////////////////////////////////////////////////////////////
void G__TypedefInfo::Init(const char *typenamein)
{
  typenum = G__defined_typename(typenamein);
  if(-1!=typenum&&typenum<G__newtype.alltype) {
    tagnum = G__newtype.tagnum[typenum];
    type = G__newtype.type[typenum];
    reftype = G__newtype.reftype[typenum];
    isconst = 0;
  }
  else {
    type=0;
    tagnum= -1;
    typenum= -1;
    isconst= 0;
  }
}
///////////////////////////////////////////////////////////////////////////
void G__TypedefInfo::Init(int typenumin)
{
  typenum = typenumin;
  if(-1!=typenum&&typenum<G__newtype.alltype) {
    tagnum = G__newtype.tagnum[typenum];
    type = G__newtype.type[typenum];
    reftype = G__newtype.reftype[typenum];
    isconst = 0;
  }
  else {
    type=0;
    tagnum= -1;
    typenum= -1;
    isconst= 0;
  }
}
///////////////////////////////////////////////////////////////////////////
int G__TypedefInfo::IsValid()
{
  if(-1!=typenum&&typenum<G__newtype.alltype) {
    return(1);
  }
  else {
    return(0);
  }
}
///////////////////////////////////////////////////////////////////////////
int G__TypedefInfo::SetFilePos(const char *fname)
{
  struct G__dictposition* dict=G__get_dictpos((char*)fname);
  if(!dict) return(0);
  Init((int)dict->typenum-1);
  return(1);
}
///////////////////////////////////////////////////////////////////////////
int G__TypedefInfo::Next()
{
  Init((int)typenum+1);
  return(IsValid());
}
///////////////////////////////////////////////////////////////////////////
const char* G__TypedefInfo::Title()
{
  static char buf[G__INFO_TITLELEN];
  buf[0]='\0';
  if(IsValid()) {
    G__getcommenttypedef(buf,&G__newtype.comment[typenum],(int)typenum);
    return(buf);
  }
  else {
    return((char*)NULL);
  }
}
///////////////////////////////////////////////////////////////////////////
G__ClassInfo G__TypedefInfo::EnclosingClassOfTypedef()
{
  if(IsValid()) {
    G__ClassInfo enclosingclass(G__newtype.parent_tagnum[typenum]);
    return(enclosingclass);
  }
  else {
    G__ClassInfo enclosingclass;
    return(enclosingclass);
  }
}
///////////////////////////////////////////////////////////////////////////
