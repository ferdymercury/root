//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/04 10/10/99  16.47.38  by  Fons Rademakers
//*CMZ :  2.23/03 09/09/99  22.04.41  by  Fons Rademakers
//*CMZ :  2.21/07 21/02/99  19.03.15  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.21/00 03/01/99  23.00.14  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/05 15/04/98  09.27.11  by  Rene Brun
//*-- Author :    Nenad Buncic   17/09/95

#ifndef ROOT_TShape
#define ROOT_TShape

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
// TShape                                                               //
//                                                                      //
// Basic shape class                                                    //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

#ifndef ROOT_TMaterial
#include "TMaterial.h"
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

#ifndef ROOT_X3DBuffer
#include "X3DBuffer.h"
#endif

#ifndef ROOT_TPolyLine3D
#include "TPolyLine3D.h"
#endif

class TNode;

class TShape : public TNamed, public TAttLine, public TAttFill, public TAtt3D {

protected:
   Int_t           fNumber;      //Shape number
   Int_t           fVisibility;  //Visibility flag
   TMaterial       *fMaterial;   //Pointer to material
   Int_t           ShapeDistancetoPrimitive(Int_t numPoints, Int_t px, Int_t py);

public:
                   TShape();
                   TShape(const char *name, const char *title, const char *material);
   virtual         ~TShape();
   TMaterial       *GetMaterial() {return fMaterial;}
   virtual Int_t   GetNumber() {return fNumber;}
           Int_t   GetVisibility() {return fVisibility;}
   virtual void    Paint(Option_t *option="");
   virtual void    PaintGLPoints(Float_t *vertex);
   virtual void    PaintShape(X3DBuffer *buff, Bool_t rangeView=kFALSE);
   virtual void    SetName(const char *name);
   virtual void    SetPoints(Float_t *buffer);
   virtual void    SetVisibility(Int_t vis) {fVisibility = vis;} // *MENU*

   ClassDef(TShape,1)  //Basic shape
};

R__EXTERN TNode *gNode;

inline void TShape::PaintGLPoints(Float_t *) { }
inline void TShape::SetName(const char *) { }

#endif

