//*CMZ :  2.00/11 17/08/98  15.14.15  by  Rene Brun
//*CMZ :  1.03/09 27/11/97  16.58.25  by  Fons Rademakers
//*-- Author :    Fons Rademakers   13/08/95

#ifndef ROOT_TIterator
#define ROOT_TIterator

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

private:
   TIterator(const TIterator &);      // private and not-implemented
   void operator=(const TIterator &); // don't allow copy or assignment of
                                      // iterators, create always a new one

protected:
   TIterator() { }

public:
   virtual ~TIterator() { }
   virtual const TCollection *GetCollection() const = 0;
   virtual Option_t *GetOption() const { return ""; }
   virtual TObject *Next() = 0;
   virtual void Reset() = 0;
   TObject *operator()() { return Next(); }

   ClassDef(TIterator,0)  //Iterator abstract base class
};

#endif
