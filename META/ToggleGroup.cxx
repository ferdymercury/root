//*CMZ :  1.03/09 07/12/97  23.44.40  by  Fons Rademakers
//*-- Author :    Piotr Golonka   31/07/97

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
// TToggleGroup                                                         //
//                                                                      //
// This class defines check-box facility for TToggle objects            //
// It is used in context menu "selectors" for picking up a value.       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#include "TClass.h"
#include "TMethod.h"
#include "TToggleGroup.h"

ClassImp(TToggleGroup)

//______________________________________________________________________________
TToggleGroup::TToggleGroup()
{
   fSelected = 0;
   fToggles  = new TOrdCollection();
}

//______________________________________________________________________________
TToggleGroup::~TToggleGroup()
{
   // Deletes togglegroup but does not disposes toggled objects!

      delete fToggles;
}

//______________________________________________________________________________
Int_t TToggleGroup::Add(TToggle *t, Bool_t select)
{
   if (t) {
      fToggles->AddLast(t);
      if (select)
         Select(t);
       return IndexOf(t);
   } else
       return (-1);
}

//______________________________________________________________________________
Int_t TToggleGroup::InsertAt(TToggle *t, Int_t pos,Bool_t select)
{
   if (t) {
      fToggles->AddAt(t,pos);
      if (select)
         Select(t);
      return IndexOf(t);
   } else
      return (-1);
}

//______________________________________________________________________________
void TToggleGroup::Select(Int_t idx)
{
   TToggle *sel = At(idx);
   if (sel)
      Select(sel);
}

//______________________________________________________________________________
void TToggleGroup::Select(TToggle *t)
{
   TIter next(fToggles);
   TToggle *i = 0;

   // Untoggle toggled , and toggle this one if it's present on a list!

   while ((i = (TToggle*)next()))
      if ( i->GetState() || (i==t) )
         i->Toggle();
}

//______________________________________________________________________________
void TToggleGroup::DeleteAll()
{
   // Disposes of all objects and clears array

    fToggles->Delete();
