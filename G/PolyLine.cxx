//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.00/12 02/09/98  17.38.50  by  Fons Rademakers
//*CMZ :  2.00/11 18/08/98  10.10.01  by  Rene Brun
//*CMZ :  2.00/00 17/02/98  16.02.48  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.38.47  by  Fons Rademakers
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

#include <fstream.h>
#include <iostream.h>

#include "TROOT.h"
#include "TVirtualPad.h"
#include "TPolyLine.h"

ClassImp(TPolyLine)

//______________________________________________________________________________
//
//  a PolyLine is defined by an array on N points in a 2-D space.

//______________________________________________________________________________
TPolyLine::TPolyLine(): TObject()
{
//*-*-*-*-*-*-*-*-*-*-*PolyLine default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
   fX = 0;
   fY = 0;
}

//______________________________________________________________________________
TPolyLine::TPolyLine(Int_t n, Option_t *option)
      :TObject(), TAttLine(), TAttFill()
{
//*-*-*-**-*-*PolyLine normal constructor without initialisation*-*-*-*-*-*-*-*
//*-*         ==================================================
   fN = n;
   fX = new Float_t[fN];
   fY = new Float_t[fN];
   fOption = option;
}

//______________________________________________________________________________
TPolyLine::TPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *option)
      :TObject(), TAttLine(), TAttFill()
{
//*-*-*-*-*-*-*-*-*-*-*PolyLine normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===========================
   fN = n;
   fX = new Float_t[fN];
   fY = new Float_t[fN];
   if (!x || !y) return;
   for (Int_t i=0; i<fN;i++) { fX[i] = x[i]; fY[i] = y[i];}
   fOption = option;
}

//______________________________________________________________________________
TPolyLine::~TPolyLine()
{
//*-*-*-*-*-*-*-*-*-*-*PolyLine default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===========================
   if (fX) delete [] fX;
   if (fY) delete [] fY;
}

//______________________________________________________________________________
TPolyLine::TPolyLine(const TPolyLine &polyline)
{
   ((TPolyLine&)polyline).Copy(*this);
}

//______________________________________________________________________________
void TPolyLine::Copy(TObject &obj)
{
//*-*-*-*-*-*-*Copy this polyline to polyline*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*          ==============================

   TObject::Copy(obj);
   TAttLine::Copy(((TPolyLine&)obj));
   TAttFill::Copy(((TPolyLine&)obj));
   ((TPolyLine&)obj).fN = fN;
   ((TPolyLine&)obj).fX = new Float_t[fN];
   ((TPolyLine&)obj).fY = new Float_t[fN];
   for (Int_t i=0; i<fN;i++)  {((TPolyLine&)obj).fX[i] = fX[i]; ((TPolyLine&)obj).fY[i] = fY[i];}
   ((TPolyLine&)obj).fOption = fOption;
}

//______________________________________________________________________________
Int_t TPolyLine::DistancetoPrimitive(Int_t, Int_t)
{
//*-*-*-*-*-*-*-*-*Compute distance from point px,py to a polyline*-*-*-*-*-*
//*-*              ===============================================
//  Compute the closest distance of approach from point px,py to each segment
//  of the polyline.
//  Returns when the distance found is below DistanceMaximum.
//  The distance is computed in pixels units.
//
   return 9999;
}

//______________________________________________________________________________
void TPolyLine::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*Draw this polyline with its current attributes*-*-*-*-*-*-*
//*-*              ==============================================

   AppendPad(option);

}

//______________________________________________________________________________
void TPolyLine::DrawPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *option)
{
//*-*-*-*-*-*-*-*-*Draw this polyline with new coordinates*-*-*-*-*-*-*-*-*-*
//*-*              ========================================
   TPolyLine *newpolyline = new TPolyLine();
   newpolyline->fN =n;
   newpolyline->fX = new Float_t[fN];
   newpolyline->fY = new Float_t[fN];
   for (Int_t i=0; i<fN;i++) { newpolyline->fX[i] = x[i]; newpolyline->fY[i] = y[i];}
   TAttLine::Copy(*newpolyline);
   TAttFill::Copy(*newpolyline);
   newpolyline->fOption = fOption;
   newpolyline->SetBit(kCanDelete);
   newpolyline->AppendPad(option);
}

//______________________________________________________________________________
void TPolyLine::ExecuteEvent(Int_t, Int_t, Int_t)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function must be implemented to realize the action
//  corresponding to the mouse click on the object in the window
//
}



//______________________________________________________________________________
void TPolyLine::ls(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*List this polyline with its attributes*-*-*-*-*-*-*-*-*
//*-*                ======================================
   IndentLevel();
   printf("TPolyLine  N=%d\n",fN);
}

//______________________________________________________________________________
void TPolyLine::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*Paint this polyline with its current attributes*-*-*-*-*-*-*
//*-*              ===============================================
   PaintPolyLine(fN, fX, fY, option);
}

//______________________________________________________________________________
void TPolyLine::PaintPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *option)
{
//*-*-*-*-*-*-*-*-*Draw this polyline with new coordinates*-*-*-*-*-*-*-*-*-*
//*-*              =======================================


   TAttLine::Modify();  //Change line attributes only if necessary
   TAttFill::Modify();  //Change fill area attributes only if necessary
   gPad->PaintPolyLine(n,x,y,option);
}

//______________________________________________________________________________
void TPolyLine::PaintPolyLineNDC(Int_t n, Float_t *x, Float_t *y, Option_t *option)
{
//*-*-*-*-*-*-*-*-*Draw this polyline with new coordinates in NDC*-*-*-*-*-*-*
//*-*              ==============================================

   TAttLine::Modify();  //Change line attributes only if necessary
   TAttFill::Modify();  //Change fill area attributes only if necessary
   gPad->PaintPolyLineNDC(n,x,y,option);
}

//______________________________________________________________________________
void TPolyLine::Print(Option_t *)
{
//*-*-*-*-*-*-*-*-*Dump this polyline with its attributes*-*-*-*-*-*-*-*-*-*
//*-*              ======================================

   printf("PolyLine  N=%d\n",fN);
}

//______________________________________________________________________________
void TPolyLine::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   out<<"   "<<endl;
   out<<"   Float_t *dum = 0;"<<endl;
   if (gROOT->ClassSaved(TPolyLine::Class())) {
       out<<"   ";
   } else {
       out<<"   TPolyLine *";
   }
   out<<"pline = new TPolyLine("<<fN<<",dum,dum,"<<quote<<fOption<<quote<<");"<<endl;

   SaveFillAttributes(out,"pline",0,1001);
   SaveLineAttributes(out,"pline",1,1,1);

   for (Int_t i=0;i<fN;i++) {
      out<<"   pline->SetPoint("<<i<<","<<fX[i]<<","<<fY[i]<<");"<<endl;
   }
   out<<"   pline->Draw();"<<endl;
}

//______________________________________________________________________________
void TPolyLine::SetPoint(Int_t point, Float_t x, Float_t y)
{
//*-*-*-*-*-*-*-*-*-*-*-*Initialize one point of the polyline*-*-*-*-*-*-*-*-*
//*-*                    ====================================
       if (point < 0 || point >= fN) return;
       fX[point] = x;
       fY[point] = y;
}

//______________________________________________________________________________
void TPolyLine::SetPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*Set new values for this polyline*-*-*-*-*-*-*-*-*-*
//*-*                    ================================
       fN =n;
       if (fX) delete [] fX;
       if (fY) delete [] fY;
       fX = new Float_t[fN];
       fY = new Float_t[fN];
       for (Int_t i=0; i<fN;i++) {
          if (x) fX[i] = x[i];
          if (y) fY[i] = y[i];
       }
       fOption = option;
}

//_______________________________________________________________________
void TPolyLine::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   if (b.IsReading()) {
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TObject::Streamer(b);
      TAttLine::Streamer(b);
      TAttFill::Streamer(b);
      b >> fN;
      fX = new Float_t[fN];
      fY = new Float_t[fN];
      b.ReadFastArray(fX,fN);
      b.ReadFastArray(fY,fN);
      fOption.Streamer(b);
   } else {
      b.WriteVersion(TPolyLine::IsA());
      TObject::Streamer(b);
      TAttLine::Streamer(b);
      TAttFill::Streamer(b);
      b << fN;
      b.WriteFastArray(fX,fN);
      b.WriteFastArray(fY,fN);
      fOption.Streamer(b);
   }
}
