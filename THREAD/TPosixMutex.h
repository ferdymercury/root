//*CMZ :  2.22/06 17/06/99  14.55.09  by  Rene Brun
//*CMZ :  2.00/00 04/11/97  09.57.51  by  Victor Perev
//*CMZ :  1.03/03 08/09/97  16.25.47  by  Rene Brun
//*-- Author :    Fons Rademakers   24/06/97

#ifndef ROOT_TPosixMutex
#define ROOT_TPosixMutex

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TPosixMutex                                                          //
//                                                                      //
// This class provides an interface to the posix mutex routines.        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TMutexImp
#include "TMutexImp.h"
#endif

#ifndef __CINT__
#include <pthread.h>
#else
#include "R__pthread.h"
#endif

class TPosixMutex : public TMutexImp {

friend class TPosixCondition;

private:
    pthread_mutex_t  fMutex;  // the pthread mutex
    pthread_mutex_t  fGuard ;  // the pthread guardian mutex
public:
   TPosixMutex();
   virtual ~TPosixMutex();

   Int_t  Lock();
   Int_t  UnLock();
   Int_t  TryLock();

ClassDef(TPosixMutex,0)
};

#endif
