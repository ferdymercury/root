/*CMZ :  2.24/05 16/05/2000  12.03.58  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/
// exception

#ifndef G__EXCEPTION_DLL
namespace std {
#pragma include_noerr <exception.dll>
}
#endif

#ifdef __MAKECINT__

#include <prec_stl/exception>

#else

#ifndef G__EXCEPTION_DLL
namespace std {
#include <_exception.h>
}
#endif

#endif

