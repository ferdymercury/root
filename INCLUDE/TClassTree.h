//*CMZ :  2.20/05 15/12/98  12.27.52  by  Rene Brun
//*CMZ :  2.20/02 03/12/98  08.59.31  by  Rene Brun
//*CMZ :  2.20/01 02/12/98  15.27.17  by  Rene Brun
//*-- Author :    Rene Brun   01/12/98

#ifndef ROOT_TClassTree
#define ROOT_TClassTree

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TClassTree                                                           //
//                                                                      //
// A specialized canvas to draw classes inheritance tree                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif

class TClassTree : public TCanvas, public TAttText {

protected:
   TString  fClasses;    //List of classes to be drawn
   Float_t  fYoffset;    //offset at top of picture
   Float_t  fLabelDx;    //width along x of TPaveLabels
   Int_t    fShowMul;    //if 1 show multiple inheritance
   Int_t    fShowHas;    //if 1 show "has a" relationship
   Int_t    fShowRef;    //if 1 show classes relationship other than inheritance

   virtual  void ShowHas();
   virtual  void ShowMul();
   virtual  void ShowRef();

public:
   TClassTree();
   TClassTree(const Text_t *name, const Text_t *title="", UInt_t ww=900, UInt_t wh=700);
   virtual      ~TClassTree();
   virtual  void DrawTree(const char *uclasses="", Option_t *option=""); // *MENU*
   virtual  void FindClassPosition(const char *classname, Float_t &x, Float_t &y);
   const Text_t  *GetClasses() const {return fClasses.Data();}
   Int_t         GetShowHas() {return fShowHas;}
   Int_t         GetShowMul() {return fShowMul;}
   Int_t         GetShowRef() {return fShowRef;}
   virtual  void Help(); // *MENU*
   virtual  void SetClasses(const char *classes); // *MENU*
   virtual  void SetYoffset(Float_t offset=2);    // *MENU*
   virtual  void SetLabelDx(Float_t labeldx=3.9); // *MENU*
   virtual  void SetShowHas(Int_t showhas=1);     // *TOGGLE*
   virtual  void SetShowMul(Int_t showmul=1);     // *TOGGLE*
   virtual  void SetShowRef(Int_t showref=1);     // *TOGGLE*

   //dummies
   virtual void   Divide(Int_t nx=1, Int_t ny=1, Float_t xmargin=0.01, Float_t ymargin=0.01, Int_t color=0);
   virtual void   SetGrid(Int_t valuex = 1, Int_t valuey = 1);
   virtual void   SetGridx(Int_t value = 1);
   virtual void   SetGridy(Int_t value = 1);
   virtual void   SetLogx(Int_t value = 1);
   virtual void   SetLogy(Int_t value = 1);
   virtual void   SetLogz(Int_t value = 1);
   virtual void   SetTickx(Int_t value = 1);
   virtual void   SetTicky(Int_t value = 1);
   virtual void   x3d(Option_t *option="");

   ClassDef(TClassTree,1)  //A specialized canvas to draw classes inheritance tree.
};

inline void TClassTree::Divide(Int_t, Int_t, Float_t, Float_t, Int_t) { }
inline void TClassTree::SetGrid(Int_t, Int_t) { }
inline void TClassTree::SetGridx(Int_t) { }
inline void TClassTree::SetGridy(Int_t) { }
inline void TClassTree::SetLogx(Int_t) { }
inline void TClassTree::SetLogy(Int_t) { }
inline void TClassTree::SetLogz(Int_t) { }
inline void TClassTree::SetTickx(Int_t) { }
inline void TClassTree::SetTicky(Int_t) { }
inline void TClassTree::x3d(Option_t *) { }

#endif

