/*CMZ :  2.24/05 16/05/2000  12.04.02  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/
#ifndef G__MAP_H
#pragma include_noerr <map.dll>
#endif

#ifdef __MAKECINT__
#include <prec_stl/map>
#else
//#include <prec_stl/map>
//#include <_map.h>  // cint can not instantiate map template body
#endif

#include <_multimap>
