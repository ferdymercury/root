//*CMZ :  2.00/12 14/09/98  16.53.06  by  Fons Rademakers
//*CMZ :  2.00/00 07/01/98  20.55.16  by  Fons Rademakers
//*-- Author :    Fons Rademakers   05/01/98

#ifndef ROOT_TGString
#define ROOT_TGString

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
// TGString and TGHotString                                             //
//                                                                      //
// TGString wraps a TString and adds some graphics routines like        //
// drawing, size of string on screen depending on font, etc.            //
// TGHotString is a string with a "hot" character unerlined.            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TString
#include "TString.h"
#endif
#ifndef ROOT_GuiTypes
#include "GuiTypes.h"
#endif


class TGString {

protected:
   TString   fString;   // embedded string

public:
   TGString() { }
   TGString(TString s) { fString = s; }
   TGString(const char *s) { fString = s; }
   TGString(const TGString *s) { fString = s->fString; }
   virtual ~TGString() { }

   Int_t GetLength() const { return fString.Length(); }
   const char *GetString() const { return (const char *)fString; }

   virtual void Draw(Drawable_t id, GContext_t gc, Int_t x, Int_t y);
   virtual void DrawWrapped(Drawable_t id, GContext_t gc,
                            Int_t x, Int_t y, UInt_t w, FontStruct_t font);
   virtual Int_t GetLines(FontStruct_t font, UInt_t w);

   ClassDef(TGString,0)  // Graphics string
};


class TGHotString : public TGString {

protected:
   char        fHotChar;      // hot character
   Int_t       fHotPos;       // position of hot character

   GContext_t  fLastGC;       // context used during last drawing
   Int_t       fOff1;         // variable used during drawing (cache)
   Int_t       fOff2;         // variable used during drawing (cache)

   void DrawHotChar(Drawable_t id, GContext_t gc, Int_t x, Int_t y);

public:
   TGHotString(const char *s);

   Int_t GetHotChar() const { return fHotChar; }
   virtual void Draw(Drawable_t id, GContext_t gc, Int_t x, Int_t y);
   virtual void DrawWrapped(Drawable_t id, GContext_t gc,
                            Int_t x, Int_t y, UInt_t w, FontStruct_t font);

   ClassDef(TGHotString,0)  // Graphics string with hot character
};

#endif
