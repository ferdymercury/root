/*CMZ :  2.20/04 08/12/98  16.25.21  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Header file CallFunc.h
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



#ifndef G__CALLFUNC_H
#define G__CALLFUNC_H

#include "Api.h"

/*********************************************************************
* class G__CallFunc
*
*
*********************************************************************/
class G__CallFunc {
 public:
  ~G__CallFunc() {}
  G__CallFunc() ;
  void Init() ;

  void SetFunc(G__ClassInfo* cls,char* fname,char* args,long* poffset);
#ifndef G__OLDIMPLEMENTATION540
  void SetFuncProto(G__ClassInfo* cls,char* fname,char* argtype,long* poffset);
#endif
  // begin old interface
  void SetFunc(G__InterfaceMethod f);
#ifdef G__ASM_WHOLEFUNC
  void SetBytecode(struct G__bytecodefunc* bc);
#endif
#ifndef G__OLDIMPLEMENTATION533
  int IsValid() { return(pfunc?1:0); }
  void SetArgArray(long *p);
#endif
  void ResetArg() { para.paran=0; }
  void SetArg(long l) ;
  void SetArg(double d) ;
  // end old interface

  void Exec(void *pobject) ;
  long ExecInt(void *pobject) ;
  double ExecDouble(void *pobject) ;

#ifndef G__FONS50
  G__InterfaceMethod InterfaceMethod() { return pfunc; }
  void SetArgs(char* args);
#endif

 private:
  G__InterfaceMethod pfunc;
  G__value result;
  struct G__param para;
#ifdef G__ASM_WHOLEFUNC
  struct G__bytecodefunc *bytecode;
#endif
#ifndef G__OLDIMPLEMENTATION533
  G__MethodInfo method;
#endif
  int ExecInterpretedFunc(G__value* presult);
};


#endif
