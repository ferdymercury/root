/*CMZ :  2.24/05 16/05/2000  12.03.57  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/
/**************************************************************************
* array.h
*
* Array class
*
*  Constructor, copy constructor, destructor, operator overloading
* function overloading, reference type
*
**************************************************************************/
#ifndef G__ARRAY_H
#define G__ARRAY_H

#pragma security level0

#include <math.h>
#include <stdlib.h>
#include <iostream.h>

#ifndef G__ARRAYSL
# ifdef G__SHAREDLIB
#pragma include_noerr <array.dl>
#  ifndef G__ARRAYSL
#include <array.c>
#  endif
# else
#include <array.c>
# endif
#endif // G__ARRAYSL

#include <darray.h>
#include <complex.h>

#ifndef G__CARRAYSL
# ifdef G__SHAREDLIB
#pragma include_noerr <carray.dl>
#  ifndef G__CARRAYSL
#include <carray.c>
#  endif
# else
#include <carray.c>
# endif
#endif // G__CARRAYSL

#include <carray.h>
#include <graphbuf.h>
#include <arrayiostream.h>

#endif
