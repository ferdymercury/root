//*CMZ :  2.23/03 16/09/99  12.46.23  by  Rene Brun
//*CMZ :  2.23/02 02/09/99  19.38.51  by  Rene Brun
//*CMZ :  2.23/01 31/08/99  15.24.04  by  Rene Brun
//*-- Author :    Rene Brun   30/08/99
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
#include "TVirtualHistPainter.h"

TClass  *TVirtualHistPainter::fgPainter = 0;

ClassImp(TVirtualHistPainter)

//______________________________________________________________________________
TVirtualHistPainter::TVirtualHistPainter()
{
//*-*-*-*-*-*-*-*-*-*-*Histogram painter default constructor*-*-*-*-*-*-*-*-*
//*-*                  ====================================
}

//______________________________________________________________________________
TVirtualHistPainter::~TVirtualHistPainter()
{
//*-*-*-*-*-*-*-*-*-*-*Histogram painter default destructor*-*-*-*-*-*-*-*-*
//*-*                  ====================================
}


//______________________________________________________________________________
TVirtualHistPainter *TVirtualHistPainter::HistPainter(TH1 *obj)
{
   // Static function returning a pointer to the current histogram painter.
   // The painter will paint the specified obj. If the histogram painter
   // does not exist a default painter is created.

   // if no painter set yet, set THistPainter by default
   if (!fgPainter) {
      if (gROOT->LoadClass("THistPainter","HistPainter")) return 0;
      TVirtualHistPainter::SetPainter("THistPainter");
      if (!fgPainter) return 0;
   }
   //create an instance of the histogram painter
   TVirtualHistPainter *p = (TVirtualHistPainter*)fgPainter->New();
   if (p) p->SetHistogram(obj);
   return p;
}

//______________________________________________________________________________
void TVirtualHistPainter::SetPainter(const char *painter)
{
   // Static function to set an alternative histogram painter.

   fgPainter = gROOT->GetClass(painter);
