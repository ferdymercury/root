//*CMZ :  2.21/04 03/02/99  10.49.07  by  Rene Brun
//*CMZ :  2.00/08 05/06/98  14.34.43  by  Fons Rademakers
//*CMZ :  2.00/00 25/05/98  22.27.02  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  16.46.57  by  Fons Rademakers
//*-- Author :    Rene Brun   12/12/94

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

#include "TFile.h"
#include "TMath.h"
#include "TAttAxis.h"
#include "TStyle.h"
#include "TVirtualPad.h"

ClassImp(TAttAxis)

//______________________________________________________________________________
//
//  Manages histogram axis attributes
//

TAttAxis::TAttAxis()
{

   Reset();
}

//______________________________________________________________________________
TAttAxis::~TAttAxis()
{

}

//______________________________________________________________________________
void TAttAxis::Copy(TAttAxis &attaxis)
{
   attaxis.fNdivisions  = fNdivisions;
   attaxis.fAxisColor   = fAxisColor;
   attaxis.fLabelColor  = fLabelColor;
   attaxis.fLabelFont   = fLabelFont;
   attaxis.fLabelOffset = fLabelOffset;
   attaxis.fLabelSize   = fLabelSize;
   attaxis.fTickLength  = fTickLength;
   attaxis.fTitleOffset = fTitleOffset;
   attaxis.fTitleSize   = fTitleSize;
}

//______________________________________________________________________________
void TAttAxis::Reset(Option_t *option)
{
   if (gStyle) {
      fNdivisions  = gStyle->GetNdivisions(option);
      fAxisColor   = gStyle->GetAxisColor(option);
      fLabelColor  = gStyle->GetLabelColor(option);
      fLabelFont   = gStyle->GetLabelFont(option);
      fLabelOffset = gStyle->GetLabelOffset(option);
      fLabelSize   = gStyle->GetLabelSize(option);
      fTickLength  = gStyle->GetTickLength(option);
      fTitleOffset = gStyle->GetTitleOffset(option);
      fTitleSize   = gStyle->GetTitleSize(option);
   } else {
      fNdivisions  = 510;
      fAxisColor   = 1;
      fLabelColor  = 1;
      fLabelFont   = 62;
      fLabelOffset = 0.005;
      fLabelSize   = 0.04;
      fTickLength  = 0.03;
      fTitleOffset = 1;
      fTitleSize   = fLabelSize;
   }
}

//______________________________________________________________________________
void TAttAxis::SaveAttributes(ofstream &out, const Text_t *name, const Text_t *subname)
{
    // Save axis attributes as C++ statement(s) on output stream out

   if (fNdivisions != 510) {
      out<<"   "<<name<<subname<<"->SetNdivisions("<<fNdivisions<<");"<<endl;
   }
   if (fAxisColor != 1) {
      out<<"   "<<name<<subname<<"->SetAxisColor("<<fAxisColor<<");"<<endl;
   }
   if (fLabelColor != 1) {
      out<<"   "<<name<<subname<<"->SetLabelColor("<<fLabelColor<<");"<<endl;
   }
   if (fLabelFont != 62) {
      out<<"   "<<name<<subname<<"->SetLabelFont("<<fLabelFont<<");"<<endl;
   }
   if (TMath::Abs(fLabelOffset-0.005) > 0.0001) {
      out<<"   "<<name<<subname<<"->SetLabelOffset("<<fLabelOffset<<");"<<endl;
   }
   if (TMath::Abs(fLabelSize-0.04) > 0.001) {
      out<<"   "<<name<<subname<<"->SetLabelSize("<<fLabelSize<<");"<<endl;
   }
   if (TMath::Abs(fTitleSize-0.04) > 0.001) {
      out<<"   "<<name<<subname<<"->SetTitleSize("<<fTitleSize<<");"<<endl;
   }
   if (TMath::Abs(fTickLength-0.03) > 0.001) {
      out<<"   "<<name<<subname<<"->SetTickLength("<<fTickLength<<");"<<endl;
   }
   if (TMath::Abs(fTitleOffset-1) > 0.001) {
      out<<"   "<<name<<subname<<"->SetTitleOffset("<<fTitleOffset<<");"<<endl;
   }
}

//______________________________________________________________________________
void TAttAxis::SetAxisColor(Color_t color)
{
//   Set color of the line axis and tick marks

   fAxisColor = color;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::SetLabelColor(Color_t color)
{
//   Set color of labels and axis title

   fLabelColor = color;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::SetLabelFont(Style_t font)
{

   fLabelFont = font;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::SetLabelOffset(Float_t offset)
{
//   Set distance between the axis and the labels
//   The distance is expressed in per cent of the pad width

   fLabelOffset = offset;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::SetLabelSize(Float_t size)
{
//   Set size of axis labels
//   The size is expressed in per cent of the pad width

   fLabelSize = size;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::SetNdivisions(Int_t n)
{
//   Set the number of divisions for this axis

   fNdivisions = n;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::SetTickLength(Float_t length)
{
//   Set tick mark length
//   The length is expressed in per cent of the pad width

   fTickLength = length;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::SetTitleOffset(Float_t offset)
{
//   Set distance between the axis and the axis title
//   Offset is a correction factor with respect to the "standard" value.
//   offset = 1  uses the default position that is computed in function
//   of the label offset and size.
//   offset = 1.2 will add 20 per cent more to the default offset.

   fTitleOffset = offset;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::SetTitleSize(Float_t size)
{
//   Set size of axis title
//   The size is expressed in per cent of the pad width

   fTitleSize = size;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TAttAxis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttAxis.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      R__b >> fNdivisions;
      R__b >> fAxisColor;
      R__b >> fLabelColor;
      R__b >> fLabelFont;
      R__b >> fLabelOffset;
      R__b >> fLabelSize;
      R__b >> fTickLength;
      R__b >> fTitleOffset;
      // !gFile is the case of only TMapFile
      if (R__v > 1 && (!gFile || (gFile && gFile->GetVersion() > 900)))
         R__b >> fTitleSize;
      else
         fTitleSize = fLabelSize;
   } else {
      R__b.WriteVersion(TAttAxis::IsA());
      R__b << fNdivisions;
      R__b << fAxisColor;
      R__b << fLabelColor;
      R__b << fLabelFont;
      R__b << fLabelOffset;
      R__b << fLabelSize;
      R__b << fTickLength;
      R__b << fTitleOffset;
      R__b << fTitleSize;
   }
}
