//*CMZ :  2.23/02 02/09/99  15.54.28  by  Rene Brun
//*CMZ :  2.00/04 06/04/98  10.08.10  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  19.14.14  by  Fons Rademakers
//*-- Author :    Fons Rademakers   20/02/98

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
// TRootDialog                                                          //
//                                                                      //
// A TRootDialog is used to prompt for the arguments of an object's     //
// member function. A TRootDialog is created via the context menu's     //
// when selecting a member function taking arguments.                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TRootDialog.h"
#include "TRootContextMenu.h"
#include "TList.h"
#include "TGLabel.h"
#include "TGTextEntry.h"
#include "TGButton.h"
#include "TObjString.h"


ClassImp(TRootDialog)

//______________________________________________________________________________
TRootDialog::TRootDialog(TRootContextMenu *cmenu, const TGWindow *main,
    const char *title, Bool_t okB, Bool_t cancelB, Bool_t applyB) :
    TGTransientFrame(gClient->GetRoot(), main, 200, 100)
{
   // Create a method argument prompt dialog.

   fMenu   = cmenu;

   fOk     = okB;
   fCancel = cancelB;
   fApply  = applyB;

   fWidgets = new TList;

   fL1 = new TGLayoutHints(kLHintsTop | kLHintsCenterX, 0, 0, 5, 0);
   fL2 = new TGLayoutHints(kLHintsTop | kLHintsLeft, 5, 5, 5, 5);

   SetWindowName(title);
   SetIconName(title);
}

//______________________________________________________________________________
TRootDialog::~TRootDialog()
{
   // Delete the dialog.

   fWidgets->Delete();
   delete fWidgets;
   delete fL1;
   delete fL2;
}

//______________________________________________________________________________
void TRootDialog::Add(const char *argname, const char *value, const char *type)
{
   // Add a label and text input field.

   TGLabel      *l = new TGLabel(this, argname);
   TGTextBuffer *b = new TGTextBuffer(20); b->AddText(0, value);
   TGTextEntry  *t = new TGTextEntry(this, b);

   t->Associate(fMenu);
   t->Resize(260, t->GetDefaultHeight());
   AddFrame(l, fL1);
   AddFrame(t, fL2);

   fWidgets->Add(l);
   fWidgets->Add(t);   // TGTextBuffer will be deleted by TGTextEntry
   fWidgets->Add(new TObjString(type));
}

//______________________________________________________________________________
const char *TRootDialog::GetParameters()
{
   // Get parameter string (called by contextmenu after OK or Apply has
   // been selected).

   static char params[1024];
   char param[256];

   TObjString   *str;
   TObject      *obj;

   params[0] = 0;
   TIter next(fWidgets);

   while ((obj = next())) {        // first element is label, skip...
      if (obj->IsA() != TGLabel::Class()) break;
      obj = next();                // get either TGTextEntry or TGComboBox
      str = (TObjString *) next(); // get type string

      const char *type = str->GetString().Data();
      const char *data = 0;

      if (obj->IsA() == TGTextEntry::Class())
         data = ((TGTextEntry *) obj)->GetBuffer()->GetString();

      // TODO: Combobox...

      if (params[0]) strcat(params, ",");
      if (data) {
         if (!strncmp(type, "char*", 5))
            sprintf(param, "\"%s\"", data);
         else
            strcpy(param, data);
      } else
         strcpy(param, "0");

      strcat(params, param);
   }
   return params;
}

//______________________________________________________________________________
void TRootDialog::Popup()
{
   // Popup dialog.

   //--- create the OK, Apply and Cancel buttons

   UInt_t  nb = 0, width = 0, height = 0;

   TGHorizontalFrame *hf = new TGHorizontalFrame(this, 60, 20, kFixedWidth);
   TGLayoutHints     *l1 = new TGLayoutHints(kLHintsCenterY | kLHintsExpandX, 5, 5, 0, 0);

   // put hf as last in the list to be deleted
   fWidgets->Add(l1);

   TGTextButton *b;
   if (fOk) {
      b = new TGTextButton(hf, "&OK", 1);
      fWidgets->Add(b);
      b->Associate(fMenu);
      hf->AddFrame(b, l1);
      height = b->GetDefaultHeight();
      width  = TMath::Max(width, b->GetDefaultWidth()); ++nb;
   }
   if (fApply) {
      b = new TGTextButton(hf, "&Apply", 2);
      fWidgets->Add(b);
      b->Associate(fMenu);
      hf->AddFrame(b, l1);
      height = b->GetDefaultHeight();
      width  = TMath::Max(width, b->GetDefaultWidth()); ++nb;
   }
   if (fCancel) {
      b = new TGTextButton(hf, "&Cancel", 3);
      fWidgets->Add(b);
      b->Associate(fMenu);
      hf->AddFrame(b, l1);
      height = b->GetDefaultHeight();
      width  = TMath::Max(width, b->GetDefaultWidth()); ++nb;
   }

   // place buttons at the bottom
   l1 = new TGLayoutHints(kLHintsBottom | kLHintsCenterX, 0, 0, 5, 5);
   fWidgets->Add(l1);
   fWidgets->Add(hf);

   AddFrame(hf, l1);

   // keep the buttons centered and with the same width
   hf->Resize((width + 20) * nb, height);

   // map all widgets and calculate size of dialog
   MapSubwindows();

   width  = GetDefaultWidth();
   height = GetDefaultHeight();

   Resize(width, height);

   // position relative to the parent's window
   Window_t wdum;
   int ax, ay;
   gVirtualX->TranslateCoordinates(fMain->GetId(), GetParent()->GetId(),
                          (((TGFrame *) fMain)->GetWidth() - fWidth) >> 1,
                          (((TGFrame *) fMain)->GetHeight() - fHeight) >> 1,
                          ax, ay, wdum);
   Move(ax, ay);
   SetWMPosition(ax, ay);

   // make the message box non-resizable
   SetWMSize(width, height);
   SetWMSizeHints(width, height, width, height, 0, 0);

   SetMWMHints(kMWMDecorAll | kMWMDecorResizeH  | kMWMDecorMaximize |
                              kMWMDecorMinimize | kMWMDecorMenu,
               kMWMFuncAll  | kMWMFuncResize    | kMWMFuncMaximize |
                              kMWMFuncMinimize,
               kMWMInputModeless);

   MapWindow();
   fClient->WaitFor(this);
}

//______________________________________________________________________________
void TRootDialog::CloseWindow()
{
   // Called when closed via window manager action.

   // Send Cancel button message to context menu eventhandler
   SendMessage(fMenu, MK_MSG(kC_COMMAND, kCM_BUTTON), 3, 0);
}
