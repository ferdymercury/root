//*CMZ :  2.22/07 05/07/99  19.26.51  by  Rene Brun
//*CMZ :  2.20/05 15/12/98  12.31.48  by  Rene Brun
//*CMZ :  2.20/02 03/12/98  08.59.32  by  Rene Brun
//*CMZ :  2.20/01 02/12/98  17.06.57  by  Rene Brun
//*-- Author :    Rene Brun   01/12/98

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

#include "TROOT.h"
#include "TClassTree.h"
#include "TClassTable.h"
#include "TBaseClass.h"
#include "TClass.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "TPaveLabel.h"
#include "TArrow.h"
#include "TText.h"

ClassImp(TClassTree)

//______________________________________________________________________________
//
// Draw inheritance tree for a list of classes
// The following options are supported
//   - Direct inheritance (default)
//   - Multiple inheritance
//   - Composition
//   - References
//
//   See TClassTree::DrawTree for examples and pictures

//______________________________________________________________________________
TClassTree::TClassTree() : TCanvas()
{
//*-*-*-*-*-*-*-*-*-*-*-*TClassTree default constructor*-*-*-*-*-*-*-*-*-*-*
//*-*                    ==============================

}

//_____________________________________________________________________________
TClassTree::TClassTree(const Text_t *name, const Text_t *title, UInt_t ww, UInt_t wh)
           : TCanvas(name,title,ww,wh)
{
//*-*-*-*-*-*-*-*-*-*-*TClassTree constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================

   fShowHas = 0;
   fShowMul = 0;
   fShowRef = 0;
   fClasses = title;

  // Set a default canvas range
   Float_t xsize = 26;
   Float_t ysize = 20;
   Range(0,0,xsize,ysize);
   SetLabelDx();
   SetYoffset();
   SetFillColor(33);

   // if title is specified, use title as list of classes to be shown
  if (title && strlen(title)) DrawTree();
}

//______________________________________________________________________________
TClassTree::~TClassTree()
{
//*-*-*-*-*-*-*-*-*-*TClassTree default destructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                =============================
}

//______________________________________________________________________________
void TClassTree::DrawTree(const char *userClasses, Option_t *option)
{
// Draw inheritance tree for classes in userClasses
// userClasses is a list of classes to be used to draw the tree
// if userClasses is the null string, the last list entered
//     via TClassTree::SetClasses is taken.
// class names are separated by a ":"
// wildcarding is supported
//
// the character "*" following a class name means include
// all class names starting with this string
//   example TH1* selects all classes starting with "TH1"
//
// the character "*" preceeding a class name include
// all classes deriving from this class
//   example *TH1 selects all classes deriving from TH1,
//   this includes all TH1* classes + TH2* + TH3* +TProfile
//
// The following example draws the inheritance tree
// for all histogram + tree + all GUI classes deriving from TGFrame
//    "*TH1:*TTree:*TGFrame"
//
// By default, only direct inheritance is drawn.
// Use:
//   - TClassTree::SetShowHas to show links to embedded classes
//   - TClassTree::SetShowMul to show multiple inheritance
//   - TClassTree::SetShowRef to show pointers to other classes
//
// You can start the ClassTree viewer in two ways:
//   1- TClassTree ct("ct","*TH1:*TGraph:TAxis")
//   2- using the pull down menu "Classes" from a TCanvas menu bar
//
// Once a TClassTree canvas is created, you can click on the right button:
//   - Select "SetClasses" to draw a new class list
//   - Select "SetShowHas" to toggle the embedded classes option
//   - Select "SetShowMul" to toggle the multiple inheritance option
//   - Select "SetShowRef" to toggle the pointers to classes option
//   - Select "Range" to change the canvas range
//   - Select "SetCanvasSize" to make a big canvas (eg, 1000x4000) and scroll
//
//  The following picture has been generated with the following statements
//       TClassTree tc1("tc1","*TH1:*TCollection");
//       tc1.SetShowHas();
//       tc1.SetShowRef();
//
//Begin_Html
/*
<img src="gif/classtree1.gif">
*/
//End_Html
//
//  The following picture has been generated with the following statements
//        TClassTree tc2("tc2");
//        tc2.SetClasses("*TGCompositeFrame");
//        tc2.SetShowHas();
//        tc2.SetShowMul();
//        tc2.SetShowRef();
//Begin_Html
/*
<img src="gif/classtree2.gif">
*/
//End_Html
//
// Note that in case of embedded classes or pointers to classes,
// the corresponding dashed lines or arrows respectively start
// in the TPavelabel object at an X position reflecting the position
// in the list of data members.

   //clear canvas unless option same is specified
   TString opt = option;
   if (!opt.Contains("same")) Clear();

   if (userClasses == 0) return;
   if (strlen(userClasses)) SetClasses(userClasses);
   Int_t nch      = strlen(GetClasses());
   char *classes  = new char[nch+1];
   Int_t nclass   = gClassTable->Classes();
   char **cnames  = new char*[nclass];
   Int_t *cstatus = new Int_t[nclass];
   Int_t *cparent = new Int_t[nclass];
   Int_t *nsons   = new Int_t[nclass];
   Int_t *ntsons  = new Int_t[nclass];
   Int_t *levels  = new Int_t[nclass];
   Int_t *lsons   = new Int_t[nclass*50];
   Float_t *dyc   = new Float_t[nclass];
   Float_t *yg    = new Float_t[nclass];
   TClass **clp   = new TClass*[nclass];
   strcpy(classes,GetClasses());
   Int_t i,j;
   TClass *cl;
   TBaseClass *clbase;
   gClassTable->Init();
   for (i=0;i<nclass;i++) {
      cnames[i] = gClassTable->Next();
      clp[i] = gROOT->GetClass(cnames[i]);
      cstatus[i] = 0;
   }
   char *ptr = strtok(classes,":");
    //mark referenced classes
   while (ptr) {
      nch = strlen(ptr);
      if (ptr[0] == '*') {
         cl = gROOT->GetClass(&ptr[1]);
         if (cl) {
            for (i=0;i<nclass;i++) {
               if(clp[i]->InheritsFrom(cl)) cstatus[i] = 1;
            }
         }
      } else if (ptr[nch-1] == '*') {
         ptr[nch-1] = 0;
         for (i=0;i<nclass;i++) {
            if(strstr(cnames[i],ptr) != 0) cstatus[i] = 1;
         }
      } else {
         for (i=0;i<nclass;i++) {
            if(strcmp(cnames[i],ptr) == 0) cstatus[i] = 1;
         }
      }
      ptr = strtok(0,":");
   }
    //mark base classes of referenced classes
   for (i=0;i<nclass;i++) {
      if (cstatus[i] == 0) continue;
      for (j=0;j<nclass;j++) {
         if(clp[i]->InheritsFrom(clp[j])) cstatus[j] = 1;
      }
   }
    //find parent class number for selected classes
   for (i=0;i<nclass;i++) {
      nsons[i] = ntsons[i] = levels[i] = 0;
      if (cstatus[i] == 0) continue;
      for (j=0;j<50;j++) lsons[50*i+j] = 0;
      cparent[i] = -1;
      clbase = (TBaseClass*)clp[i]->GetListOfBases()->First();
      if (clbase == 0) continue;
      cl = (TClass*)clbase->GetClassPointer();
      for (j=0;j<nclass;j++) {
         if(cl == clp[j]) cparent[i] = j;
      }
   }
    //compute levels, number and list of sons
   Int_t maxlev = 1;
   Int_t ndiv=0, ip1 =0;
   Int_t ip,icl,ns,nts,nlevel,kl;
   for (i=0;i<nclass;i++) {
      if (cstatus[i] == 0) continue;
      nlevel = 1;
      icl = i;
      while (cparent[icl] >= 0) {
         ip = cparent[icl];
         if (nlevel == 1) ip1 = ip;
         if (ip >= 0) {
            if (nsons[i] == 0) ntsons[ip]++;
            nlevel++;
            icl = ip;
         }
      }
      if (nlevel > 1) {
         ns = nsons[ip1];
         lsons[50*ip1+ns] = i;
         nsons[ip1]++;
      }
      levels[i] = nlevel;
      if (nlevel > maxlev) maxlev = nlevel;
   }
   Int_t nmore = 0;
      for (i=0;i<nclass;i++) {
      if (cstatus[i] == 0) continue;
      if (levels[i] == 1) {
         if (ntsons[i] == 0) ntsons[i] = 1;
         ndiv += ntsons[i];
         nmore++;
      }
   }
   if (ndiv == 0) ndiv = 1;

   Float_t xsize = GetX2();
   Float_t ysize = GetY2();
   Float_t ymore = fYoffset;
   if (nmore == 1) ymore = 0;
   if (ndiv < 15) ymore = -2;
   Float_t dy = (ysize)/ndiv;
   if(dy > 0.85) dy = 0.85;
   Float_t dx = 0.9*xsize/6;
   if (maxlev > 6) dx = 0.97*xsize/maxlev;
   Float_t y  = ysize-1;
   Float_t u[2];
   Float_t labdx = fLabelDx;
   if (labdx > 0.95*dx) labdx = 0.95*dx;
   Float_t labdy = 0.3*dy;
   Float_t xleft, ycurrent, yu=0, yl=0;
   TPaveLabel *label;
   TLine *line = new TLine();
   TClass *clObject = gROOT->GetClass("TObject");

   for (Int_t ilev=0;ilev<maxlev;ilev++) {
       xleft  = ilev*dx+0.5;
       for (Int_t iclass=0;iclass<nclass;iclass++) {
          if (cstatus[iclass] == 0) continue;
          if (levels[iclass] != ilev+1) continue;
          dyc[iclass] = ntsons[iclass]*dy;
          if (ilev == 0) {
             y -= dyc[iclass];
             if (clp[iclass] == clObject && ntsons[iclass] > 1) y += ymore;
             yg[iclass] = y+0.5*dyc[iclass];
          }
          ns = nsons[iclass];
          if (ns > 1) ycurrent = yg[iclass]+0.5*dyc[iclass]-0.5*dy;
          else        ycurrent = yg[iclass];
          for (Int_t is=0;is<ns;is++) {
             kl  = lsons[50*iclass+is];
             nts = ntsons[kl];
             if (ns > 1) yg[kl] = ycurrent-0.5*nts*dy;
             else        yg[kl] = ycurrent;
             if(is == 0) yu = yg[kl];
             if(is == ns-1) yl = yg[kl];
             ycurrent -= dy*(nts+1);
          }
          u[0] = xleft;
          u[1] = u[0]+0.5;
          if(ns != 0) u[1] = u[0]+dx;
          line->DrawLine(u[0],yg[iclass],u[1],yg[iclass]);
          if(ns > 1)  line->DrawLine(u[1],yl,u[1],yu);
          label = new TPaveLabel(xleft+0.5,yg[iclass]-labdy,xleft+labdx,yg[iclass]+labdy,cnames[iclass]);
          if (clp[iclass] == clObject) label->SetFillColor(kYellow);
          if (!clp[iclass]->InheritsFrom("TObject")) label->SetFillColor(30);
          label->SetTextSize(0.9);
          label->Draw();
       }
    }

    nch      = strlen(GetClasses());
    Float_t xmax = 0.3;
    if (nch > 20) xmax = 0.5;
    if (nch > 50) xmax = 0.7;
    if (nch > 70) xmax = 0.9;
    TPaveLabel *ptitle = new TPaveLabel(0.1,ysize-0.9,xmax*xsize,ysize-0.1,GetClasses());
    ptitle->SetFillColor(42);
    ptitle->Draw();

    if (fShowHas) ShowHas();
    if (fShowMul) ShowMul();
    if (fShowRef) ShowRef();
    if (nch == 0) Help();
    Update();

   //cleanup
   delete line;
   delete [] cnames;
   delete [] clp;
   delete [] cstatus;
   delete [] classes;
   delete [] cparent;
   delete [] nsons;
   delete [] ntsons;
   delete [] levels;
   delete [] lsons;
   delete [] dyc;
   delete [] yg;

}

//______________________________________________________________________________
void TClassTree::FindClassPosition(const char *classname, Float_t &x, Float_t &y)
{
// Search the TPavelabel object in the pad with label=classname
// returns the x and y position of the center of the pave.

   TIter next(GetListOfPrimitives());
   TObject *obj;
   TPaveLabel *pave;
   while((obj=next())) {
      if (obj->InheritsFrom(TPaveLabel::Class())) {
         pave = (TPaveLabel*)obj;
         if (!strcmp(pave->GetLabel(),classname)) {
            x = 0.5*(pave->GetX1() + pave->GetX2());
            y = 0.5*(pave->GetY1() + pave->GetY2());
            return;
         }
      }
   }
   x = y = 0;
}

//______________________________________________________________________________
void TClassTree::Help()
{
// Print help about interactive use of this class in the canvas

   const char *HelpAbout[] = {
   "Use canvas popup menu item \"SetClasses\" to give the list of classes.",
   "Class names are separated by a \":\", wildcarding is supported.",
   " ",
   "The character \"*\" following a class name means include",
   "all class names starting with this string.",
   "  example TH1* selects all classes starting with \"TH1\"",
   " ",
   "The character \"*\" preceeding a class name include",
   "all classes deriving from this class.",
   "  example *TH1 selects all classes deriving from TH1,",
   "  this includes all TH1* classes + TH2* + TH3* +TProfile",
   " ",
   "The following example draws the inheritance tree for",
   "all histogram + tree + all GUI classes deriving from TGFrame.",
   "   \"*TH1:*TTree:*TGFrame\"",
   " ",
   "By default, only direct inheritance is drawn.",
   "Using the canvas popup menu, you can select the options: ",
   "  -  \"SetClasses\" to draw a new class list",
   "  -  \"SetShowHas\" to toggle the embedded classes option",
   "  -  \"SetShowMul\" to toggle the multiple inheritance option",
   "  -  \"SetShowRef\" to toggle the pointers to classes option",
   "  -  \"Range\" to change the canvas range",
   "  -  \"SetCanvasSize\" to make a big canvas (eg, 1000x4000)",
   "",
   };

   Clear();

   Float_t y  = 0.9*GetY2();
   Float_t dy = y/26.;
   TText text;
   text.SetTextAlign(12);
   text.SetTextFont(52);
   text.SetTextSize(1./33.);
   for (Int_t i=0;i<30;i++) {
      if (strlen(HelpAbout[i]) == 0) break;
      text.DrawText(0.1*GetX2(),y,HelpAbout[i]);
      y -= dy;
   }
}

//______________________________________________________________________________
void TClassTree::SetClasses(const char *classes)
{
// Set the list of classes for which the hierarchy is to be drawn
// See DrawTree for the syntax

   if (classes == 0) return;
   fClasses = classes;
   DrawTree();
}

//______________________________________________________________________________
void TClassTree::SetLabelDx(Float_t labeldx)
{
// Set the size along x of the TPavellabel showing the class name

   fLabelDx = labeldx;
   DrawTree();
}

//______________________________________________________________________________
void TClassTree::SetShowHas(Int_t showhas)
{
// Enable/disable the "Has a" relationship drawing option

   fShowHas = showhas;
   DrawTree();
}

//______________________________________________________________________________
void TClassTree::SetShowMul(Int_t showmul)
{
// Enable/disable the Show Multiple inheritance relationship option

   fShowMul = showmul;
   DrawTree();
}

//______________________________________________________________________________
void TClassTree::SetShowRef(Int_t showref)
{
// Enable/disable the Show References relationship option

   fShowRef = showref;
   DrawTree();
}

//______________________________________________________________________________
void TClassTree::SetYoffset(Float_t offset)
{
// Set the offset at the top of the picture
// The default offset is computed automatically taking into account
// classes not inheriting from TObject.

   fYoffset = offset;
   DrawTree();
}

//______________________________________________________________________________
void TClassTree::ShowHas()
{
// Draw the "Has a" relationships

   TIter next(GetListOfPrimitives());
   TObject *obj;
   TPaveLabel *pave;
   TDataMember *member;
   TClass *cl;
   Float_t y,x1,y1,dx;
   while((obj=next())) {
      if (obj->InheritsFrom(TPaveLabel::Class())) {
         pave = (TPaveLabel*)obj;
         cl = gROOT->GetClass(pave->GetLabel());
         if (!cl) continue;
         y  = 0.5*(pave->GetY1() + pave->GetY2());
         TList *lm = cl->GetListOfDataMembers();
         Int_t nmembers = lm->GetSize();
         if (nmembers == 0) continue;
         dx = (pave->GetX2() - pave->GetX1())/nmembers;
         TIter nextd(lm);
         //Iterate on list of data members
         Int_t imember = 0;
         while((member=(TDataMember*)nextd())) {
            imember++;
            if (member->IsaPointer()) continue;
            if (member->IsBasic()) continue;
            FindClassPosition(member->GetTypeName(),x1,y1);
            if (x1 == 0 || y1 == 0) continue; //may be base class was not drawn
            TLine *line = new TLine(pave->GetX1()+(imember+0.5)*dx,y,x1,y1);
            line->SetLineStyle(3);
            line->SetLineColor(6);
            line->Draw();
         }
      }
   }
}

//______________________________________________________________________________
void TClassTree::ShowMul()
{
// Draw the Multiple inheritance relationships

   TIter next(GetListOfPrimitives());
   TObject *obj;
   TBaseClass *base;
   TPaveLabel *pave;
   TClass *cl;
   Float_t x,y,x1,y1;
   while((obj=next())) {
      if (obj->InheritsFrom(TPaveLabel::Class())) {
         pave = (TPaveLabel*)obj;
         cl = gROOT->GetClass(pave->GetLabel());
         if (!cl) continue;
         x = 0.5*(pave->GetX1() + pave->GetX2());
         y = 0.5*(pave->GetY1() + pave->GetY2());
         TIter nextb(cl->GetListOfBases());
         Int_t ibase = 0;
         //Iterate on list of base classes, skip first
         while((base=(TBaseClass*)nextb())) {
            ibase++;
            if (ibase == 1) continue;
            FindClassPosition(base->GetName(),x1,y1);
            if (x1 == 0 || y1 == 0) continue; //may be base class was not drawn
            TLine *line = new TLine(x,y,x1,y1);
            line->SetLineStyle(2);
            line->SetLineColor(kBlue);
            line->Draw();
         }
      }
   }
}

//______________________________________________________________________________
void TClassTree::ShowRef()
{
// Draw the References relationships (other than inheritance or composition)


   TIter next(GetListOfPrimitives());
   TObject *obj;
   TPaveLabel *pave;
   TDataMember *member;
   TClass *cl;
   Float_t y,x1,y1,dx;
   while((obj=next())) {
      if (obj->InheritsFrom(TPaveLabel::Class())) {
         pave = (TPaveLabel*)obj;
         cl = gROOT->GetClass(pave->GetLabel());
         if (!cl) continue;
         y  = 0.5*(pave->GetY1() + pave->GetY2());
         TList *lm = cl->GetListOfDataMembers();
         Int_t nmembers = lm->GetSize();
         if (nmembers == 0) continue;
         dx = (pave->GetX2() - pave->GetX1())/nmembers;
         TIter nextd(lm);
         //Iterate on list of data members
         Int_t imember = 0;
         while((member=(TDataMember*)nextd())) {
            imember++;
            if (!member->IsaPointer()) continue;
            if (member->IsBasic()) continue;
            if (!strcmp("fgIsA",member->GetName())) continue;
            FindClassPosition(member->GetTypeName(),x1,y1);
            if (x1 == 0 || y1 == 0) continue; //may be pointed class was not drawn
            TArrow *arrow = new TArrow(pave->GetX1()+(imember+0.5)*dx,y,x1,y1,0.008,"|>");
            arrow->SetLineColor(kRed);
            arrow->SetFillColor(kRed);
            arrow->Draw();
         }
      }
   }
}

