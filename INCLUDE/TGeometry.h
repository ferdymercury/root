//*CMZ :  2.00/11 09/08/98  10.30.13  by  Rene Brun
//*CMZ :  1.00/02 07/03/97  18.40.23  by  Rene Brun
//*-- Author :    Rene Brun   22/09/95

#ifndef ROOT_TGeometry
#define ROOT_TGeometry

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


class TNode;
class TBrowser;
class TMaterial;
class TRotMatrix;
class TShape;

class TGeometry : public TNamed {

private:
   THashList        *fMaterials;          //Collection of materials
   THashList        *fMatrices;           //Collection of rotation matrices
   THashList        *fShapes;             //Collection of shapes
   TList            *fNodes;              //Collection of nodes
   TNode            *fCurrentNode;        //Pointer to current node
   TMaterial       **fMaterialPointer;    //Pointers to materials
   TRotMatrix      **fMatrixPointer;      //Pointers to rotation matrices
   TShape          **fShapePointer;       //Pointers to shapes
   Float_t           fBomb;               //Bomb factor for exploded geometry

public:

   TGeometry();
   TGeometry(const Text_t *name, const Text_t *title);
   virtual        ~TGeometry();
   virtual void   Browse(TBrowser *b);
   virtual void   cd(const Text_t *path=0);
   virtual void   Draw(Option_t *option="");
   Float_t        GetBomb() {return fBomb;}
   THashList      *GetListOfShapes()   {return fShapes;}
   TList          *GetListOfNodes()    {return fNodes;}
   THashList      *GetListOfMaterials(){return fMaterials;}
   THashList      *GetListOfMatrices() {return fMatrices;}
   TNode          *GetCurrentNode()    {return fCurrentNode;}
   TMaterial      *GetMaterial(const Text_t *name);
   TMaterial      *GetMaterialByNumber(Int_t number);
   TNode          *GetNode(const Text_t *name);
   TShape         *GetShape(const Text_t *name);
   TShape         *GetShapeByNumber(Int_t number);
   TRotMatrix     *GetRotMatrix(const Text_t *name);
   TRotMatrix     *GetRotMatrixByNumber(Int_t number);
   Bool_t         IsFolder() {return kTRUE;}
   virtual void   ls(Option_t *option="rsn2");
   virtual void   Node(const Text_t *name, const Text_t *title, const Text_t *shapename, Double_t x=0, Double_t y=0, Double_t z=0
                        , const Text_t *matrixname="", Option_t *option="");
   virtual void   RecursiveRemove(TObject *obj);
   virtual void   SetBomb(Float_t bomb=1.4) {fBomb = bomb;}
   virtual void   SetCurrentNode(TNode *node) {fCurrentNode = node;}

   ClassDef(TGeometry,1)  //Structure for Matrices, Shapes and Nodes
};

R__EXTERN TGeometry *gGeometry;

#endif

