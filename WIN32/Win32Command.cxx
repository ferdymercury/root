//*CMZ :  1.03/01 25/07/97  13.45.05  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine   04/03/96

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

// The class to control WM_COMMAND Win32 messages

#include "TWin32Command.h"
#include "TWin32CommCtrl.h"

//______________________________________________________________________________
TWin32Command::TWin32Command(Int_t s, Int_t lowerBound) : TObjArray(s,lowerBound){
//*-*   This contrsuctor leaves the index "0" for sprecial things to customize menu like:
//*-*   Separators, MenuBreaks, MenuBarBreaks and so on
}

//______________________________________________________________________________
void TWin32Command::ExecuteEvent(Int_t Id, TWin32Canvas *c) {
    ((TVirtualMenuItem *)(At(Id)))->ExecuteEvent(c);
}

//______________________________________________________________________________
void TWin32Command::JoinMenuItem(TVirtualMenuItem *item) {

//*-*  Add the present menu item to the command list

//*-*  Id = 0 means the item is a special one (like a separator)

  if (item->GetType() != kSubMenu) {
    UINT id = item->GetCommandId();
    if (id == -1 )            //  Booking the free array slot
      item->SetCommandId(AddAtFree((TObject *)item));
    else if (id)              // Occupy id's slot
      AddAtAndExpand((TObject *)item,id);
  }
}

//______________________________________________________________________________
void TWin32Command::JoinControlItem(TWin32CommCtrl *ctrl) {

//*-*  Add the present control to the command list

    UINT id = ctrl->GetCommandId();
    if (id == -1 )            //  Booking the free array slot
      ctrl->SetCommandId(AddAtFree((TObject *)ctrl));
    else if (id)              // Occupy id's slot
      AddAtAndExpand((TObject *)ctrl,id);
}


