//*CMZ :  2.20/05 15/12/98  09.17.22  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  10.12.29  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  17.01.03  by  Rene Brun
//*CMZ :  2.00/00 17/02/98  16.02.25  by  Rene Brun
//*CMZ :  1.03/09 11/12/97  08.43.07  by  Rene Brun
//*-- Author :    Nenad Buncic   21/08/95

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
#include <iostream.h>

#include "TROOT.h"
#include "TVirtualPad.h"
#include "TView.h"
#include "TStyle.h"
#include "TPolymarker3D.h"
#include "TGXW.h"
#include "TPoint.h"
#include "TPostscript.h"
#include "TGLKernelABC.h"
#include "TPadView3D.h"

ClassImp(TPolyMarker3D)

const Int_t kDimension = 3;

//______________________________________________________________________________
// PolyMarker3D is a 3D polymarker. It has three constructors.
//
//   First one, without any parameters TPolyMarker3D(), we call 'default
// constructor' and it's used in a case that just an initialisation is
// needed (i.e. pointer declaration).
//
//       Example:
//                 TPolyMarker3D *pm = new TPolyMarker3D;
//
//
//   Second one, takes, usually, two parameters, n (number of points) and
// marker (marker style). Third parameter is optional.
//
//       Example:
//                 TPolyMarker3D (150, 1);
//
//
//   Third one takes, usually, three parameters, n (number of points), *p
// (pointer to an array of 3D points), and marker (marker style). Fourth
// parameter is optional.
//
//       Example:
//                 Float_t *ptr = new Float_t [150*3];
//                         ... ... ...
//                         ... ... ...
//                         ... ... ...
//
//                 TPolyMarker3D (150, ptr, 1);
//
//






//______________________________________________________________________________
TPolyMarker3D::TPolyMarker3D()
  : TObject(), TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*-*PolyMarker3D default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ================================

        fN = 0;
        fP = 0;

}


//______________________________________________________________________________
TPolyMarker3D::TPolyMarker3D(Int_t n, Marker_t marker, Option_t *option)
  : TObject(), TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*PolyMarker3D normal constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===============================

   fN = n;
   fP = new Float_t [kDimension*fN];
   for (Int_t i = 0; i < kDimension*fN; i++)  fP[i] = 0;
   fOption = option;
   SetMarkerStyle(marker);
   SetBit(kCanDelete);
}


//______________________________________________________________________________
TPolyMarker3D::TPolyMarker3D(Int_t n, Float_t *p, Marker_t marker, Option_t *option)
  : TObject(), TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*PolyMarker3D constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                        ========================

   fN = n;
   fP = new Float_t [kDimension*fN];
   for (Int_t i = 0; i < kDimension*fN; i++)  fP[i] = p[i];
   SetMarkerStyle(marker);
   SetBit(kCanDelete);
   fOption = option;
}


//______________________________________________________________________________
TPolyMarker3D::~TPolyMarker3D()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*PolyMarker3D destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                          =======================

        fN = 0;
        if (fP) delete [] fP;

}


//______________________________________________________________________________
TPolyMarker3D::TPolyMarker3D(const TPolyMarker3D &polymarker)
{
   ((TPolyMarker3D&)polymarker).Copy(*this);
}

//______________________________________________________________________________
void TPolyMarker3D::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Copy polymarker*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                              ===============

   TObject::Copy(obj);
   ((TPolyMarker3D&)obj).fN = fN;
   ((TPolyMarker3D&)obj).fP = new Float_t [kDimension*fN];
   for (Int_t i = 0; i < kDimension*fN; i++)  ((TPolyMarker3D&)obj).fP[i] = fP[i];
   ((TPolyMarker3D&)obj).SetMarkerStyle(GetMarkerStyle());
   ((TPolyMarker3D&)obj).fOption = fOption;
}


//______________________________________________________________________________
Int_t TPolyMarker3D::DistancetoPrimitive(Int_t px, Int_t py)
{
//*-*-*-*-*-*-*Compute distance from point px,py to a 3-D polymarker*-*-*-*-*-*-*
//*-*          =====================================================
//*-*
//*-*  Compute the closest distance of approach from point px,py to each segment
//*-*  of the polyline.
//*-*  Returns when the distance found is below DistanceMaximum.
//*-*  The distance is computed in pixels units.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   const Int_t inaxis = 7;
   Int_t dist = 9999;

   Int_t puxmin = gPad->XtoAbsPixel(gPad->GetUxmin());
   Int_t puymin = gPad->YtoAbsPixel(gPad->GetUymin());
   Int_t puxmax = gPad->XtoAbsPixel(gPad->GetUxmax());
   Int_t puymax = gPad->YtoAbsPixel(gPad->GetUymax());

//*-*- return if point is not in the user area
   if (px < puxmin - inaxis) return dist;
   if (py > puymin + inaxis) return dist;
   if (px > puxmax + inaxis) return dist;
   if (py < puymax - inaxis) return dist;

   TView *view = gPad->GetView();
   if (!view) return dist;

   Int_t i, dpoint;
   Float_t xndc[3];
   Int_t x1,y1;
   for (i=0;i<fN;i++) {
      view->WCtoNDC(&fP[3*i], xndc);
      x1     = gPad->XtoAbsPixel(xndc[0]);
      y1     = gPad->YtoAbsPixel(xndc[1]);
      dpoint = Int_t(TMath::Sqrt((Long_t)((px-x1)*(px-x1) + (py-y1)*(py-y1))));
      if (dpoint < dist) dist = dpoint;
   }
   return dist;
}


//______________________________________________________________________________
void TPolyMarker3D::Draw(Option_t *option)
{
//*-*-*-*-*-*-*Draws PolyMarker and adds it into the ListOfPrimitives*-*-*-*-*-*
//*-*          ======================================================

   AppendPad(option);

}


//______________________________________________________________________________
void TPolyMarker3D::DrawPolyMarker(Int_t n, Float_t *p, Marker_t, Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Draws PolyMarker*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                            ================

   TPolyMarker3D *newpolymarker = new TPolyMarker3D();
   newpolymarker->fN = n;
   newpolymarker->fP = new Float_t [kDimension*fN];
   for (Int_t i = 0; i < kDimension*fN; i++)  newpolymarker->fP[i] = p[i];
   newpolymarker->SetMarkerStyle(GetMarkerStyle());
   newpolymarker->fOption = fOption;
   newpolymarker->SetBit(kCanDelete);
   newpolymarker->AppendPad(option);
}


//______________________________________________________________________________
void TPolyMarker3D::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*-*-*-*-*-*-*
//*-*                =========================================
//*-*
//*-*  This member function must be implemented to realize the action
//*-*  corresponding to the mouse click on the object in the window
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

        if (gPad->GetView())
                gPad->GetView()->ExecuteRotateView(event, px, py);

}

//______________________________________________________________________________
void TPolyMarker3D::ls(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*List PolyMarker's contents*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==========================

   IndentLevel();
   cout << "    TPolyMarker3D  N=" << fN <<" Option="<<option<<endl;
}

//______________________________________________________________________________
void TPolyMarker3D::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Paint PolyMarker*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                            ================
    TPadView3D *view3D = gPad->GetView3D();
    if (view3D) view3D->PaintPolyMarker(this,option);
    //*-* Check if option is 'x3d'.      NOTE: This is a simple checking
    //                                         but since there is no other
    //                                         options yet, this works fine.

    if ((*option != 'x') && (*option != 'X')) {
        Marker_t marker = GetMarkerStyle();
        PaintPolyMarker(fN, fP, marker, option);
    }
    else {

        Int_t mode;
        Int_t i, j, k, n;

        X3DBuffer *buff = new X3DBuffer;
        if(!buff) return;

        if (fN > 10000) mode = 1;         // One line marker    '-'
        else if (fN > 3000) mode = 2;     // Two lines marker   '+'
        else mode = 3;                    // Three lines marker '*'

        buff->numSegs   = fN*mode;
        buff->numPoints = buff->numSegs*2;
        buff->numPolys  = 0;         //NOTE: Because of different structure, our
        buff->polys     = NULL;      //      TPolyMarker3D can't use polygons


    //*-* Allocate memory for points *-*
        Float_t delta = 0.002;

        buff->points = new Float_t[buff->numPoints*3];
        if (buff->points) {
            for (i = 0; i < fN; i++) {
                for (j = 0; j < mode; j++) {
                    for (k = 0; k < 2; k++) {
                        delta *= -1;
                        for (n = 0; n < 3; n++) {
                            buff->points[mode*6*i+6*j+3*k+n] =
                                fP[3*i+n] * (1 + (j == n ? delta : 0));
                        }
                    }
                }
            }
        }

        Int_t c = ((GetMarkerColor() % 8) - 1) * 4;     // Basic colors: 0, 1, ... 8
        if (c < 0) c = 0;

    //*-* Allocate memory for segments *-*
        buff->segs = new Int_t[buff->numSegs*3];
        if (buff->segs) {
            for (i = 0; i < buff->numSegs; i++) {
                buff->segs[3*i  ] = c;
                buff->segs[3*i+1] = 2*i;
                buff->segs[3*i+2] = 2*i+1;
            }
        }

        if (buff->points && buff->segs)    //If everything seems to be OK ...
            FillX3DBuffer(buff);
        else {                            // ... something very bad was happened
            gSize3D.numPoints -= buff->numPoints;
            gSize3D.numSegs   -= buff->numSegs;
            gSize3D.numPolys  -= buff->numPolys;
        }

        if (buff->points)   delete [] buff->points;
        if (buff->segs)     delete [] buff->segs;
        if (buff->polys)    delete [] buff->polys;
        if (buff)           delete    buff;
        FillX3DBuffer(buff);
    }
}


//______________________________________________________________________________
void TPolyMarker3D::PaintPolyMarker(Int_t n, Float_t *p, Marker_t, Option_t *)
{
//*-*-*-*-*-*-*-*-*Paint polymarker in CurrentPad World coordinates*-*-*-*-*-*-*-*
//*-*              ================================================

   if (n <= 0) return;

   //Create temorary storage
   TPoint *pxy = new TPoint[n];
   Float_t *x  = new Float_t[n];
   Float_t *y  = new Float_t[n];
   Float_t xndc[3], *ptr = p;

   TView *view = gPad->GetView();      //Get current 3-D view
   if(!view) return;                           //Check if `view` is valid

//*-*- convert points from world to pixel coordinates
   Int_t nin = 0;
   for (Int_t i = 0; i < n; i++) {
      view->WCtoNDC(ptr, xndc);
      ptr += 3;
      if (xndc[0] < gPad->GetX1() || xndc[0] > gPad->GetX2()) continue;
      if (xndc[1] < gPad->GetY1() || xndc[1] > gPad->GetY2()) continue;
      x[nin] = xndc[0];
      y[nin] = xndc[1];
      pxy[nin].fX = gPad->XtoPixel(x[nin]);
      pxy[nin].fY = gPad->YtoPixel(y[nin]);
      nin++;
   }

   TAttMarker::Modify();  //Change marker attributes only if necessary

//*-*- invoke the graphics subsystem
   if (!gPad->IsBatch()) gGXW->DrawPolyMarker(nin, pxy);


   if (gCurrentPS) {
      gCurrentPS->DrawPolyMarker(nin, x, y);
   }
   delete [] x;
   delete [] y;

   delete [] pxy;
}


//______________________________________________________________________________
void TPolyMarker3D::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Print PolyMarker Info*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                          =====================

   cout << "    TPolyMarker3D Printing N=" << fN << " Option=" << option << endl;
}

//______________________________________________________________________________
void TPolyMarker3D::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   out<<"   "<<endl;
   if (gROOT->ClassSaved(TPolyMarker3D::Class())) {
       out<<"   ";
   } else {
       out<<"   TPolyMarker3D *";
   }
   out<<"pmarker3D = new TPolyMarker3D("<<fN<<","<<GetMarkerStyle()<<","<<quote<<fOption<<quote<<");"<<endl;

   SaveMarkerAttributes(out,"pmarker3D",1,1,1);

   for (Int_t i=0;i<fN;i++) {
      out<<"   pmarker3D->SetPoint("<<i<<","<<fP[3*i]<<","<<fP[3*i+1]<<","<<fP[3*i+2]<<");"<<endl;
   }
   out<<"   pmarker3D->Draw();"<<endl;
}

//______________________________________________________________________________
void TPolyMarker3D::SetPoint(Int_t n, Float_t x, Float_t y, Float_t z)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*Set point n to x, y, z*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                        ======================

        if(n < 0 || n >= fN) return;    //Check for range

        fP[kDimension*n+0] = x;
        fP[kDimension*n+1] = y;
        fP[kDimension*n+2] = z;
}


//______________________________________________________________________________
void TPolyMarker3D::SetPolyMarker(Int_t n, Float_t *p, Marker_t marker, Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Loads n points from array p*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===========================

       fN = n;
       if (fP) delete [] fP;
       fP = new Float_t [kDimension*fN];
       for (Int_t i = 0; i < kDimension*fN; i++) {
          if (p) fP[i] = p[i];
       }
       SetMarkerStyle(marker);
       fOption = option;
}

//______________________________________________________________________________
void TPolyMarker3D::Sizeof3D() const
{
//*-*-*-*-*-*Return total size of this 3-D shape with its attributes*-*-*-*-*-*-*
//*-*        =======================================================

    Int_t mode;

    if (fN > 10000) mode = 1;         // One line marker    '-'
    else if (fN > 3000) mode = 2;     // Two lines marker   '+'
    else mode = 3;                    // Three lines marker '*'

    gSize3D.numSegs   += fN*mode;
    gSize3D.numPoints += fN*mode*2;
    gSize3D.numPolys  += 0;
}


//_______________________________________________________________________
void TPolyMarker3D::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   if (b.IsReading()) {
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TObject::Streamer(b);
      TAttMarker::Streamer(b);
      b >> fN;
      if (fN) {
         fP = new Float_t[3*fN];
         b.ReadFastArray(fP,3*fN);
      }
      fOption.Streamer(b);
   } else {
      b.WriteVersion(TPolyMarker3D::IsA());
      TObject::Streamer(b);
      TAttMarker::Streamer(b);
      b << fN;
      if (fN) b.WriteFastArray(fP, 3*fN);
      fOption.Streamer(b);
   }
}
