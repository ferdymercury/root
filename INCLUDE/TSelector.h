//*CMZ :  1.03/09 10/12/97  12.26.30  by  Fons Rademakers
//*-- Author :    Rene Brun   05/02/97

#ifndef ROOT_TSelector
#define ROOT_TSelector

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
// TSelector                                                            //
//                                                                      //
// A utility class for Trees selections.                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TTree;

class TSelector : public TNamed {

protected:
   TTree      *fTree;         //Pointer to current TTree

public:
   TSelector();
   TSelector(const Text_t *name, const Text_t *title="");
   virtual          ~TSelector();
   virtual void     BeginFile();
   virtual void     EndFile();
   virtual void     Execute(TTree *tree, Int_t event);
   void             Execute(Text_t *method,  Text_t *params);
   void             Execute(TMethod *method, TObjArray *params);
   virtual void     Finish(Option_t *option="");
   virtual void     Init(TTree *tree, Option_t *option="");
   virtual void     Start(Option_t *option="");

   ClassDef(TSelector,0)  //A utility class for Trees selections.
};

inline void TSelector::Execute(Text_t *method, Text_t *params)
   { TObject::Execute(method, params); }
inline void TSelector::Execute(TMethod *method, TObjArray *params)
   { TObject::Execute(method, params); }

#endif

