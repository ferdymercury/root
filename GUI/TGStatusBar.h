//*CMZ :  2.00/00 11/02/98  12.49.03  by  Fons Rademakers
//*-- Author :    Fons Rademakers   23/01/98

#ifndef ROOT_TGStatusBar
#define ROOT_TGStatusBar

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
// TGStatusBar                                                          //
//                                                                      //
// Provides a StatusBar widget.                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif


class TGStatusBar : public TGFrame {

friend class TGClient;
friend class TGStatusBarPart;

protected:
   TGStatusBarPart **fStatusPart; // frames containing statusbar text
   Int_t            *fParts;      // size of parts (in percent of total width)
   Int_t             fNpart;      // number of parts
   Int_t             fYt;         // y drawing position (depending on font)
   Int_t            *fXt;         // x position for each part

   static GContext_t    fgDefaultGC;
   static FontStruct_t  fgDefaultFontStruct;

   virtual void DoRedraw();

public:
   TGStatusBar(const TGWindow *p, UInt_t w, UInt_t h,
               UInt_t options = kSunkenFrame,
               ULong_t back = fgDefaultFrameBackground);
   virtual ~TGStatusBar();

   virtual void DrawBorder();
   virtual void SetText(TGString *text, Int_t partidx = 0);
   virtual void SetText(const char *text, Int_t partidx = 0);
   virtual void SetParts(Int_t *parts, Int_t npart);
   virtual void SetParts(Int_t npart);

   ClassDef(TGStatusBar,0)  // Status bar widget
};

#endif
