/*CMZ :  2.24/05 16/05/2000  12.03.57  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/
/**************************************************************************
* readfile.h
*
**************************************************************************/
#ifndef G__READFILE_H
#define G__READFILE_H


# ifndef G__READFILESL

#  ifdef G__SHAREDLIB
#pragma include_noerr <ReadF.dl>
#   ifndef READFILE_H
#include <ReadF.C>
#   endif
#  else
#   ifndef READFILE_H
#include <ReadF.C>
#   endif
#  endif

# endif

#endif

