//*CMZ :  2.23/12 31/01/2000  10.57.00  by  Rene Brun
//*CMZ :  2.00/00 18/02/98  16.00.27  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.32.36  by  Rene Brun
//*-- Author :    Rene Brun   03/10/95

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TMixture                                                             //
//                                                                      //
// Mixtures used in the Geometry Shapes                                 //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TMixture
#define ROOT_TMixture

#ifndef ROOT_TMaterial
#include "TMaterial.h"
#endif

class TMixture  : public TMaterial {
 protected:
   Int_t        fNmixt;       //Number of elements in mixture
   Float_t      *fAmixt;      //[fNmixt] Array of A of mixtures
   Float_t      *fZmixt;      //[fNmixt] Array of Z of mixtures
   Float_t      *fWmixt;      //[fNmixt] Array of relative weights

 public:
        TMixture();
        TMixture(const char *name, const char *title, Int_t nmixt);
        virtual ~TMixture();
        virtual void      DefineElement(Int_t n, Float_t a, Float_t z, Float_t w);
                Int_t     GetNmixt() {return fNmixt;}
                Float_t   *GetAmixt() {return fAmixt;}
                Float_t   *GetZmixt() {return fZmixt;}
                Float_t   *GetWmixt() {return fWmixt;}

        ClassDef(TMixture,1)  //Mixtures used in the Geometry Shapes
};

#endif
