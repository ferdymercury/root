//*CMZ :  2.21/08 15/03/99  17.38.32  by  Rene Brun
//*-- Author :    Rene Brun   15/03/99

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

#include <fstream.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "TPaveStats.h"
#include "TStyle.h"

ClassImp(TPaveStats)

//______________________________________________________________________________
//  A PaveStats is a PaveText to draw histogram statistics
// The type of information printed in the histogram statistics box
//  can be selected via gStyle->SetOptStat(mode).
//  or by editing an existing TPaveStats object via TPaveStats::SetOptStat(mode).
//  The parameter mode can be = ourmen  (default = 001111)
//    n = 1;  name of histogram is printed
//    e = 1;  number of entries printed
//    m = 1;  mean value printed
//    r = 1;  rms printed
//    u = 1;  number of underflows printed
//    o = 1;  number of overflows printed
//  Example: gStyle->SetOptStat(11);
//           print only name of histogram and number of entries.
//
// The type of information about fit parameters printed in the histogram
// statistics box can be selected via the parameter mode.
//  The parameter mode can be = pcev  (default = 0111)
//    v = 1;  print name/values of parameters
//    e = 1;  print errors (if e=1, v must be 1)
//    c = 1;  print Chisquare/Number of degress of freedom
//    p = 1;  print Probability
//  Example: gStyle->SetOptFit(1011);
//        or this->SetOptFit(1011);
//           print fit probability, parameter names/values and errors.
//

//______________________________________________________________________________
TPaveStats::TPaveStats(): TPaveText()
{
//*-*-*-*-*-*-*-*-*-*-*pavetext default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =============================

}

//______________________________________________________________________________
TPaveStats::TPaveStats(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2, Option_t *option)
           :TPaveText(x1,y1,x2,y2,option)
{
//*-*-*-*-*-*-*-*-*-*-*pavetext normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
//

   fOptFit  = gStyle->GetOptFit();
   fOptStat = gStyle->GetOptStat();
}

//______________________________________________________________________________
TPaveStats::~TPaveStats()
{
//*-*-*-*-*-*-*-*-*-*-*pavetext default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
}

//______________________________________________________________________________
void TPaveStats::SaveStyle()
{
//  Save This TPaveStats options in current style
//
   gStyle->SetOptFit(fOptFit);
   gStyle->SetOptStat(fOptStat);
}

