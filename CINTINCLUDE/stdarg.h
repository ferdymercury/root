/*CMZ :  2.23/10 10/12/99  18.00.16  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
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
