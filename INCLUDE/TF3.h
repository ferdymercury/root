//*CMZ :  2.20/01 01/12/98  21.46.12  by  Rene Brun
//*CMZ :  1.03/09 05/12/97  17.00.17  by  Fons Rademakers
//*-- Author :    Rene Brun   27/10/95
// ---------------------------------- F3.h

#ifndef ROOT_TF3
#define ROOT_TF3

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
// TF3                                                                  //
//                                                                      //
// The Parametric 2-D function                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TF2
#include "TF2.h"
#endif

class TF3 : public TF2 {

protected:
   Float_t   fZmin;        //Lower bound for the range in z
   Float_t   fZmax;        //Upper bound for the range in z
   Int_t     fNpz;         //Number of points along z used for the graphical representation

public:
   TF3();
   TF3(const char *name, const char *formula, Float_t xmin=0, Float_t xmax=1, Float_t ymin=0,
       Float_t ymax=1, Float_t zmin=0, Float_t zmax=1);
   TF3(const char *name, void *fcn, Float_t xmin=0, Float_t xmax=1, Float_t ymin=0,
       Float_t ymax=1, Float_t zmin=0, Float_t zmax=1, Int_t npar=0);
   TF3(const char *name, Double_t (*fcn)(Double_t *, Double_t *), Float_t xmin=0, Float_t xmax=1, Float_t ymin=0,
       Float_t ymax=1, Float_t zmin=0, Float_t zmax=1, Int_t npar=0);

   TF3(const TF3 &f3);
   virtual   ~TF3();
   virtual void   Copy(TObject &f3);
   virtual Int_t  DistancetoPrimitive(Int_t px, Int_t py);
   virtual void   Draw(Option_t *option="");
   virtual void   ExecuteEvent(Int_t event, Int_t px, Int_t py);
          Int_t   GetNpz() {return fNpz;}
   virtual void   GetRandom3(Float_t &xrandom, Float_t &yrandom, Float_t &zrandom);
   virtual void   GetRange(Float_t &xmin, Float_t &xmax);
   virtual void   GetRange(Float_t &xmin, Float_t &ymin, Float_t &xmax, Float_t &ymax);
   virtual void   GetRange(Float_t &xmin, Float_t &ymin, Float_t &zmin, Float_t &xmax, Float_t &ymax, Float_t &zmax);
   virtual Float_t GetZmin() {return fZmin;}
   virtual Float_t GetZmax() {return fZmax;}
   virtual void   Paint(Option_t *option="");
   virtual void   SetNpz(Int_t npz=30);
   virtual void   SetRange(Float_t xmin, Float_t xmax);
   virtual void   SetRange(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax);
   virtual void   SetRange(Float_t xmin, Float_t ymin, Float_t zmin, Float_t xmax, Float_t ymax, Float_t zmax); // *MENU*

   ClassDef(TF3,1)  //The Parametric 3-D function
};

inline void TF3::GetRange(Float_t &xmin, Float_t &xmax)
   { TF2::GetRange(xmin, xmax); }
inline void TF3::GetRange(Float_t &xmin, Float_t &ymin, Float_t &xmax, Float_t &ymax)
   { TF2::GetRange(xmin, ymin, xmax, ymax); }
inline void TF3::SetRange(Float_t xmin, Float_t xmax)
   { TF2::SetRange(xmin, xmax); }
inline void TF3::SetRange(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax)
   { TF2::SetRange(xmin, ymin, xmax, ymax); }

#endif
