//*CMZ :  1.00/07 28/03/97  09.26.02  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   31/10/96

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

#include "TObjectView.h"

//______________________________________________________________________________
TObjectView::~TObjectView()
{
 // dtor must destroy the parent if it did create the parent itself

   if (fParent->TestBit(kDoneByView))
                 SafeDelete(fParent);
}

//______________________________________________________________________________
void TObjectView::Add(TObjectView *view, Option_t *opt){
   TList::Add((TObject *)view, opt);
   Modified(kTRUE);
}

//______________________________________________________________________________
void TObjectView::AppendObject(Option_t *option,TObjectView *parentviewobj)
{
//*-*-*-*-*-*-*-*-Append an image object to another TImageObject*-*-*-*-*
//*-*             ==============================================
//*-*  if an attempt to draw is made when a canvas is not yet created.
//*-*  a default canvas is created with the name "c1".
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
    TObjectView *view = parentviewobj;

    if (!view)
            view = GetSelectedView();

    if (view) {
     SetBit(kDoneByView);
     view->Add(this,option);
     view->Modified(kTRUE);
    }
    else
      AppendPad(option);
}

//______________________________________________________________________________
TObjectView *TObjectView::Cd(TObjectView *objview){
  // return the previous selected object and set a current one
  TObjectView *view = objview;
  if (!view) view =  this;
  TObjectView *current = GetSelectedView();
  SetSelectedView(view);
  return current;
}

//______________________________________________________________________________
Int_t TObjectView::DistanceToPrimitive(Int_t px, Int_t py)
{
   if (!fOriginView->IsSelected())     return 99999;
   return ViewDistanceToPrimitive(px,py);
}

//______________________________________________________________________________
TObjectView *TObjectView::DrawView(Option_t *option,TObjectView *parentviewobj)
{
   AppendObject(option,parentviewobj);
//*-*
//*-*  Draw the accessoures into this View
//*-*
   TObjectView *saveselected = Cd();
   Draw(option);
   saveselected->Cd();
   return this;
}

//______________________________________________________________________________
 void TObjectView::Draw(Option_t *option){
 // Unlike TObject::Draw() TObjectView::Draw() doesn't create
 // any new TObjectView.
 // it creates TObject objects and uses TObject::Draw()

 //*-*
 //*-*  Save the back poiner to the image of the parent object
 //*-*

    fOriginView = GetSelectedView();

 //*-*  Create here new axis, histogram,  TPaveText and so on
 //*-*
     RegisterObject(new TObject());
 //   RegisterObject(new TAxis( ... ));
 //          . . .
 //          . . .
 //          . . .

}
//______________________________________________________________________________
void  TObjectView::Modified(Bool_t flag)
{
   TObject::Modified(flag);
   fOriginView->Modified(flag);
}

//______________________________________________________________________________
Int_t TObjectView::ViewDistanceToPrimitive(Int_t px, Int_t py)
{
   return 99999;
}

//______________________________________________________________________________
void TObjectView::Paint(Option_t *option, Int_t deepofview)
{
  PaintView(option, deepofview);
}

//______________________________________________________________________________
void  TObjectView::RegisterObject(TObject *obj)
{
 if (obj) {
  // We have to mark the TObject been created by ObjectImage with a
  // special bit
       obj->SetBit(kDoneByView);
  // Now we can Draw new attribute
       obj->Draw();
 }
}

//______________________________________________________________________________
void TObjectView::PaintView(Option_t *option, Int_t deepofview)
{
  PaintOwnView(option);
  if (deepofview) {
    if (deepofview > 0) deepofview--;   // decrease the current level
    TIter next(this);
    TObjectView *primitive = 0;
    while (primitive = (TObjectView *)next())
                    primitive->PaintView(option,deepofview);
  }
  Modified(kFALSE);
}

//______________________________________________________________________________
void TObjectView::SetSelectedView(TObjectView *view)
{
  if (fgSelectedView) fgSelectedView->SetSelected(kFALSE);
  fgSelectedView = this;
  fgSelectedView->SetSelected();
}
