//*CMZ :  2.00/11 03/08/98  11.57.34  by  Fons Rademakers
//*CMZ :  2.00/05 20/04/98  10.40.32  by  Fons Rademakers
//*CMZ :  2.00/04 06/04/98  10.08.02  by  Fons Rademakers
//*CMZ :  2.00/00 25/02/98  15.09.09  by  Fons Rademakers
//*-- Author :    Fons Rademakers   05/01/98

#ifndef ROOT_TGWidget
#define ROOT_TGWidget

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
// TGWidget                                                             //
//                                                                      //
// The widget base class. It is light weight (all inline service        //
// methods) and is typically used as mixin class (via multiple          //
// inheritance), see for example TGButton.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_GuiTypes
#include "GuiTypes.h"
#endif
#ifndef ROOT_TGString
#include "TGString.h"
#endif


//--- Text justification modes

enum ETextJustification {
   kTextLeft    = BIT(0),
   kTextRight   = BIT(1),
   kTextCenterX = BIT(2),
   kTextTop     = BIT(3),
   kTextBottom  = BIT(4),
   kTextCenterY = BIT(5)
};


//--- Widget status

enum EWidgetStatus {
   kWidgetWantFocus = BIT(0),
   kWidgetHasFocus  = BIT(1),
   kWidgetIsEnabled = BIT(2)
};


//--- Widget messages and submessages
//    (sub messages must be in the range 1-255)
//    (these should be on a separate include file)

enum EWidgetMessageTypes {
   kC_COMMAND          = 1,
      kCM_MENU            = 1,
      kCM_MENUSELECT      = 2,
      kCM_BUTTON          = 3,
      kCM_CHECKBUTTON     = 4,
      kCM_RADIOBUTTON     = 5,
      kCM_LISTBOX         = 6,
      kCM_COMBOBOX        = 7,
      kCM_TAB             = 8,
   kC_HSCROLL          = 2,
   kC_VSCROLL          = 3,
      kSB_LINEUP          = 1,
      kSB_LINEDOWN        = 2,
      kSB_PAGEUP          = 3,
      kSB_PAGEDOWN        = 4,
      kSB_SLIDERTRACK     = 5,
      kSB_SLIDERPOS       = 6,
   kC_TEXTENTRY        = 4,
      kTE_TEXTCHANGED     = 1,
      kTE_ENTER           = 2,
   kC_CONTAINER        = 5,
      kCT_ITEMCLICK       = 1,
      kCT_ITEMDBLCLICK    = 2,
      kCT_SELCHANGED      = 3,
   kC_HSLIDER          = 6,
   kC_VSLIDER          = 7,
      kSL_POS             = 1,
      kSL_TRACK           = 2,
   kC_LISTTREE         = 8,

   kC_MSGMAX           = 8
};


// Message cracking routines
inline Int_t MK_MSG(EWidgetMessageTypes msg, EWidgetMessageTypes submsg)
                                   { return (msg << 8) + submsg; }
inline Int_t GET_MSG(Long_t val)    { return Int_t((val >> 8) & 255); }
inline Int_t GET_SUBMSG(Long_t val) { return Int_t(val & 255); }


class TGWindow;


class TGWidget {

protected:
   Int_t            fWidgetId;     // the widget id (used for event processing)
   Int_t            fWidgetFlags;  // widget status flags (OR of EWidgetStatus)
   const TGWindow  *fMsgWindow;    // window which handles widget events
   TString          fCommand;      // command to be executed

   Int_t SetFlags(Int_t flags) { return fWidgetFlags |= flags; }
   Int_t ClearFlags(Int_t flags) { return fWidgetFlags &= ~flags; }

public:
   TGWidget() { }
   TGWidget(Int_t id) { fWidgetId = id; }
   virtual ~TGWidget() { }

   Int_t       WidgetId() const { return fWidgetId; }
   Bool_t      IsEnabled() const { return (Bool_t)((fWidgetFlags & kWidgetIsEnabled) != 0); }
   Bool_t      HasFocus() const { return (Bool_t)((fWidgetFlags & kWidgetHasFocus) != 0); }
   Bool_t      WantFocus() const { return (Bool_t)((fWidgetFlags & kWidgetWantFocus) != 0); }
   void        Associate(const TGWindow *w) { fMsgWindow = w; }
   void        SetCommand(const char *command) { fCommand = command; }
   const char *GetCommand() const { return fCommand.Data(); }

   ClassDef(TGWidget,0)  // Widget base class
};

#endif
