/*CMZ :  2.20/04 08/12/98  16.25.42  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/****************************************************************
* stdarg.h
*****************************************************************/
#ifndef G__STDARG_H
#define G__STDARG_H

typedef double *va_list;

void va_start(va_list listptr,int dummy)
{
	fprintf(stderr,"Limitation: va_start(),va_arg(),va_end() not supported\n");
}

#endif
