//*CMZ :  2.23/04 13/10/99  17.56.46  by  Rene Brun
//*CMZ :  2.23/03 10/10/99  11.03.31  by  Rene Brun
//*CMZ :  2.23/02 04/09/99  12.16.47  by  Rene Brun
//*CMZ :  2.23/01 31/08/99  16.00.09  by  Rene Brun
//*-- Author :    Rene Brun   31/08/99
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

#include "TROOT.h"
#include "TVirtualFitter.h"

TVirtualFitter *TVirtualFitter::fgFitter = 0;
Int_t           TVirtualFitter::fgMaxpar = 0;

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

   fgFitter = fitter;
   fgMaxpar = maxpar;
}
