//*CMZ :  2.00/00 18/02/98  16.00.27  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.32.36  by  Rene Brun
//*-- Author :    Rene Brun   03/10/95

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
   Float_t      *fAmixt;      //Array of A of mixtures
   Float_t      *fZmixt;      //Array of Z of mixtures
   Float_t      *fWmixt;      //Array of relative weights

 public:
        TMixture();
        TMixture(Text_t *name, Text_t *title, Int_t nmixt);
        virtual ~TMixture();
        virtual void      DefineElement(Int_t n, Float_t a, Float_t z, Float_t w);
                Int_t     GetNmixt() {return fNmixt;}
                Float_t   *GetAmixt() {return fAmixt;}
                Float_t   *GetZmixt() {return fZmixt;}
                Float_t   *GetWmixt() {return fWmixt;}

        ClassDef(TMixture,1)  //Mixtures used in the Geometry Shapes
};

#endif
