//*CMZ :  2.20/00 26/11/98  11.07.21  by  Rene Brun
//*CMZ :  2.00/12 14/09/98  20.18.09  by  Rene Brun
//*CMZ :  1.03/09 08/12/97  13.46.10  by  Fons Rademakers
//*-- Author :    Rene Brun   06/04/96

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
// TNtuple                                                              //
//                                                                      //
// A simple tree restricted to a list of float variables only.          //
//                                                                      //
// Each variable goes to a separate branch.                             //
//                                                                      //
//  A Ntuple is created via                                             //
//     TNtuple(name,title,varlist,bufsize)                              //
//  It is filled via:                                                   //
//     TNtuple::Fill(*x)  or                                            //
//     TNtuple::Fill(v1,v2,v3.....)                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TNtuple.h"
#include "TTree.h"
#include "TBranch.h"
#include "TLeaf.h"
#include "TBrowser.h"

ClassImp(TNtuple)

//______________________________________________________________________________
TNtuple::TNtuple(): TTree()
{
//*-*-*-*-*-*Default constructor for Ntuple*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ==============================

   fNvar = 0;
   fArgs = 0;
}

//______________________________________________________________________________
TNtuple::TNtuple(const Text_t *name, const Text_t *title, const Text_t *varlist, Int_t bufsize)
       :TTree(name,title)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create an Ntuple*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ================
//       The parameter varlist describes the list of the ntuple variables
//       separated by a colon:
//         example:  "x:y:z:energy"
//       For each variable in the list a separate branch is created.
//
//       Use TTree to create branches with variables of different data types.
//*-*

   Int_t i;
   fNvar = 0;
   fArgs = 0;

//   Count number of variables (separated by :)
   Int_t nch = strlen(varlist);
   if (nch == 0) return;
   char *vars = new char[nch+1];
   strcpy(vars,varlist);
   Int_t *pvars = new Int_t[1000];
   fNvar = 1;
   pvars[0] = 0;
   for (i=1;i<nch;i++) {
      if (vars[i] == ':') {
         pvars[fNvar] = i+1;
         vars[i] = 0;
         fNvar++;
      }
   }
   fArgs = new Float_t[fNvar];

//  Create one branch for each variable
   for (i=0;i<fNvar;i++) {
      Int_t pv = pvars[i];
      TTree::Branch(&vars[pv],&fArgs[i],&vars[pv],bufsize);
  }

   delete [] vars;
   delete [] pvars;
}

//______________________________________________________________________________
TNtuple::~TNtuple()
{
//*-*-*-*-*-*Default destructor for an Ntuple*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ================================

   delete [] fArgs;
   fArgs = 0;
}


//______________________________________________________________________________
void TNtuple::Browse(TBrowser *b)
{
    fLeaves.Browse( b );
}


//______________________________________________________________________________
Int_t TNtuple::Fill()
{
//*-*-*-*-*-*-*-*-*Fill a Ntuple with current values in fArgs*-*-*-*-*-*-*
//*-*              ==========================================
// Note that this function is protected.
// Currently called only by TChain::Merge

  return TTree::Fill();
}

//______________________________________________________________________________
Int_t TNtuple::Fill(Float_t *x)
{
//*-*-*-*-*-*-*-*-*Fill a Ntuple with an array of floats*-*-*-*-*-*-*-*-*-*
//*-*              =====================================

//*-*- Store array x into buffer
  for (Int_t i=0;i<fNvar;i++)  {
     fArgs[i] = x[i];
  }

  return TTree::Fill();
}


//______________________________________________________________________________
Int_t TNtuple::Fill(Float_t x0,Float_t x1,Float_t x2,Float_t x3,Float_t x4
              ,Float_t x5,Float_t x6,Float_t x7,Float_t x8,Float_t x9
              ,Float_t x10,Float_t x11,Float_t x12,Float_t x13,Float_t x14)
{
//*-*-*-*-*-*-*-*-*Fill a Ntuple: Each Ntuple item is an argument*-*-*-*-*-*-*
//*-*              ==============================================

   if (fNvar >  0) fArgs[0]  = x0;
   if (fNvar >  1) fArgs[1]  = x1;
   if (fNvar >  2) fArgs[2]  = x2;
   if (fNvar >  3) fArgs[3]  = x3;
   if (fNvar >  4) fArgs[4]  = x4;
   if (fNvar >  5) fArgs[5]  = x5;
   if (fNvar >  6) fArgs[6]  = x6;
   if (fNvar >  7) fArgs[7]  = x7;
   if (fNvar >  8) fArgs[8]  = x8;
   if (fNvar >  9) fArgs[9]  = x9;
   if (fNvar > 10) fArgs[10] = x10;
   if (fNvar > 11) fArgs[11] = x11;
   if (fNvar > 12) fArgs[12] = x12;
   if (fNvar > 13) fArgs[13] = x13;
   if (fNvar > 14) fArgs[14] = x14;

   return TTree::Fill();
}

//_______________________________________________________________________
void TNtuple::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   if (b.IsReading()) {
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TTree::Streamer(b);
      b >> fNvar;
      if (fNvar <= 0) return;
      fArgs = new Float_t[fNvar];
      for (Int_t i=0;i<fNvar;i++) {
         TBranch *branch = (TBranch*)fBranches.UncheckedAt(i);
         if (branch) branch->SetAddress(&fArgs[i]);
      }
   } else {
      b.WriteVersion(TNtuple::IsA());
      TTree::Streamer(b);
      b << fNvar;
   }
}
