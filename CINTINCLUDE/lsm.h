/*CMZ :  2.20/04 08/12/98  16.25.42  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/*************************************************************************
* lsm.h
*
* Least square method library
*
*************************************************************************/

#ifndef G__LSM_H
#define G__LSM_H

#ifndef G__LSMSL
# ifdef G__SHAREDLIB
#include <lsm.dl>
# else
#include <lsm.c>
# endif
#endif // G__LSMSL

#endif
