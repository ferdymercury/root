//*CMZ :  2.20/05 15/12/98  17.55.03  by  Fons Rademakers
//*CMZ :  2.00/04 06/04/98  10.07.45  by  Fons Rademakers
//*CMZ :  2.00/00 22/02/98  19.22.28  by  Fons Rademakers
//*-- Author :    Fons Rademakers   06/01/98

#ifndef ROOT_TGButton
#define ROOT_TGButton

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
// TGButton, TGTextButton, TGPictureButton, TGCheckButton and           //
// TGRadioButton                                                        //
//                                                                      //
// This header defines all GUI button widgets.                          //
//                                                                      //
// TGButton is a button abstract base class. It defines general button  //
// behaviour.                                                           //
//                                                                      //
// Selecting a text or picture button will generate the event:          //
// kC_COMMAND, kCM_BUTTON, button id, user data.                        //
//                                                                      //
// Selecting a check button will generate the event:                    //
// kC_COMMAND, kCM_CHECKBUTTON, button id, user data.                   //
//                                                                      //
// Selecting a radio button will generate the event:                    //
// kC_COMMAND, kCM_RADIOBUTTON, button id, user data.                   //
//                                                                      //
// If a command string has been specified (via SetCommand()) then this  //
// command string will be executed via the interpreter whenever a       //
// button is selected. A command string can contain the macros:         //
// $MSG   -- kC_COMMAND, kCM[CHECK|RADIO]BUTTON packed message          //
//           (use GET_MSG() and GET_SUBMSG() to unpack)                 //
// $PARM1 -- button id                                                  //
// $PARM2 -- user data pointer                                          //
// Before executing these macros are expanded into the respective       //
// Long_t's                                                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGWidget
#include "TGWidget.h"
#endif


//--- Button states

enum EButtonState {
   kButtonUp,
   kButtonDown,
   kButtonEngaged,
   kButtonDisabled
};


class TGWidget;
class TGHotString;
class TGPicture;
class TGToolTip;


class TGButton : public TGFrame, public TGWidget {

friend class TGClient;

protected:
   UInt_t         fTWidth;      // button width
   UInt_t         fTHeight;     // button height
   EButtonState   fState;       // button state
   Bool_t         fStayDown;    // true if button has to stay down
   GContext_t     fNormGC;      // graphics context used for drawing button
   void          *fUserData;    // pointer to user data structure
   TGToolTip     *fTip;         // tool tip associated with button

   static GContext_t fgDefaultGC;
   static GContext_t fgHibckgndGC;

public:
   TGButton(const TGWindow *p, Int_t id, GContext_t norm = fgDefaultGC,
            UInt_t option = kRaisedFrame | kDoubleBorder);
   virtual ~TGButton();

   virtual Bool_t       HandleButton(Event_t *event);
   virtual Bool_t       HandleCrossing(Event_t *event);
   virtual void         SetUserData(void *userData) { fUserData = userData; }
   virtual void        *GetUserData() const { return fUserData; }
   virtual void         SetToolTipText(const char *text, Long_t delayms = 1000);
   virtual void         SetState(EButtonState state);
   virtual EButtonState GetState() const { return fState; }
   virtual void         AllowStayDown(Bool_t a) { fStayDown = a; }

   ClassDef(TGButton,0)  // Button widget abstract base class
};


class TGTextButton : public TGButton {

friend class TGClient;

protected:
   TGHotString   *fLabel;         // button text
   Int_t          fTMode;         // text drawing mode (ETextJustification)
   Int_t          fHKeycode;      // hotkey
   FontStruct_t   fFontStruct;    // font to draw text

   static FontStruct_t  fgDefaultFontStruct;

   void Init();
   virtual void DoRedraw();

public:
   TGTextButton(const TGWindow *p, TGHotString *s, Int_t id = -1,
                GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                UInt_t option = kRaisedFrame | kDoubleBorder);
   TGTextButton(const TGWindow *p, const char *s, Int_t id = -1,
                GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                UInt_t option = kRaisedFrame | kDoubleBorder);
   TGTextButton(const TGWindow *p, const char *s, const char *cmd, Int_t id = -1,
                GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                UInt_t option = kRaisedFrame | kDoubleBorder);
   virtual ~TGTextButton();

   virtual TGDimension GetDefaultSize() const { return TGDimension(fTWidth+8, fTHeight+7); }

   virtual Bool_t HandleKey(Event_t *event);
   const TGHotString *GetText() const { return fLabel; }
   void SetTextJustify(Int_t tmode) { fTMode = tmode; }
   void SetText(TGHotString *new_label);

   ClassDef(TGTextButton,0)  // A text button widget
};


class TGPictureButton : public TGButton {

protected:
   const TGPicture   *fPic;   // picture to be put in button

   virtual void DoRedraw();

public:
   TGPictureButton(const TGWindow *p, const TGPicture *pic, Int_t id = -1,
                   GContext_t norm = fgDefaultGC,
                   UInt_t option = kRaisedFrame | kDoubleBorder);
   TGPictureButton(const TGWindow *p, const TGPicture *pic, const char *cmd,
                   Int_t id = -1, GContext_t norm = fgDefaultGC,
                   UInt_t option = kRaisedFrame | kDoubleBorder);

   void SetPicture(const TGPicture *new_pic);

   ClassDef(TGPictureButton,0)  // A picture button widget
};


class TGCheckButton : public TGButton {

friend class TGClient;

protected:
   TGHotString    *fLabel;         // check button label
   Int_t           fHKeycode;      // hotkey
   FontStruct_t    fFontStruct;    // font to draw label
   EButtonState    fPrevState;     // previous check button state

   static FontStruct_t  fgDefaultFontStruct;
   static GContext_t    fgDefaultGC;

   void Init();
   void PSetState(EButtonState state);
   virtual void DoRedraw();

public:
   TGCheckButton(const TGWindow *p, TGHotString *s, Int_t id = -1,
                 GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                 UInt_t option = 0);
   TGCheckButton(const TGWindow *p, const char *s, Int_t id = -1,
                 GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                 UInt_t option = 0);
   TGCheckButton(const TGWindow *p, const char *s, const char *cmd, Int_t id = -1,
                 GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                 UInt_t option = 0);
   virtual ~TGCheckButton();

   virtual TGDimension GetDefaultSize() const { return TGDimension(fTWidth+22, fTHeight+2); }

   virtual Bool_t HandleButton(Event_t *event);
   virtual Bool_t HandleKey(Event_t *event);
   virtual Bool_t HandleCrossing(Event_t *event);
   virtual void   SetState(EButtonState state) { PSetState(fPrevState = state); }

   ClassDef(TGCheckButton,0)  // A check button widget
};


class TGRadioButton : public TGButton {

friend class TGClient;

protected:
   TGHotString       *fLabel;       // radio button label
   Int_t              fHKeycode;    // hotkey
   EButtonState       fPrevState;   // radio button state
   const TGPicture   *fOn;          // button ON picture
   const TGPicture   *fOff;         // button OFF picture
   FontStruct_t       fFontStruct;  // font to draw label

   static Pixmap_t      fgR1, fgR2, fgR3, fgR4, fgR5, fgR6;
   static FontStruct_t  fgDefaultFontStruct;
   static GContext_t    fgDefaultGC;

   void Init();
   void PSetState(EButtonState state);
   virtual void DoRedraw();

public:
   TGRadioButton(const TGWindow *p, TGHotString *s, Int_t id = -1,
                 GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                 UInt_t option = 0);
   TGRadioButton(const TGWindow *p, const char *s, Int_t id = -1,
                 GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                 UInt_t option = 0);
   TGRadioButton(const TGWindow *p, const char *s, const char *cmd, Int_t id = -1,
                 GContext_t norm = fgDefaultGC, FontStruct_t font = fgDefaultFontStruct,
                 UInt_t option = 0);
   virtual ~TGRadioButton();

   virtual TGDimension GetDefaultSize() const { return TGDimension(fTWidth+22, fTHeight+2); }

   virtual Bool_t HandleButton(Event_t *event);
   virtual Bool_t HandleKey(Event_t *event);
   virtual Bool_t HandleCrossing(Event_t *event);
   virtual void SetState(EButtonState state) { PSetState(fPrevState = state); }

   ClassDef(TGRadioButton,0)  // A radio button widget
};

#endif
