//*CMZ :  2.23/09 06/11/99  18.27.02  by  Fons Rademakers
//*CMZ :  2.22/02 27/05/99  16.42.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   26/05/99

#ifndef ROOT_TExMap
#define ROOT_TExMap

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
// TExMap                                                               //
//                                                                      //
// This class stores a (key,value) pair using an external hash.         //
// The (key,value) are Long_t's and therefore can contain object        //
// pointers or any longs. The map uses an open addressing hashing       //
// method (linear probing).                                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TObject
#include "TObject.h"
#endif

class TExMap : public TObject {

private:
   struct Assoc_t {
      ULong_t  fHash;
      Long_t   fKey;
      Long_t   fValue;
      Assoc_t(ULong_t hash, Long_t key, Long_t val)
         { fHash = hash; fKey = key; fValue = val; }
   };

   Assoc_t   **fTable;
   Int_t       fSize;
   Int_t       fTally;

   Bool_t      HighWaterMark()
                  { return (Bool_t) (fTally >= ((3*fSize)/4)); }
   void        Expand(Int_t newsize);
   Int_t       FindElement(ULong_t hash, Long_t key);
   void        FixCollisions(Int_t index);

public:
   TExMap(Int_t mapSize = 100);
   ~TExMap();

   void      Add(ULong_t hash, Long_t key, Long_t value);
   void      Add(Long_t key, Long_t value) { Add(key, key, value); }
   void      Delete(Option_t *opt = "");
   Int_t     Capacity() const { return fSize; }
   Int_t     GetSize() const { return fTally; }
   Long_t    GetValue(ULong_t hash, Long_t key);
   Long_t    GetValue(Long_t key) { return GetValue(key, key); }
   void      Remove(ULong_t hash, Long_t key);
   void      Remove(Long_t key) { Remove(key, key); }

   Long_t   &operator()(ULong_t hash, Long_t key);
   Long_t   &operator()(Long_t key) { return operator()(key, key); }

   ClassDef(TExMap,0)  //Map with external hash
};

#endif
