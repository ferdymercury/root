//*CMZ :  1.03/04 29/09/97  19.03.53  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/08/95

#ifndef ROOT_TOrdCollection
#define ROOT_TOrdCollection

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
// TOrdCollection                                                       //
//                                                                      //
// Ordered collection.                                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TSeqCollection
#include "TSeqCollection.h"
#endif

class TOrdCollectionIter;


class TOrdCollection : public TSeqCollection {

friend class  TOrdCollectionIter;

private:
   TObject  **fCont;
   Int_t      fCapacity;
   Int_t      fGapStart;
   Int_t      fGapSize;

   Int_t      PhysIndex(Int_t idx) const;
   Int_t      LogIndex(Int_t idx) const;
   void       MoveGapTo(Int_t newGapStart);
   Bool_t     IllegalIndex(const char *method, Int_t idx) const;
   void       Init(Int_t capacity);
   Bool_t     LowWaterMark() const;
   void       SetCapacity(Int_t newCapacity);

public:
   enum { kDefaultCapacity = 1, kMinExpand = 8, kShrinkFactor = 2 };

   TOrdCollection(Int_t capacity = kDefaultCapacity);
   ~TOrdCollection();
   void          Clear(Option_t *option="");
   void          Delete(Option_t *option="");
   Int_t         IndexOf(TObject *obj) const; // returns -1 if not found
   TIterator    *MakeIterator(Bool_t dir = kIterForward) const;

   void          AddFirst(TObject *obj);
   void          AddLast(TObject *obj);
   void          AddAt(TObject *obj, Int_t idx);
   void          AddAfter(TObject *after, TObject *obj);
   void          AddBefore(TObject *before, TObject *obj);
   void          PutAt(TObject *obj, Int_t idx);
   void          RemoveAt(Int_t idx);
   TObject      *Remove(TObject *obj);

   TObject      *At(Int_t idx) const;
   TObject      *Before(TObject *obj) const;
   TObject      *After(TObject *obj) const;
   TObject      *First() const;
   TObject      *Last() const;

   void          Sort();
   Int_t         BinarySearch(TObject *obj);

   ClassDef(TOrdCollection,0)  //An ordered collection
};


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TOrdCollectionIter                                                   //
//                                                                      //
// Iterator of ordered collection.                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TOrdCollectionIter : public TIterator {

private:
   const TOrdCollection  *fCol;       //collection being iterated
   Int_t                  fCursor;    //current position in collection
   Bool_t                 fDirection; //iteration direction

   TOrdCollectionIter() : fCol(0) { }

public:
   TOrdCollectionIter(const TOrdCollection *col, Bool_t dir = kIterForward);
   ~TOrdCollectionIter() { }
   const TCollection *GetCollection() const { return fCol; }
   TObject           *Next();
   void              Reset();

   ClassDef(TOrdCollectionIter,0)  //Ordered collection iterator
};


//---- inlines -----------------------------------------------------------------

inline Bool_t TOrdCollection::LowWaterMark() const
{
   return (fSize < (fCapacity / 4) && fSize > TCollection::kInitCapacity);
}

inline Int_t TOrdCollection::PhysIndex(Int_t idx) const
   { return (idx < fGapStart) ? idx : idx + fGapSize; }

inline Int_t TOrdCollection::LogIndex(Int_t idx) const
   { return (idx < fGapStart) ? idx : idx - fGapSize; }

#endif

