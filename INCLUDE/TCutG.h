//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/03 09/09/99  15.57.43  by  Rene Brun
//*CMZ :  2.00/13 21/10/98  13.06.55  by  Rene Brun
//*CMZ :  2.00/08 28/05/98  10.27.42  by  Rene Brun
//*CMZ :  1.01/03 18/05/97  23.28.12  by  Rene Brun
//*-- Author :    Rene Brun   16/05/97

#ifndef ROOT_TCutG
#define ROOT_TCutG

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TCutG                                                                //
//                                                                      //
// A Graphical cut.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGraph
#include "TGraph.h"
#endif

class TCutG : public TGraph {

protected:
   TString      fVarX;         //X variable
   TString      fVarY;         //Y variable
   TObject     *fObjectX;      //pointer to an object corresponding to X
   TObject     *fObjectY;      //pointer to an object corresponding to Y

public:
   TCutG();
   TCutG(const char *name, Int_t n, Float_t *x=0, Float_t *y=0);
   virtual ~TCutG();
   TObject       *GetObjectX() {return fObjectX;}
   TObject       *GetObjectY() {return fObjectY;}
   const char    *GetVarX() const {return fVarX.Data();}
   const char    *GetVarY() const {return fVarY.Data();}
   virtual Int_t  IsInside(Float_t x, Float_t y);
   virtual void   SavePrimitive(ofstream &out, Option_t *option);
   virtual void   SetObjectX(TObject *obj) {fObjectX = obj;}
   virtual void   SetObjectY(TObject *obj) {fObjectY = obj;}
   virtual void   SetVarX(const char *varx); // *MENU*
   virtual void   SetVarY(const char *vary); // *MENU*

   ClassDef(TCutG,1)  // A Graphical cut.
};

#endif
