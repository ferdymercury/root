/*CMZ :  2.23/10 10/12/99  18.00.16  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
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
