/*CMZ :  2.22/10 23/07/99  14.42.12  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Header file Typedf.h
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


#ifndef G__TYPEDEFINFO_H
#define G__TYPEDEFINFO_H


#include "Api.h"

/*********************************************************************
* class G__TypedefInfo
*
*
*********************************************************************/
class G__TypedefInfo : public G__TypeInfo {
 public:
  ~G__TypedefInfo() {}
  G__TypedefInfo() { Init(); }
  void Init();
  G__TypedefInfo(const char *typenamein) { Init(typenamein); }
  void Init(const char *typenamein);
  G__TypedefInfo(int typenumin) { Init(typenumin); }
  void Init(int typenumin);
  G__ClassInfo EnclosingClassOfTypedef();

  const char *Title() ;
  int IsValid();
  int SetFilePos(const char* fname);
  int Next();
};

#endif
