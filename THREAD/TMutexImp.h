//*CMZ :  2.23/12 26/12/99  01.25.33  by  Fons Rademakers
//*CMZ :  2.00/00 19/11/97  05.32.01  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   24/06/97

#ifndef ROOT_TMutexImp
#define ROOT_TMutexImp

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
// TMutexImp                                                            //
//                                                                      //
// This class provides an abstract interface to the OS dependent mutex  //
// classes (TPosixMutex, TSolarisMutex and TNTMutex).                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif
#ifndef ROOT_TObject
#include "TObject.h"
#endif


class TMutexImp : public TObject {

public:
   TMutexImp() { }
   virtual ~TMutexImp() { }

   virtual Int_t  Lock() = 0;
   virtual Int_t  TryLock() = 0;
   virtual Int_t  UnLock() = 0;

   ClassDef(TMutexImp,0)  // Mutex lock implementation ABC
};

#endif
