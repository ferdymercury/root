//*CMZ :  2.21/02 18/01/99  16.14.21  by  Rene Brun
//*CMZ :  2.20/02 04/12/98  16.50.13  by  Rene Brun
//*CMZ :  2.20/01 30/11/98  10.22.36  by  Rene Brun
//*CMZ :  2.20/00 26/11/98  16.51.06  by  Rene Brun
//*CMZ :  2.00/00 25/05/98  21.46.53  by  Rene Brun
//*CMZ :  1.03/09 13/12/97  21.25.19  by  Rene Brun
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

#include <iostream.h>
#include "TAxis.h"
#include "TVirtualPad.h"
#include "TGXW.h"
#include "TStyle.h"
#include "TView.h"
#include "TError.h"

const Int_t kAxisRange = BIT(11);

ClassImp(TAxis)

//______________________________________________________________________________
//
// This class manages histogram axis. It is referenced by TH1 and TGraph.
// To make a graphical representation of an histogram axis, this class
// references the TGaxis class.
//
// TAxis supports axis with fixed or variable bin sizes.
// Labels may be associated to individual bins.
//
//    see examples of various axis representations drawn by class TGaxis.
//

//______________________________________________________________________________
TAxis::TAxis(): TNamed(), TAttAxis()
{
   fNbins   = 0;
   fXmin    = 0;
   fXmax    = 0;
   fFirst   = 0;
   fLast    = 0;
   fXlabels = 0;
}

//______________________________________________________________________________
TAxis::TAxis(Int_t nbins,Axis_t xlow,Axis_t xup): TNamed(), TAttAxis()
{
//*-*-*-*-*-*-*-*Axis constructor for axis with fix bin size*-*-*-*-*-*-*-*
//*-*            ===========================================

   Set(nbins,xlow,xup);
}

//______________________________________________________________________________
TAxis::TAxis(Int_t nbins,Axis_t *xbins): TNamed(), TAttAxis()
{
//*-*-*-*-*-*-*-*Axis constructor for variable bin size*-*-*-*-*-*-*-*-*-*-*
//*-*            ======================================

   Set(nbins,xbins);
}

//______________________________________________________________________________
TAxis::~TAxis()
{
   if (fXlabels) { delete [] fXlabels; fXlabels = 0; }
}

//______________________________________________________________________________
TAxis::TAxis(const TAxis &axis)
{
   ((TAxis&)axis).Copy(*this);
}

//______________________________________________________________________________
void TAxis::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*Copy axis structure to another axis-*-*-*-*-*-*-*-*-*-*-*
//*-*                ===================================

   TNamed::Copy(obj);
   TAttAxis::Copy(((TAxis&)obj));
   ((TAxis&)obj).fNbins  = fNbins;
   ((TAxis&)obj).fXmin   = fXmin;
   ((TAxis&)obj).fXmax   = fXmax;
   ((TAxis&)obj).fFirst  = fFirst;
   ((TAxis&)obj).fLast   = fLast;
   ((TAxis&)obj).fXlabels= 0;
   fXbins.Copy(((TAxis&)obj).fXbins);
}

//______________________________________________________________________________
Int_t TAxis::DistancetoPrimitive(Int_t, Int_t)
{
//*-*-*-*-*-*-*-*-*-*-*Compute distance from point px,py to an axis*-*-*-*-*-*
//*-*                  ============================================

   return 9999;
}

//______________________________________________________________________________
void TAxis::Draw(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*Draw an axis*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ============
//  The axis is drawn with the current axis positions, parameters and attributes
//

}

//______________________________________________________________________________
void TAxis::DrawAxis(Coord_t, Coord_t, Coord_t, Coord_t)
{
//*-*-*-*-*-*-*-*-*-*-*-*Draw an axis*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//  The axis is drawn with the specified parameters and the stored attributes
//

}

//______________________________________________________________________________
void TAxis::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function is called when an axis is clicked with the locator
//
//  The axis range is set between the position where the mouse is pressed
//  and the position where it is released.
//  If the mouse position is outside the current axis range when it is released
//  the axis is unzoomed with the corresponding proportions.
//  Note that the mouse does not need to be in the pad or even canvas
//  when it is released.

   gPad->SetCursor(kHand);

   TView *view = gPad->GetView();
   static Int_t axisNumber;
   static Float_t ratio1, ratio2;
   static Int_t px1old, py1old, px2old, py2old;
   Int_t bin1, bin2, first, last;
   Float_t temp, xmin,xmax;

   switch (event) {

   case kButton1Down:
      axisNumber = 0;
      if (!strcmp(GetName(),"xaxis")) axisNumber = 1;
      if (!strcmp(GetName(),"yaxis")) axisNumber = 2;
      if (!axisNumber) return;
      if (view) {
         view->GetDistancetoAxis(axisNumber, px, py, ratio1);
      } else {
         if (axisNumber == 1) {
            ratio1 = (gPad->AbsPixeltoX(px) - gPad->GetUxmin())/(gPad->GetUxmax() - gPad->GetUxmin());
            px1old = gPad->XtoAbsPixel(gPad->GetUxmin()+ratio1*(gPad->GetUxmax() - gPad->GetUxmin()));
            py1old = gPad->YtoAbsPixel(gPad->GetUymin());
            px2old = px1old;
            py2old = gPad->YtoAbsPixel(gPad->GetUymax());
         } else {
            ratio1 = (gPad->AbsPixeltoY(py) - gPad->GetUymin())/(gPad->GetUymax() - gPad->GetUymin());
            py1old = gPad->YtoAbsPixel(gPad->GetUymin()+ratio1*(gPad->GetUymax() - gPad->GetUymin()));
            px1old = gPad->XtoAbsPixel(gPad->GetUxmin());
            px2old = gPad->XtoAbsPixel(gPad->GetUxmax());
            py2old = py1old;
         }
         gGXW->DrawBox(px1old, py1old, px2old, py2old, TGXW::kHollow);
      }
      gGXW->SetLineColor(-1);
      // No break !!!

   case kButton1Motion:
      if (view) {
         view->GetDistancetoAxis(axisNumber, px, py, ratio2);
      } else {
         gGXW->DrawBox(px1old, py1old, px2old, py2old, TGXW::kHollow);
         if (axisNumber == 1) {
            ratio2 = (gPad->AbsPixeltoX(px) - gPad->GetUxmin())/(gPad->GetUxmax() - gPad->GetUxmin());
            px2old = gPad->XtoAbsPixel(gPad->GetUxmin()+ratio2*(gPad->GetUxmax() - gPad->GetUxmin()));
         } else {
            ratio2 = (gPad->AbsPixeltoY(py) - gPad->GetUymin())/(gPad->GetUymax() - gPad->GetUymin());
            py2old = gPad->YtoAbsPixel(gPad->GetUymin()+ratio2*(gPad->GetUymax() - gPad->GetUymin()));
         }
         gGXW->DrawBox(px1old, py1old, px2old, py2old, TGXW::kHollow);
      }
   break;

   case kButton1Up:
      if (view) {
         view->GetDistancetoAxis(axisNumber, px, py, ratio2);
         if (ratio1 > ratio2) {
            temp   = ratio1;
            ratio1 = ratio2;
            ratio2 = temp;
         }
         if (ratio2 - ratio1 > 0.05) {
            if (fFirst > 0) first = fFirst;
            else            first = 1;
            if (fLast > 0) last = fLast;
            else           last = fNbins;
            bin1 = first + Int_t((last-first+1)*ratio1);
            bin2 = first + Int_t((last-first+1)*ratio2);
            SetRange(bin1, bin2);
            gPad->Modified(kTRUE);
         }
      } else {
         if (axisNumber == 1) {
            ratio2 = (gPad->AbsPixeltoX(px) - gPad->GetUxmin())/(gPad->GetUxmax() - gPad->GetUxmin());
            xmin = gPad->GetUxmin() +ratio1*(gPad->GetUxmax() - gPad->GetUxmin());
            xmax = gPad->GetUxmin() +ratio2*(gPad->GetUxmax() - gPad->GetUxmin());
            if (gPad->GetLogx()) {
               xmin = gPad->PadtoX(xmin);
               xmax = gPad->PadtoX(xmax);
            }
         } else {
            ratio2 = (gPad->AbsPixeltoY(py) - gPad->GetUymin())/(gPad->GetUymax() - gPad->GetUymin());
            xmin = gPad->GetUymin() +ratio1*(gPad->GetUymax() - gPad->GetUymin());
            xmax = gPad->GetUymin() +ratio2*(gPad->GetUymax() - gPad->GetUymin());
            if (gPad->GetLogy()) {
               xmin = gPad->PadtoY(xmin);
               xmax = gPad->PadtoY(xmax);
            }
         }
         if (xmin > xmax) {
            temp   = xmin;
            xmin   = xmax;
            xmax   = temp;
            temp   = ratio1;
            ratio1 = ratio2;
            ratio2 = temp;
         }
         if (ratio2 - ratio1 > 0.05) {
            {
               char params[30];
               if (axisNumber == 1) sprintf(params,"%f,%f,\"X\"",xmin,xmax);
               else                 sprintf(params,"%f,%f,\"Y\"",xmin,xmax);
               TIter next(gPad->GetListOfPrimitives());
               TObject *obj;
               while ((obj = next())) {
                  if (obj->InheritsFrom("TH1")) {
                     obj->Execute("SetAxisRange",params);
                  }
               }
            }
            gPad->Modified(kTRUE);
         }
      }
      gGXW->SetLineColor(-1);
      break;
   }
}

//______________________________________________________________________________
Int_t TAxis::FindBin(Axis_t x)
{
//*-*-*-*-*-*-*-*-*Find bin number corresponding to abscissa x-*-*-*-*-*-*
//*-*              ===========================================
   Int_t bin;
   if (x < fXmin)               //*-* underflow
      bin = 0;
   else  if ( x >= fXmax)       //*-* overflow
      bin = fNbins+1;
   else {
      if (!fXbins.fN) {        //*-* fix bins
         bin = 1 + int (fNbins*(x-fXmin)/(fXmax-fXmin) );
      } else {                  //*-* variable bin sizes
         for (bin =1; x >= fXbins.fArray[bin]; bin++);
      }
   }
   return bin;
}

//______________________________________________________________________________
Int_t TAxis::GetFirst()
{
//             return first bin on the axis
//       - 0 if no range defined

   if (!TestBit(kAxisRange)) return 1;
   return fFirst;
}

//______________________________________________________________________________
Int_t TAxis::GetLast()
{
//             return last bin on the axis
//       - fNbins if no range defined

   if (!TestBit(kAxisRange)) return fNbins;
   return fLast;
}

//______________________________________________________________________________
void TAxis::ls(Option_t *)
{
}

//______________________________________________________________________________
void TAxis::Paint(Option_t *)
{
}

//______________________________________________________________________________
void TAxis::PaintAxis(Coord_t, Coord_t, Coord_t, Coord_t)
{
}

//______________________________________________________________________________
void TAxis::Print(Option_t *)
{
}

//______________________________________________________________________________
Axis_t TAxis::GetBinCenter(Int_t bin)
{
//*-*-*-*-*-*-*-*-*-*-*Return center of bin*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ====================
  Axis_t binwidth;
  if (!fXbins.fN || bin<1 || bin>fNbins) {
     binwidth = (fXmax - fXmin) / Axis_t(fNbins);
     return fXmin + (bin-1) * binwidth + 0.5*binwidth;
  } else {
     binwidth = fXbins.fArray[bin] - fXbins.fArray[bin-1];
     return fXbins.fArray[bin-1] + 0.5*binwidth;
  }
}

//______________________________________________________________________________
Axis_t TAxis::GetBinLowEdge(Int_t bin)
{
//*-*-*-*-*-*-*-*-*-*-*Return low edge of bin-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================

  if (fXbins.fN && bin > 0 && bin <=fNbins) return fXbins.fArray[bin-1];
  Axis_t binwidth = (fXmax - fXmin) / Axis_t(fNbins);
  return fXmin + (bin-1) * binwidth;
}

//______________________________________________________________________________
Axis_t TAxis::GetBinUpEdge(Int_t bin)
{
//*-*-*-*-*-*-*-*-*-*-*Return up edge of bin-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================

  Axis_t binwidth;
  if (!fXbins.fN || bin<1 || bin>fNbins) {
     binwidth = (fXmax - fXmin) / Axis_t(fNbins);
     return fXmin + bin*binwidth;
  } else {
     binwidth = fXbins.fArray[bin] - fXbins.fArray[bin-1];
     return fXbins.fArray[bin-1] + binwidth;
  }
}

//______________________________________________________________________________
Axis_t TAxis::GetBinWidth(Int_t bin)
{
//*-*-*-*-*-*-*-*-*-*-*Return bin width-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ================
  if (bin <1 ) bin = 1;
  if (bin >fNbins) bin = fNbins;
  if (!fXbins.fN)  return (fXmax - fXmin) / Axis_t(fNbins);
   return fXbins.fArray[bin] - fXbins.fArray[bin-1];
}


//______________________________________________________________________________
void TAxis::GetCenter(Axis_t *center)
{
//*-*-*-*-*-*-*-*-*Return an array with the center of all bins-*-*-*-*-*-*-*
//*-*              ===========================================
  Int_t bin;
  for (bin=1; bin<=fNbins; bin++) *(center + bin-1) = GetBinCenter(bin);
}

//______________________________________________________________________________
void TAxis::GetLowEdge(Axis_t *edge)
{
//*-*-*-*-*-*-*-*-*Return an array with the lod edge of all bins-*-*-*-*-*-*-*
//*-*              =============================================
  Int_t bin;
  for (bin=1; bin<=fNbins; bin++) *(edge + bin-1) = GetBinLowEdge(bin);
}
//--------------------------------------------------------------------
//                     LABELs methods
//--------------------------------------------------------------------
//______________________________________________________________________________
Text_t *TAxis::GetBinLabel(Int_t)
{
//*-*-*-*-*-*-*-*-*-*Return label associated to bin-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ==============================

   return  ("");
}

//______________________________________________________________________________
void TAxis::GetLabel(Text_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

}

//______________________________________________________________________________
void TAxis::Set(Int_t nbins, Axis_t xlow, Axis_t xup)
{
//*-*-*-*-*-*-*-*-*Initialize axis with fix bins*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =============================
   fNbins   = nbins;
   fXmin    = xlow;
   fXmax    = xup;
   fFirst   = 0;
   fLast    = 0;
   fXlabels = 0;
   fTitle   = "";
   char name[64];
   sprintf(name,"%s%s",GetName(),"x");
   TAttAxis::Reset(name);
}

//______________________________________________________________________________
void TAxis::Set(Int_t nbins, Axis_t *xbins)
{
//*-*-*-*-*-*-*-*-*Initialize axis with variable bins*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ==================================
   Int_t bin;
   fNbins  = nbins;
   fXbins.Set(fNbins+1);
   for (bin=0; bin<= fNbins; bin++)
      fXbins.fArray[bin] = xbins[bin];
   for (bin=1; bin<= fNbins; bin++)
      if (fXbins.fArray[bin] < fXbins.fArray[bin-1])
         Error("TAxis::Set", "bins must be in increasing order");
   fXmin      = fXbins.fArray[0];
   fXmax      = fXbins.fArray[fNbins];
   fFirst     = 0;
   fLast      = 0;
   fXlabels   = 0;
   fTitle     = "";
   char name[64];
   sprintf(name,"%s%s",GetName(),"x");
   TAttAxis::Reset(name);
}

//______________________________________________________________________________
void TAxis::SetLabel(const Text_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

}

//______________________________________________________________________________
void TAxis::SetBinLabel(Int_t, Text_t *)
{
//*-*-*-*-*-*-*-*-*Set label associated to bin-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ===========================

}

//______________________________________________________________________________
void TAxis::SetLimits(Axis_t xmin, Axis_t xmax)
{
//          Set the axis limits

   fXmin = xmin;
   fXmax = xmax;
}

//______________________________________________________________________________
void TAxis::SetRange(Int_t first, Int_t last)
{
//          Set the viewing range for the axis from bin first to last

   if (last == 0) last = fNbins;
   if (last < first) return;
   if (last > fNbins) last = fNbins;
   if (first < 1) first = 1;
   if (first == 1 && last == fNbins) {
      SetBit(kAxisRange,0);
      fFirst = 0;
      fLast  = 0;
   } else {
      SetBit(kAxisRange,1);
      fFirst = first;
      fLast  = last;
   }
}

//______________________________________________________________________________
void TAxis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAxis.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion();
      TNamed::Streamer(R__b);
      TAttAxis::Streamer(R__b);
      R__b >> fNbins;
      R__b >> fXmin;
      R__b >> fXmax;
      fXbins.Streamer(R__b);
      if (R__v > 2) {
         R__b >> fFirst;
         R__b >> fLast;
          // following lines required to repair for a bug in Root version 1.03
         if (fFirst < 0 || fFirst > fNbins) fFirst = 0;
         if (fLast  < 0 || fLast  > fNbins) fLast  = 0;
         if (fLast  < fFirst) { fFirst = 0; fLast = 0;}
         if (fFirst ==0 && fLast == 0) SetBit(kAxisRange,0);
      }
   } else {
      R__b.WriteVersion(TAxis::IsA());
      TNamed::Streamer(R__b);
      TAttAxis::Streamer(R__b);
      R__b << fNbins;
      R__b << fXmin;
      R__b << fXmax;
      fXbins.Streamer(R__b);
      R__b << fFirst;
      R__b << fLast;
   }
}
