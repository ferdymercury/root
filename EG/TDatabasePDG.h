//*CMZ :  2.22/10 15/07/99  09.44.45  by  Rene Brun
//*CMZ :  2.22/06 18/06/99  09.04.17  by  Rene Brun
//*CMZ :  2.22/01 16/04/99  15.45.38  by  Rene Brun
//*CMZ :  2.21/06 12/02/99  13.25.55  by  Pasha Murat
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
  static TDatabasePDG*   fgInstance;

  THashList*     fParticleList;

  class  Cleaner {
  public:
    Cleaner();
    ~Cleaner();
  };
  friend class Cleaner;

public:
				// ****** constructors and destructor

  TDatabasePDG();

  virtual ~TDatabasePDG();
				
  void     Init(); // function which does the real job of initializing the database

  static TDatabasePDG *Instance() {
    static Cleaner cleaner;
    if(!fgInstance) fgInstance = new TDatabasePDG();
    return fgInstance;
  }

  void  AddParticle(const Text_t *name, const Text_t *title,
		    Double_t Mass, Bool_t Stable,
		    Double_t DecayWidth, Double_t Charge, Text_t *Type,
		    Int_t pdgCode);

  Int_t ConvertIsajetToPdg(Int_t isaNumber);

  TParticlePDG *GetParticle(Int_t pdgCode);
  TParticlePDG *GetParticle(const Text_t *name);

  const THashList *ParticleList() const { return fParticleList; }

  virtual void  Print(Option_t *opt);

  ClassDef(TDatabasePDG,1)  // PDG particle database
};

#endif
