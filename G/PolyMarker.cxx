//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  10.11.31  by  Rene Brun
//*CMZ :  2.00/00 17/02/98  16.03.13  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.41.08  by  Fons Rademakers
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
#include "TPolyMarker.h"

ClassImp(TPolyMarker)

//______________________________________________________________________________
//
//  a PolyMarker is defined by an array on N points in a 2-D space.
// At each point x[i], y[i] a marker is drawn.
// Marker attributes are managed by TAttMarker.
// See TMarker for the list of possible marker types.
//

//______________________________________________________________________________
TPolyMarker::TPolyMarker(): TObject()
{
   fX = fY = 0;

}

//______________________________________________________________________________
TPolyMarker::TPolyMarker(Int_t n, Option_t *option)
      :TObject(), TAttMarker()
{

   fN = n;
   fX = new Float_t [fN];
   fY = new Float_t [fN];
   fOption = option;
   SetBit(kCanDelete);
}

//______________________________________________________________________________
TPolyMarker::TPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *option)
      :TObject(), TAttMarker()
{

   fN = n;
   fX = new Float_t [fN];
   fY = new Float_t [fN];
   if (!x || !y) return;
   for (Int_t i=0; i<fN;i++) { fX[i] = x[i]; fY[i] = y[i]; }
   fOption = option;
   SetBit(kCanDelete);
}

//______________________________________________________________________________
TPolyMarker::~TPolyMarker()
{
   if (fX) delete [] fX;
   if (fY) delete [] fY;

}

//______________________________________________________________________________
TPolyMarker::TPolyMarker(const TPolyMarker &polymarker)
{
   ((TPolyMarker&)polymarker).Copy(*this);
}

//______________________________________________________________________________
void TPolyMarker::Copy(TObject &obj)
{

   TObject::Copy(obj);
   TAttMarker::Copy(((TPolyMarker&)obj));
   ((TPolyMarker&)obj).fN = fN;
   ((TPolyMarker&)obj).fX = new Float_t [fN];
   ((TPolyMarker&)obj).fY = new Float_t [fN];
   for (Int_t i=0; i<fN;i++) { ((TPolyMarker&)obj).fX[i] = fX[i], ((TPolyMarker&)obj).fY[i] = fY[i]; }
   ((TPolyMarker&)obj).fOption = fOption;
}

//______________________________________________________________________________
void TPolyMarker::Draw(Option_t *option)
{

   AppendPad(option);

}

//______________________________________________________________________________
void TPolyMarker::DrawPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *)
{
   TPolyMarker *newpolymarker = new TPolyMarker();
   newpolymarker->fN =n;
   newpolymarker->fX = new Float_t [fN];
   newpolymarker->fY = new Float_t [fN];
   for (Int_t i=0; i<fN;i++) { newpolymarker->fX[i] = x[i], newpolymarker->fY[i] = y[i]; }
   TAttMarker::Copy(*newpolymarker);
   newpolymarker->fOption = fOption;
   newpolymarker->SetBit(kCanDelete);
   newpolymarker->AppendPad();
}

//______________________________________________________________________________
void TPolyMarker::ExecuteEvent(Int_t, Int_t, Int_t)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function must be implemented to realize the action
//  corresponding to the mouse click on the object in the window
//
}

//______________________________________________________________________________
void TPolyMarker::ls(Option_t *)
{
   IndentLevel();
   printf("TPolyMarker  N=%d\n",fN);
}

//______________________________________________________________________________
void TPolyMarker::Paint(Option_t *option)
{
   PaintPolyMarker(fN, fX, fY, option);
}

//______________________________________________________________________________
void TPolyMarker::PaintPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *option)
{

   TAttMarker::Modify();  //Change marker attributes only if necessary
   gPad->PaintPolyMarker(n,x,y,option);

}

//______________________________________________________________________________
void TPolyMarker::Print(Option_t *)
{

   printf("TPolyMarker  N=%d\n",fN);
}

//______________________________________________________________________________
void TPolyMarker::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   out<<"   "<<endl;
   out<<"   Float_t *dum = 0;"<<endl;
   if (gROOT->ClassSaved(TPolyMarker::Class())) {
       out<<"   ";
   } else {
       out<<"   TPolyMarker *";
   }
   out<<"pmarker = new TPolyMarker("<<fN<<",dum,dum,"<<quote<<fOption<<quote<<");"<<endl;

   SaveMarkerAttributes(out,"pmarker",1,1,1);

   for (Int_t i=0;i<fN;i++) {
      out<<"   pmarker->SetPoint("<<i<<","<<fX[i]<<","<<fY[i]<<");"<<endl;
   }
   out<<"   pmarker->Draw();"<<endl;
}

//______________________________________________________________________________
void TPolyMarker::SetPoint(Int_t point, Float_t x, Float_t y)
{
   if (point < 0 || point >= fN) return;
   fX[point] = x;
   fY[point] = y;
}

//______________________________________________________________________________
void TPolyMarker::SetPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *option)
{
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
void TPolyMarker::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   if (b.IsReading()) {
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TObject::Streamer(b);
      TAttMarker::Streamer(b);
      b >> fN;
      fX = new Float_t[fN];
      fY = new Float_t[fN];
      b.ReadFastArray(fX,fN);
      b.ReadFastArray(fY,fN);
      fOption.Streamer(b);
   } else {
      b.WriteVersion(TPolyMarker::IsA());
      TObject::Streamer(b);
      TAttMarker::Streamer(b);
      b << fN;
      b.WriteFastArray(fX,fN);
      b.WriteFastArray(fY,fN);
      fOption.Streamer(b);
   }
}
