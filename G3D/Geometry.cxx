//*CMZ :  2.00/11 09/08/98  10.30.13  by  Rene Brun
//*CMZ :  2.00/00 03/07/98  15.45.57  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  16.17.32  by  Fons Rademakers
//*-- Author :    Rene Brun   22/09/95

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

#include "TROOT.h"
#include "THashList.h"
#include "TGeometry.h"
#include "TNode.h"
#include "TMaterial.h"
#include "TBrowser.h"

TGeometry *gGeometry = 0;


ClassImp(TGeometry)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-* T G E O M E T R Y  description *-*-*-*-*-*-*-*-*-*-*
//*-*                    ===============================
//*-*
//*-*    The Geometry class describes the geometry of a detector.
//*-*    The current implementation supports the GEANT3 style description.
//*-*    A special program provided in the ROOT utilities (toroot) can be used
//*-*    to automatically translate a GEANT detector geometry into a ROOT geometry.
//*-*
//*-*   a Geometry object is entered into the list of geometries into the
//*-*     ROOT main object (see TROOT description) when the TGeometry
//*-*     constructor is invoked.
//*-*   Several geometries may coexist in memory.
//*-*
//*-*   A Geometry object consist of the following linked lists:
//*-*        - the TMaterial list (material definition only).
//*-*        - the TRotmatrix list (Rotation matrices definition only).
//*-*        - the TShape list (volume definition only).
//*-*        - the TNode list assembling all detector elements.
//*-*
//*-*   Only the Build and Draw functions for a geometry are currently supported.
//*-*
//*-*---------------------------------------------------------------------------
//*-*- The conversion program from Geant to Root has been added in the list
//*-*  of utilities in utils directory.(see g2root)
//*-*  The executable module of g2root can be found in $ROOTSYS/bin/g2root.
//*-*
//*-*  To use this conversion program, type the shell command:
//*-*        g2root  geant_rzfile macro_name
//*-*
//*-*  for example
//*-*        g2root na49.geom na49.C
//*-*  will convert the GEANT RZ file na49.geom into a ROOT macro na49.C
//*-*
//*-*  To generate the Geometry structure within Root, do:
//*-*    Root > .x na49.C
//*-*    Root > na49.Draw()
//*-*    Root > wh.x3d()    (this invokes the 3-d Root viewver)
//*-*    Root > TFile gna49("na49.root","NEW")  //open a new root file
//*-*    Root > na49.Write()                    //Write the na49 geometry structure
//*-*    Root > gna49.Write()                   //Write all keys (in this case only one)
//*-*  Note: all keys are also written on closing of the file, gna49.Close or
//*-*  when the program exits, Root closes all open files correctly.
//*-*  Once this file has been written, in a subsequent session, simply do:
//*-*    Root > TFile gna49("na49.root")
//*-*    Root > na49.Draw()
//*-*
//*-*  The figure below shows the geometry above using the x3d viewer.
//*-*  This x3d viewver is invoked by selecting "View x3d" in the View menu
//*-*  of a canvas (See example of this tool bar in TCanvas).
//Begin_Html
/*
<img src="gif/na49.gif">
*/
//End_Html
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//______________________________________________________________________________
TGeometry::TGeometry()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Geometry default constructor*-*-*-*-*-*-*-*-*-*-*-*

   fMaterials       = new THashList(this,100,3);
   fMatrices        = new THashList(this,100,3);
   fShapes          = new THashList(this,500,3);
   fNodes           = new TList(this);
   fCurrentNode     = 0;
   fMaterialPointer = 0;
   fMatrixPointer   = 0;
   fShapePointer    = 0;
   gGeometry = this;
   fBomb            = 1;
}

//______________________________________________________________________________
TGeometry::TGeometry(const Text_t *name,const Text_t *title ) : TNamed (name, title)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Geometry normal constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===========================

   fMaterials       = new THashList(this,1000,3);
   fMatrices        = new THashList(this,1000,3);
   fShapes          = new THashList(this,5000,3);
   fNodes           = new TList(this);
   fCurrentNode     = 0;
   fMaterialPointer = 0;
   fMatrixPointer   = 0;
   fShapePointer    = 0;
   gGeometry = this;
   fBomb            = 1;
   gROOT->GetListOfGeometries()->Add(this);
}


//______________________________________________________________________________
TGeometry::~TGeometry()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Geometry default destructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ========================

   if (!fMaterials) return;
   fMaterials->Delete();
   fMatrices->Delete();
   fShapes->Delete();
   fNodes->Delete();
   delete fMaterials;
   delete fMatrices;
   delete fShapes;
   delete fNodes;
   delete [] fMaterialPointer;
   delete [] fMatrixPointer;
   delete [] fShapePointer;
   fMaterials       = 0;
   fMatrices        = 0;
   fShapes          = 0;
   fNodes           = 0;
   fMaterialPointer = 0;
   fMatrixPointer   = 0;
   fShapePointer    = 0;

   if (gGeometry == this) {
      gGeometry = (TGeometry*) gROOT->GetListOfGeometries()->First();
      if (gGeometry == this)
         gGeometry = (TGeometry*) gROOT->GetListOfGeometries()->After(gGeometry);
   }
   gROOT->GetListOfGeometries()->Remove(this);
}

//______________________________________________________________________________
void TGeometry::Browse(TBrowser *b)
{
    if( b ) {
        b->Add( fMaterials, "Materials" );
        b->Add( fMatrices, "Rotation Matrices" );
        b->Add( fShapes, "Shapes" );
        b->Add( fNodes, "Nodes" );
    }
}

//______________________________________________________________________________
void TGeometry::cd(const Text_t *)
{
//*-*-*-*-*-*Change Current Geometry to this*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ===============================

   gGeometry = this;
}

//______________________________________________________________________________
void TGeometry::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Draw this Geometry*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==================

   TNode *node1 = (TNode*)fNodes->First();
   if (node1) node1->Draw(option);

}

//______________________________________________________________________________
TMaterial *TGeometry::GetMaterial(const Text_t *name)
{
//*-*-*-*-*-*-*-*-*Return pointer to Material with name*-*-*-*-*-*-*-*-*
//*-*              ====================================

   return (TMaterial*)fMaterials->FindObject(name);
}

//______________________________________________________________________________
TMaterial *TGeometry::GetMaterialByNumber(Int_t number)
{
//*-*-*-*-*-*-*-*-*Return pointer to Material with number*-*-*-*-*-*-*-*-*
//*-*              ======================================

   TMaterial *mat;
   if (number < 0 || number >= fMaterials->GetSize()) return 0;
   if (fMaterialPointer)  return fMaterialPointer[number];
   TIter next(fMaterials);
   while ((mat = (TMaterial*) next())) {
      if (mat->GetNumber() == number) return mat;
   }
   return 0;
}

//______________________________________________________________________________
TNode *TGeometry::GetNode(const Text_t *name)
{
//*-*-*-*-*-*-*Return pointer to node with name in the geometry tree*-*-*-*-*
//*-*          =====================================================

   TNode *node= (TNode*)GetListOfNodes()->First();
   if (!node) return 0;
   if (node->TestBit(kNotDeleted))  return node->GetNode(name);
   return 0;
}

//______________________________________________________________________________
TRotMatrix *TGeometry::GetRotMatrix(const Text_t *name)
{
//*-*-*-*-*-*-*-*-*Return pointer to RotMatrix with name*-*-*-*-*-*-*-*-*-*
//*-*              =====================================

   return (TRotMatrix*)fMatrices->FindObject(name);
}

//______________________________________________________________________________
TRotMatrix *TGeometry::GetRotMatrixByNumber(Int_t number)
{
//*-*-*-*-*-*-*-*-*Return pointer to RotMatrix with number*-*-*-*-*-*-*-*-*-*
//*-*              =======================================
   TRotMatrix *matrix;
   if (number < 0 || number >= fMatrices->GetSize()) return 0;
   if (fMatrixPointer)  return fMatrixPointer[number];
   TIter next(fMatrices);
   while ((matrix = (TRotMatrix*) next())) {
      if (matrix->GetNumber() == number) return matrix;
   }
   return 0;
}

//______________________________________________________________________________
TShape *TGeometry::GetShape(const Text_t *name)
{
//*-*-*-*-*-*-*-*-*Return pointer to Shape with name*-*-*-*-*-*-*-*-*-*
//*-*              =================================

   return (TShape*)fShapes->FindObject(name);
}

//______________________________________________________________________________
TShape *TGeometry::GetShapeByNumber(Int_t number)
{
//*-*-*-*-*-*-*-*-*Return pointer to Shape with number*-*-*-*-*-*-*-*-*-*
//*-*              ===================================

   TShape *shape;
   if (number < 0 || number >= fShapes->GetSize()) return 0;
   if (fShapePointer)  return fShapePointer[number];
   TIter next(fShapes);
   while ((shape = (TShape*) next())) {
      if (shape->GetNumber() == number) return shape;
   }
   return 0;
}

//______________________________________________________________________________
void TGeometry::ls(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*List this geometry*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                   ===================

   TString opt = option;
   opt.ToLower();
   if (opt.Contains("m")) {
      Printf("=================List of Materials================");
      fMaterials->ls(option);
   }
   if (opt.Contains("r")) {
      Printf("=================List of RotationMatrices================");
      fMatrices->ls(option);
   }
   if (opt.Contains("s")) {
      Printf("=================List of Shapes==========================");
      fShapes->ls(option);
   }
   if (opt.Contains("n")) {
      Printf("=================List of Nodes===========================");
      fNodes->ls(option);
   }
}


//______________________________________________________________________________
void TGeometry::Node(const Text_t *name, const Text_t *title, const Text_t *shapename, Double_t x, Double_t y, Double_t z, const Text_t *matrixname, Option_t *option)
{
//*-*-*-*-*-*-*-*Add a node to the current node in this geometry*-*-*-*-*-*-*
//*-*            ===============================================

   new TNode(name,title,shapename,x,y,z,matrixname,option);
}

//______________________________________________________________________________
void TGeometry::RecursiveRemove(TObject *obj)
{
//*-*-*-*-*-*-*-*Recursively remove object from a Geometry list*-*-*-*-*-*-*-*
//*-*            =========================================

   if (fNodes) fNodes->RecursiveRemove(obj);
}

//_______________________________________________________________________
void TGeometry::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   Int_t i;
   TMaterial *onemat;
   TRotMatrix *onematrix;
   TShape *oneshape;

   if (b.IsReading()) {
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TNamed::Streamer(b);
      fMaterials->Streamer(b);
      fMatrices->Streamer(b);
      fShapes->Streamer(b);

//*-*- Build direct access pointers to individual materials,matrices and shapes
      Int_t nmat = fMaterials->GetSize();
      if (nmat) fMaterialPointer = new TMaterial* [nmat];
      TIter nextmat(fMaterials);
      i = 0;
      while ((onemat = (TMaterial*) nextmat())) {
         fMaterialPointer[i] = onemat;
         i++;
      }

      Int_t nrot = fMatrices->GetSize();
      if (nrot) fMatrixPointer = new TRotMatrix* [nrot];
      TIter nextmatrix(fMatrices);
      i = 0;
      while ((onematrix = (TRotMatrix*) nextmatrix())) {
         fMatrixPointer[i] = onematrix;
         i++;
      }

      Int_t nsha = fShapes->GetSize();
      if (nsha) fShapePointer = new TShape* [nsha];
      TIter nextshape(fShapes);
      i = 0;
      while ((oneshape = (TShape*) nextshape())) {
         fShapePointer[i] = oneshape;
         i++;
      }

      fNodes->Streamer(b);
      b >> fBomb;

//*-*- If geometry already exists, delete old version
      TGeometry *oldgeom = gROOT->GetGeometry(GetName());
      delete oldgeom;

      gROOT->GetListOfGeometries()->Add(this);

      fCurrentNode = (TNode*)GetListOfNodes()->First();
   } else {
      b.WriteVersion(TGeometry::IsA());
      TNamed::Streamer(b);
      fMaterials->Streamer(b);
      fMatrices->Streamer(b);
      fShapes->Streamer(b);
      fNodes->Streamer(b);
      b << fBomb;
   }
}
