//*CMZ :  1.03/09 07/12/97  13.25.36  by  Fons Rademakers
//*-- Author :    Fons Rademakers   26/09/95

#ifndef ROOT_THashTable
#define ROOT_THashTable

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
// THashTable                                                           //
//                                                                      //
// THashTable implements a hash table to store TObject's. The hash      //
// value is calculated using the value returned by the TObject's        //
// Hash() function. Each class inheriting from TObject can override     //
// Hash() as it sees fit.                                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TCollection
#include "TCollection.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif

class TList;
class TListIter;
class THashTableIter;


class THashTable : public TCollection {

friend class  THashTableIter;

private:
   TList     **fCont;          //Hash table (table of lists)
   Int_t       fEntries;       //Number of objects in table
   Int_t       fUsedSlots;     //Number of used slots
   Int_t       fRehashLevel;   //Average collision rate which triggers rehash

   Int_t       GetHashValue(TObject *obj) const;
   Int_t       GetHashValue(TString &s) { return s.Hash() % fSize; }
   Int_t       GetHashValue(const char *str) const
                  { TString s = str; return s.Hash() % fSize; }

public:
   THashTable(Int_t capacity = TCollection::kInitHashTableCapacity, Int_t rehash = 0);
   virtual       ~THashTable();
   void          Add(TObject *obj);
   Float_t       AverageCollisions() const;
   void          Clear(Option_t *option="");
   Int_t         Collisions(const char *name) const;
   Int_t         Collisions(TObject *obj) const;
   void          Delete(Option_t *option="");
   TObject      *FindObject(const Text_t *name) const;
   TObject      *FindObject(TObject *obj) const;
   Int_t         GetSize() const { return fEntries; }
   TIterator    *MakeIterator(Bool_t dir = kIterForward) const;
   void          Rehash(Int_t newCapacity, Bool_t checkObjValidity = kTRUE);
   TObject      *Remove(TObject *obj);

   ClassDef(THashTable,0)  //A hash table
};

inline Float_t THashTable::AverageCollisions() const
{
   if (fUsedSlots)
      return ((Float_t)fEntries)/fUsedSlots;
   else
      return 0.0;
}

inline Int_t THashTable::GetHashValue(TObject *obj) const
{
   Int_t i = Int_t(obj->Hash() % fSize);  // need intermediary i for Linux g++
   return i;
}


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// THashTableIter                                                       //
//                                                                      //
// Iterator of hash table.                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class THashTableIter : public TIterator {

private:
   const THashTable *fTable;       //hash table being iterated
   Int_t             fCursor;      //current position in table
   TListIter        *fListCursor;  //current position in collision list
   Bool_t            fDirection;   //iteration direction

   THashTableIter() : fTable(0), fListCursor(0) { }
   Int_t             NextSlot();

public:
   THashTableIter(const THashTable *ht, Bool_t dir = kIterForward);
   ~THashTableIter();
   const TCollection *GetCollection() const { return fTable; }
   TObject           *Next();
   void               Reset();

   ClassDef(THashTableIter,0)  //Hash table iterator
};

#endif
