/*CMZ :  2.24/05 16/05/2000  12.04.02  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/

#ifndef G__NUMERIC_DLL
namespace std {
#pragma include_noerr <numeric.dll>
}
#endif

#ifdef __MAKECINT__
#include <prec_stl/numeric>
#else
namespace std {
#include <numeric>
}
#endif
