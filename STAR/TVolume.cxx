//*CMZ :  2.23/12 29/01/2000  15.31.22  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine   10/12/98
// $Id: TVolume.cxx,v 1.33 1999/11/24 18:49:27 fine Exp $
// $Log: TVolume.cxx,v $
// Revision 1.33  1999/11/24 18:49:27  fine
// Some changed in TVolume dtor, GetListOfPositions removed
//
// Revision 1.32  1999/11/16 16:29:56  fine
// TObject::GetObjectInfo() implemented
//
// Revision 1.31  1999/11/15 23:22:16  fine
// refs to GEANT Wen site has been added
//
// Revision 1.30  1999/10/28 16:24:30  fine
// TDataSet major correction: it may be built with TList (default) or with TObjArray
//
// Revision 1.29  1999/07/09 01:56:37  fine
// New method to contrsuct sub views and manage visibilities
//
// Revision 1.28  1999/06/21 22:17:35  fine
// Identity matrix fixed
//
// Revision 1.27  1999/06/14 08:45:19  fine
// List of the shapes have been introduced for TVolumeView
//
// Revision 1.26  1999/06/09 22:09:34  fine
// TPolyLine3D has beed redesigned
//
// Revision 1.25  1999/05/29 20:52:32  fine
// Several method to estimat range of 3D object were introduced
//
// Revision 1.24  1999/05/13 19:57:26  fine
// TVolume  the TShape list has been introduced, TVolume file format has been changed
//
// Revision 1.23  1999/05/12 15:46:00  fine
// some cosmetic change fro Browse method
//
// Revision 1.22  1999/04/23 22:47:33  fine
// Node family has been adjusted for TPolyLineShape class
//
// Revision 1.21  1999/04/15 19:44:46  fine
//  TDataSetIter::FindObject bug has been fixed. aliases FindByName and FindByPath  introduced
//
// Revision 1.20  1999/04/13 14:26:39  fine
// Geometry-based dataset implementation, next step
//
// Revision 1.19  1999/04/08 16:44:09  fine
// Working version of the NodeView family
//
// Revision 1.18  1999/04/02 23:56:17  fine
//  Clean up
//
// Revision 1.17  1999/03/30 22:30:13  fine
//  Visibility test has been added for Paint method
//
// Revision 1.16  1999/03/29 19:25:23  fine
// Visibility flag have been activated. Some working correction
//
// Revision 1.15  1999/03/27 22:44:59  fine
// Working 3D Tnode with X3d and OpenGL
//
// Revision 1.14  1999/03/21 22:38:53  fine
// StDataSetIter make up + new NextDataSet method introced
//
// Revision 1.13  1999/02/04 19:22:22  fine
// Severak drawing method have been added to draw STAR nodes
//
// Revision 1.12  1999/02/04 16:26:11  fine
// TVolumeView::Paint method has been introduced
//
// Revision 1.11  1999/01/31 02:03:06  fine
// TDataSetIter::Notify - new method + clean up
//
// Revision 1.10  1999/01/30 04:24:20  fine
// TTable: Print memory leak fixed
//
// Revision 1.9  1999/01/29 18:41:53  fine
// TTableSorter clean up for HP machine
//
// Revision 1.8  1999/01/25 14:22:46  fine
// TVolume Identity matrix improvement
//
// Revision 1.7  1999/01/23 18:40:53  fisyak
// Cleanup for SL98l
//
// Revision 1.6  1999/01/13 20:29:14  fine
// TDataSet::Pass() method - the option kUp has been introduced
//
// Revision 1.5  1998/12/27 04:16:44  fine
// *** empty log message ***
//
// Revision 1.3  1998/12/27 02:33:16  fine
// TVolume, TVolumePosition - first working versions have been introduced *see macros/STAR_shapes.C for an example)
//
// Revision 1.2  1998/12/26 21:40:40  fisyak
// Add Id and Log
//
/*************************************************************************
 * Copyright(c) 1998, FineSoft, All rights reserved. Valery Fine (Faine) *
 *************************************************************************/
//*KEND.

#include <iostream.h>

#include "TROOT.h"
#include "TClass.h"
#include "TVirtualPad.h"
#include "TView.h"
#include "TGeometry.h"
#include "TRotMatrix.h"
#include "TShape.h"
#include "TVolume.h"
#include "TBrowser.h"
#include "X3DBuffer.h"

#include "TPadView3D.h"
#include "TCanvas.h"

#include "TRotMatrix.h"
#include "TVolumePosition.h"

//const Int_t kMAXLEVELS = 20;
const Int_t kSonsInvisible = BIT(17);

#if 0
const Int_t kVectorSize = 3;
const Int_t kMatrixSize = kVectorSize*kVectorSize;

static Double_t gTranslation[kMAXLEVELS][kVectorSize];
static Double_t gRotMatrix[kMAXLEVELS][kMatrixSize];
static Int_t gGeomLevel = 0;

TVolume *gNode;
#endif
R__EXTERN  Size3D gSize3D;
static TRotMatrix *gIdentity = 0;
ClassImp(TVolume)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-* T V O L U M E  description *-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                     ==========================
//*-*
//*-*    A TVolume object is used to build the geometry hierarchy.
//*-*    Since TVolume is derived from TDataSet class it may contain other volumes.
//*-*
//*-*    A geometry volume has attributes:
//*-*      - name and title
//*-*      - pointer to the referenced shape (see TShape).
//*-*      - list of TVolumePosition object defining the position of the nested volumes
//*-*        with respect to the mother node.
//*-*
//*-*
//*-*    A volume can be drawn.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*


//______________________________________________________________________________
TVolume::TVolume()
{
//*-*-*-*-*-*-*-*-*-*-*Volume default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

   fShape        = 0;
   fListOfShapes = 0;
   fVisibility   = kBothVisible;
}

//______________________________________________________________________________
TVolume::TVolume(const Text_t *name, const Text_t *title, const Text_t *shapename, Option_t *option)
       :TObjectSet(name),TAttLine(), TAttFill(),fShape(0),fListOfShapes(0)
{
//*-*-*-*-*-*-*-*-*-*-*Volume normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =========================
//*-*
//*-*    name    is the name of the node
//*-*    title   is title
//*-*    shapename is the name of the referenced shape
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

#ifdef WIN32
//*-* The color "1" - default produces a very bad 3D image with OpenGL
   Color_t lcolor = 16;
   SetLineColor(lcolor);
#endif
   static Int_t counter = 0;
   counter++;
   SetTitle(title);
   if(!(counter%1000))cout<<"TVolume count="<<counter<<" name="<<name<<endl;
   Add(gGeometry->GetShape(shapename),kTRUE);
//   fParent = gGeometry->GetCurrenTVolume();
   fOption = option;
   fVisibility = kBothVisible;

   if(!fShape) {Printf("Illegal referenced shape"); return;}
   ImportShapeAttributes();

#if 0
   if (GetParent()) {
//      fParent->BuildListOfNodes();
//      fParent->GetListOfNodes()->Add(this);
   } else {
//      gGeometry->GetListOfNodes()->Add(this);
//      cd();
   }
#endif
}


//______________________________________________________________________________
TVolume::TVolume(const Text_t *name, const Text_t *title, TShape *shape, Option_t *option)
                :TObjectSet(name),TAttLine(),TAttFill(),fShape(0),fListOfShapes(0)
{
//*-*-*-*-*-*-*-*-*-*-*Volume normal constructor*-*-*-*-*-*-*-*-*-*-*
//*-*                  ================================
//*-*
//*-*    name    is the name of the node
//*-*    title   is title
//*-*    shape   is the pointer to the shape definition
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
#ifdef WIN32
//*-* The color "1" - default produces a very bad 3D image with OpenGL
   Color_t lcolor = 16;
   SetLineColor(lcolor);
#endif

   Add(shape,kTRUE);
   fOption = option;
   fVisibility = kBothVisible;
   SetTitle(title);
   if(!shape) {Printf("Illegal referenced shape"); return;}
   ImportShapeAttributes();
#if 0
   if (GetParent()) {
//      fParent->BuildListOfNodes();
//      fParent->GetListOfNodes()->Add(this);
      ImportShapeAttributes();
   } else {
//      gGeometry->GetListOfNodes()->Add(this);
//      cd();
   }
#endif

}
//______________________________________________________________________________
Int_t TVolume::MapStNode2GEANTVis(ENodeSEEN  vis)
{
// ENodeSEEN Visibility flag  00 - everything visible,
//                            10 - this unvisible, but sons are visible
//                            01 - this visible but sons
//                            11 - neither this nor its sons are visible
// Maps the value of the visibility flag to begin_html <a href="http://wwwinfo.cern.ch/asdoc/geant_html3/node128.html#SECTION056000000000000000000000">GEANT 3.21 "volume attributes"</a>end_html
  const Int_t mapVis[4] = {1, -2, 0, -1 };
  return mapVis[vis];
}
//______________________________________________________________________________
//ENodeSEEN TVolume::MapGEANT2StNodeVis(Int_t vis)
Int_t TVolume::MapGEANT2StNodeVis(Int_t vis)
{
// Maps the value of begin_html <a href="http://wwwinfo.cern.ch/asdoc/geant_html3/node128.html#SECTION056000000000000000000000">GEANT 3.21 "volume attributes"</a>end_html to the visibility flag
  const Int_t mapVis[4] = {1, -2, 0, -1 };
  Int_t i;
//  for (i =0; i<3;i++) if (mapVis[i] == vis) return (ENodeSEEN)i;
  for (i =0; i<3;i++) if (mapVis[i] == vis) return i;
  return kBothVisible;
}
//______________________________________________________________________________
TVolume::TVolume(TNode &rootNode):fShape(0),fListOfShapes(0)
{
  // Convert the ROOT TNode object into STAR TVolume

  SetName(rootNode.GetName());
  SetTitle(rootNode.GetTitle());
  fVisibility = ENodeSEEN(MapGEANT2StNodeVis(rootNode.GetVisibility()));
  fOption     = rootNode.GetOption();
  Add(rootNode.GetShape(),kTRUE);

  SetLineColor(rootNode.GetLineColor());
  SetLineStyle(rootNode.GetLineStyle());
  SetLineWidth(rootNode.GetLineWidth());
  SetFillColor(rootNode.GetFillColor());
  SetFillStyle(rootNode.GetFillStyle());

  TList *nodes = rootNode.GetListOfNodes();
  if (nodes) {
    TIter next(nodes);
    TNode *node = 0;
    while ( (node = (TNode *) next()) ){
      TVolume *nextNode = new TVolume(*node);
      Add(nextNode,node->GetX(),node->GetY(),node->GetZ(),node->GetMatrix());
    }
  }
}

//______________________________________________________________________________
void TVolume::Add(TShape *shape, Bool_t IsMaster)
{
  if (!shape) return;
  if (!fListOfShapes) fListOfShapes = new TList;
  fListOfShapes->Add(shape);
  if (IsMaster) fShape = shape;
}
//______________________________________________________________________________
TNode *TVolume::CreateTNode(const TVolumePosition *position)
{
  // Convert the  STAR TVolume into ROOT TNode object

  Double_t x=0;
  Double_t y=0;
  Double_t z=0;
  TRotMatrix* matrix = 0;
  if (position) {
     x=position->GetX();
     y=position->GetY();
     z=position->GetZ();
     matrix = position->GetMatrix();
  }
//  const Char_t  *path = Path();
//  printf("%s: %s/%s, shape=%s/%s\n",path,GetName(),GetTitle(),GetShape()->GetName(),GetShape()->ClassName());
  TNode *newNode  = new TNode(GetName(),GetTitle(),GetShape(),x,y,z,matrix,GetOption());
  newNode->SetVisibility(MapStNode2GEANTVis(GetVisibility()));

  newNode->SetLineColor(GetLineColor());
  newNode->SetLineStyle(GetLineStyle());
  newNode->SetLineWidth(GetLineWidth());
  newNode->SetFillColor(GetFillColor());
  newNode->SetFillStyle(GetFillStyle());

  TList *positions = GetListOfPositions();
  if (positions) {
    TIter next(positions);
    TVolumePosition *pos = 0;
    while ( (pos = (TVolumePosition *) next()) ){
      TVolume *node = pos->GetNode();
      if (node) {
          newNode->cd();
          node->CreateTNode(pos);
      }
    }
  }
  newNode->ImportShapeAttributes();
  return newNode;
}

//______________________________________________________________________________
TVolume::~TVolume()
{
//*-*-*-*-*-*-*-*-*-*-*Volume default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================

   // Hmm, here we are in the troubles, in theory we have to find all
   // place where this node is sitting but we don't (yet :-()

   if (GetListOfPositions()) {
     GetListOfPositions()->Delete();
     SetPositionsList();
   }
   SafeDelete(fListOfShapes);
#if 0
   if (fParent)     fParent->GetListOfNodes()->Remove(this);
   else    gGeometry->GetListOfNodes()->Remove(this);
   if (gGeometry->GetCurrenTVolume() == this) gGeometry->SetCurrenTVolume(0);
#endif
}
//______________________________________________________________________________
void TVolume::Add(TVolumePosition *position)
{
  if (!GetListOfPositions()) SetPositionsList(new TList);
  if ( GetListOfPositions()) GetListOfPositions()->Add(position);
  else Error("Add","Can not create list of positions for the current node <%s>:<%s>",GetName(),GetTitle());
}
//______________________________________________________________________________
TVolumePosition *TVolume::Add(TVolume *node, TVolumePosition *nodePosition)
{
  TVolumePosition *position = nodePosition;
  if (!node) return 0;
  if (!position) position = new TVolumePosition(node);  // Create default position
  TDataSet::Add(node);
  Add(position);
  return position;
}
//______________________________________________________________________________
TVolumePosition *TVolume::Add(TVolume *volume, Double_t x, Double_t y, Double_t z,
                              TRotMatrix *matrix,  UInt_t id, Option_t *)
{
//*-*
//*-*    volume  the pointer to the volume to be placed
//*-*    x,y,z   are the offsets of the volume with respect to his mother
//*-*    matrix  is the pointer to the rotation matrix
//*-*     id     is a unique position id
//*-*
 if (!volume) return 0;
 TRotMatrix *rotation = matrix;
 if(!rotation) rotation = GetIdentity();
 TVolumePosition *position = new TVolumePosition(volume,x,y,z,rotation);
 position->SetId(id);
 return Add(volume,position);
}

//______________________________________________________________________________
TVolumePosition *TVolume::Add(TVolume *volume, Double_t x, Double_t y, Double_t z,
                              const Text_t *matrixname,  UInt_t id, Option_t *)
{
//*-*
//*-*    volume      the pointer to the volume to be placed
//*-*    x,y,z       are the offsets of the volume with respect to his mother
//*-*    matrixname  is the name of the rotation matrix
//*-*     id         is a unique position id
//*-*
 if (!volume) return 0;
 TRotMatrix *rotation = 0;
 if (matrixname && strlen(matrixname)) rotation = gGeometry->GetRotMatrix(matrixname);
 if (!rotation)                        rotation = GetIdentity();
 TVolumePosition *position = new TVolumePosition(volume,x,y,z,rotation);
 position->SetId(id);
 return Add(volume,position);
}

//______________________________________________________________________________
void TVolume::Browse(TBrowser *b)
{
   if (GetListOfPositions()){
       TVolumePosition *nodePosition = 0;
       TIter next(GetListOfPositions());
       Int_t posNumber = 0;
       while ( (nodePosition = (TVolumePosition *)next()) ) {
         posNumber       = nodePosition->GetId();
         TString posName = "*";
         posName += nodePosition->GetNode()->GetTitle();
         char num[10];
         posName += ";";
         sprintf(num,"%d",posNumber);
         posName += num;
         b->Add(nodePosition,posName.Data());
       }
//       GetListOfPositions()->Browse(b);
   }
//    if( GetCollection() ) {
//       GetCollection()->Browse( b );
//    }
   else {
#ifndef WIN32
      Inspect();
#endif
 //      Draw();
 //      gPad->Update();
    }
}

//______________________________________________________________________________
Int_t TVolume::DistancetoPrimitive(Int_t px, Int_t py)
{
  return DistancetoNodePrimitive(px,py);
}

//______________________________________________________________________________
Int_t TVolume::DistancetoNodePrimitive(Int_t px, Int_t py,TVolumePosition *pos)
{
//*-*-*-*-*-*-*-*-*Compute distance from point px,py to a TVolumeView*-*-*-*-*-*
//*-*                  ===========================================
//*-*  Compute the closest distance of approach from point px,py to the position of
//*-*  this volume.
//*-*  The distance is computed in pixels units.
//*-*
//*-*  It is restricted by 2 levels of TVolumes
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   const Int_t big = 9999;
   if ( GetVisibility() == kNoneVisible )  return big;

   const Int_t inaxis = 7;
   const Int_t maxdist = 5;

   Int_t puxmin = gPad->XtoAbsPixel(gPad->GetUxmin());
   Int_t puymin = gPad->YtoAbsPixel(gPad->GetUymin());
   Int_t puxmax = gPad->XtoAbsPixel(gPad->GetUxmax());
   Int_t puymax = gPad->YtoAbsPixel(gPad->GetUymax());

//*-*- return if point is not in the user area
   if (px < puxmin - inaxis) return big;
   if (py > puymin + inaxis) return big;
   if (px > puxmax + inaxis) return big;
   if (py < puymax - inaxis) return big;

   TView *view =gPad->GetView();
   if (!view) return big;

   static TVolumePosition nullPosition;
   TVolumePosition *position = pos;
   if (!position) position = &nullPosition;
   if (pos) position->UpdatePosition();
   Int_t dist = big;
   if ( !(GetVisibility() & kThisUnvisible ) ) {
     TShape  *shape = 0;
     TIter nextShape(fListOfShapes);
     while ((shape = (TShape *)nextShape())) {
      //*-*- Distnance to the next referenced shape  if visible
      if (shape->GetVisibility()) {
        Int_t dshape = shape->DistancetoPrimitive(px,py);
        if (dshape < maxdist) {
           gPad->SetSelected(this);
           return 0;
        }
        if (dshape < dist) dist = dshape;
      }
    }
  }

  if ( (GetVisibility() & kSonUnvisible) ) return dist;

//*-*- Loop on all sons
   TList *posList = GetListOfPositions();
   Int_t dnode = dist;
   if (posList && posList->GetSize()) {
      gGeometry->PushLevel();
      TVolumePosition *thisPosition;
      TObject *obj;
      TIter  next(posList);
      while ((obj = next())) {
         thisPosition = (TVolumePosition*)obj;
         TVolume *node = thisPosition->GetNode();
         dnode = node->DistancetoNodePrimitive(px,py,thisPosition);
         if (dnode <= 0)  break;
         if (dnode < dist) dist = dnode;
         if (gGeometry->GeomLevel() > 2) break;
      }
      gGeometry->PopLevel();
   }

   if (gGeometry->GeomLevel()==0 && dnode > maxdist) {
      gPad->SetSelected(view);
      return 0;
   } else
      return dnode;
}

//______________________________________________________________________________
void TVolume::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*Draw Referenced node with current parameters*-*-*-*
//*-*                   =============================================

   TString opt = option;
   opt.ToLower();
//*-*- Clear pad if option "same" not given
   if (!gPad) {
      if (!gROOT->GetMakeDefCanvas()) return;
      (gROOT->GetMakeDefCanvas())();
   }
   if (!opt.Contains("same")) gPad->Clear();

   AppendPad(option);

//*-*- Create a 3-D View
   TView *view = gPad->GetView();
   if (!view) {
      view = new TView(1);
      view->SetAutoRange(kTRUE);
      Paint("range");
      view->SetAutoRange(kFALSE);
   }
}


//______________________________________________________________________________
void TVolume::DrawOnly(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*Draw only Sons of this node*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ===========================

   SetVisibility(kThisUnvisible);
   Draw(option);
}


//______________________________________________________________________________
void TVolume::ExecuteEvent(Int_t, Int_t, Int_t)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//*-*  This member function must be implemented to realize the action
//*-*  corresponding to the mouse click on the object in the window
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//   if (gPad->GetView())
//             gPad->GetView()->ExecuteRotateView(event, px, py);

//   if (!gPad->GetListOfPrimitives()->FindObject(this)) gPad->SetCursor(kCross);
   gPad->SetCursor(kHand);
}

//______________________________________________________________________________
TRotMatrix *TVolume::GetIdentity()
{
 Double_t *IdentityMatrix = 0;
 // Return a pointer the "identity" matrix
 if (!gIdentity) {
      gIdentity = gGeometry->GetRotMatrix("Identity");
      if (!gIdentity) {
         gIdentity  =  new TRotMatrix();
         gIdentity->SetName("Identity");
         gIdentity->SetTitle("Identity matrix");
         gIdentity->SetMatrix(IdentityMatrix);
         gIdentity->SetMatrix(IdentityMatrix);
         IdentityMatrix = gIdentity->GetMatrix();
                                *IdentityMatrix = 1;
         IdentityMatrix += 4;   *IdentityMatrix = 1;
         IdentityMatrix += 4;   *IdentityMatrix = 1;
         gGeometry->GetListOfMatrices()->AddFirst(gIdentity);
      }
 }
 return gIdentity;
}
//______________________________________________________________________________
Text_t *TVolume::GetObjectInfo(Int_t px, Int_t py)
{
   if (!gPad) return "";
   static char info[512];
   sprintf(info,"%s/%s",GetName(),GetTitle());
   Axis_t x[3];
   ((TPad *)gPad)->AbsPixeltoXY(px,py,x[0],x[1]);
   TView *view =gPad->GetView();
   if (view) view->NDCtoWC(x, x);

   TIter nextShape(fListOfShapes);
   TShape *shape = 0;
   while( (shape = (TShape *)nextShape()) )
      sprintf(&info[strlen(info)]," %6.2f/%6.2f: shape=%s/%s",x[0],x[1],shape->GetName(),shape->ClassName());

   return info;
}

//______________________________________________________________________________
void TVolume::ImportShapeAttributes()
{
//*-*-*-*-*-*-*Copy shape attributes as node attributes*-*-*-*-*--*-*-*-*-*-*
//*-*          ========================================

   if (fShape) {
     SetLineColor(fShape->GetLineColor());
     SetLineStyle(fShape->GetLineStyle());
     SetLineWidth(fShape->GetLineWidth());
     SetFillColor(fShape->GetFillColor());
     SetFillStyle(fShape->GetFillStyle());
   }

   if (!GetCollection()) return;
   TVolume *volume;
   TIter  next(GetCollection());
   while ( (volume = (TVolume *)next()) )
     volume->ImportShapeAttributes();
}

#if 0
//______________________________________________________________________________
void TVolume::ls(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*List Referenced object with current parameters*-*-*-*
//*-*                   ===============================================

   Int_t sizeX3D = 0;
   TString opt = option;
   opt.ToLower();

   Int_t maxlevel = 15;
   if (opt.Contains("1")) maxlevel = 1;
   if (opt.Contains("2")) maxlevel = 2;
   if (opt.Contains("3")) maxlevel = 3;
   if (opt.Contains("4")) maxlevel = 4;
   if (opt.Contains("5")) maxlevel = 5;
   if (opt.Contains("x")) sizeX3D  = 1;

   IndentLevel();

   Int_t nsons = 0;
   if (Nodes()) nsons = Nodes()->GetSize();
   const Text_t *shapename, *matrixname;
   if (fShape) shapename = fShape->IsA()->GetName();
   else        shapename = "????";
   cout<<GetName()<<":"<<GetTitle()<<" is a "<<shapename;
   if (sizeX3D) {
      gSize3D.numPoints = 0;
      gSize3D.numSegs   = 0;
      gSize3D.numPolys  = 0;
      Sizeof3D();
      cout<<" NumPoints="<<gSize3D.numPoints;
      cout<<" NumSegs  ="<<gSize3D.numSegs;
      cout<<" NumPolys ="<<gSize3D.numPolys;
   } else {
      cout<<" X="<<fX<<" Y="<<fY<<" Z="<<fZ;
      if (nsons) cout<<" Sons="<<nsons;
      if (fMatrix) matrixname   = fMatrix->GetName();
      else         matrixname   = "Identity";
      if(strcmp(matrixname,"Identity")) cout<<" Rot="<<matrixname;
   }
   cout<<endl;
   if(!nsons) return;
   if (gGeomLevel >= maxlevel) return;

   TObject::IncreaseDirLevel();
   gGeomLevel++;
   Nodes()->ls(option);
   gGeomLevel--;
   TObject::DecreaseDirLevel();

}
#endif

//______________________________________________________________________________
void TVolume::Paint(Option_t *opt)
{
//*-*- Draw Referenced node
  gGeometry->SetGeomLevel();
  gGeometry->UpdateTempMatrix();
  PaintNodePosition(opt);
  return;
}

//______________________________________________________________________________
void TVolume::PaintNodePosition(Option_t *option,TVolumePosition *pos)
{
//*-*-*-*-*-*-*-*-*-*-*-*Paint Referenced volume with current parameters*-*-*-*
//*-*                   ==============================================
//*-*
//*-*  vis = 1  (default) shape is drawn
//*-*  vis = 0  shape is not drawn but its sons may be not drawn
//*-*  vis = -1 shape is not drawn. Its sons are not drawn
//*-*  vis = -2 shape is drawn. Its sons are not drawn
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
  if ( GetVisibility() == kNoneVisible )  return;

  static TVolumePosition nullPosition;

// restrict the levels for "range" option
  Int_t level = gGeometry->GeomLevel();
//  if (option && option[0]=='r' && level > 3 && strcmp(option,"range") == 0) return;
  if ((!(GetVisibility() & kThisUnvisible)) && option && option[0]=='r' && level > 3 ) return;

  TPadView3D *view3D=gPad->GetView3D();

  TVolumePosition *position = pos;
  if (!position)   position   = &nullPosition;

  // PaintPosition does change the current matrix and it MUST be callled FIRST !!!

  position->UpdatePosition(option);

  if (!(GetVisibility() & kThisUnvisible))  PaintShape(option);

  if (GetVisibility() & kSonUnvisible) return;

//*-*- Paint all sons
  TList *posList = GetListOfPositions();
  if (posList && posList->GetSize()) {
    gGeometry->PushLevel();
    TVolumePosition *thisPosition;
    TIter  next(posList);
    while ((thisPosition = (TVolumePosition *)next())) {
       if (view3D)  view3D->PushMatrix();

       TVolume *volume = thisPosition->GetNode();
       if (volume) volume->PaintNodePosition(option,thisPosition);

       if (view3D) view3D->PopMatrix();
    }
    gGeometry->PopLevel();
  }
}

//______________________________________________________________________________
void TVolume::PaintShape(Option_t *option)
{
  // Paint shape of the volume
  // To be called from the TObject::Paint method only
  Bool_t rangeView = option && option[0]=='r';
  if (!rangeView) {
    TAttLine::Modify();
    TAttFill::Modify();
  }

  if ( (GetVisibility() & kThisUnvisible) ) return;

  TIter nextShape(fListOfShapes);
  TShape *shape = 0;
  while( (shape = (TShape *)nextShape()) ) {
    if (!rangeView) {
      shape->SetLineColor(GetLineColor());
      shape->SetLineStyle(GetLineStyle());
      shape->SetLineWidth(GetLineWidth());
      shape->SetFillColor(GetFillColor());
      shape->SetFillStyle(GetFillStyle());
      TPadView3D *view3D=gPad->GetView3D();
      if (view3D)
         view3D->SetLineAttr(GetLineColor(),GetLineWidth(),option);
    }
    shape->Paint(option);
  }
}
//______________________________________________________________________________
void TVolume::DeletePosition(TVolumePosition *position)
{
  // DeletePosition deletes the position of the TVolume *node from this TVolume
  // and removes that volume from the list of the nodes of this TVolume

  if (!position) return;

  if (GetListOfPositions()) {
    TObjLink *lnk = GetListOfPositions()->FirstLink();
    while (lnk) {
       TVolumePosition *nextPosition = (TVolumePosition *)(lnk->GetObject());
       if (nextPosition && nextPosition == position) {
          TVolume *node = nextPosition->GetNode();
          GetListOfPositions()->Remove(lnk);
          delete nextPosition;
          Remove(node);
          break;
       }
       lnk = lnk->Next();
    }
  }
}

//______________________________________________________________________________
void TVolume::GetLocalRange(Float_t *min, Float_t *max)
{
  //  GetRange
  //
  //  Calculates the size of 3 box the volume occupies,
  //  Return:
  //    two floating point arrays with the bound of box
  //     surroundind all shapes of this TVolumeView
  //

  TVirtualPad *savePad = gPad;
  //  Create a dummy TPad;
  TCanvas dummyPad("--Dumm--","dum",1,1);
  // Assing 3D TView
  TView view(1);

  gGeometry->SetGeomLevel();
  gGeometry->UpdateTempMatrix();
  view.SetAutoRange(kTRUE);
  Paint("range");
  view.GetRange(&min[0],&max[0]);
  // restore "current pad"
   if (savePad) savePad->cd();
}

//______________________________________________________________________________
void TVolume::SetVisibility(ENodeSEEN vis)
{
//*-*-*-*-*-*-*Set visibility for this volume and its sons*-*-*-*-*--*-*-*-*-*-*
//*-*          =========================================
// ENodeSEEN Visibility flag  00 - everything visible,
//                            10 - this unvisible, but sons are visible
//                            01 - this visible but sons
//                            11 - neither this nor its sons are visible
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
  fVisibility = vis;
}

//______________________________________________________________________________
void TVolume::Sizeof3D() const
{
//*-*-*-*-*-*-*Return total size of this 3-D volume with its attributes*-*-*
//*-*          ==========================================================

   if (!(GetVisibility() & kThisUnvisible) ) {
     TIter nextShape(fListOfShapes);
     TShape *shape = 0;
     while( (shape = (TShape *)nextShape()) ) {
        if (shape->GetVisibility())  shape->Sizeof3D();
     }
   }

   if ( GetVisibility() & kSonUnvisible ) return;

   if (!Nodes()) return;
   TVolume *node;
   TObject *obj;
   TIter  next(Nodes());
   while ((obj = next())) {
      node = (TVolume*)obj;
      node->Sizeof3D();
   }
}
