//*CMZ :  2.00/10 13/07/98  19.38.17  by  Fons Rademakers
//*CMZ :  2.00/00 11/02/98  12.55.58  by  Rene Brun
//*CMZ :  1.03/09 11/12/97  08.14.32  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TPostScript
#define ROOT_TPostScript

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
// TPostScript                                                          //
//                                                                      //
// PostScript driver.                                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif
#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif


class TPoints;


class TPostScript : public TNamed, public TAttLine, public TAttFill, public TAttMarker, public TAttText {
protected:
        Float_t      fX1v;           //X bottom left corner of paper
        Float_t      fY1v;           //Y bottom left corner of paper
        Float_t      fX2v;           //X top right corner of paper
        Float_t      fY2v;           //Y top right corner of paper
        Float_t      fX1w;           //
        Float_t      fY1w;           //
        Float_t      fX2w;           //
        Float_t      fY2w;           //
        Float_t      fDXC;           //
        Float_t      fDYC;           //
        Float_t      fXC;            //
        Float_t      fYC;            //
        Float_t      fFX;            //
        Float_t      fFY;            //
        Float_t      fXVP1;          //
        Float_t      fXVP2;          //
        Float_t      fYVP1;          //
        Float_t      fYVP2;          //
        Float_t      fXVS1;          //
        Float_t      fXVS2;          //
        Float_t      fYVS1;          //
        Float_t      fYVS2;          //
        Float_t      fXsize;         //Page size along X
        Float_t      fYsize;         //Page size along Y
        Float_t      fMaxsize;       //Largest dimension of X and Y
        Float_t      fRed;           //Per cent of red
        Float_t      fGreen;         //Per cent of green
        Float_t      fBlue;          //Per cent of blue
        Int_t        fSave;          //Number of gsave for restore
        Int_t        fNXzone;        //Number of zones along X
        Int_t        fNYzone;        //Number of zones along Y
        Int_t        fIXzone;        //Current zone along X
        Int_t        fIYzone;        //Current zone along Y
        Int_t        fLenBuffer;     //buffer length
        Float_t      fMarkerSizeCur; //current transformed value of marker size
        Int_t        fCurrentColor;  //current Postscript color index
        Int_t        fNpages;        //number of pages
        Int_t        fType;          //PostScript workstation type
        Int_t        fMode;          //PostScript mode
        Int_t        fClip;          //Clipping mode
        Bool_t       fBoundingBox;   //True for Encapsulated PostScript
        Bool_t       fClear;         //True when page must be cleared
        Bool_t       fClipStatus;    //Clipping Indicator
        Bool_t       fPrinted;       //True when a page must be printed
        Bool_t       fRange;         //True when a range has been defined
        Bool_t       fZone;          //Zone indicator
        ofstream    *fStream;        //File stream identifier
        Text_t       fBuffer[512];   //PostScript file buffer

public:
        TPostScript();
        TPostScript(Text_t *filename, Int_t type=-111);
        virtual     ~TPostScript();
                void  Close(Option_t *opt="");
                Int_t CMtoPS(Float_t u) {return Int_t(0.5 + 72*u/2.54);}
                void  DefineFillPatterns();
                void  DefineMarkers();
                void  DrawBox(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2);
                void  DrawFrame(Coord_t xl, Coord_t yl, Coord_t xt, Coord_t  yt,
                                Int_t mode, Int_t border, Int_t dark, Int_t light);
                void  DrawHatch(Float_t dy, Float_t angle, Int_t n, Float_t *x, Float_t *y);
                void  DrawPolyLine(Int_t n, TPoints *xy);
                void  DrawPolyLineNDC(Int_t n, TPoints *uv);
                void  DrawPolyMarker(Int_t n, Float_t *x, Float_t *y);
                void  DrawPS(Int_t n, Float_t *xw, Float_t *yw);
                void  FontEncode();
              Color_t GetFillColor() {return fFillColor;}
              Style_t GetFillStyle() {return fFillStyle;}
              Color_t GetLineColor() {return fLineColor;}
              Style_t GetLineStyle() {return fLineStyle;}
              Width_t GetLineWidth() {return fLineWidth;}
              Color_t GetMarkerColor() {return fMarkerColor;}
               Size_t GetMarkerSize() {return fMarkerSize;}
              Style_t GetMarkerStyle() {return fMarkerStyle;}
              Short_t GetTextAlign() {return fTextAlign;}
              Float_t GetTextAngle() {return fTextAngle;}
              Color_t GetTextColor() {return fTextColor;}
               Font_t GetTextFont() {return fTextFont;}
              Float_t GetTextSize() {return fTextSize;}
                void  Initialize();
                void  NewPage();
                void  Off();
                void  On();
                void  Open(Text_t *filename, Int_t type=-111);
                void  SaveRestore(Int_t flag);
                void  SetFillColor( Color_t cindex=1);
                void  SetFillStyle( Style_t style);
                void  SetLineColor( Color_t cindex=1);
                void  SetLineStyle(Style_t linestyle = 1);
                void  SetLineWidth(Width_t linewidth = 1);
                void  SetMarkerColor( Color_t cindex=1);
                void  SetMarkerSize(Float_t markersize);
                void  SetMarkerStyle(Style_t markerstyle);
                void  SetTextAlign( Short_t talign=11);
                void  SetTextAngle( Float_t tangle=0);
                void  SetTextColor( Color_t cindex=1);
                void  SetTextFont(Font_t fontnumber=62);
                void  SetTextSize(Float_t tsize);
        virtual void  ls(Option_t *option="");
                void  MakeGreek();
                void  MovePS(Int_t x, Int_t y);
        virtual void  Print(Option_t *option="");
        virtual void  PrintStr(const Text_t *string="");
        virtual void  PrintFast(Int_t nch, const Text_t *string="");
                void  Range(Float_t xrange, Float_t yrange);
                void  Resize();
                void  SetColor(Int_t color = 1);
                void  Text(Float_t x, Float_t y, const Text_t *string);
                void  TextNDC(Float_t u, Float_t v, const Text_t *string);
                Int_t UtoPS(Float_t u);
                Int_t VtoPS(Float_t v);
                void  WriteInteger(Int_t i);
                void  WriteReal(Float_t r);
                Int_t XtoPS(Float_t x);
                Int_t YtoPS(Float_t y);
                void  Zone();

        ClassDef(TPostScript,0)  //PostScript driver
};


R__EXTERN TPostScript  *gCurrentPS;

#endif

