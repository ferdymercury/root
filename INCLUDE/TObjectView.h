//*CMZ :  1.01/04 23/05/97  17.03.10  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   31/10/96

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

#ifndef ROOT_TObjectView
#define ROOT_TObjectView

////////////////////////////////////////////////////////////////////////
// This class looks like class Iterator for container classes.        //
// It must be supplied together with the parent object only           //
// if one wants it to be painted                                      //
//                                                                    //
// Probably this way one can move Paint function from TObject         //
// to TObjectView to make TObject free of painting at all             //
//                                                                    //
// In theory this allows to generate a set of of TObjectClass         //
// for one TObject.                                                   //
// For instance use can write his own implementation of               //
// TObjectView for TH1F (Histogram) if he is satisfied with the       //
// histogram itself but wish another graphics represenation of it.    //
////////////////////////////////////////////////////////////////////////

#include "TList.h"

class TObjectView : public TList {

// friend class TObjectPro;
friend class TObject;

private:
    TObject *fOrigin;          // back pointer to the parent object
    TObjectView *fOriginView;  // back pointer to the image of the parent object
    Bool_t   fSelected;        // Flag whether this object has been selected

protected:

    static  TObjectView *fgSelectedView;                 // Pointer to the selected instance of this kind of View

    virtual void PaintOwnView(Option_t *option=""){ ; }  // draw "own" view (with no accesours) of the object.
    void RegisterObject(TObject *obj);                   // Mark the object as the attribite one
//    TObjectView(TObject *obj) : TList(obj){;}          // Only TObjectPro object can create TObjectView one
    virtual void SetSelectedView(TObjectView *view);     // "Select" the view object

public:
    TObjectView(){fParent = 0;}
    TObjectView(TObject *obj);
    virtual ~TObjectView();
    virtual void  Add(TObjectView *view, Option_t *opt="");            //Add view in the this view
    virtual void  AppendObject(Option_t *option="", TObjectView *parentviewobj=0); // Append this view object to the parent TViewObject
    virtual Int_t DistanceToPrimitive(Int_t px, Int_t py);
    virtual void  Draw(Option_t *option="");
    virtual void  DrawAccessoures();                                   // Like axis, labels, PaveText and so on
    virtual void  DrawSelection();
    virtual TObjectView *DrawView(Option_t *option="",TObjectView *parentviewobj=0); //Draw this view as part of parent view if any
    virtual TObjectView *Cd(TObjectView *objview=0);                   // Set this objview as the current image (or this by default)
    virtual TObjectView *GetSelectedView();                            // Returns the pointer to the current TObjectView
    virtual Bool_t IsSelected(){ return fSelected;}                    // Retuer TRUE if this View has  is selected;
    virtual void  Modified(Bool_t flag=kTRUE);                         // Returns the pointer to the current TObjectView
    virtual void  Paint(Option_t *option="", Int_t deep = -1);         // Paint view
    virtual void  PaintView(Option_t *option="",Int_t deep = -1);      // View deeper
    virtual Int_t ViewDistanceToPrimitive(Int_t px, Int_t py);
    virtual void  SetSelected(Bool_t flag=kTRUE){ fSelected = flag;}   // Mark this object as selected

//    ClassDef(TObjectView,0)  //Basic ROOT slave object
};

#endif
