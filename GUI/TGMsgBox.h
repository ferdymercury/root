//*CMZ :  2.20/01 02/12/98  18.01.33  by  Fons Rademakers
//*CMZ :  2.00/08 22/05/98  18.00.29  by  Fons Rademakers
//*CMZ :  2.00/00 09/01/98  19.12.37  by  Fons Rademakers
//*-- Author :    Fons Rademakers   09/01/98

#ifndef ROOT_TGMsgBox
#define ROOT_TGMsgBox

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
// TMsgBox                                                              //
//                                                                      //
// A message dialog box.                                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGString
#include "TGString.h"
#endif
#ifndef ROOT_TGPicture
#include "TGPicture.h"
#endif


//--- Icon types

enum EMsgBoxIcon {
   kMBIconStop,
   kMBIconQuestion,
   kMBIconExclamation,
   kMBIconAsterisk
};

//--- Button types and return codes

enum EMsgBoxButton {
   kMBYes     = BIT(0),
   kMBNo      = BIT(1),
   kMBOk      = BIT(2),
   kMBApply   = BIT(3),
   kMBRetry   = BIT(4),
   kMBIgnore  = BIT(5),
   kMBCancel  = BIT(6),
   kMBClose   = BIT(7),
   kMBDismiss = BIT(8)
};


class TGButton;
class TGIcon;
class TGLabel;


class TGMsgBox : public TGTransientFrame {

protected:
   TGButton            *fYes, *fNo, *fOK, *fApply;   // buttons in dialog box
   TGButton            *fRetry, *fIgnore, *fCancel;  // buttons in dialog box
   TGButton            *fClose, *fDismiss;           // buttons in dialog box
   TGIcon              *fIcon;                       // icon
   TGHorizontalFrame   *fButtonFrame;                // frame containing buttons
   TGHorizontalFrame   *fIconFrame;                  // frame containing icon and text
   TGVerticalFrame     *fLabelFrame;                 // frame containing text
   TGLayoutHints       *fL1, *fL2, *fL3, *fL4, *fL5; // layout hints
   TList               *fMsgList;                    // text (list of TGLabels)
   Int_t               *fRetCode;                    // address to store return code

   void PMsgBox(const TGWindow *main,
                const char *title, const char *msg, const TGPicture *icon,
                Int_t buttons, Int_t *ret_code);

public:
   TGMsgBox(const TGWindow *p, const TGWindow *main,
            const char *title, const char *msg, const TGPicture *icon,
            Int_t buttons = kMBDismiss, Int_t *ret_code = 0,
            UInt_t options = kMainFrame | kVerticalFrame);
   TGMsgBox(const TGWindow *p, const TGWindow *main,
            const char *title, const char *msg, EMsgBoxIcon icon,
            Int_t buttons = kMBDismiss, Int_t *ret_code = 0,
            UInt_t options = kMainFrame | kVerticalFrame);
   virtual ~TGMsgBox();

   virtual void CloseWindow();
   virtual Bool_t ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);

   ClassDef(TGMsgBox,0)  // A message dialog box
};

#endif
