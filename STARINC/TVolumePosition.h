//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine(fine@bnl.gov)   25/12/98
// $Id: St_NodePosition.h,v 1.18 1999/10/28 16:24:31 fine Exp $
// $Log: St_NodePosition.h,v $
// Revision 1.18  1999/10/28 16:24:31  fine
// TDataSet major correction: it may be built with TList (default) or with TObjArray
//
// Revision 1.17  1999/09/27 23:45:43  fine
// Several methods to calculate errors were introduced
//
// Revision 1.16  1999/09/22 03:51:50  fine
// New method and RMath class to manage different transformation have been introduced
//
// Revision 1.15  1999/06/09 22:09:35  fine
// TPolyLine3D has beed redesigned
//
// Revision 1.14  1999/06/05 00:42:32  fine
// SetLineAttribute methods have been introduced
//
// Revision 1.13  1999/04/23 22:47:34  fine
// Node family has been adjusted for TPolyLineShape class
//
// Revision 1.12  1999/04/13 14:26:40  fine
// Geometry-based dataset implementation, next step
//
// Revision 1.11  1999/04/08 16:44:10  fine
// Working version of the NodeView family
//
// Revision 1.10  1999/04/05 03:18:27  fine
// TNode family steps
//
// Revision 1.9  1999/04/02 23:36:04  fine
// Collapsed geometry structures has been implemeted
//
// Revision 1.8  1999/03/30 22:30:14  fine
//  Visibility test has been added for Paint method
//
// Revision 1.7  1999/03/27 22:44:59  fine
// Working 3D Tnode with X3d and OpenGL
//
// Revision 1.6  1999/03/21 22:38:53  fine
// StDataSetIter make up + new NextDataSet method introced
//
// Revision 1.5  1999/02/04 19:22:23  fine
// Severak drawing method have been added to draw STAR nodes
//
// Revision 1.4  1999/01/31 02:03:07  fine
// TDataSetIter::Notify - new method + clean up
//
// Revision 1.3  1998/12/27 02:33:17  fine
// TNode, TNodePosition - first working versions have been introduced *see macros/STAR_shapes.C for an example)
//
// Revision 1.2  1998/12/26 21:40:40  fisyak
// Add Id and Log
//
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TVolumePosition                                                       //
//                                                                      //
// Description of parameters to position a 3-D geometry object          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TVolumePosition
#define ROOT_TVolumePosition

#include <TClass.h>
// +SEQ,TDefineSet.
#include "TVolume.h"

class TBrowser;
class TRotMatrix;

class TVolumePosition  : public TObject {
 protected:
   Double_t        fX[3];        //X offset with respect to parent object
   TRotMatrix     *fMatrix;      //Pointer to rotation matrix
   TVolume        *fNode;        //Refs pointer to the node defined
   UInt_t          fId;          // Unique ID of this position

 public:
        TVolumePosition(TVolume *node=0,Double_t x=0, Double_t y=0, Double_t z=0, TRotMatrix *matrix=0);
        TVolumePosition(TVolume *node,Double_t x, Double_t y, Double_t z, const Text_t *matrixname);
        TVolumePosition(const TVolumePosition&pos): fMatrix(pos.GetMatrix()),fNode(pos.GetNode()),fId(pos.GetId())
                                                    {for (int i=0;i<3;i++) fX[i] = pos.GetX(i);}
        virtual ~TVolumePosition(){;}
        virtual void        Browse(TBrowser *b);
        virtual Float_t    *Errmx2Master(const Float_t *localError, Float_t *masterError);
        virtual Double_t   *Errmx2Master(const Double_t *localError, Double_t *masterError);
        virtual Double_t   *Cormx2Master(const Double_t *localCorr, Double_t *masterCorr);
        virtual Float_t    *Cormx2Master(const Float_t *localCorr, Float_t *masterCorr);
        virtual Int_t       DistancetoPrimitive(Int_t px, Int_t py);
        virtual TDataSet *DefineSet();
        virtual void        Draw(Option_t *option=""); // *MENU*
        virtual void        ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual TRotMatrix  *GetMatrix() const {return fMatrix;}
        virtual TVolume     *GetNode() const {return fNode;}
        virtual Text_t      *GetObjectInfo(Int_t px, Int_t py);
        const   Option_t    *GetOption() const { return GetNode()?GetNode()->GetOption():0;}
        virtual const Char_t *GetName() const { return GetNode() ? GetNode()->GetName():IsA()->GetName();}
        Int_t               GetVisibility() const {return GetNode()?GetNode()->GetVisibility():0;}
        virtual Double_t    GetX(Int_t indx=0) const {return fX[indx];}
        virtual Double_t    GetY() const {return fX[1];}
        virtual Double_t    GetZ() const {return fX[2];}
        virtual UInt_t      GetId() const {return fId;}
        Bool_t              IsFolder() {return GetNode()?kTRUE:kFALSE;}
        virtual Bool_t      Is3D()  {return kTRUE;}
        virtual Double_t   *Local2Master(const Double_t *local, Double_t *master,Int_t nPoints=1);
        virtual Float_t    *Local2Master(const Float_t *local, Float_t *master,Int_t nPoints=1);
        virtual void        Paint(Option_t *option="");
        virtual void        Print(Option_t *option="");
        virtual void        UpdatePosition(Option_t *option="");
        virtual TVolumePosition *Reset(TVolume *node=0,Double_t x=0, Double_t y=0, Double_t z=0, TRotMatrix *matrix=0);
        virtual void        SavePrimitive(ofstream &out, Option_t *option);
        virtual void        SetLineAttributes(); // *MENU*
        virtual void        SetMatrix(TRotMatrix *matrix=0) {fMatrix = matrix;}
        virtual void        SetNode(TVolume *node){ fNode = node;}
        virtual void        SetPosition( Double_t x=0, Double_t y=0, Double_t z=0) {fX[0]=x; fX[1]=y; fX[2]=z;}
        virtual void        SetVisibility(Int_t vis=1); // *MENU*
        virtual void        SetX(Double_t x){ fX[0]  =  x;}
        virtual void        SetY(Double_t y){ fX[1]  =  y;}
        virtual void        SetZ(Double_t z){ fX[2]  =  z;}
        virtual void        SetId(UInt_t id){fId  = id;}

        ClassDef(TVolumePosition,1)  //Description of parameters to position a 3-D geometry object
};

inline TDataSet *TVolumePosition::DefineSet(){ return GetNode(); }

#endif
