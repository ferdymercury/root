//*CMZ :  2.22/07 27/06/99  13.33.04  by  Fons Rademakers
//*CMZ :  2.00/11 03/08/98  11.57.34  by  Fons Rademakers
//*CMZ :  2.00/05 20/04/98  10.40.32  by  Fons Rademakers
//*CMZ :  2.00/04 06/04/98  10.08.02  by  Fons Rademakers
//*CMZ :  2.00/00 25/02/98  15.09.09  by  Fons Rademakers
//*-- Author :    Fons Rademakers   05/01/98

#ifndef ROOT_TGWidget
#define ROOT_TGWidget

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
#ifndef ROOT_WidgetMessageTypes
#include "WidgetMessageTypes.h"
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
