//*CMZ :  2.20/00 12/11/98  17.11.23  by  Fons Rademakers
//*CMZ :  2.00/13 20/10/98  12.30.26  by  Fons Rademakers
//*CMZ :  2.00/11 17/08/98  15.14.15  by  Rene Brun
//*CMZ :  1.03/04 29/09/97  19.02.22  by  Fons Rademakers
//*-- Author :    Fons Rademakers   10/08/95

#ifndef ROOT_THashList
#define ROOT_THashList

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
// THashList                                                            //
//                                                                      //
// THashList implements a hybrid collection class consisting of a       //
// hash table and a list to store TObject's. The hash table is used for //
// quick access and lookup of objects while the list allows the objects //
// to be ordered. The hash value is calculated using the value returned //
// by the TObject's Hash() function. Each class inheriting from TObject //
// can override Hash() as it sees fit.                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TList
#include "TList.h"
#endif

class THashTable;


class THashList : public TList {

protected:
   THashTable   *fTable;    //Hashtable used for quick lookup of objects

public:
   THashList(Int_t capacity=TCollection::kInitHashTableCapacity, Int_t rehash=0);
   THashList(TObject *parent, Int_t capacity=TCollection::kInitHashTableCapacity,
             Int_t rehash=0);
   virtual    ~THashList();
   Float_t    AverageCollisions() const;
   void       Clear(Option_t *option="");
   void       Delete(Option_t *option="");

   TObject   *FindObject(const Text_t *name) const;
   TObject   *FindObject(TObject *obj) const;

   void       AddFirst(TObject *obj);
   void       AddFirst(TObject *obj, Option_t *opt);
   void       AddLast(TObject *obj);
   void       AddLast(TObject *obj, Option_t *opt);
   void       AddAt(TObject *obj, Int_t idx);
   void       AddAfter(TObject *after, TObject *obj);
   void       AddAfter(TObjLink *after, TObject *obj);
   void       AddBefore(TObject *before, TObject *obj);
   void       AddBefore(TObjLink *before, TObject *obj);
   void       Rehash(Int_t newCapacity);
   TObject   *Remove(TObject *obj);
   TObject   *Remove(TObjLink *lnk);

   ClassDef(THashList,0)  //Doubly linked list with hashtable for lookup
};

#endif
