/*CMZ :  2.23/10 10/12/99  18.00.16  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
/****************************************************************
* assert.h
*****************************************************************/

#ifndef G__ASSERT_H
#define G__ASSERT_H

#ifndef __CINT__
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
#endif

#endif
