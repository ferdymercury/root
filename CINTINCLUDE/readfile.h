/*CMZ :  2.20/04 08/12/98  16.25.42  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
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

