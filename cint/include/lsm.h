/*CMZ :  2.24/05 16/05/2000  12.03.57  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/
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
