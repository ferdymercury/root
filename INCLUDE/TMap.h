//*CMZ :  2.22/07 05/07/99  18.52.29  by  Fons Rademakers
//*CMZ :  2.22/01 29/04/99  16.58.49  by  Fons Rademakers
//*CMZ :  2.00/12 01/10/98  12.28.44  by  Rene Brun
//*CMZ :  1.03/04 29/09/97  19.02.58  by  Fons Rademakers
//*-- Author :    Fons Rademakers   12/11/95

#ifndef ROOT_TMap
#define ROOT_TMap

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TMap                                                                 //
//                                                                      //
// TMap implements an associative array of (key,value) pairs using a    //
// hash table for efficient retrieval (therefore TMap does not conserve //
// the order of the entries). The hash value is calculated              //
// using the value returned by the keys Hash() function. Both key and   //
// value need to inherit from TObject.                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TCollection
#include "TCollection.h"
#endif


class THashTable;
class THashTableIter;
class TMapIter;
class TBrowser;

class TMap : public TCollection {

friend class  TMapIter;

private:
   THashTable   *fTable;         //Hash table used to store TAssociation's

public:
   TMap(Int_t capacity = TCollection::kInitHashTableCapacity, Int_t rehash = 0);
   virtual           ~TMap();
   void              Add(TObject *obj);
   void              Add(TObject *key, TObject *value);
   Float_t           AverageCollisions() const;
   Int_t             Capacity() const;
   void              Clear(Option_t *option="");
   Int_t             Collisions(const char *keyname) const;
   Int_t             Collisions(TObject *key) const;
   void              Delete(Option_t *option="");
   void              DeleteAll();
   TObject          *FindObject(const Text_t *keyname) const;
   TObject          *FindObject(TObject *key) const;
   TObject          *GetValue(TObject *key) const;
   TIterator        *MakeIterator(Bool_t dir = kIterForward) const;
   void              Rehash(Int_t newCapacity, Bool_t checkObjValidity = kTRUE);
   TObject          *Remove(TObject *key);

   ClassDef(TMap,1)  //A map
};


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TAssoc                                                               //
//                                                                      //
// Internal class used by TMap to store associations.                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TAssoc : public TObject {

private:
   TObject  *fKey;
   TObject  *fValue;

public:
   TAssoc(TObject *key, TObject *value) : fKey(key), fValue(value) { }
   TAssoc(const TAssoc &a) : fKey(a.fKey), fValue(a.fValue) { }
   virtual               ~TAssoc() { }
   Bool_t                IsFolder() { return kTRUE;}
   virtual void          Browse(TBrowser *b);
   const char           *GetName() const { return fKey->GetName(); }
   ULong_t               Hash() { return fKey->Hash(); }
   Bool_t                IsEqual(TObject *obj) { return fKey->IsEqual(obj); }
   TObject              *Key() const { return fKey; }
   TObject              *Value() const { return fValue; }
};


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TMapIter                                                             //
//                                                                      //
// Iterator of a map.                                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TMapIter : public TIterator {

private:
   const TMap       *fMap;         //map being iterated
   THashTableIter   *fCursor;      //current position in map
   Bool_t            fDirection;   //iteration direction

   TMapIter() : fMap(0), fCursor(0) { }

public:
   TMapIter(const TMap *map, Bool_t dir = kIterForward);
   TMapIter(const TMapIter &iter);
   ~TMapIter();
   TIterator &operator=(const TIterator &rhs);
   TMapIter  &operator=(const TMapIter &rhs);

   const TCollection *GetCollection() const { return fMap; }
   TObject           *Next();
   void               Reset();

   ClassDef(TMapIter,0)  //Map iterator
};

#endif
