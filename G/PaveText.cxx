//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.00/13 30/10/98  09.17.34  by  Valery Fine
//*CMZ :  2.00/11 18/08/98  21.32.38  by  Rene Brun
//*CMZ :  2.00/04 03/04/98  17.50.48  by  Rene Brun
//*CMZ :  2.00/00 16/02/98  13.04.51  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  09.30.58  by  Rene Brun
//*-- Author :    Rene Brun   20/10/95

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
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "TROOT.h"
#include "TPaveText.h"
#include "TVirtualPad.h"
#include "TError.h"

ClassImp(TPaveText)

//______________________________________________________________________________
//  A PaveText is a Pave (see TPave) with text,lines or/and boxes.
//Begin_Html
/*
<img src="gif/pavetext.gif">
*/
//End_Html
//

//______________________________________________________________________________
TPaveText::TPaveText(): TPave(), TAttText()
{
//*-*-*-*-*-*-*-*-*-*-*pavetext default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =============================

   fLines = 0;
}

//______________________________________________________________________________
TPaveText::TPaveText(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2, Option_t *option)
           :TPave(x1,y1,x2,y2,4,option), TAttText(22,0,1,62,0)
{
//*-*-*-*-*-*-*-*-*-*-*pavetext normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
// a PaveText is a Pave with several lines of text
// The Pave is by default defined bith bordersize=5 and option ="br".
// The individual text items are entered via AddText
// By default, text items inherits from the default pavetext AttText.
//

   fLines   = new TList(this);
   fMargin  = 0.05;
   fLongest = 0;
}

//______________________________________________________________________________
TPaveText::~TPaveText()
{
//*-*-*-*-*-*-*-*-*-*-*pavetext default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   if (!TestBit(kNotDeleted)) return;
   if (fLines) fLines->Delete();
   delete fLines;
   fLines = 0;
}

//______________________________________________________________________________
TPaveText::TPaveText(const TPaveText &pavetext)
{
   ((TPaveText&)pavetext).Copy(*this);
}

//______________________________________________________________________________
TBox *TPaveText::AddBox(Float_t x1, Float_t y1, Float_t x2, Float_t y2)
{
//*-*-*-*-*-*-*-*-*Add a new graphics box to this pavetext*-*-*-*-*-*-*-*-*-*
//*-*              =======================================

   TBox *newbox = new TBox(x1,y1,x2,y2);

   fLines->Add(newbox);
   return newbox;
}

//______________________________________________________________________________
TLine *TPaveText::AddLine(Float_t x1, Float_t y1, Float_t x2, Float_t y2)
{
//*-*-*-*-*-*-*-*-*Add a new graphics line to this pavetext*-*-*-*-*-*-*-*-*-*
//*-*              ========================================

   TLine *newline = new TLine(x1,y1,x2,y2);

   fLines->Add(newline);
   return newline;
}

//______________________________________________________________________________
TText *TPaveText::AddText(Float_t x1, Float_t y1, const Text_t *text)
{
//*-*-*-*-*Add a new Text line to this pavetext at given coordinates*-*-*-*-*
//*-*      =========================================================

   TText *newtext = new TText(x1,y1,text);
   newtext->SetTextAlign(0);
   newtext->SetTextColor(0);
   newtext->SetTextFont(0);
   newtext->SetTextSize(0);
   Int_t nch = strlen(text);

   Float_t nspecials = 0;
   for (Int_t i=0;i<nch;i++) {
      if (text[i] == '!') nspecials += 1;
      if (text[i] == '?') nspecials += 1.5;
      if (text[i] == '#') nspecials += 1;
      if (text[i] == '`') nspecials += 1;
      if (text[i] == '^') nspecials += 1.5;
      if (text[i] == '~') nspecials += 1;
      if (text[i] == '&') nspecials += 2;
      if (text[i] == '\\') nspecials += 3;  // octal characters very likely
   }
   nch -= Int_t(nspecials + 0.5);
   if (nch > fLongest) fLongest = nch;

   fLines->Add(newtext);
   return newtext;
}

//______________________________________________________________________________
TText *TPaveText::AddText(const Text_t *text)
{
//*-*-*-*-*-*-*-*-*Add a new Text line to this pavetext*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ====================================

   return AddText(0,0,text);
}

//______________________________________________________________________________
void TPaveText::Clear(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*Clear all lines in this pavetext*-*-*-*-*-*-*-*-*-*
//*-*                ================================

   fLines->Delete();
   fLongest = 0;
}


//______________________________________________________________________________
void TPaveText::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this pavetext to pavetext*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ================================

   TPave::Copy(obj);
   TAttText::Copy(((TPaveText&)obj));
   ((TPaveText&)obj).fLongest = fLongest;
   ((TPaveText&)obj).fMargin = fMargin;
//   fLines->Copy(((TPaveText&)obj)->fLines);
}

//______________________________________________________________________________
void TPaveText::DeleteText()
{
//*-*-*-*-*-*-*-*-*Delete text at the mouse position*-*-*-*-*-*-*-*-*
//*-*              =========================================


   TObject *obj = GetObject();             //get object pointed by the mouse
   if (!obj) return;
   if (obj->IsA() != TText::Class()) return;
   fLines->Remove(obj);
   delete obj;
}

//______________________________________________________________________________
void TPaveText::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this pavetext with its current attributes*-*-*-*-*
//*-*                  ===============================================

   AppendPad(option);

}

//______________________________________________________________________________
void TPaveText::DrawFile(const Text_t *filename, Option_t *option)
{
//*-*-*-*-*-*-*-*-*Draw lines in filename in this pavetext*-*-*-*-*-*-*-*
//*-*              =======================================


   ReadFile(filename);

   AppendPad(option);

}

//______________________________________________________________________________
void TPaveText::EditText()
{
//*-*-*-*-*-*-*-*-*Edit text at the mouse position*-*-*-*-*-*-*-*-*
//*-*              =========================================


   TObject *obj = GetObject();             //get object pointed by the mouse
   if (!obj) return;
   if (obj->IsA() != TText::Class()) return;
   TText *text = (TText*)obj;
   gROOT->SetSelectedPrimitive(text);
   text->SetTextAttributes();
}

//______________________________________________________________________________
TText *TPaveText::GetLine(Int_t number)
{
//*-*-*-*-*-*-*-*Get Pointer to line number in this pavetext*-*-*-*-*-*-*-*
//*-*            ===========================================

   TText *line;
   TIter next(fLines);
   Int_t nlines = 0;
   while ((line = (TText*) next())) {
      if (nlines == number) return line;
      nlines++;
   }
   return 0;
}

//______________________________________________________________________________
TText *TPaveText::GetLineWith(const Text_t *text)
{
//*-*-*-*-*Get Pointer to first containing string text in this pavetext*-*-*-*
//*-*      ============================================================

   TText *line;
   TIter next(fLines);
   while ((line = (TText*) next())) {
      if (strstr(line->GetTitle(),text)) return line;
   }
   return 0;

}

//______________________________________________________________________________
TObject *TPaveText::GetObject()
{
//*-*-*-*-*Get object pointed by the mouse in this pavetext*-*-*-*
//*-*      ================================================

   Int_t nlines = fLines->GetSize();
   if (nlines == 0) return 0;

//*-*- Evaluate text size as a function of the number of lines

   Float_t ymouse   = gPad->AbsPixeltoY(gPad->GetEventY());
   Float_t yspace   = (fY2 - fY1)/Float_t(nlines);
   Float_t textsize = GetTextSize();
   Float_t y1,y,dy;
   if (textsize == 0)  {
      y1       = gPad->GetY1();
   }
   Float_t ytext = fY2 + 0.5*yspace;
   Int_t valign;

//*-*- Iterate over all lines
//*-*- Copy pavetext attributes to line attributes if line attributes not set
   dy = fY2 - fY1;
   TObject *line;
   TText *linet;
   TLine *linel;
   TBox  *lineb;
   TIter next(fLines);
   while ((line = (TObject*) next())) {
//*-*- Next primitive is a line
      if (line->IsA() == TLine::Class()) {
         linel = (TLine*)line;
         y1 = linel->GetY1();   if (y1 == 0) y1 = ytext; else y1 = fY1 + y1*dy;
         if (y1 < ymouse) return line;
         continue;
      }
//*-*- Next primitive is a box
      if (line->IsA() == TBox::Class()) {
         lineb = (TBox*)line;
         y1 = lineb->GetY1();   if (y1 == 0) y1 = ytext; else y1 = fY1 + y1*dy;
         if (y1 < ymouse) return line;
         continue;
      }
//*-*- Next primitive is a text
      if (line->IsA() == TText::Class()) {
         linet = (TText*)line;
         ytext -= yspace;
         Float_t yl     = linet->GetY();
         Short_t talign = linet->GetTextAlign();
         if (talign == 0) talign = GetTextAlign();
         if (yl > 0 && yl <1) {
            ytext = fY1 + yl*dy;
         }
         valign = linet->GetTextAlign()%10;
         y = ytext;
         if (valign == 1) y = ytext -0.5*yspace;
         if (valign == 3) y = ytext +0.5*yspace;

         if (y < ymouse) return line;
      }
   }
   return 0;
}

//______________________________________________________________________________
void TPaveText::InsertText(const Text_t *text)
{
//*-*-*-*-*-*-*-*-*Add a new Text line at the mouse position*-*-*-*-*-*-*-*-*
//*-*              =========================================


   TObject *obj = GetObject();             //get object pointed by the mouse
   TText *newtext = AddText(0,0,text);     //create new text object
   if (obj) {
      fLines->Remove(newtext);        //remove text from last position
      fLines->AddBefore(obj,newtext); //insert new text at right position
   }
}

//______________________________________________________________________________
void TPaveText::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Paint this pavetext with its current attributes*-*-*-*
//*-*                  ================================================


//*-*- Draw the pave
   TPave::ConvertNDCtoPad();
   TPave::PaintPave(fX1,fY1,fX2,fY2,GetBorderSize(),option);
   PaintPrimitives(kPaveText);
}

//______________________________________________________________________________
void TPaveText::PaintPrimitives(Int_t mode)
{
//*-*-*-*-*-*-*-*Paint list of primitives in this pavetext*-*-*-*-*-*-*-*
//*-*            =========================================
   Int_t nlines = fLines->GetSize();
   if (nlines == 0) return;

//*-*- Evaluate text size as a function of the number of lines

   Float_t x1,y1,x2,y2,y,wpixels;
   y1       = gPad->GetY1();
   y2       = gPad->GetY2();
   Float_t wh       = (Float_t)gPad->XtoPixel(gPad->GetX2());
   Float_t hh       = (Float_t)gPad->YtoPixel(gPad->GetY1());
   if (wh < hh)  wpixels = wh;
   else          wpixels = hh;
   Float_t margin   = fMargin*(fX2-fX1);
   Float_t wxlabel  = gPad->XtoPixel(fX2) - gPad->XtoPixel(fX1+margin);
   Float_t yspace   = (fY2 - fY1)/Float_t(nlines);
   Float_t textsize = GetTextSize();
   Float_t textsave = textsize;
   if (textsize == 0)  {
      textsize = 0.85*yspace/(y2 - y1);
      textsize        *= gPad->YtoPixel(y1) - gPad->YtoPixel(y2);
      if (fLongest*0.5*textsize > wxlabel) textsize = wxlabel/(fLongest*0.5);
      if (textsize < 8) textsize = 8;
      textsize        /= wpixels;
      if (mode == kDiamond) textsize *= 0.66;
      SetTextSize(textsize);
   }
   Float_t ytext = fY2 + 0.5*yspace;
   Float_t xtext = 0;
   Int_t halign, valign;

//*-*- Iterate over all lines
//*-*- Copy pavetext attributes to line attributes if line attributes not set
   Float_t dx = fX2 - fX1;
   Float_t dy = fY2 - fY1;
   TObject *line;
   TText *linet;
   TLine *linel;
   TBox  *lineb;
   TIter next(fLines);
   while ((line = (TObject*) next())) {
//*-*- Next primitive is a line
      if (line->IsA() == TLine::Class()) {
         linel = (TLine*)line;
         x1 = linel->GetX1();   if (x1 == 0) x1 = fX1; else x1 = fX1 + x1*dx;
         x2 = linel->GetX2();   if (x2 == 0) x2 = fX2; else x2 = fX1 + x2*dx;
         y1 = linel->GetY1();   if (y1 == 0) y1 = ytext; else y1 = fY1 + y1*dy;
         y2 = linel->GetY2();   if (y2 == 0) y2 = ytext; else y2 = fY1 + y2*dy;
         linel->PaintLine(x1,y1,x2,y2);
         continue;
      }
//*-*- Next primitive is a box
      if (line->IsA() == TBox::Class()) {
         lineb = (TBox*)line;
         x1 = lineb->GetX1();
         if (x1) x1 = fX1 + x1*dx;
         else    x1 = fX1 + gPad->PixeltoX(1) - gPad->PixeltoX(0);
         x2 = lineb->GetX2();
         if (x2) x2 = fX1 + x2*dx;
         else    x2 = fX2;
         y1 = lineb->GetY1();   if (y1 == 0) y1 = ytext; else y1 = fY1 + y1*dy;
         y2 = lineb->GetY2();   if (y2 == 0) y2 = ytext; else y2 = fY1 + y2*dy;
         lineb->PaintBox(x1,y1,x2,y2);
         continue;
      }
//*-*- Next primitive is a text
      if (line->IsA() == TText::Class()) {
         linet = (TText*)line;
         ytext -= yspace;
         Float_t xl     = linet->GetX();
         Float_t yl     = linet->GetY();
         Short_t talign = linet->GetTextAlign();
         Color_t tcolor = linet->GetTextColor();
         Style_t tfont  = linet->GetTextFont();
         Size_t  tsize  = linet->GetTextSize();
         if (talign == 0) linet->SetTextAlign(GetTextAlign());
         if (tcolor == 0) linet->SetTextColor(GetTextColor());
         if (tfont  == 0) linet->SetTextFont(GetTextFont());
         if (tsize  == 0) linet->SetTextSize(GetTextSize());
         if (xl > 0 && xl <1) {
            xtext = fX1 + xl*dx;
         } else {
            halign = linet->GetTextAlign()/10;
            if (halign == 1) xtext = fX1 + margin;
            if (halign == 2) xtext = 0.5*(fX1+fX2);
            if (halign == 3) xtext = fX2 - margin;
         }
         if (yl > 0 && yl <1) {
            ytext = fY1 + yl*dy;
         }
         valign = linet->GetTextAlign()%10;
         y = ytext;
         if (valign == 1) y = ytext -0.5*yspace;
         if (valign == 3) y = ytext +0.5*yspace;

         linet->PaintText(xtext,y,linet->GetTitle());
         linet->SetTextAlign(talign);
         linet->SetTextColor(tcolor);
         linet->SetTextFont(tfont);
         linet->SetTextSize(tsize);
      }
   }
   SetTextSize(textsave);
}

//______________________________________________________________________________
void TPaveText::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Dump this pavetext with its attributes*-*-*-*-*-*-*-*
//*-*                  =======================================
   TPave::Print(option);
   fLines->Print();
}

//______________________________________________________________________________
void TPaveText::ReadFile(const Text_t *filename, Option_t *option, Int_t nlines, Int_t fromline)
{
//*-*-*-*-*-*-*-*-*Read lines of filename in this pavetext*-*-*-*-*-*-*-*-*
//*-*              =======================================
//
//  Read from line number fromline a total of nlines
//
//  Note that this function changes the default text alignment to left/center
//
   Int_t ival;
   Float_t val;
   TText *lastline = 0;
   TString opt = option;
   if (!opt.Contains("+")) {
      Clear();
      fLongest = 0;
   }
   SetTextAlign(12);
//*-*- Get file name
   Int_t nch = strlen(filename);
   if (nch == 0) return;

   char *fname = StrDup(filename);
   if (fname[nch-1] == ';') { nch--; fname[nch]=0;}

   ifstream file(fname,ios::in);
   if (!file.good()) {
      Error("ReadFile", "illegal file name");
      delete [] fname;
      return;
   }

   const int linesize = 255;
   Text_t currentline[linesize];
   char *ss, *sclose, *s= 0;

   Int_t kline = 0;
   while (1) {
     file.getline(currentline,linesize);
     if (file.eof())break;
     if (kline >= fromline && kline < fromline+nlines) {
        s = currentline;
        if (strstr(s,"+SetText")) {
           ss = s+8;
           sclose = strstr(ss,")");
           if (!sclose) continue;
           *sclose = 0;
           lastline = (TText*)fLines->Last();
           if (!lastline) continue;
           if (strstr(ss,"Color(")) {
              sscanf(ss+6,"%d",&ival);
              lastline->SetTextColor(ival);
              continue;
           }
           if (strstr(ss,"Align(")) {
              sscanf(ss+6,"%d",&ival);
              lastline->SetTextAlign(ival);
              continue;
           }
           if (strstr(ss,"Font(")) {
              sscanf(ss+5,"%d",&ival);
              lastline->SetTextFont(ival);
              continue;
           }
           if (strstr(ss,"Size(")) {
              sscanf(ss+5,"%f",&val);
              lastline->SetTextSize(val);
              continue;
           }
           if (strstr(ss,"Angle(")) {
              sscanf(ss+6,"%f",&val);
              lastline->SetTextAngle(val);
              continue;
           }
        }
        AddText(s);
      }
      kline++;
  }
  file.close();
  delete [] fname;

}

//______________________________________________________________________________
void TPaveText::SaveLines(ofstream &out, char *name)
{
    // Save lines of this pavetext as C++ statements on output stream out

   Int_t nlines = fLines->GetSize();
   if (nlines == 0) return;

//*-*- Iterate over all lines
   char quote = '"';
   TObject *line;
   TText *linet;
   TLine *linel;
   TBox  *lineb;
   TIter next(fLines);
   while ((line = (TObject*) next())) {
//*-*- Next primitive is a line
      if (line->IsA() == TLine::Class()) {
         linel = (TLine*)line;
         if (gROOT->ClassSaved(TLine::Class())) {
             out<<"   ";
         } else {
             out<<"   TLine *";
         }
         out<<"line = "<<name<<"->AddLine("
            <<linel->GetX1()<<","<<linel->GetY1()<<","<<linel->GetX2()<<","<<linel->GetY2()<<");"<<endl;
         if (linel->GetLineColor() != 1) {
            out<<"   line->SetLineColor("<<linel->GetLineColor()<<");"<<endl;
         }
         if (linel->GetLineStyle() != 1) {
            out<<"   line->SetLineStyle("<<linel->GetLineStyle()<<");"<<endl;
         }
         if (linel->GetLineWidth() != 1) {
            out<<"   line->SetLineWidth("<<linel->GetLineWidth()<<");"<<endl;
         }
         continue;
      }
//*-*- Next primitive is a box
      if (line->IsA() == TBox::Class()) {
         lineb = (TBox*)line;
         if (gROOT->ClassSaved(TBox::Class())) {
             out<<"   ";
         } else {
             out<<"   TBox *";
         }
         out<<"box = "<<name<<"->AddBox("
            <<lineb->GetX1()<<","<<lineb->GetY1()<<","<<lineb->GetX2()<<","<<lineb->GetY2()<<");"<<endl;
         if (lineb->GetFillColor() != 18) {
            out<<"   box->SetFillColor("<<lineb->GetFillColor()<<");"<<endl;
         }
         if (lineb->GetFillStyle() != 1001) {
            out<<"   box->SetFillStyle("<<lineb->GetFillStyle()<<");"<<endl;
         }
         if (lineb->GetLineColor() != 1) {
            out<<"   box->SetLineColor("<<lineb->GetLineColor()<<");"<<endl;
         }
         if (lineb->GetLineStyle() != 1) {
            out<<"   box->SetLineStyle("<<lineb->GetLineStyle()<<");"<<endl;
         }
         if (lineb->GetLineWidth() != 1) {
            out<<"   box->SetLineWidth("<<lineb->GetLineWidth()<<");"<<endl;
         }
         continue;
      }
//*-*- Next primitive is a text
      if (line->IsA() == TText::Class()) {
         linet = (TText*)line;
         if (gROOT->ClassSaved(TText::Class())) {
             out<<"   ";
         } else {
             out<<"   TText *";
         }
         if (!linet->GetX() && !linet->GetY()) {
            out<<"text = "<<name<<"->AddText("
               <<quote<<linet->GetTitle()<<quote<<");"<<endl;
         } else {
            out<<"text = "<<name<<"->AddText("
               <<linet->GetX()<<","<<linet->GetY()<<","<<quote<<linet->GetTitle()<<quote<<");"<<endl;
         }
         if (linet->GetTextColor()) {
            out<<"   text->SetTextColor("<<linet->GetTextColor()<<");"<<endl;
         }
         if (linet->GetTextFont()) {
            out<<"   text->SetTextFont("<<linet->GetTextFont()<<");"<<endl;
         }
         if (linet->GetTextSize()) {
            out<<"   text->SetTextSize("<<linet->GetTextSize()<<");"<<endl;
         }
         if (linet->GetTextAngle() != GetTextAngle()) {
            out<<"   text->SetTextAngle("<<linet->GetTextAngle()<<");"<<endl;
         }
         if (linet->GetTextAlign()) {
            out<<"   text->SetTextAlign("<<linet->GetTextAlign()<<");"<<endl;
         }
      }
   }
}

//______________________________________________________________________________
void TPaveText::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   if (!strcmp(GetName(),"stats")) return;
   if (!strcmp(GetName(),"title")) return;
   char quote = '"';
   out<<"   "<<endl;
   if (gROOT->ClassSaved(TPaveText::Class())) {
       out<<"   ";
   } else {
       out<<"   TPaveText *";
   }
   out<<"pt = new TPaveText("<<fX1<<","<<fY1<<","<<fX2<<","<<fY2
      <<","<<quote<<fOption<<quote<<");"<<endl;

   SaveFillAttributes(out,"pt",0,1001);
   SaveLineAttributes(out,"pt",1,1,1);
   SaveTextAttributes(out,"pt",22,0,1,62,0);
   SaveLines(out,"pt");
   out<<"   pt->Draw();"<<endl;
}

//______________________________________________________________________________
void TPaveText::SetAllWith(const Text_t *text, Option_t *option, Float_t value)
{
//*-*-*-*-*-*Set attribute option for all lines containing string text*-*-*-*-*
//*-*        ================= =======================================
//
// Possible options are all the AttText attributes
//       Align, Color, Font, Size and Angle
//

   TString opt=option;
   opt.ToLower();
   TText *line;
   TIter next(fLines);
   while ((line = (TText*) next())) {
      if (strstr(line->GetTitle(),text)) {
         if (opt == "align") line->SetTextAlign(Int_t(value));
         if (opt == "color") line->SetTextColor(Int_t(value));
         if (opt == "font")  line->SetTextFont(Int_t(value));
         if (opt == "size")  line->SetTextSize(value);
         if (opt == "angle") line->SetTextAngle(value);
      }
   }
}
