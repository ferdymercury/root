//*CMZ :  2.00/00 28/02/98  11.12.17  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/02/98

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
// TGToolBar + TGHorizontal3DLine                                       //
//                                                                      //
// A toolbar is a composite frame that contains TGPictureButtons.       //
// A horizontal 3D line is a line that typically separates a toolbar    //
// from the menubar.                                                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGToolBar.h"
#include "TList.h"
#include "TGButton.h"
#include "TGPicture.h"


ClassImp(TGToolBar)
ClassImp(TGHorizontal3DLine)

//______________________________________________________________________________
TGToolBar::TGToolBar(const TGWindow *p, UInt_t w, UInt_t h,
                     UInt_t options, ULong_t back) :
   TGCompositeFrame(p, w, h, options, back)
{
   // Create toolbar widget.

   fWidgets  = new TList;
   fPictures = new TList;
}

//______________________________________________________________________________
TGToolBar::~TGToolBar()
{
   // Delete toolbar and its buttons and layout hints.

   if (fWidgets) fWidgets->Delete();

   TIter next(fPictures);
   const TGPicture *p;
   while ((p = (const TGPicture *) next()))
      fClient->FreePicture(p);

   delete fWidgets;
   delete fPictures;
}

//______________________________________________________________________________
void TGToolBar::AddButton(const TGWindow *w, ToolBarData_t *button, Int_t spacing)
{
   // Add button to toolbar. All buttons added via this method will be
   // deleted by the toolbar. On return the TGButton field of the
   // ToolBarData_t struct is filled in (iff fPixmap was valid).
   // Window w is the window to which the button messages will be send.

   const TGPicture *pic = fClient->GetPicture(button->fPixmap);
   if (!pic) {
      Error("AddButton", "pixmap not found: %s", button->fPixmap);
      return;
   }
   fPictures->Add((TObject*)pic);

   TGPictureButton *pbut;
   TGLayoutHints   *layout;

   pbut = new TGPictureButton(this, pic, button->fId);
   pbut->SetToolTipText(button->fTipText);

   layout = new TGLayoutHints(kLHintsTop | kLHintsLeft, spacing, 0, 2, 2);
   AddFrame(pbut, layout);
   pbut->AllowStayDown(button->fStayDown);
   pbut->Associate(w);
   button->fButton = pbut;

   fWidgets->Add(pbut);
   fWidgets->Add(layout);
}
