/*CMZ :  2.20/04 08/12/98  16.25.21  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/* /% C %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file memtest.h
 ************************************************************************
 * Description:
 *  Memory leak test utility header file.
 * Comment:
 *  This header is usually un-included.
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

#ifndef G__MEMTEST_H
#define G__MEMTEST_H

/* Turns on memory leak test */
#define G__MEMTEST

/*************************************************************************
* macro replacement
*************************************************************************/
#undef malloc
#undef calloc
#undef free
#undef realloc
#undef fopen
#undef fclose

void *G__TEST_Malloc G__P((size_t size));
void *G__TEST_Calloc G__P((size_t n,size_t bsize));
void G__TEST_Free G__P((void* p));
void *G__TEST_Realloc G__P((void* p,size_t size));
int G__memanalysis G__P(());
int G__memresult G__P(());
void G__DUMMY_Free G__P((void* p));
void *G__TEST_fopen G__P((char *fname,char *mode));
int G__TEST_fclose G__P((FILE* p));

#define malloc(x) G__TEST_Malloc(x)
#define calloc(x,y) G__TEST_Calloc(x,y)
#define free(x) G__TEST_Free(x)
#define realloc(p,x) G__TEST_Realloc(p,x)
#define fopen(x,y) G__TEST_fopen(x,y)
#define fclose(x) G__TEST_fclose(x)

#endif /* G__MEMTEST_H */


/*
 * Local Variables:
 * c-tab-always-indent:nil
 * c-indent-level:2
 * c-continued-statement-offset:2
 * c-brace-offset:-2
 * c-brace-imaginary-offset:0
 * c-argdecl-indent:0
 * c-label-offset:-2
 * compile-command:"make -k"
 * End:
 */
