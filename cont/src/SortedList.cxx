//*CMZ :  2.00/11 17/08/98  15.18.35  by  Rene Brun
//*CMZ :  1.00/06 23/03/97  11.05.27  by  Rene Brun
//*-- Author :    Fons Rademakers   14/09/95

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// A sorted doubly linked list. All sortable classes inheriting from    //
// TObject can be inserted in a TSortedList.                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TSortedList.h"


ClassImp(TSortedList)

//______________________________________________________________________________
void TSortedList::Add(TObject *obj)
{
   // Add object in sorted list. Uses object Compare() member to find right
   // position.

   if (IsArgNull("Add", obj)) return;

   if (!obj->IsSortable()) {
      Error("Add", "object must be sortable");
      return;
   }

   if (!fFirst) {
      TList::AddLast(obj);
      return;
   }

   TObjLink *lnk = fFirst;

   while (lnk) {
      Int_t cmp = lnk->GetObject()->Compare(obj);
      if ((IsAscending() && cmp > 0) || (!IsAscending() && cmp < 0)) {
         if (lnk->Prev()) {
            NewLink(obj, lnk->Prev());
            fSize++;
            return;
         } else {
            TList::AddFirst(obj);
            return;
         }
      }
      lnk = lnk->Next();
   }
   TList::AddLast(obj);
}

//______________________________________________________________________________
void TSortedList::Add(TObject *obj, Option_t *opt)
{
   // Add object in sorted list. Uses object Compare() member to find right
   // position and also store option. See TList::Add for explanation of
   // usage of option.

   if (IsArgNull("Add", obj)) return;

   if (!obj->IsSortable()) {
      Error("Add", "object must be sortable");
      return;
   }

   if (!fFirst) {
      TList::Add(obj, opt);
      return;
   }

   TObjLink *lnk = fFirst;

   while (lnk) {
      Int_t cmp = lnk->GetObject()->Compare(obj);
      if ((IsAscending() && cmp > 0) || (!IsAscending() && cmp < 0)) {
         if (lnk->Prev()) {
            NewOptLink(obj, opt, lnk);
            fSize++;
            return;
         } else {
            TList::AddFirst(obj, opt);
            return;
         }
      }
      lnk = lnk->Next();
   }
   TList::Add(obj, opt);
