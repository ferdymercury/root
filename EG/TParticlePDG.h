//*CMZ :  2.21/06 12/02/99  13.21.45  by  Pasha Murat
//*-- Author :    Pasha Murat   12/02/99
#ifndef ROOT_TParticlePDG
#define ROOT_TParticlePDG

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TObjArray
#include "TObjArray.h"
#endif

class TParticlePDG : public TNamed {
//------------------------------------------------------------------------------
//     data members
//------------------------------------------------------------------------------
protected:

  Int_t            fPdgCode;		        // PDG code of the particle
  Double_t         fMass;                       // particle mass in GeV
  Double_t         fCharge;                     // charge in units of |e|
  Double_t         fLifetime;                   // proper lifetime in nanoseconds
  Double_t         fWidth;                      // total width in GeV
  Int_t            fParity;
  Double_t         fSpin;
  Double_t         fIsospin;                    // isospin
  Double_t         fI3;                         // i3
  Int_t            fStrangeness;                // flavours are defined if i3 != -1
  Int_t            fCharm;                      // 1 or -1 for C-particles,
                                                // 0 for others
  Int_t            fBeauty;                     //
  Int_t            fTop;                        //
  Int_t            fY;                          // X,Y: quantum numbers for the 4-th generation
  Int_t            fX;                          //
  Int_t            fStable;                     // 1 if stable, 0 otherwise
					
  TObjArray*       fDecayList;                  // array of decay channels
				
  TString          fType;                       // particle type  - what is it?

public:
				// ****** constructors  and destructor
  TParticlePDG();
  TParticlePDG(int pdg_code);
  TParticlePDG(const char* name, const char* title, Double_t mass,
	       Bool_t stable, Double_t decay_width, Double_t charge,
	       const Text_t* type, Int_t MCnumber);

  virtual ~TParticlePDG();
				// ****** access methods

  Int_t           PdgCode    () { return fPdgCode; }
  Double_t        Mass       () { return fMass; }
  Double_t        Charge     () { return fCharge; }
  Double_t        Lifetime   () { return fLifetime; }
  Double_t        Width      () { return fWidth; }
  Int_t           Parity     () { return fParity; }
  Double_t        Spin       () { return fSpin; }
  Double_t        Isospin    () { return fIsospin; }
  Double_t        I3         () { return fI3; }
  Int_t           Strangeness() { return fStrangeness; }
  Int_t           Charm      () { return fCharm; }
  Int_t           Beauty     () { return fBeauty; }
  Int_t           Top        () { return fTop; }
  Int_t           X          () { return fX; }
  Int_t           Y          () { return fY; }
  Int_t           Stable     () { return fStable; }

  TObjArray*      DecayList  () { return fDecayList; }

  virtual void    Print(Option_t* opt);

  ClassDef(TParticlePDG,1)
};

#endif
