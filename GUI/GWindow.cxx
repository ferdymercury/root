//*CMZ :  2.00/13 28/10/98  11.14.52  by  Fons Rademakers
//*CMZ :  2.00/00 16/02/98  02.36.04  by  Fons Rademakers
//*-- Author :    Fons Rademakers   28/12/97

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
// TGWindow                                                             //
//                                                                      //
// ROOT GUI Window base class.                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGWindow.h"
#include "TMath.h"


ClassImp(TGWindow)

//______________________________________________________________________________
TGWindow::TGWindow(const TGWindow *p, Int_t x, Int_t y, UInt_t w, UInt_t h,
                   UInt_t border, Int_t depth, UInt_t clss, void *visual,
                   SetWindowAttributes_t *attr)
{
   // Create a new window. Parent p must exist. No specified arguments
   // result in values from parent to be taken (or defaults).

   if (p) {
      fClient = p->fClient;
      fParent = p;
      fId = gGXW->CreateWindow(fParent->fId, x, y,
                               TMath::Max(w, (UInt_t) 1),
                               TMath::Max(h, (UInt_t) 1), border,
    			       depth, clss, visual, attr);
      fClient->RegisterWindow(this);
      fNeedRedraw = kFALSE;
   } else {
      Error("TGWindow", "no parent specified");
   }
}

//______________________________________________________________________________
TGWindow::TGWindow(TGClient *c, Window_t id, const TGWindow *parent)
{
   // Create a copy of a window.

   fClient = c;
   fId     = id;
   fParent = parent;
   fClient->RegisterWindow(this);
   fNeedRedraw = kFALSE;
}

//______________________________________________________________________________
TGWindow::~TGWindow()
{
   // Window destructor. Unregisters the window.

   if (fClient) fClient->UnregisterWindow(this);
}

//______________________________________________________________________________
void TGWindow::Move(Int_t x, Int_t y)
{
   // Move the window.

   gGXW->MoveWindow(fId, x, y);
}

//______________________________________________________________________________
void TGWindow::Resize(UInt_t w, UInt_t h)
{
   // Resize the window.

   gGXW->ResizeWindow(fId, TMath::Max(w, (UInt_t)1), TMath::Max(h, (UInt_t)1));
}

//______________________________________________________________________________
void TGWindow::MoveResize(Int_t x, Int_t y, UInt_t w, UInt_t h)
{
   // Move and resize the window.

   gGXW->MoveResizeWindow(fId, x, y, TMath::Max(w, (UInt_t)1), TMath::Max(h, (UInt_t)1));
}

//______________________________________________________________________________
Bool_t TGWindow::IsMapped()
{
   // Returns kTRUE if window is mapped on screen, kFALSE otherwise.

   WindowAttributes_t attr;

   gGXW->GetWindowAttributes(fId, attr);
   return (attr.fMapState != kIsUnmapped);
}
