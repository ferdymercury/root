//*CMZ :  2.00/08 25/05/98  18.43.09  by  Fons Rademakers
//*CMZ :  2.00/04 06/04/98  18.58.26  by  Fons Rademakers
//*CMZ :  2.00/00 26/02/98  23.12.01  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/02/98

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
// TRootControlBar                                                      //
//                                                                      //
// This class provides an interface to the GUI dependent functions of   //
// the TControlBar class. A control bar is a horizontal or vertical bar //
// with a number of buttons (text or picture buttons).                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TRootControlBar.h"
#include "TControlBar.h"
#include "TList.h"
#include "TGButton.h"


ClassImp(TRootControlBar)

//______________________________________________________________________________
TRootControlBar::TRootControlBar(TControlBar *c, const char *title, Int_t x, Int_t y)
   : TGMainFrame(gClient->GetRoot(), 10, 10), TControlBarImp(c)
{
   // Create a ROOT native GUI controlbar.

   fWidgets = 0;
   fXpos    = x;
   fYpos    = y;

   // if controlbar orientation is horizontal change layout manager
   if (c->GetOrientation() == TControlBar::kHorizontal) {
      ChangeOptions(kHorizontalFrame);
      fL1 = new TGLayoutHints(kLHintsTop | kLHintsExpandX, 1, 1, 1, 1);
   } else
      fL1 = new TGLayoutHints(kLHintsCenterY | kLHintsExpandX, 1, 1, 1, 1);

   SetWindowName(title);
   SetIconName(title);
}

//______________________________________________________________________________
TRootControlBar::~TRootControlBar()
{
   // Delete the control bar implementation.

   if (fWidgets) fWidgets->Delete();
   delete fWidgets;
   delete fL1;
}

//______________________________________________________________________________
void TRootControlBar::Create()
{
   // Create the control bar. Loop over all buttons defined in the
   // TControlBar and create the buttons.

   fWidgets = new TList;

   TControlBarButton *button;
   TIter next(fControlBar->GetListOfButtons());

   while ((button = (TControlBarButton *) next())) {

      switch (button->GetType()) {

         case TControlBarButton::kSeparator:
            Warning("Create", "separators not yet supported");
            break;

         case TControlBarButton::kDrawnButton:
            Warning("Create", "picture buttons not yet supported");
            break;

         case TControlBarButton::kButton:
            {
               TGButton *b = new TGTextButton(this, button->GetName());
               b->SetToolTipText(button->GetTitle());
               b->SetUserData(button);
               AddFrame(b, fL1);
               fWidgets->Add(b);
            }
            break;
      }
   }

   MapSubwindows();
   Resize(GetDefaultSize());

   SetMWMHints(kMWMDecorAll | kMWMDecorResizeH,
               kMWMFuncAll  | kMWMFuncResize    | kMWMFuncMaximize,
               kMWMInputModeless);

   if (fXpos != -999) {
      Move(fXpos, fYpos);
      SetWMPosition(fXpos, fYpos);
   }
}

//______________________________________________________________________________
void TRootControlBar::Show()
{
   // Show controlbar. If not yet created create it first.

   if (!fWidgets) Create();

   MapRaised();
}

//______________________________________________________________________________
void TRootControlBar::Hide()
{
   // Hide controlbar.

   UnmapWindow();
}

//______________________________________________________________________________
Bool_t TRootControlBar::ProcessMessage(Long_t, Long_t, Long_t parm2)
{
   // Handle controlbar button messages.

   TControlBarButton *button = (TControlBarButton *) parm2;

   if (button) button->Action();

   return kTRUE;
}


//______________________________________________________________________________
void TRootControlBar::CloseWindow()
{
   // Called when closed via window manager action.

   delete this;
}
