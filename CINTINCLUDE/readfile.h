/*CMZ :  2.23/10 10/12/99  18.00.16  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
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

