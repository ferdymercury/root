//*CMZ :  2.21/05 07/02/99  11.39.40  by  Rene Brun
//*CMZ :  2.21/03 21/01/99  18.54.32  by  Rene Brun
//*CMZ :  2.21/00 28/12/98  18.40.32  by  Rene Brun
//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  21.28.58  by  Rene Brun
//*CMZ :  2.00/04 03/04/98  17.54.31  by  Rene Brun
//*CMZ :  2.00/00 16/02/98  12.44.26  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.31.27  by  Fons Rademakers
//*-- Author :    Rene Brun   17/10/95

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
#include "TPaveLabel.h"
#include "TVirtualPad.h"

ClassImp(TPaveLabel)

//______________________________________________________________________________
//*  A PaveLabel is a Pave (see TPave) with a text centered in the Pave.
//Begin_Html
/*
<img src="gif/pavelabel.gif">
*/
//End_Html
//

//______________________________________________________________________________
TPaveLabel::TPaveLabel(): TPave(), TAttText()
{
//*-*-*-*-*-*-*-*-*-*-*pavelabel default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =============================
}

//______________________________________________________________________________
TPaveLabel::TPaveLabel(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2, const Text_t *label, Option_t *option)
           :TPave(x1,y1,x2,y2,3,option), TAttText(22,0,1,62,0.7)
{
//*-*-*-*-*-*-*-*-*-*-*pavelabel normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
// a PaveLabel is a Pave with a label centered in the Pave
// The Pave is by default defined bith bordersize=5 and option ="br".
// The text size is automatically computed as a function of the pave size.
//

   fLabel  = label;
}

//______________________________________________________________________________
TPaveLabel::~TPaveLabel()
{
//*-*-*-*-*-*-*-*-*-*-*pavelabel default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
}

//______________________________________________________________________________
TPaveLabel::TPaveLabel(const TPaveLabel &pavelabel)
{
   ((TPaveLabel&)pavelabel).Copy(*this);
}

//______________________________________________________________________________
void TPaveLabel::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this pavelabel to pavelabel*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ================================

   TPave::Copy(obj);
   TAttText::Copy(((TPaveLabel&)obj));
   ((TPaveLabel&)obj).fLabel      = fLabel;
}

//______________________________________________________________________________
void TPaveLabel::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this pavelabel with its current attributes*-*-*-*-*
//*-*                  ===============================================

   Option_t *opt;
   if (strlen(option)) opt = option;
   else                opt = GetOption();

   AppendPad(opt);

}

//______________________________________________________________________________
void TPaveLabel::DrawPaveLabel(Coord_t x1, Coord_t y1, Coord_t x2, Coord_t y2, const Text_t *label, Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this pavelabel with new coordinates*-*-*-*-*-*-*-*
//*-*                  ========================================
   TPaveLabel *newpavelabel = new TPaveLabel(x1,y1,x2,y2,label);
   newpavelabel->SetBit(kCanDelete);
   newpavelabel->AppendPad();
}

//______________________________________________________________________________
void TPaveLabel::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Paint this pavelabel with its current attributes*-*-*-*
//*-*                  ================================================

//*-* Convert from NDC to pad coordinates
   TPave::ConvertNDCtoPad();

   PaintPaveLabel(fX1, fY1, fX2, fY2, GetLabel(), option);

}


//______________________________________________________________________________
void TPaveLabel::PaintPaveLabel(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2,
                      const Text_t *label ,Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this pavelabel with new coordinates*-*-*-*-*-*-*-*
//*-*                  ========================================

   Int_t nch = strlen(label);

//*-*- Draw the pave
   TPave::PaintPave(x1,y1,x2,y2,GetBorderSize(),option);

   Float_t nspecials = 0;
   for (Int_t i=0;i<nch;i++) {
      if (label[i] == '!') nspecials += 1;
      if (label[i] == '?') nspecials += 1.5;
      if (label[i] == '#') nspecials += 1;
      if (label[i] == '`') nspecials += 1;
      if (label[i] == '^') nspecials += 1.5;
      if (label[i] == '~') nspecials += 1;
      if (label[i] == '&') nspecials += 2;
      if (label[i] == '\\') nspecials += 3;  // octal characters very likely
   }
   nch -= Int_t(nspecials + 0.5);
   if (nch <= 0) return;

//*-*- Draw label
   Float_t textsize  = GetTextSize();
   Int_t ypixel      = gPad->YtoPixel(y1) - gPad->YtoPixel(y2);
   Float_t labelsize = textsize*ypixel;
   Float_t wxlabel   = gPad->XtoPixel(x2) - gPad->XtoPixel(x1);
   if (nch*0.5*labelsize > wxlabel) labelsize = wxlabel/(nch*0.5);
   if (labelsize < 0.5*ypixel && labelsize < 10) labelsize = 0.5*ypixel;
   Float_t wh   = (Float_t)gPad->XtoPixel(gPad->GetX2());
   Float_t hh   = (Float_t)gPad->YtoPixel(gPad->GetY1());
   if (wh < hh)  labelsize   /= wh;
   else          labelsize   /= hh;
   SetTextSize(labelsize);
   TAttText::Modify();
   Int_t halign = GetTextAlign()/10;
   Int_t valign = GetTextAlign()%10;
   Float_t x = 0.5*(x1+x2);
   if (halign == 1) x = x1 + 0.02*(x2-x1);
   if (halign == 3) x = x2 - 0.02*(x2-x1);
   Float_t y = 0.5*(y1+y2);
   if (valign == 1) y = y1 + 0.02*(y2-y1);
   if (valign == 3) y = y2 - 0.02*(y2-y1);
   gPad->PaintText(x, y, GetLabel());
   SetTextSize(textsize);
}

//______________________________________________________________________________
void TPaveLabel::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Dump this pavelabel with its attributes*-*-*-*-*-*-*-*
//*-*                  =======================================
   TPave::Print(option);
}

//______________________________________________________________________________
void TPaveLabel::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   out<<"   "<<endl;
   if (gROOT->ClassSaved(TPaveLabel::Class())) {
       out<<"   ";
   } else {
       out<<"   TPaveLabel *";
   }
   out<<"pl = new TPaveLabel("<<fX1<<","<<fY1<<","<<fX2<<","<<fY2
      <<","<<quote<<fLabel<<quote<<","<<quote<<fOption<<quote<<");"<<endl;

   SaveFillAttributes(out,"pl",0,1001);
   SaveLineAttributes(out,"pl",1,1,1);
   SaveTextAttributes(out,"pl",22,0,1,62,0);

   out<<"   pl->Draw();"<<endl;
}
