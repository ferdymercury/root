//*CMZ :  2.00/00 16/02/98  02.36.03  by  Fons Rademakers
//*-- Author :    Fons Rademakers   05/01/98

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
// TGString and TGHotString                                             //
//                                                                      //
// TGString wraps a TString and adds some graphics routines like        //
// drawing, size of string on screen depending on font, etc.            //
// TGHotString is a string with a "hot" character unerlined.            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGString.h"
#include "TGXW.h"


ClassImp(TGString)
ClassImp(TGHotString)

//______________________________________________________________________________
void TGString::Draw(Drawable_t id, GContext_t gc, Int_t x, Int_t y)
{
   // Draw string.

   gGXW->DrawString(id, gc, x, y, fString.Data(), fString.Length());
}

//______________________________________________________________________________
void TGString::DrawWrapped(Drawable_t id, GContext_t gc,
                           Int_t x, Int_t y, UInt_t w, FontStruct_t font)
{
   // Draw a string in a column with width w. If string is longer than
   // w wrap it to next line.

   const char *p     = fString.Data();
   const char *prev  = p;
   const char *chunk = p;
   int tw, th, len = fString.Length();

   tw = gGXW->TextWidth(font, p, len);
   if (tw <= (int)w) {
      gGXW->DrawString(id, gc, x, y, p, len);
      return;
   }

   int max_ascent, max_descent;
   gGXW->GetFontProperties(font, max_ascent, max_descent);
   th = max_ascent + max_descent + 1;

   while(1) {
      p = strchr(p, ' ');
      if (p == 0) {
         if (chunk) gGXW->DrawString(id, gc, x, y, chunk, strlen(chunk));
         break;
      }
      tw = gGXW->TextWidth(font, chunk, p-chunk);
      if (tw > (int)w) {
         if (prev == chunk)
            prev = ++p;
         else
            p = prev;
         gGXW->DrawString(id, gc, x, y, chunk, prev-chunk-1);
         chunk = prev;
         y += th;
      } else {
         prev = ++p;
      }
   }
}

//______________________________________________________________________________
Int_t TGString::GetLines(FontStruct_t font, UInt_t w)
{
   // Get number of lines of width w the string would take using a certain font.

   const char *p     = fString.Data();
   const char *prev  = p;
   const char *chunk = p;
   int tw, nlines, len = fString.Length();

   nlines = 1;

   tw = gGXW->TextWidth(font, p, len);
   if (tw <= (int)w) return nlines;

   while(1) {
      p = strchr(p, ' ');
      if (p == 0) break;
      tw = gGXW->TextWidth(font, chunk, p-chunk);
      if (tw > (int)w) {
         if (prev == chunk)
            chunk = prev = ++p;
         else
            p = chunk = prev;
         ++nlines;
      } else {
         prev = ++p;
      }
   }
   return nlines;
}


//______________________________________________________________________________
TGHotString::TGHotString(const char *s) : TGString(s)
{
   // Create a hot string.

   char *dup = StrDup(fString.Data());
   char *p;

   fLastGC = 0;
   fOff1 = fOff2 = 0;

   fHotChar = 0;
   fHotPos  = 0;    // No hotkey defaults the offset to zero

   for (p = dup; *p; p++) {
      if (*p == '&') {
         if (p[1] == '&') { // escaped & ?
            // copy the string down over it
            for (char *tmp = p; *tmp; tmp++)
               tmp[0] = tmp[1];
            continue; // and skip to the key char
         }
         // hot key marker - calculate the offset value
         fHotPos  = (p - dup) + 1;
         fHotChar = p[1];
         for (; *p; p++) p[0] = p[1];  // copy down
         break;                        // allow only one hotkey per item
      }
   }
   fString = dup;
   delete [] dup;
}

//______________________________________________________________________________
void TGHotString::Draw(Drawable_t id, GContext_t gc, Int_t x, Int_t y)
{
   // Draw a hot string and underline the hot character.

   gGXW->DrawString(id, gc, x, y, fString.Data(), fString.Length());

   DrawHotChar(id, gc, x, y);
}

//______________________________________________________________________________
void TGHotString::DrawWrapped(Drawable_t id, GContext_t gc,
                              Int_t x, Int_t y, UInt_t w, FontStruct_t font)
{
   // Draw a hot string in a column with width w. If string is longer than
   // w wrap it to next line.

   const char *p     = fString.Data();
   const char *prev  = p;
   const char *chunk = p;
   int tw, th, len = fString.Length();

   tw = gGXW->TextWidth(font, p, len);
   if (tw <= (int)w) {
      gGXW->DrawString(id, gc, x, y, p, len);
      DrawHotChar(id, gc, x, y);
      return;
   }

   int max_ascent, max_descent;
   gGXW->GetFontProperties(font, max_ascent, max_descent);
   th = max_ascent + max_descent + 1;

   int pcnt = 0;
   while(1) {
      p = strchr(p, ' ');
      if (p == 0) {
         if (chunk) {
            gGXW->DrawString(id, gc, x, y, chunk, strlen(chunk));
            if (fHotPos > pcnt && fHotPos <= pcnt+(int)strlen(chunk))
               DrawHotChar(id, gc, x, y);
         }
         break;
      }
      tw = gGXW->TextWidth(font, chunk, p-chunk);
      if (tw > (int)w) {
         if (prev == chunk)
            prev = ++p;
         else
            p = prev;
         gGXW->DrawString(id, gc, x, y, chunk, prev-chunk-1);
         if (fHotPos > pcnt && fHotPos <= pcnt+prev-chunk-1)
            DrawHotChar(id, gc, x, y);
         pcnt = prev-chunk-1;
         chunk = prev;
         y += th;
      } else {
         prev = ++p;
      }
   }
}

//______________________________________________________________________________
void TGHotString::DrawHotChar(Drawable_t id, GContext_t gc, Int_t x, Int_t y)
{
   // Draw the underline under the hot character.

   if (fHotPos > 0) {
      if (fLastGC != gc) {
         GCValues_t   gcval;
         FontStruct_t font;

         gcval.fMask = kGCFont;
         gGXW->GetGCValues(gc, gcval);
         font = gGXW->GetFontStruct(gcval.fFont);

         fOff1   = gGXW->TextWidth(font, fString.Data(), fHotPos-1); //+1;
         fOff2   = gGXW->TextWidth(font, fString.Data(), fHotPos) - 1;
         fLastGC = gc;
      }
      gGXW->DrawLine(id, gc, x+fOff1, y+1, x+fOff2, y+1);
   }
}

