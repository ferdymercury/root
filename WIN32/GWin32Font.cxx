//*CMZ :  1.03/09 16/12/97  11.45.27  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine   29/01/96


#include "TGWin32Font.h"


//______________________________________________________________________________
TGWin32Font::TGWin32Font::(){

//
//*-*-Text management
//

  fLFont.lfHeight       =   0;
  fLFont.lfWidth        =   0;
  fLFont.lfEscapement   =   0;   // Specifies the angle, in tenths of degrees,
                                 // of each line of text written in the font
                                 // (relative to the bottom of the page).
  fLFont.lfOrientation  =   0;   //  (doesn't used by ROOT)
  fLFont.lfWeight       = 400;   //   (Normal = 400, BOLD =800)
  fLFont.lfItalic       = FALSE;
  fLFont.lfUnderline    = FALSE;
  fLFont.lfStrikeOut    = FALSE;
  fLFont.lfCharSet      = ANSI_CHARSET;
  fLFont.lfOutPrecision = OUT_DEFAULT_PRECIS;
  fLFont.lfClipPrecision= CLIP_DEFAULT_PRECIS;
  fLFont.lfQuality      = DEFAULT_QUALITY;
  fLFont.lfPitchAndFamily=FF_DONTCARE;

}

//______________________________________________________________________________
HFONT  TGWin32Font::GetFont(){return fhFont;}
