//*CMZ :  2.23/10 01/12/99  11.57.43  by  Fons Rademakers
//*CMZ :  2.23/09 19/11/99  13.24.19  by  Fons Rademakers
//*CMZ :  2.22/07 05/07/99  13.42.36  by  Rene Brun
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   01/07/97

#ifndef ROOT_PosixThreadInc
#define ROOT_PosixThreadInc

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// PosixThreadInc                                                       //
//                                                                      //
// Common includes for the Posix thread implementation.                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef __CINT__

#ifndef ROOT_TError
#include "TError.h"
#endif
#ifndef ROOT_TSystem
#include "TSystem.h"
#endif

#include <stdlib.h>
#include <time.h>

#ifdef LINUX
#include <pthread/mit/sys/timers.h>
#endif

#ifdef HPUX
#define PthreadDraftVersion 4
#endif


//#if (PthreadDraftVersion <= 6)
#if (PthreadDraftVersion == 4)
#define ERRNO(x) (((x) != 0) ? (TSystem::GetErrno()) : 0)
#else
#define ERRNO(x) (x)
#endif

#endif /* __CINT__ */

#endif
