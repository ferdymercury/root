//*CMZ :  2.00/05 15/04/98  09.27.11  by  Rene Brun
//*CMZ :  1.03/09 05/12/97  13.23.55  by  Fons Rademakers
//*-- Author :    Nenad Buncic   17/09/95

#ifndef ROOT_TShape
#define ROOT_TShape

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

#ifndef ROOT_X3DBuffer
#include "X3DBuffer.h"
#endif

#ifndef ROOT_TPolyLine3D
#include "TPolyLine3D.h"
#endif

class TNode;


extern "C" { void FillX3DBuffer (X3DBuffer *buff); }

class TShape  : public TNamed, public TAttLine, public TAttFill {

protected:
   Int_t           fNumber;      //Shape number
   Int_t           fVisibility;  //Visibility flag
   TMaterial       *fMaterial;   //Pointer to material

public:
                   TShape();
                   TShape(Text_t *name, Text_t *title, Text_t *material);
   virtual         ~TShape();
   virtual Bool_t  Is3D () {return kTRUE;}
   TMaterial       *GetMaterial() {return fMaterial;}
   virtual Int_t   GetNumber() {return fNumber;}
           Int_t   GetVisibility() {return fVisibility;}
   virtual void    Paint(Option_t *option="");
   virtual void    PaintGLPoints(Float_t *vertex);
   virtual void    PaintShape(X3DBuffer *buff);
   virtual void    SetName(const Text_t *name);
   virtual void    SetVisibility(Int_t vis) {fVisibility = vis;} // *MENU*

   ClassDef(TShape,1)  //Basic shape
};

R__EXTERN TNode *gNode;
R__EXTERN Size3D gSize3D;

inline void TShape::PaintGLPoints(Float_t *) { }
inline void TShape::SetName(const Text_t *) { }

#endif

