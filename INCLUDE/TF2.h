//*CMZ :  2.20/01 01/12/98  17.17.28  by  Rene Brun
//*CMZ :  1.03/09 05/12/97  17.00.17  by  Fons Rademakers
//*-- Author :    Rene Brun   23/08/95
// ---------------------------------- F2.h

#ifndef ROOT_TF2
#define ROOT_TF2

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
// TF2                                                                  //
//                                                                      //
// The Parametric 2-D function                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TF1
#include "TF1.h"
#endif

class TF2 : public TF1 {

protected:
   Float_t   fYmin;        //Lower bound for the range in y
   Float_t   fYmax;        //Upper bound for the range in y
   Int_t     fNpy;         //Number of points along y used for the graphical representation
   Int_t     fNlevels;     //Number of contour levels

public:
   TF2();
   TF2(const char *name, const char *formula, Float_t xmin=0, Float_t xmax=1, Float_t ymin=0, Float_t ymax=1);
   TF2(const char *name, void *fcn, Float_t xmin=0, Float_t xmax=1, Float_t ymin=0, Float_t ymax=1, Int_t npar=0);
   TF2(const char *name, Double_t (*fcn)(Double_t *, Double_t *), Float_t xmin=0, Float_t xmax=1, Float_t ymin=0, Float_t ymax=1, Int_t npar=0);
   TF2(const TF2 &f2);
   virtual   ~TF2();
   virtual void   Copy(TObject &f2);
   virtual Int_t  DistancetoPrimitive(Int_t px, Int_t py);
   virtual void   Draw(Option_t *option="");
   virtual void   DrawCopy(Option_t *option="");
   virtual void   DrawF2(const char *formula, Float_t xmin, Float_t xmax, Float_t ymin, Float_t ymax, Option_t *option="");
   virtual void   ExecuteEvent(Int_t event, Int_t px, Int_t py);
          Int_t   GetContour() {return fNlevels;}
          Int_t   GetNpy() {return fNpy;}
       Double_t   GetRandom();
   virtual void   GetRandom2(Float_t &xrandom, Float_t &yrandom);
   virtual void   GetRange(Float_t &xmin, Float_t &xmax) { TF1::GetRange(xmin, xmax); }
   virtual void   GetRange(Float_t &xmin, Float_t &ymin, Float_t &xmax, Float_t &ymax);
   virtual void   GetRange(Float_t &xmin, Float_t &ymin, Float_t &zmin, Float_t &xmax, Float_t &ymax, Float_t &zmax);
   virtual Float_t GetYmin() {return fYmin;}
   virtual Float_t GetYmax() {return fYmax;}
   virtual void   Paint(Option_t *option="");
   virtual void   SetNpy(Int_t npy=100); // *MENU*
   virtual void   SetContour(Int_t nl=20) {fNlevels = nl;}
   virtual void   SetRange(Float_t xmin, Float_t xmax);
   virtual void   SetRange(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax); // *MENU*
   virtual void   SetRange(Float_t xmin, Float_t ymin, Float_t zmin, Float_t xmax, Float_t ymax, Float_t zmax);

   ClassDef(TF2,1)  //The Parametric 2-D function
};

inline void TF2::SetRange(Float_t xmin, Float_t xmax)
   { TF1::SetRange(xmin, xmax); }
inline void TF2::SetRange(Float_t xmin, Float_t ymin, Float_t, Float_t xmax, Float_t ymax, Float_t)
   { SetRange(xmin, ymin, xmax, ymax); }

#endif
