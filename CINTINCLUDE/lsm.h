/*CMZ :  2.21/08 17/03/99  13.13.52  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   17/03/99*/
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
