//*CMZ :  2.23/12 26/01/2000  10.26.36  by  Rene Brun
//*CMZ :  2.23/10 15/12/99  17.35.09  by  Rene Brun
//*CMZ :  2.23/00 07/08/99  17.38.51  by  Fons Rademakers
//*CMZ :  2.22/10 15/07/99  09.44.45  by  Rene Brun
//*CMZ :  2.22/06 18/06/99  09.04.17  by  Rene Brun
//*CMZ :  2.22/01 16/04/99  15.45.38  by  Rene Brun
//*-- Author :    Pasha Murat   12/02/99
//------------------------------------------------------------------------------
//  Jan 19 1999 P.Murat: this is the very  first draft, alot of functionality
//                       is still missing
//------------------------------------------------------------------------------
#ifndef ROOT_TDatabasePDG
#define ROOT_TDatabasePDG

#ifndef ROOT_TParticlePDG
#include "TParticlePDG.h"
#endif
#ifndef ROOT_THashList
#include "THashList.h"
#endif



class TDatabasePDG: public TNamed {

protected:
   THashList   *fParticleList;        // list of PDG particles

   static TDatabasePDG *fgInstance;   // protect against multiple instances

public:
   TDatabasePDG();
   virtual ~TDatabasePDG();
   virtual void   AddParticle(const char *name, const char *title,
                              Double_t Mass, Bool_t Stable,
                              Double_t DecayWidth, Double_t Charge, const char *Type,
                              Int_t pdgCode);
				
   virtual Int_t  ConvertIsajetToPdg(Int_t isaNumber);

   TParticlePDG  *GetParticle(Int_t pdgCode);
   TParticlePDG  *GetParticle(const char *name);
   virtual void   Init(); // function which does the real job of initializing the database
   const THashList *ParticleList() const { return fParticleList; }

   virtual void   Print(Option_t *opt = "");
   virtual void   ReadPDGTable(const char *filename);

   static TDatabasePDG *Instance();

  ClassDef(TDatabasePDG,1)  // PDG particle database
};

#endif
