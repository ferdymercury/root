//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/09 21/11/99  19.57.55  by  Fons Rademakers
//*CMZ :  2.23/03 08/09/99  18.54.20  by  Fons Rademakers
//*CMZ :  2.00/11 22/08/98  11.19.11  by  Rene Brun
//*CMZ :  2.00/10 28/07/98  11.25.45  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.32.51  by  Rene Brun
//*-- Author :    Rene Brun   20/09/95

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
// TNode                                                                //
//                                                                      //
// Description of parameters to position a 3-D geometry object          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNode
#define ROOT_TNode

#ifndef ROOT_TShape
#include "TShape.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif
#ifndef ROOT_TAtt3D
#include "TAtt3D.h"
#endif

#ifndef ROOT_TRotMatrix
#include "TRotMatrix.h"
#endif

class TBrowser;

class TNode : public TNamed , public TAttLine, public TAttFill, public TAtt3D {

protected:
   enum { kSonsInvisible = BIT(17) };

   Double_t        fX;           //X offset with respect to parent object
   Double_t        fY;           //Y offset with respect to parent object
   Double_t        fZ;           //Z offset with respect to parent object
   TRotMatrix      *fMatrix;     //Pointer to rotation matrix
   TShape          *fShape;      //Pointer to shape definition
   TNode           *fParent;     //Pointer to parent positioned volume
   TList           *fNodes;      //List of son nodes (if any)
   TString         fOption;      //List of options if any
   Int_t           fVisibility;  //Visibility flag

 public:
   TNode();
   TNode(const char *name, const char *title, const char *shapename, Double_t x=0, Double_t y=0, Double_t z=0,
         const char *matrixname="", Option_t *option="");
   TNode(const char *name, const char *title, TShape *shape, Double_t x=0, Double_t y=0, Double_t z=0,
         TRotMatrix *matrix=0, Option_t *option="");
   virtual ~TNode();
   virtual void        Browse(TBrowser *b);
   virtual void        BuildListOfNodes();
   virtual void        cd(const char *path=0); // *MENU*
   virtual Int_t       DistancetoPrimitive(Int_t px, Int_t py);
   virtual void        Draw(Option_t *option=""); // *MENU*
   virtual void        DrawOnly(Option_t *option="");
   virtual void        ExecuteEvent(Int_t event, Int_t px, Int_t py);
           TList       *GetListOfNodes() {return fNodes;}
   virtual TRotMatrix  *GetMatrix() {return fMatrix;}
   virtual TNode       *GetNode(const char *name);
   virtual char        *GetObjectInfo(Int_t px, Int_t py);
   const   Option_t    *GetOption() const { return fOption.Data();}
   virtual TNode       *GetParent() {return fParent;}
           TShape      *GetShape() {return fShape;}
   Int_t               GetVisibility() {return fVisibility;}
   virtual Double_t    GetX() {return fX;}
   virtual Double_t    GetY() {return fY;}
   virtual Double_t    GetZ() {return fZ;}
   virtual void        ImportShapeAttributes();
   Bool_t              IsFolder();
   virtual void        Local2Master(Double_t *local, Double_t *master);
   virtual void        Local2Master(Float_t *local, Float_t *master);
   virtual void        ls(Option_t *option="2"); // *MENU*
   virtual void        Paint(Option_t *option="");
   virtual void        RecursiveRemove(TObject *obj);
   virtual void        SetMatrix(TRotMatrix *matrix=0) {fMatrix = matrix;}
   virtual void        SetName(const char *name);
   virtual void        SetParent(TNode *parent) {fParent=parent;}
   virtual void        SetPosition( Double_t x=0, Double_t y=0, Double_t z=0) {fX=x; fY=y; fZ=z;}
   virtual void        SetVisibility(Int_t vis=1); // *MENU*
   virtual void        Sizeof3D() const;
   virtual void        UpdateMatrix();
   virtual void        UpdateTempMatrix(Double_t *dx1,Double_t *rmat1,
                              Double_t x, Double_t y, Double_t z, Double_t *matrix,
                              Double_t *dxnew, Double_t *rmatnew);

   ClassDef(TNode,2)  //Description of parameters to position a 3-D geometry object
};

#endif
