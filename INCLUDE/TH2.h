//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/11 28/12/99  20.27.36  by  Rene Brun
//*CMZ :  2.22/05 10/06/99  10.05.13  by  Rene Brun
//*CMZ :  2.22/00 05/04/99  18.09.37  by  Rene Brun
//*CMZ :  2.21/05 10/02/99  09.24.36  by  Rene Brun
//*CMZ :  2.21/01 05/01/99  16.09.52  by  Rene Brun
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TH2
#define ROOT_TH2

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
// TH2                                                                  //
//                                                                      //
// 2-Dim histogram base class.                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TH1
#include "TH1.h"
#endif


class TH2 {

protected:
   Stat_t     fScalefactor;     //Scale factor
   Stat_t     fTsumwy;          //Total Sum of weight*Y
   Stat_t     fTsumwy2;         //Total Sum of weight*Y*Y
   Stat_t     fTsumwxy;         //Total Sum of weight*X*Y

   virtual void    Copy20(TH2 &hnew);
   virtual void    Fill20(Axis_t x, Axis_t y);
   virtual void    Fill20(Axis_t x, Axis_t y, Stat_t w);

public:
   TH2();
   virtual ~TH2();

   ClassDef(TH2,1)  //2-Dim histogram base class
};


//______________________________________________________________________________

class TH2C : public TH1C, public TH2 {

public:
   TH2C();
   TH2C(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                ,Int_t nbinsy,Axis_t ylow,Axis_t yup);
   TH2C(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                ,Int_t nbinsy,Axis_t ylow,Axis_t yup);
   TH2C(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                ,Int_t nbinsy,Axis_t *ybins);
   TH2C(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                ,Int_t nbinsy,Axis_t *ybins);
   TH2C(const TH2C &h2c);
   virtual ~TH2C();
   virtual void    Copy(TObject &hnew);
   virtual TH1    *DrawCopy(Option_t *option="");
   virtual Int_t   Fill(Axis_t) {return -2;}
   virtual Int_t   Fill(Axis_t x, Stat_t y);
   virtual Int_t   Fill(Axis_t x, Axis_t y, Stat_t w);
   virtual Int_t   Fill(Axis_t, Axis_t, Axis_t, Stat_t) {return -2;}
   virtual Stat_t  GetCorrelationFactor(Int_t axis1=1,Int_t axis2=2);
   virtual Stat_t  GetCovariance(Int_t axis1=1,Int_t axis2=2);
   virtual void    GetStats(Stat_t *stats);
   virtual void    PutStats(Stat_t *stats);
   virtual void    Reset(Option_t *option="");
           TH2C&   operator=(const TH2C &h1);
   friend  TH2C    operator*(Float_t c1, TH2C &h1);
   friend  TH2C    operator*(TH2C &h1, Float_t c1) {return operator*(c1,h1);}
   friend  TH2C    operator+(TH2C &h1, TH2C &h2);
   friend  TH2C    operator-(TH2C &h1, TH2C &h2);
   friend  TH2C    operator*(TH2C &h1, TH2C &h2);
   friend  TH2C    operator/(TH2C &h1, TH2C &h2);

   ClassDef(TH2C,1)  //2-Dim histograms (one char per channel)
};


//______________________________________________________________________________

class TH2S : public TH1S, public TH2 {

public:
   TH2S();
   TH2S(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                ,Int_t nbinsy,Axis_t ylow,Axis_t yup);
   TH2S(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                ,Int_t nbinsy,Axis_t ylow,Axis_t yup);
   TH2S(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                ,Int_t nbinsy,Axis_t *ybins);
   TH2S(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                ,Int_t nbinsy,Axis_t *ybins);
   TH2S(const TH2S &h2s);
   virtual ~TH2S();
   virtual void    Copy(TObject &hnew);
   virtual TH1    *DrawCopy(Option_t *option="");
   virtual Int_t   Fill(Axis_t) {return -2;}
   virtual Int_t   Fill(Axis_t x, Stat_t y);
   virtual Int_t   Fill(Axis_t x, Axis_t y, Stat_t w);
   virtual Int_t   Fill(Axis_t, Axis_t, Axis_t, Stat_t) {return -2;}
   virtual Stat_t  GetCorrelationFactor(Int_t axis1=1,Int_t axis2=2);
   virtual Stat_t  GetCovariance(Int_t axis1=1,Int_t axis2=2);
   virtual void    GetStats(Stat_t *stats);
   virtual void    PutStats(Stat_t *stats);
   virtual void    Reset(Option_t *option="");
           TH2S&   operator=(const TH2S &h1);
   friend  TH2S    operator*(Float_t c1, TH2S &h1);
   friend  TH2S    operator*(TH2S &h1, Float_t c1) {return operator*(c1,h1);}
   friend  TH2S    operator+(TH2S &h1, TH2S &h2);
   friend  TH2S    operator-(TH2S &h1, TH2S &h2);
   friend  TH2S    operator*(TH2S &h1, TH2S &h2);
   friend  TH2S    operator/(TH2S &h1, TH2S &h2);

   ClassDef(TH2S,1)  //2-Dim histograms (one short per channel)
};


//______________________________________________________________________________

class TH2F : public TH1F, public TH2 {

public:
   TH2F();
   TH2F(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                ,Int_t nbinsy,Axis_t ylow,Axis_t yup);
   TH2F(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                ,Int_t nbinsy,Axis_t ylow,Axis_t yup);
   TH2F(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                ,Int_t nbinsy,Axis_t *ybins);
   TH2F(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                ,Int_t nbinsy,Axis_t *ybins);
   TH2F(const TH2F &h2f);
   virtual ~TH2F();
   virtual void    Copy(TObject &hnew);
   virtual TH1    *DrawCopy(Option_t *option="");
   virtual Int_t   Fill(Axis_t) {return -2;}
   virtual Int_t   Fill(Axis_t x, Stat_t y);
   virtual Int_t   Fill(Axis_t x, Axis_t y, Stat_t w);
   virtual Int_t   Fill(Axis_t, Axis_t, Axis_t, Stat_t) {return -2;}
   virtual Stat_t  GetCorrelationFactor(Int_t axis1=1,Int_t axis2=2);
   virtual Stat_t  GetCovariance(Int_t axis1=1,Int_t axis2=2);
   virtual void    GetStats(Stat_t *stats);
   virtual void    PutStats(Stat_t *stats);
   virtual void    Reset(Option_t *option="");
           TH2F&   operator=(const TH2F &h1);
   friend  TH2F    operator*(Float_t c1, TH2F &h1);
   friend  TH2F    operator*(TH2F &h1, Float_t c1);
   friend  TH2F    operator+(TH2F &h1, TH2F &h2);
   friend  TH2F    operator-(TH2F &h1, TH2F &h2);
   friend  TH2F    operator*(TH2F &h1, TH2F &h2);
   friend  TH2F    operator/(TH2F &h1, TH2F &h2);

   ClassDef(TH2F,1)  //2-Dim histograms (one float per channel)
};


//______________________________________________________________________________

class TH2D : public TH1D, public TH2 {

public:
   TH2D();
   TH2D(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                ,Int_t nbinsy,Axis_t ylow,Axis_t yup);
   TH2D(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                ,Int_t nbinsy,Axis_t ylow,Axis_t yup);
   TH2D(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                ,Int_t nbinsy,Axis_t *ybins);
   TH2D(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                ,Int_t nbinsy,Axis_t *ybins);
   TH2D(const TH2D &h2d);
   virtual ~TH2D();
   virtual void    Copy(TObject &hnew);
   virtual TH1    *DrawCopy(Option_t *option="");
   virtual Int_t   Fill(Axis_t) {return -2;}
   virtual Int_t   Fill(Axis_t x, Stat_t y);
   virtual Int_t   Fill(Axis_t x, Axis_t y, Stat_t w);
   virtual Int_t   Fill(Axis_t, Axis_t, Axis_t, Stat_t) {return -2;}
   virtual Stat_t  GetCorrelationFactor(Int_t axis1=1,Int_t axis2=2);
   virtual Stat_t  GetCovariance(Int_t axis1=1,Int_t axis2=2);
   virtual void    GetStats(Stat_t *stats);
   virtual void    PutStats(Stat_t *stats);
   virtual void    Reset(Option_t *option="");
           TH2D&   operator=(const TH2D &h1);
   friend  TH2D    operator*(Float_t c1, TH2D &h1);
   friend  TH2D    operator*(TH2D &h1, Float_t c1) {return operator*(c1,h1);}
   friend  TH2D    operator+(TH2D &h1, TH2D &h2);
   friend  TH2D    operator-(TH2D &h1, TH2D &h2);
   friend  TH2D    operator*(TH2D &h1, TH2D &h2);
   friend  TH2D    operator/(TH2D &h1, TH2D &h2);

   ClassDef(TH2D,1)  //2-Dim histograms (one double per channel)
};

#endif

