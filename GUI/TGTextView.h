//*CMZ :  2.00/12 14/09/98  16.55.32  by  Fons Rademakers
//*CMZ :  2.00/06 26/04/98  17.29.59  by  Fons Rademakers
//*CMZ :  2.00/01 11/03/98  17.03.01  by  Fons Rademakers
//*CMZ :  2.00/00 24/02/98  11.40.57  by  Fons Rademakers
//*-- Author :    Fons Rademakers   23/02/98

#ifndef ROOT_TGTextView
#define ROOT_TGTextView

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
// TGTextView                                                           //
//                                                                      //
// A TGTextView displays a file or a text buffer in a frame with a      //
// vertical scrollbar. Internally it uses a TGTextFrame which displays  //
// the text.                                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif


class TGVScrollBar;


class TGTextFrame : public TGFrame {

friend class TGClient;

protected:
   char       **fChars;      // lines of text
   Int_t       *fLnlen;      // length of each line
   Int_t        fTHeight;    // height of line of text
   Int_t        fNlines;     // number of lines
   Int_t        fMaxLines;   // maximum number of lines in fChars and fLnlen
   Int_t        fTop;        // current top line
   FontStruct_t fFont;       // font used to display text
   GContext_t   fGC;         // graphics context to display text

   static FontStruct_t  fgDefaultFontStruct;

   void DrawRegion(Int_t x, Int_t y, UInt_t w, UInt_t h);
   void ScrollWindow(Int_t new_top);
   void Expand(Int_t newSize);

public:
   TGTextFrame(TGWindow *parent, UInt_t w, UInt_t h, UInt_t options,
               ULong_t back = fgDefaultFrameBackground);
   virtual ~TGTextFrame();

   Bool_t LoadFile(const char *fname);
   Bool_t LoadBuffer(const char *txtbuf);
   void   Clear(Option_t *opt = "");
   Int_t  GetLines() const { return fNlines; }
   Int_t  GetVisibleLines() const { return (fHeight / fTHeight); }
   void   SetTopLine(Int_t new_top);

   virtual Bool_t HandleExpose(Event_t *event) {
       DrawRegion(event->fX, event->fY, event->fWidth, event->fHeight);
       return kTRUE;
   }

   ClassDef(TGTextFrame,0)  //Frame containing (multi-line) text
};


class TGTextView : public TGCompositeFrame {

protected:
   TGTextFrame   *fTextCanvas;
   TGVScrollBar  *fVsb;

public:
   TGTextView(TGWindow *parent, UInt_t w, UInt_t h,
              UInt_t options = kChildFrame,
              ULong_t back = fgDefaultFrameBackground);
   virtual ~TGTextView();

   Bool_t LoadFile(const char *fname);
   Bool_t LoadBuffer(const char *txtbuf);
   void   Clear(Option_t *opt = "");

   virtual Bool_t ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);
   virtual void   Layout();
   virtual void   DrawBorder();
   virtual TGDimension GetDefaultSize() const { return TGDimension(fWidth, fHeight); }

   const TGTextFrame *GetTextFrame() const { return fTextCanvas; }

   ClassDef(TGTextView,0)  //Text view widget (contains a text frame and vertical scrollbar)
};

#endif
