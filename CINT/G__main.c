/*CMZ :  2.21/08 17/03/99  13.13.48  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   17/03/99*/
/* /% C %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file main/G__main.c
 ************************************************************************
 * Description:
 *  C version main function
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
#include <stdio.h>

extern void G__setothermain();

int main(argc,argv)
int argc;
char *argv[];
{
  G__setothermain(0);
  return(G__main(argc,argv));
}
