/*CMZ :  2.22/10 23/07/99  14.42.26  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
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
