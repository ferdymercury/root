//*CMZ :  2.24/03 15/04/2000  18.59.43  by  Rene Brun
//*CMZ :  2.24/01 08/03/2000  14.43.39  by  Rene Brun
//*CMZ :  2.23/04 13/10/99  17.56.46  by  Rene Brun
//*CMZ :  2.23/03 10/10/99  11.03.31  by  Rene Brun
//*CMZ :  2.23/02 04/09/99  12.16.47  by  Rene Brun
//*CMZ :  2.23/01 31/08/99  16.00.09  by  Rene Brun
//*-- Author :    Rene Brun   31/08/99
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

#include "TROOT.h"
#include "TVirtualFitter.h"

TVirtualFitter *TVirtualFitter::fgFitter    = 0;
Int_t           TVirtualFitter::fgMaxpar    = 0;
Int_t           TVirtualFitter::fgMaxiter   = 5000;
Double_t        TVirtualFitter::fgPrecision = 1e-6;

ClassImp(TVirtualFitter)

//______________________________________________________________________________
TVirtualFitter::TVirtualFitter()
{
//*-*-*-*-*-*-*-*-*-*-*default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===================
}

//______________________________________________________________________________
TVirtualFitter::~TVirtualFitter()
{
//*-*-*-*-*-*-*-*-*-*-*default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==================

   fgFitter    = 0;
   fgMaxpar    = 0;
}


//______________________________________________________________________________
TVirtualFitter *TVirtualFitter::Fitter(TObject *obj, Int_t maxpar)
{
   // Static function returning a pointer to the current fitter.
   // If the fitter does not exist, the default TFitter is created

   if (!fgFitter) {
      if (gROOT->LoadClass("TFitter","Minuit")) return 0;
      gROOT->ProcessLineFast(Form("new TFitter(%d);", maxpar));
      fgMaxpar = maxpar;
   }
   if (fgFitter && maxpar > fgMaxpar) {
      delete fgFitter;
      gROOT->ProcessLineFast(Form("new TFitter(%d);", maxpar));
      fgMaxpar = maxpar;
   }

   if (fgFitter)  fgFitter->SetObjectFit(obj);
   return fgFitter;
}

//______________________________________________________________________________
void TVirtualFitter::SetFitter(TVirtualFitter *fitter, Int_t maxpar)
{
   // Static function to set an alternative fitter

   fgFitter    = fitter;
   fgMaxpar    = maxpar;
}

//______________________________________________________________________________
Int_t TVirtualFitter::GetMaxIterations()
{
   // Return the maximum number of iterations

   return fgMaxiter;
}

//______________________________________________________________________________
Double_t TVirtualFitter::GetPrecision()
{
   // Return the fit relative precision

   return fgPrecision;
}

//______________________________________________________________________________
void TVirtualFitter::SetMaxIterations(Int_t niter)
{
   // Set the maximum number of iterations

   fgMaxiter  = niter;
}

//______________________________________________________________________________
void TVirtualFitter::SetPrecision(Double_t prec)
{
   // Set the fit relative precision

   fgPrecision = prec;
}
