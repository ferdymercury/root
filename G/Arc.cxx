//*CMZ :  2.20/05 15/12/98  09.17.19  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  16.43.29  by  Fons Rademakers
//*-- Author :    Rene Brun   16/10/95

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

#include <fstream.h>

#include "TROOT.h"
#include "TArc.h"
#include "TVirtualPad.h"

ClassImp(TArc)

//______________________________________________________________________________
//
//  An arc is specified with the position of its centre, its radius
//  a minimum and maximum angle.
//  The attributes of the outline line are given via TAttLine
//  The attributes of the fill area are given via TAttFill
//

//______________________________________________________________________________
TArc::TArc(): TEllipse()
{
//*-*-*-*-*-*-*-*-*-*-*Arc  default constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

}
//______________________________________________________________________________
TArc::TArc(Float_t x1, Float_t y1,Float_t r1,Float_t phimin,Float_t phimax)
      :TEllipse(x1,y1,r1,r1,phimin,phimax,0)
{
//*-*-*-*-*-*-*-*-*-*-*Arc  normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =======================
//  x1,y1  : coordinates of centre of arc
//  r1     : arc radius
//  phimin : min and max angle in degrees (default is 0-->360)
//  phimax :
//
}

//______________________________________________________________________________
TArc::TArc(const TArc &arc)
{
   ((TArc&)arc).Copy(*this);
}

//______________________________________________________________________________
TArc::~TArc()
{
//*-*-*-*-*-*-*-*-*-*-*Arc  default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =======================

}

//______________________________________________________________________________
void TArc::Copy(TObject &arc)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this arc to arc*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ====================
   TEllipse::Copy(arc);
}

//______________________________________________________________________________
void TArc::DrawArc(Float_t x1, Float_t y1,Float_t r1,Float_t phimin,Float_t phimax)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this arc with new coordinates*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==================================
   TArc *newarc = new TArc(x1, y1, r1, phimin, phimax);
   TEllipse::Copy(*newarc);
   newarc->AppendPad();
}

//______________________________________________________________________________
void TArc::SavePrimitive(ofstream &out, Option_t *)
{
   // Save primitive as a C++ statement(s) on output stream out

   out<<"   "<<endl;
   if (gROOT->ClassSaved(TArc::Class())) {
       out<<"   ";
   } else {
       out<<"   TArc *";
   }
   out<<"arc = new TArc("<<fX1<<","<<fY1<<","<<fR1
      <<","<<fPhimin<<","<<fPhimax<<");"<<endl;

   SaveFillAttributes(out,"arc",0,1001);
   SaveLineAttributes(out,"arc",1,1,1);

   out<<"   arc->Draw();"<<endl;
}
