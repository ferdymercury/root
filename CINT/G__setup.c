/*CMZ :  2.20/04 08/12/98  16.25.38  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file main/G__setup.C
 ************************************************************************
 * Description:
 *  Archived precompiled library initialization routine
 ************************************************************************
 * Copyright(c) 1991~1996  [hp] Hewlett-Packard Japan, All rights reserved
 * Author                  Masaharu Goto (gotom@jpn.hp.com)
 * Copyright(c) 1995~1997  Masaharu Goto (MXJ02154@niftyserve.or.jp)
 *
 * Permission to use, copy, modify and distribute this software and its
 * documentation for non-commercial purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Japan Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 ************************************************************************/

int G__globalsetup() {
#ifdef G__CPPLINK_ON
  G__cpp_setup();
#endif
#ifdef G__CLINK_ON
  G__c_setup();
#endif
  return(0);
}

