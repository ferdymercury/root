//*CMZ :  1.01/04 03/06/97  11.21.39  by  Rene Brun
//*-- Author :
//*CMZ :  1.00/07 28/03/97  09.26.02  by  Rene Brun
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

#include "TObjectView.h"

#include "TROOT.h"

TObjectView *TObjectView::fgSelectedView = 0;  // Pointer to the selected instance of this kind of View

 // ClassImp(TObjectView)

//______________________________________________________________________________
TObjectView::TObjectView(TObject *obj) : TList(obj){
//We have to insert this pair of the objects into the gROOT list of views
    SetBit(kObjectIsSlave);
    gROOT->AddNewSlave(obj,(TObject *)this);
}
//______________________________________________________________________________
TObjectView::~TObjectView()
{
 // dtor must destroy the parent-accessoure if it did create the parent itself

   if (fParent && fParent->TestBit(kDoneByView))
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
 //*-*  Save the back pointer to the image of the parent object
 //*-*

    fOriginView = GetSelectedView();

 //*-*  Create here new axis, histogram,  TPaveText and so on
 //*-*
#if 0
     RegisterObject(new TObject());
 //   RegisterObject(new TAxis( ... ));
 //          . . .
 //          . . .
 //          . . .
#endif
}
//______________________________________________________________________________
void TObjectView::DrawAccessoures(){
// Like axis, labels, PaveText and so on
   AbstractMethod("DrawAccessoures");
}
//______________________________________________________________________________
void  TObjectView::DrawSelection(){
   AbstractMethod("DrawSelection");
}

//______________________________________________________________________________
TObjectView *TObjectView::GetSelectedView(){
//*-* Returns the pointer to the current TObjectView
    return fgSelectedView;
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
   return fParent->DistancetoPrimitive(px,py);
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
