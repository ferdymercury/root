/*CMZ :  2.20/04 08/12/98  16.25.42  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/****************************************************************
* assert.h
*****************************************************************/

#ifndef G__ASSERT_H
#define G__ASSERT_H

//#ifndef __CINT__
#ifndef NDEBUG

#define assert(f)                                                         \
         if(f)       NULL;                                                \
         else                                                             \
	       fprintf(stderr                                             \
		       ,"Assertion failed: FILE:%s LINE:%d\n"             \
		       ,$FILE,$LINE)
#else

#define assert(f)  NULL

#endif
//#endif

#endif
