//*CMZ :  2.23/12 26/12/99  01.25.33  by  Fons Rademakers
//*CMZ :  2.00/00 19/11/97  05.33.51  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   24/06/97

#ifndef ROOT_TConditionImp
#define ROOT_TConditionImp

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
   TConditionImp() { }
   virtual ~TConditionImp() { }

   virtual Int_t  Wait() = 0;
   virtual Int_t  TimedWait(ULong_t secs, ULong_t nanoSecs = 0) = 0;
   virtual Int_t  Signal() = 0;
   virtual Int_t  Broadcast() = 0;

   ClassDef(TConditionImp,0)  // Condition variable implementation ABC
};

#endif
