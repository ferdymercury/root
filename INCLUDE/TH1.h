//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/11 30/12/99  10.12.49  by  Rene Brun
//*CMZ :  2.23/09 25/11/99  15.52.21  by  Rene Brun
//*CMZ :  2.23/04 07/10/99  13.00.08  by  Rene Brun
//*CMZ :  2.23/03 22/09/99  15.44.15  by  Rene Brun
//*CMZ :  2.23/02 02/09/99  19.30.25  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  13.54.05  by  Rene Brun
//*CMZ :  2.23/00 30/07/99  11.50.19  by  Rene Brun
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TH1
#define ROOT_TH1

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TH1                                                                  //
//                                                                      //
// 1-Dim histogram base class.                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TVirtualHistPainter
#include "TVirtualHistPainter.h"
#endif

#ifndef ROOT_TAxis
#include "TAxis.h"
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
#endif
#ifndef ROOT_TArrayS
#include "TArrayS.h"
#endif
#ifndef ROOT_TArrayF
#include "TArrayF.h"
#endif
#ifndef ROOT_TArrayD
#include "TArrayD.h"
#endif

class TF1;
class TH1D;
class TProfile;
class TBrowser;
class TDirectory;

class TH1 : public TNamed, public TAttLine, public TAttFill, public TAttMarker {

protected:
    Int_t       fNcells;          //number of bins(1D), cells (2D) +U/Overflows
    TAxis       fXaxis;           //X axis descriptor
    TAxis       fYaxis;           //Y axis descriptor
    TAxis       fZaxis;           //Z axis descriptor
    Short_t     fBarOffset;       //(1000*offset) for bar charts or legos
    Short_t     fBarWidth;        //(1000*width) for bar charts or legos
    Stat_t      fEntries;         //Number of entries
    Stat_t      fTsumw;           //Total Sum of weights
    Stat_t      fTsumw2;          //Total Sum of squares of weights
    Stat_t      fTsumwx;          //Total Sum of weight*X
    Stat_t      fTsumwx2;         //Total Sum of weight*X*X
    Float_t     fMaximum;         //Maximum value for plotting
    Float_t     fMinimum;         //Minimum value for plotting
    Float_t     fNormFactor;      //Normalization factor
    TArrayF     fContour;         //Array to display contour levels
    TArrayD     fSumw2;           //Array of sum of squares of weights
    TString     fOption;          //histogram options
    TList      *fFunctions;       //Pointer to list of functions (fits and user)
    TDirectory *fDirectory;       //Pointer to directory holding this histogram
    Int_t       fDimension;       //Histogram dimension (1, 2 or 3 dim)
    Double_t   *fIntegral;        //Integral of bins used by GetRandom
    TVirtualHistPainter *fPainter; //pointer to histogram painter

private:
    Int_t   AxisChoice(Option_t *axis);
    void    Build();
    Int_t   FitOptionsMake(Option_t *option);

protected:
    virtual void    Copy(TObject &hnew);

public:
    // TH1 status bits
    enum {
       kNoStats     = BIT(9),  // don't draw stats box
       kUserContour = BIT(10), // user specified contour levels
       kCanRebin    = BIT(11), // can rebin axis
       kLogX        = BIT(15)  // X-axis in log scale
    };

    TH1();
    TH1(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);
    virtual ~TH1();

    virtual void     Add(TH1 *h1, Float_t c1=1);
    virtual void     Add(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1); // *MENU*
    virtual void     AddBinContent(Int_t bin);
    virtual void     AddBinContent(Int_t bin, Stat_t w);
    virtual void     Browse(TBrowser *b);
    virtual Double_t ComputeIntegral();
    virtual Int_t    DistancetoPrimitive(Int_t px, Int_t py);
    virtual void     Divide(TH1 *h1);
    virtual void     Divide(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1, Option_t *option=""); // *MENU*
    virtual void     Draw(Option_t *option="");
    virtual TH1     *DrawCopy(Option_t *option="");
    virtual void     DrawPanel(); // *MENU*
    virtual void     Eval(TF1 *f1, Option_t *option="");
    virtual void     ExecuteEvent(Int_t event, Int_t px, Int_t py);
    virtual Int_t    Fill(Axis_t x);
    virtual Int_t    Fill(Axis_t x, Stat_t w);
    virtual Int_t    Fill(Axis_t x, Axis_t y, Stat_t w);
    virtual Int_t    Fill(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
    virtual Int_t    Fill12(Axis_t x, Axis_t y);
    virtual void     FillN(Int_t ntimes, Axis_t *x, Double_t *w, Int_t stride=1);
    virtual void     FillN(Int_t ntimes, Axis_t *x, Axis_t *y, Double_t *w, Int_t stride=1);
            void     FillRandom(const char *fname, Int_t ntimes=5000);
            void     FillRandom(TH1 *h, Int_t ntimes=5000);
    virtual Int_t    FindBin(Axis_t x, Axis_t y=0, Axis_t z=0);
    virtual void     Fit(const char *formula ,Option_t *option="" ,Option_t *goption="", Float_t xmin=0, Float_t xmax=0); // *MENU*
    virtual void     FitPanel(); // *MENU*
    virtual void     FitSlicesX(TF1 *f1=0,Int_t binmin=1, Int_t binmax=0, Int_t cut=0 ,Option_t *option="QNR");
    virtual void     FitSlicesY(TF1 *f1=0,Int_t binmin=1, Int_t binmax=0, Int_t cut=0 ,Option_t *option="QNR");
    virtual void     FitSlicesZ(TF1 *f1=0,Int_t binminx=1, Int_t binmaxx=0,Int_t binminy=1, Int_t binmaxy=0,
                                          Int_t cut=0 ,Option_t *option="QNR");
    virtual Double_t *GetIntegral() {return fIntegral;}

    TList           *GetListOfFunctions() { return fFunctions; }

    virtual Int_t    GetNdivisions(Option_t *axis="X");
    virtual Color_t  GetAxisColor(Option_t *axis="X");
    virtual Color_t  GetLabelColor(Option_t *axis="X");
    virtual Style_t  GetLabelFont(Option_t *axis="X");
    virtual Float_t  GetLabelOffset(Option_t *axis="X");
    virtual Float_t  GetLabelSize(Option_t *axis="X");
    virtual Float_t  GetTitleOffset(Option_t *axis="X");
    virtual Float_t  GetTitleSize(Option_t *axis="X");
    virtual Float_t  GetTickLength(Option_t *axis="X");
    virtual Float_t  GetBarOffset() {return 0.001*Float_t(fBarOffset);}
    virtual Float_t  GetBarWidth()  {return 0.001*Float_t(fBarWidth);}
    virtual Int_t    GetContour(Float_t *levels=0);
    virtual Float_t  GetContourLevel(Int_t level);

    virtual Int_t    GetBin(Int_t binx, Int_t biny=0, Int_t binz=0);
    virtual Axis_t   GetBinCenter(Int_t bin){return fXaxis.GetBinCenter(bin);}
    virtual Stat_t   GetBinContent(Int_t bin);
    virtual Stat_t   GetBinError(Int_t bin);
    virtual Axis_t   GetBinLowEdge(Int_t bin){return fXaxis.GetBinLowEdge(bin);}
    virtual Axis_t   GetBinWidth(Int_t bin){return fXaxis.GetBinWidth(bin);}
    virtual Stat_t   GetCellContent(Int_t binx, Int_t biny);
    virtual Stat_t   GetCellError(Int_t binx, Int_t biny);
    virtual void     GetCenter(Axis_t *center){fXaxis.GetCenter(center);}
    TDirectory      *GetDirectory() {return fDirectory;}
    virtual Stat_t   GetEntries() {return fEntries;}
    virtual TF1     *GetFunction(const char *name);
    virtual Int_t    GetDimension() const { return fDimension; }
    virtual void     GetLowEdge(Axis_t *edge){fXaxis.GetLowEdge(edge);}
    virtual Float_t  GetMaximum();
    virtual Int_t    GetMaximumBin();
    virtual Int_t    GetMaximumBin(Int_t &locmax, Int_t &locmay, Int_t &locmaz);
    virtual Float_t  GetMaximumStored() {return fMaximum;}
    virtual Float_t  GetMinimum();
    virtual Int_t    GetMinimumBin();
    virtual Int_t    GetMinimumBin(Int_t &locmix, Int_t &locmiy, Int_t &locmiz);
    virtual Float_t  GetMinimumStored() {return fMinimum;}
    virtual Stat_t   GetMean(Int_t axis=1);
    virtual Int_t    GetNbinsX() const {return fXaxis.GetNbins();}
    virtual Int_t    GetNbinsY() const {return fYaxis.GetNbins();}
    virtual Int_t    GetNbinsZ() const {return fZaxis.GetNbins();}
    virtual Float_t  GetNormFactor() {return fNormFactor;}
    virtual char    *GetObjectInfo(Int_t px, Int_t py);
    Option_t        *GetOption() const {return fOption.Data();}

    TVirtualHistPainter *GetPainter() {return fPainter;}

    virtual Axis_t   GetRandom();
    virtual void     GetRandom2(Axis_t &x, Axis_t &y);
    virtual void     GetRandom3(Axis_t &x, Axis_t &y, Axis_t &z);
    virtual void     GetStats(Stat_t *stats);
    virtual Stat_t   GetSumOfWeights();
    virtual Int_t    GetSumw2N() {return fSumw2.fN;}
    virtual Stat_t   GetRMS(Int_t axis=1);
    virtual TAxis   *GetXaxis() {return &fXaxis;}
    virtual TAxis   *GetYaxis() {return &fYaxis;}
    virtual TAxis   *GetZaxis() {return &fZaxis;}
    virtual Stat_t   Integral();
    virtual Stat_t   Integral(Int_t binx1, Int_t binx2);
    virtual Stat_t   Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2);
    virtual Stat_t   Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Int_t binz1, Int_t binz2);
    virtual void     Multiply(TH1 *h1);
    virtual void     Multiply(TH1 *h1, TH1 *h2, Float_t c1=1, Float_t c2=1, Option_t *option=""); // *MENU*
    virtual void     Paint(Option_t *option="");
    virtual void     Print(Option_t *option="");
        TProfile    *ProfileX(const char *name="_pfx", Int_t firstybin=0, Int_t lastybin=9999, Option_t *option="");
        TProfile    *ProfileY(const char *name="_pfy", Int_t firstxbin=0, Int_t lastxbin=9999, Option_t *option="");
            TH1D    *ProjectionX(const char *name="_px", Int_t firstybin=0, Int_t lastybin=9999, Option_t *option="");
            TH1D    *ProjectionY(const char *name="_py", Int_t firstxbin=0, Int_t lastxbin=9999, Option_t *option="");
            TH1D    *ProjectionZ(const char *name="_pz", Int_t firstxbin=0, Int_t lastxbin=9999, Int_t firstybin=0,
                                 Int_t lastybin=9999, Option_t *option="");
            TH1     *Project3D(Option_t *option="x");
    virtual void     PutStats(Stat_t *stats);
            TH1     *Rebin(Int_t ngroup=2, const char*newname="");
    virtual void     RebinAxis(Axis_t x, Option_t *axis="X");
    virtual void     Reset(Option_t *option="");
    virtual void     SavePrimitive(ofstream &out, Option_t *option);
    virtual void     Scale(Float_t c1=1);
    virtual void     SetAxisColor(Color_t color=1, Option_t *axis="X");
    virtual void     SetAxisRange(Float_t xmin, Float_t xmax, Option_t *axis="X");
    virtual void     SetBarOffset(Float_t offset=0.25) {fBarOffset = Short_t(1000*offset);}
    virtual void     SetBarWidth(Float_t width=0.5) {fBarWidth = Short_t(1000*width);}
    virtual void     SetBinContent(Int_t bin, Stat_t content);
    virtual void     SetBinError(Int_t bin, Stat_t error);
    virtual void     SetBins(Int_t nx, Float_t xmin, Float_t xmax);
    virtual void     SetBins(Int_t nx, Float_t xmin, Float_t xmax, Int_t ny, Float_t ymin, Float_t ymax);
    virtual void     SetBins(Int_t nx, Float_t xmin, Float_t xmax, Int_t ny, Float_t ymin, Float_t ymax,
                             Int_t nz, Float_t zmin, Float_t zmax);
    virtual void     SetBinsLength(Int_t) {;} //refefined in derived classes
    virtual void     SetCellContent(Int_t binx, Int_t biny, Stat_t content);
    virtual void     SetCellError(Int_t binx, Int_t biny, Stat_t content);
    virtual void     SetContent(Stat_t *content);
    virtual void     SetContour(Int_t nlevels, Float_t *levels=0);
    virtual void     SetContourLevel(Int_t level, Float_t value);
    virtual void     SetDirectory(TDirectory *dir);
    virtual void     SetEntries(Stat_t n) {fEntries = n;};
    virtual void     SetError(Stat_t *error);
    virtual void     SetLabelColor(Color_t color=1, Option_t *axis="X");
    virtual void     SetLabelFont(Style_t font=62, Option_t *axis="X");
    virtual void     SetLabelOffset(Float_t offset=0.005, Option_t *axis="X");
    virtual void     SetLabelSize(Float_t size=0.02, Option_t *axis="X");

    virtual void     SetMaximum(Float_t maximum=-1111); // *MENU*
    virtual void     SetMinimum(Float_t minimum=-1111); // *MENU*
    virtual void     SetName(const char *name); // *MENU*
    virtual void     SetNdivisions(Int_t n=510, Option_t *axis="X");
    virtual void     SetNormFactor(Float_t factor=1) {fNormFactor = factor;}
    virtual void     SetStats(Bool_t stats=kTRUE);
    virtual void     SetOption(Option_t *option=" ") {fOption = option;}
    virtual void     SetTickLength(Float_t length=0.02, Option_t *axis="X");
    virtual void     SetTitleOffset(Float_t offset=1, Option_t *axis="X");
    virtual void     SetTitleSize(Float_t size=0.02, Option_t *axis="X");
    virtual void     SetXTitle(char *title) {fXaxis.SetTitle(title);}
    virtual void     SetYTitle(char *title) {fYaxis.SetTitle(title);}
    virtual void     SetZTitle(char *title) {fZaxis.SetTitle(title);}
    virtual void     Smooth(Int_t ntimes=1); // *MENU*
    static  void     SmoothArray(Int_t NN, Double_t *XX, Int_t ntimes=1);
    static Double_t  SmoothMedian(Int_t n, Double_t *a);

    virtual void     Sumw2();
    void             UseCurrentStyle();

    ClassDef(TH1,1)  //1-Dim histogram base class
};

//________________________________________________________________________

class TH1C : public TH1, public TArrayC {

protected:
    TH1C(Int_t dim,const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1C(Int_t dim,const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);

public:
    TH1C();
    TH1C(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1C(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);
    TH1C(const TH1C &h1c);
    virtual ~TH1C();

    virtual void    AddBinContent(Int_t bin);
    virtual void    AddBinContent(Int_t bin, Stat_t w);
    virtual void    Copy(TObject &hnew);
    virtual TH1    *DrawCopy(Option_t *option="");
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
    TH1S(Int_t dim,const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1S(Int_t dim,const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);

public:
    TH1S();
    TH1S(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1S(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);
    TH1S(const TH1S &h1s);
    virtual ~TH1S();

    virtual void    AddBinContent(Int_t bin);
    virtual void    AddBinContent(Int_t bin, Stat_t w);
    virtual void    Copy(TObject &hnew);
    virtual TH1    *DrawCopy(Option_t *option="");
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
    TH1F(Int_t dim,const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1F(Int_t dim,const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);

public:
    TH1F();
    TH1F(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1F(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);
    TH1F(const TH1F &h1f);
    virtual ~TH1F();

    virtual void    AddBinContent(Int_t bin) {++fArray[bin];}
    virtual void    AddBinContent(Int_t bin, Stat_t w)
                                 {fArray[bin] += Float_t (w);}
    virtual void    Copy(TObject &hnew);
    virtual TH1    *DrawCopy(Option_t *option="");
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
    TH1D(Int_t dim,const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1D(Int_t dim,const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);

public:
    TH1D();
    TH1D(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup);
    TH1D(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins);
    TH1D(const TH1D &h1d);
    virtual ~TH1D();

    virtual void    AddBinContent(Int_t bin) {++fArray[bin];}
    virtual void    AddBinContent(Int_t bin, Stat_t w)
                                 {fArray[bin] += Double_t (w);}
    virtual void    Copy(TObject &hnew);
    virtual TH1    *DrawCopy(Option_t *option="");
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
