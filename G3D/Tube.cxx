//*CMZ :  2.00/12 07/10/98  10.33.31  by  Rene Brun
//*CMZ :  2.00/10 03/07/98  21.20.44  by  Rene Brun
//*CMZ :  2.00/09 20/06/98  19.16.57  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/00 12/01/98  08.44.13  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  09.38.57  by  Rene Brun
//*-- Author :    Nenad Buncic   18/09/95

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

#include "TTUBE.h"
#include "TNode.h"
#include "TView.h"
#include "TVirtualPad.h"

#ifndef Root_TGLKernelABC
#include "TGLKernelABC.h"
#endif

ClassImp(TTUBE)


//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/tube.gif"> </P> End_Html
// TUBE is a tube. It has 6 parameters:
//
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - rmin       inside radius
//     - rmax       outside radius
//     - dz         half length in z




//______________________________________________________________________________
TTUBE::TTUBE()
{
//*-*-*-*-*-*-*-*-*-*-*-*TUBE shape default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ==============================

   fCoTab = 0;
   fSiTab = 0;
   fAspectRatio =1;
}


//______________________________________________________________________________
TTUBE::TTUBE(Text_t *name, Text_t *title, Text_t *material, Float_t rmin, Float_t rmax, Float_t dz,Float_t aspect)
      : TShape(name, title,material)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*TUBE shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

    fRmin  = rmin;
    fRmax  = rmax;

    fDz   = dz;
    fNdiv = 0;

    fCoTab = 0;
    fSiTab = 0;

    fAspectRatio = aspect;

    MakeTableOfCoSin();
}

//______________________________________________________________________________
TTUBE::TTUBE(Text_t *name, Text_t *title, Text_t *material, Float_t rmax, Float_t dz)
      : TShape(name, title,material)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*TUBE shape "simplified" constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===================================

    fRmin  = 0;
    fRmax  = rmax;

    fDz   = dz;
    fNdiv = 0;

    fCoTab = 0;
    fSiTab = 0;

    fAspectRatio = 1;

    MakeTableOfCoSin();
}
//______________________________________________________________________________
void TTUBE::MakeTableOfCoSin()
{
    const Double_t PI  = TMath::ATan(1) * 4.0;
    const Double_t TWOPI  =2*PI;

    Int_t j;
    Int_t n = GetNumberOfDivisions ();
    if (fCoTab)
        delete [] fCoTab; // Delete the old tab if any
        fCoTab = new Double_t [n];
    if (!fCoTab ) {
        Error("MakeTableOfCoSin()","No cos table done");
        return;
    }

    if (fSiTab)
        delete [] fSiTab; // Delete the old tab if any
    fSiTab = new Double_t [n];
    if (!fSiTab )
    {
        Error("MakeTableOfCoSin()","No sin table done");
        return;
    }

    Double_t range = TWOPI;

    Double_t angstep = range/n;

    Double_t ph = 0;
    Double_t si,co;
    for (j = 0; j < n; j++)
    {
        co = TMath::Cos(ph);
        fCoTab[j] = co;
        si = TMath::Sqrt(TMath::Abs(1.0 - co*co));
        if (ph > PI) si = -si;
        fSiTab[j] = si;
        ph += angstep;
    }

}

//______________________________________________________________________________
TTUBE::~TTUBE()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*TUBE shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

   delete [] fCoTab;
   delete [] fSiTab;
}

//______________________________________________________________________________
Int_t TTUBE::DistancetoPrimitive(Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*Compute distance from point px,py to a TUBE*-*-*-*-*-*-*
//*-*            ===========================================
//*-*
//*-*  Compute the closest distance of approach from point px,py to each
//*-*  computed outline point of the TUBE.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   Int_t dist = 9999;

   TView *view = gPad->GetView();
   if (!view) return dist;

   Int_t n = GetNumberOfDivisions();
   Int_t numPoints = n*4;
   Float_t *points = new Float_t[3*numPoints];
   SetPoints(points);
   Float_t dpoint, dpoint2, x1, y1, xndc[3];
   for (Int_t i = 0; i < numPoints; i++) {
      gNode->Local2Master(&points[3*i],&points[3*i]);
      view->WCtoNDC(&points[3*i], xndc);
      x1     = gPad->XtoAbsPixel(xndc[0]);
      y1     = gPad->YtoAbsPixel(xndc[1]);
      dpoint2= (px-x1)*(px-x1) + (py-y1)*(py-y1);
      dpoint = TMath::Sqrt(dpoint2);
      if (dpoint < dist) dist = (Int_t)dpoint;
   }
   delete [] points;
   return dist;
}

//______________________________________________________________________________
void TTUBE::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*Paint this 3-D shape with its current attributes*-*-*-*-*-*-*-*
//*-*            ================================================

   Int_t i, j;
   Int_t n = GetNumberOfDivisions();
   const Int_t numpoints = 4*n;

//*-* Allocate memory for points *-*

   Float_t *points = new Float_t[3*numpoints];
   if (!points) return;

   SetPoints(points);

   if (gPad->GetView3D()) PaintGLPoints(points);

   for (i = 0; i < numpoints; i++)
            gNode->Local2Master(&points[3*i],&points[3*i]);

    X3DBuffer *buff = new X3DBuffer;
    if (buff) {
        buff->numPoints = numpoints;
        buff->numSegs   = n*8;
        buff->numPolys  = n*4;
    }


//*-* Allocate memory for points *-*

    buff->points = points;

    Int_t c = ((GetLineColor() % 8) - 1) * 4;     // Basic colors: 0, 1, ... 7
    if (c < 0) c = 0;

//*-* Allocate memory for segments *-*

    buff->segs = new Int_t[buff->numSegs*3];
    if (buff->segs) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < n; j++) {
                buff->segs[(i*n+j)*3  ] = c;
                buff->segs[(i*n+j)*3+1] = i*n+j;
                buff->segs[(i*n+j)*3+2] = i*n+j+1;
            }
            buff->segs[(i*n+j-1)*3+2] = i*n;
        }
        for (i = 4; i < 6; i++) {
            for (j = 0; j < n; j++) {
                buff->segs[(i*n+j)*3  ] = c+1;
                buff->segs[(i*n+j)*3+1] = (i-4)*n+j;
                buff->segs[(i*n+j)*3+2] = (i-2)*n+j;
            }
        }
        for (i = 6; i < 8; i++) {
            for (j = 0; j < n; j++) {
                buff->segs[(i*n+j)*3  ] = c;
                buff->segs[(i*n+j)*3+1] = 2*(i-6)*n+j;
                buff->segs[(i*n+j)*3+2] = (2*(i-6)+1)*n+j;
            }
        }
    }

//*-* Allocate memory for polygons *-*

    Int_t indx = 0;

    buff->polys = new Int_t[buff->numPolys*6];
    if (buff->polys) {
        for (i = 0; i < 2; i++) {
            for (j = 0; j < n; j++) {
                indx = 6*(i*n+j);
                buff->polys[indx  ] = c;
                buff->polys[indx+1] = 4;
                buff->polys[indx+2] = i*n+j;
                buff->polys[indx+3] = (4+i)*n+j;
                buff->polys[indx+4] = (2+i)*n+j;
                buff->polys[indx+5] = (4+i)*n+j+1;
            }
            buff->polys[indx+5] = (4+i)*n;
        }
        for (i = 2; i < 4; i++) {
            for (j = 0; j < n; j++) {
                indx = 6*(i*n+j);
                buff->polys[indx  ] = c+(i-2)*2+1;
                buff->polys[indx+1] = 4;
                buff->polys[indx+2] = (i-2)*2*n+j;
                buff->polys[indx+3] = (4+i)*n+j;
                buff->polys[indx+4] = ((i-2)*2+1)*n+j;
                buff->polys[indx+5] = (4+i)*n+j+1;
            }
            buff->polys[indx+5] = (4+i)*n;
        }
    }

    //*-* Paint in the pad
    PaintShape(buff);

    if (strstr(option, "x3d")) {
        if(buff && buff->points && buff->segs)
            FillX3DBuffer(buff);
        else {
            gSize3D.numPoints -= buff->numPoints;
            gSize3D.numSegs   -= buff->numSegs;
            gSize3D.numPolys  -= buff->numPolys;
        }
    }

    if (buff->points)   delete [] buff->points;
    if (buff->segs)     delete [] buff->segs;
    if (buff->polys)    delete [] buff->polys;
    if (buff)           delete    buff;
}

//______________________________________________________________________________
void TTUBE::PaintGLPoints(Float_t *vertex)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Paint BRIK via OpenGL *-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                            =====================
    gGLKernel->PaintCone(vertex,GetNumberOfDivisions(),2);
}

//______________________________________________________________________________
void TTUBE::SetNumberOfDivisions (Int_t ndiv)
{
//*-*-*-*-*Set number of divisions used to draw this tube*-*-*-*-*-*-*-*-*-*-*
//*-*      ==============================================

   fNdiv = ndiv;
   MakeTableOfCoSin();
}

//______________________________________________________________________________
void TTUBE::SetPoints(Float_t *buff)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Create TUBE points*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                          ==================

    Float_t dz;
    Int_t j, n;

    n = GetNumberOfDivisions();

    dz = fDz;

    Int_t indx = 0;


    if (buff) {
//*-* We've to checxk whether the table does exist and create it
//*-* since fCoTab/fSiTab are not saved with any TShape::Streamer function
        if (!fCoTab)   MakeTableOfCoSin();

        for (j = 0; j < n; j++) {
            buff[indx+6*n] = buff[indx] = fRmin * fCoTab[j];
            indx++;
            buff[indx+6*n] = buff[indx] = fAspectRatio*fRmin * fSiTab[j];
            indx++;
            buff[indx+6*n] = dz;
            buff[indx]     =-dz;
            indx++;
        }
        for (j = 0; j < n; j++) {
            buff[indx+6*n] = buff[indx] = fRmax * fCoTab[j];
            indx++;
            buff[indx+6*n] = buff[indx] = fAspectRatio*fRmax * fSiTab[j];
            indx++;
            buff[indx+6*n]= dz;
            buff[indx]    =-dz;
            indx++;
        }
    }
}

//______________________________________________________________________________
void TTUBE::Sizeof3D() const
{
//*-*-*-*-*-*Return total X3D size of this shape with its attributes*-*-*-*-*-*-*
//*-*        =======================================================

    Int_t n = GetNumberOfDivisions();

    gSize3D.numPoints += n*4;
    gSize3D.numSegs   += n*8;
    gSize3D.numPolys  += n*4;
}


//______________________________________________________________________________
void TTUBE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTUBE.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TShape::Streamer(R__b);
      R__b >> fRmin;
      R__b >> fRmax;
      R__b >> fDz;
      R__b >> fNdiv;
      if (R__v > 1) R__b >> fAspectRatio;
      //R__b.ReadArray(fSiTab);
      //R__b.ReadArray(fCoTab);
   } else {
      R__b.WriteVersion(TTUBE::IsA());
      TShape::Streamer(R__b);
      R__b << fRmin;
      R__b << fRmax;
      R__b << fDz;
      R__b << fNdiv;
      R__b << fAspectRatio;
      //R__b.WriteArray(fSiTab, __COUNTER__);
      //R__b.WriteArray(fCoTab, __COUNTER__);
   }
}

