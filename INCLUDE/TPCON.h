//*CMZ :  2.00/09 23/06/98  14.12.22  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.33.38  by  Rene Brun
//*-- Author :    Nenad Buncic   27/09/95

#ifndef ROOT_TPCON
#define ROOT_TPCON

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
// TPCON                                                                  //
//                                                                        //
// PCON is a polycone. It has at least 9 parameters, the lower phi limit, //
// the range in phi, the number (at least two) of z planes where the      //
// radius is changing for each z boundary and the z coordinate, the       //
// minimum radius and the maximum radius.                                 //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TShape
#include "TShape.h"
#endif


const Int_t kDiv = 20;               //default number of divisions


class TPCON : public TShape {

    private:
       Double_t   *fSiTab;     // Table of sin(fPhi1) .... sin(fPhil+fDphi1)
       Double_t   *fCoTab;     // Table of cos(fPhi1) .... cos(fPhil+fDphi1)

    protected:
        Float_t fPhi1;         // lower phi limit
        Float_t fDphi1;        // range in phi
        Int_t   fNz;           // number of z segments
        Float_t *fRmin;        // pointer to array of inside radiuses
        Float_t *fRmax;        // pointer to array of outside radiuses
        Float_t *fDz;          // pointer to array of half lengths in z
        Int_t   fNdiv;         // number of divisions
        virtual void    MakeTableOfCoSin();  // Create the table of the fSiTab; fCoTab
        virtual void    PaintGLPoints(Float_t *vertex);

    public:
        TPCON();
        TPCON(Text_t *name, Text_t *title, Text_t *material, Float_t phi1, Float_t dphi1, Int_t nz);
        virtual ~TPCON();

        virtual void    DefineSection(Int_t secNum, Float_t z, Float_t rmin, Float_t rmax);
        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        virtual Int_t   GetNumberOfDivisions () const {if (fNdiv) return fNdiv; else return kDiv;}
        virtual Float_t GetPhi1()  {return fPhi1;}
        virtual Float_t GetDhi1()  {return fDphi1;}
        virtual Int_t   GetNz()    {return fNz;}
        virtual Float_t *GetRmin() {return fRmin;}
        virtual Float_t *GetRmax() {return fRmax;}
        virtual Float_t *GetDz()   {return fDz;}
        virtual Int_t   GetNdiv()  {return fNdiv;}
        virtual void    Paint(Option_t *option);
        virtual void    SetNumberOfDivisions (Int_t p);
        virtual void    SetPoints(Float_t *buff);
        virtual void    Sizeof3D() const;

        ClassDef(TPCON,1)  //PCON shape
};

#endif
