//*CMZ :  2.00/12 07/10/98  08.52.48  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/09 24/06/98  13.01.19  by  Rene Brun
//*CMZ :  2.00/08 28/05/98  09.02.52  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.03/08 20/11/97  18.35.08  by  Rene Brun
//*-- Author :    Valery Fine   08/04/98

#ifndef ROOT_TSPHE
#define ROOT_TSPHE

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

////////////////////////////////////////////////////////////////////////////
//                                                                        //
// TSPHE                                                                  //
//                                                                        //
// SPHE is Sphere. Not implemented yet.                                   //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TBRIK
#include "TShape.h"
#endif

// const Int_t kDiv = 30;               //default number of z segments for semi-sphere

class TSPHE : public TShape {

    private:
       Double_t   *fSiTab;     // Table of sin(fPhimin) .... sin(Phi)
       Double_t   *fCoTab;     // Table of cos(fPhimin) .... cos(Phi)
       Double_t   *fCoThetaTab;// Table of sin(gThemin) .... cos(Theta)
       Int_t      fNdiv;       // number of divisions
       Int_t      fNz;         // number of sections
       Float_t    fAspectRatio;// Relation between asumth and grid size (by default 1.0)


    protected:
        Float_t fRmin;    // minimum radius
        Float_t fRmax;    // maximum radius
        Float_t fThemin;  // minimum theta
        Float_t fThemax;  // maximum theta
        Float_t fPhimin;  // minimum phi
        Float_t fPhimax;  // maximum phi
        Float_t faX;      // Coeff along Ox
        Float_t faY;      // Coeff along Oy
        Float_t faZ;      // Coeff along Oz
        virtual void    MakeTableOfCoSin();  // Create the table of the fSiTab; fCoTab
        virtual void    PaintGLPoints(Float_t *vertex);



    public:
        TSPHE();
        TSPHE(Text_t *name, Text_t *title, Text_t *material, Float_t rmin, Float_t rmax, Float_t themin,
              Float_t themax, Float_t phimin, Float_t phimax);
        TSPHE(Text_t *name, Text_t *title, Text_t *material, Float_t rmax);
        virtual ~TSPHE();
        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        virtual Float_t GetRmin() {return fRmin;}
        virtual Float_t GetRmax() {return fRmax;}
        virtual Float_t GetThemin() {return fThemin;}
        virtual Float_t GetThemax() {return fThemax;}
        virtual Float_t GetPhimin() {return fPhimin;}
        virtual Float_t GetPhimax() {return fPhimax;}
        virtual Float_t GetAspectRatio(){ return fAspectRatio;}
        virtual Int_t   GetNumberOfDivisions () const {if (fNdiv) return fNdiv; else return 0; /*kDiv;*/}
        virtual void    Paint(Option_t *option);
        virtual void    SetAspectRatio(Float_t factor=1.0){ fAspectRatio = factor; MakeTableOfCoSin();}
        virtual void    SetEllipse(Float_t *factors);
        virtual void    SetNumberOfDivisions (Int_t p);
        virtual void    SetPoints  (Float_t *buff);
        virtual void    Sizeof3D() const;

        ClassDef(TSPHE,2)  //SPHE shape
};

#endif
