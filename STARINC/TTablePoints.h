//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine   14/05/99  (E-mail: fine@bnl.gov)
// $Id: TTablePoints.h,v 1.4 1999/12/17 23:28:41 fine Exp $

#ifndef STAR_TTablePoints
#define STAR_TTablePoints
// ***********************************************************************
// * Observer to draw use ant TTable object as an element of "event" geometry
// * Copyright(c) 1997~1999  [BNL] Brookhaven National Laboratory, STAR, All rights reserved
// * Author                  Valerie Fine  (fine@bnl.gov)
// * Copyright(c) 1997~1999  Valerie Fine  (fine@bnl.gov)
// *
// * This program is distributed in the hope that it will be useful,
// * but WITHOUT ANY WARRANTY; without even the implied warranty of
// * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// *
// * Permission to use, copy, modify and distribute this software and its
// * documentation for any purpose is hereby granted without fee,
// * provided that the above copyright notice appear in all copies and
// * that both that copyright notice and this permission notice appear
// * in supporting documentation.  Brookhaven National Laboratory makes no
// * representations about the suitability of this software for any
// * purpose.  It is provided "as is" without express or implied warranty.
// ************************************************************************
#include <TPoints3DABC.h>
#include "TTableSorter.h"
#include "TTable.h"

class TTablePoints : public TPoints3DABC
{
  protected:
    TTableSorter *fTableSorter;
    const void     *fKey;            // pointer to key value to select rows
    Int_t           fFirstRow;       // The first row to take in account
    Int_t           fSize;
    void           *fRows;           // Pointer the first row of the STAF table

    virtual void SetTablePointer(void *table);
    TTablePoints();
  public:
    TTablePoints(TTableSorter *sorter,const void *key,Option_t *opt="");
    TTablePoints(TTableSorter *sorter, Int_t keyIndex,Option_t *opt="");
   ~TTablePoints(){}
    virtual Int_t     DistancetoPrimitive(Int_t px, Int_t py);
    virtual Int_t     GetLastPosition()const;
    virtual Float_t   GetX(Int_t idx)  const = 0;
    virtual Float_t   GetY(Int_t idx)  const = 0;
    virtual Float_t   GetZ(Int_t idx)  const = 0;
    virtual void     *GetTable();
    virtual Option_t *GetOption()      const { return 0;}
    virtual Int_t     Indx(Int_t sortedIndx) const;
    virtual Int_t     SetLastPosition(Int_t idx);
    virtual void      SetOption(Option_t *){;}
    virtual Int_t     SetPoint(Int_t, Float_t, Float_t, Float_t ){return -1;}
    virtual Int_t     SetPoints(Int_t , Float_t *, Option_t *){return -1;}
    virtual Int_t     Size() const;
    ClassDef(TTablePoints,0)  // Defines the TTable as an element of "event" geometry
};

//____________________________________________________________________________
inline void TTablePoints::SetTablePointer(void *table){ fRows = table;}

//____________________________________________________________________________
// return the index of the origial row by its index from the sorted table
   inline Int_t TTablePoints::Indx(Int_t sortedIndx) const
     {return fTableSorter?fTableSorter->GetIndex(fFirstRow+sortedIndx):-1;}
//____________________________________________________________________________
// return the pointer to the original table object
  inline void *TTablePoints::GetTable(){
    if (fTableSorter) {
      TTable *table = fTableSorter->GetTable();
      if (table) return table->GetArray();
    }
    return 0;
  }
//____________________________________________________________________________
  inline Int_t TTablePoints::Size() const { return fSize;}
//____________________________________________________________________________
  inline Int_t TTablePoints::GetLastPosition() const {return Size()-1;}

//____________________________________________________________________________
  inline Int_t TTablePoints::SetLastPosition(Int_t idx)
  {
     Int_t pos = GetLastPosition();
     fSize = TMath::Min(pos,idx)+1;
     return pos;
  }

//____________________________________________________________________________
// $Log: TTablePoints.h,v $
// Revision 1.4  1999/12/17 23:28:41  fine
// clean up for the sake of docs + new class TTable3DPackedPoints introduced
//
// Revision 1.3  1999/11/16 16:29:57  fine
// TObject::GetObjectInfo() implemented
//
// Revision 1.2  1999/11/04 18:03:10  fine
// new ctor for tablepoints introduced to make EventDiplay happy
//
// Revision 1.1  1999/05/18 20:21:25  fine
// New class to 3D table viewer
//____________________________________________________________________________

#endif

