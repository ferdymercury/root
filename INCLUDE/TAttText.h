//*CMZ :  1.03/09 06/12/97  19.04.29  by  Fons Rademakers
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAttText
#define ROOT_TAttText

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
// TAttText                                                             //
//                                                                      //
// Text attributes.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif


class TAttText {

protected:
   Float_t    fTextAngle;           //Text angle
   Float_t    fTextSize;            //Text size
   Short_t    fTextAlign;           //Text alignment
   Color_t    fTextColor;           //Text color index
   Font_t     fTextFont;            //Text font number

public:
   TAttText();
   TAttText(Int_t align, Float_t angle, Color_t color, Style_t font, Float_t tsize);
   virtual ~TAttText();
           void     Copy(TAttText &atttext);
   Short_t          GetTextAlign() {return fTextAlign;}
   Float_t          GetTextAngle() {return fTextAngle;}
   Color_t          GetTextColor() {return fTextColor;}
   Font_t           GetTextFont()  {return fTextFont;}
   Float_t          GetTextSize()  {return fTextSize;}
   virtual void     Modify();
   virtual void     Reset(Option_t *toption="");
   virtual void     SaveTextAttributes(ofstream &out, const Text_t *name, Int_t alidef=12, Float_t angdef=0, Int_t coldef=1, Int_t fondef=61, Float_t sizdef=1);
   virtual void     SetTextAttributes();  // *MENU*
   virtual void     SetTextAlign(Short_t align=11) { fTextAlign = align;}
   virtual void     SetTextAngle(Float_t tangle=0) { fTextAngle = tangle;}
   virtual void     SetTextColor(Color_t tcolor=1) { fTextColor = tcolor;}
   virtual void     SetTextFont(Font_t tfont=62) { fTextFont = tfont;}
   virtual void     SetTextSize(Float_t tsize=1) { fTextSize = tsize;}

   ClassDef(TAttText,1)  //Text attributes
};

#endif

