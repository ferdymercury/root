//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/12 07/10/98  08.52.48  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/09 23/06/98  14.08.52  by  Rene Brun
//*CMZ :  2.00/00 12/01/98  08.44.13  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.36.02  by  Rene Brun
//*-- Author :    Nenad Buncic   18/09/95

#ifndef ROOT_TTUBE
#define ROOT_TTUBE

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

////////////////////////////////////////////////////////////////////////////
//                                                                        //
// TTUBE                                                                  //
//                                                                        //
// This tube has 3 parameters, the inside radius, the outside radius, and //
// the half length in z. Optional parameter is number of segments, also   //
// known as precision (default value is 20).                              //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TShape
#include "TShape.h"
#endif



const Int_t kDivNum = 20;               //default number of divisions



class TTUBE : public TShape {

    protected:
        Float_t fRmin;        // ellipse  semi-axis   in  X inside
        Float_t fRmax;        // ellipse  semi-axis   in  X outside

        Float_t fDz;          // half length in z
        Int_t   fNdiv;        // number of segments (precision)

        Float_t fAspectRatio; // defines  (the ellipse semi-axis in Y)/(the ellipse semi-axis in X)

        Double_t   *fSiTab;   // Table of sin(fPhi1) .... sin(fPhil+fDphi1)
        Double_t   *fCoTab;   // Table of cos(fPhi1) .... cos(fPhil+fDphi1)

        virtual void    MakeTableOfCoSin();  // Create the table of the fSiTab; fCoTab
        virtual void    PaintGLPoints(Float_t *vertex);


    public:
        TTUBE();
        TTUBE(const char *name, const char *title, const char *material, Float_t rmin, Float_t rmax, Float_t dz, Float_t aspect=1);
        TTUBE(const char *name, const char *title, const char *material, Float_t rmax, Float_t dz);
        virtual ~TTUBE();

        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        virtual Float_t GetRmin()  {return fRmin;}
        virtual Float_t GetRmax()  {return fRmax;}
        virtual Float_t GetDz()    {return fDz;}
        virtual Int_t   GetNdiv()  {return fNdiv;}
        virtual Float_t GetAspectRatio(){return fAspectRatio;}
        virtual Int_t   GetNumberOfDivisions () const {if (fNdiv) return fNdiv; else return kDivNum;}
        virtual void    Paint(Option_t *option);
        virtual void    SetNumberOfDivisions (Int_t ndiv);
        virtual void    SetPoints(Float_t *buff);
        virtual void    SetAspectRatio(Float_t factor=1){fAspectRatio = factor;}
        virtual void    Sizeof3D() const;

        ClassDef(TTUBE,2)  //TUBE shape
};

#endif
