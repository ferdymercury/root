//*CMZ :  2.00/00 17/11/97  22.36.02  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Victor Perev
//*-- Author :    Fons Rademakers   26/06/97

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

#ifndef ROOT_TThreadFactory
#define ROOT_TThreadFactory

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TThreadFactory                                                       //
//                                                                      //
// This ABC is a factory for thread components. Depending on which      //
// factory is active one gets either Posix, Solaris or WinNT threads.   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TMutexImp;
class TConditionImp;
class TThreadImp;
class TThread;

class TThreadFactory : public TNamed {

public:
   TThreadFactory(const char *name = "Unknown", const char *title = "Unknown Thread Factory");
   virtual ~TThreadFactory() { }

   virtual TMutexImp      *CreateMutexImp() = 0;
   virtual TConditionImp  *CreateConditionImp(TMutexImp *m) = 0;
   virtual TThreadImp     *CreateThreadImp() = 0;

ClassDef(TThreadFactory,0)
};

R__EXTERN TThreadFactory *gThreadFactory;

#endif



