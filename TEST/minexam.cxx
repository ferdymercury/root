//*CMZ :  2.21/08 18/03/99  10.26.14  by  Rene Brun
//*CMZ :  2.21/04 05/02/99  12.03.34  by  Rene Brun
//*CMZ :  2.21/02 15/01/99  12.08.48  by  Rene Brun
//*CMZ :  2.21/01 12/01/99  09.50.24  by  Rene Brun
//*CMZ :  2.00/06 25/04/98  09.09.03  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  16.50.45  by  Rene Brun
//*-- Author :    Rene Brun   22/08/95

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-*The Minuit standard test program-*-*-*-*-*-*-*-*-*
//*-*                    ========================                         *
//*-*                                                                     *
//*-*    This program is the translation to C++ of the minexam program    *
//*-*    distributed with the Minuit/Fortran source file.                 *
//*-*         original author Fred James                                  *
//*-*                                                                     *
//*-*       Fit randomly-generated leptonic K0 decays to the              *
//*-*       time distribution expected for interfering K1 and K2,         *
//*-*       with free parameters Re(X), Im(X), DeltaM, and GammaS.        *
//*-*                                                                     *
//*-*   This program can be run in batch mode with the makefile           *
//*-*   or executed interactively with the command:                       *
//*-*         Root > .x minexam.cxx                                       *
//*-*                                                                     *
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

#ifndef __CINT__
#include "TROOT.h"
#include "TMinuit.h"
#include "TMath.h"
#include "TStopwatch.h"

#include <stdlib.h>
#include <stdio.h>
#endif

void fcnk0(Int_t &npar, Double_t *gin, Double_t &f, Double_t *x, Int_t iflag);
Int_t minexam();

//______________________________________________________________________________
int main()
{
   TROOT mintest("TestMinuit","Test of Minuit");
   return minexam();
}

Int_t minexam()
{
   TStopwatch timer;

   TMinuit *gMinuit = new TMinuit(5);  //initialize TMinuit with a maximum of 5 params
   printf("Starting timer\n");
   timer.Start();
   gMinuit->mninit(5,6,7);
   gMinuit->SetFCN(fcnk0);

   gMinuit->DefineParameter(0, "Re(X)",    0,     0.1, 0,0);
   gMinuit->DefineParameter(1, "Im(X)",    0,     0.1, 0,0);
   gMinuit->DefineParameter(2, "Delta M",  0.535, 0.1, 0,0);
   gMinuit->DefineParameter(3, "T Kshort", 0.892, 0  , 0,0);
   gMinuit->DefineParameter(4, "T Klong",  518.3, 0  , 0,0);

//*-*-       Request FCN to read in (or generate random) data (IFLAG=1)
   gMinuit->Command("CALL FCN 1");
   gMinuit->FixParameter(2);
   gMinuit->Command("SET PRINT 0");
   gMinuit->Migrad();
   gMinuit->Command("MINOS");
   gMinuit->Release(2);
   gMinuit->Migrad();
   gMinuit->Command("MINOS");
   gMinuit->Command("CALL FCN 3");

   printf("Time at the end of job = %f seconds\n",timer.CpuTime());
   return 0;
}

//______________________________________________________________________________
void fcnk0(Int_t &, Double_t *, Double_t &f, Double_t *x, Int_t iflag)
{
   static Double_t thplu[50],thmin[50],t[50];

   static Double_t evtp[30] = {
              11.,  9., 13., 13., 17.,  9.,  1.,  7.,  8.,  9.,
               6.,  4.,  6.,  3.,  7.,  4.,  7.,  3.,  8.,  4.,
               6.,  5.,  7.,  2.,  7.,  1.,  4.,  1.,  4.,  5.};
   static Double_t evtm[30] = {
               0.,  0.,  0.,  0.,  0.,  0.,  0.,  0.,  1.,  1.,
               0.,  2.,  1.,  4.,  4.,  2.,  4.,  2.,  2.,  0.,
               2.,  3.,  7.,  2.,  3.,  6.,  2.,  4.,  1.,  5.};
   static Double_t sevtp, sevtm;

   const Int_t nbins = 30;
   const Int_t nevtot = 250;

   Int_t i, nevplu, nevmin;

   Double_t xre, xim, dm, gams, gaml,gamls,xr1,xr2,em,ep;
   Double_t chisq, ti, thp, thm, evp, evm, chi1, chi2;
   Double_t sthplu, sthmin, ehalf, th, sterm;

   xre   = x[0];
   xim   = x[1];
   dm    = x[2];
   gams  = 1/x[3];
   gaml  = 1/x[4];
   gamls = 0.5*(gaml+gams);
      //  generate random data
   if (iflag == 1) {
      sthplu = sthmin = 0;
      for (i=0;i<nbins; i++) {
         t[i]     = 0.1*(i+1);
         ti       = t[i];
         ehalf    = TMath::Exp(-ti*gamls);
         xr1      = 1-xre;
         xr2      = 1+xre;
         th       = (xr1*xr1 + xim*xim)*TMath::Exp(-ti*gaml);
         th      += (xr2*xr2 + xim*xim)*TMath::Exp(-ti*gams);
         th      -= 4*ehalf*xim*TMath::Sin(dm*ti);
         sterm    = 2*ehalf*(1-xre*xre-xim*xim)*TMath::Cos(dm*ti);
         thplu[i] = th + sterm;
         thmin[i] = th - sterm;
         sthplu  += thplu[i];
         sthmin  += thmin[i];
      }
      nevplu = Int_t(nevtot*(sthplu/(sthplu+sthmin)));
      nevmin = Int_t(nevtot*(sthmin/(sthplu+sthmin)));
      printf("  LEPTONIC K ZERO DECAYS\n");
      printf(" PLUS, MINUS, TOTAL=%5d %5d %5d\n",nevplu,nevmin,nevtot);
      printf("0      TIME       THEOR+      EXPTL+      THEOR-      EXPTL-\n");
      sevtp = sevtm = 0;
      for (i=0;i<nbins; i++) {
         thplu[i] = thplu[i]*nevplu/ sthplu;
         thmin[i] = thmin[i]*nevmin/ sthmin;
         sevtp   += evtp[i];
         sevtm   += evtm[i];
         printf("%12.4f%12.4f%12.4f%12.4f%12.4f\n",t[i],thplu[i],evtp[i],thmin[i],evtm[i]);
      }
      printf(" DATA EVTS PLUS, MINUS= %10.2f%10.2f\n", sevtp,sevtm);
   }
//                      calculate chisquared
   chisq = sthplu = sthmin = 0;
   for (i=0;i<nbins; i++) {
      ti    = t[i];
      ehalf = TMath::Exp(-ti*gamls);
      xr1   = 1-xre;
      xr2   = 1+xre;
      th    = (xr1*xr1 + xim*xim)*TMath::Exp(-ti*gaml);
      th   += (xr2*xr2 + xim*xim)*TMath::Exp(-ti*gams);
      th   -= 4*ehalf*xim*TMath::Sin(dm*ti);
      sterm = 2*ehalf*(1-xre*xre-xim*xim)*TMath::Cos(dm*ti);
      thplu[i] = th + sterm;
      thmin[i] = th - sterm;
      sthplu  += thplu[i];
      sthmin  += thmin[i];
  }
   thp = thm = evp = evm = 0;
   if (iflag != 4) {
      printf("          POSITIVE LEPTONS                    ,NEGATIVE LEPTONS\n");
      printf("      TIME    THEOR    EXPTL    chisq         TIME    THEOR    EXPTL    chisq\n");
   }
   for (i=0;i<nbins; i++) {
      thplu[i] = thplu[i]*sevtp / sthplu;
      thmin[i] = thmin[i]*sevtm / sthmin;
      thp += thplu[i];
      thm += thmin[i];
      evp += evtp[i];
      evm += evtm[i];
         //  Sum over bins until at least four events found
      if (evp > 3)  {
         ep     = evp-thp;
         chi1   = (ep*ep)/evp;
         chisq += chi1;
         if (iflag != 4) printf(" %9.3f%9.3f%9.3f%9.3f\n",t[i],thp,evp,chi1);
         thp = evp = 0;
      }
      if (evm > 3) {
         em     = evm-thm;
         chi2   = (em*em)/evm;
         chisq += chi2;
         if (iflag != 4) {
            printf("                                          %9.3f%9.3f%9.3f%9.3f\n"
                             ,t[i],thm,evm,chi2);
         }
         thm = evm = 0;
      }
  }
  f = chisq;
}
