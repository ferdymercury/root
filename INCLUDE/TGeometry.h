//*CMZ :  2.23/12 31/01/2000  10.56.24  by  Rene Brun
//*CMZ :  2.23/02 06/09/99  16.52.38  by  Fons Rademakers
//*CMZ :  2.21/04 02/02/99  19.04.08  by  Fons Rademakers
//*CMZ :  2.00/11 09/08/98  10.30.13  by  Rene Brun
//*CMZ :  1.00/02 07/03/97  18.40.23  by  Rene Brun
//*-- Author :    Rene Brun   22/09/95

#ifndef ROOT_TGeometry
#define ROOT_TGeometry

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
// TGeometry                                                            //
//                                                                      //
// Structure for Matrices, Shapes and Nodes.                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_THashList
#include "THashList.h"
#endif

const Int_t kMAXLEVELS = 20;
const Int_t kVectorSize = 3;
const Int_t kMatrixSize = kVectorSize*kVectorSize;

class TNode;
class TBrowser;
class TMaterial;
class TRotMatrix;
class TShape;
class TObjArray;


class TGeometry : public TNamed {

private:
   THashList        *fMaterials;          //Collection of materials
   THashList        *fMatrices;           //Collection of rotation matrices
   THashList        *fShapes;             //Collection of shapes
   TList            *fNodes;              //Collection of nodes
   TNode            *fCurrentNode;        //Pointer to current node
   TMaterial       **fMaterialPointer;    //!Pointers to materials
   TRotMatrix      **fMatrixPointer;      //!Pointers to rotation matrices
   TShape          **fShapePointer;       //!Pointers to shapes
   Float_t           fBomb;               //Bomb factor for exploded geometry
   TRotMatrix      *fMatrix;              //! Pointers to current rotation matrices
   Double_t         fX;                   //!
   Double_t         fY;                   //! The global translation of the current node
   Double_t         fZ;                   //!
   Double_t         fTranslation[kMAXLEVELS][kVectorSize];//!
   Double_t         fRotMatrix[kMAXLEVELS][kMatrixSize];  //!
   Bool_t           fIsReflection[kMAXLEVELS];            //!
   Int_t            fGeomLevel;                           //!

public:

   TGeometry();
   TGeometry(const char *name, const char *title);
   virtual        ~TGeometry();
   virtual void   Browse(TBrowser *b);
   virtual void   cd(const char *path=0);
   virtual void   Draw(Option_t *option="");
   Float_t        GetBomb() const {return fBomb;}
   Int_t          GeomLevel() const {return fGeomLevel;}
   THashList      *GetListOfShapes() const  {return fShapes;}
   TList          *GetListOfNodes()  const   {return fNodes;}
   THashList      *GetListOfMaterials() const {return fMaterials;}
   THashList      *GetListOfMatrices() const {return fMatrices;}
   TNode          *GetCurrentNode()  const {return fCurrentNode;}
   TMaterial      *GetMaterial(const char *name);
   TMaterial      *GetMaterialByNumber(Int_t number);
   TNode          *GetNode(const char *name);
   TShape         *GetShape(const char *name);
   TShape         *GetShapeByNumber(Int_t number);
   TRotMatrix     *GetRotMatrix(const char *name);
   TRotMatrix     *GetRotMatrixByNumber(Int_t number);
   TRotMatrix     *GetCurrentMatrix() const;
   TRotMatrix     *GetCurrentPosition(Double_t *x,Double_t *y,Double_t *z) const;
   TRotMatrix     *GetCurrentPosition(Float_t *x,Float_t *y,Float_t *z) const;
   Bool_t         GetCurrentReflection() const;
   Bool_t         IsFolder() {return kTRUE;}
   virtual void   Local2Master(Double_t *local, Double_t *master);
   virtual void   Local2Master(Float_t *local, Float_t *master);
   virtual void   ls(Option_t *option="rsn2");
   virtual void   Node(const char *name, const char *title, const char *shapename, Double_t x=0, Double_t y=0, Double_t z=0
                        , const char *matrixname="", Option_t *option="");
   virtual Int_t  PushLevel(){return fGeomLevel++;}
   virtual Int_t  PopLevel(){return fGeomLevel>0?fGeomLevel--:0;}
   virtual void   RecursiveRemove(TObject *obj);
   virtual void   SetBomb(Float_t bomb=1.4) {fBomb = bomb;}
   virtual void   SetCurrentNode(TNode *node) {fCurrentNode = node;}
   virtual void   SetGeomLevel(Int_t level=0){fGeomLevel=level;}
   virtual void   SetMatrix(TRotMatrix *matrix=0){fMatrix = matrix;}
   virtual void   SetPosition(TRotMatrix *matrix, Double_t x=0,Double_t y=0,Double_t z=0);
   virtual void   SetPosition(TRotMatrix *matrix, Float_t x,Float_t y,Float_t z);
   virtual void   SetPosition(Double_t x,Double_t y,Double_t z);
   virtual void   SetPosition(Float_t x,Float_t y,Float_t z);
   virtual void   UpdateMatrix(TNode *node);
   virtual void   UpdateTempMatrix(Double_t x=0, Double_t y=0, Double_t z=0, TRotMatrix *matrix=0);
   virtual void   UpdateTempMatrix(Double_t x, Double_t y, Double_t z, Double_t *matrix,Bool_t isReflection=kFALSE);

   static TObjArray *Get(const char *name);
   static void       UpdateTempMatrix(Double_t *dx1,Double_t *rmat1,
                                      Double_t x, Double_t y, Double_t z, Double_t *matrix,
                                      Double_t *dxnew, Double_t *rmatnew);

   ClassDef(TGeometry,1)  //Structure for Matrices, Shapes and Nodes
};


inline TRotMatrix *TGeometry::GetCurrentMatrix() const
{
   return fMatrix;
}
inline TRotMatrix *TGeometry::GetCurrentPosition(Double_t *x,Double_t *y,Double_t *z) const
{
   *x = fX; *y = fY; *z = fZ; return GetCurrentMatrix();
}
inline TRotMatrix *TGeometry::GetCurrentPosition(Float_t *x,Float_t *y,Float_t *z) const
{
   *x = Float_t(fX); *y = Float_t(fY); *z = Float_t(fZ); return GetCurrentMatrix();
}
inline Bool_t TGeometry::GetCurrentReflection() const
{
   return fIsReflection[fGeomLevel];
}
inline void TGeometry::SetPosition(Double_t x,Double_t y,Double_t z)
{
   fX = x; fY = y; fZ = z;
}
inline void TGeometry::SetPosition(Float_t x,Float_t y,Float_t z)
{
   fX = x; fY = y; fZ = z;
}
inline void TGeometry::SetPosition(TRotMatrix *matrix, Double_t x,Double_t y,Double_t z)
{
   SetMatrix(matrix);
   SetPosition(x,y,z);
}
inline void TGeometry::SetPosition(TRotMatrix *matrix, Float_t x,Float_t y,Float_t z)
{
   SetMatrix(matrix);
   SetPosition(x,y,z);
}

R__EXTERN TGeometry *gGeometry;

#endif

