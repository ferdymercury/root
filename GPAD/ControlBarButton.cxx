//*CMZ :  2.00/04 06/04/98  21.22.50  by  Fons Rademakers
//*CMZ :  2.00/00 06/04/98  10.05.09  by  Fons Rademakers
//*CMZ :  1.00/06 23/03/97  11.21.50  by  Rene Brun
//*-- Author :    Nenad Buncic   20/02/96

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

/////////////////////////////////////////////////////////////////////////
//                                                                     //
// TControlBarButton                                                   //
//                                                                     //
// TControlBarButtons are created by the TControlBar. Not for general  //
// consumption.                                                        //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#include "TControlBarButton.h"
#include "TCanvas.h"
#include "TError.h"
#include "TApplication.h"

#include <ctype.h>

const Text_t *kBStr = "BUTTON";
const Text_t *kDStr = "DRAWNBUTTON";
const Text_t *kSStr = "SEPARATOR";


ClassImp(TControlBarButton)

//_______________________________________________________________________
TControlBarButton::TControlBarButton() : TNamed()
{
   // Default controlbar button ctor.

   fType   = 0;
}

//_______________________________________________________________________
TControlBarButton::TControlBarButton(const char *label, const char *action,
                                     const char *hint, const char *type)
   : TNamed(label, hint)
{
   // Create controlbar button.

   SetType(type);
   SetAction(action);
}

//_______________________________________________________________________
void TControlBarButton::Action()
{
   // Execute controlbar button command.

   if (!fAction.IsNull()) {

      gApplication->ProcessLine(fAction.Data());

      if (gPad) gPad->Update();
   }
}

//_______________________________________________________________________
void TControlBarButton::SetAction(const char *action)
{
   // Set action to be executed by this button.

   if (action) {
      char *s = Strip(action);
      fAction = s;
      delete [] s;
   } else
      Error("SetAction", "action missing");
}


//_______________________________________________________________________
void TControlBarButton::SetType(const char *type)
{
   // Set button type. Type can be either "button", "drawnbutton" or
   // "separator". String is case insensitive. Default is "button".

   fType = kButton;

   if (type && *type) {
      if (!strcasecmp(type, kBStr))
         fType = kButton;
      else if (!strcasecmp(type, kDStr))
         fType = kDrawnButton;
      else if (!strcasecmp(type, kSStr))
         fType = kSeparator;
      else
         Error("SetType", "unknown type '%s' !\n\t(choice of: %s, %s, %s)",
               type, kBStr, kDStr, kSStr);
   }
}

//_______________________________________________________________________
void TControlBarButton::SetType(Int_t type)
{
   // Set button type. Type can be either kButton, kDrawnButton or kSeparator.
   // Default is kButton.

   switch (type) {

      case kButton:
      case kDrawnButton:
      case kSeparator:
         fType = type;
         break;

      default:
         fType = kButton;
         Error("SetType", "unknown type: %d !\n\t(choice of: %d, %d, %d)",
               type, kButton, kDrawnButton, kSeparator);
   }
}
