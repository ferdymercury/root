//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   01/07/97

#ifndef ROOT_PosixThreadInc
#define ROOT_PosixThreadInc

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// PosixThreadInc                                                       //
//                                                                      //
// Common includes for the Posix thread implementation.                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TError.h"

#include <stdlib.h>
#include <errno.h>
#include <time.h>

#ifdef LINUX
#include <pthread/mit/sys/timers.h>
#endif

#ifdef HPUX
#define PthreadDraftVersion 4
#endif


#if (PthreadDraftVersion <= 6)
#define ERRNO(x) (((x) != 0) ? (errno) : 0)
#else
#define ERRNO(x) (x)
#endif

#endif
