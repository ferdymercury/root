//*CMZ :  2.22/02 26/05/99  11.21.38  by  Fons Rademakers
//*CMZ :  2.20/00 10/11/98  11.26.03  by  Fons Rademakers
//*CMZ :  1.03/09 05/12/97  16.30.45  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/08/95

#ifndef ROOT_TObjectTable
#define ROOT_TObjectTable

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
// TObjectTable                                                         //
//                                                                      //
// This class registers all instances of TObject and its derived        //
// classes in a hash table. The Add() and Remove() members are called   //
// from the TObject ctor and dtor, repectively. Using the Print()       //
// member one can see all currently active objects in the system.       //
// Using the runtime flag: Root.ObjectStat one can toggle this feature  //
// on or off.                                                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TObject
#include "TObject.h"
#endif

class TClass;


class TObjectTable : public TObject {

private:
   TObject  **fTable;
   Int_t      fSize;
   Int_t      fTally;

   Bool_t     HighWaterMark();
   void       Expand(Int_t newsize);
   Int_t      FindElement(TObject *obj);
   void       FixCollisions(Int_t index);

public:
   TObjectTable(Int_t tableSize = 100);
   ~TObjectTable();

   void      Add(TObject *obj);
   void     *CheckPtrAndWarn(const char *msg, void *vp);
   void      Delete(Option_t *opt = "");
   Int_t     GetSize() const { return fSize; }
   Int_t     Instances() const { return fTally; }
   void      InstanceStatistics();
   void      Print(Option_t *option="");
   Bool_t    PtrIsValid(TObject *obj);
   void      Remove(TObject *obj);
   void      RemoveQuietly(TObject *obj);
   void      Statistics() { Print(); }
   void      Terminate();
   void      UpdateInstCount();

   static void AddObj(TObject *obj);

   ClassDef(TObjectTable,0)  //Table of active objects
};


inline Bool_t TObjectTable::HighWaterMark()
   { return (Bool_t) (fTally >= ((3*fSize)/4)); }

inline Bool_t TObjectTable::PtrIsValid(TObject *op)
   { return fTable[FindElement(op)] != 0; }


R__EXTERN TObjectTable *gObjectTable;

#endif
