//*CMZ :  2.00/11 17/08/98  15.14.16  by  Rene Brun
//*CMZ :  2.00/08 25/05/98  10.06.15  by  Rene Brun
//*CMZ :  1.03/09 12/12/97  16.10.50  by  Fons Rademakers
//*-- Author :    Rene Brun   29/09/95

#ifndef ROOT_TProfile
#define ROOT_TProfile

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
// TProfile                                                             //
//                                                                      //
// Profile histogram class.                                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TH1
#include "TH1.h"
#endif

enum EErrorType { kERRORMEAN = 0, kERRORSPREAD, kERRORSPREADI, kERRORSPREADG };


class TProfile : public TH1D {

protected:
    TArrayD     fBinEntries;      //number of entries per bin
    EErrorType  fErrorMode;       //Option to compute errors
    Float_t     fYmin;            //Lower limit in Y (if set)
    Float_t     fYmax;            //Upper limit in Y (if set)

private:
   void Fill(Axis_t) { MayNotUse("Fill(Axis_t)"); }
   void Fill(Axis_t, Stat_t) { MayNotUse("Fill(Axis_t, Stat_t)"); }
   void Fill(Axis_t, Axis_t, Axis_t, Stat_t) { MayNotUse("Fill(Axis_t, Axis_t, Axis_t, Stat_t)"); }
   void FillN(Int_t, Axis_t *, Double_t *, Int_t) { MayNotUse("FillN(Int_t, Axis_t*, Double_t*, Int_t)"); }
   void SetBins(Int_t, Float_t, Float_t, Int_t, Float_t, Float_t)
      { MayNotUse("SetBins(Int_t, Float_t, Float_t, Int_t, Float_t, Float_t"); }
   Double_t *GetB()  {return &fBinEntries.fArray[0];}
   Double_t *GetW()  {return &fArray[0];}
   Double_t *GetW2() {return &fSumw2.fArray[0];}

public:
    TProfile();
    TProfile(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup, Option_t *option="");
    TProfile(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup,Axis_t ylow,Axis_t yup,Option_t *option="");
    TProfile(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins, Option_t *option="");
    TProfile(const TProfile &profile);
    virtual ~TProfile();
    virtual void    Add(TH1 *h1, Float_t c1=1);
    virtual void    Add(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1); // *MENU*
            void    BuildOptions(Float_t ymin, Float_t ymax, Option_t *option);
    virtual void    Copy(TObject &hnew);
    virtual void    Divide(TH1 *h1);
    virtual void    Divide(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1, Option_t *option=""); // *MENU*
    virtual void    DrawCopy(Option_t *option="");
    virtual void    Fill(Axis_t x, Axis_t y);
    virtual void    Fill(Axis_t x, Axis_t y, Stat_t w);
    virtual void    FillN(Int_t ntimes, Axis_t *x, Axis_t *y, Double_t *w, Int_t stride=1);
    virtual Stat_t  GetBinContent(Int_t bin);
    virtual Stat_t  GetBinError(Int_t bin);
    virtual Stat_t  GetBinEntries(Int_t bin);
    Option_t       *GetErrorOption() const;
    virtual void    Multiply(TH1 *h1);
    virtual void    Multiply(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1, Option_t *option=""); // *MENU*
    virtual void    Reset(Option_t *option="");
    virtual void    Scale(Float_t c1=1);
    virtual void    SetBinEntries(Int_t bin, Stat_t w);
    virtual void    SetBins(Int_t nbins, Float_t xmin, Float_t xmax);
    virtual void    SetErrorOption(Option_t *option=""); // *MENU*

    ClassDef(TProfile,1)  //Profile histogram class
};

#endif

