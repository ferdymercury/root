//*CMZ :  0.90/01 08/09/97  10.27.37  by  Rene Brun
//*-- Author :    Ola Nordman   29/09/95

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
// TAttParticle                                                         //
//                                                                      //
// Particle definition, based on GEANT3 particle definition             //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TAttParticle
#define ROOT_TAttParticle

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttline.h"
#endif

class THashList;

class TAttParticle  : public TNamed {
 private:
  Double_t     fPDGMass;         //Mass of the particle in GeV/c2
  Bool_t       fPDGStable;       //Logical indicator, if TRUE the particle can not decay
  Double_t     fPDGDecayWidth;   //Life time of the particle in sec.
  Double_t     fPDGCharge;       //Charge of the particle in units of e
  TString      fParticleType;    //Text indicator for the particle family
  Int_t        fMCnumberOfPDG;   //PDG MC number followed by
                                 //http://pdg.lbl.gov/rpp/mcdata/all.mc
  Double_t     fEnergyCut;       //Lower energy cut off, the default is 10 keV
  Double_t     fEnergyLimit;     //High energy cut off, the default is 10 TeV
  Double_t     fGranularity;     //Granularity of the fLogEScale

 public:
  TAttParticle();
  TAttParticle(const Text_t *name, const Text_t *title,
               Double_t Mass, Bool_t Stable,
               Double_t DecayWidth, Double_t Charge, Text_t *Type,
               Int_t MCnumber, Int_t granularity=90,
               Double_t LowerCutOff=1.e-5, Double_t HighCutOff=1.e4);
  virtual ~TAttParticle();
  static  THashList     *fgList;
  static  Int_t          ConvertISAtoPDG(Int_t isaNumber);
  static  void           DefinePDG();
  virtual Double_t       GetCharge() { return fPDGCharge; }
  virtual Double_t       GetEnergyCut() { return fEnergyCut; }
  virtual Double_t       GetEnergyLimit() { return fEnergyLimit; }
  virtual Double_t       GetGranularity() { return fGranularity; }
  virtual Double_t       GetDecayWidth() { return fPDGDecayWidth; }
  virtual Double_t       GetMass() { return fPDGMass; }
  virtual Int_t          GetMCNumber() { return fMCnumberOfPDG; }
  static  TAttParticle  *GetParticle(Text_t *name);
  static  TAttParticle  *GetParticle(Int_t mcnumber);
  virtual const Text_t  *GetParticleType() const { return fParticleType.Data(); }
  virtual Bool_t         GetStable() { return fPDGStable; }
  virtual ULong_t        Hash() { return fMCnumberOfPDG; }
  virtual void           Print(Option_t *option="");
  virtual Double_t       SampleMass();
  virtual Double_t       SampleMass(Double_t widthcut);

  ClassDef(TAttParticle,1)  //Particle definition
};

#endif
