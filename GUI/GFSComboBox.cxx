//*CMZ :  2.00/07 18/05/98  01.38.22  by  Fons Rademakers
//*CMZ :  2.00/01 09/03/98  14.40.24  by  Fons Rademakers
//*-- Author :    Fons Rademakers   19/01/98

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
// TGFSComboBox, TGTreeLBEntry                                          //
//                                                                      //
// This is a combo box that is used in the File Selection dialog box.   //
// It will allow the file path selection.                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGFSComboBox.h"
#include "TGPicture.h"
#include "TMath.h"
#include "TSystem.h"


//--- this is temp here...

struct lbc_t {
  char   *name;
  char   *path;
  char   *pixmap;
  Int_t   id, indent, flags;
};

static struct lbc_t gLbc[] = {
  { "Root",        "/",                     "hdisk_t.xpm",         1000, 0, 0 },
  { "Floppy",      "/floppy",               "fdisk_t.xpm",         2000, 1, 0 },
  { "CD-ROM",      "/cdrom",                "cdrom_t.xpm",         3000, 1, 0 },
  { "Home",        "$HOME",                 "home_t.xpm",          4000, 1, 0 },
  { "RootSys",     "$ROOTSYS",              "root_t.xpm",          5000, 1, 0 },
  { NULL,          NULL,                    NULL,                  6000, 0, 0 }
};



//______________________________________________________________________________
TGTreeLBEntry::TGTreeLBEntry(const TGWindow *p, TGString *text,
                             const TGPicture *pic, Int_t id, TGString *path,
                             GContext_t norm, FontStruct_t font, UInt_t options,
                             ULong_t back) :
   TGLBEntry(p, id, options, back)
{
   // Create a tree (i.e. entry can be indented) listbox entry.
   // The strings text and path are adopted by the entry.

   if (!pic)
      Error("TGTreeLBEntry", "icon not found for entry %s", text->GetString());

   fPic    = pic;
   fSelPic = 0;
   fText   = text;
   fPath   = path;

   fNormGC     = norm;
   fFontStruct = font;

   fActive = kFALSE;

   int max_ascent, max_descent;
   fTWidth = gGXW->TextWidth(fFontStruct, fText->GetString(), fText->GetLength());
   gGXW->GetFontProperties(fFontStruct, max_ascent, max_descent);
   fTHeight = max_ascent + max_descent;
}

//______________________________________________________________________________
TGTreeLBEntry::~TGTreeLBEntry()
{
   // Delete tree listbox entry.

   delete fText;
   delete fPath;
}

//______________________________________________________________________________
void TGTreeLBEntry::Activate(Bool_t a)
{
   // Make entry active (highlight picture).

   if (fActive == a) return;
   fActive = a;

   if (fActive) {
      fSelPic = new TGSelectedPicture(fClient, fPic);
   } else {
      if (fSelPic) delete fSelPic;
      fSelPic = 0;
   }
   DoRedraw();
}

//______________________________________________________________________________
void TGTreeLBEntry::DoRedraw()
{
   // Redraw the tree listbox entry.

   int ix, iy, lx, ly;

   ix = 0;
   iy = (fHeight - fPic->GetHeight()) >> 1;
   lx = (int)(fPic->GetWidth() + 4);
   ly = (int)((fHeight - (fTHeight+1)) >> 1);

   if (fActive) {
      if (fSelPic) fSelPic->Draw(fId, fNormGC, ix, iy);
      gGXW->SetForeground(fNormGC, fgDefaultSelectedBackground);
      gGXW->FillRectangle(fId, fNormGC, lx, ly, fTWidth, fTHeight+1);
      gGXW->SetForeground(fNormGC, fgSelPixel);
   } else {
      fPic->Draw(fId, fNormGC, ix, iy);
      gGXW->SetForeground(fNormGC, fgWhitePixel);
      gGXW->FillRectangle(fId, fNormGC, lx, ly, fTWidth, fTHeight+1);
      gGXW->SetForeground(fNormGC, fgBlackPixel);
   }

   int max_ascent, max_descent;
   gGXW->GetFontProperties(fFontStruct, max_ascent, max_descent);

   fText->Draw(fId, fNormGC, lx, ly + max_ascent);
}

//______________________________________________________________________________
TGDimension TGTreeLBEntry::GetDefaultSize() const
{
   // Return default size of tree listbox entry.

   TGDimension isize(fPic->GetWidth(), fPic->GetHeight());
   TGDimension lsize(fTWidth, fTHeight+1);

   return TGDimension(isize.fWidth + lsize.fWidth + 4,
                      TMath::Max(isize.fHeight, lsize.fHeight) + 2);
}

//______________________________________________________________________________
void TGTreeLBEntry::Update(TGLBEntry *e)
{
   // Update text and picture of a listbox entry.

   TGTreeLBEntry *te = (TGTreeLBEntry *) e;

   if (fText) delete fText;
   fText = new TGString(te->GetText());
   fPic = te->GetPicture();
   fTWidth = gGXW->TextWidth(fFontStruct, fText->GetString(), fText->GetLength());
   gGXW->ClearWindow(fId);
   fClient->NeedRedraw(this);
}



//______________________________________________________________________________
TGFSComboBox::TGFSComboBox(const TGWindow *parent, Int_t id, UInt_t options,
                           ULong_t back) :
   TGComboBox(parent, id, options, back)
{
   // Create a file system combobox showing system directories.

   int   i, indent;
   const TGPicture *pic;
   char  *p;

   SetTopEntry(new TGTreeLBEntry(this, new TGString("Current dir"),
               fClient->GetPicture("folder_t.xpm"), 0),
               new TGLayoutHints(kLHintsLeft | kLHintsExpandX |
                                 kLHintsExpandY, 4, 0, 0, 0));

   gGXW->SelectInput(fListBox->GetContainer()->GetId(), kButtonPressMask |
                     kButtonReleaseMask | kPointerMotionMask);

   //--- first check for the existence of some directories...

   const char *homeDir = gSystem->Getenv("HOME");
   const char *rootSys = gSystem->Getenv("ROOTSYS");

   for (i = 0; gLbc[i].path != 0; ++i) {
      if (strstr(gLbc[i].path, "$HOME") != 0) {
         if (homeDir) {
            int hlen = strlen(homeDir);
            p = new char[hlen + strlen(gLbc[i].path) - 3];
            strcpy(p, homeDir);
            strcat(p, &gLbc[i].path[5]);
            gLbc[i].path = p;
         } else {
            gLbc[i].flags = 0;
         }
      }
      if (strstr(gLbc[i].path, "$ROOTSYS") != 0) {
         if (rootSys) {
            int hlen = strlen(rootSys);
            p = new char[hlen + strlen(gLbc[i].path) - 3];
            strcpy(p, rootSys);
            strcat(p, &gLbc[i].path[8]);
            gLbc[i].path = p;
         } else {
            gLbc[i].flags = 0;
         }
      }
      if (gSystem->AccessPathName(gLbc[i].path, kFileExists) == 0)
         gLbc[i].flags = 1;
   }

   //--- then init the contents...

   for (i = 0; gLbc[i].name != 0; ++i) {
      if (gLbc[i].flags) {
         indent = 4 + (gLbc[i].indent * 10);
         pic = fClient->GetPicture(gLbc[i].pixmap);
         if (!pic) Error("TGFSComboBox", "pixmap not found: %s", gLbc[i].pixmap);
         AddEntry(new TGTreeLBEntry(fListBox->GetContainer(),
                  new TGString(gLbc[i].name), pic, gLbc[i].id,
                  new TGString(gLbc[i].path)),
                  new TGLayoutHints(kLHintsLeft | kLHintsTop, indent, 0, 0, 0));
      }
   }
}

//______________________________________________________________________________
void TGFSComboBox::Update(char *path)
{
   // Update file system combo box.

   char dirname[1024], mpath[1024], *tailpath = 0;
   int  i, indent_lvl = 0, afterID = -1, sel = -1;

   if (!path) return;

   for (i = 0; gLbc[i].path != 0; ++i)
      RemoveEntries(gLbc[i].id+1, gLbc[i+1].id-1);

   int len = 0;
   for (i = 0; gLbc[i].name != 0; ++i) {
      if (gLbc[i].flags) {
         int slen = strlen(gLbc[i].path);
         if (strncmp(path, gLbc[i].path, slen) == 0) {
            if (slen > len) {
               sel = afterID = gLbc[i].id;
               indent_lvl = gLbc[i].indent + 1;
               tailpath = path + slen;
               strcpy(mpath, gLbc[i].path);
               len = slen;
            }
         }
      }
   }

   if (tailpath && *tailpath) {
      if (*tailpath == '/') ++tailpath;
      if (*tailpath)
         while (1) {
            char *picname;
            char *semi = strchr(tailpath, '/');
            if (semi == 0) {
               strcpy(dirname, tailpath);
               picname = "ofolder_t.xpm";
            } else {
               strncpy(dirname, tailpath, semi-tailpath);
               dirname[semi-tailpath] = 0;
               picname = "folder_t.xpm";
            }
            if (mpath[strlen(mpath)-1] != '/') strcat(mpath, "/");
            strcat(mpath, dirname);
            int indent = 4 + (indent_lvl * 10);
            const TGPicture *pic = fClient->GetPicture(picname);
            if (!pic) Error("Update", "pixmap not found: %s", picname);
            InsertEntry(new TGTreeLBEntry(fListBox->GetContainer(),
                        new TGString(dirname), pic, afterID+1,
                        new TGString(mpath)),
                        new TGLayoutHints(kLHintsLeft | kLHintsTop,
                                          indent, 0, 0, 0),
                        afterID);
             sel = ++afterID;
             ++indent_lvl;
             if (semi == 0) break;
             tailpath = ++semi;
         }
   }
   if (sel > 0) Select(sel);
}
