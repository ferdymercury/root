/*CMZ :  2.20/04 08/12/98  16.25.21  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Header file BaseCls.h
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


#ifndef G__BaseClassInfo_H
#define G__BaseClassInfo_H


#include "Api.h"

/*********************************************************************
* class G__BaseClassInfo
*
* Rene says OK
*
*********************************************************************/
class G__BaseClassInfo : public G__ClassInfo {
 public:
  ~G__BaseClassInfo() {}
  G__BaseClassInfo(G__ClassInfo &a);
  void Init(G__ClassInfo &a);

  long Offset() ;
  long Property();
  int IsValid();
  int Next();

 private:
  long basep;
  long derivedtagnum;
};


#endif
