//*CMZ :  2.22/01 26/04/99  12.08.46  by  Rene Brun
//*CMZ :  2.21/07 05/03/99  19.22.41  by  Rene Brun
//*CMZ :  2.21/06 16/02/99  18.41.13  by  Fons Rademakers
//*CMZ :  2.20/00 10/11/98  11.26.42  by  Fons Rademakers
//*CMZ :  2.00/10 29/07/98  15.56.44  by  Fons Rademakers
//*CMZ :  2.00/08 04/06/98  15.38.07  by  Fons Rademakers
//*CMZ :  1.03/09 11/12/97  16.17.55  by  Rene Brun
//*-- Author :    Rene Brun   11/02/96

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
// An array of clone (identical) objects. Memory for the objects        //
// stored in the array is allocated only once in the lifetime of the    //
// clones array. All objects must be of the same class. For the rest    //
// this class has the same properties as TObjArray.                     //
//                                                                      //
// To reduce the very large number of new and delete calls in large     //
// loops like this (O(100000) x O(10000) times new/delete):             //
//                                                                      //
//   TObjArray a(10000);                                                //
//   while (TEvent *ev = (TEvent *)next()) {      // O(100000) events   //
//      for (int i = 0; i < ev->Ntracks; i++) {   // O(10000) tracks    //
//         a[i] = new TTrack(x,y,z,...);                                //
//         ...                                                          //
//         ...                                                          //
//      }                                                               //
//      ...                                                             //
//      a.Delete();                                                     //
//   }                                                                  //
//                                                                      //
// One better uses a TClonesArray which reduces the number of           //
// new/delete calls to only O(10000):                                   //
//                                                                      //
//   TCloneArray a("TTrack", 10000);                                    //
//   while (TEvent *ev = (TEvent *)next()) {      // O(100000) events   //
//      for (int i = 0; i < ev->Ntracks; i++) {   // O(10000) tracks    //
//         new(a[i]) TTrack(x,y,z,...);                                 //
//         ...                                                          //
//         ...                                                          //
//      }                                                               //
//      ...                                                             //
//      a.Delete();                                                     //
//   }                                                                  //
//                                                                      //
// Considering that a new/delete costs about 70 mus, O(10^9)            //
// new/deletes will save about 19 hours.                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TClonesArray.h"
#include "TMath.h"
#include "TError.h"
#include "TClass.h"
#include "TROOT.h"
#include "TObjectTable.h"


ClassImp(TClonesArray)

//______________________________________________________________________________
TClonesArray::TClonesArray() : TObjArray()
{
   fClass      = 0;
   fKeep       = 0;
}

//______________________________________________________________________________
TClonesArray::TClonesArray(Text_t *classname, Int_t s, Bool_t) : TObjArray(s)
{
   // Create an array of clone objects of classname. The class must inherit from
   // TObject. If the class defines an own operator delete(), make sure that
   // it looks like this:
   //
   //    void MyClass::operator delete(void *vp)
   //    {
   //       if ((Long_t) vp != TObject::GetDtorOnly())
   //          ::operator delete(vp);       // delete space
   //       else
   //          TObject::SetDtorOnly(0);
   //    }
   //
   // The third argument is not used anymore and only there for backward
   // compatibility reasons.

   if (!gROOT)
      ::Fatal("TClonesArray::TClonesArray", "ROOT system not initialized");

   fKeep  = 0;
   fClass = gROOT->GetClass(classname);
   if (!fClass) {
      Error("TClonesArray", "%s is not a valid class name", classname);
      return;
   }
   if (!fClass->InheritsFrom(TObject::Class())) {
      Error("TClonesArray", "%s does not inherit from TObject", classname);
      return;
   }
   fKeep = new TObjArray(s);
}

//______________________________________________________________________________
TClonesArray::~TClonesArray()
{
   // Delete a clones array.

   if (fKeep) {
      for (Int_t i = 0; i < fKeep->fSize; i++) {
         // remove any possible entries from the ObjectTable
         if (TObject::GetObjectStat() && gObjectTable)
            gObjectTable->RemoveQuietly(fKeep->fCont[i]);
         ::operator delete(fKeep->fCont[i]);
      }
   }
   SafeDelete(fKeep);
}

//______________________________________________________________________________
void TClonesArray::Compress()
{
   // Remove empty slots from array.

   Int_t j = 0, je = 0;

   TObject **tmp = new TObject* [fSize];

   for (Int_t i = 0; i < fSize; i++) {
      if (fCont[i]) {
         fCont[j] = fCont[i];
         fKeep->fCont[j] = fKeep->fCont[i];
         j++;
      } else {
         tmp[je] = fKeep->fCont[i];
         je++;
      }
   }

   fLast = j - 1;

   Int_t jf = 0;
   for ( ; j < fSize; j++) {
      fCont[j] = 0;
      fKeep->fCont[j] = tmp[jf];
      jf++;
   }

   delete [] tmp;

   Assert(je == jf);
}

//______________________________________________________________________________
void TClonesArray::Clear(Option_t *)
{
   // Clear the clones array. Only use this routine when your objects don't
   // allocate memory since it will not call the object dtors.

   TObjArray::Clear();
}

//______________________________________________________________________________
void TClonesArray::Delete(Option_t *)
{
   // Clear the clones array. Use this routine when your objects allocate
   // memory (e.g. objects inheriting from TNamed or containing TStrings
   // allocate memory). If not you better use Clear() since if is faster.

   for (Int_t i = 0; i < fSize; i++)
      if (fCont[i] && fCont[i]->TestBit(kNotDeleted)) {
         // Tell custom operator delete() not to delete space when
         // object fCont[i] is deleted. Only destructors are called
         // for this object.
         TObject::SetDtorOnly(fCont[i]);
         delete fCont[i];
      }

   TObjArray::Clear();
}

//______________________________________________________________________________
void TClonesArray::Expand(Int_t newSize)
{
   // Expand or shrink the array to newSize elements.

   if (newSize < 0) {
      Error ("Expand", "newSize must be positive (%d)", newSize);
      return;
   }
   if (newSize == fSize)
      return;
   if (newSize < fSize) {
      // release allocated space in fKeep and set to 0 so
      // Expand() will shrink correctly
      for (int i = newSize; i < fSize; i++)
         if (fKeep->fCont[i]) {
            if (TObject::GetObjectStat() && gObjectTable)
               gObjectTable->RemoveQuietly(fKeep->fCont[i]);
            ::operator delete(fKeep->fCont[i]);
            fKeep->fCont[i] = 0;
         }
   }

   TObjArray::Expand(newSize);
   fKeep->Expand(newSize);
}

//______________________________________________________________________________
void TClonesArray::ExpandCreate(Int_t n)
{
   // Expand or shrink the array to n elements and create the clone
   // objects by caling their default ctor. If n is less than the current size
   // the array is shrinked and the allocated space is freed.
   // This routine is typically used to create a clonesarray into which
   // one can directly copy object data without going via the
   // "new (arr[i]) MyObj()" (i.e. the vtbl is already set correctly).
   // This routine is used in the TTree mechanism.

   if (n < 0) {
      Error("ExpandCreate", "n must be positive (%d)", n);
      return ;
   }
   if (n > fSize)
      Expand(TMath::Max(n, GrowBy(fSize)));

   Int_t i;
   for (i = 0; i < n; i++) {
      if (!fKeep->fCont[i])
         fKeep->fCont[i] = (TObject*)fClass->New();

      fCont[i] = fKeep->fCont[i];
   }
/*
 //this function is currently only called by TBranchClones::GetEntry
 //the following lines have been commented (not necessary for getEvent)
   for (i = n; i < fSize; i++)
      if (fKeep->fCont[i]) {
         if (TObject::GetObjectStat() && gObjectTable)
            gObjectTable->RemoveQuietly(fKeep->fCont[i]);
         ::operator delete(fKeep->fCont[i]);
         fKeep->fCont[i] = 0;
      }
*/
   fLast = n - 1;
   Changed();
}

//______________________________________________________________________________
void TClonesArray::RemoveAt(Int_t idx)
{
   // Remove object at index idx.

   if (!BoundsOk("RemoveAt", idx)) return;

   int i = idx-fLowerBound;

   if (fCont[i] && fCont[i]->TestBit(kNotDeleted)) {
      // Tell custom operator delete() not to delete space when
      // object fCont[i] is deleted. Only destructors are called
      // for this object.
      TObject::SetDtorOnly(fCont[i]);
      delete fCont[i];
   }

   if (fCont[i]) {
      fCont[i] = 0;
      fLast = -2;
      Changed();
   }
}

//______________________________________________________________________________
TObject *TClonesArray::Remove(TObject *obj)
{
   // Remove object from array.

   if (!obj) return 0;

   Int_t i = IndexOf(obj) - fLowerBound;

   if (i == -1) return 0;

   if (fCont[i] && fCont[i]->TestBit(kNotDeleted)) {
      // Tell custom operator delete() not to delete space when
      // object fCont[i] is deleted. Only destructors are called
      // for this object.
      TObject::SetDtorOnly(fCont[i]);
      delete fCont[i];
   }

   fCont[i] = 0;
   fLast = -2;
   Changed();
   return obj;
}

//______________________________________________________________________________
void TClonesArray::Sort(Int_t upto)
{
   // If objects in array are sortable (i.e. IsSortable() returns true
   // for all objects) then sort array.

   if (GetAbsLast() == -1 || fSorted) return;
   for (Int_t i = 0; i < fSize; i++)
      if (fCont[i]) {
         if (!fCont[i]->IsSortable()) {
            Error("Sort", "objects in array are not sortable");
            return;
         }
      }

   QSort(fCont, fKeep->fCont, 0, TMath::Min(fSize, upto-fLowerBound));

   fLast   = -2;
   fSorted = kTRUE;
}

//_______________________________________________________________________
void TClonesArray::Streamer(TBuffer &b)
{
   // Write all objects in array to the I/O buffer. ATTENTION: empty slots
   // are also stored (using one byte per slot). If you don't want this
   // use a TOrdCollection or TList.

   Int_t   nobjects;
   char    nch;
   TString s;

   if (b.IsReading()) {
      b.ReadVersion();   // Version_t v = b.ReadVersion();
      s.Streamer(b);
      TClass *cl = gROOT->GetClass(s.Data());
      b >> nobjects;
      if (nobjects < 0)
         nobjects = -nobjects;  // still there for backward compatibility
      b >> fLowerBound;
      if (fClass == 0 && fKeep == 0) {
         fClass = cl;
         fKeep  = new TObjArray(nobjects);
         Expand(nobjects);
      }
      if (cl != fClass) {
         Error("Streamer", "expecting objects of type %s, finding objects"
            " of type %s", fClass->GetName(), cl->GetName());
         return;
      }

      // make sure there are enough slots in the fKeep array
      if (fKeep->GetSize() < nobjects)
         Expand(nobjects);

      for (Int_t i = 0; i < nobjects; i++) {
         b >> nch;
         if (nch) {
            if (!fKeep->fCont[i])
               fKeep->fCont[i] = (TObject*)fClass->New();

            fCont[i] = fKeep->fCont[i];
            fKeep->fCont[i]->Streamer(b);
            fLast = i;
         }
      }
      Changed();
   } else {
      b.WriteVersion(TClonesArray::IsA());
      s = fClass->GetName();
      s.Streamer(b);
      nobjects = GetEntriesFast();
      b << nobjects;
      b << fLowerBound;
      for (Int_t i = 0; i < nobjects; i++) {
         if (!fCont[i]) {
            nch = 0;
            b << nch;
         } else {
            nch = 1;
            b << nch;
            fCont[i]->Streamer(b);
         }
      }
   }
}

//______________________________________________________________________________
TObject *&TClonesArray::operator[](Int_t idx)
{
   // Return pointer to reserved area in which a new object of clones
   // class can be constructed. This operator should not be used for
   // lefthand side assignments, like a[2] = xxx. Only like,
   // new (a[2]) myClass, or xxx = a[2]. To remove elements from
   // the clones array use Remove() or RemoveAt().

   if (idx < 0) {
      Error("operator[]", "out of bounds at %d in %x", idx, this);
      return fCont[0];
   }
   if (!fClass) {
      Error("operator[]", "invalid class specified in TClonesArray ctor");
      return fCont[0];
   }
   if (idx >= fSize)
      Expand(TMath::Max(idx+1, GrowBy(fSize)));

   if (!fKeep->fCont[idx])
      fKeep->fCont[idx] = (TObject*)::operator new(fClass->Size());

   fCont[idx] = fKeep->fCont[idx];

   fLast = TMath::Max(idx, GetAbsLast());
   Changed();

   return fCont[idx];
}

