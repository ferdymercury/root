//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/01 27/08/99  23.00.07  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  12.26.30  by  Fons Rademakers
//*-- Author :    Rene Brun   05/02/97

#ifndef ROOT_TSelector
#define ROOT_TSelector

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
   TSelector(const char *name, const char *title="");
   virtual          ~TSelector();
   virtual void     BeginFile();
   virtual void     EndFile();
   virtual void     Execute(TTree *tree, Int_t event);
   void             Execute(const char *method,  const char *params);
   void             Execute(TMethod *method, TObjArray *params);
   virtual void     Finish(Option_t *option="");
   virtual void     Init(TTree *tree, Option_t *option="");
   virtual void     Start(Option_t *option="");

   ClassDef(TSelector,0)  //A utility class for Trees selections.
};

inline void TSelector::Execute(const char *method, const char *params)
   { TObject::Execute(method, params); }
inline void TSelector::Execute(TMethod *method, TObjArray *params)
   { TObject::Execute(method, params); }

#endif

