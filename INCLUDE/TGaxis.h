//*CMZ :  2.00/12 28/08/98  17.51.29  by  Rene Brun
//*CMZ :  2.00/00 03/03/98  16.27.12  by  Rene Brun
//*CMZ :  0.90/01 12/10/96  15.03.02  by  Rene Brun
//*-- Author :    Rene Brun   28/04/95

#ifndef ROOT_TGaxis
#define ROOT_TGaxis

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
// TGaxis                                                               //
//                                                                      //
// Button to select an angle.                                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TLine
#include "TLine.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif


class TGaxis : public TLine, public TAttText {

private:
    Int_t      fNdiv;                //Number of divisions
    Float_t    fWmin;                //Lowest value on the axis
    Float_t    fWmax;                //Highest value on the axis
    Float_t    fGridLength;          //Length of the grid in NDC
    Float_t    fTickSize;            //Size of primary tick mark in NDC
    Float_t    fLabelOffset;         //Offset of label wrt axis
    Float_t    fLabelSize;           //Size of labels in NDC
    Float_t    fTitleOffset;         //Offset of title wrt axis
    Float_t    fTitleSize;           //Size of title in NDC
    Int_t      fLabelFont;           //Font for labels
    char       fChopt[16];           //Axis options
    TString    fName;                //axis name
    TString    fTitle;               //axis title

public:
        TGaxis();
        TGaxis(Float_t xmin,Float_t ymin,Float_t xmax,Float_t ymax,
               Float_t wmin,Float_t wmax,Int_t ndiv=510, Option_t *chopt="",
               Float_t gridlength = 0);
        virtual ~TGaxis();
        virtual void    AdjustBinSize(Float_t A1,  Float_t A2,  Int_t nold
                       ,Float_t &BinLow, Float_t &BinHigh, Int_t &nbins, Float_t &BinWidth);
        virtual void    Draw(Option_t *chopt="");
        virtual void    DrawAxis(Float_t xmin,Float_t ymin,Float_t xmax,Float_t ymax,
                                 Float_t wmin,Float_t wmax,Int_t ndiv=510, Option_t *chopt="",
                                 Float_t gridlength = 0);
             Float_t    GetGridLength()   {return fGridLength;}
               Int_t    GetLabelFont()    {return fLabelFont;}
             Float_t    GetLabelOffset()  {return fLabelOffset;}
             Float_t    GetLabelSize()    {return fLabelSize;}
             Float_t    GetTitleOffset()  {return fTitleOffset;}
             Float_t    GetTitleSize()    {return fTitleSize;}
virtual const Text_t    *GetName() const  {return fName.Data();}
virtual const Text_t    *GetTitle() const {return fTitle.Data();}
               Int_t    GetNdiv()         {return fNdiv;}
             Float_t    GetWmin()         {return fWmin;}
             Float_t    GetWmax()         {return fWmax;}
             Float_t    GetTickSize()     {return fTickSize;}
                void    LabelsLimits(char *label, Int_t &first, Int_t &last);
        virtual void    Optimize(Float_t A1,  Float_t A2,  Int_t nold
                       ,Float_t &BinLow, Float_t &BinHigh, Int_t &nbins, Float_t &BWID);
        virtual void    Paint(Option_t *chopt="");
        virtual void    PaintAxis(Float_t xmin,Float_t ymin,Float_t xmax,Float_t ymax,
                                  Float_t &wmin,Float_t &wmax,Int_t &ndiv, Option_t *chopt="",
                                  Float_t gridlength = 0);
        virtual void    Rotate(Float_t X,  Float_t Y,  Float_t CFI, Float_t SFI
                              ,Float_t XT, Float_t YT, Float_t &U,   Float_t &V);
        virtual void    SavePrimitive(ofstream &out, Option_t *option);
                void    SetOption(Option_t *option="");
                void    SetLabelFont(Int_t labelfont) {fLabelFont = labelfont;} // *MENU*
                void    SetLabelOffset(Float_t labeloffset) {fLabelOffset = labeloffset;} // *MENU*
                void    SetLabelSize(Float_t labelsize) {fLabelSize = labelsize;} // *MENU*
        virtual void    SetName(Text_t *name); // *MENU*
                void    SetTickSize(Float_t ticksize) {fTickSize = ticksize;} // *MENU*
                void    SetGridLength(Float_t gridlength) {fGridLength = gridlength;}
        virtual void    SetTitle(const Text_t *title=""); // *MENU*
                void    SetTitleOffset(Float_t titleoffset=1) {fTitleOffset = titleoffset;} // *MENU*
                void    SetTitleSize(Float_t titlesize) {fTitleSize = titlesize;} // *MENU*
                void    SetWmin(Float_t wmin) {fWmin = wmin;}
                void    SetWmax(Float_t wmax) {fWmax = wmax;}

                ClassDef(TGaxis,1)  //Graphics axis
};

#endif


