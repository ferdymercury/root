//*CMZ :  1.03/09 07/12/97  23.45.36  by  Fons Rademakers
//*-- Author :    Piotr Golonka   31/07/97

#ifndef ROOT_TToggleGroup
#define ROOT_TToggleGroup

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
// TToggleGroup                                                         //
//                                                                      //
// This class defines check-box facility for TToggle objects            //
// It is used in context menu "selectors" for picking up a value.       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TToggle
#include "TToggle.h"
#endif
#ifndef ROOT_TOrdCollection
#include "TOrdCollection.h"
#endif


class TToggleGroup : public TNamed {

private:
   TOrdCollection *fToggles;        // list of TToggle objects
   TToggle        *fSelected;       //  currently selected object

public:
   TToggleGroup();
   virtual ~TToggleGroup();
   virtual Int_t       GetTogglesCount() {return fToggles->GetSize();};
   virtual TToggle    *At(Int_t idx) {return (TToggle*)fToggles->At(idx);};

   virtual void        Remove(TToggle *t) {fToggles->Remove(t);};
   virtual void        Remove(Int_t pos) {fToggles->RemoveAt(pos);};

   virtual void        DeleteAll();
   virtual TToggle    *First() {return (TToggle*)fToggles->First();};
   virtual TToggle    *Last()  {return (TToggle*)fToggles->Last();};

   virtual Int_t       IndexOf(TToggle *t) {return fToggles->IndexOf(t);};

   virtual Int_t       Add(TToggle *t, Bool_t select=1);
   virtual Int_t       InsertAt(TToggle *t, Int_t pos,Bool_t select=1);
   virtual void        Select(Int_t idx);
   virtual void        Select(TToggle *t);

   ClassDef(TToggleGroup,0)  // Group of contex-menu toggle objects
};

#endif

