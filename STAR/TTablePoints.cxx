//*CMZ :  2.23/12 26/01/2000  12.18.16  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine   14/05/99  (E-mail: fine@bnl.gov)
// $Id: TTablePoints.cxx,v 1.4 1999/12/17 23:28:41 fine Exp $

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

#include "TTablePoints.h"

///////////////////////////////////////////////////////////////////////////////////////
//                                                                                   //
//   Defines the TTable as an element of "event" geometry                                                                                 //
//                                                                                   //
//  +SEQ,TTablePoints.                                                      //
//  +SEQ,T<your_table_name_here>.                                           //
//                                                                                   //
//  class T<your_table_name_here>_Points : public TTablePoints                   //
//  {                                                                                //
//    protected:                                                                     //
//       <your_table_name_here>_st   *fRows; // pointer to the STAF table           //
//    public:                                                                        //
//       T<your_table_name_here>_Points(TTableSorter *sorter,const void *key,Option_t *opt):
//                TTablePoints(sorter,key,opt){}                                   //
//       virtual  ~T<your_table_name_here>_Points(){} // default destructor        //
//       virtual Float_t GetX(Int_t indx) { return ((<your_table_name_here>_st *)fRows)[Indx(idx)]-> <x>;}               //
//       virtual Float_t GetY(Int_t indx) { return ((<your_table_name_here>_st *)fRows)[Indx(idx)]-> <y>;}               //
//       virtual Float_t GetZ(Int_t indx) { return ((<your_table_name_here>_st *)fRows)[Indx(idx)]-> <z>;}               //
//  };                                                                               //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

ClassImp(TTablePoints)

//____________________________________________________________________________
TTablePoints::TTablePoints()
{
  fTableSorter =  0;
  fKey         =  0;
  fFirstRow    = -1;
  fSize        =  0;
}
//____________________________________________________________________________
TTablePoints::TTablePoints(TTableSorter *sorter,const void *key,Option_t *opt)
{
  fTableSorter =  0;
  fKey         =  0;
  fFirstRow    = -1;
  fSize        =  0;
  if (sorter) {
     fTableSorter = sorter;
     fKey         = key;
     fSize        = sorter->CountKey(fKey,0,kTRUE,&fFirstRow);
     SetTablePointer(GetTable());
  }
  SetOption(opt);
}

//____________________________________________________________________________
TTablePoints::TTablePoints(TTableSorter *sorter, Int_t keyIndex,Option_t *opt)
{
  fTableSorter =  0;
  fKey         =  0;
  fFirstRow    = -1;
  fSize        =  0;
  if (sorter) {
     fTableSorter = sorter;
     fKey         = sorter->GetKeyAddress(keyIndex);
     fSize        = sorter->CountKey(fKey,keyIndex,kFALSE,&fFirstRow);
     SetTablePointer(GetTable());
  }
  SetOption(opt);
}

//______________________________________________________________________________
Int_t TTablePoints::DistancetoPrimitive(Int_t px, Int_t py)
{
//*-*-*-*-*-*-*Compute distance from point px,py to a 3-D points *-*-*-*-*-*-*
//*-*          =====================================================
//*-*
//*-*  Compute the closest distance of approach from point px,py to each segment
//*-*  of the polyline.
//*-*  Returns when the distance found is below DistanceMaximum.
//*-*  The distance is computed in pixels units.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   return -1;
}

//______________________________________________________________________________
// $Log: TTablePoints.cxx,v $
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
//______________________________________________________________________________


