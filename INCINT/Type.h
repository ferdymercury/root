/*CMZ :  2.21/08 17/03/99  13.13.37  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   17/03/99*/
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Header file Type.h
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


#ifndef G__TYPEINFO_H
#define G__TYPEINFO_H


#include "Api.h"

/*********************************************************************
* class G__TypeInfo
*
*********************************************************************/
class G__TypeInfo : public G__ClassInfo  {
  friend class G__DataMemberInfo;
  friend class G__MethodInfo;
  friend class G__MethodArgInfo;
 public:
  ~G__TypeInfo() {}
  G__TypeInfo(const char *typenamein) : G__ClassInfo() { Init(typenamein); }
  G__TypeInfo() : G__ClassInfo() { type=0; typenum= -1; reftype=0; isconst=0; }
  void Init(const char *typenamein);
  int operator==(const G__TypeInfo& a);
  int operator!=(const G__TypeInfo& a);
  const char *Name();
  const char *TrueName();
  int Size();
  long Property();
  int IsValid();
  void *New();

  int Typenum() { return(typenum); }
  int Type() { return(type); }
 protected:
  long type;
  long typenum;
  long reftype;
#ifndef G__OLDIMPLEMENTATION401
  long isconst;
#endif

 private:
  int Next() { return(0); } // prohibit use of next
};


#endif
