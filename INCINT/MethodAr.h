/*CMZ :  2.22/10 23/07/99  14.42.12  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Header file MethodAr.h
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


#ifndef G__METHODARGINFO_H
#define G__METHODARGINFO_H

#include "Api.h"

/*********************************************************************
* class G__MethodArgInfo
*
*
*********************************************************************/
class G__MethodArgInfo {
 public:
  ~G__MethodArgInfo() {}
  void Init(class G__MethodInfo &a);
  G__MethodArgInfo(class G__MethodInfo &a) : type() { Init(a); }

  const char *Name();
  G__TypeInfo* Type() { return(&type); }
  long Property();
  char *DefaultValue();
  G__MethodInfo* ArgOf() { return(belongingmethod); }
  int IsValid();
  int Next();

 private:
  long argn;
  G__MethodInfo *belongingmethod;
  G__TypeInfo type;

 public:
  G__MethodArgInfo() {}

};

#endif
