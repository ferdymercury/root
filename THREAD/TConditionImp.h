//*CMZ :  2.00/00 19/11/97  05.33.51  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   24/06/97

#ifndef ROOT_TConditionImp
#define ROOT_TConditionImp

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
// TConditionImp                                                        //
//                                                                      //
// This class provides an abstract interface to the OS dependent        //
// condition classes (TPosixCondition, TSolarisCondition and            //
// TNTCondition).                                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif
#ifndef ROOT_TObject
#include "TObject.h"
#endif


class TConditionImp : public TObject {

public:
   TConditionImp(){}
   virtual ~TConditionImp(){}

   virtual Int_t  Wait() = 0;
   virtual Int_t  TimedWait(ULong_t secs, ULong_t nanoSecs = 0) = 0;
   virtual Int_t  Signal() = 0;
   virtual Int_t  Broadcast() = 0;

ClassDef(TConditionImp,0)
};

#endif
