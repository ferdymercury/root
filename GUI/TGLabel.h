//*CMZ :  2.00/00 07/01/98  12.47.21  by  Fons Rademakers
//*-- Author :    Fons Rademakers   06/01/98

#ifndef ROOT_TGLabel
#define ROOT_TGLabel

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
// TGLabel                                                              //
//                                                                      //
// This class handles GUI labels.                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGDimension
#include "TGDimension.h"
#endif
#ifndef ROOT_TGString
#include "TGString.h"
#endif



class TGLabel : public TGFrame {

friend class TGClient;

protected:
   TGString      *fText;         // label text
   UInt_t         fTWidth;       // text width
   UInt_t         fTHeight;      // text height
   Int_t          fTMode;        // text drawing mode (ETextJustification)
   Bool_t         fTextChanged;  // has text changed
   GContext_t     fNormGC;       // graphics context used for drawing label
   FontStruct_t   fFontStruct;   // font to draw label

   static GContext_t     fgDefaultGC;
   static FontStruct_t   fgDefaultFontStruct;

   virtual void DoRedraw();

public:
   TGLabel(const TGWindow *p, TGString *text,
           GContext_t norm = fgDefaultGC,
           FontStruct_t font = fgDefaultFontStruct,
           UInt_t options = kChildFrame,
           ULong_t back = fgDefaultFrameBackground);
   TGLabel(const TGWindow *p, const char *text,
           GContext_t norm = fgDefaultGC,
           FontStruct_t font = fgDefaultFontStruct,
           UInt_t options = kChildFrame,
           ULong_t back = fgDefaultFrameBackground);
   virtual ~TGLabel();

   virtual TGDimension GetDefaultSize() const { return TGDimension(fTWidth, fTHeight+1); }
   const TGString *GetText() const { return fText; }
   void SetText(TGString *new_text);
   void SetTextJustify(Int_t tmode) { fTMode = tmode; }

   ClassDef(TGLabel,0)  // A label GUI element
};

#endif
