//*CMZ :  2.20/05 15/12/98  09.17.20  by  Rene Brun
//*CMZ :  2.00/12 05/09/98  18.32.20  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.07.11  by  Fons Rademakers
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

#include <stdlib.h>
#include <fstream.h>
#include <iostream.h>

#include "TROOT.h"
#include "TEllipse.h"
#include "TVirtualPad.h"
#include "TMath.h"

ClassImp(TEllipse)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Ellipse class*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                          =============
//  Ellipse is a general ellipse that can be truncated and rotated.
//  An Ellipse is defined by its center (x1,y1) and two radius r1 and r2.
//  A minimum and maximum angle may be specified (phimin, phimax).
//  The Ellipse may be rotated with an angle theta.
//  The attributes of the outline line are given via TAttLine.
//  The attributes of the fill area are given via TAttFill.
//  The picture below illustrates different types of ellipses.
//Begin_Html
/*
<img src="gif/ellipse.gif">
*/
//End_Html
//

//______________________________________________________________________________
TEllipse::TEllipse(): TObject(), TAttLine(), TAttFill()
{
//*-*-*-*-*-*-*-*-*-*-*Ellipse default constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===========================

}
//______________________________________________________________________________
TEllipse::TEllipse(Float_t x1, Float_t y1,Float_t r1,Float_t r2,Float_t phimin,Float_t phimax,Float_t theta)
      :TObject(), TAttLine(), TAttFill(0,1001)
{
//*-*-*-*-*-*-*-*-*-*-*Ellipse normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==========================
   fX1     = x1;
   fY1     = y1;
   fR1     = r1;
   fR2     = r2;
   fPhimin = phimin;
   fPhimax = phimax;
   fTheta  = theta;
   if (r2 <= 0) fR2 = fR1;
}

//______________________________________________________________________________
TEllipse::~TEllipse()
{
//*-*-*-*-*-*-*-*-*-*-*Ellipse default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==========================
}

//______________________________________________________________________________
TEllipse::TEllipse(const TEllipse &ellipse)
{
   ((TEllipse&)ellipse).Copy(*this);
}

//______________________________________________________________________________
void TEllipse::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this ellipse to ellipse*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   TObject::Copy(obj);
   TAttLine::Copy(((TEllipse&)obj));
   TAttFill::Copy(((TEllipse&)obj));
   ((TEllipse&)obj).fX1 = fX1;
   ((TEllipse&)obj).fY1 = fY1;
   ((TEllipse&)obj).fR1 = fR1;
   ((TEllipse&)obj).fR2 = fR2;
   ((TEllipse&)obj).fPhimin = fPhimin;
   ((TEllipse&)obj).fPhimax = fPhimax;
   ((TEllipse&)obj).fTheta  = fTheta;
}

//______________________________________________________________________________
Int_t TEllipse::DistancetoPrimitive(Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Compute distance from point px,py to an ellipse*-*-*-*
//*-*                  ===========================================
//  Compute the closest distance of approach from point px,py to this ellipse.
//  The distance is computed in pixels units.
//

   const Float_t PI = 3.141592;
   Float_t ct   = TMath::Cos(PI*fTheta/180);
   Float_t st   = TMath::Sin(PI*fTheta/180);

//*-*- Compute distance of point to center of ellipse
   Int_t pxc    = gPad->XtoAbsPixel(fX1);
   Int_t pyc    = gPad->YtoAbsPixel(fY1);
   Float_t dist = TMath::Sqrt(Float_t((pxc-px)*(pxc-px)+(pyc-py)*(pyc-py)));
   Float_t cosa = TMath::Abs(px - pxc)/dist;
   Float_t sina = TMath::Abs(py - pyc)/dist;
//*-*- Using the angle of clicked point, compute ellipse radius
   Float_t dx    = fR1*cosa;
   Float_t dy    = fR2*sina;
   Float_t xrad  = fX1 + dx*ct - dy*st;
   Float_t yrad  = fY1 + dx*st + dy*ct;
   Int_t pxr = gPad->XtoAbsPixel(xrad);
   Int_t pyr = gPad->YtoAbsPixel(yrad);
   Float_t distr = TMath::Sqrt(Float_t((pxr-pxc)*(pxr-pxc)+(pyr-pyc)*(pyr-pyc)));

   if (distr < dist ) return 9999;


   if (GetFillColor()) return 0;
   return Int_t(distr-dist);
}

//______________________________________________________________________________
void TEllipse::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this ellipse with its current attributes*-*-*-*-*
//*-*                  ==========================================

   AppendPad(option);

}

//______________________________________________________________________________
void TEllipse::DrawEllipse(Float_t x1, Float_t y1,Float_t r1,Float_t r2,Float_t phimin,Float_t phimax,Float_t theta)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this ellipse with new coordinates*-*-*-*-*-*-*-*-*
//*-*                  ======================================
   TEllipse *newellipse = new TEllipse(x1, y1, r1, r2, phimin, phimax,theta);
   TAttLine::Copy(*newellipse);
   TAttFill::Copy(*newellipse);
   newellipse->SetBit(kCanDelete);
   newellipse->AppendPad();
}

//______________________________________________________________________________
void TEllipse::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function is called when a line is clicked with the locator
//
//  If Left button clicked on one of the line end points, this point
//     follows the cursor until button is released.
//
//  if Middle button clicked, the line is moved parallel to itself
//     until the button is released.
//


   Int_t kMaxDiff = 10;
   const Int_t kMinSize = 25;
   const Int_t np = 40;
   const Float_t PI = 3.141592;
   static Int_t x[np+2], y[np+2];
   static Int_t px1,py1,npe,R1,R2,sav1,sav2;
   static Int_t pxold, pyold;
   static Int_t sig,impair;
   Int_t i, dpx, dpy;
   Float_t angle,dx,dy,dphi,ct,st,fTy,fBy,fLx,fRx;
   static Bool_t T, L, R, B, INSIDE;
   static Int_t Tx,Ty,Lx,Ly,Rx,Ry,Bx,By;




   switch (event) {

   case kButton1Down:
      gGXW->SetLineColor(-1);
      TAttLine::Modify();
      dphi = (fPhimax-fPhimin)*PI/(180*np);
      ct   = TMath::Cos(PI*fTheta/180);
      st   = TMath::Sin(PI*fTheta/180);
      for (i=0;i<np;i++) {
         angle = Float_t(i)*dphi;
         dx    = fR1*TMath::Cos(angle);
         dy    = fR2*TMath::Sin(angle);
         x[i]  = gPad->XtoAbsPixel(fX1 + dx*ct - dy*st);
         y[i]  = gPad->YtoAbsPixel(fY1 + dx*st + dy*ct);
      }
      if (fPhimax-fPhimin >= 360 ) {
         x[np] = x[0];
         y[np] = y[0];
         npe = np;
      } else {
         x[np]   = gPad->XtoAbsPixel(fX1);
         y[np]   = gPad->YtoAbsPixel(fY1);
         x[np+1] = x[0];
         y[np+1] = y[0];
         npe = np + 1;
      }
      impair = 0;
      px1 = gPad->XtoAbsPixel(fX1);
      py1 = gPad->YtoAbsPixel(fY1);
      Tx = Bx = px1;
      Ly = Ry = py1;
      Ty = gPad->YtoAbsPixel(fR2+fY1);
      By = gPad->YtoAbsPixel(-fR2+fY1);
      Lx = gPad->XtoAbsPixel(-fR1+fX1);
      Rx = gPad->XtoAbsPixel(fR1+fX1);
      R2 = (By-Ty)/2;
      R1 = (Rx-Lx)/2;
      gGXW->DrawLine(Rx+4, py1+4, Rx-4, py1+4);
      gGXW->DrawLine(Rx-4, py1+4, Rx-4, py1-4);
      gGXW->DrawLine(Rx-4, py1-4, Rx+4, py1-4);
      gGXW->DrawLine(Rx+4, py1-4, Rx+4, py1+4);
      gGXW->DrawLine(Lx+4, py1+4, Lx-4, py1+4);
      gGXW->DrawLine(Lx-4, py1+4, Lx-4, py1-4);
      gGXW->DrawLine(Lx-4, py1-4, Lx+4, py1-4);
      gGXW->DrawLine(Lx+4, py1-4, Lx+4, py1+4);
      gGXW->DrawLine(px1+4, By+4, px1-4, By+4);
      gGXW->DrawLine(px1-4, By+4, px1-4, By-4);
      gGXW->DrawLine(px1-4, By-4, px1+4, By-4);
      gGXW->DrawLine(px1+4, By-4, px1+4, By+4);
      gGXW->DrawLine(px1+4, Ty+4, px1-4, Ty+4);
      gGXW->DrawLine(px1-4, Ty+4, px1-4, Ty-4);
      gGXW->DrawLine(px1-4, Ty-4, px1+4, Ty-4);
      gGXW->DrawLine(px1+4, Ty-4, px1+4, Ty+4);
      // No break !!!

   case kMouseMotion:
      px1 = gPad->XtoAbsPixel(fX1);
      py1 = gPad->YtoAbsPixel(fY1);
      Tx = Bx = px1;
      Ly = Ry = py1;
      Ty = gPad->YtoAbsPixel(fR2+fY1);
      By = gPad->YtoAbsPixel(-fR2+fY1);
      Lx = gPad->XtoAbsPixel(-fR1+fX1);
      Rx = gPad->XtoAbsPixel(fR1+fX1);
      T = L = R = B = INSIDE = kFALSE;
      if ((TMath::Abs(px - Tx) < kMaxDiff) &&
          (TMath::Abs(py - Ty) < kMaxDiff)) {             // top edge
         T = kTRUE;
         gPad->SetCursor(kTopSide);
      }
      else
      if ((TMath::Abs(px - Bx) < kMaxDiff) &&
          (TMath::Abs(py - By) < kMaxDiff)) {             // bottom edge
         B = kTRUE;
         gPad->SetCursor(kBottomSide);
      }
      else
      if ((TMath::Abs(py - Ly) < kMaxDiff) &&
          (TMath::Abs(px - Lx) < kMaxDiff)) {             // left edge
         L = kTRUE;
         gPad->SetCursor(kLeftSide);
      }
      else
      if ((TMath::Abs(py - Ry) < kMaxDiff) &&
          (TMath::Abs(px - Rx) < kMaxDiff)) {             // right edge
         R = kTRUE;
         gPad->SetCursor(kRightSide);
      }
      else {INSIDE= kTRUE; gPad->SetCursor(kMove); }
      pxold = px;  pyold = py;

      break;

   case kButton1Motion:
      gGXW->DrawLine(Rx+4, py1+4, Rx-4, py1+4);
      gGXW->DrawLine(Rx-4, py1+4, Rx-4, py1-4);
      gGXW->DrawLine(Rx-4, py1-4, Rx+4, py1-4);
      gGXW->DrawLine(Rx+4, py1-4, Rx+4, py1+4);
      gGXW->DrawLine(Lx+4, py1+4, Lx-4, py1+4);
      gGXW->DrawLine(Lx-4, py1+4, Lx-4, py1-4);
      gGXW->DrawLine(Lx-4, py1-4, Lx+4, py1-4);
      gGXW->DrawLine(Lx+4, py1-4, Lx+4, py1+4);
      gGXW->DrawLine(px1+4, By+4, px1-4, By+4);
      gGXW->DrawLine(px1-4, By+4, px1-4, By-4);
      gGXW->DrawLine(px1-4, By-4, px1+4, By-4);
      gGXW->DrawLine(px1+4, By-4, px1+4, By+4);
      gGXW->DrawLine(px1+4, Ty+4, px1-4, Ty+4);
      gGXW->DrawLine(px1-4, Ty+4, px1-4, Ty-4);
      gGXW->DrawLine(px1-4, Ty-4, px1+4, Ty-4);
      gGXW->DrawLine(px1+4, Ty-4, px1+4, Ty+4);
      for (i=0;i<npe;i++) gGXW->DrawLine(x[i], y[i], x[i+1], y[i+1]);
      if (T) {
         sav1 = py1;
         sav2 = R2;
         py1 += (py - pyold)/2;
         R2 -= (py - pyold)/2;
         if (TMath::Abs(pyold-py)%2==1) impair++;
         if (py-pyold>0) sig=+1;
         else sig=-1;
         if (impair==2) { impair = 0; py1 += sig; R2 -= sig;}
         if (py1 > By-kMinSize) {py1 = sav1; R2 = sav2; py = pyold;}
      }
      if (B) {
         sav1 = py1;
         sav2 = R2;
         py1 += (py - pyold)/2;
         R2 += (py - pyold)/2;
         if (TMath::Abs(pyold-py)%2==1) impair++;
         if (py-pyold>0) sig=+1;
         else sig=-1;
         if (impair==2) { impair = 0; py1 += sig; R2 += sig;}
         if (py1 < Ty+kMinSize) {py1 = sav1; R2 = sav2; py = pyold;}
      }
      if (L) {
         sav1 = px1;
         sav2 = R1;
         px1 += (px - pxold)/2;
         R1 -= (px - pxold)/2;
         if (TMath::Abs(pxold-px)%2==1) impair++;
         if (px-pxold>0) sig=+1;
         else sig=-1;
         if (impair==2) { impair = 0; px1 += sig; R1 -= sig;}
         if (px1 > Rx-kMinSize) {px1 = sav1; R1 = sav2; px = pxold;}
      }
      if (R) {
         sav1 = px1;
         sav2 = R1;
         px1 += (px - pxold)/2;
         R1 += (px - pxold)/2;
         if (TMath::Abs(pxold-px)%2==1) impair++;
         if (px-pxold>0) sig=+1;
         else sig=-1;
         if (impair==2) { impair = 0; px1 += sig; R1 += sig;}
         if (px1 < Lx+kMinSize) {px1 = sav1; R1 = sav2; px = pxold;}
      }
      if (T || B || L || R) {
         gGXW->SetLineColor(-1);
         TAttLine::Modify();
         dphi = (fPhimax-fPhimin)*PI/(180*np);
         ct   = TMath::Cos(PI*fTheta/180);
         st   = TMath::Sin(PI*fTheta/180);
         for (i=0;i<np;i++) {
            angle = Float_t(i)*dphi;
            dx    = R1*TMath::Cos(angle);
            dy    = R2*TMath::Sin(angle);
            x[i]  = px1 + Int_t(dx*ct - dy*st);
            y[i]  = py1 + Int_t(dx*st + dy*ct);
         }
         if (fPhimax-fPhimin >= 360 ) {
            x[np] = x[0];
            y[np] = y[0];
            npe = np;
         } else {
            x[np]   = px1;
            y[np]   = py1;
            x[np+1] = x[0];
            y[np+1] = y[0];
            npe = np + 1;
         }
         for (i=0;i<npe;i++) gGXW->DrawLine(x[i], y[i], x[i+1], y[i+1]);
      }
      if (INSIDE) {
          dpx  = px-pxold;  dpy = py-pyold;
          px1 += dpx; py1 += dpy;
          for (i=0;i<=npe;i++) { x[i] += dpx; y[i] += dpy;}
          for (i=0;i<npe;i++) gGXW->DrawLine(x[i], y[i], x[i+1], y[i+1]);
      }
      Tx = Bx = px1;
      Rx = px1+R1;
      Lx = px1-R1;
      Ry = Ly = py1;
      Ty = py1-R2;
      By = py1+R2;
      gGXW->DrawLine(Rx+4, py1+4, Rx-4, py1+4);
      gGXW->DrawLine(Rx-4, py1+4, Rx-4, py1-4);
      gGXW->DrawLine(Rx-4, py1-4, Rx+4, py1-4);
      gGXW->DrawLine(Rx+4, py1-4, Rx+4, py1+4);
      gGXW->DrawLine(Lx+4, py1+4, Lx-4, py1+4);
      gGXW->DrawLine(Lx-4, py1+4, Lx-4, py1-4);
      gGXW->DrawLine(Lx-4, py1-4, Lx+4, py1-4);
      gGXW->DrawLine(Lx+4, py1-4, Lx+4, py1+4);
      gGXW->DrawLine(px1+4, By+4, px1-4, By+4);
      gGXW->DrawLine(px1-4, By+4, px1-4, By-4);
      gGXW->DrawLine(px1-4, By-4, px1+4, By-4);
      gGXW->DrawLine(px1+4, By-4, px1+4, By+4);
      gGXW->DrawLine(px1+4, Ty+4, px1-4, Ty+4);
      gGXW->DrawLine(px1-4, Ty+4, px1-4, Ty-4);
      gGXW->DrawLine(px1-4, Ty-4, px1+4, Ty-4);
      gGXW->DrawLine(px1+4, Ty-4, px1+4, Ty+4);
      pxold = px;
      pyold = py;
      break;

   case kButton1Up:
      fX1 = gPad->AbsPixeltoX(px1);
      fY1 = gPad->AbsPixeltoY(py1);
      fBy = gPad->AbsPixeltoY(py1+R2);
      fTy = gPad->AbsPixeltoY(py1-R2);
      fLx = gPad->AbsPixeltoX(px1+R1);
      fRx = gPad->AbsPixeltoX(px1-R1);
      fR1 = TMath::Abs(fRx-fLx)/2;
      fR2 = TMath::Abs(fTy-fBy)/2;
      gPad->Modified(kTRUE);
      gGXW->SetLineColor(-1);
   }
}

//______________________________________________________________________________
void TEllipse::ls(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*List this ellipse with its attributes*-*-*-*-*-*-*-*
//*-*                    =====================================
   IndentLevel();
   printf("Ellipse:  X1= %f Y1=%f R1=%f R2=%f\n",fX1,fY1,fR1,fR2);
}

//______________________________________________________________________________
void TEllipse::Paint(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*Paint this ellipse with its current attributes*-*-*-*-*
//*-*                  ==============================================
   PaintEllipse(fX1,fY1,fR1,fR2,fPhimin,fPhimax,fTheta);
}

//______________________________________________________________________________
void TEllipse::PaintEllipse(Float_t, Float_t, Float_t, Float_t, Float_t phimin,Float_t phimax, Float_t theta)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this ellipse with new coordinates*-*-*-*-*-*-*-*-*
//*-*                  ======================================

   const Int_t np = 40;
   const Float_t PI = 3.141592;
   static Float_t x[np+2], y[np+2];
   TAttLine::Modify();  //Change line attributes only if necessary
   TAttFill::Modify();  //Change fill attributes only if necessary

   Float_t angle,dx,dy;
   Float_t dphi = (phimax-phimin)*PI/(180*np);
   Float_t ct   = TMath::Cos(PI*theta/180);
   Float_t st   = TMath::Sin(PI*theta/180);
   for (Int_t i=0;i<np;i++) {
      angle = phimin + Float_t(i)*dphi;
      dx    = fR1*TMath::Cos(angle);
      dy    = fR2*TMath::Sin(angle);
      x[i]  = fX1 + dx*ct - dy*st;
      y[i]  = fY1 + dx*st + dy*ct;
   }
   if (phimax-phimin >= 360 ) {
      x[np] = x[0];
      y[np] = y[0];
      if (GetFillColor()) gPad->PaintFillArea(np,x,y);
      if (GetLineStyle()) gPad->PaintPolyLine(np+1,x,y);
   } else {
      x[np]   = fX1;
      y[np]   = fY1;
      x[np+1] = x[0];
      y[np+1] = y[0];
      if (GetFillColor()) gPad->PaintFillArea(np+1,x,y);
      if (GetLineStyle()) gPad->PaintPolyLine(np+2,x,y);
   }
}

//______________________________________________________________________________
void TEllipse::Print(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*Dump this ellipse with its attributes*-*-*-*-*-*-*-*-*
//*-*                  =====================================

   printf("Ellipse:  X1= %f Y1=%f R1=%f R2=%f",fX1,fY1,fR1,fR2);
   if (GetLineColor() != 1) printf(" Color=%d",GetLineColor());
   if (GetLineStyle() != 1) printf(" Style=%d",GetLineStyle());
   if (GetLineWidth() != 1) printf(" Width=%d",GetLineWidth());
   printf("\n");
}

//______________________________________________________________________________
void TEllipse::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   out<<"   "<<endl;
   if (gROOT->ClassSaved(TEllipse::Class())) {
       out<<"   ";
   } else {
       out<<"   TEllipse *";
   }
   out<<"ellipse = new TEllipse("<<fX1<<","<<fY1<<","<<fR1<<","<<fR2
      <<","<<fPhimin<<","<<fPhimax<<","<<fTheta<<");"<<endl;

   SaveFillAttributes(out,"ellipse",0,1001);
   SaveLineAttributes(out,"ellipse",1,1,1);

   out<<"   ellipse->Draw();"<<endl;
}
