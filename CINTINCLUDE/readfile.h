/*CMZ :  2.22/10 23/07/99  14.42.26  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
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

