//*CMZ :  2.22/07 05/07/99  15.06.42  by  Fons Rademakers
//*CMZ :  2.00/11 17/08/98  15.14.15  by  Rene Brun
//*CMZ :  1.03/09 27/11/97  16.58.25  by  Fons Rademakers
//*-- Author :    Fons Rademakers   13/08/95

#ifndef ROOT_TIterator
#define ROOT_TIterator

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
// TIterator                                                            //
//                                                                      //
// Iterator abstract base class. This base class provides the interface //
// for collection iterators.                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

class TCollection;
class TObject;

class TIterator {

protected:
   TIterator() { }
   TIterator(const TIterator &) { }

public:
   virtual TIterator &operator=(const TIterator &) { return *this; }
   virtual ~TIterator() { }
   virtual const TCollection *GetCollection() const = 0;
   virtual Option_t *GetOption() const { return ""; }
   virtual TObject *Next() = 0;
   virtual void Reset() = 0;
   TObject *operator()() { return Next(); }

   ClassDef(TIterator,0)  //Iterator abstract base class
};

#endif
