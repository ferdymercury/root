/*CMZ :  2.22/10 23/07/99  14.42.26  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
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
