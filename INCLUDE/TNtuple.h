//*CMZ :  2.23/12 31/01/2000  10.57.53  by  Rene Brun
//*CMZ :  2.00/12 06/09/98  16.26.06  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  12.19.37  by  Fons Rademakers
//*-- Author :    Rene Brun   06/04/96

#ifndef ROOT_TNtuple
#define ROOT_TNtuple

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TNtuple                                                              //
//                                                                      //
// A simple tree with only one branch of floats.                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TTree
#include "TTree.h"
#endif

class TBrowser;

class TNtuple : public TTree {

protected:
   Int_t       fNvar;            //Number of columns
   Float_t     *fArgs;           //[fNvar] Array of variables

   virtual Int_t  Fill();

public:
   TNtuple();
   TNtuple(const char *name,const char *title, const char *varlist, Int_t bufsize=32000);
   virtual ~TNtuple();

   virtual void    Browse(TBrowser *b);
   virtual Int_t   Fill(Float_t *x);
   virtual Int_t   Fill(Float_t x0, Float_t x1, Float_t x2=0, Float_t x3=0,
                        Float_t x4=0, Float_t x5=0, Float_t x6=0, Float_t x7=0,
                        Float_t x8=0, Float_t x9=0, Float_t x10=0,
                        Float_t x11=0, Float_t x12=0, Float_t x13=0,
                        Float_t x14=0);
   virtual Int_t   GetNvar() const { return fNvar; }
         Float_t  *GetArgs() const { return fArgs; }

   ClassDef(TNtuple,1)  //A simple tree with only one branch of floats.
};

#endif
