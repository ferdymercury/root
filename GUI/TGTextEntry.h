//*CMZ :  2.21/06 11/02/99  16.48.10  by  Valery Fine(fine@vxcern.cern.ch)
//*CMZ :  2.00/04 06/04/98  10.07.45  by  Fons Rademakers
//*CMZ :  2.00/00 23/02/98  16.26.51  by  Fons Rademakers
//*-- Author :    Fons Rademakers   08/01/98

#ifndef ROOT_TGTextEntry
#define ROOT_TGTextEntry

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
// TGTextEntry                                                          //
//                                                                      //
// A TGTextEntry is a one line text input widget.                       //
//                                                                      //
// Changing text in the text entry widget will generate the event:      //
// kC_TEXTENTRY, kTE_TEXTCHANGED, widget id, 0.                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGWidget
#include "TGWidget.h"
#endif
#ifndef ROOT_TGTextBuffer
#include "TGTextBuffer.h"
#endif

class TBlinkTimer;


class TGTextEntry : public TGFrame, public TGWidget {

friend class TGClient;

protected:
   TGTextBuffer     *fText;              // text buffer
   Int_t             fStartX;            // selection begin in pixels
   Int_t             fEndX;              // selection end in pixels
   Int_t             fStartIX;           // selection begin in characters
   Int_t             fEndIX;             // selection end in characters
   Bool_t            fSelectionOn;       // selection status (on/off)

   Int_t             fCursorX;           // cursor position in pixels
   Int_t             fCursorIX;          // cursor position in characters
   Bool_t            fCursorOn;          // cursor status (on/off)
   FontStruct_t      fFontStruct;        // text font
   GContext_t        fNormGC;            // normal drawing context
   GContext_t        fSelGC, fSelbackGC; // selection mode drawing contexts
   TBlinkTimer      *fCurBlink;          // cursor blink timer

   static Cursor_t      fgDefaultCursor;
   static GContext_t    fgDefaultGC;
   static GContext_t    fgDefaultSelectedGC;
   static GContext_t    fgDefaultSelectedBackgroundGC;
   static FontStruct_t  fgDefaultFontStruct;

   virtual void DoRedraw();
   Int_t GetCharacterIndex(Int_t xcoord);
   void  PastePrimary(Window_t wid, Atom_t property, Bool_t del);

public:
   TGTextEntry(const TGWindow *p, TGTextBuffer *text, Int_t id = -1,
               GContext_t norm = fgDefaultGC,
               FontStruct_t font = fgDefaultFontStruct,
               UInt_t option = kSunkenFrame | kDoubleBorder,
               ULong_t back = fgWhitePixel);
   virtual ~TGTextEntry();

   TGTextBuffer *GetBuffer() const { return fText; }

   virtual Bool_t HandleButton(Event_t *event);
   virtual Bool_t HandleDoubleClick(Event_t *event);
   virtual Bool_t HandleMotion(Event_t *event);
   virtual Bool_t HandleKey(Event_t *event);
   virtual Bool_t HandleFocusChange(Event_t *event);
   virtual Bool_t HandleSelection(Event_t *event);
   virtual Bool_t HandleTimer(TTimer *t);
   virtual void   DrawBorder();
   virtual void   SetState(Bool_t state);

   ClassDef(TGTextEntry,0)  // One line text entry widget
};

#endif
