//*CMZ :  1.03/03 08/09/97  10.27.37  by  Rene Brun
//*-- Author :    Ola Nordmann   21/09/95

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
// TPrimary                                                             //
// Is a small class in order to define the particles at the production  //
// vertex.                                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPrimary
#define ROOT_TPrimary

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_X3DBuffer
#include "X3DBuffer.h"
#endif

class TAttParticle;

class TPrimary : public TObject, public TAttLine {

 protected:
        Int_t         fPart;         //Particle id produced
        Int_t         fFirstMother;  //Index of the first mother particle
        Int_t         fSecondMother; //Index of the second mother particle(if any)
        Int_t         fGeneration;   //Generation flag: last gen. (0) or not (1) or ghost (2)
        Double_t      fPx;           //Momentum in x direction in GeV/c
        Double_t      fPy;           //Momentum in y direction in GeV/c
        Double_t      fPz;           //Momentum in z direction in GeV/c
        Double_t      fEtot;         //Total energy in GeV
        Double_t      fVx;           //Production vertex x position in user units
        Double_t      fVy;           //Production vertex y position in user units
        Double_t      fVz;           //Production vertex z position in user units
        Double_t      fTime;         //Time of particle production in user units
        Double_t      fTimeEnd;      //Time of particle destruction (always in the pp-cms!)
        TString       fType;         //Indicator of primary type

 public:
        TPrimary();
        TPrimary(Int_t part, Int_t first, Int_t second, Int_t gener,
                 Double_t px, Double_t py, Double_t pz,
                 Double_t etot, Double_t vx, Double_t vy, Double_t vz,
                 Double_t time, Double_t timend, Text_t *type = "");
        virtual ~TPrimary();
        virtual Int_t         DistancetoPrimitive(Int_t px, Int_t py);
        virtual void          ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual const TAttParticle  *GetParticle() const;
        virtual const Text_t *GetName() const;
        virtual const Text_t *GetTitle() const;
        virtual Int_t         GetFirstMother() { return fFirstMother; }
        virtual Int_t         GetSecondMother() { return fSecondMother; }
        virtual Int_t         GetGeneration() { return fGeneration; }
        virtual Double_t      GetXMomentum() { return fPx; }
        virtual Double_t      GetYMomentum() { return fPy; }
        virtual Double_t      GetZMomentum() { return fPz; }
        virtual Double_t      GetTotalEnergy() { return fEtot; }
        virtual Double_t      GetXPosition() { return fVx; }
        virtual Double_t      GetYPosition() { return fVy; }
        virtual Double_t      GetZPosition() { return fVz; }
        virtual Double_t      GetTime() { return fTime; }
        virtual Double_t      GetTimeEnd() { return fTimeEnd; }
        virtual const Text_t  *GetType() const { return fType.Data(); }
        virtual Bool_t        Is3D() {return kTRUE;}
        virtual void          Paint(Option_t *option = "");
        virtual void          Print(Option_t *option = "");
        virtual void          Sizeof3D() const;

        ClassDef(TPrimary,1)  //TPrimary vertex particle information
};

#endif
