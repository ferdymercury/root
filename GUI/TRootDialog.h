//*CMZ :  2.00/00 21/02/98  17.24.07  by  Fons Rademakers
//*-- Author :    Fons Rademakers   20/02/98

#ifndef ROOT_TRootDialog
#define ROOT_TRootDialog

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
// TRootDialog                                                          //
//                                                                      //
// A TRootDialog is used to prompt for the arguments of an object's     //
// member function. A TRootDialog is created via the context menu's     //
// when selecting a member function taking arguments.                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif

class TRootContextMenu;


class TRootDialog : public TGTransientFrame {

private:
   TRootContextMenu *fMenu;    // associated context menu
   TGLayoutHints    *fL1;      // label layout
   TGLayoutHints    *fL2;      // text entry layout
   TList            *fWidgets; // label and text field widgets created in dialog
   Bool_t            fOk;      // if true show OK button
   Bool_t            fCancel;  // if true show Cancel button
   Bool_t            fApply;   // if true show Apply button

public:
   TRootDialog(TRootContextMenu *cmenu, const TGWindow *main, const char *title,
               Bool_t okB = kTRUE, Bool_t cancelB = kTRUE, Bool_t applyB = kFALSE);
   virtual ~TRootDialog();

   virtual void Add(const char *argname, const char *value, const char *type);
   //virtual void Add(TGComboBox *optionSel);

   virtual const char *GetParameters();

   virtual void CloseWindow();
   virtual void Popup();

   ClassDef(TRootDialog,0)  //Native GUI method argument prompt dialog box
};

#endif

