//*CMZ :  2.20/03 05/12/98  16.29.35  by  Rene Brun
//*CMZ :  2.00/12 05/10/98  23.56.16  by  Rene Brun
//*CMZ :  2.00/11 17/08/98  15.14.15  by  Rene Brun
//*CMZ :  2.00/10 29/07/98  21.59.04  by  Rene Brun
//*CMZ :  2.00/07 16/05/98  23.59.36  by  Rene Brun
//*CMZ :  2.00/03 26/03/98  13.07.35  by  Rene Brun
//*CMZ :  2.00/00 26/02/98  11.34.57  by  Rene Brun
//*CMZ :  1.03/09 12/12/97  16.10.50  by  Fons Rademakers
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TH1
#define ROOT_TH1

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
// TH1                                                                  //
//                                                                      //
// 1-Dim histogram base class.                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDirectory
#include "TDirectory.h"
#endif

#ifndef ROOT_TAxis
#include "TAxis.h"
#endif

#ifndef ROOT_TLego
#include "TLego.h"
#endif

#ifndef ROOT_TF1
#include "TF1.h"
#endif

#ifndef ROOT_TGaxis
#include "TGaxis.h"
#endif

#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif

#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif

#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif

#ifndef ROOT_TArrayC
#include "TArrayC.h"
#include "TArrayS.h"
#include "TArrayF.h"
#include "TArrayD.h"
#endif

class TH1D;
class TProfile;
class TBrowser;
class TPaveText;

class TH1 : public TNamed, public TAttLine, public TAttFill, public TAttMarker {

protected:
    Int_t      fNcells;          //number of bins(1D), cells (2D) +U/Overflows
    TAxis      fXaxis;           //X axis descriptor
    TAxis      fYaxis;           //Y axis descriptor
    TAxis      fZaxis;           //Z axis descriptor
    Short_t    fBarOffset;       //(1000*offset) for bar charts or legos
    Short_t    fBarWidth;        //(1000*width) for bar charts or legos
    Stat_t     fEntries;         //Number of entries
    Stat_t     fTsumw;           //Total Sum of weights
    Stat_t     fTsumw2;          //Total Sum of squares of weights
    Stat_t     fTsumwx;          //Total Sum of weight*X
    Stat_t     fTsumwx2;         //Total Sum of weight*X*X
    Float_t    fMaximum;         //Maximum value for plotting
    Float_t    fMinimum;         //Minimum value for plotting
    Float_t    fNormFactor;      //Normalization factor
    TArrayF    fContour;         //Array to display contour levels
    TArrayD    fSumw2;           //Array of sum of squares of weights
    TString    fOption;          //histogram options
    TList      *fFunctions;      //Pointer to list of functions (fits and user)
    TDirectory *fDirectory;      //Pointer to directory holding this histogram
    Int_t      fDimension;       //Histogram dimension (1, 2 or 3 dim)

private:
    Int_t   AxisChoice(Option_t *axis);
    void    Build();
    Int_t   FitOptionsMake(Option_t *option);
    void    PaintArrows();
    void    PaintBoxes();
    void    PaintColorLevels();
    void    PaintContour();
    Int_t   PaintContourLine(Float_t elev1, Int_t icont1, Float_t x1, Float_t y1,
                           Float_t elev2, Int_t icont2, Float_t x2, Float_t y2,
                           Float_t *xarr, Float_t *yarr, Int_t *itarr, Int_t ncont);
    void    PaintDate();
    void    PaintErrors();
    void    PaintFile();
    void    PaintFrame();
    void    PaintFunction();
    void    PaintHist();
    void    PaintH3(Option_t *option="");
    void    PaintH3Box(Option_t *option="");
    void    PaintLego();
    void    PaintLegoAxis(TGaxis *axis, Float_t ang);
    void    PaintLive();
    void    PaintScatterPlot();
    void    PaintSurface();
    void    PaintTable();
    void    PaintTitle();
    void    PaintValues();
    Int_t   TableInit();
    void    UpdateOptions();
    void    RecalculateRange();

protected:
    virtual void    Copy(TObject &hnew);

public:
    TH1();
    TH1(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);
    virtual ~TH1();

    virtual void    Add(TH1 *h1, Float_t c1=1);
    virtual void    Add(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1); // *MENU*
    virtual void    AddBinContent(Int_t bin);
    virtual void    AddBinContent(Int_t bin, Stat_t w);
    virtual void    Browse(TBrowser *b);
    virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
    virtual void    Divide(TH1 *h1);
    virtual void    Divide(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1, Option_t *option=""); // *MENU*
    virtual void    Draw(Option_t *option="");
    virtual void    DrawCopy(Option_t *option="");
    virtual void    DrawPanel(); // *MENU*
    virtual void    Eval(TF1 *f1, Option_t *option="");
    virtual void    ExecuteEvent(Int_t event, Int_t px, Int_t py);
    virtual void    Fill(Axis_t x);
    virtual void    Fill(Axis_t x, Stat_t w);
    virtual void    Fill(Axis_t x, Axis_t y, Stat_t w);
    virtual void    Fill(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
    virtual void    Fill12(Axis_t x, Axis_t y);
    virtual void    FillN(Int_t ntimes, Axis_t *x, Double_t *w, Int_t stride=1);
    virtual void    FillN(Int_t ntimes, Axis_t *x, Axis_t *y, Double_t *w, Int_t stride=1);
            void    FillRandom(char *fname, Int_t ntimes=5000);
            void    FillRandom(TH1 *h, Int_t ntimes=5000);
    virtual void    Fit(const Text_t *formula ,Option_t *option="" ,Option_t *goption="", Float_t xmin=0, Float_t xmax=0); // *MENU*
    virtual void    FitPanel(); // *MENU*
    virtual void    FitSlicesY(TF1 *f1=0,Int_t binmin=1, Int_t binmax=0, Int_t cut=0);
    virtual void    FitSlicesZ(TF1 *f1=0,Int_t binminx=1, Int_t binmaxx=0,Int_t binminy=1, Int_t binmaxy=0, Int_t cut=0);

    TList           *GetListOfFunctions() { return fFunctions; }

    virtual Int_t   GetNdivisions(Option_t *axis="X");
    virtual Color_t GetAxisColor(Option_t *axis="X");
    virtual Color_t GetLabelColor(Option_t *axis="X");
    virtual Style_t GetLabelFont(Option_t *axis="X");
    virtual Float_t GetLabelOffset(Option_t *axis="X");
    virtual Float_t GetLabelSize(Option_t *axis="X");
    virtual Float_t GetTitleOffset(Option_t *axis="X");
    virtual Float_t GetTickLength(Option_t *axis="X");
    virtual Float_t GetBarOffset() {return 0.001*Float_t(fBarOffset);}
    virtual Float_t GetBarWidth()  {return 0.001*Float_t(fBarWidth);}
    virtual Int_t   GetContour(Float_t *levels=0);
    virtual Float_t GetContourLevel(Int_t level);

    virtual Int_t   GetBin(Int_t binx, Int_t biny=0, Int_t binz=0);
    virtual Axis_t  GetBinCenter(Int_t bin){return fXaxis.GetBinCenter(bin);}
    virtual Stat_t  GetBinContent(Int_t bin);
    virtual Stat_t  GetBinError(Int_t bin);
    virtual Text_t  *GetBinLabel(Int_t bin){return fXaxis.GetBinLabel(bin);}
    virtual Axis_t  GetBinLowEdge(Int_t bin){return fXaxis.GetBinLowEdge(bin);}
    virtual Axis_t  GetBinWidth(Int_t bin){return fXaxis.GetBinWidth(bin);}
    virtual Stat_t  GetCellContent(Int_t binx, Int_t biny);
    virtual Stat_t  GetCellError(Int_t binx, Int_t biny);
    virtual void    GetCenter(Axis_t *center){fXaxis.GetCenter(center);}
    TDirectory      *GetDirectory() {return fDirectory;}
    virtual Stat_t  GetEntries() {return fEntries;}
    virtual TF1     *GetFunction(const Text_t *name);
    virtual Int_t   GetDimension() const { return fDimension; }
    virtual void    GetLabel(Text_t *label){fXaxis.GetLabel(label);}
    virtual void    GetLowEdge(Axis_t *edge){fXaxis.GetLowEdge(edge);}
    virtual Float_t GetMaximum();
    virtual Float_t GetMinimum();
    virtual Stat_t  GetMean(Int_t axis=1);
    virtual Int_t   GetNbinsX() const {return fXaxis.GetNbins();}
    virtual Int_t   GetNbinsY() const {return fYaxis.GetNbins();}
    virtual Int_t   GetNbinsZ() const {return fZaxis.GetNbins();}
    virtual Text_t  *GetObjectInfo(Int_t px, Int_t py);
    Option_t        *GetOption() const {return fOption.Data();}
    virtual Stat_t  GetSumOfWeights();
    virtual Int_t   GetSumw2N() {return fSumw2.fN;}
    virtual Stat_t  GetRMS(Int_t axis=1);
    virtual TAxis   *GetXaxis() {return &fXaxis;}
    virtual TAxis   *GetYaxis() {return &fYaxis;}
    virtual TAxis   *GetZaxis() {return &fZaxis;}
    virtual Stat_t  Integral();
    virtual Stat_t  Integral(Int_t binx1, Int_t binx2);
    virtual Stat_t  Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2);
    virtual Stat_t  Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Int_t binz1, Int_t binz2);
    virtual Int_t   MakeChopt(Option_t *option);
    virtual void    Multiply(TH1 *h1);
    virtual void    Multiply(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1, Option_t *option=""); // *MENU*
    virtual void    Paint(Option_t *option="");
    virtual void    PaintAxis();
    virtual Int_t   PaintInit();
    virtual void    PaintPalette();
    virtual void    PaintStat(Int_t dostat, TF1 *fit);
    virtual void    PaintStat2(Int_t dostat, TF1 *fit);
    virtual void    Print(Option_t *option="");
        TProfile    *ProfileX(const char *name="_pfx", Int_t firstybin=0, Int_t lastybin=0, Option_t *option="");
        TProfile    *ProfileY(const char *name="_pfy", Int_t firstxbin=0, Int_t lastxbin=0, Option_t *option="");
            TH1D    *ProjectionX(const char *name="_px", Int_t firstybin=0, Int_t lastybin=0, Option_t *option="");
            TH1D    *ProjectionY(const char *name="_py", Int_t firstxbin=0, Int_t lastxbin=0, Option_t *option="");
            TH1     *Rebin(Int_t ngroup=2, const char*newname="");
    virtual void    Reset(Option_t *option="");
    virtual void    SavePrimitive(ofstream &out, Option_t *option);
    virtual void    Scale(Float_t c1=1);
    virtual void    SetAxisColor(Color_t color=1, Option_t *axis="X");
    virtual void    SetBarOffset(Float_t offset=0.25) {fBarOffset = Short_t(1000*offset);}
    virtual void    SetBarWidth(Float_t width=0.5) {fBarWidth = Short_t(1000*width);}
    virtual void    SetBinContent(Int_t bin, Stat_t content);
    virtual void    SetBinError(Int_t bin, Stat_t error);
    virtual void    SetBinLabel(Int_t bin, Text_t *label)
                                {fXaxis.SetBinLabel(bin,label);}
    virtual void    SetBins(Int_t nx, Float_t xmin, Float_t xmax);
    virtual void    SetBins(Int_t nx, Float_t xmin, Float_t xmax, Int_t ny, Float_t ymin, Float_t ymax);
    virtual void    SetBinsLength(Int_t) {;} //refefined in derived classes
    virtual void    SetCellContent(Int_t binx, Int_t biny, Stat_t content) {SetBinContent(biny*(fXaxis.GetNbins()+2) + binx,content);}
    virtual void    SetCellError(Int_t binx, Int_t biny, Stat_t content);
    virtual void    SetContent(Stat_t *content);
    virtual void    SetContour(Int_t nlevels);
    virtual void    SetContour(Int_t nlevels, Float_t *levels);
    virtual void    SetContourLevel(Int_t level, Float_t value);
    virtual void    SetDirectory(TDirectory *dir);
    virtual void    SetEntries(Stat_t n) {fEntries = n;};
    virtual void    SetError(Stat_t *error);
    virtual void    SetLabel(const Text_t *label){fXaxis.SetLabel(label);}
    virtual void    SetLabelColor(Color_t color=1, Option_t *axis="X");
    virtual void    SetLabelFont(Style_t font=62, Option_t *axis="X");
    virtual void    SetLabelOffset(Float_t offset=0.005, Option_t *axis="X");
    virtual void    SetLabelSize(Float_t size=0.02, Option_t *axis="X");

    virtual void    SetMaximum(Float_t maximum=-1111); // *MENU*
    virtual void    SetMinimum(Float_t minimum=-1111); // *MENU*
    virtual void    SetName(const Text_t *name); // *MENU*
    virtual void    SetNdivisions(Int_t n=510, Option_t *axis="X");
    virtual void    SetNormFactor(Float_t factor=1) {fNormFactor = factor;}
    virtual void    SetOption(Option_t *option=" ") {fOption = option;}
    virtual void    SetTickLength(Float_t length=0.02, Option_t *axis="X");
    virtual void    SetTitleOffset(Float_t offset=1, Option_t *axis="X");
    virtual void    SetXTitle(Text_t *title) {fXaxis.SetTitle(title);}
    virtual void    SetYTitle(Text_t *title) {fYaxis.SetTitle(title);}
    virtual void    SetZTitle(Text_t *title) {fZaxis.SetTitle(title);}

    virtual void    Sumw2();
    void            Smooth(Option_t *option="");
    void            UseCurrentStyle();

    ClassDef(TH1,1)  //1-Dim histogram base class
};

//________________________________________________________________________

class TH1C : public TH1, public TArrayC {

protected:
    TH1C(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1C(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);

public:
    TH1C();
    TH1C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);
    TH1C(const TH1C &h1c);
    virtual ~TH1C();

    virtual void    AddBinContent(Int_t bin);
    virtual void    AddBinContent(Int_t bin, Stat_t w);
    virtual void    Copy(TObject &hnew);
    virtual void    DrawCopy(Option_t *option="");
    virtual Stat_t  GetBinContent(Int_t bin);
    virtual void    Reset(Option_t *option="");
    virtual void    SetBinContent(Int_t bin, Stat_t content)
                                 {fArray[bin] = Char_t (content);}
    virtual void    SetBinsLength(Int_t nx) {TArrayC::Set(nx);}
            TH1C&   operator=(const TH1C &h1);
    friend  TH1C    operator*(Float_t c1, TH1C &h1);
    friend  TH1C    operator*(TH1C &h1, Float_t c1) {return operator*(c1,h1);}
    friend  TH1C    operator+(TH1C &h1, TH1C &h2);
    friend  TH1C    operator-(TH1C &h1, TH1C &h2);
    friend  TH1C    operator*(TH1C &h1, TH1C &h2);
    friend  TH1C    operator/(TH1C &h1, TH1C &h2);

    ClassDef(TH1C,1)  //1-Dim histograms (one char per channel)
};

//________________________________________________________________________

class TH1S : public TH1, public TArrayS {

protected:
    TH1S(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1S(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);

public:
    TH1S();
    TH1S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);
    TH1S(const TH1S &h1s);
    virtual ~TH1S();

    virtual void    AddBinContent(Int_t bin);
    virtual void    AddBinContent(Int_t bin, Stat_t w);
    virtual void    Copy(TObject &hnew);
    virtual void    DrawCopy(Option_t *option="");
    virtual Stat_t  GetBinContent(Int_t bin);
    virtual void    Reset(Option_t *option="");
    virtual void    SetBinContent(Int_t bin, Stat_t content)
                                 {fArray[bin] = Short_t (content);}
    virtual void    SetBinsLength(Int_t nx) {TArrayS::Set(nx);}
            TH1S&   operator=(const TH1S &h1);
    friend  TH1S    operator*(Float_t c1, TH1S &h1);
    friend  TH1S    operator*(TH1S &h1, Float_t c1) {return operator*(c1,h1);}
    friend  TH1S    operator+(TH1S &h1, TH1S &h2);
    friend  TH1S    operator-(TH1S &h1, TH1S &h2);
    friend  TH1S    operator*(TH1S &h1, TH1S &h2);
    friend  TH1S    operator/(TH1S &h1, TH1S &h2);

    ClassDef(TH1S,1)  //1-Dim histograms (one short per channel)
};

//________________________________________________________________________

class TH1F : public TH1, public TArrayF {

protected:
    TH1F(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1F(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);

public:
    TH1F();
    TH1F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);
    TH1F(const TH1F &h1f);
    virtual ~TH1F();

    virtual void    AddBinContent(Int_t bin) {++fArray[bin];}
    virtual void    AddBinContent(Int_t bin, Stat_t w)
                                 {fArray[bin] += Float_t (w);}
    virtual void    Copy(TObject &hnew);
    virtual void    DrawCopy(Option_t *option="");
    virtual Stat_t  GetBinContent(Int_t bin);
    virtual void    Reset(Option_t *option="");
    virtual void    SetBinContent(Int_t bin, Stat_t content)
                                 {fArray[bin] = Float_t (content);}
    virtual void    SetBinsLength(Int_t nx) {TArrayF::Set(nx);}
            TH1F&   operator=(const TH1F &h1);
    friend  TH1F    operator*(Float_t c1, TH1F &h1);
    friend  TH1F    operator*(TH1F &h1, Float_t c1) {return operator*(c1,h1);}
    friend  TH1F    operator+(TH1F &h1, TH1F &h2);
    friend  TH1F    operator-(TH1F &h1, TH1F &h2);
    friend  TH1F    operator*(TH1F &h1, TH1F &h2);
    friend  TH1F    operator/(TH1F &h1, TH1F &h2);

    ClassDef(TH1F,1)  //1-Dim histograms (one float per channel)
};

//________________________________________________________________________

class TH1D : public TH1, public TArrayD {

protected:
    TH1D(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1D(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);

public:
    TH1D();
    TH1D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins);
    TH1D(const TH1D &h1d);
    virtual ~TH1D();

    virtual void    AddBinContent(Int_t bin) {++fArray[bin];}
    virtual void    AddBinContent(Int_t bin, Stat_t w)
                                 {fArray[bin] += Double_t (w);}
    virtual void    Copy(TObject &hnew);
    virtual void    DrawCopy(Option_t *option="");
    virtual Stat_t  GetBinContent(Int_t bin);
    virtual void    Reset(Option_t *option="");
    virtual void    SetBinContent(Int_t bin, Stat_t content)
                                 {fArray[bin] = Double_t (content);}
    virtual void    SetBinsLength(Int_t nx) {TArrayD::Set(nx);}
            TH1D&   operator=(const TH1D &h1);
    friend  TH1D    operator*(Float_t c1, TH1D &h1);
    friend  TH1D    operator*(TH1D &h1, Float_t c1) {return operator*(c1,h1);}
    friend  TH1D    operator+(TH1D &h1, TH1D &h2);
    friend  TH1D    operator-(TH1D &h1, TH1D &h2);
    friend  TH1D    operator*(TH1D &h1, TH1D &h2);
    friend  TH1D    operator/(TH1D &h1, TH1D &h2);

    ClassDef(TH1D,1)  //1-Dim histograms (one double per channel)
};

#endif
