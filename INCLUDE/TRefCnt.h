//*CMZ :  2.00/00 02/01/98  13.41.17  by  Fons Rademakers
//*CMZ :  0.03/02 14/08/95  15.59.35  by  Rene Brun
//*-- Author :    Fons Rademakers   04/08/95

#ifndef ROOT_TRefCnt
#define ROOT_TRefCnt

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
//  TRefCnt                                                             //
//                                                                      //
//  Base class for reference counted objects.                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif


class TRefCnt {

protected:
   UInt_t  fRefs;      // (1 less than) number of references

public:
   enum EReferenceFlag { kStaticInit };

   TRefCnt(Int_t initRef = 0) : fRefs((UInt_t)initRef-1) { }
   TRefCnt(EReferenceFlag) { }  // leave fRefs alone
   UInt_t   References()            { return fRefs+1; }
   void     SetRefCount(UInt_t r)   { fRefs = r-1; }
   void     AddReference()          { fRefs++; }
   UInt_t   RemoveReference()       { return fRefs--; }
};

#endif
