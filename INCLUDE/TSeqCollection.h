//*CMZ :  2.23/07 26/10/99  17.09.09  by  Fons Rademakers
//*CMZ :  1.03/05 02/10/97  15.04.02  by  Fons Rademakers
//*-- Author :    Fons Rademakers   20/08/95

#ifndef ROOT_TSeqCollection
#define ROOT_TSeqCollection

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
// TSeqCollection                                                       //
//                                                                      //
// Sequenceable collection abstract base class. TSeqCollection's have   //
// an ordering relation, i.e. there is a first and last element.        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TCollection
#include "TCollection.h"
#endif


class TSeqCollection : public TCollection {

protected:
   Bool_t            fSorted;

   TSeqCollection() { }
   TSeqCollection(TObject *parent) : TCollection(parent) { }
   virtual void      Changed() { fSorted = kFALSE; }

public:
   virtual           ~TSeqCollection() { }
   virtual void      Add(TObject *obj) { AddLast(obj); }
   virtual void      AddFirst(TObject *obj) = 0;
   virtual void      AddLast(TObject *obj) = 0;
   virtual void      AddAt(TObject *obj, Int_t idx) = 0;
   virtual void      AddAfter(TObject *after, TObject *obj) = 0;
   virtual void      AddBefore(TObject *before, TObject *obj) = 0;
   virtual void      RemoveFirst() { Remove(First()); }
   virtual void      RemoveLast() { Remove(Last()); }
   virtual TObject  *RemoveAt(Int_t idx) { return Remove(At(idx)); }
   virtual void      RemoveAfter(TObject *after) { Remove(After(after)); }
   virtual void      RemoveBefore(TObject *before) { Remove(Before(before)); }

   virtual TObject  *At(Int_t idx) const = 0;
   virtual TObject  *Before(TObject *obj) const = 0;
   virtual TObject  *After(TObject *obj) const = 0;
   virtual TObject  *First() const = 0;
   virtual TObject  *Last() const = 0;
   Int_t             LastIndex() const { return GetSize() - 1; }
   virtual Int_t     IndexOf(TObject *obj) const; // returns -1 if not found
   Bool_t            IsSorted() { return fSorted; }

   static Int_t      ObjCompare(TObject *a, TObject *b);
   static void       QSort(TObject **a, Int_t first, Int_t last);
   static void       QSort(TObject **a, TObject **b, Int_t first, Int_t last);

   ClassDef(TSeqCollection,0)  //Sequenceable collection ABC
};

#endif
