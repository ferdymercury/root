//*CMZ :  2.22/09 13/07/99  12.37.42  by  Rene Brun
//*CMZ :  2.22/07 05/07/99  17.06.23  by  Rene Brun
//*CMZ :  2.22/05 11/06/99  16.15.49  by  Rene Brun
//*CMZ :  2.22/04 02/06/99  09.18.13  by  Rene Brun
//*CMZ :  2.22/03 31/05/99  17.57.57  by  Rene Brun
//*CMZ :  2.22/02 28/05/99  18.05.02  by  Rene Brun
//*CMZ :  2.22/01 20/05/99  08.16.22  by  Rene Brun
//*CMZ :  2.21/06 15/02/99  09.05.14  by  Rene Brun
//*CMZ :  2.21/05 09/02/99  01.10.37  by  Fons Rademakers
//*CMZ :  2.21/02 16/01/99  14.51.35  by  Rene Brun
//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.20/00 13/11/98  18.44.00  by  Fons Rademakers
//*CMZ :  2.00/13 29/10/98  15.10.09  by  Fons Rademakers
//*CMZ :  2.00/12 08/10/98  09.11.57  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  08.17.13  by  Rene Brun
//*CMZ :  2.00/10 24/07/98  18.19.33  by  Fons Rademakers
//*CMZ :  2.00/09 21/06/98  23.34.02  by  Rene Brun
//*CMZ :  2.00/08 01/06/98  17.55.30  by  Rene Brun
//*CMZ :  2.00/04 30/03/98  19.05.29  by  Rene Brun
//*CMZ :  2.00/03 26/03/98  09.48.59  by  Rene Brun
//*CMZ :  1.03/09 16/12/97  16.26.14  by  Rene Brun
//*-- Author :    Rene Brun   12/12/94

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

#include <string.h>
#include <stdlib.h>
#include <fstream.h>

#include "TROOT.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TStyle.h"
#include "TDirectory.h"
#include "TLego.h"
#include "TH1.h"
#include "TClass.h"
#include "TBaseClass.h"
#include "TPostscript.h"
#include "TGXW.h"
#include "TView.h"
#include "X3DBuffer.h"
#include "TPoint.h"
#include "TGraph.h"
#include "TArrow.h"
#include "TPaveText.h"
#include "TPavesText.h"
#include "TPaveLabel.h"
#include "TArc.h"
+SEq,TText.
#include "TDiamond.h"
#include "TGroupButton.h"
#include "TBrowser.h"
#include "TCutG.h"
#include "TPadView3D.h"
#include "TGLKernelABC.h"
#include "TString.h"
#include "TLine.h"
#include "TLink.h"
#include "TDataMember.h"
#include "TMethod.h"
#include "TDataType.h"
#include "TRealData.h"
#include "TGToolTip.h"

#if defined(WIN32)
#include "TInterpreter.h"
#include "TSystem.h"
#endif

const Int_t kNoStats    = BIT(9);
const Int_t kClipFrame  = BIT(10);
const Int_t kPrintingPS = BIT(11);
const Int_t kDistanceMaximum = 5;

// Local scratch buffer for screen points, faster than allocating buffer on heap
const Int_t kPXY    = 1002;
const Int_t kButton = 101;
const Int_t kCutG   = 100;

static TPoint gPXY[kPXY];


ClassImp(TPad)

//______________________________________________________________________________
//  The Pad class is the most important graphics class in the ROOT system.
//Begin_Html
/*
<img src="gif/tpad_classtree.gif">
*/
//End_Html
//  A Pad is contained in a Canvas.
//  A Pad may contain other pads (unlimited pad hierarchy).
//  A pad is a linked list of primitives of any type (graphics objects,
//  histograms, detectors, tracks, etc.).
//  Adding a new element into a pad is in general performed by the Draw
//  member function of the object classes.
//  It is important to realize that the pad is a linked list of references
//  to the original object.
//  For example, in case of an histogram, the histogram.Draw() operation
//  only stores a reference to the histogram object and not a graphical
//  representation of this histogram.
//  When the mouse is used to change (say the bin content), the bin content
//  of the original histogram is changed !!
//
//  The convention used in ROOT is that a Draw operation only adds
//  a reference to the object. The effective drawing is performed when
//  when the canvas receives a signal to be painted.
//  This signal is generally sent when typing carriage return in the
//  command input or when a graphical operation has been performed on one
//  of the pads of this canvas.
//  When a Canvas/Pad is repainted, the member function Paint for all
//  objects in the Pad linked list is invoked.
//
//  When the mouse is moved on the Pad, The member function DistancetoPrimitive
//  is called for all the elements in the pad. DistancetoPrimitive returns
//  the distance in pixels to this object.
//  when the object is within the distance window, the member function
//  ExecuteEvent is called for this object.
//  in ExecuteEvent, move, changes can be performed on the object.
//  For examples of DistancetoPrimitive and ExecuteEvent functions,
//  see classes TLine::DistancetoPrimitive, TLine::ExecuteEvent
//              TBox::DistancetoPrimitive,  TBox::ExecuteEvent
//              TH1::DistancetoPrimitive,   TH1::ExecuteEvent
//
//  A Pad supports linear and log scales coordinate systems.
//  The transformation coefficients are explained in TPad::ResizePad.
//  An example of pads hierarchy is shown below:
//Begin_Html
/*
<img src="examples/gif/canvas.gif">
*/
//End_Html
//

//______________________________________________________________________________
TPad::TPad(): TVirtualPad()
{
//*-*-*-*-*-*-*-*-*-*-*Pad default constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =======================
   fPadPointer = 0;
   fPrimitives = 0;
   fCanvas     = 0;
   fMother     = 0;
   fPadPaint   = 0;
   fPixmapID   = -1;
   fTheta      = 30;
   fPhi        = 30;
   fNumber     = 0;
   fAbsCoord   = kFALSE;
   fPadView3D  = 0;

   fLogx  = 0;
   fLogy  = 0;
   fLogz  = 0;
   fGridx = 0;
   fGridy = 0;
   fTickx = 0;
   fTicky = 0;
   fFrame = 0;
   fView  = 0;

   fUxmin = fUymin = fUxmax = fUymax = 0;

//*-*- Set default world coordinates to NDC [0,1]
   fX1 = 0;
   fX2 = 1;
   fY1 = 0;
   fY2 = 1;

//*-*- Set default pad range
   fXlowNDC = 0;
   fYlowNDC = 0;
   fWNDC    = 1;
   fHNDC    = 1;
}

//______________________________________________________________________________
TPad::TPad(const Text_t *name, const Text_t *title, Float_t xlow,
           Float_t ylow, Float_t xup, Float_t yup,
           Color_t color, Short_t bordersize, Short_t bordermode)
          : TVirtualPad(name,title,xlow,ylow,xup,yup,color,bordersize,bordermode)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Pad constructor-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                          ===============
//  A pad is a linked list of primitives.
//  A pad is contained in a canvas. It may contain other pads.
//  A pad has attributes. When a pad is created, the attributes
//  defined in the current style are copied to the pad attributes.
//
//  xlow [0,1] is the position of the bottom left point of the pad
//             expressed in the mother pad reference system
//  ylow [0,1] is the Y position of this point.
//  xup  [0,1] is the x position of the top right point of the pad
//             expressed in the mother pad reference system
//  yup  [0,1] is the Y position of this point.
//
//  See TWbox::TWbox for the other parameters.
//


   if (gPad)   fCanvas = gPad->GetCanvas();
   else        fCanvas = (TCanvas*)this;
   fMother     = (TPad*)gPad;
   fPrimitives = new TList(this);
   fPadPointer = 0;
   fTheta      = 30;
   fPhi        = 30;
   fGridx      = gStyle->GetPadGridX();
   fGridy      = gStyle->GetPadGridY();
   fTickx      = gStyle->GetPadTickX();
   fTicky      = gStyle->GetPadTickY();
   fFrame      = 0;
   fView       = 0;
   fPadPaint   = 0;
   fPixmapID   = -1;      // -1 means pixmap will be created by ResizePad()
   fNumber     = 0;
   fAbsCoord   = kFALSE;
   fPadView3D  = 0;

   if (!gPad) return;
   TPad *padsav = (TPad*)gPad;

   if ((xlow < 0) || (xlow > 1) || (ylow <0) || (ylow > 1)) {
      Error("TPad", "illegal bottom left position: x=%f, y=%f", xlow, ylow);
      goto zombie;
   }
   if ((xup < 0) || (xup > 1) || (yup <0) || (yup > 1)) {
      Error("TPad", "illegal top right position: x=%f, y=%f", xup, yup);
      goto zombie;
   }

   fLogx = gStyle->GetOptLogx();
   fLogy = gStyle->GetOptLogy();
   fLogz = gStyle->GetOptLogz();

   fUxmin = fUymin = fUxmax = fUymax = 0;

//*-*- Set pad parameters and Compute conversion coeeficients
   SetPad(name, title, xlow, ylow, xup, yup, color, bordersize, bordermode);
   Range(0, 0, 1, 1);
   SetBit(kCanDelete);

   padsav->cd();
   return;

zombie:
   // error in creating pad occured, make this pad a zombie
   MakeZombie();
   padsav->cd();
}

//______________________________________________________________________________
TPad::~TPad()
{
//*-*-*-*-*-*-*-*-*-*-*Pad destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============

   if (!TestBit(kNotDeleted)) return;
   Close();
   SafeDelete(fPrimitives);
   if (fPadView3D) { fPadView3D->SetPad(); fPadView3D = 0; }
}

//______________________________________________________________________________
void TPad::Browse(TBrowser *b)
{
    cd();
    fPrimitives->Browse(b);
}


//______________________________________________________________________________
void TPad::cd(Int_t subpadnumber)
{
//*-*-*-*-*-*-*-*-*Set Current Pad*-*-*-*-*-**-*-*-*-*-*-*-*
//*-*              ====================
//  When a canvas/pad is divided via TPad::Divide, one can directly
//  set the current path to one of the subdivisions.
//  See TPad::Divide for the convention to number subpads.
//  For example:
//    c1.Divide(2,3); // create 6 pads (2 divisions along x, 3 along y).
//    To set the current pad to the bottom right pad, do
//    c1.cd(6);
//  Note1:  c1.cd() is equivalent to c1.cd(0) and sets the current pad
//          to c1 itself.
//  Note2:  after a statement like c1.cd(6), the global variable gPad
//          points to the current pad. One can use gPad to set attributes
//          of the current pad.

   if (!subpadnumber) {
      gPad = this;
      if (!gPad->IsBatch()) gGXW->SelectWindow(fPixmapID);
      return;
   }

   TObject *obj;
   TIter    next(GetListOfPrimitives());
   while ((obj = next())) {
      if (obj->InheritsFrom(TPad::Class())) {
         Int_t n = ((TPad*)obj)->GetNumber();
         if (n == subpadnumber) {
            ((TPad*)obj)->cd();
            return;
         }
      }
   }
}

//______________________________________________________________________________
void TPad::Clear(Option_t *option)
{
//*-*-*-*-*-*-*-*-*Delete all pad primitives*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================


//*-*- Do not delete editor pads when in editor mode

   SafeDelete(fView);

   if (!fPadPaint) {
      if (fPrimitives) fPrimitives->Clear(option);
      delete fFrame; fFrame = 0;
   }

   cd();

   if (!gPad->IsBatch()) gGXW->ClearWindow();
   if (gCurrentPS && gPad == gPad->GetCanvas()) gCurrentPS->NewPage();

   TWbox::Paint("");
}

//___________________________________________________________
Int_t TPad::Clip(Float_t *x, Float_t *y, Float_t xclipl, Float_t yclipb, Float_t xclipr, Float_t yclipt)
{
//   Clipping routine: Cohen Sutherland algorithm.
// If Clip ==0 the segment is outside the boundary.
//
// _Input parameters:
//
//  x[2], y[2] : Segment coordinates
//  xclipl, yclipb, xclipr, yclipt : Clipping boundary
//
// _Output parameters:
//
//  x[2], y[2] : New segment coordinates
//
// If clipped != 0 after a call to this function, the
// line has been clipped.
//
   const Float_t P=10000;
   Int_t clip = 0;

   for (Int_t i=0;i<2;i++) {
      if (TMath::Abs(xclipl-x[i]) <= TMath::Abs(xclipr-xclipl)/P) x[i] = xclipl;
      if (TMath::Abs(xclipr-x[i]) <= TMath::Abs(xclipr-xclipl)/P) x[i] = xclipr;
      if (TMath::Abs(yclipb-y[i]) <= TMath::Abs(yclipt-yclipb)/P) y[i] = yclipb;
      if (TMath::Abs(yclipt-y[i]) <= TMath::Abs(yclipt-yclipb)/P) y[i] = yclipt;
   }

//Compute the first endpoint codes.
   Int_t code1 = ClippingCode(x[0],y[0],xclipl,yclipb,xclipr,yclipt);
   Int_t code2 = ClippingCode(x[1],y[1],xclipl,yclipb,xclipr,yclipt);

   Float_t xt=0, yt=0;
//   Int_t clipped = 0; //this variable could be used in a future version
   while(code1 + code2) {
//      clipped = 1;

//The line lies entirely outside the clipping boundary

      if (code1&code2) {
         clip = 0;
         return clip;
      }
//The line is subdivided into several parts

      Int_t ic = code1;
      if (ic == 0) ic = code2;
      if (ic & 0x1) {
         yt = y[0] + (y[1]-y[0])*(xclipl-x[0])/(x[1]-x[0]);
         xt = xclipl;
      }
      if (ic & 0x2) {
         yt = y[0] + (y[1]-y[0])*(xclipr-x[0])/(x[1]-x[0]);
         xt = xclipr;
      }
      if (ic & 0x4) {
         xt = x[0] + (x[1]-x[0])*(yclipb-y[0])/(y[1]-y[0]);
         yt = yclipb;
      }
      if (ic & 0x8) {
         xt = x[0] + (x[1]-x[0])*(yclipt-y[0])/(y[1]-y[0]);
         yt = yclipt;
      }
      if (ic == code1) {
         x[0]  = xt;
         y[0]  = yt;
         code1 = ClippingCode(xt,yt,xclipl,yclipb,xclipr,yclipt);
      } else {
         x[1]  = xt;
         y[1]  = yt;
         code2 = ClippingCode(xt,yt,xclipl,yclipb,xclipr,yclipt);
      }
   }
   clip = 1;
   return clip;
}


//___________________________________________________________
Int_t TPad::ClippingCode(Float_t x, Float_t y, Float_t xcl1, Float_t ycl1, Float_t xcl2, Float_t ycl2)
{
//   Compute the endpoint codes for TPad::Clip.

   Int_t code = 0;
   if (x < xcl1) code = code | 0x1;
   if (x > xcl2) code = code | 0x2;
   if (y < ycl1) code = code | 0x4;
   if (y > ycl2) code = code | 0x8;
   return code;
}


//______________________________________________________________________________
void TPad::Close(Option_t *)
{
//*-*-*-*-*-*-*-*-*Delete all primitives in pad and pad itself*-*-*-*-*-*-*
//*-*              ============================
//   NB. Pad cannot be used anymore after this call
//
   if (!TestBit(kNotDeleted)) return;
   if (!fMother) return;

   if (fPrimitives)
      fPrimitives->Clear();
   if (fView) {
      if (fView->TestBit(kNotDeleted)) delete fView;
      fView = 0;
   }
   if (fFrame) {
      if (fFrame->TestBit(kNotDeleted)) delete fFrame;
      fFrame = 0;
   }

   if (fPixmapID != -1) {
      if (gPad) {
         if (!gPad->IsBatch()) {
            gGXW->SelectWindow(fPixmapID);
            gGXW->ClosePixmap();
         }
      }
      fPixmapID = -1;

      if (!gROOT->GetListOfCanvases()) return;
      if (fMother == this) {
         gROOT->GetListOfCanvases()->Remove(this);
         return;   // in case of TCanvas
      }

      // remove from the mother's list of primitives
      if (fMother->GetListOfPrimitives()) fMother->GetListOfPrimitives()->Remove(this);

      if (gPad == this)
         fMother->cd();
   }
   fMother = 0;
}

//______________________________________________________________________________
void TPad::CopyPixmap()
{
//*-*-*-*-*-*-*-*-*Copy the pixmap of the pad to the canvas*-*-*-*-*-*-*
//*-*              ========================================

   int px, py;
   XYtoAbsPixel(GetX1(), GetY2(), px, py);
   gGXW->CopyPixmap(fPixmapID, px, py);
   if (this == gPad) HighLight(gPad->GetHighLightColor());
}

//______________________________________________________________________________
void TPad::CopyPixmaps()
{
//*-*-*-*-*-*-*-*-*Copy the sub-pixmaps of the pad to the canvas*-*-*-*-*-*-*
//*-*              =============================================

   TObject *obj;
   TIter    next(GetListOfPrimitives());
   while ((obj = next())) {
      if (obj->InheritsFrom(TPad::Class())) {
         ((TPad*)obj)->CopyPixmap();
         ((TPad*)obj)->CopyPixmaps();
      }
   }
}

//______________________________________________________________________________
void TPad::CreateNewArrow(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Create a new arrow in this pad*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============================
//
//  Function called by TPad::ExecuteEvent when the action "Create NewArrow"
//  has been selected in the Canvas pulldown menu.
//
//  Click left button to indicate arrow starting position.
//  Release left button to terminate the arrow.
//
//

   static Float_t x0, y0, x1, y1;

   static Int_t pxold, pyold;
   static Int_t px0, py0;
   static Int_t linedrawn;
   TArrow *arrow;

   switch (event) {

   case kButton1Down:
      gGXW->SetLineColor(-1);
      x0 = gPad->AbsPixeltoX(px);
      y0 = gPad->AbsPixeltoY(py);
      px0   = px; py0   = py;
      pxold = px; pyold = py;
      linedrawn = 0;
      break;

   case kButton1Motion:
      if (linedrawn) gGXW->DrawLine(px0, py0, pxold, pyold);
      pxold = px;
      pyold = py;
      linedrawn = 1;
      gGXW->DrawLine(px0, py0, pxold, pyold);
      break;

   case kButton1Up:
      x1 = gPad->AbsPixeltoX(px);
      y1 = gPad->AbsPixeltoY(py);
      gPad->Modified(kTRUE);

      arrow = new TArrow(x0,y0,x1,y1,0.03,"|>");
      arrow->SetFillColor(1);
      arrow->Draw();
      gROOT->SetEditorMode();
      break;
   }
}


//______________________________________________________________________________
void TPad::CreateNewEllipse(Int_t event, Int_t px, Int_t py, Int_t mode)
{
//*-*-*-*-*-*-*-*-*-*-*Create a new arc/ellipse in this pad*-*-*-*-*-*-*-*-*-*
//*-*                  ====================================
//
//  Function called by TPad::ExecuteEvent when the action "Create NewEllipse"
//  has been selected in the Canvas pulldown menu.
//
//  Click left button to indicate arrow starting position.
//  Release left button to terminate the arrow.
//


   static Float_t x0, y0, x1, y1;

   static Int_t pxold, pyold;
   static Int_t px0, py0;
   static Int_t linedrawn;
   Float_t xc,yc,r1,r2;
   TEllipse *el = 0;

   switch (event) {

   case kButton1Down:
      gGXW->SetLineColor(-1);
      x0 = gPad->AbsPixeltoX(px);
      y0 = gPad->AbsPixeltoY(py);
      px0   = px; py0   = py;
      pxold = px; pyold = py;
      linedrawn = 0;
      break;

   case kButton1Motion:
      if (linedrawn) gGXW->DrawBox(px0, py0, pxold, pyold, TGXW::kHollow);
      pxold = px;
      pyold = py;
      linedrawn = 1;
      gGXW->DrawBox(px0, py0, pxold, pyold, TGXW::kHollow);
      break;

   case kButton1Up:
      x1 = gPad->AbsPixeltoX(px);
      y1 = gPad->AbsPixeltoY(py);
      xc = 0.5*(x0+x1);
      yc = 0.5*(y0+y1);

      if (mode == kArc) {
         r1 = 0.5*TMath::Abs(x1-x0);
         el = new TArc(xc, yc, r1);
      }
      if (mode == kEllipse) {
         r1 = 0.5*TMath::Abs(x1-x0);
         r2 = 0.5*TMath::Abs(y1-y0);
         el = new TEllipse(xc, yc, r1, r2);
      }
      gPad->GetCanvas()->FeedbackMode(kFALSE);
      gPad->Modified(kTRUE);
      el->Draw();
      gROOT->SetEditorMode();
      break;
   }
}

//______________________________________________________________________________
void TPad::CreateNewPad(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Create a new pad in this pad*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
//
//  Function called by TPad::ExecuteEvent when the action "Create NewPad"
//  has been selected in the Canvas pulldown menu.
//
//  Click left button to indicate one corner of the pad
//  Click left button to indicate the opposite corner
//
//  The new pad is inserted in the pad where the first point is selected.
//
   static Int_t px1old, py1old, px2old, py2old;
   static Int_t px1, py1, px2, py2, pxl, pyl, pxt, pyt;
   static Bool_t boxdrawn;
   static TPad *padsav;
   Float_t xlow, ylow, xup, yup;
   TPad * newpad;

   switch (event) {

   case kButton1Down:
      padsav = (TPad*)gPad;
      cd();
      gGXW->SetLineColor(-1);
      px1 = gPad->XtoAbsPixel(gPad->GetX1());
      py1 = gPad->YtoAbsPixel(gPad->GetY1());
      px2 = gPad->XtoAbsPixel(gPad->GetX2());
      py2 = gPad->YtoAbsPixel(gPad->GetY2());
      px1old = px; py1old = py;
      boxdrawn = 0;
      break;

   case kButton1Motion:
      if (boxdrawn) gGXW->DrawBox(pxl, pyl, pxt, pyt, TGXW::kHollow);
      px2old = px;
      px2old = TMath::Max(px2old, px1);
      px2old = TMath::Min(px2old, px2);
      py2old = py;
      py2old = TMath::Max(py2old, py2);
      py2old = TMath::Min(py2old, py1);
      pxl = TMath::Min(px1old, px2old);
      pxt = TMath::Max(px1old, px2old);
      pyl = TMath::Max(py1old, py2old);
      pyt = TMath::Min(py1old, py2old);
      boxdrawn = 1;
      gGXW->DrawBox(pxl, pyl, pxt, pyt, TGXW::kHollow);
      break;

   case kButton1Up:
      gPad->Modified(kTRUE);
      gPad->SetDoubleBuffer(1);   // Turn on double buffer mode
      gGXW->SetDrawMode(TGXW::kCopy);       // set drawing mode back to normal (copy) mode
      xlow = (Float_t(pxl) - Float_t(px1))/(Float_t(px2) - Float_t(px1));
      ylow = (Float_t(py1) - Float_t(pyl))/(Float_t(py1) - Float_t(py2));
      xup  = (Float_t(pxt) - Float_t(px1))/(Float_t(px2) - Float_t(px1));
      yup  = (Float_t(py1) - Float_t(pyt))/(Float_t(py1) - Float_t(py2));
      gROOT->SetEditorMode();
      boxdrawn = 0;
      if (xup <= xlow || yup <= ylow) return;
      newpad = new TPad("newpad","newpad",xlow, ylow, xup, yup);
      if (newpad->IsZombie()) break;
      newpad->SetFillColor(gStyle->GetPadColor());
      newpad->Draw();
      padsav->cd();
      break;
   }
}

//______________________________________________________________________________
void TPad::CreateNewPave(Int_t event, Int_t px, Int_t py, Int_t mode)
{
//*-*-*-*-*-*-*-*-*-*Create a new pavetext in this pad*-*-*-*-*-*-*-*-*-*-*
//*-*                =================================
//
//  Function called by TPad::ExecuteEvent when the action "Create NewPaveText"
//  has been selected in the Canvas pulldown menu.
//
//  Click left button to indicate one corner of the pavelabel.
//  Release left button at the opposite corner.
//


   static Float_t x0, y0, x1, y1;

   static Int_t pxold, pyold;
   static Int_t px0, py0;
   static Int_t linedrawn;
   const Int_t kTMAX=100;
   Int_t i,pxl,pyl;
   Float_t temp;
   Float_t xp0,xp1,yp0,yp1;
   static char atext[kTMAX];
   TObject *pave = 0;

   switch (event) {

   case kButton1Down:
      gGXW->SetLineColor(-1);
      x0 = gPad->AbsPixeltoX(px);
      y0 = gPad->AbsPixeltoY(py);
      px0   = px; py0   = py;
      pxold = px; pyold = py;
      linedrawn = 0;
      break;

   case kButton1Motion:
      if (linedrawn) gGXW->DrawBox(px0, py0, pxold, pyold, TGXW::kHollow);
      pxold = px;
      pyold = py;
      linedrawn = 1;
      gGXW->DrawBox(px0, py0, pxold, pyold, TGXW::kHollow);
      break;

   case kButton1Up:
      if (px == px0) px = px0+10;
      if (py == py0) py = py0-10;
      x1 = gPad->AbsPixeltoX(px);
      y1 = gPad->AbsPixeltoY(py);

      if (x1 < x0) {temp = x0; x0 = x1; x1 = temp;}
      if (y1 < y0) {temp = y0; y0 = y1; y1 = temp;}
      xp0 = PadtoX(x0);
      xp1 = PadtoX(x1);
      yp0 = PadtoY(y0);
      yp1 = PadtoY(y1);
      if (mode == kPave)       pave = new TPave(xp0,yp0,xp1,yp1);
      if (mode == kPaveText )  pave = new TPaveText(xp0,yp0,xp1,yp1);
      if (mode == kPavesText)  pave = new TPavesText(xp0,yp0,xp1,yp1);
      if (mode == kDiamond)    pave = new TDiamond(x0,y0,x1,y1);
      if (mode == kPaveLabel || mode == kButton) {
         pxl = (px0 + px)/2;
         pyl = (py0 + py)/2;
         for (i=0;i<kTMAX;i++) atext[i] = ' ';
         atext[kTMAX-1] = 0;
         gGXW->RequestString(pxl, pyl, atext);
         for (i=kTMAX-2;i>=0;i--) {
            if (atext[i] != ' ') {
               atext[i+1] = 0;
               break;
            }
         }
         if (mode == kPaveLabel) pave = new TPaveLabel(xp0,yp0,xp1,yp1,atext);
         if (mode == kButton)    pave = new TButton(atext,"",
                              (x0-gPad->GetX1())/(gPad->GetX2() - gPad->GetX1()),
                              (y0-gPad->GetY1())/(gPad->GetY2() - gPad->GetY1()),
                              (x1-gPad->GetX1())/(gPad->GetX2() - gPad->GetX1()),
                              (y1-gPad->GetY1())/(gPad->GetY2() -
                              gPad->GetY1()));
      }
      gPad->GetCanvas()->FeedbackMode(kFALSE);
      gPad->Modified(kTRUE);
      pave->Draw();
      gROOT->SetEditorMode();
      break;
   }
}

//______________________________________________________________________________
void TPad::CreateNewPolyLine(Int_t event, Int_t px, Int_t py, Int_t mode)
{
//*-*-*-*-*-*-*-*-*-*Create a new PolyLine*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ======================
//  Click left button to indicate a new point
//  Click right button to close the polyline
//  mode = 0 normal polyline
//  mode = 0 smooth polyline
// This function is called when the item NewPolyLine is selected in the
// canvas pulldown menu.
//
   const Int_t kMAX=100;
   static Float_t xline[kMAX], yline[kMAX];

   static Int_t pxold, pyold, px1old, py1old;
   static Int_t npoints = 0;
   static Int_t linedrawn;
   Int_t dp;
   TGraph *gr;
   TCutG *cutg;

   switch (event) {

   case kButton1Down:
      if (npoints == 0) {
         gGXW->SetLineColor(-1);
      } else {
         gPad->GetCanvas()->FeedbackMode(kFALSE);
         gGXW->DrawLine(px1old, py1old, pxold, pyold);
      }
      // stop collecting new points if new point is close ( < 5 pixels) of previous point
      dp = TMath::Abs(px-px1old) +TMath::Abs(py-py1old);
      if (npoints && dp < 5) {
         gPad->Modified(kTRUE);
         if      (mode == kPolyLine) {
            gr = new TGraph(npoints,xline,yline);
            gr->ResetBit(kClipFrame);
            gr->Draw("L");
         } else {
            xline[npoints] = xline[0];
            yline[npoints] = yline[0];
            npoints++;
            cutg = new TCutG("CUTG",npoints,xline,yline);
            cutg->Draw("L");
         }
         npoints = 0;
         linedrawn = 0;
         gROOT->SetEditorMode();
         break;
      }
      xline[npoints] = gPad->PadtoX(gPad->AbsPixeltoX(px));
      yline[npoints] = gPad->PadtoY(gPad->AbsPixeltoY(py));
      px1old = px; py1old = py;
      pxold  = px; pyold  = py;
      linedrawn = 0;
      npoints++;

      if (npoints >= kMAX) {
         Error("CreateNewPolyLine", "too many points (more than %d)", kMAX);
         npoints = kMAX;
      }
      break;

   case kMouseMotion:
   case kButton1Motion:
   case kButton1Up:
      if (npoints == 0) return;
      gPad->GetCanvas()->FeedbackMode(kTRUE);
      if (linedrawn) gGXW->DrawLine(px1old, py1old, pxold, pyold);
      pxold = px;
      pyold = py;
      linedrawn = 1;
      gGXW->DrawLine(px1old, py1old, pxold, pyold);
      break;
   }
}

//______________________________________________________________________________
void TPad::CreateNewText(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*Create a new TText at the cursor position*-*-*-*-*-*-*-*
//*-*                =========================================
//  Click left button to indicate the text position
// This function is called when the item NewText is selected in the
// canvas pulldown menu.
//

   const Int_t kTMAX=100;
   static char atext[kTMAX];
   Int_t i, lentext;
   TText *newtext;
   Float_t x, y;

   switch (event) {

   case kButton1Down:
      for (i=0;i<kTMAX;i++) atext[i] = ' ';
      atext[kTMAX-1] = 0;
      lentext = kTMAX;
      newtext = new TText();
      gGXW->SetLineColor(-1);
      newtext->TAttText::Modify();
      gGXW->RequestString(px, py, atext);
      lentext = strlen(atext);
      for (i=lentext-1;i>=0;i--) {
         if (atext[i] != ' ') {
            atext[lentext] = 0;
            break;
         }
         lentext--;
      }
      if (!lentext) break;
      x = gPad->AbsPixeltoX(px);
      y = gPad->AbsPixeltoY(py);
      newtext->DrawText(x, y, atext);
      gPad->Modified(kTRUE);
      gROOT->SetEditorMode();
      break;
   }
}

//______________________________________________________________________________
void TPad::Divide(Int_t nx, Int_t ny, Float_t xmargin, Float_t ymargin, Int_t color)
{
//*-*-*-*-*-*-*-*-*Automatic pad generation by division*-*-*-*-*-*-*-*-*-*-*
//*-*              ====================================
//  The current canvas is divided in nx by ny equal divisions(pads).
//  xmargin is the space along x between pads in percent of canvas.
//  ymargin is the space along y between pads in percent of canvas.
//  color is the color of the new pads. If 0, color is the canvas color.
//  Pads are automatically named canvasname_n where n is the division number
//  starting from top left pad.
//       Example if canvasname=c1 , nx=2, ny=3
//
//    ...............................................................
//    .                               .                             .
//    .                               .                             .
//    .                               .                             .
//    .           c1_1                .           c1_2              .
//    .                               .                             .
//    .                               .                             .
//    .                               .                             .
//    ...............................................................
//    .                               .                             .
//    .                               .                             .
//    .                               .                             .
//    .           c1_3                .           c1_4              .
//    .                               .                             .
//    .                               .                             .
//    .                               .                             .
//    ...............................................................
//    .                               .                             .
//    .                               .                             .
//    .                               .                             .
//    .           c1_5                .           c1_6              .
//    .                               .                             .
//    .                               .                             .
//    ...............................................................
//
//
//    Once a pad is divided into subpads, one can set the current pad
//    to a subpad with a given division number as illustrated above
//    with TPad::cd(subpad_number).
//    For example, to set the current pad to c1_4, one can do:
//    c1->cd(4)
//
//  Note1:  c1.cd() is equivalent to c1.cd(0) and sets the current pad
//          to c1 itself.
//  Note2:  after a statement like c1.cd(6), the global variable gPad
//          points to the current pad. One can use gPad to set attributes
//          of the current pad.
//

   TPad *padsav = (TPad*)gPad;
   cd();
   if (nx <= 0) nx = 1;
   if (ny <= 0) ny = 1;
   Int_t ix,iy;
   Float_t x1,y1,x2,y2;
   Float_t dy = 1/Float_t(ny);
   Float_t dx = 1/Float_t(nx);
   TPad *pad;
   char *name = new char [strlen(GetName())+6];
   Int_t n = 0;
   if (color == 0) color = GetFillColor();
   for (iy=0;iy<ny;iy++) {
      y2 = 1 - iy*dy - ymargin;
      y1 = y2 - dy + 2*ymargin;
      if (y1 < 0) y1 = 0;
      if (y1 > y2) continue;
      for (ix=0;ix<nx;ix++) {
         x1 = ix*dx + xmargin;
         x2 = x1 +dx -2*xmargin;
         if (x1 > x2) continue;
         n++;
         sprintf(name,"%s_%d",GetName(),n);
         pad = new TPad(name,name,x1,y1,x2,y2,color);
         pad->SetNumber(n);
         pad->Draw();
      }
   }
   delete [] name;
   Modified();
   padsav->cd();
}

//______________________________________________________________________________
void TPad::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*Draw Pad in Current pad (re-parent pad if necessary)*-*-*-*
//*-*              ====================================================

   // if no canvas opened yet create a default canvas
   if (!gPad) {
      if (!gROOT->GetMakeDefCanvas()) return;
      (gROOT->GetMakeDefCanvas())();
   }

   // pad cannot be in itself and it can only be in one other pad at a time
   if (gPad != this) {
      if (fMother) fMother->GetListOfPrimitives()->Remove(this);
      TPad *oldMother = fMother;
      fCanvas = gPad->GetCanvas();
      fMother = (TPad*)gPad;
      if (oldMother != fMother || fPixmapID == -1) ResizePad();
   }

   Paint();

   if (gPad->IsRetained() && gPad != this && fMother)
      fMother->GetListOfPrimitives()->Add(this, option);
}

//______________________________________________________________________________
void TPad::DrawClassObject(TObject *classobj, Option_t *option)
{
   // Draw class inheritance tree of the class to which obj belongs.
   // If a class B inherits from a class A, description of B is drawn
   // on the right side of description of A.
   // Member functions overridden by B are shown in class A with a blue line
   // crossing-out the corresponding member function.
   // The following picture is the class inheritance tree of class TPaveLabel:
   //Begin_Html
   /*
   <img src="gif/drawclass.gif">
   */
   //End_Html

   char dname[256];
   const Int_t MAXLEVELS = 10;
   TClass *clevel[MAXLEVELS], *cl, *cll;
   TBaseClass *base, *cinherit;
   TText *ptext = 0;
   TString opt=option;
   Float_t x,y,dy,y1,v1,v2,dv;
   Int_t nd,nf,nc,nkd,nkf,i,j;
   TPaveText *pt;
   Int_t maxlev = 4;
   if (opt.Contains("2")) maxlev = 2;
   if (opt.Contains("3")) maxlev = 3;
   if (opt.Contains("5")) maxlev = 5;
   if (opt.Contains("6")) maxlev = 6;
   if (opt.Contains("7")) maxlev = 7;

      // Clear and Set Pad range
   Float_t xpad = 20.5;
   Float_t ypad = 27.5;
   Clear();
   Range(0,0,xpad,ypad);

   // Find number of levels
   Int_t nlevel = 0;
   TClass *obj = (TClass*)classobj;
   clevel[nlevel] = obj;
   TList *lbase = obj->GetListOfBases();
   while(lbase) {
      base = (TBaseClass*)lbase->First();
      if (!base) break;
      if ( base->GetClassPointer() == 0) break;
      nlevel++;
      clevel[nlevel] = base->GetClassPointer();
      lbase = clevel[nlevel]->GetListOfBases();
      if (nlevel >= maxlev-1) break;
   }
   Int_t maxelem = 0;
   Int_t ncdraw  = 0;
   Int_t ilevel, nelem;
   for (ilevel=nlevel;ilevel>=0;ilevel--) {
      cl = clevel[ilevel];
      nelem = cl->GetNdata() + cl->GetNmethods();
      if (nelem > maxelem) maxelem = nelem;
      nc = (nelem/50) + 1;
      ncdraw += nc;
   }

   Float_t tsizcm = 0.40;
   Float_t x1 = 0.25;
   Float_t x2 = 0;
   Float_t dx = 3.5;
   if (ncdraw > 4) {
      dx = dx - 0.42*Float_t(ncdraw-5);
      tsizcm = tsizcm - 0.03*Float_t(ncdraw-5);
   }
   Float_t tsiz = 1.2*tsizcm/ypad;

   // Now loop on levels
   for (ilevel=nlevel;ilevel>=0;ilevel--) {
      cl    = clevel[ilevel];
      nelem = cl->GetNdata() + cl->GetNmethods();
      if (nelem > maxelem) maxelem = nelem;
      nc    = (nelem/50) + 1;
      dy    = 0.45;
      if (ilevel < nlevel) x1 = x2 + 0.5;
      x2    = x1 + nc*dx;
      v2    = ypad - 0.5;
      lbase = cl->GetListOfBases();
      cinherit = 0;
      if (lbase) cinherit = (TBaseClass*)lbase->First();

      do {
         nd = cl->GetNdata();
         nf = cl->GetNmethods() - 2; //do not show default constructor and destructor
         if (cl->GetListOfMethods()->FindObject("Dictionary")) {
            nf -= 6;  // do not count the Dictionary/ClassDef functions
         }
         nkf= nf/nc +1;
         nkd= nd/nc +1;
         if (nd == 0) nkd=0;
         if (nf == 0) nkf=0;
         y1 = v2 - 0.7;
         v1 = y1 - Float_t(nkf+nkd+nc-1)*dy;
         dv = v2 - v1;

         // Create a new PaveText
         pt = new TPaveText(x1,v1,x2,v2);
         pt->SetBit(kCanDelete);
         pt->SetFillColor(19);
         pt->Draw();
         pt->SetTextColor(4);
         pt->SetTextFont(61);
         pt->SetTextAlign(12);
         pt->SetTextSize(tsiz);
         TBox *box = pt->AddBox(0,(y1+0.01-v1)/dv,0,(v2-0.01-v1)/dv);
         box->SetFillColor(17);
         pt->AddLine(0,(y1-v1)/dv,0,(y1-v1)/dv);
         TText *title = pt->AddText(0.5,(0.5*(y1+v2)-v1)/dv,(char*)cl->GetName());
         title->SetTextAlign(22);
         title->SetTextSize(0.6*(v2-y1)/ypad);

         // Draw data Members
         i = 0;
         x = 0.03;
         y = y1 + 0.5*dy;
         TDataMember *d;
         TIter        nextd(cl->GetListOfDataMembers());
         while ((d = (TDataMember *) nextd())) {
            if (i >= nkd) { i = 1; y = y1 - 0.5*dy; x += 1/Float_t(nc); }
            else { i++; y -= dy; }

            // Take in account the room the array index will occupy

            Int_t dim = d->GetArrayDim();
            Int_t indx = 0;
            sprintf(dname,"%s",obj->EscapeChars((char*)d->GetName()));
            Int_t ldname = 0;
            while (indx < dim ){
               ldname = strlen(dname);
               sprintf(&dname[ldname],"[%d]",d->GetMaxIndex(indx));
               indx++;
            }
            ptext = pt->AddText(x,(y-v1)/dv,dname);
         }

         // Draw a separator line
         Float_t ysep;
         if (nd) {
            ysep = y1 - Float_t(nkd)*dy;
            pt->AddLine(0,(ysep-v1)/dv,0,(ysep-v1)/dv);
            ysep -= 0.5*dy;
         } else  ysep = y1;

         // Draw Member Functions
         Int_t fcount = 0;
         i = 0;
         x = 0.03;
         y = ysep + 0.5*dy;
         TMethod *m;
         TIter        nextm(cl->GetListOfMethods());
         while ((m = (TMethod *) nextm())) {
            if (
               !strcmp( m->GetName(), "Dictionary"    ) ||
               !strcmp( m->GetName(), "Class_Version" ) ||
               !strcmp( m->GetName(), "DeclFileName"  ) ||
               !strcmp( m->GetName(), "DeclFileLine"  ) ||
               !strcmp( m->GetName(), "ImplFileName"  ) ||
               !strcmp( m->GetName(), "ImplFileLine"  )
            ) continue;
            fcount++;
            if (fcount > nf) break;
            if (i >= nkf) { i = 1; y = ysep - 0.5*dy; x += 1/Float_t(nc); }
            else { i++; y -= dy; }
            ptext = pt->AddText(x,(y-v1)/dv,obj->EscapeChars((char*)m->GetName()));

            // Check if method is overloaded in a derived class
            // If yes, Change the color of the text to blue
            for (j=ilevel-1;j>=0;j--) {
               if (cl == clevel[ilevel]) {
                  if (clevel[j]->GetMethodAny((char*)m->GetName())) {
                     ptext->SetTextColor(15);
                     break;
                  }
               }
            }
         }

         // Draw second inheritance classes for this class
         cll = 0;
         if (cinherit) {
            cinherit = (TBaseClass*)lbase->After(cinherit);
            if (cinherit) {
               cl  = cinherit->GetClassPointer();
               cll = cl;
               v2  = v1 -0.4;
               dy  = 0.35;
            }
         }
      } while (cll);
   }
   Update();
}

//______________________________________________________________________________
TH1F *TPad::DrawFrame(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax, Text_t *title)
{
//  Draw a pad frame
//  Compute real pad range taking into account all margins
//  Use services of TH1F class

   TH1F *hframe = (TH1F*)GetPrimitive("hframe");
   if (hframe) delete hframe;
   hframe = new TH1F("hframe",title,100,xmin,xmax);
   hframe->SetBit(kNoStats);
   hframe->SetMinimum(ymin);
   hframe->SetMaximum(ymax);
   hframe->SetDirectory(0);
   hframe->Draw();
   Update();
   return hframe;
}

//______________________________________________________________________________
void TPad::DrawLine(Float_t x1, Float_t y1, Float_t x2, Float_t y2)
{
//*-*-*-*-*-*-*-*-*Draw line in CurrentPad World coordinates*-*-*-*-*-*-*-*
//*-*              =========================================

   Int_t px1 = gPad->XtoPixel(x1);
   Int_t px2 = gPad->XtoPixel(x2);
   Int_t py1 = gPad->YtoPixel(y1);
   Int_t py2 = gPad->YtoPixel(y2);

   gGXW->DrawLine(px1, py1, px2, py2);
}

//______________________________________________________________________________
void TPad::DrawLineNDC(Float_t u1, Float_t v1, Float_t u2, Float_t v2)
{
//*-*-*-*-*-*-*-*-*Draw line in CurrentPad NDC coordinates*-*-*-*-*-*-*-*
//*-*              =======================================

   Int_t px1 = gPad->UtoPixel(u1);
   Int_t px2 = gPad->UtoPixel(u2);
   Int_t py1 = gPad->VtoPixel(v1);
   Int_t py2 = gPad->VtoPixel(v2);

   gGXW->DrawLine(px1, py1, px2, py2);
}

//______________________________________________________________________________
void TPad::DrawText(Float_t x, Float_t y, const Text_t *text)
{
//*-*-*-*-*-*-*-*-*Draw text in CurrentPad World coordinates*-*-*-*-*-*-*-*
//*-*              =========================================

   Int_t px = gPad->XtoPixel(x);
   Int_t py = gPad->YtoPixel(y);

   Float_t angle = gGXW->GetTextAngle();
   Float_t mgn   = gGXW->GetTextSize();
   gGXW->DrawText(px, py, angle, mgn, text, TGXW::kClear);
}

//______________________________________________________________________________
void TPad::DrawTextNDC(Float_t u, Float_t v, const Text_t *text)
{
//*-*-*-*-*-*-*-*-*Draw text in CurrentPad NDC coordinates*-*-*-*-*-*-*-*
//*-*              =======================================

   Int_t px = gPad->UtoPixel(u);
   Int_t py = gPad->VtoPixel(v);

   Float_t angle = gGXW->GetTextAngle();
   Float_t mgn   = gGXW->GetTextSize();
   gGXW->DrawText(px, py, angle, mgn, text, TGXW::kClear);
}

//______________________________________________________________________________
void TPad::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function must be implemented to realize the action
//  corresponding to the mouse click on the object in the canvas
//

   static Float_t xmin;
   static Float_t xmax;
   static Float_t ymin;
   static Float_t ymax;

   static Int_t pxorg, pyorg;

   HideToolTip(event);

   // keep old range and mouse position
   if (event == kButton1Down) {
      xmin = fX1;
      xmax = fX2;
      ymin = fY1;
      ymax = fY2;

      pxorg = px;
      pyorg = py;
   }

   Int_t newcode = gROOT->GetEditorMode();
   switch (newcode) {
      case kPad:
         CreateNewPad(event,px,py);
         break;
      case kText:
#ifndef WIN32
         CreateNewText(event,px,py);
#else
        {
         char cmd[]="((TPad *)0x1234567890123456)->CreateNewText(xx,xxxx,xxxx);";
         sprintf(cmd,"((TPad *)%#16x)->CreateNewText(%2i,%4i,%4i);",
                                       this,                event, px, py);
         if (event == kButton1Down) gROOT->SetEditorMode();
         gInterpreter->ProcessLine(cmd);
        }
#endif
         break;
      case kPolyLine:
         CreateNewPolyLine(event,px,py,kPolyLine);
         break;
      case kCutG:
         CreateNewPolyLine(event,px,py,kCutG);
         break;
      case kArc:
         CreateNewEllipse(event,px,py,kArc);
         break;
      case kArrow:
         CreateNewArrow(event,px,py);
         break;
      case kEllipse:
         CreateNewEllipse(event,px,py,kEllipse);
         break;
      case kButton:
      case kPave:
      case kPaveLabel:
      case kPaveText:
      case kPavesText:
      case kDiamond:
#ifdef WIN32
         if (newcode == kPaveLabel || newcode == kButton) {
           char cmd[]= "((TPad *)0x1234567890123456)->CreateNewPave(xx,xxxx,xxxx,xx);";
           sprintf(cmd,"((TPad *)%#16x)->CreateNewPave(%2i,%4i,%4i,%2i);",
                                         this,                event, px, py,newcode);
           if (event == kButton1Up) gROOT->SetEditorMode();
           gInterpreter->ProcessLine(cmd);
         }
         else
#endif
           CreateNewPave(event,px,py,newcode);
         return;
      default:
         break;
      }
      if (newcode) return;

   Bool_t doing_again = kFALSE;
again:

   switch (event) {

   case kMouseEnter:
   case kMouseMotion:

      TWbox::ExecuteEvent(event, px, py);
      break;

   case kButton1Down:

#ifdef WIN32
      Pop(); //this should be for cases where mouse has only two buttons
#endif
      TWbox::ExecuteEvent(event, px, py);
      break;

   case kButton1Motion:

      TWbox::ExecuteEvent(event, px, py);

      if ((!IsBeingResized() && gPad->OpaqueMoving()) ||
           (IsBeingResized() && gPad->OpaqueResizing())) {
         event = kButton1Up;
         doing_again = kTRUE;
         goto again;
      }

      break;

   case kButton1Up:

      if (!doing_again)
         TWbox::ExecuteEvent(event, px, py);

      if (px != pxorg || py != pyorg) {

         // Get parent corners pixels coordinates
         TPad *parent = fMother;
         Int_t parentpx1 = parent->XtoAbsPixel(parent->GetX1());
         Int_t parentpx2 = parent->XtoAbsPixel(parent->GetX2());
         Int_t parentpy1 = parent->YtoAbsPixel(parent->GetY1());
         Int_t parentpy2 = parent->YtoAbsPixel(parent->GetY2());

         // Get pad new corners pixels coordinates
         Int_t px1 = XtoAbsPixel(fX1); if (px1 < parentpx1) {px1 = parentpx1; }
         Int_t px2 = XtoAbsPixel(fX2); if (px2 > parentpx2) {px2 = parentpx2; }
         Int_t py1 = YtoAbsPixel(fY1); if (py1 > parentpy1) {py1 = parentpy1; }
         Int_t py2 = YtoAbsPixel(fY2); if (py2 < parentpy2) {py2 = parentpy2; }

         // Compute new pad positions in the NDC space of parent
         fXlowNDC = Float_t(px1 - parentpx1)/Float_t(parentpx2 - parentpx1);
         fYlowNDC = Float_t(py1 - parentpy1)/Float_t(parentpy2 - parentpy1);
         fWNDC    = Float_t(px2 - px1)/Float_t(parentpx2 - parentpx1);
         fHNDC    = Float_t(py2 - py1)/Float_t(parentpy2 - parentpy1);
      }

      // Restore old range
      fX1 = xmin;
      fX2 = xmax;
      fY1 = ymin;
      fY2 = ymax;

      // Reset pad parameters and recompute conversion coefficients
      ResizePad();

      break;

   case kButton1Locate:

      TWbox::ExecuteEvent(event, px, py);

      break;

   case kButton2Down:

      Pop();
      break;

   }
}

//______________________________________________________________________________
Int_t TPad::GetCanvasID() const
{
   return fCanvas->GetCanvasID();
}

//______________________________________________________________________________
Int_t TPad::GetEvent() const
{
   return fCanvas->GetEvent();
}

//______________________________________________________________________________
Int_t TPad::GetEventX() const
{
   return fCanvas->GetEventX();
}

//______________________________________________________________________________
Int_t TPad::GetEventY() const
{
   return fCanvas->GetEventY();
}

//______________________________________________________________________________
TVirtualPad *TPad::GetVirtCanvas()
{
   return (TVirtualPad*) fCanvas;
}

//______________________________________________________________________________
Color_t TPad::GetHighLightColor() const
{
   return fCanvas->GetHighLightColor();
}

//______________________________________________________________________________
TObject *TPad::GetSelected()
{
   return fCanvas->GetSelected();
}

//______________________________________________________________________________
TVirtualPad *TPad::GetSelectedPad() const
{
   return fCanvas->GetSelectedPad();
}

//______________________________________________________________________________
TVirtualPad *TPad::GetPadSave() const
{
   return fCanvas->GetPadSave();
}

//______________________________________________________________________________
UInt_t TPad::GetWh()
{
   return fCanvas->GetWh();
}

//______________________________________________________________________________
UInt_t TPad::GetWw()
{
   return fCanvas->GetWw();
}

//______________________________________________________________________________
Bool_t TPad::IsBatch()
{
   return fCanvas->IsBatch();
}

//______________________________________________________________________________
Bool_t TPad::IsRetained()
{
   return fCanvas->IsRetained();
}

//______________________________________________________________________________
Bool_t TPad::OpaqueMoving() const
{
   return fCanvas->OpaqueMoving();
}

//______________________________________________________________________________
Bool_t TPad::OpaqueResizing() const
{
   return fCanvas->OpaqueResizing();
}

//______________________________________________________________________________
void TPad::SetCanvasSize(UInt_t ww, UInt_t wh)
{
   fCanvas->SetCanvasSize(ww,wh);
}

//______________________________________________________________________________
void TPad::SetCursor(ECursor cursor)
{
   fCanvas->SetCursor(cursor);
}

//______________________________________________________________________________
void TPad::SetDoubleBuffer(Int_t mode)
{
   fCanvas->SetDoubleBuffer(mode);
}

//______________________________________________________________________________
void TPad::SetSelected(TObject *obj)
{
   fCanvas->SetSelected(obj);
}

//______________________________________________________________________________
void TPad::Update()
{
   fCanvas->Update();
}

//______________________________________________________________________________
TFrame *TPad::GetFrame()
{
   if (fFrame && !GetListOfPrimitives()->FindObject(fFrame)) fFrame = 0;
   if (!fFrame) {
      fFrame = new TFrame(0,0,1,1);
      Int_t framecolor = GetFrameFillColor();
      if (!framecolor) framecolor = GetFillColor();
      fFrame->SetFillColor(framecolor);
      fFrame->SetFillStyle(GetFrameFillStyle());
      fFrame->SetLineColor(GetFrameLineColor());
      fFrame->SetLineStyle(GetFrameLineStyle());
      fFrame->SetLineWidth(GetFrameLineWidth());
      fFrame->SetBorderSize(GetFrameBorderSize());
      fFrame->SetBorderMode(GetFrameBorderMode());
   }
   return fFrame;
}

//______________________________________________________________________________
TObject *TPad::GetPrimitive(const Text_t *name)
{
   if (fPrimitives) return fPrimitives->FindObject(name);
   return 0;
}

//______________________________________________________________________________
void TPad::GetRange(Float_t &x1, Float_t &y1, Float_t &x2, Float_t &y2)
{
//*-*-*-*-*-*-*-*Return pad world coordinates range*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ==================================
  x1 = fX1;
  y1 = fY1;
  x2 = fX2;
  y2 = fY2;
}

//______________________________________________________________________________
void TPad::GetRangeAxis(Axis_t &xmin, Axis_t &ymin, Axis_t &xmax, Axis_t &ymax)
{
//*-*-*-*-*-*-*-*Return pad axis coordinates range*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ==================================
  xmin = fUxmin;
  ymin = fUymin;
  xmax = fUxmax;
  ymax = fUymax;
}

//______________________________________________________________________________
void TPad::HighLight(Color_t color, Bool_t set)
{
   AbsCoordinates(kTRUE);

   // We do not want to have active(executable) buttons, etc highlighted
   // in this manner, unless we want to edit'em
   if (GetCanvas()->IsEditable() && !InheritsFrom(TButton::Class())) {
      if (set)
         PaintFrame(fX1, fY1, fX2, fY2, color, fBorderSize, fBorderMode, kFALSE);
      else
         PaintFrame(fX1, fY1, fX2, fY2, GetFillColor(), fBorderSize, fBorderMode,
                 kFALSE);
   }

   AbsCoordinates(kFALSE);
}

//______________________________________________________________________________
void TPad::InspectObject(TObject *obj)
{
   // Dump contents of obj in a graphics canvas.
   // Same action as TObject::Dump but in a graphical form.
   // In addition pointers to other objects can be followed.
   //
   // The following picture is the Inspect of a histogram object:
   //Begin_Html
   /*
   <img src="gif/hpxinspect.gif">
   */
   //End_Html

   Int_t cdate = 0;
   Int_t ctime = 0;
   UInt_t *cdatime = 0;
   Bool_t isdate = kFALSE;
   const Int_t kname  = 1;
   const Int_t kvalue = 25;
   const Int_t ktitle = 37;
   const Int_t kline  = 255;
   char line[kline];
   char *pname;

   TClass *cl = obj->IsA();
   if (cl == 0) return;
   if (!cl->GetListOfRealData()) cl->BuildRealData();

   // Count number of data members in order to resize the canvas
   TRealData *rd;
   TIter      next(cl->GetListOfRealData());
   Int_t nreal = cl->GetListOfRealData()->GetSize();

   if (nreal == 0) return;

   Int_t nrows = 33;
   if (nreal+7 > nrows) nrows = nreal+7;
   Int_t nh = nrows*15;
   Int_t nw = 700;
   TVirtualPad *canvas = GetVirtCanvas();
   canvas->Clear();                // remove primitives from canvas
   canvas->SetCanvasSize(nw, nh);  // set new size of drawing area
   canvas->Range(0,-3,20,nreal+4);

   Float_t xvalue = 5;
   Float_t xtitle = 8;
   Float_t dy     = 1;
   Float_t ytext  = Float_t(nreal) - 0.5;
   Float_t tsize  = 0.99/ytext;
   if (tsize > 0.0333) tsize = 0.033;

   // Create text objects
   TText *tname  = new TText();
   TText *tvalue = new TText();
   TText *ttitle = new TText();
   TText *tval;
   tname->SetTextFont(61);
   tname->SetTextAngle(0);
   tname->SetTextAlign(12);
   tname->SetTextColor(1);
   tname->SetTextSize(tsize);
   tvalue->SetTextFont(61);
   tvalue->SetTextAngle(0);
   tvalue->SetTextAlign(12);
   tvalue->SetTextColor(1);
   tvalue->SetTextSize(tsize);
   ttitle->SetTextFont(62);
   ttitle->SetTextAngle(0);
   ttitle->SetTextAlign(12);
   ttitle->SetTextColor(1);
   ttitle->SetTextSize(tsize);

   // Draw surrounding box and title areas
   Float_t x1 = 0.2;
   Float_t x2 = 19.8;
   Float_t y1 = 0.5;
   Float_t y2 = Float_t(nreal) + 0.5;
   Float_t y3 = y2 + 1;
   Float_t y4 = y3 + 1.5;
   TLine *frame   = new TLine();
   frame->SetLineColor(1);
   frame->SetLineStyle(1);
   frame->SetLineWidth(1);
   frame->DrawLine(x1, y1, x2, y1);
   frame->DrawLine(x2, y1, x2, y4);
   frame->DrawLine(x2, y4, x1, y4);
   frame->DrawLine(x1, y4, x1, y1);
   frame->DrawLine(x1, y2, x2, y2);
   frame->DrawLine(x1, y3, x2, y3);
   frame->DrawLine(xvalue, y1, xvalue, y3);
   frame->DrawLine(xtitle, y1, xtitle, y3);
   ttitle->SetTextSize(0.8*tsize);
   ttitle->SetTextAlign(21);
   ttitle->DrawText(0.5*(x1+xvalue), y2+0.1, "Member Name");
   ttitle->DrawText(0.5*(xvalue+xtitle), y2+0.1, "Value");
   ttitle->DrawText(0.5*(xtitle+x2), y2+0.1, "Title");
   ttitle->SetTextSize(1.2*tsize);
   ttitle->SetTextColor(2);
   ttitle->SetTextAlign(11);
   ttitle->DrawText(x1+0.2, y3+0.1, cl->GetName());
   ttitle->SetTextColor(4);
   sprintf(line,"%s:%d",obj->GetName(),obj->GetUniqueID());
   ttitle->DrawText(xvalue+0.2, y3+0.1, line);
   ttitle->SetTextColor(6);
   ttitle->DrawText(xtitle+2, y3+0.1, obj->GetTitle());
   ttitle->SetTextSize(tsize);
   ttitle->SetTextColor(1);
   ttitle->SetTextFont(11);
   ttitle->SetTextAlign(12);

   //---Now loop on data members-----------------------
   // We make 3 passes. Faster than one single pass because changing
   // font parameters is time consuming
   for (Int_t pass = 0; pass < 3; pass++) {
      ytext  = y2 - 0.5;
      next.Reset();
      while ((rd = (TRealData*) next())) {
         TDataMember *member = rd->GetDataMember();
         if (!member) continue;
         TDataType *membertype = member->GetDataType();
         isdate = kFALSE;
         if (strcmp(member->GetName(),"fDatime") == 0 && strcmp(member->GetTypeName(),"UInt_t") == 0) {
            isdate = kTRUE;
         }

         // Encode data member name
         pname = &line[kname];
         for (Int_t i=0;i<kline;i++) line[i] = ' ';
         line[kline-1] = 0;
         sprintf(pname,"%s ",rd->GetName());

         // Encode data value or pointer value
         tval = tvalue;
         Int_t offset = rd->GetThisOffset();
         char *pointer = (char*)obj + offset;
         char **ppointer = (char**)(pointer);
         TLink *tlink = 0;

         if (member->IsaPointer()) {
            char **p3pointer = (char**)(*ppointer);
            if (!p3pointer) {
               sprintf(&line[kvalue],"->0");
            } else if (!member->IsBasic()) {
               if (pass == 1) tlink = new TLink(xvalue+0.1, ytext, p3pointer);
            } else if (membertype) {
               if (!strcmp(membertype->GetTypeName(), "char"))
                  sprintf(&line[kvalue], "%s", *ppointer);
               else
                  strcpy(&line[kvalue], membertype->AsString(p3pointer));
            } else if (!strcmp(member->GetFullTypeName(), "char*") ||
                     !strcmp(member->GetFullTypeName(), "const char*")) {
               sprintf(&line[kvalue], "%s", *ppointer);
            } else {
               if (pass == 1) tlink = new TLink(xvalue+0.1, ytext, p3pointer);
            }
         } else if (membertype)
            if (isdate) {
               cdatime = (UInt_t*)pointer;
               TDatime::GetDateTime(cdatime[0],cdate,ctime);
               sprintf(&line[kvalue],"%d/%d",cdate,ctime);
            } else {
               strcpy(&line[kvalue], membertype->AsString(pointer));
            }
         else
            sprintf(&line[kvalue],"->%lx ", (Long_t)pointer);

         // Encode data member title
         Int_t ltit = 0;
         if (isdate == kFALSE && strcmp(member->GetFullTypeName(), "char*") &&
             strcmp(member->GetFullTypeName(), "const char*")) {
            Int_t lentit = strlen(member->GetTitle());
            if (lentit >= kline-ktitle) lentit = kline-ktitle-1;
            strncpy(&line[ktitle],member->GetTitle(),lentit);
            line[ktitle+lentit] = 0;
            ltit = ktitle;
         }

         // Ready to draw the name, value and title columns
         if (pass == 0)tname->DrawText( x1+0.1,  ytext, &line[kname]);
         if (pass == 1) {
            if (tlink) {
               tlink->SetTextFont(61);
               tlink->SetTextAngle(0);
               tlink->SetTextAlign(12);
               tlink->SetTextColor(2);
               tlink->SetTextSize(tsize);
               tlink->SetName((char *)member->GetTypeName());
               tlink->SetBit(kCanDelete);
               tlink->Draw();
            } else tval->DrawText(xvalue+0.1, ytext, &line[kvalue]);
         }
         if (pass == 2 && ltit) ttitle->DrawText(xtitle+0.3, ytext, &line[ltit]);
         ytext -= dy;
      }
   }
   Update();
   delete frame;
   delete tname;
   delete tvalue;
   delete ttitle;
}

//______________________________________________________________________________
void TPad::ls(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*List all primitives in pad*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ==========================
   IndentLevel();
   cout <<IsA()->GetName()<<" fXlowNDC=" <<fXlowNDC<<" fYlowNDC="<<fYlowNDC<<" fWNDC="<<GetWNDC()<<" fHNDC="<<GetHNDC()
        <<" Name= "<<GetName()<<" Title= "<<GetTitle()<<" Option="<<option<<endl;
   TObject::IncreaseDirLevel();
   fPrimitives->ls(option);
   TObject::DecreaseDirLevel();
}

//______________________________________________________________________________
Float_t TPad::PadtoX(Axis_t x) const
{
   if (fLogx && x < 50) return Float_t(TMath::Exp(2.302585092994*x));
   return x;
}

//______________________________________________________________________________
Float_t TPad::PadtoY(Axis_t y) const
{
   if (fLogy && y < 50) return Float_t(TMath::Exp(2.302585092994*y));
   return y;
}

//______________________________________________________________________________
Float_t TPad::XtoPad(Axis_t x) const
{
   if (fLogx) {
      if (x > 0) x = TMath::Log10(x);
      else       x = fUxmin;
   }
   return x;
}

//______________________________________________________________________________
Float_t TPad::YtoPad(Axis_t y) const
{
   if (fLogy) {
      if (y > 0) y = TMath::Log10(y);
      else       y = fUymin;
   }
   return y;
}

//______________________________________________________________________________
void TPad::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*Paint all primitives in pad*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ===========================

   TPad *padsav = (TPad*)gPad;

   fPadPaint = 1;
   cd();
//*-*   TView must be drawn here (is TView contains OpenGL context)

//*-*   Start OpenGL Model if present
   if (fPadView3D)
        fPadView3D->PaintBeginModel(option);
//   else
   TWbox::Paint(option);

   if (fPrimitives) fPrimitives->Paint(option);

   if (fPadView3D)
   {
//*-*   Finish 3D Model
       fPadView3D->PaintEnd(option);
//*-*   Start 3D scene
       fPadView3D->PaintScene(option);
   }

   padsav->cd();
   fPadPaint = 0;
   Modified(kFALSE);
}

//______________________________________________________________________________
void TPad::PaintPadFrame(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax)
{
//*-*-*-*-*-*-*-*-*-*Paint histogram/graph frame*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ===========================

   TList *glist  = GetListOfPrimitives();
   TFrame *frame = GetFrame();
   frame->SetX1(xmin);
   frame->SetX2(xmax);
   frame->SetY1(ymin);
   frame->SetY2(ymax);
   if (!glist->FindObject(fFrame)) {
      glist->AddFirst(frame);
      fFrame->SetBit(kObjInCanvas);
   }
   frame->Paint();
}

//______________________________________________________________________________
void TPad::PaintModified()
{
//*-*-*-*-*-*-*Traverse pad hierarchy and (re)paint only modified pads*-*-*-*
//*-*          =======================================================

   TPad *padsav = (TPad*)gPad;
   TPostScript *saveps = gCurrentPS;
   if (gCurrentPS) {
      if (gCurrentPS->TestBit(kPrintingPS)) gCurrentPS = 0;
   }
   fPadPaint = 1;
   cd();
   if (IsModified() || IsTransparent()) {
       if (fPadView3D)
           fPadView3D->PaintBeginModel();
       TWbox::Paint();
   }

   TIter next(GetListOfPrimitives());
   TObject *obj;

   while ((obj = next())) {
      if (obj->InheritsFrom(TPad::Class())) {
         ((TPad*)obj)->PaintModified();
      } else if (IsModified() || IsTransparent()) {
         obj->Paint((Option_t *)next.GetOption());
      }
   }

   if (IsModified() && fPadView3D)
   {
       fPadView3D->PaintEnd();
       fPadView3D->PaintScene();
   }

   if (padsav) padsav->cd();
   fPadPaint = 0;
   Modified(kFALSE);
   gCurrentPS = saveps;
}

//______________________________________________________________________________
void TPad::PaintBox(Float_t x1, Float_t y1, Float_t x2, Float_t y2, Option_t *)
{
//*-*-*-*-*-*-*-*-*Paint box in CurrentPad World coordinates*-*-*-*-*-*-*-*-*-*
//*-*              =========================================

   if (!gPad->IsBatch()) {
      Int_t px1 = XtoPixel(x1);
      Int_t px2 = XtoPixel(x2);
      Int_t py1 = YtoPixel(y1);
      Int_t py2 = YtoPixel(y2);

      Int_t style = gGXW->GetFillStyle();
      if (style) {
         if (style > 3000 && style < 4000) {
#ifndef WIN32
            if (style < 3020) {
               // set solid background color
               gGXW->SetFillStyle(1001);
               gGXW->DrawBox(px1,py1,px2,py2,TGXW::kFilled);
            }

            if (style > 3100) {
               char gifname[32];
               sprintf(gifname,"gif%d",style);
               TNamed *gifnamed = (TNamed*)gROOT->GetListOfSpecials()->FindObject(gifname);
               if (gifnamed) gGXW->ReadGIF(px1,py2,gifnamed->GetTitle());
            }
            if (style > 3020 && style < 3100) {
               gGXW->SetFillStyle(style-10);
            } else {
               gGXW->SetFillColor(1);
               gGXW->SetFillStyle(style);
            }
#endif
            // draw stipples
            gGXW->DrawBox(px1,py1,px2,py2,TGXW::kFilled);

         } else if (style >= 4000 && style <= 4100) {
            // For style >=4000 we make the window transparent.
            // From 4000 to 4100 the window is 100% transparent to 100% opaque

            //ignore this style option when this is the canvas itself
            if (this == fMother)
               gGXW->DrawBox(px1,py1,px2,py2,TGXW::kFilled);
            else {
               //draw background by blitting all bottom pads
               int px, py;
               XYtoAbsPixel(GetX1(), GetY2(), px, py);

               fMother->CopyBackgroundPixmap(px, py);
               CopyBackgroundPixmaps(fMother, this, px, py);

               gGXW->SetOpacity(style-4000);
            }
         } else {
            gGXW->DrawBox(px1,py1,px2,py2,TGXW::kFilled);
         }
      } else {
         gGXW->DrawBox(px1,py1,px2,py2,TGXW::kHollow);
      }
   }

   if (gCurrentPS) {
      gCurrentPS->DrawBox(x1, y1, x2, y2);
   }

   Modified();
}

//______________________________________________________________________________
void TPad::CopyBackgroundPixmaps(TPad *start, TPad *stop, Int_t x, Int_t y)
{
   // Copy pixmaps of pads laying below pad "stop" into pad "stop". This
   // gives the effect of pad "stop" being transparent.

   TObject *obj;
   TIter next(start->GetListOfPrimitives());
   while ((obj = next())) {
      if (obj->InheritsFrom(TPad::Class())) {
         if (obj == stop) break;
         ((TPad*)obj)->CopyBackgroundPixmap(x, y);
         ((TPad*)obj)->CopyBackgroundPixmaps((TPad*)obj, stop, x, y);
      }
   }
}

//______________________________________________________________________________
void TPad::CopyBackgroundPixmap(Int_t x, Int_t y)
{
   // Copy pixmap of this pad as background of the current pad.

   int px, py;
   XYtoAbsPixel(GetX1(), GetY2(), px, py);
   gGXW->CopyPixmap(GetPixmapID(), px-x, py-y);
}

//______________________________________________________________________________
void TPad::PaintFillArea(Int_t n, Float_t *x, Float_t *y, Option_t *)
{
//*-*-*-*-*-*-*-*-*Paint fill area in CurrentPad World coordinates*-*-*-*-*-*-*
//*-*              ===============================================

   TPoint *pxy;

//*-*- Create temporary array to store array in pixel coordinates
   if (n <=0) return;

   if (!gPad->IsBatch()) {
      if (n <kPXY) pxy = &gPXY[0];
      else         pxy = new TPoint[n+1];
//*-*- convert points from world to pixel coordinates
      for (Int_t i=0;i<n;i++) {
         pxy[i].fX = gPad->XtoPixel(x[i]);
         pxy[i].fY = gPad->YtoPixel(y[i]);
      }
//*-*- invoke the graphics subsystem
      if (gGXW->GetFillStyle() == 0) {
         pxy[n].fX = pxy[0].fX;
         pxy[n].fY = pxy[0].fY;
         gGXW->DrawFillArea(n+1,pxy);
      } else {
         gGXW->DrawFillArea(n,pxy);
      }
      if (n > kPXY) delete [] pxy;
   }

   if (gCurrentPS) {
      gCurrentPS->DrawPS(-n, x, y);
   }

   Modified();

}

//______________________________________________________________________________
void TPad::PaintLine(Float_t x1, Float_t y1, Float_t x2, Float_t y2)
{
//*-*-*-*-*-*-*-*-*Paint line in CurrentPad World coordinates*-*-*-*-*-*-*-*
//*-*              ==========================================

   Float_t x[2], y[2];
   x[0] = x1;   x[1] = x2;   y[0] = y1;   y[1] = y2;

   //If line is totally clipped, return
   if (TestBit(kClipFrame)) {
      if (Clip(x,y,fUxmin,fUymin,fUxmax,fUymax) == 0) return;
   } else {
      if (Clip(x,y,fX1,fY1,fX2,fY2) == 0) return;
   }
   if (!gPad->IsBatch()) {
      Int_t px1 = XtoPixel(x[0]);
      Int_t px2 = XtoPixel(x[1]);
      Int_t py1 = YtoPixel(y[0]);
      Int_t py2 = YtoPixel(y[1]);

      gGXW->DrawLine(px1, py1, px2, py2);
   }

   if (gCurrentPS) {
      gCurrentPS->DrawPS(2, x, y);
   }

   Modified();
}

//______________________________________________________________________________
void TPad::PaintLineNDC(Coord_t u1, Coord_t v1,Coord_t u2, Coord_t v2)
{
//*-*-*-*-*-*-*-*Draw a line with coordinates in NDC*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ===================================
   static Float_t xw[2], yw[2];
   if (!gPad->IsBatch()) {
      Int_t px1 = UtoPixel(u1);
      Int_t py1 = VtoPixel(v1);
      Int_t px2 = UtoPixel(u2);
      Int_t py2 = VtoPixel(v2);

      gGXW->DrawLine(px1, py1, px2, py2);
   }

   if (gCurrentPS) {
      xw[0] = GetX1() + u1*(GetX2() - GetX1());
      xw[1] = GetX1() + u2*(GetX2() - GetX1());
      yw[0] = GetY1() + v1*(GetY2() - GetY1());
      yw[1] = GetY1() + v2*(GetY2() - GetY1());
      gCurrentPS->DrawPS(2, xw, yw);
      gCurrentPS->PrintFast(2," s");
   }

   Modified();
}

//______________________________________________________________________________
void TPad::PaintLine3D(Float_t *p1, Float_t *p2)
{
//*-*-*-*-*-*-*-*-*Paint 3-D line in the CurrentPad*-*-*-*-*-*-*-*-*-*-*
//*-*              ================================

   if (!fView) return;

//*-*- convert from 3-D to 2-D pad coordinate system
   Float_t xpad[6];
   fView->WCtoNDC(p1, &xpad[0]);
   fView->WCtoNDC(p2, &xpad[3]);
   PaintLine(xpad[0],xpad[1],xpad[3],xpad[4]);
}

//______________________________________________________________________________
void TPad::PaintPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *)
{
//*-*-*-*-*-*-*-*-*Paint polyline in CurrentPad World coordinates*-*-*-*-*-*-*
//*-*              ==============================================

   for (Int_t i=0;i<n-1;i++) {
      PaintLine(x[i],y[i],x[i+1],y[i+1]);
   }

#ifdef NEVER
   TPoint *pxy;

//*-*- Create temporary array to store array in pixel coordinates
   if (n <=0) return;

   if (!gPad->IsBatch()) {
      if (n <kPXY) pxy = &gPXY[0];
      else         pxy = new TPoint[n+1];
//*-*- convert points from world to pixel coordinates
      for (Int_t i=0;i<n;i++) {
         pxy[i].fX = XtoPixel(x[i]);
         pxy[i].fY = YtoPixel(y[i]);
      }
//*-*- invoke the graphics subsystem
      gGXW->DrawPolyLine(n,pxy);
      if (n > kPXY)  delete [] pxy;
   }

   if (gCurrentPS) {
      gCurrentPS->DrawPS(n, x, y);
   }

   Modified();
#endif
}

//______________________________________________________________________________
void TPad::PaintPolyLineNDC(Int_t n, Float_t *x, Float_t *y, Option_t *)
{
//*-*-*-*-*-*-*-*-*Paint polyline in CurrentPad NDC coordinates*-*-*-*-*-*-*
//*-*              ============================================

   TPoint *pxy;

//*-*- Create temporary array to store array in pixel coordinates
   if (n <=0) return;

   if (!gPad->IsBatch()) {
      if (n <kPXY) pxy = &gPXY[0];
      else         pxy = new TPoint[n+1];
//*-*- convert points from world to pixel coordinates
      for (Int_t i=0;i<n;i++) {
         pxy[i].fX = UtoPixel(x[i]);
         pxy[i].fY = VtoPixel(y[i]);
      }
//*-*- invoke the graphics subsystem
      gGXW->DrawPolyLine(n,pxy);
      if (n > kPXY)  delete [] pxy;
   }

   if (gCurrentPS) {
      gCurrentPS->DrawPS(n, x, y);
   }

   Modified();

}


//______________________________________________________________________________
void TPad::PaintPolyLine3D(Int_t n, Float_t *p)
{
//*-*-*-*-*-*-*-*-*Paint 3-D polyline in the CurrentPad*-*-*-*-*-*-*-*-*-*-*
//*-*              ====================================

   if (!fView) return;

//*-*- Loop on each individual line

   Int_t i=3;
   while(i<3*n) {
      PaintLine3D(&p[3*i-3], &p[3*i]);
      i += 3;
   }

   Modified();
}

//______________________________________________________________________________
void TPad::PaintPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *)
{
//*-*-*-*-*-*-*-*-*Paint polymarker in CurrentPad World coordinates*-*-*-*-*-*
//*-*              ================================================

   TPoint *pxy;

   if (n <=0) return;
   Int_t i;
   if (!gPad->IsBatch()) {
      if (n <kPXY) pxy = &gPXY[0];
      else         pxy = new TPoint[n+1];
//*-*- convert points from world to pixel coordinates
      for (i=0;i<n;i++) {
         pxy[i].fX = XtoPixel(x[i]);
         pxy[i].fY = YtoPixel(y[i]);
      }
//*-*- invoke the graphics subsystem
      gGXW->DrawPolyMarker(n, pxy);
      if (n > kPXY)  delete [] pxy;
   }

   if (gCurrentPS) {
      gCurrentPS->DrawPolyMarker(n, x, y);
   }

   Modified();

}

//______________________________________________________________________________
void TPad::PaintText(Float_t x, Float_t y, const Text_t *text)
{
//*-*-*-*-*-*-*-*-*Paint text in CurrentPad World coordinates*-*-*-*-*-*-*-*
//*-*              ==========================================


   Modified();

   if (!gPad->IsBatch()) {
      Int_t px = XtoPixel(x);
      Int_t py = YtoPixel(y);
      Float_t angle = gGXW->GetTextAngle();

      gGXW->DrawText(px, py, angle, gGXW->GetTextMagnitude(), text, TGXW::kClear);
   }

   if (gCurrentPS) {
      if (x < fX1 || x > fX2) return;
      if (y < fY1 || y > fY2) return;
      gCurrentPS->Text(x, y, text);
   }

}

//______________________________________________________________________________
void TPad::PaintTextNDC(Float_t u, Float_t v, const Text_t *text)
{
//*-*-*-*-*-*-*-*-*Paint text in CurrentPad NDC coordinates*-*-*-*-*-*-*-*
//*-*              ========================================


   Modified();

   if (!gPad->IsBatch()) {
      Int_t px = UtoPixel(u);
      Int_t py = VtoPixel(v);
      Float_t angle = gGXW->GetTextAngle();

      gGXW->DrawText(px, py, angle, gGXW->GetTextMagnitude(), text, TGXW::kClear);
   }

   if (gCurrentPS) {
      Float_t x = GetX1() + u*(GetX2() - GetX1());
      Float_t y = GetY1() + v*(GetY2() - GetY1());
      if (x < fX1 || x > fX2) return;
      if (y < fY1 || y > fY2) return;
      gCurrentPS->Text(x, y, text);
   }

}

//______________________________________________________________________________
TPad *TPad::Pick(Int_t px, Int_t py, TObjLink *&pickobj)
{
//*-*-*-*-*-*-*-*-*Search for an object at pixel position px,py*-*-*-*-*-*-*
//*-*              ============================================
//  Check if point is in this pad.
//  If yes, check if it is in one of the subpads
//  If found in the pad, compute closest distance of approach
//  to each primitive.
//  If one distance of approach is found to be within the limit Distancemaximum
//  the corresponding primitive is selected and the routine returns.
//

   //the two following statements are necessary under NT (multithreaded)
   //when a TCanvas object is being craeted and a thread calling TPad::Pick
   //before the TPad constructor has completed in the other thread
   if (gPad == 0) return 0; //Andy Haas
   if (GetListOfPrimitives() == 0) return 0; //Andy Haas

   Int_t dist;
//*-*- Search if point is in pad itself
   Float_t x = AbsPixeltoX(px);
   Float_t y = AbsPixeltoY(py);
   if (this != gPad->GetCanvas()) {
      if (!((x >= fX1 && x <= fX2) && (y >= fY1 && y <= fY2))) return 0;
   }

//*-*- search for a primitive in this pad or its subpads
   static TObjOptLink dummyLink(0,"");  //place holder for when no link available
   TPad *padsav = (TPad*)gPad;
   gPad  = this;    // since no drawing will be done, don't use cd() for efficiency reasons
   TPad *pick   = 0;
   TPad *picked = this;
   pickobj      = 0;
   if (DistancetoPrimitive(px,py) < kDistanceMaximum) {
      dummyLink.SetObject(this);
      pickobj = &dummyLink;
   }

   // Loop backwards over the list of primitives. The first non-pad primitive
   // found is the selected one. However, we have to keep going down the
   // list to see if there is maybe a pad overlaying the primitive. In that
   // case look into the pad for a possible primitive. Once a pad has been
   // found we can terminate the loop.
   Bool_t gotPrim = kFALSE;      // true if found a non pad primitive
   TObjLink *lnk = GetListOfPrimitives()->LastLink();
   while (lnk) {
      TObject *obj = lnk->GetObject();
      fPadPointer  = obj;
      if (obj->InheritsFrom(TPad::Class())) {
         pick = ((TPad*)obj)->Pick(px, py, pickobj);
         if (pick) {
            picked = pick;
            break;
         }
      } else if (!gROOT->GetEditorMode()) {
         if (!gotPrim) {
            if (!obj->TestBit(kCannotPick)) {
               dist = obj->DistancetoPrimitive(px, py);
               if (dist < kDistanceMaximum) {
                  pickobj = lnk;
                  gotPrim = kTRUE;
                  if (dist == 0) break;
               }
            }
         }
      }

      lnk = lnk->Prev();
   }

   if (picked->InheritsFrom(TButton::Class())) {
      TButton *button = (TButton*)picked;
      if (!button->GetCanvas()->IsEditable()) pickobj = 0;
   }

   gPad = padsav;
   return picked;
}

//___________________________________________________________________________
void TPad::Pop()
{
//*-*-*-*-*-*-*-*-*-*-*Pop pad to the top of the stack*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
   if (this == fMother->GetListOfPrimitives()->Last()) return;

   TListIter next(fMother->GetListOfPrimitives());
   TObject *obj;
   while ((obj = next()))
      if (obj == this) {
         char *opt = StrDup(next.GetOption());
         fMother->GetListOfPrimitives()->Remove(this);
         fMother->GetListOfPrimitives()->AddLast(this, opt);
         delete [] opt;
         return;
      }
}


//______________________________________________________________________________
void TPad::Print(const Text_t *filename)
{
//*-*-*-*-*Old interface. Use SaveAs instead*-*-*-*-*-*
//*-*      =================================
//

   SaveAs(filename);

}

//______________________________________________________________________________
void TPad::Print(const Text_t *filename, Option_t *option)
{
//*-*-*-*-*Save Pad contents on a file in various formats*-*-*-*-*-*
//*-*      ==============================================
//
//   if option  =  0   - as "ps"
//               "ps"  - Postscript file is produced
//               "eps" - an Encapsulated Postscript file is produced
//               "gif" - a GIF file is produced
//               "cxx" - a C++ macro file is produced
//
//     filename = 0 - filename  is defined by the GetName and its
//                    extension is defined with the option
//

   char psname[264];
   Int_t lenfil =  filename ? strlen(filename) : 0;
   const char *opt = option;

//*-*   Set the default option as "Postscript" (Should be a data member of Tpad)

   const char *opt_default="ps";
   if( !opt ) opt = opt_default;

   if ( !lenfil )  sprintf(psname,"%s.%s",GetName(),opt);
   else            strcpy(psname,filename);

   // line below protected against case like c1->SaveAs( "../ps/cs.ps" );
   if ((psname[0] == '.') && (strchr(psname,'/') == 0)) sprintf(psname,"%s%s",GetName(),filename);

   if (strstr(opt,"gif")) {
      if (GetCanvas()->IsBatch()) {
         Printf("Cannot create gif file in batch mode.");
         return;
      }
      Update();
      Int_t canvasid = GetCanvas()->GetCanvasID();
      gGXW->SelectWindow(canvasid);
      gGXW->WriteGIF(psname);
      Printf("GIF file: %s has been created.",psname);
      return;
   }

   if (strstr(opt,"cxx")) {
      GetCanvas()->SaveSource(psname,"");
      return;
   }
   if (strstr(opt,"root")) {
      TDirectory *dirsav = gDirectory;
      TFile *fsave = new TFile(psname,"RECREATE");
      Write();
      fsave->Close();
      delete fsave;
      if (dirsav) dirsav->cd();
      Printf("ROOT file: %s has been created",psname);
      return;
   }

   // in case we read directly from a Root file and teh canvas
   // is not on the screen, set batch mode
   Bool_t noScreen = kFALSE;
   if (!GetCanvas()->IsBatch() && GetCanvas()->GetCanvasID() == -1) {
      noScreen = kTRUE;
      GetCanvas()->SetBatch(kTRUE);
   }
   Int_t pstype = 111;
   Float_t xcanvas = GetCanvas()->XtoPixel(GetCanvas()->GetX2());
   Float_t ycanvas = GetCanvas()->YtoPixel(GetCanvas()->GetY1());
   Float_t ratio   = ycanvas/xcanvas;
   if (ratio < 1)               pstype = 112;
   if (strstr(opt,"Portrait"))  pstype = 111;
   if (strstr(opt,"Landscape")) pstype = 112;
   if (strstr(opt,"eps")) pstype = 113;
   TPad *padsav = (TPad*)gPad;
   cd();
   TPostScript *psave = gCurrentPS;
   TPostScript *ps = new TPostScript(psname,pstype);
   ps->SetBit(kPrintingPS);
   Paint();
   ps->Close();
   if (noScreen) GetCanvas()->SetBatch(kFALSE);
   Printf("PostScript file: %s has been created",psname);
   gCurrentPS = psave;
   delete ps;
   padsav->cd();
}

//______________________________________________________________________________
void TPad::Range(Float_t x1, Float_t y1, Float_t x2, Float_t y2)
{
//*-*-*-*-*-*-*-*-*-*-*Set world coordinate system for the pad*-*-*-*-*-*-*
//*-*                  =======================================

   if ((x1 >= x2) || (y1 >= y2)) {
      Error("Range", "illegal world coordinates range: x1=%f, y1=%f, x2=%f, y2=%f",x1,y1,x2,y2);
      return;
   }

   fUxmin = x1;
   fUxmax = x2;
   fUymin = y1;
   fUymax = y2;

   if (fX1 == x1 && fY1 == y1 && fX2 == x2 && fY2 == y2) return;

   fX1  = x1;
   fY1  = y1;
   fX2  = x2;
   fY2  = y2;

//*-*- Compute pad conversion coefficients
   ResizePad();
}

//______________________________________________________________________________
void TPad::RangeAxis(Axis_t xmin, Axis_t ymin, Axis_t xmax, Axis_t ymax)
{
//*-*-*-*-*-*-*-*-*-*-*Set axis coordinate system for the pad*-*-*-*-*-*-*
//*-*                  =======================================
//  The axis coordinate system is a subset of the world coordinate system
//  xmin,ymin are the origin of the current coordinate system
//  xmax is the end of the X axis
//  ymax is the end of the Y axis
//  By default a margin of 10 per cent is left on all sides of the pad
//

   if ((xmin >= xmax) || (ymin >= ymax)) {
      Error("RangeAxis", "illegal axis coordinates range: xmin=%f, ymin=%f, xmax=%f, ymax=%f",
            xmin, ymin, xmax, ymax);
      return;
   }

   fUxmin  = xmin;
   fUymin  = ymin;
   fUxmax  = xmax;
   fUymax  = ymax;
}

//______________________________________________________________________________
void TPad::RecursiveRemove(TObject *obj)
{
//*-*-*-*-*-*-*-*Recursively remove object from a pad and its subpads*-*-*-*-*
//*-*            ====================================================

   if (obj == fCanvas->GetSelected()) fCanvas->SetSelected(0);
   Int_t nold = fPrimitives->GetSize();
   fPrimitives->RecursiveRemove(obj);
   if (nold != fPrimitives->GetSize()) fModified = kTRUE;
}

//______________________________________________________________________________
void TPad::RedrawAxis()
{
//  Redraw the frame axis
//  Redrawing axis may be necessary in case of superimposed histograms
//  when one or more histograms have a fill color
//
   TGaxis axis;
   Float_t xmin,ymin,xmax,ymax;
   gPad->GetRangeAxis(xmin,ymin,xmax,ymax);
//  redraw x axis
   axis.SetLineColor(gStyle->GetAxisColor("X"));
   axis.SetTextColor(gStyle->GetLabelColor("X"));
   axis.SetTextFont(gStyle->GetLabelFont("X"));
   axis.SetLabelFont(gStyle->GetLabelFont("X"));
   axis.SetLabelSize(gStyle->GetLabelSize("X"));
   axis.SetLabelOffset(gStyle->GetLabelOffset("X"));
   axis.SetTickSize(gStyle->GetTickLength("X"));
   Int_t ndiv =gStyle->GetNdivisions("X");
   if (!gPad->GetLogx()) axis.DrawAxis(xmin,ymin,xmax,ymin,xmin,xmax,ndiv);
   else   axis.DrawAxis(xmin,ymin,xmax,ymin,
                     TMath::Power(10,xmin),TMath::Power(10,xmax),ndiv,"G");
//  redraw y axis
   axis.SetLineColor(gStyle->GetAxisColor("Y"));
   axis.SetTextColor(gStyle->GetLabelColor("Y"));
   axis.SetTextFont(gStyle->GetLabelFont("Y"));
   axis.SetLabelFont(gStyle->GetLabelFont("Y"));
   axis.SetLabelSize(gStyle->GetLabelSize("Y"));
   axis.SetLabelOffset(gStyle->GetLabelOffset("Y"));
   axis.SetTickSize(gStyle->GetTickLength("Y"));
   ndiv =gStyle->GetNdivisions("Y");
   if (!gPad->GetLogy()) axis.DrawAxis(xmin,ymin,xmin,ymax,ymin,ymax,ndiv);
   else   axis.DrawAxis(xmin,ymin,xmin,ymax,
                     TMath::Power(10,ymin),TMath::Power(10,ymax),ndiv,"G");
}

//______________________________________________________________________________
void TPad::ResizePad(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Compute pad conversion coefficients*-*-*-*-*-*-*-*-*
//*-*                  ===================================
//
//   Conversion from x to px & y to py
//   =================================
//
//       x - xmin     px - pxlow              xrange  = xmax-xmin
//       --------  =  ----------      with
//        xrange        pxrange               pxrange = pxmax-pxmin
//
//               pxrange(x-xmin)
//   ==>  px =   ---------------  + pxlow   = fXtoPixelk + fXtoPixel * x
//                    xrange
//
//   ==>  fXtoPixelk = pxlow - pxrange*xmin/xrange
//        fXtoPixel  = pxrange/xrange
//           where  pxlow   = fAbsXlowNDC*fCw
//                  pxrange = fAbsWNDC*fCw
//
//
//       y - ymin     py - pylow              yrange  = ymax-ymin
//       --------  =  ----------      with
//        yrange        pyrange               pyrange = pymax-pymin
//
//               pyrange(y-ymin)
//   ==>  py =   ---------------  + pylow   = fYtoPixelk + fYtoPixel * y
//                    yrange
//
//   ==>  fYtoPixelk = pylow - pyrange*ymin/yrange
//        fYtoPixel  = pyrange/yrange
//           where  pylow   = (1-fAbsYlowNDC)*fCh
//                  pyrange = -fAbsHNDC*fCh
//
//-  Conversion from px to x & py to y
//   =================================
//
//             xrange(px-pxlow)
//   ==>  x =  ----------------  + xmin  = fPixeltoXk + fPixeltoX * px
//                 pxrange
//-
//   ==>  fPixeltoXk = xmin - pxlow*xrange/pxrange
//        fPixeltoX  = xrange/pxrange
//
//             yrange(py-pylow)
//   ==>  y =  ----------------  + ymin  = fPixeltoYk + fPixeltoY * py
//                 pyrange
//-
//   ==>  fPixeltoYk = ymin - pylow*yrange/pyrange
//        fPixeltoY  = yrange/pyrange
//
//-----------------------------------------------------------------------
//
//  Computation of the coefficients in case of LOG scales
//- =====================================================
//
//   A, Conversion from pixel coordinates to world coordinates
//
//       Log(x) - Log(xmin)      Log(x/xmin)       px - pxlow
//  u = --------------------- =  -------------  =  -----------
//      Log(xmax) - Log(xmin)    Log(xmax/xmin)     pxrange
//
//  ==> Log(x/xmin) = u*Log(xmax/xmin)
//      x = xmin*exp(u*Log(xmax/xmin)
//   Let alfa = Log(xmax/xmin)/fAbsWNDC
//
//      x = xmin*exp(-alfa*pxlow) + exp(alfa*px)
//      x = fPixeltoXk*exp(fPixeltoX*px)
//  ==> fPixeltoXk = xmin*exp(-alfa*pxlow)
//      fPixeltoX  = alfa
//
//       Log(y) - Log(ymin)      Log(y/ymin)       pylow - py
//  v = --------------------- =  -------------  =  -----------
//      Log(ymax) - Log(ymin)    Log(ymax/ymin)     pyrange
//
//   Let beta = Log(ymax/ymin)/pyrange
//      Log(y/ymin) = beta*pylow - beta*py
//      y/ymin = exp(beta*pylow - beta*py)
//      y = ymin*exp(beta*pylow)*exp(-beta*py)
//  ==> y = fPixeltoYk*exp(fPixeltoY*py)
//      fPixeltoYk = ymin*exp(beta*pylow)
//      fPixeltoY  = -beta
//
//-  B, Conversion from World coordinates to pixel coordinates
//
//  px = pxlow + u*pxrange
//     = pxlow + Log(x/xmin)/alfa
//     = pxlow -Log(xmin)/alfa  + Log(x)/alfa
//     = fXtoPixelk + fXtoPixel*Log(x)
//  ==> fXtoPixelk = pxlow -Log(xmin)/alfa
//  ==> fXtoPixel  = 1/alfa
//
//  py = pylow - Log(y/ymin)/beta
//     = fYtoPixelk + fYtoPixel*Log(y)
//  ==> fYtoPixelk = pylow - Log(ymin)/beta
//      fYtoPixel  = 1/beta
//


//*-*- Recompute subpad positions in case pad has been moved/resized
   TPad *parent = fMother;
   if (this == gPad->GetCanvas()) {
      fAbsXlowNDC  = fXlowNDC;
      fAbsYlowNDC  = fYlowNDC;
      fAbsWNDC     = fWNDC;
      fAbsHNDC     = fHNDC;
   }
   else {
      fAbsXlowNDC  = fXlowNDC*parent->GetAbsWNDC() + parent->GetAbsXlowNDC();
      fAbsYlowNDC  = fYlowNDC*parent->GetAbsHNDC() + parent->GetAbsYlowNDC();
      fAbsWNDC     = fWNDC*parent->GetAbsWNDC();
      fAbsHNDC     = fHNDC*parent->GetAbsHNDC();
   }

   Float_t ww = (Float_t)gPad->GetWw();
   Float_t wh = (Float_t)gPad->GetWh();
   Float_t pxlow   = fAbsXlowNDC*ww;
   Float_t pylow   = (1-fAbsYlowNDC)*wh;
   Float_t pxrange = fAbsWNDC*ww;
   Float_t pyrange = -fAbsHNDC*wh;

//*-*- Linear X axis
   Float_t xrange  = fX2 - fX1;
   fXtoAbsPixelk = 0.5 + pxlow - pxrange*fX1/xrange;      //origin at left
   fXtoPixelk = -pxrange*fX1/xrange;
   fXtoPixel  = pxrange/xrange;
   fAbsPixeltoXk = fX1 - pxlow*xrange/pxrange;
   fPixeltoXk = fX1;
   fPixeltoX  = xrange/pxrange;
//*-*- Linear Y axis
   Float_t yrange  = fY2 - fY1;
   fYtoAbsPixelk = 0.5 + pylow - pyrange*fY1/yrange;      //origin at top
   fYtoPixelk = -pyrange - pyrange*fY1/yrange;
   fYtoPixel  = pyrange/yrange;
   fAbsPixeltoYk = fY1 - pylow*yrange/pyrange;
   fPixeltoYk = fY1;
   fPixeltoY  = yrange/pyrange;

//*-*- Coefficients to convert from pad NDC coordinates to pixel coordinates

   fUtoAbsPixelk = 0.5 + pxlow;
   fUtoPixelk = 0.0;
   fUtoPixel  = pxrange;
   fVtoAbsPixelk = 0.5 + pylow;
   fVtoPixelk = -pyrange;
   fVtoPixel  = pyrange;

//*-*- Coefficients to convert from canvas pixels to pad world coordinates

//*-*- Resize all subpads
   TObject *obj;
   TIter    next(GetListOfPrimitives());
   while ((obj = next())) {
      if (obj->InheritsFrom(TPad::Class()))
         ((TPad*)obj)->ResizePad(option);
   }

//*-*- Reset all current sizes
   if (gPad->IsBatch())
      fPixmapID = 0;
   else {
      gGXW->SetLineWidth(-1);
      gGXW->SetTextSize(-1);

      // create or re-create off-screen pixmap
      if (fPixmapID) {
         int w = TMath::Abs(XtoPixel(fX2) - XtoPixel(fX1));
         int h = TMath::Abs(YtoPixel(fY2) - YtoPixel(fY1));
         if (fPixmapID == -1)       // this case is handled via the ctor
            fPixmapID = gGXW->OpenPixmap(w, h);
         else
            if (gGXW->ResizePixmap(fPixmapID, w, h)) Modified(kTRUE);
      }
   }
}


//______________________________________________________________________________
void TPad::SaveAs(const Text_t *filename)
{
//*-*-*-*-*Save Pad contents on a  file in various formats*-*-*-*-*-*
//*-*      ===============================================
//
//   if filename is "", the file produced is padname.ps
//   if filename starts with a dot, the padname is added in front
//   if filename contains .eps, an Encapsulated Postscript file is produced
//   if filename contains .gif, a GIF file is produced
//   if filename contains .C or .cxx, a C++ macro file is produced
//   if filename contains .root, a Root file is produced
//

   char psname[264];
   Int_t lenfil =  filename ? strlen(filename) : 0;

   if (!lenfil)  sprintf(psname,"%s.ps",GetName());
   else          strcpy(psname,filename);

   // line below protected against case like c1->SaveAs( "../ps/cs.ps" );
   if ((psname[0] == '.') && (strchr(psname,'/') == 0)) sprintf(psname,"%s%s",GetName(),filename);

   if (strstr(psname,".gif"))
               Print(psname,"gif");
   else if (strstr(psname,".C") || strstr(psname,".cxx") || strstr(psname,".cpp"))
               Print(psname,"cxx");
   else if (strstr(psname,".root"))
               Print(psname,"root");
   else if (strstr(psname,".eps"))
               Print(psname,"eps");
   else
               Print(psname,"ps");

 }

//______________________________________________________________________________
void TPad::SavePrimitive(ofstream &out, Option_t *)
{
//*-*-*-*-*-*Save primitives in this pad on the C++ source file out*-*-*-*-*-*
//*-*        ======================================================

   TPad *padsav = (TPad*)gPad;
   char quote='"';
//   Write pad parameters
   if (this != gPad->GetCanvas()) {
      out <<"  "<<endl;
      out <<"// ------------>Primitives in pad: "<<GetName()<<endl;

      if (gROOT->ClassSaved(TPad::Class())) {
         out<<"   ";
      } else {
         out<<"   TPad *";
      }
      out<<GetName()<<" = new TPad("<<quote<<GetName()<<quote<<", "<<quote<<GetTitle()
      <<quote
      <<","<<fXlowNDC
      <<","<<fYlowNDC
      <<","<<fXlowNDC+fWNDC
      <<","<<fYlowNDC+fHNDC
      <<");"<<endl;
      out<<"   "<<GetName()<<"->Draw();"<<endl;
      out<<"   "<<GetName()<<"->cd();"<<endl;
   }
   out<<"   "<<GetName()<<"->Range("<<fX1<<","<<fY1<<","<<fX2<<","<<fY2<<");"<<endl;
   TView *view = GetView();
   Float_t rmin[3], rmax[3];
   if (view) {
      view->GetRange(rmin, rmax);
      out<<"   TView *view = new TView(1);"<<endl;
      out<<"   view->SetRange("<<rmin[0]<<","<<rmin[1]<<","<<rmin[2]<<","
                               <<rmax[0]<<","<<rmax[1]<<","<<rmax[2]<<");"<<endl;
   }
   out<<"   "<<GetName()<<"->SetFillColor("<<GetFillColor()<<");"<<endl;
   if (GetBorderMode() != 1) {
      out<<"   "<<GetName()<<"->SetBorderMode("<<GetBorderMode()<<");"<<endl;
   }
   if (GetBorderSize() != 4) {
      out<<"   "<<GetName()<<"->SetBorderSize("<<GetBorderSize()<<");"<<endl;
   }
   if (GetLogx()) {
      out<<"   "<<GetName()<<"->SetLogx();"<<endl;
   }
   if (GetLogy()) {
      out<<"   "<<GetName()<<"->SetLogy();"<<endl;
   }
   if (GetLogz()) {
      out<<"   "<<GetName()<<"->SetLogz();"<<endl;
   }
   if (GetGridx()) {
      out<<"   "<<GetName()<<"->SetGridx();"<<endl;
   }
   if (GetGridy()) {
      out<<"   "<<GetName()<<"->SetGridy();"<<endl;
   }
   if (GetTickx()) {
      out<<"   "<<GetName()<<"->SetTickx();"<<endl;
   }
   if (GetTicky()) {
      out<<"   "<<GetName()<<"->SetTicky();"<<endl;
   }
   if (GetTheta() != 30) {
      out<<"   "<<GetName()<<"->SetTheta("<<GetTheta()<<");"<<endl;
   }
   if (GetPhi() != 30) {
      out<<"   "<<GetName()<<"->SetPhi("<<GetPhi()<<");"<<endl;
   }
   if (TMath::Abs(fLeftMargin-0.1) > 0.01) {
      out<<"   "<<GetName()<<"->SetLeftMargin("<<GetLeftMargin()<<");"<<endl;
   }
   if (TMath::Abs(fRightMargin-0.1) > 0.01) {
      out<<"   "<<GetName()<<"->SetRightMargin("<<GetRightMargin()<<");"<<endl;
   }
   if (TMath::Abs(fTopMargin-0.1) > 0.01) {
      out<<"   "<<GetName()<<"->SetTopMargin("<<GetTopMargin()<<");"<<endl;
   }
   if (TMath::Abs(fBottomMargin-0.1) > 0.01) {
      out<<"   "<<GetName()<<"->SetBottomMargin("<<GetBottomMargin()<<");"<<endl;
   }

   if (fFrame) {
      if (fFrame->GetFillColor() != GetFillColor()) {
         out<<"   "<<GetName()<<"->SetFrameFillColor("<<fFrame->GetFillColor()<<");"<<endl;
      }
      if (fFrame->GetFillStyle() != 1001) {
         out<<"   "<<GetName()<<"->SetFrameFillStyle("<<fFrame->GetFillStyle()<<");"<<endl;
      }
      if (fFrame->GetLineStyle() != 1) {
         out<<"   "<<GetName()<<"->SetFrameLineStyle("<<fFrame->GetLineStyle()<<");"<<endl;
      }
      if (fFrame->GetLineColor() != 1) {
         out<<"   "<<GetName()<<"->SetFrameLineColor("<<fFrame->GetLineColor()<<");"<<endl;
      }
      if (fFrame->GetLineWidth() != 1) {
         out<<"   "<<GetName()<<"->SetFrameLineWidth("<<fFrame->GetLineWidth()<<");"<<endl;
      }
      if (fFrame->GetBorderMode() != 1) {
         out<<"   "<<GetName()<<"->SetFrameBorderMode("<<fFrame->GetBorderMode()<<");"<<endl;
      }
      if (fFrame->GetBorderSize() != 1) {
         out<<"   "<<GetName()<<"->SetFrameBorderSize("<<fFrame->GetBorderSize()<<");"<<endl;
      }
   }

   TIter next(GetListOfPrimitives());
   TObject *obj;

   while ((obj = next()))
         obj->SavePrimitive(out, (Option_t *)next.GetOption());
   out<<"   "<<GetName()<<"->Modified();"<<endl;
   out<<"   "<<padsav->GetName()<<"->cd();"<<endl;
   if (padsav) padsav->cd();
}

//______________________________________________________________________________
void TPad::SetFillStyle(Style_t fstyle)
{
   // Overrride TAttFill::FillStyle for TPad because we want to handle style=0
   // as style 4000.

   if (fstyle == 0) fstyle = 4000;
   TAttFill::SetFillStyle(fstyle);
}

//______________________________________________________________________________
void TPad::SetLogx(Int_t value)
{
//*-*-*-*-*-*-*-*-*Set Lin/Log scale for X
//*-*              ========================
   if (value) fLogx = 1;
   else       fLogx = 0;
}

//______________________________________________________________________________
void TPad::SetLogy(Int_t value)
{
//*-*-*-*-*-*-*-*-*Set Lin/Log scale for Y
//*-*              ========================
   if (value) fLogy = 1;
   else       fLogy = 0;
}

//______________________________________________________________________________
void TPad::SetLogz(Int_t value)
{
//*-*-*-*-*-*-*-*-*Set Lin/Log scale for Z
//*-*              ========================
   if (value) fLogz = 1;
   else       fLogz = 0;
}

//______________________________________________________________________________
void TPad::SetPad(Float_t xlow, Float_t ylow, Float_t xup, Float_t yup)
{
//*-*-*-*-*-*-*-*-*Set canvas range for pad*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ========================

  fXlowNDC = xlow;
  fYlowNDC = ylow;
  fWNDC    = xup - xlow;
  fHNDC    = yup - ylow;

  ResizePad();
}

//______________________________________________________________________________
void TPad::SetPad(const Text_t *name, const Text_t *title,
                  Float_t xlow, Float_t ylow, Float_t xup, Float_t yup,
                  Color_t color, Short_t bordersize, Short_t bordermode)
{
//*-*-*-*-*-*-*-*-*Set all pad parameters*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ======================
   fName  = name;
   fTitle = title;
   SetFillStyle(1001);
   SetBottomMargin(gStyle->GetPadBottomMargin());
   SetTopMargin(gStyle->GetPadTopMargin());
   SetLeftMargin(gStyle->GetPadLeftMargin());
   SetRightMargin(gStyle->GetPadRightMargin());
   if (color >= 0)   SetFillColor(color);
   else              SetFillColor(gStyle->GetPadColor());
   if (bordersize <  0) fBorderSize = gStyle->GetPadBorderSize();
   else                 fBorderSize = bordersize;
   if (bordermode < -1) fBorderMode = gStyle->GetPadBorderMode();
   else                 fBorderMode = bordermode;

   SetPad(xlow, ylow, xup, yup);
}

//_______________________________________________________________________
void TPad::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================

   Int_t nch, nobjects;
   TObject *obj;
   if (b.IsReading()) {
      Version_t v = b.ReadVersion();
      TVirtualPad::Streamer(b);
      b >> fLogx;
      b >> fLogy;
      b >> fLogz;
      b >> fXtoAbsPixelk;
      b >> fXtoPixelk;
      b >> fXtoPixel;
      b >> fYtoAbsPixelk;
      b >> fYtoPixelk;
      b >> fYtoPixel;
      b >> fUtoAbsPixelk;
      b >> fUtoPixelk;
      b >> fUtoPixel;
      b >> fVtoAbsPixelk;
      b >> fVtoPixelk;
      b >> fVtoPixel;
      b >> fAbsPixeltoXk;
      b >> fPixeltoXk;
      b >> fPixeltoX;
      b >> fAbsPixeltoYk;
      b >> fPixeltoYk;
      b >> fPixeltoY;
      b >> fXlowNDC;
      b >> fYlowNDC;
      b >> fWNDC;
      b >> fHNDC;
      b >> fAbsXlowNDC;
      b >> fAbsYlowNDC;
      b >> fAbsWNDC;
      b >> fAbsHNDC;
      b >> fUxmin;
      b >> fUymin;
      b >> fUxmax;
      b >> fUymax;

      fMother     = (TPad*)gPad;
      if (gPad)  fCanvas = gPad->GetCanvas();
      fPixmapID   = -1;      // -1 means pixmap will be created by ResizePad()
//-------------------------
// read objects and their drawing options
//      b >> fPrimitives;
      TPad *padsav = (TPad*)gPad;
      gPad = this;
      fPrimitives = new TList(this);
      b >> nobjects;
      char drawoption[64];
      for (Int_t i = 0; i < nobjects; i++) {
         b >> obj;
         b >> nch;
         b.ReadFastArray(drawoption,nch);
         fPrimitives->AddLast(obj, drawoption);
         gPad = padsav; // gPad may be modified in b >> obj if obj is a pad
      }
//-------------------------
      fName.Streamer(b);
      fTitle.Streamer(b);
      b >> fPadPaint;
      fModified = kTRUE;
      b >> fGridx;
      b >> fGridy;
      b >> fFrame;
      b >> fView;
      b >> fTheta;
      b >> fPhi;
      fPadPointer = 0;
      b >> fNumber;
      b >> fAbsCoord;
      if (v > 1) {
         b >> fTickx;
         b >> fTicky;
      } else {
         fTickx = fTicky = 0;
      }
   } else {
      b.WriteVersion(TPad::IsA());
      TVirtualPad::Streamer(b);
      b << fLogx;
      b << fLogy;
      b << fLogz;
      b << fXtoAbsPixelk;
      b << fXtoPixelk;
      b << fXtoPixel;
      b << fYtoAbsPixelk;
      b << fYtoPixelk;
      b << fYtoPixel;
      b << fUtoAbsPixelk;
      b << fUtoPixelk;
      b << fUtoPixel;
      b << fVtoAbsPixelk;
      b << fVtoPixelk;
      b << fVtoPixel;
      b << fAbsPixeltoXk;
      b << fPixeltoXk;
      b << fPixeltoX;
      b << fAbsPixeltoYk;
      b << fPixeltoYk;
      b << fPixeltoY;
      b << fXlowNDC;
      b << fYlowNDC;
      b << fWNDC;
      b << fHNDC;
      b << fAbsXlowNDC;
      b << fAbsYlowNDC;
      b << fAbsWNDC;
      b << fAbsHNDC;
      b << fUxmin;
      b << fUymin;
      b << fUxmax;
      b << fUymax;
//-------------------------
// save objects in pad and their drawing option
// This should be done automatically by TList::Streamer
//      b << fPrimitives;
      nobjects = fPrimitives->GetSize();
      b << nobjects;
      TIter next(fPrimitives);
      while ((obj = next())) {
         b << obj;
         nch = 1 + strlen(next.GetOption());
         b << nch;
         if (nch) b.WriteFastArray(next.GetOption(),nch);
      }
//-------------------------
      fName.Streamer(b);
      fTitle.Streamer(b);
      b << fPadPaint;
      b << fGridx;
      b << fGridy;
      b << fFrame;
      b << fView;
      b << fTheta;
      b << fPhi;
      b << fNumber;
      b << fAbsCoord;
      b << fTickx;
      b << fTicky;
   }
}

//______________________________________________________________________________
void TPad::UseCurrentStyle()
{
//*-*-*-*-*-*Force a copy of current style for all objects in pad*-*-*-*-*
//*-*        ====================================================

   SetFillColor(gStyle->GetCanvasColor());
   SetBottomMargin(gStyle->GetPadBottomMargin());
   SetTopMargin(gStyle->GetPadTopMargin());
   SetLeftMargin(gStyle->GetPadLeftMargin());
   SetRightMargin(gStyle->GetPadRightMargin());
   fBorderSize = gStyle->GetPadBorderSize();
   fBorderMode = gStyle->GetPadBorderMode();
   fGridx = gStyle->GetPadGridX();
   fGridy = gStyle->GetPadGridY();
   fTickx = gStyle->GetPadTickX();
   fTicky = gStyle->GetPadTickY();

   TIter next(GetListOfPrimitives());
   TObject *obj;

   while ((obj = next())) {
      obj->UseCurrentStyle();
   }

   TPaveText *stats  = (TPaveText*)GetPrimitive("stats");
   if (stats) {
      stats->SetFillColor(gStyle->GetStatColor());
      stats->SetBorderSize(gStyle->GetStatBorderSize());
   }

   TPaveText *title  = (TPaveText*)GetPrimitive("title");
   if (title) {
      title->SetFillColor(gStyle->GetTitleColor());
      title->SetBorderSize(gStyle->GetTitleBorderSize());
   }
   if (fFrame) {
      fFrame->SetFillColor(gStyle->GetFrameFillColor());
      fFrame->SetFillStyle(gStyle->GetFrameFillStyle());
      fFrame->SetLineColor(gStyle->GetFrameLineColor());
      fFrame->SetLineStyle(gStyle->GetFrameLineStyle());
      fFrame->SetLineWidth(gStyle->GetFrameLineWidth());
      fFrame->SetBorderSize(gStyle->GetFrameBorderSize());
      fFrame->SetBorderMode(gStyle->GetFrameBorderMode());
   }

   Modified();
}

//______________________________________________________________________________
TGToolTip *TPad::CreateToolTip(const TBox *box, const char *text, Long_t delayms)
{
   // Create a tool tip and return its pointer.

   return new TGToolTip(gClient->GetRoot(), box, text, delayms);
}

//______________________________________________________________________________
void TPad::DeleteToolTip(TGToolTip *tip)
{
   // Delete tool tip object.

#ifndef WIN32
   delete tip;
#endif
}

//______________________________________________________________________________
void TPad::ResetToolTip(TGToolTip *tip)
{
   // Reset tool tip, i.e. within time specified in CreateToolTip the
   // tool tip will pop up.

#ifndef WIN32
   if (tip) tip->Reset(this);
#endif
}

//______________________________________________________________________________
void TPad::CloseToolTip(TGToolTip *tip)
{
   // Hide tool tip.

#ifndef WIN32
   if (tip) tip->Hide();
#endif
}

//______________________________________________________________________________

extern "C" {
  void   x3d_main(Float_t  *longitude,Float_t  *latitude,Float_t  *psi,Option_t *option);
}

//______________________________________________________________________________
void TPad::x3d(Option_t *option)
{
//*-*-*-*-*-*Invokes the x3d package to view the content of a pad*-*-*-*-*-*-*
//*-*        ====================================================

#ifndef WIN32
   if (!strcasecmp(option, "OPENGL"))
#endif
   {
      // Disconnect the previous 3D context
      if (fPadView3D) fPadView3D->SetPad(0);
      fPadView3D = gGLKernel->CreatePadGLView(this);
      if (!fPadView3D) {
#ifdef WIN32
         Warning("x3d", "loading OpenGL viewer (gSystem->Load(\"Root_RGL.DLL\")");
         if (gSystem->Load("Root_RGL.DLL"))
            Error("x3d", "failed to load OpenGL viewer");
#else
         gROOT->Macro("GL.C");
#endif
         fPadView3D = gGLKernel->CreatePadGLView(this);
         if (!fPadView3D)
            Error("x3d", "OpenGL shared libraries not loaded");
      }
      if (fPadView3D) {
          Modified();
          Update();
      }
      return;
   }

#ifdef R__UNIX

    TObject *obj;
    char x3dopt[32];

    if(!fView) {
        cout << "Error: View is not set !" << endl;
        return;
    }

    gSize3D.numPoints = 0;
    gSize3D.numSegs   = 0;
    gSize3D.numPolys  = 0;

    TObjLink *lnk = GetListOfPrimitives()->FirstLink();
    while (lnk) {
        obj = lnk->GetObject();
        if(obj->Is3D()) obj->Sizeof3D();
        lnk = lnk->Next();
    }

    cout<<"Total size of x3d primitives:"<<endl;
    cout<<"     gSize3D.numPoints="<<gSize3D.numPoints<<endl;
    cout<<"     gSize3D.numSegs  ="<<gSize3D.numSegs<<endl;
    cout<<"     gSize3D.numPolys ="<<gSize3D.numPolys<<endl;

    if (!AllocateX3DBuffer()) {
        Error("x3d", "x3d buffer allocation failure");
        return;
    }

    lnk = GetListOfPrimitives()->FirstLink();
    while (lnk) {
        obj = lnk->GetObject();
        if(obj->Is3D()) {
           strcpy(x3dopt,"x3d");
           strcat(x3dopt,option);
           obj->Paint(x3dopt);
        }
        lnk = lnk->Next();
    }

    const Float_t kPI = Float_t (TMath::Pi());

    Float_t longitude_rad = ( 90 + fView->GetLongitude()) * kPI/180.0;
    Float_t  latitude_rad = (-90 + fView->GetLatitude() ) * kPI/180.0;
    Float_t       psi_rad = (      fView->GetPsi()      ) * kPI/180.0;


    //*-* Call 'x3d' package *-*
    x3d_main(&longitude_rad, &latitude_rad, &psi_rad, option);

    Int_t irep;

    Float_t longitude_deg = longitude_rad * 180.0/kPI - 90;
    Float_t  latitude_deg = latitude_rad  * 180.0/kPI + 90;
    Float_t       psi_deg = psi_rad       * 180.0/kPI;

    fView->SetView(longitude_deg, latitude_deg, psi_deg, irep);

    fPhi   = -90 - longitude_deg;
    fTheta =  90 - latitude_deg;

    Modified(kTRUE);

#endif
}
