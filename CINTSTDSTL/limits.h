/*CMZ :  2.24/05 16/05/2000  12.04.02  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/

#ifndef G__LIMITS_DLL
namespace std {
#pragma include_noerr <limits.dll>
}
#endif

#ifdef __MAKECINT__
#include <prec_stl/limits>
#else
namespace std {
#include <limits>
}
#endif
