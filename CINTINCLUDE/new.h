/*CMZ :  2.21/08 17/03/99  13.13.52  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   17/03/99*/
/****************************************************************
* new.h
*****************************************************************/
#ifndef G__NEW_H
#define G__NEW_H

#include <stdio.h>

// work around ::operator new(size)
void* operatornew(size_t s) {
  return malloc(s);
}
//void* operatornew(unsigned long s) {return malloc(s);}

// work around ::operator delete(buffer)
void operatordelete(void* p) {
  if(p) delete p;
}

// set_new_handler is a dummy function that is provided to
// allow interpretation of the Standard Template Library (STL).
typedef void (*new_handler)();
new_handler set_new_handler(new_handler x) {return x;}
new_handler set_new_handler(long x) {return((new_handler)x);}

#endif
