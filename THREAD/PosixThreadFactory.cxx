//*CMZ :  2.00/00 08/10/97  11.53.01  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Victor Perev
//*-- Author :    Fons Rademakers   01/07/97

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
// TPosixThreadFactory                                                  //
//                                                                      //
// This is a factory for Posix thread components.                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////
#include "TPosixThreadFactory.h"
#include "TPosixMutex.h"
#include "TPosixCondition.h"
#include "TPosixThread.h"

// Force creation of TPosixThreadFactory when shared library will be loaded.
static TPosixThreadFactory gPosixThreadFactoryCreator;

ClassImp(TPosixThreadFactory)
//______________________________________________________________________________
TPosixThreadFactory::TPosixThreadFactory(const char *name, const char *title) :
                     TThreadFactory(name, title)
{
   // Create Posix thread factory. Also sets global gThreadFactory to this.

   gThreadFactory = this;
}

//______________________________________________________________________________
TMutexImp *TPosixThreadFactory::CreateMutexImp()
{
   // Return a Posix Mutex.

   return new TPosixMutex;
}

//______________________________________________________________________________
TThreadImp *TPosixThreadFactory::CreateThreadImp()
{
   // Return a Posix thread imp.

   return new TPosixThread;
}

//______________________________________________________________________________
TConditionImp *TPosixThreadFactory::CreateConditionImp(TMutexImp *m)
{
   // Return a Posix Condition variable.

   return new TPosixCondition(m);
}
