//*CMZ :  1.03/09 09/12/97  20.31.35  by  Fons Rademakers
//*-- Author :    Rene Brun   27/10/95

#ifndef ROOT_TH3
#define ROOT_TH3

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
// TH3                                                                  //
//                                                                      //
// 3-Dim histogram base class.                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TH1
#include "TH1.h"
#endif


class TH3 {

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
   TH3C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                  ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                  ,Int_t nbinsz,Axis_t zlow,Axis_t zup);
   TH3C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
                                  ,Int_t nbinsy,Axis_t *ybins
                                  ,Int_t nbinsz,Axis_t *zbins);
   TH3C(const TH3C &h3c);
   virtual ~TH3C();
   virtual void    Copy(TObject &hnew);
   virtual void    Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
   virtual Bool_t  Is3D() {return kTRUE;}
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
   TH3S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                  ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                  ,Int_t nbinsz,Axis_t zlow,Axis_t zup);
   TH3S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
                                  ,Int_t nbinsy,Axis_t *ybins
                                  ,Int_t nbinsz,Axis_t *zbins);
   TH3S(const TH3S &h3s);
   virtual ~TH3S();
   virtual void    Copy(TObject &hnew);
   virtual void    Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
   virtual Bool_t  Is3D() {return kTRUE;}
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
   TH3F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                  ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                  ,Int_t nbinsz,Axis_t zlow,Axis_t zup);
   TH3F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
                                  ,Int_t nbinsy,Axis_t *ybins
                                  ,Int_t nbinsz,Axis_t *zbins);
   TH3F(const TH3F &h3f);
   virtual ~TH3F();
   virtual void    Copy(TObject &hnew);
   virtual void    Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
   virtual Bool_t  Is3D() {return kTRUE;}
   virtual void    Sizeof3D() const;
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
   TH3D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                  ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                  ,Int_t nbinsz,Axis_t zlow,Axis_t zup);
   TH3D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
                                  ,Int_t nbinsy,Axis_t *ybins
                                  ,Int_t nbinsz,Axis_t *zbins);
   TH3D(const TH3D &h3d);
   virtual ~TH3D();
   virtual void    Copy(TObject &hnew);
   virtual void    Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w);
   virtual Bool_t  Is3D() {return kTRUE;}
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

