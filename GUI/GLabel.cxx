//*CMZ :  2.00/01 09/03/98  14.40.24  by  Fons Rademakers
//*-- Author :    Fons Rademakers   06/01/98

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
//*CMZ :  2.00/00 16/02/98  00.17.08  by  Fons Rademakers
//*-- Author :    Fons Rademakers   27/12/97
/**************************************************************************

    This source is based on Xclass95, a Win95-looking GUI toolkit.
    Copyright (C) 1996, 1997 David Barth, Ricky Ralston, Hector Peraza.

    Xclass95 is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

**************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGLabel                                                              //
//                                                                      //
// This class handles GUI labels.                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGLabel.h"
#include "TGWidget.h"
#include "TGString.h"


ClassImp(TGLabel)

//______________________________________________________________________________
TGLabel::TGLabel(const TGWindow *p, TGString *text, GContext_t norm,
                 FontStruct_t font, UInt_t options, ULong_t back) :
    TGFrame(p, 1, 1, options, back)
{
   // Create a label GUI object. TGLabel will become the owner of the
   // text and will delete it in its dtor.

   fText        = text;
   fTMode       = kTextCenterX | kTextCenterY;
   fTextChanged = kTRUE;
   fFontStruct  = font;
   fNormGC      = norm;

   int max_ascent, max_descent;

   fTWidth  = gGXW->TextWidth(fFontStruct, fText->GetString(), fText->GetLength());
   gGXW->GetFontProperties(fFontStruct, max_ascent, max_descent);
   fTHeight = max_ascent + max_descent;
   Resize(fTWidth, fTHeight + 1);
}

//______________________________________________________________________________
TGLabel::TGLabel(const TGWindow *p, const char *text, GContext_t norm,
                 FontStruct_t font, UInt_t options, ULong_t back) :
    TGFrame(p, 1, 1, options, back)
{
   // Create a label GUI object.

   fText        = new TGString(text);
   fTMode       = kTextCenterX | kTextCenterY;
   fTextChanged = kTRUE;
   fFontStruct  = font;
   fNormGC      = norm;

   int max_ascent, max_descent;

   fTWidth  = gGXW->TextWidth(fFontStruct, fText->GetString(), fText->GetLength());
   gGXW->GetFontProperties(fFontStruct, max_ascent, max_descent);
   fTHeight = max_ascent + max_descent;
   Resize(fTWidth, fTHeight + 1);
}

//______________________________________________________________________________
TGLabel::~TGLabel()
{
   // Delete label.

   if (fText) delete fText;
}

//______________________________________________________________________________
void TGLabel::SetText(TGString *new_text)
{
   // Set new text in label. After calling this method one needs to call
   // the parents frame's Layout() method to force updating of the label size.

   if (fText) delete fText;
   fText        = new_text;
   fTextChanged = kTRUE;

   int max_ascent, max_descent;

   fTWidth = gGXW->TextWidth(fFontStruct, fText->GetString(), fText->GetLength());
   gGXW->GetFontProperties(fFontStruct, max_ascent, max_descent);
   fTHeight = max_ascent + max_descent;

   // Resize is done when parent's is Layout() is called
   //Resize(fTWidth, fTHeight + 1);
   fClient->NeedRedraw(this);
}

//______________________________________________________________________________
void TGLabel::DoRedraw()
{
   // Redraw label widget.

   int x, y;

   if (fTextChanged) {
      TGFrame::DoRedraw();
      fTextChanged = kFALSE;
   }

   if (fTMode & kTextLeft)
      x = 0;
   else if (fTMode & kTextRight)
      x = fWidth - fTWidth;
   else
      x = (fWidth - fTWidth) >> 1;

   if (fTMode & kTextTop)
      y = 0;
   else if (fTMode & kTextBottom)
      y = fHeight - fTHeight;
   else
      y = (fHeight - fTHeight) >> 1;

   int max_ascent, max_descent;
   gGXW->GetFontProperties(fFontStruct, max_ascent, max_descent);
   fText->Draw(fId, fNormGC, x, y + max_ascent);
}
