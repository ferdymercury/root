//*CMZ :  2.00/13 27/10/98  18.47.41  by  Fons Rademakers
//*CMZ :  2.00/11 17/08/98  15.14.16  by  Rene Brun
//*CMZ :  2.00/00 17/02/98  16.16.01  by  Fons Rademakers
//*CMZ :  1.03/09 03/12/97  00.43.31  by  Fons Rademakers
//*-- Author :    Fons Rademakers   14/09/95

#ifndef ROOT_TSortedList
#define ROOT_TSortedList

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
// TSortedList                                                          //
//                                                                      //
// A sorted doubly linked list. All sortable classes inheriting from    //
// TObject can be inserted in a TSortedList.                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TList
#include "TList.h"
#endif


class TSortedList : public TList {

public:
   TSortedList(Bool_t order = kSortAscending) { fAscending = order; }

   void      Add(TObject *obj);
   void      Add(TObject *obj, Option_t *opt);

   //---- the following methods are overridden to preserve sorting order
   void      AddFirst(TObject *obj) { Add(obj); }
   void      AddFirst(TObject *obj, Option_t *opt) { Add(obj, opt); }
   void      AddLast(TObject *obj) { Add(obj); }
   void      AddLast(TObject *obj, Option_t *opt) { Add(obj, opt); }
   void      AddAt(TObject *obj, Int_t) { Add(obj); }
   void      AddAfter(TObject *, TObject *obj) { Add(obj); }
   void      AddAfter(TObjLink *, TObject *obj) { Add(obj); }
   void      AddBefore(TObject *, TObject *obj) { Add(obj); }
   void      AddBefore(TObjLink *, TObject *obj) { Add(obj); }
   void      Sort(Bool_t = kSortAscending) { }

   ClassDef(TSortedList,0)  //A sorted list
};

#endif

