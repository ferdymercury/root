//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/09 09/11/99  11.32.45  by  Rene Brun
//*CMZ :  2.23/03 08/09/99  18.49.30  by  Fons Rademakers
//*CMZ :  2.21/05 10/02/99  09.25.11  by  Rene Brun
//*CMZ :  2.21/01 05/01/99  16.19.36  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  20.31.35  by  Fons Rademakers
//*-- Author :    Rene Brun   27/10/95

#ifndef ROOT_TH3
#define ROOT_TH3

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
// TH3                                                                  //
//                                                                      //
// 3-Dim histogram base class.                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TH1
#include "TH1.h"
#endif

#ifndef ROOT_TAtt3D
#include "TAtt3D.h"
#endif


class TH3 : public TAtt3D {

protected:
   virtual void Copy30(TH3 &hnew);

public:
   TH3();
   virtual ~TH3();

   ClassDef(TH3,1)  //3-Dim histogram base class
};

//________________________________________________________________________

class TH3C : public TH1C, public TH3 {
public:
   TH3C();
   TH3C(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                  ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                  ,Int_t nbinsz,Axis_t zlow,Axis_t zup);
   TH3C(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                  ,Int_t nbinsy,Axis_t *ybins
                                  ,Int_t nbinsz,Axis_t *zbins);
   TH3C(const TH3C &h3c);
   virtual ~TH3C();
   virtual void    Copy(TObject &hnew);
   virtual TH1    *DrawCopy(Option_t *option="");
   virtual Int_t   Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
   virtual void    Reset(Option_t *option="");
           TH3C&   operator=(const TH3C &h1);
   friend  TH3C    operator*(Float_t c1, TH3C &h1);
   friend  TH3C    operator*(TH3C &h1, Float_t c1) {return operator*(c1,h1);}
   friend  TH3C    operator+(TH3C &h1, TH3C &h2);
   friend  TH3C    operator-(TH3C &h1, TH3C &h2);
   friend  TH3C    operator*(TH3C &h1, TH3C &h2);
   friend  TH3C    operator/(TH3C &h1, TH3C &h2);

   ClassDef(TH3C,1)  //3-Dim histograms (one char per channel)
};

//________________________________________________________________________

class TH3S : public TH1S, public TH3 {
public:
   TH3S();
   TH3S(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                  ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                  ,Int_t nbinsz,Axis_t zlow,Axis_t zup);
   TH3S(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                  ,Int_t nbinsy,Axis_t *ybins
                                  ,Int_t nbinsz,Axis_t *zbins);
   TH3S(const TH3S &h3s);
   virtual ~TH3S();
   virtual void    Copy(TObject &hnew);
   virtual TH1    *DrawCopy(Option_t *option="");
   virtual Int_t   Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
   virtual void    Reset(Option_t *option="");
           TH3S&   operator=(const TH3S &h1);
   friend  TH3S    operator*(Float_t c1, TH3S &h1);
   friend  TH3S    operator*(TH3S &h1, Float_t c1) {return operator*(c1,h1);}
   friend  TH3S    operator+(TH3S &h1, TH3S &h2);
   friend  TH3S    operator-(TH3S &h1, TH3S &h2);
   friend  TH3S    operator*(TH3S &h1, TH3S &h2);
   friend  TH3S    operator/(TH3S &h1, TH3S &h2);

   ClassDef(TH3S,1)  //3-Dim histograms (one short per channel)
};


//________________________________________________________________________

class TH3F : public TH1F, public TH3 {
public:
   TH3F();
   TH3F(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                  ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                  ,Int_t nbinsz,Axis_t zlow,Axis_t zup);
   TH3F(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                  ,Int_t nbinsy,Axis_t *ybins
                                  ,Int_t nbinsz,Axis_t *zbins);
   TH3F(const TH3F &h3f);
   virtual ~TH3F();
   virtual void    Copy(TObject &hnew);
   virtual TH1    *DrawCopy(Option_t *option="");
   virtual Int_t   Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
   virtual void    Sizeof3D() const;
   virtual void    Reset(Option_t *option="");
           TH3F&   operator=(const TH3F &h1);
   friend  TH3F    operator*(Float_t c1, TH3F &h1);
   friend  TH3F    operator*(TH3F &h1, Float_t c1) {return operator*(c1,h1);}
   friend  TH3F    operator+(TH3F &h1, TH3F &h2);
   friend  TH3F    operator-(TH3F &h1, TH3F &h2);
   friend  TH3F    operator*(TH3F &h1, TH3F &h2);
   friend  TH3F    operator/(TH3F &h1, TH3F &h2);

   ClassDef(TH3F,1)  //3-Dim histograms (one float per channel)
};

//________________________________________________________________________

class TH3D : public TH1D, public TH3 {
public:
   TH3D();
   TH3D(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                  ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                  ,Int_t nbinsz,Axis_t zlow,Axis_t zup);
   TH3D(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                  ,Int_t nbinsy,Axis_t *ybins
                                  ,Int_t nbinsz,Axis_t *zbins);
   TH3D(const TH3D &h3d);
   virtual ~TH3D();
   virtual void    Copy(TObject &hnew);
   virtual TH1    *DrawCopy(Option_t *option="");
   virtual Int_t   Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
   virtual void    Reset(Option_t *option="");
           TH3D&   operator=(const TH3D &h1);
   friend  TH3D    operator*(Float_t c1, TH3D &h1);
   friend  TH3D    operator*(TH3D &h1, Float_t c1) {return operator*(c1,h1);}
   friend  TH3D    operator+(TH3D &h1, TH3D &h2);
   friend  TH3D    operator-(TH3D &h1, TH3D &h2);
   friend  TH3D    operator*(TH3D &h1, TH3D &h2);
   friend  TH3D    operator/(TH3D &h1, TH3D &h2);

   ClassDef(TH3D,1)  //3-Dim histograms (one double per channel)
};

#endif

