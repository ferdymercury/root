//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/02 03/09/99  11.39.45  by  Rene Brun
//*CMZ :  2.22/04 03/06/99  16.40.45  by  Rene Brun
//*CMZ :  2.22/01 19/05/99  11.11.38  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.21/07 21/02/99  19.09.03  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Nenad Buncic   18/09/95

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

#include "TTUBE.h"
#include "TNode.h"
#include "TView.h"
#include "TVirtualPad.h"

#ifndef Root_TVirtualGL
#include "TVirtualGL.h"
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
TTUBE::TTUBE(const char *name, const char *title, const char *material, Float_t rmin, Float_t rmax, Float_t dz,Float_t aspect)
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
TTUBE::TTUBE(const char *name, const char *title, const char *material, Float_t rmax, Float_t dz)
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
    for (j = 0; j < n; j++)
    {
        ph = j*angstep;
        fCoTab[j] = TMath::Cos(ph);
        fSiTab[j] = TMath::Sin(ph);
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
   Int_t n = GetNumberOfDivisions();
   Int_t numPoints = n*4;
   return ShapeDistancetoPrimitive(numPoints,px,py);
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

   Bool_t rangeView = option && *option && strcmp(option,"range")==0 ? kTRUE : kFALSE;
   if (!rangeView && gPad->GetView3D()) PaintGLPoints(points);

//==   for (i = 0; i < numpoints; i++)
//==            gNode->Local2Master(&points[3*i],&points[3*i]);

    X3DBuffer *buff = new X3DBuffer;
    if (buff) {
        buff->numPoints = numpoints;
        if (strstr(option, "x3d"))  buff->numSegs   = n*8;
        else                        buff->numSegs   = n*6;
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
        if (strstr(option, "x3d")) {
           for (i = 6; i < 8; i++) {
              for (j = 0; j < n; j++) {
                 buff->segs[(i*n+j)*3  ] = c;
                 buff->segs[(i*n+j)*3+1] = 2*(i-6)*n+j;
                 buff->segs[(i*n+j)*3+2] = (2*(i-6)+1)*n+j;
              }
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
    PaintShape(buff,rangeView);

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
    gVirtualGL->PaintCone(vertex,GetNumberOfDivisions(),2);
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

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c);
      TShape::Streamer(R__b);
      R__b >> fRmin;
      R__b >> fRmax;
      R__b >> fDz;
      R__b >> fNdiv;
      if (R__v > 1) R__b >> fAspectRatio;
      //R__b.ReadArray(fSiTab);
      //R__b.ReadArray(fCoTab);
      R__b.CheckByteCount(R__s, R__c, TTUBE::IsA());
   } else {
      R__c = R__b.WriteVersion(TTUBE::IsA(), kTRUE);
      TShape::Streamer(R__b);
      R__b << fRmin;
      R__b << fRmax;
      R__b << fDz;
      R__b << fNdiv;
      R__b << fAspectRatio;
      //R__b.WriteArray(fSiTab, __COUNTER__);
      //R__b.WriteArray(fCoTab, __COUNTER__);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

