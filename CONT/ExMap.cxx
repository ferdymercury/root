//*CMZ :  2.22/08 07/07/99  13.26.14  by  Fons Rademakers
//*CMZ :  2.22/02 27/05/99  16.44.34  by  Fons Rademakers
//*-- Author :    Fons Rademakers   26/05/99

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
// TExMap                                                               //
//                                                                      //
// This class stores a (key,value) pair using an external hash.         //
// The (key,value) are Long_t's and therefore can contain object        //
// pointers or any longs. The map uses an open addressing hashing       //
// method (linear probing).                                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TExMap.h"
#include "TMath.h"


ClassImp(TExMap)

//______________________________________________________________________________
TExMap::TExMap(Int_t mapSize)
{
   // Create a TExMap.

   fSize  = (Int_t)TMath::NextPrime(mapSize);
   fTable = new Assoc_t* [fSize];
   memset(fTable, 0, fSize*sizeof(Assoc_t*));
   fTally = 0;
}

//______________________________________________________________________________
TExMap::~TExMap()
{
   // Delete TExMap.

   for (int i = 0; i < fSize; i++)
      delete fTable[i];
   delete [] fTable; fTable = 0;
}

//______________________________________________________________________________
void TExMap::Add(ULong_t hash, Long_t key, Long_t value)
{
   // Add an (key,value) pair to the table. The key should be unique.

   if (!fTable)
      return;

   Int_t slot = FindElement(hash, key);
   if (fTable[slot] == 0) {
      fTable[slot] = new Assoc_t(hash, key, value);
      fTally++;
      if (HighWaterMark())
         Expand(2 * fSize);
   } else
      Error("Add", "key %ld is not unique", key);
}

//______________________________________________________________________________
void TExMap::Delete(Option_t *)
{
   // Delete all entries stored in the TExMap.

   for (int i = 0; i < fSize; i++) {
      if (fTable[i]) {
         delete fTable[i];
         fTable[i] = 0;
      }
   }
   fTally = 0;
}

//______________________________________________________________________________
Long_t TExMap::GetValue(ULong_t hash, Long_t key)
{
   // Return the value belonging to specified key and hash value. If key not
   // found return 0.

   Int_t slot = FindElement(hash, key);
   if (fTable[slot])
      return fTable[slot]->fValue;
   else
      return 0;
}

//______________________________________________________________________________
void TExMap::Remove(ULong_t hash, Long_t key)
{
   // Remove entry with specified key from the TExMap.

   if (!fTable)
      return;

   Int_t i = FindElement(hash, key);
   if (fTable[i] == 0) {
      Warning("Remove", "key %ld not found at %d", key, i);
      for (int j = 0; j < fSize; j++) {
         if (fTable[j] && fTable[j]->fKey == key) {
            Error("Remove", "%ld found at %d !!!", key, j);
            i = j;
         }
      }
   }

   if (fTable[i]) {
      delete fTable[i];
      fTable[i] = 0;
      FixCollisions(i);
      fTally--;
   }
}

//______________________________________________________________________________
Int_t TExMap::FindElement(ULong_t hash, Long_t key)
{
   // Find an entry with specified hash and key in the TExMap.
   // Returns the slot of the key or the next empty slot.

   Int_t  slot;
   Long_t slotKey = 0;

   if (!fTable)
      return 0;

   slot = Int_t(hash % fSize);
   for (int n = 0; n < fSize; n++) {
      if (fTable[slot]) slotKey = fTable[slot]->fKey;
      if (!fTable[slot])
         break;
      if (key == slotKey)
         break;
      if (++slot == fSize)
         slot = 0;
   }
   return slot;
}

//______________________________________________________________________________
void TExMap::FixCollisions(Int_t index)
{
   // Rehash the map in case an entry has been removed.

   Int_t oldIndex, nextIndex;
   Assoc_t *nextObject;

   for (oldIndex = index+1; ;oldIndex++) {
      if (oldIndex >= fSize)
         oldIndex = 0;
      nextObject = fTable[oldIndex];
      if (nextObject == 0)
         break;
      nextIndex = FindElement(nextObject->fHash, nextObject->fKey);
      if (nextIndex != oldIndex) {
         fTable[nextIndex] = nextObject;
         fTable[oldIndex] = 0;
      }
   }
}

//______________________________________________________________________________
void TExMap::Expand(Int_t newSize)
{
   // Expand the TExMap.

   Assoc_t **oldTable = fTable, *op;
   Int_t oldsize = fSize;
   newSize = (Int_t)TMath::NextPrime(newSize);
   fTable  = new Assoc_t* [newSize];
   memset(fTable, 0, newSize*sizeof(Assoc_t*));
   fSize   = newSize;
   for (int i = 0; i < oldsize; i++)
      if ((op = oldTable[i])) {
         Int_t slot = FindElement(op->fHash, op->fKey);
         if (fTable[slot] == 0)
            fTable[slot] = op;
         else
            Error("Expand", "slot %d not empty (should never happen)", slot);
      }
   delete [] oldTable;
}

