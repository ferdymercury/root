//*CMZ :  2.20/05 03/03/99  14.18.31  by  Rene Brun
//*CMZ :  2.20/00 11/11/98  19.05.17  by  Rene Brun
//*CMZ :  2.00/13 21/10/98  13.17.34  by  Rene Brun
//*CMZ :  1.01/03 18/05/97  22.07.21  by  Rene Brun
//*-- Author :    Rene Brun   16/05/97

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TCutG                                                                //
//                                                                      //
//  A Graphical cut.                                                    //
//  A TCutG object defines a closed polygon in a x,y plot.              //
//  It can be created via the graphics editor option "CutG"             //
//  or directly by invoking its constructor.                            //
//  When it is created via the graphics editor, the TCutG object        //
//  is named "CUTG". It is recommended to immediatly change the name    //
//  by using the context menu item "SetName".                           //                                                                      //
//   When the graphics editor is used, the names of the variables X,Y   //
//   are automatically taken from the current pad title.                //
//  Example:                                                            //
//  Assume a TTree object T and:                                        //
//     Root > T.Draw("abs(fMomemtum)%fEtot")                            //
//  the TCutG members fVarX, fVary will be set to:                      //
//     fVarx = fEtot                                                    //
//     fVary = abs(fMomemtum)                                           //
//                                                                      //
//  A graphical cut can be used in a TTree selection expression:        //
//    Root > T.Draw("fEtot","cutg1")                                    //
//    where "cutg1" is the name of an existing graphical cut.           //
//                                                                      //
//  Note that, as shown in the example above, a graphical cut may be    //
//  used in a selection expression when drawing TTrees expressions      //
//  of 1-d, 2-d or 3-dimensions.                                        //
//  The TTree expressions may or may not reference the same variables   //
//  than in the fVarX, fVarY of the graphical cut.                      //
//                                                                      //
//  When the TCutG object is created via the graphics editor, it is     //
//  added to the list of primitives in the pointed pad. To retrieve     //
//  a pointer to this object from the code or command line, do:         //
//      TCutG *mycutg = (TCutG*)gPad->GetPrimitive("CUTG");             //
//      mycutg->SetName("mycutg");                                      //
//                                                                      //
//  A Graphical cut may be drawn via TGraph::Draw.                      //
//  It can be edited like a normal TGraph.                              //
//                                                                      //
//  A Graphical cut may be saved to a file via TCutG::Write.            //                                                                     //
//                                                                      //
//  A TCutG object is added in the gROOT->GetListOfSpecials             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <fstream.h>

#include "TROOT.h"
#include "TCutG.h"
#include "TVirtualPad.h"
#include "TPaveText.h"

ClassImp(TCutG)

//______________________________________________________________________________
TCutG::TCutG() : TGraph()
{

   fTree     = 0;
   fFormulaX = 0;
   fFormulaY = 0;
   gROOT->GetListOfSpecials()->Add(this);
}

//______________________________________________________________________________
TCutG::TCutG(const Text_t *name, Int_t n, Float_t *x, Float_t *y)
      :TGraph(n,x,y)
{
   fTree     = 0;
   fFormulaX = 0;
   fFormulaY = 0;
   SetName(name);
   gROOT->GetListOfSpecials()->Add(this);

// Take name of cut variables from pad title if title contains ":"
   if (gPad) {
      TPaveText *ptitle = (TPaveText*)gPad->GetPrimitive("title");
      if (!ptitle) return;
      TText *ttitle = ptitle->GetLineWith(":");
      if (!ttitle) return;
      const char *title = ttitle->GetTitle();
      Int_t nch = strlen(title);
      char *vars = new char[nch+1];
      strcpy(vars,title);
      char *col = strstr(vars,":");
      if (!col) return;
      *col = 0;
      col++;
      char *brak = strstr(col," {");
      if (brak) *brak = 0;
      fVarY = vars;
      fVarX = col;
      delete [] vars;
   }
}

//______________________________________________________________________________
TCutG::~TCutG()
{

   delete fFormulaX;
   delete fFormulaY;
   gROOT->GetListOfSpecials()->Remove(this);
}

//______________________________________________________________________________
Double_t TCutG::EvalInstance(Int_t instance)
{
//  Evaluate graphical cut value for current event instance

   if (!fTree) return 0;
   if (!fFormulaX) {
      fFormulaX = new TTreeFormula("f_x",fVarX.Data(),fTree);
      if (!fFormulaX) return 0;
   }
   if (!fFormulaY) {
      fFormulaY = new TTreeFormula("f_y",fVarY.Data(),fTree);
      if (!fFormulaY) return 0;
   }
   Float_t xcut = fFormulaX->EvalInstance(instance);
   Float_t ycut = fFormulaY->EvalInstance(instance);
   return IsInside(xcut,ycut);
}

//______________________________________________________________________________
Int_t TCutG::IsInside(Float_t x, Float_t y)
{
//*.         Function which returns 1 if point x,y lies inside the
//*.              polygon defined by the graph points
//*.                                0 otherwise
//*.
//*.     The loop is executed with the end-point coordinates of a
//*.     line segment (X1,Y1)-(X2,Y2) and the Y-coordinate of a
//*.     horizontal line.
//*.     The counter inter is incremented if the line (X1,Y1)-(X2,Y2)
//*.     intersects the horizontal line.
//*.     In this case XINT is set to the X-coordinate of the
//*.     intersection point.
//*.     If inter is an odd number, then the point x,y is not within
//*.     the polygon.
//*.
//*.         This routine is based on an original algorithm
//*.         developed by R.Nierhaus.
//*.

   Float_t xint;
   Int_t i;
   Int_t inter = 0;
   for (i=0;i<fNpoints-1;i++) {
      if (fY[i] == fY[i+1]) continue;
      if (y < fY[i] && y < fY[i+1]) continue;
      if (fY[i] < y && fY[i+1] < y) continue;
      xint = fX[i] + (y-fY[i])*(fX[i+1]-fX[i])/(fY[i+1]-fY[i]);
      if (x < xint) inter++;
   }
   if (inter != 2*(inter/2)) return 1;
   return 0;
}

//______________________________________________________________________________
void TCutG::SavePrimitive(ofstream &out, Option_t *option)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   out<<"   "<<endl;
   if (gROOT->ClassSaved(TCutG::Class())) {
       out<<"   ";
   } else {
       out<<"   TCutG *";
   }
   out<<"cutg = new TCutG("<<quote<<GetName()<<quote<<","<<fNpoints<<");"<<endl;
   TObject *obj = (TObject*)fTree;
   if (obj) out<<"   cutg->SetTree(gDirectory->Get("<<quote<<obj->GetName()<<quote<<");"<<endl;
   out<<"   cutg->SetVarX("<<quote<<GetVarX()<<quote<<");"<<endl;
   out<<"   cutg->SetVarY("<<quote<<GetVarY()<<quote<<");"<<endl;
   out<<"   cutg->SetTitle("<<quote<<GetTitle()<<quote<<");"<<endl;

   SaveFillAttributes(out,"cutg",0,1001);
   SaveLineAttributes(out,"cutg",1,1,1);
   SaveMarkerAttributes(out,"cutg",1,1,1);

   for (Int_t i=0;i<fNpoints;i++) {
      out<<"   cutg->SetPoint("<<i<<","<<fX[i]<<","<<fY[i]<<");"<<endl;
   }
   out<<"   cutg->Draw("
      <<quote<<option<<quote<<");"<<endl;
}

//______________________________________________________________________________
void TCutG::SetVarX(const Text_t *varx)
{
   fVarX = varx;
   delete fFormulaX;
   fFormulaX = 0;
}

//______________________________________________________________________________
void TCutG::SetVarY(const Text_t *vary)
{
   fVarY = vary;
   delete fFormulaY;
   fFormulaY = 0;
}
