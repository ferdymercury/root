/*CMZ :  2.22/10 23/07/99  14.42.26  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
/****************************************************************
* setjmp.h
*****************************************************************/
#ifndef G__SETJMP_H
#define G__SETJMP_H

// #define G__WARNING_AT_DECLARATION

class jmp_buf {
 public:
  jmp_buf(void) {
#ifdef G__WARNING_AT_DECLARATION
    fprintf(stderr,"Limitation: jmp_buf not supported\n");
#endif
  }
};

typedef jmp_buf sigjmp_buf;

setjmp(jmp_buf& buf)
{
  fprintf(stderr,"Limitation: setjmp() not supported\n");
  return(0);
}



void longjmp(jmp_buf environment,int rval)
{
  fprintf(stderr,"Limitation: longjmp() not supported\n");
}

#endif
