//*CMZ :  2.20/01 02/12/98  18.02.00  by  Fons Rademakers
//*CMZ :  2.00/09 19/06/98  11.13.44  by  Rene Brun
//*CMZ :  2.00/07 18/05/98  20.13.52  by  Fons Rademakers
//*CMZ :  2.00/06 13/05/98  09.17.47  by  Kaori Wada
//*CMZ :  2.00/01 13/03/98  12.08.09  by  Fons Rademakers
//*CMZ :  2.00/00 04/03/98  17.28.16  by  Fons Rademakers
//*-- Author :    Fons Rademakers   27/12/97

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
// TGClient                                                             //
//                                                                      //
// Window client. In client server windowing systems, like X11 this     //
// class is used to make the initial connection to the window server.   //
// It is the only GUI class that does not inherit from TGObject.        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGClient.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TEnv.h"
#include "THashList.h"
#include "TSysEvtHandler.h"
#include "TGXW.h"
#include "TGWindow.h"
#include "TGPicture.h"
#include "TGMimeTypes.h"
#include "TGFrame.h"
#include "TGLabel.h"
#include "TGButton.h"
#include "TGTextEntry.h"
#include "TGMenu.h"
#include "TGScrollBar.h"
#include "TGListBox.h"
#include "TGComboBox.h"
#include "TGTab.h"
#include "TGListView.h"
#include "TGFSComboBox.h"
#include "TGStatusBar.h"
#include "TGListTree.h"
#include "TGTextView.h"
#include "TGToolTip.h"


static Pixmap_t checkered, checkered1;

const int gray_width  = 8;
const int gray_height = 8;
static unsigned char gray_bits[] = {
   0x55, 0xaa, 0x55, 0xaa,
   0x55, 0xaa, 0x55, 0xaa
};

const int r_width = 12;
const int r_height = 12;
static unsigned char r1_bits[] = {
   0xf0, 0x00, 0x0c, 0x03, 0x02, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00
};

static unsigned char r2_bits[] = {
   0x00, 0x00, 0xf0, 0x00, 0x0c, 0x03, 0x04, 0x00, 0x02, 0x00, 0x02, 0x00,
   0x02, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static unsigned char r3_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08,
   0x00, 0x08, 0x00, 0x08, 0x00, 0x04, 0x00, 0x04, 0x0c, 0x03, 0xf0, 0x00
};

static unsigned char r4_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x04,
   0x00, 0x04, 0x00, 0x04, 0x00, 0x02, 0x0c, 0x03, 0xf0, 0x00, 0x00, 0x00
};

static unsigned char r5_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf8, 0x01, 0xfc, 0x03, 0xfc, 0x03,
   0xfc, 0x03, 0xfc, 0x03, 0xf8, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00
};

static unsigned char r6_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xf0, 0x00,
   0xf0, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const int chk_width = 13;
const int chk_height = 13;
static unsigned char chk_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x03, 0x88, 0x03,
   0xd8, 0x01, 0xf8, 0x00, 0x70, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00
};


// The following global declarations were moved from their original
// places to here in order to avoid the linker including unnecessary
// widgets in an executable file.

Colormap_t TGPicturePool::fgDefaultColormap;

GContext_t TGButton::fgDefaultGC;
GContext_t TGButton::fgHibckgndGC;
FontStruct_t TGTextButton::fgDefaultFontStruct;

GContext_t TGCheckButton::fgDefaultGC;
FontStruct_t TGCheckButton::fgDefaultFontStruct;

GContext_t TGRadioButton::fgDefaultGC;
FontStruct_t TGRadioButton::fgDefaultFontStruct;
Pixmap_t TGRadioButton::fgR1;
Pixmap_t TGRadioButton::fgR2;
Pixmap_t TGRadioButton::fgR3;
Pixmap_t TGRadioButton::fgR4;
Pixmap_t TGRadioButton::fgR5;
Pixmap_t TGRadioButton::fgR6;

ULong_t TGFrame::fgDefaultFrameBackground;
ULong_t TGFrame::fgDefaultSelectedBackground;
ULong_t TGFrame::fgWhitePixel;
ULong_t TGFrame::fgBlackPixel;
GContext_t TGFrame::fgBlackGC;
GContext_t TGFrame::fgWhiteGC;
GContext_t TGFrame::fgHilightGC;
GContext_t TGFrame::fgShadowGC;
GContext_t TGFrame::fgBckgndGC;

GContext_t TGLabel::fgDefaultGC;
FontStruct_t TGLabel::fgDefaultFontStruct;

GContext_t TGMenuTitle::fgDefaultGC;
GContext_t TGMenuTitle::fgDefaultSelectedGC;
FontStruct_t TGMenuTitle::fgDefaultFontStruct;

GContext_t TGPopupMenu::fgDefaultGC;
GContext_t TGPopupMenu::fgDefaultSelectedGC;
GContext_t TGPopupMenu::fgDefaultSelectedBackgroundGC;
FontStruct_t TGPopupMenu::fgDefaultFontStruct;
FontStruct_t TGPopupMenu::fgHilightFontStruct;
Cursor_t TGPopupMenu::fgDefaultCursor;
Pixmap_t TGPopupMenu::fgCheckmark;
Pixmap_t TGPopupMenu::fgRadiomark;
Cursor_t TGMenuBar::fgDefaultCursor;

Pixmap_t TGScrollBar::fgBckgndPixmap;
Int_t TGScrollBar::fgScrollBarWidth;

GContext_t TGTab::fgDefaultGC;
FontStruct_t TGTab::fgDefaultFontStruct;

GContext_t TGTextEntry::fgDefaultGC;
GContext_t TGTextEntry::fgDefaultSelectedGC;
GContext_t TGTextEntry::fgDefaultSelectedBackgroundGC;
FontStruct_t TGTextEntry::fgDefaultFontStruct;
Cursor_t TGTextEntry::fgDefaultCursor;

GContext_t TGGroupFrame::fgDefaultGC;
FontStruct_t TGGroupFrame::fgDefaultFontStruct;

ULong_t TGTextLBEntry::fgSelPixel;
GContext_t TGTextLBEntry::fgDefaultGC;            // this is not shared.
FontStruct_t TGTextLBEntry::fgDefaultFontStruct;

Cursor_t TGComboBoxPopup::fgDefaultCursor;

GContext_t TGSelectedPicture::fgSelectedGC;
GContext_t TGLVContainer::fgLineGC;
GContext_t TGListView::fgDefaultGC;
FontStruct_t TGListView::fgDefaultFontStruct;

ULong_t TGLVEntry::fgSelPixel;
GContext_t TGLVEntry::fgDefaultGC;
FontStruct_t TGLVEntry::fgDefaultFontStruct;

ULong_t TGTreeLBEntry::fgSelPixel;
GContext_t TGTreeLBEntry::fgDefaultGC;            // this is not shared.
FontStruct_t TGTreeLBEntry::fgDefaultFontStruct;

GContext_t TGStatusBar::fgDefaultGC;
FontStruct_t TGStatusBar::fgDefaultFontStruct;

FontStruct_t TGListTree::fgDefaultFontStruct;

FontStruct_t TGTextFrame::fgDefaultFontStruct;

ULong_t TGToolTip::fgLightYellowPixel;


// Global pointer to the TGClient object

TGClient *gClient;


//----- Graphics Input handler -------------------------------------------------
//______________________________________________________________________________
class TGInputHandler : public TFileHandler {
private:
   TGClient  *fClient;
public:
   TGInputHandler(TGClient *c, Int_t fd) : TFileHandler(fd, 1) { fClient = c; }
   Bool_t Notify();
   // Important: don't override ReadNotify()
};

//______________________________________________________________________________
Bool_t TGInputHandler::Notify()
{
   return fClient->HandleInput();
}


ClassImp(TGClient)

//______________________________________________________________________________
TGClient::TGClient(const char *dpyName)
{
   // Create a connection with the display sever on host DpyName and setup
   // the complete GUI system, i.e., graphics contexts, fonts, etc. for all
   // widgets.

   if (gClient) {
      Error("TGClient", "only one instance of TGClient allowed");
      return;
   }

   char norm_font[256];
   char bold_font[256];
   char small_font[256];
   char prop_font[256];
   char backcolor[256];
   char forecolor[256];
   char selbackcolor[256];
   char selforecolor[256];
   char icon_path[2048], mime_file[256], line[2048];
   GCValues_t          gval;
   WindowAttributes_t  root_attr;

   // Load GUI defaults from .rootrc
   strcpy(norm_font,    gEnv->GetValue("Gui.NormalFont","-adobe-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1"));
   strcpy(bold_font,    gEnv->GetValue("Gui.BoldFont", "-adobe-helvetica-bold-r-*-*-12-*-*-*-*-*-iso8859-1"));
   strcpy(small_font,   gEnv->GetValue("Gui.SmallFont", "-adobe-helvetica-medium-r-*-*-10-*-*-*-*-*-iso8859-1"));
   strcpy(prop_font,    gEnv->GetValue("Gui.ProportionalFont", "-adobe-courier-medium-r-*-*-12-*-*-*-*-*-iso8859-1"));
   strcpy(backcolor,    gEnv->GetValue("Gui.BackgroundColor", "#c0c0c0"));
   strcpy(forecolor,    gEnv->GetValue("Gui.ForegroundColor", "black"));
   strcpy(selforecolor, gEnv->GetValue("Gui.SelectForegroundColor", "white"));
   strcpy(selbackcolor, gEnv->GetValue("Gui.SelectBackgroundColor", "#000080"));
#ifndef R__VMS
   sprintf(line, "%s/icons:%s/icons:.", gSystem->Getenv("HOME"),
                                        gSystem->Getenv("ROOTSYS"));
   strcpy(icon_path, gEnv->GetValue("Gui.IconPath", line));
   sprintf(line, "%s/.root.mimes", gSystem->Getenv("HOME"));
#else
   sprintf(line,"%s[ICONS]",gSystem->Getenv("ROOTSYS"));
   strcpy(icon_path,gEnv->GetValue("Gui.IconPath",line));
   sprintf(line,"%sroot.mimes",gSystem->Getenv("HOME"));
#endif

   strcpy(mime_file, gEnv->GetValue("Gui.MimeTypeFile", line));
   if (gSystem->AccessPathName(mime_file, kReadPermission))
#ifdef R__VMS
   {
      sprintf(mime_file,"%s[ICONS]root.mimes",gSystem->Getenv("ROOTSYS"));
   }
#else
      sprintf(mime_file, "%s/icons/root.mimes", gSystem->Getenv("ROOTSYS"));
#endif
   // Set DISPLAY based on utmp (only if DISPLAY is not yet set).
   gSystem->SetDisplay();

   // Open the connection to the display
   if ((fXfd = gGXW->OpenDisplay(dpyName)) < 0) {
      Error("TGClient", "can't open display \"%s\", bombing...",
            gGXW->DisplayName(dpyName));
      gSystem->Exit(1);
   }

   // Initialize internal window list. Use a THashList for fast
   // finding of windows based on window id (see GetWindowById()).

   fWlist = new THashList(200);

   // Setup some atoms (defined in TGXW)...

   gWM_DELETE_WINDOW = gGXW->InternAtom("WM_DELETE_WINDOW", kFALSE);
   gMOTIF_WM_HINTS   = gGXW->InternAtom("_MOTIF_WM_HINTS", kFALSE);
   gROOT_MESSAGE     = gGXW->InternAtom("_ROOT_MESSAGE", kFALSE);

   // Create an object for the root window, create picture pool, etc...

   fGlobalNeedRedraw = kFALSE;

   fRoot = new TGFrame(this, gGXW->GetDefaultRootWindow());

   fPicturePool  = new TGPicturePool(this, icon_path);
   fMimeTypeList = new TGMimeTypes(this, mime_file);

   // Set font and color defaults...

   TGLabel::fgDefaultFontStruct =
   TGTab::fgDefaultFontStruct =
   TGTextLBEntry::fgDefaultFontStruct =
   TGTreeLBEntry::fgDefaultFontStruct =
   TGGroupFrame::fgDefaultFontStruct =
   TGTextEntry::fgDefaultFontStruct =
   TGRadioButton::fgDefaultFontStruct =
   TGCheckButton::fgDefaultFontStruct =
   TGTextButton::fgDefaultFontStruct =
   TGMenuTitle::fgDefaultFontStruct =
   TGPopupMenu::fgDefaultFontStruct = GetFontByName(norm_font);
   TGPopupMenu::fgHilightFontStruct = GetFontByName(bold_font);

   TGListView::fgDefaultFontStruct =
   TGStatusBar::fgDefaultFontStruct =
   TGListTree::fgDefaultFontStruct =
   TGLVEntry::fgDefaultFontStruct = GetFontByName(small_font);

   TGTextFrame::fgDefaultFontStruct = GetFontByName(prop_font);

   GetColorByName("white", fWhite);  // white and black always exist
   GetColorByName("black", fBlack);
   if (!GetColorByName("LightYellow", TGToolTip::fgLightYellowPixel))
      TGToolTip::fgLightYellowPixel = fWhite;

   GetColorByName(backcolor, fBackColor);  // should check for alloc errors
   GetColorByName(forecolor, fForeColor);
   fHilite = GetHilite(fBackColor);
   fShadow = GetShadow(fBackColor);
   GetColorByName(selforecolor, fSelForeColor);
   GetColorByName(selbackcolor, fSelBackColor);

   //--- Default GCs and misc...
   gval.fMask = kGCForeground | kGCBackground | kGCFont |
                kGCFillStyle | kGCGraphicsExposures;
   gval.fFillStyle = kFillSolid;
   gval.fGraphicsExposures = kFALSE;
   gval.fFont = gGXW->GetFontHandle(TGLabel::fgDefaultFontStruct);
   gval.fBackground = fBackColor;

   TGFrame::fgBlackPixel = gval.fForeground = fBlack;
   TGFrame::fgBlackGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   TGFrame::fgWhitePixel = gval.fForeground = fWhite;
   TGFrame::fgWhiteGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   gval.fForeground = fHilite;
   TGFrame::fgHilightGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   gval.fForeground = fShadow;
   TGFrame::fgShadowGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   gval.fForeground = fBackColor;
   TGFrame::fgBckgndGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   gval.fForeground = fForeColor;
   TGRadioButton::fgDefaultGC =
   TGCheckButton::fgDefaultGC =
   TGLabel::fgDefaultGC =
   TGTab::fgDefaultGC =
   TGGroupFrame::fgDefaultGC =
   TGTextEntry::fgDefaultGC =
   TGMenuTitle::fgDefaultGC =
   TGPopupMenu::fgDefaultGC = gGXW->CreateGC(fRoot->GetId(), &gval);
   TGButton::fgDefaultGC = gGXW->CreateGC(fRoot->GetId(), &gval);
   TGTextLBEntry::fgDefaultGC = gGXW->CreateGC(fRoot->GetId(), &gval);
   TGTreeLBEntry::fgDefaultGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   TGFrame::fgDefaultFrameBackground = fBackColor;
   TGFrame::fgDefaultSelectedBackground = gval.fForeground = fSelBackColor;
   TGTextEntry::fgDefaultSelectedBackgroundGC =
   TGPopupMenu::fgDefaultSelectedBackgroundGC =
      gGXW->CreateGC(fRoot->GetId(), &gval);

   TGLVEntry::fgSelPixel =
   TGTextLBEntry::fgSelPixel =
   TGTreeLBEntry::fgSelPixel = gval.fForeground = fSelForeColor;
   TGTextEntry::fgDefaultSelectedGC =
   TGMenuTitle::fgDefaultSelectedGC =
   TGPopupMenu::fgDefaultSelectedGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   gval.fFont = gGXW->GetFontHandle(TGLVEntry::fgDefaultFontStruct);
   gval.fForeground = fForeColor;
   TGLVEntry::fgDefaultGC = gGXW->CreateGC(fRoot->GetId(), &gval);
   TGListView::fgDefaultGC = gGXW->CreateGC(fRoot->GetId(), &gval);
   TGStatusBar::fgDefaultGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   TGComboBoxPopup::fgDefaultCursor =
   TGMenuBar::fgDefaultCursor =
   TGPopupMenu::fgDefaultCursor = gGXW->CreateCursor(kArrowRight);
   TGTextEntry::fgDefaultCursor = gGXW->CreateCursor(kCaret);

   gGXW->GetWindowAttributes(fRoot->GetId(), root_attr);
   TGPicturePool::fgDefaultColormap = root_attr.fColormap;

   TGScrollBar::fgScrollBarWidth = kDefaultScrollBarWidth;

   TGScrollBar::fgBckgndPixmap =
   checkered = gGXW->CreatePixmap(fRoot->GetId(),
                     (const char *)gray_bits, gray_width, gray_height,
                     fBackColor, fHilite, root_attr.fDepth);

   gval.fMask = kGCForeground | kGCBackground | kGCTile |
                kGCFillStyle  | kGCGraphicsExposures;
   gval.fForeground = fHilite;
   gval.fBackground = fBackColor;
   gval.fFillStyle  = kFillTiled;
   gval.fTile       = checkered;
   TGButton::fgHibckgndGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   TGRadioButton::fgR1 = gGXW->CreateBitmap(fRoot->GetId(),
                             (const char *)r1_bits, r_width, r_height);
   TGRadioButton::fgR2 = gGXW->CreateBitmap(fRoot->GetId(),
                             (const char *)r2_bits, r_width, r_height);
   TGRadioButton::fgR3 = gGXW->CreateBitmap(fRoot->GetId(),
                             (const char *)r3_bits, r_width, r_height);
   TGRadioButton::fgR4 = gGXW->CreateBitmap(fRoot->GetId(),
                             (const char *)r4_bits, r_width, r_height);
   TGRadioButton::fgR5 = gGXW->CreateBitmap(fRoot->GetId(),
                             (const char *)r5_bits, r_width, r_height);
   TGPopupMenu::fgRadiomark =
   TGRadioButton::fgR6 = gGXW->CreateBitmap(fRoot->GetId(),
                             (const char *)r6_bits, r_width, r_height);
   TGPopupMenu::fgCheckmark = gGXW->CreateBitmap(fRoot->GetId(),
                                 (const char *)chk_bits, chk_width, chk_height);

   gval.fMask |= kGCFillStyle | kGCStipple;
   gval.fForeground = fSelBackColor;
   gval.fBackground = fBlack;
   gval.fFillStyle = kFillStippled;
   checkered1 = gGXW->CreatePixmap(fRoot->GetId(), (const char *)gray_bits,
                                   gray_width, gray_height, 1, 0, 1);
   gval.fStipple = checkered1;
   TGSelectedPicture::fgSelectedGC = gGXW->CreateGC(fRoot->GetId(), &gval);

   gval.fMask = kGCForeground | kGCBackground | kGCFunction | kGCFillStyle |
                kGCLineWidth  | kGCLineStyle  | kGCSubwindowMode |
                kGCGraphicsExposures;
   gval.fForeground = fWhite ^ fBlack;
   gval.fBackground = fWhite;
   gval.fFunction   = kGXxor;
   gval.fLineWidth  = 0;
   gval.fLineStyle  = kLineOnOffDash;
   gval.fFillStyle  = kFillSolid;
   gval.fSubwindowMode = kIncludeInferiors;
   gval.fGraphicsExposures = kFALSE;
   TGLVContainer::fgLineGC = gGXW->CreateGC(fRoot->GetId(), &gval);
   gGXW->SetDashes(TGLVContainer::fgLineGC, 0, "\x1\x1", 2);

   fWaitForWindow = kNone;

   if (fXfd > 0) {
      TGInputHandler *xi = new TGInputHandler(this, fXfd);
      gSystem->AddFileHandler(xi);
      // X11 events are handled via gXDisplay->Notify() in
      // TUnixSystem::DispatchOneEvent(). When no events available we wait for
      // events on all TFileHandlers including this one via a select() call.
      // However, X11 events are always handled via gXDisplay->Notify() and not
      // via the ReadNotify() (therefore TGInputHandler should not override
      // TFileHandler::ReadNotify()).
      gXDisplay = xi;
   }

   gClient = this;
}

//______________________________________________________________________________
const TGPicture *TGClient::GetPicture(const char *name)
{
   // Get picture from pool. Picture must be freed using
   // TGClient::FreePicture(). If picture is not found 0 is returned.

   return fPicturePool->GetPicture(name);
}

//______________________________________________________________________________
const TGPicture *TGClient::GetPicture(const char *name,
                                      UInt_t new_width, UInt_t new_height)
{
   // Get picture with specified size from pool (picture will be scaled if
   // necessary). Picture must be freed using TGClient::FreePicture(). If
   // picture is not found 0 is returned.

   return fPicturePool->GetPicture(name, new_width, new_height);
}

//______________________________________________________________________________
void TGClient::FreePicture(const TGPicture *pic)
{
   // Free picture resource.

   if (pic) fPicturePool->FreePicture(pic);
}

//______________________________________________________________________________
void TGClient::NeedRedraw(TGWindow *w)
{
   // Set redraw flags.

   w->fNeedRedraw = kTRUE;
   fGlobalNeedRedraw = kTRUE;
}

//______________________________________________________________________________
Bool_t TGClient::GetColorByName(const char *name, ULong_t &pixel) const
{
   // Get a color by name. If color is found return kTRUE and pixel is
   // set to the color's pixel value, kFALSE otherwise.

   ColorStruct_t      color;
   WindowAttributes_t attributes;
   Bool_t             status = kTRUE;

   gGXW->GetWindowAttributes(fRoot->GetId(), attributes);
   color.fPixel = 0;
   if (!gGXW->ParseColor(attributes.fColormap, name, color)) {
      Error("GetColorByName", "couldn't parse color %s", name);
      status = kFALSE;
   } else if(!gGXW->AllocColor(attributes.fColormap, color)) {
      Warning("GetColorByName", "couldn't retrieve color %s", name);
      status = kFALSE;
   }

   pixel = color.fPixel;

   return status;
}

//______________________________________________________________________________
FontStruct_t TGClient::GetFontByName(const char *name) const
{
   // Get a font by name. If font is not found, fixed font is returned,
   // if fixed font also does not exist return 0 and print error.

   FontStruct_t font = gGXW->LoadQueryFont(name);

   if (!font) {
      font = gGXW->LoadQueryFont("fixed");
      if (font)
         Warning("GetFontByName", "couldn't retrieve font %s, using \"fixed\"", name);
   }
   if (!font)
      Error("GetFontByName", "couldn't retrieve font %s nor backup font \"fixed\"", name);

   return font;
}

//______________________________________________________________________________
ULong_t TGClient::GetHilite(ULong_t base_color) const
{
   // Return pixel value of hilite color based on base_color.

   ColorStruct_t      color, white_p;
   WindowAttributes_t attributes;

   gGXW->GetWindowAttributes(fRoot->GetId(), attributes);

   color.fPixel = base_color;
   gGXW->QueryColor(attributes.fColormap, color);

   GetColorByName("white", white_p.fPixel);
   gGXW->QueryColor(attributes.fColormap, white_p);

   color.fRed   = TMath::Max((UShort_t)(white_p.fRed/5),   color.fRed);
   color.fGreen = TMath::Max((UShort_t)(white_p.fGreen/5), color.fGreen);
   color.fBlue  = TMath::Max((UShort_t)(white_p.fBlue/5),  color.fBlue);

   color.fRed   = (UShort_t)TMath::Min((Int_t)white_p.fRed,   (Int_t)(color.fRed*140)/100);
   color.fGreen = (UShort_t)TMath::Min((Int_t)white_p.fGreen, (Int_t)(color.fGreen*140)/100);
   color.fBlue  = (UShort_t)TMath::Min((Int_t)white_p.fBlue,  (Int_t)(color.fBlue*140)/100);

   if (!gGXW->AllocColor(attributes.fColormap, color))
      Error("GetHilite", "couldn't allocate hilight color");

   return color.fPixel;
}

//______________________________________________________________________________
ULong_t TGClient::GetShadow(ULong_t base_color) const
{
   // Return pixel value of shadow color based on base_color.
   // Shadow is 60% of base_color intensity.

   ColorStruct_t      color;
   WindowAttributes_t attributes;

   gGXW->GetWindowAttributes(fRoot->GetId(), attributes);

   color.fPixel = base_color;
   gGXW->QueryColor(attributes.fColormap, color);

   color.fRed   = (UShort_t)((color.fRed*60)/100);
   color.fGreen = (UShort_t)((color.fGreen*60)/100);
   color.fBlue  = (UShort_t)((color.fBlue*60)/100);

   if (!gGXW->AllocColor(attributes.fColormap, color))
      Error("GetShadow", "couldn't allocate shadow color");

  return color.fPixel;
}

//______________________________________________________________________________
void TGClient::RegisterWindow(TGWindow *w)
{
   // Add a TGWindow to the clients list of windows.

   fWlist->Add(w);
}

//______________________________________________________________________________
void TGClient::UnregisterWindow(TGWindow *w)
{
   // Remove a TGWindow from the list of windows.

   fWlist->Remove(w);
}

//______________________________________________________________________________
TGWindow *TGClient::GetWindowById(Window_t wid) const
{
   // Find a TGWindow via its handle. If window is not found return 0.

   TGWindow  wt(wid);

   return (TGWindow *) fWlist->FindObject(&wt);
}

//______________________________________________________________________________
TGClient::~TGClient()
{
   // Closing down client: cleanup and close X connection.

   delete fPicturePool;
   delete fMimeTypeList;
   if (fWlist) fWlist->Delete();
   delete fWlist;

   gGXW->DeleteFont(TGPopupMenu::fgDefaultFontStruct);
   gGXW->DeleteFont(TGPopupMenu::fgHilightFontStruct);
   gGXW->DeleteFont(TGLVEntry::fgDefaultFontStruct);

   gGXW->DeleteGC(TGPopupMenu::fgDefaultGC);
   gGXW->DeleteGC(TGButton::fgDefaultGC);
   gGXW->DeleteGC(TGButton::fgHibckgndGC);
   gGXW->DeleteGC(TGFrame::fgWhiteGC);
   gGXW->DeleteGC(TGFrame::fgHilightGC);
   gGXW->DeleteGC(TGFrame::fgShadowGC);
   gGXW->DeleteGC(TGFrame::fgBckgndGC);
   gGXW->DeleteGC(TGPopupMenu::fgDefaultSelectedGC);
   gGXW->DeleteGC(TGTreeLBEntry::fgDefaultGC);
   gGXW->DeleteGC(TGTextLBEntry::fgDefaultGC);
   gGXW->DeleteGC(TGLVEntry::fgDefaultGC);
   gGXW->DeleteGC(TGListView::fgDefaultGC);
   gGXW->DeleteGC(TGStatusBar::fgDefaultGC);

   gGXW->DeletePixmap(checkered);
   gGXW->DeletePixmap(checkered1);

   gGXW->CloseDisplay(); // this should do a cleanup of the remaining
                         // X allocated objects...
}

//______________________________________________________________________________
Bool_t TGClient::ProcessOneEvent()
{
   // Process one event. This method should only be called when there is
   // a GUI event ready to be processed. If event has been processed
   // kTRUE is returned. If processing of a specific event type for a specific
   // window was requested kFALSE is returned when specific event has been
   // processed, kTRUE otherwise. If no more pending events return kFALSE.

   Event_t event;

   if (gGXW->EventsPending()) {
      gGXW->NextEvent(event);
      if (fWaitForWindow == kNone) {
         HandleEvent(&event);
         return kTRUE;
      } else {
         HandleMaskEvent(&event, fWaitForWindow);
         if ((event.fType == fWaitForEvent) && (event.fWindow == fWaitForWindow))
            fWaitForWindow = kNone;
         return kTRUE;
      }
   }

   // if nothing else to do redraw windows that need redrawing
   if (DoRedraw()) return kTRUE;

   return kFALSE;
}

//______________________________________________________________________________
Bool_t TGClient::HandleInput()
{
   // Handles input from the display server. Returns kTRUE if one or more
   // events have been processed, kFALSE otherwise.

   Bool_t handledevent = kFALSE;

   while (ProcessOneEvent())
      handledevent = kTRUE;
   return handledevent;
}

//______________________________________________________________________________
void TGClient::WaitFor(TGWindow *w)
{
   // Wait for window to be destroyed.

   Window_t wsave = fWaitForWindow;

   fWaitForWindow = w->GetId();
   fWaitForEvent  = kDestroyNotify;

   while (fWaitForWindow != kNone)
      gSystem->InnerLoop();

   fWaitForWindow = wsave;
}

//______________________________________________________________________________
void TGClient::WaitForUnmap(TGWindow *w)
{
   // Wait for window to be unmapped.

   Window_t wsave = fWaitForWindow;

   fWaitForWindow = w->GetId();
   fWaitForEvent  = kUnmapNotify;

   while (fWaitForWindow != kNone)
      gSystem->InnerLoop();

   fWaitForWindow = wsave;
}

//______________________________________________________________________________
Bool_t TGClient::DoRedraw()
{
   // Redraw all windows that need redrawing. Returns kFALSE if no redraw
   // was needed, kTRUE otherwise.
   // Only redraw the application's windows when the event queue
   // does not contain expose event anymore.

   if (!fGlobalNeedRedraw) return kFALSE;

   TGWindow *w;
   TObjLink *lnk = fWlist->FirstLink();
   while (lnk) {
      w = (TGWindow *) lnk->GetObject();
      if (w->fNeedRedraw) {
         w->DoRedraw();
         w->fNeedRedraw = kFALSE;
      }
      lnk = lnk->Next();
   }

   fGlobalNeedRedraw = kFALSE;
   return kTRUE;
}


//______________________________________________________________________________
Bool_t TGClient::HandleEvent(Event_t *event)
{
   // Handle a GUI event.

   TGWindow *w;

   // Find window where event happened
   if ((w = GetWindowById(event->fWindow)) == 0) return kFALSE;

   // and let it handle the event
   w->HandleEvent(event);

   return kTRUE;
}

//______________________________________________________________________________
Bool_t TGClient::HandleMaskEvent(Event_t *event, Window_t wid)
{
   // Handle masked events only if window wid is the window for which the
   // event was reported or if wid is a parent of the event window. The not
   // masked event are handled directly. The masked events are:
   // kButtonPress, kButtonRelease, kKeyPress, kKeyRelease, kEnterNotify,
   // kLeaveNotify, kMotionNotify.

   TGWindow *w, *ptr;

   if ((w = GetWindowById(event->fWindow)) == 0) return kFALSE;

   // This breaks class member protection, but TGClient is a friend of all
   // classes and _should_ know what to do and what *not* to do...

   for (ptr = w; ptr->fParent != 0; ptr = (TGWindow *) ptr->fParent)
      if ((ptr->fId == wid) ||
          ((event->fType != kButtonPress) &&
           (event->fType != kButtonRelease) &&
           (event->fType != kGKeyPress) &&
           (event->fType != kKeyRelease) &&
           (event->fType != kEnterNotify) &&
           (event->fType != kLeaveNotify) &&
           (event->fType != kMotionNotify))) {
         w->HandleEvent(event);
         return kTRUE;
      }

   if (event->fType == kButtonPress || event->fType == kGKeyPress)
      gGXW->Bell(0);

   return kFALSE;
}

//______________________________________________________________________________
void TGClient::ProcessLine(TString cmd, Long_t msg, Long_t parm1, Long_t parm2)
{
   // Execute string "cmd" via the interpreter. Before executing replace
   // in the command string the token $MSG, $PARM1 and $PARM2 by msg,
   // parm1 and parm2, respectively. The function in cmd string must accept
   // these as longs.

   if (cmd.IsNull()) return;

   char s[32];

   sprintf(s, "%ld", msg);
   cmd.ReplaceAll("$MSG", s);

   sprintf(s, "%ld", parm1);
   cmd.ReplaceAll("$PARM1", s);

   sprintf(s, "%ld", parm2);
   cmd.ReplaceAll("$PARM2", s);

   gROOT->ProcessLine(cmd.Data());
}
