//*CMZ :  2.00/00 16/01/98  13.17.46  by  Fons Rademakers
//*CMZ :  0.90/08 02/12/96  11.29.17  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TColor
#define ROOT_TColor

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
// TColor                                                               //
//                                                                      //
// Color defined by RGB or HLS.                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TColor : public TNamed {

private:
   Int_t        fNumber;        //color number identifier
   Float_t      fRed;           //Fraction of Red
   Float_t      fGreen;         //Fraction of Green
   Float_t      fBlue;          //Fraction of Blue
   Float_t      fHue;           //Hue
   Float_t      fLight;         //Light
   Float_t      fSaturation;    //Saturation

public:
   TColor();
   TColor(Int_t color, Float_t r, Float_t g, Float_t b, Text_t *name="");
   TColor(const TColor &color);
   virtual ~TColor();
           void  Copy(TObject &color);
   virtual void  GetRGB(Float_t &r, Float_t &g, Float_t &b) {r = fRed; g = fGreen; b = fBlue;}
   virtual void  GetHLS(Float_t &h, Float_t &l, Float_t &s) {h = fHue; l = fLight; s = fSaturation;}
   Int_t         GetNumber() {return fNumber;}
   Float_t       GetRed() {return fRed;}
   Float_t       GetGreen() {return fGreen;}
   Float_t       GetBlue() {return fBlue;}
   Float_t       GetHue() {return fHue;}
   Float_t       GetLight() {return fLight;}
   Float_t       GetSaturation() {return fSaturation;}
   virtual void  HLStoRGB(Float_t h, Float_t l, Float_t s, Float_t &r, Float_t &g, Float_t &b);
   Float_t       HLStoRGB1(Float_t rn1, Float_t rn2, Float_t huei);
   virtual void  ls(Option_t *option="");
   virtual void  Print(Option_t *option="");
   virtual void  RGBtoHLS(Float_t r, Float_t g, Float_t b, Float_t &h, Float_t &l, Float_t &s);
   virtual void  SetNumber(Int_t number) {fNumber = number;}
   virtual void  SetRGB(Float_t r, Float_t g, Float_t b);

   static void   DisplayColorTable();

   ClassDef(TColor,1)  //Color defined by RGB or HLS
};

#endif

