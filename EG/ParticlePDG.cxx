//*CMZ :  2.21/06 15/02/99  10.12.43  by  Rene Brun
//*-- Author :    Pasha Murat   12/02/99

#include "TParticlePDG.h"

ClassImp(TParticlePDG)

//______________________________________________________________________________
TParticlePDG::TParticlePDG()
{
  fDecayList  = NULL;
}

//______________________________________________________________________________
TParticlePDG::TParticlePDG(Int_t )
{
  // empty for the time  being

  fDecayList  = NULL;
}

//______________________________________________________________________________
TParticlePDG::TParticlePDG(const char* name, const char* title, Double_t mass,
			   Bool_t stable, Double_t width, Double_t charge,
			   const Text_t* type, Int_t MCnumber)
             : TNamed(name,title)
{

    // empty for the time  being

    fMass       = mass;
    fStable     = stable;
    fWidth      = width;
    fCharge     = charge;
    fType       = type;
    fPdgCode    = MCnumber;
    fDecayList  = NULL;
}


//______________________________________________________________________________
TParticlePDG::~TParticlePDG()
{
}

//______________________________________________________________________________
void TParticlePDG::Print(Option_t *)
{
//
//  Print the entire information of this kind of particle
//

   Printf("");
   Printf("Particle: %-15s  ",
          this->GetName());
   if (!fStable) {
       Printf("Mass: %8f     DecayWidth: %8f  Charge : %8f",
              fMass, fWidth, fCharge);
   }
   else {
       Printf("Mass: %8f     DecayWidth: Stable  Charge : %8f",
              fMass, fCharge);
   }
   Printf("");
}

