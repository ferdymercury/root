/*CMZ :  2.24/05 16/05/2000  12.04.02  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/
#ifndef G__FUNCTIONAL_DLL
namespace std {
#pragma include_noerr <functional.dll>
}
#endif

#ifdef __MAKECINT__
#include <prec_stl/functional>
#else
namespace std {
#include <function.h>
}
#endif
