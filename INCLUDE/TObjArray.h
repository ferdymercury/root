//*CMZ :  2.23/11 20/12/99  12.04.33  by  Rene Brun
//*CMZ :  2.23/07 26/10/99  17.06.12  by  Fons Rademakers
//*CMZ :  2.22/07 05/07/99  18.53.11  by  Fons Rademakers
//*CMZ :  1.03/08 18/11/97  16.14.09  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/09/95

#ifndef ROOT_TObjArray
#define ROOT_TObjArray

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
// TObjArray                                                            //
//                                                                      //
// An array of TObjects. The array expands automatically when adding    //
// elements (shrinking can be done by hand).                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TSeqCollection
#include "TSeqCollection.h"
#endif


class TObjArrayIter;
class TClonesArray;


class TObjArray : public TSeqCollection {

friend class  TObjArrayIter;
friend class  TClonesArray;

private:
   TObject     **fCont;        //Array contents
   Int_t         fLowerBound;  //Lower bound of the array
   Int_t         fLast;        //Last element in array containing an object

   Bool_t        BoundsOk(const char *where, Int_t at) const;
   void          Init(Int_t s, Int_t lowerBound);
   Bool_t        OutOfBoundsError(const char *where, Int_t i) const;
   Int_t         GetAbsLast() const;

public:
   TObjArray(Int_t s = TCollection::kInitCapacity, Int_t lowerBound = 0);
   TObjArray(const TObjArray &a);
   virtual          ~TObjArray();
   virtual void     Clear(Option_t *option="");
   virtual void     Compress();
   virtual void     Delete(Option_t *option="");
   virtual void     Expand(Int_t newSize);   // expand or shrink an array
   Int_t            GetEntries() const;
   Int_t            GetEntriesFast() const {return GetAbsLast()+1;}  //only OK when no gaps
   Int_t            GetLast() const;
   TIterator       *MakeIterator(Bool_t dir = kIterForward) const;

   void             Add(TObject *obj) { AddLast(obj); }
   virtual void     AddFirst(TObject *obj);
   virtual void     AddLast(TObject *obj);
   virtual void     AddAt(TObject *obj, Int_t idx);
   virtual void     AddAtAndExpand(TObject *obj, Int_t idx);
   virtual Int_t    AddAtFree(TObject *obj);
   virtual void     AddAfter(TObject *after, TObject *obj);
   virtual void     AddBefore(TObject *before, TObject *obj);
   virtual TObject *RemoveAt(Int_t idx);
   virtual TObject *Remove(TObject *obj);

   TObject         *At(Int_t idx) const;
   TObject         *UncheckedAt(Int_t i) const { return fCont[i]; }
   TObject         *Before(TObject *obj) const;
   TObject         *After(TObject *obj) const;
   TObject         *First() const;
   TObject         *Last() const;
   virtual TObject *&operator[](Int_t i);
   Int_t            LowerBound() const { return fLowerBound; }
   Int_t            IndexOf(TObject *obj) const; // returns fLowerBound-1 if not found
   void             SetLast(Int_t last);

   virtual void     Sort(Int_t upto = kMaxInt);
   virtual Int_t    BinarySearch(TObject *obj, Int_t upto = kMaxInt); // the TObjArray has to be sorted, -1 == not found !!

   ClassDef(TObjArray,2)  //An array of objects
};


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TObjArrayIter                                                        //
//                                                                      //
// Iterator of object array.                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TObjArrayIter : public TIterator {

private:
   const TObjArray  *fArray;     //array being iterated
   Int_t             fCursor;    //current position in array
   Bool_t            fDirection; //iteration direction

   TObjArrayIter() : fArray(0) { }

public:
   TObjArrayIter(const TObjArray *arr, Bool_t dir = kIterForward);
   TObjArrayIter(const TObjArrayIter &iter);
   ~TObjArrayIter() { }
   TIterator     &operator=(const TIterator &rhs);
   TObjArrayIter &operator=(const TObjArrayIter &rhs);

   const TCollection *GetCollection() const { return fArray; }
   TObject           *Next();
   void              Reset();

   ClassDef(TObjArrayIter,0)  //Object array iterator
};


//---- inlines -----------------------------------------------------------------

inline Bool_t TObjArray::BoundsOk(const char *where, Int_t at) const
{
   return (at < fLowerBound || at-fLowerBound >= fSize)
                  ? OutOfBoundsError(where, at)
                  : kTRUE;
}

inline TObject *&TObjArray::operator[](Int_t at)
{
   if (!BoundsOk("operator[]", at))
      at = fLowerBound;
   //fLast = -2; // invalidate fLast since the result may be used as an lvalue
   return fCont[at-fLowerBound];
}

#endif
