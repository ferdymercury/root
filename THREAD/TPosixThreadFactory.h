//*CMZ :  2.23/12 26/12/99  02.04.32  by  Fons Rademakers
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Victor Perev
//*-- Author :    Fons Rademakers   01/07/97

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

#ifndef ROOT_TPosixThreadFactory
#define ROOT_TPosixThreadFactory

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TPosixThreadFactory                                                  //
//                                                                      //
// This is a factory for Posix thread components.                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TThreadFactory
#include "TThreadFactory.h"
#endif

class TMutexImp;
class TConditionImp;
class TThreadImp;


class TPosixThreadFactory : public TThreadFactory {

public:
   TPosixThreadFactory(const char *name = "Posix", const char *title = "Posix Thread Factory");
   virtual ~TPosixThreadFactory() { }

   virtual TMutexImp      *CreateMutexImp();
   virtual TConditionImp  *CreateConditionImp(TMutexImp *m);
   virtual TThreadImp     *CreateThreadImp();

   ClassDef(TPosixThreadFactory,0)  // Posix thread factory
};

#endif
