//*CMZ :  2.23/12 06/01/2000  11.15.32  by  Fons Rademakers
//*-- Author :    Fons Rademakers   04/01/2000

#ifndef ROOT_TRWLock
#define ROOT_TRWLock

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
// TRWLock                                                              //
//                                                                      //
// This class implements a reader/writer lock. A rwlock allows          //
// a resource to be accessed by multiple reader threads but only        //
// one writer thread.                                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TMutex
#include "TMutex.h"
#endif
#ifndef ROOT_TCondition
#include "TCondition.h"
#endif


class TRWLock : public TObject {

private:
   Int_t        fReaders;
   Int_t        fWriters;
   TMutex       fMutex;
   TCondition   fLockFree;

public:
   TRWLock();
   virtual ~TRWLock() { }

   Int_t  ReadLock();
   Int_t  ReadUnLock();
   Int_t  WriteLock();
   Int_t  WriteUnLock();

   ClassDef(TRWLock,0)  // Reader/writer lock
};

#endif
