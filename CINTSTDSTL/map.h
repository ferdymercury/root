/*CMZ :  2.23/10 10/12/99  18.00.23  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
// map
namespace std {

#ifndef G__MAP_H
#pragma include_noerr <map.dll>
#endif

#ifdef __MAKECINT__
#include <prec_stl/map>
#else
#include <prec_stl/map>
//#include <_map.h>  // cint can not instantiate map template body
#endif

}

#include <multimap>
