//*CMZ :  2.20/05 13/12/98  17.40.45  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  16.39.48  by  Rene Brun
//*CMZ :  2.00/10 27/07/98  19.15.31  by  Fons Rademakers
//*CMZ :  2.00/00 22/02/98  16.58.15  by  Rene Brun
//*CMZ :  1.03/09 03/12/97  02.00.05  by  Fons Rademakers
//*-- Author :    Fons Rademakers   13/08/95

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
// Collection abstract base class. This class describes the base        //
// protocol all collection classes have to implement. The ROOT          //
// collection classes always store pointers to objects that inherit     //
// from TObject. They never adopt the objects. Therefore, it is the     //
// user's responsability to take care of deleting the actual objects    //
// once they are not needed anymore. In exceptional cases, when the     //
// user is 100% sure nothing else is referencing the objects in the     //
// collection, one can delete all objects and the collection at the     //
// same time using the Delete() function.                               //
//                                                                      //
// Collections can be iterated using an iterator object (see            //
// TIterator). Depending on the concrete collection class there may be  //
// some additional methods of iterating. See the repective classes.     //
//                                                                      //
// TCollection inherits from TObject since we want to be able to have   //
// collections of collections.                                          //
//                                                                      //
// In a later release the collections may become templatized.           //
//                                                                      //
//Begin_Html
/*
<img src="gif/tcollection_classtree.gif">
*/
//End_Html
//////////////////////////////////////////////////////////////////////////

#include "TCollection.h"
#include "TClass.h"
#include "TROOT.h"
#include "TBrowser.h"
#include "TObjectTable.h"

TCollection  *TCollection::fgCurrentCollection = 0;
TObjectTable *TCollection::fgGarbageCollection = 0;
Bool_t        TCollection::fgEmptyingGarbage   = kFALSE;
Int_t         TCollection::fgGarbageStack      = 0;

ClassImp(TCollection)
ClassImp(TIter)

//______________________________________________________________________________
void TCollection::AddAll(TCollection *col)
{
   // Add all objects from collection col to this collection.

   TIter next(col);
   TObject *obj;

   while ((obj = next()))
      Add(obj);
}

//______________________________________________________________________________
void TCollection::AddVector(TObject *va_(obj1), ...)
{
   // Add all arguments to this collection.

   va_list ap;
   va_start(ap, va_(obj1));
   TObject *obj;

   Add(va_(obj1));
   while ((obj = va_arg(ap, TObject *)))
      Add(obj);
   va_end(ap);
}

//______________________________________________________________________________
Bool_t TCollection::AssertClass(TClass *cl) const
{
   // Make sure all objects in this collection inherit from class cl.

   TObject *obj;
   TIter    next(this);
   Bool_t   error = kFALSE;

   if (!cl) {
      Error("AssertClass", "class == 0");
      return kTRUE;
   }

   for (int i = 0; (obj = next()); i++)
      if (!obj->InheritsFrom(cl)) {
         Error("AssertClass", "element %d is not an instance of class %s (%s)",
               i, cl->GetName(), obj->ClassName());
         error = kTRUE;
      }
   return error;
}

//______________________________________________________________________________
void TCollection::Browse(TBrowser *b)
{
   // Browse this collection (called by TBrowser).
   // If b=0, there is no Browse call TObject::Browse(0) instead.
   //         This means TObject::Inspect() will be invoked indirectly

   TIter next(this);
   TObject *obj;

   if (b)
      while ((obj = next())) b->Add(obj);
   else
      TObject::Browse(b);
}

//______________________________________________________________________________
void TCollection::Draw(Option_t *option)
{
   // Draw all objects in this collection.

   this->ForEach(TObject,Draw)(option);
}

//______________________________________________________________________________
void TCollection::Dump()
{
   // Dump all objects in this collection.

   this->ForEach(TObject,Dump)();
}

//______________________________________________________________________________
TObject *TCollection::FindObject(const Text_t *name) const
{
   // Find an object in this collection using its name. Requires a sequential
   // scan till the object has been found. Returns 0 if object with specified
   // name is not found.

   TIter next(this);
   TObject *obj;

   while ((obj = next()))
      if (!strcmp(name, obj->GetName())) return obj;
   return 0;
}

//______________________________________________________________________________
TObject *TCollection::operator()(const Text_t *name) const
{
  // Find an object in this collection by name.

  return FindObject(name);
}

//______________________________________________________________________________
TObject *TCollection::FindObject(TObject *obj) const
{
   // Find an object in this collection using the object's IsEqual()
   // member function. Requires a sequential scan till the object has
   // been found. Returns 0 if object is not found.
   // Typically this function is overridden by a more efficient version
   // in concrete collection classes (e.g. THashTable).

   TIter next(this);
   TObject *ob;

   while ((ob = next()))
      if (ob->IsEqual(obj)) return ob;
   return 0;
}

//______________________________________________________________________________
Int_t TCollection::GrowBy(Int_t delta) const
{
  // Increase the collection's capacity by delta slots.

  if (delta < 0) {
     Error("GrowBy", "delta < 0");
     delta = Capacity();
  }
  return Capacity() + TMath::Range(2, kMaxInt - Capacity(), delta);
}

//______________________________________________________________________________
Bool_t  TCollection::IsArgNull(const char *where, TObject *obj) const
{
   // Returns true if object is a null pointer.

   return obj ? kFALSE : (Error(where, "argument is a null pointer"), kTRUE);
}

//______________________________________________________________________________
void TCollection::ls(Option_t *option)
{
   // List (ls) all objects in this collection.

   this->ForEach(TObject,ls)(option);
}

//______________________________________________________________________________
void TCollection::Paint(Option_t *)
{
   // Paint all objects in this collection.

   this->ForEach(TObject,Paint)((Option_t *)TObjectPaint_nxt.GetOption());
}

//______________________________________________________________________________
void TCollection::Print(Option_t *option)
{
   // Print all objects in this collection.

   this->ForEach(TObject,Print)(option);
}

//______________________________________________________________________________
void TCollection::RecursiveRemove(TObject *obj)
{
   // Remove object from this collection and recursively remove the object
   // from all other objects (and collections).

   if (!obj) return;

   // Scan list and remove obj in the list itself
   while (Remove(obj))
      ;

   // Scan again the list and invoke RecursiveRemove for all objects
   TIter next(this);
   TObject *object;

   while ((object = next())) {
      if (object->TestBit(kNotDeleted)) object->RecursiveRemove(obj);
   }
}

//______________________________________________________________________________
void TCollection::RemoveAll(TCollection *col)
{
   // Remove all objects in collection col from this collection.

   TIter next(col);
   TObject *obj;

   while ((obj = next()))
      Remove(obj);
}

//_______________________________________________________________________
void TCollection::Streamer(TBuffer &b)
{
   // Stream all objects in the collection to or from the I/O buffer.

   Int_t nobjects;
   TObject *obj;

   if (b.IsReading()) {
      b.ReadVersion();   // Version_t v = b.ReadVersion();
      b >> nobjects;
      for (Int_t i = 0; i < nobjects; i++) {
         b >> obj;
         Add(obj);
      }
   } else {
      b.WriteVersion(TCollection::IsA());
      nobjects = GetSize();
      b << nobjects;

      TIter next(this);

      while ((obj = next())) {
         b << obj;
      }
   }
}

//______________________________________________________________________________
void TCollection::Write(const Text_t *name, Int_t option, Int_t bsize)
{
   // Write all objects in this collection. By default all objects in
   // the collection are written individually (each object gets its
   // own key). To write all objects using one key specify a name and
   // set option to kSingleKey (i.e. 1).

   if ((option & kSingleKey)) {
      TObject::Write(name, option, bsize);
   } else {
      this->ForEach(TObject,Write)(name, option, bsize);
   }
}

// -------------------- Static data members access -----------------------------
//______________________________________________________________________________
TCollection *TCollection::GetCurrentCollection()
{
   return fgCurrentCollection;
}

//______________________________________________________________________________
void TCollection::SetCurrentCollection()
{
   fgCurrentCollection = this;
}

//______________________________________________________________________________
void TCollection::StartGarbageCollection()
{
   if (!fgGarbageCollection) {
      fgGarbageCollection = new TObjectTable;
      fgEmptyingGarbage   = kFALSE;
      fgGarbageStack      = 0;
   }
   fgGarbageStack++;
}

//______________________________________________________________________________
void TCollection::EmptyGarbageCollection()
{
   if (fgGarbageStack > 0) fgGarbageStack--;
   if (fgGarbageCollection && fgGarbageStack == 0 && fgEmptyingGarbage == kFALSE) {
      fgEmptyingGarbage = kTRUE;
      fgGarbageCollection->Delete();
      fgEmptyingGarbage = kFALSE;
      SafeDelete(fgGarbageCollection);
   }
}

//______________________________________________________________________________
void TCollection::GarbageCollect(TObject *obj)
{
   if (fgGarbageCollection && !fgEmptyingGarbage) {
      fgGarbageCollection->Add(obj);
   } else
      delete obj;
}
