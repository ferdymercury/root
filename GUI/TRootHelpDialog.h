//*CMZ :  2.00/00 24/02/98  16.20.05  by  Fons Rademakers
//*-- Author :    Fons Rademakers   24/02/98

#ifndef ROOT_TRootHelpDialog
#define ROOT_TRootHelpDialog

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
// TRootHelpDialog                                                      //
//                                                                      //
// A TRootHelpDialog is used to display help text (or any text in a     //
// dialog window). There is on OK button to popdown the dialog.         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif

class TGTextView;
class TGTextButton;


class TRootHelpDialog : public TGTransientFrame {

private:
   TGTextView       *fView;   // text view
   TGTextButton     *fOK;     // OK button
   TGLayoutHints    *fL1;     // layout of TGTextView
   TGLayoutHints    *fL2;     // layout of OK button

public:
   TRootHelpDialog(const TGWindow *main, const char *title, UInt_t w, UInt_t h);
   virtual ~TRootHelpDialog();

   void   SetText(const char *helpText);
   void   AddText(const char *helpText);

   void   Popup();
   void   CloseWindow();
   Bool_t ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);

   ClassDef(TRootHelpDialog,0)  //Dialog to display help text
};

#endif
