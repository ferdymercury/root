//*CMZ :  2.23/12 26/01/2000  09.49.06  by  Rene Brun
//*CMZ :  2.23/10 15/12/99  12.45.11  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  12.25.03  by  Rene Brun
//*CMZ :  0.90/01 08/09/97  10.27.37  by  Rene Brun
//*-- Author :    Ola Nordman   29/09/95

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
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
  TAttParticle(const char *name, const char *title,
               Double_t Mass, Bool_t Stable,
               Double_t DecayWidth, Double_t Charge, const char *Type,
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
  static  TAttParticle  *GetParticle(const char *name);
  static  TAttParticle  *GetParticle(Int_t mcnumber);
  virtual const char    *GetParticleType() const { return fParticleType.Data(); }
  virtual Bool_t         GetStable() { return fPDGStable; }
  virtual void           Print(Option_t *option="");
  virtual Double_t       SampleMass();
  virtual Double_t       SampleMass(Double_t widthcut);

  ClassDef(TAttParticle,1)  //Particle definition
};

#endif
