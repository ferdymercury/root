//*CMZ :  2.22/01 10/05/99  12.20.59  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.02/00 21/07/97  08.10.38  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   05/03/97

#ifndef ROOT_TGLKernel
#define ROOT_TGLKernel

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGLKernel                                                            //
//                                                                      //
// The TGLKernel class defines the interface to OpenGL.                 //
// All interactions with OpenGL should go via this class.               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGLKernelABC
#include "TGLKernelABC.h"
#endif

#ifndef ROOT_TRootGLU
#include "TRootGLU.h"
#endif

#ifndef ROOT_TMath
#include "TMath.h"
#endif

#ifndef ROOT_TGLKernelABC
#include "TPoints3DABC.h"
#endif


class TGLKernel : public TGLKernelABC {

private:
   void SetCurrentColor(Int_t color);
   void LightIndex(Int_t i)
     { SetCurrentColor(fColorIndx + 201 + ((i == 0) ? 0 : TMath::Abs(i%7-3))); }

protected:
   enum EGLTypes { kBoolType=1, kDoubleType, kFloatType, kIntegerType };

public:
   TGLKernel();
   virtual ~TGLKernel();

   virtual void NewGLModelView(Int_t ilist);
   virtual void AddRotation(Double_t *rotmatrix,Double_t *extraangles);
   virtual void ClearColor(Int_t colors);
   virtual void ClearGLColor(Float_t red, Float_t green, Float_t blue, Float_t alpha);
   virtual void ClearGLColor(Float_t colors[4]);
   virtual void ClearGL(UInt_t bufbits );
   virtual Int_t CreateGLLists(Int_t range);
   virtual TPadView3D *CreatePadGLView(TVirtualPad *c);
   virtual void DeleteGLLists(Int_t ilist, Int_t range);
   virtual void EndGLList();
   virtual void BeginGLCmd(EG3D2GLmode mode);
   virtual void DisableGL(EG3D2GLmode mode);
   virtual void EnableGL(EG3D2GLmode mode);
   virtual void GetGL(EG3D2GLmode mode, void  *params, EGLTypes type);
   virtual void GetGL(EG3D2GLmode mode, Bool_t *params);
   virtual void GetGL(EG3D2GLmode mode, Double_t *params);
   virtual void GetGL(EG3D2GLmode mode, Float_t *params);
   virtual void GetGL(EG3D2GLmode mode, Int_t *params);
   virtual Int_t GetGLError();
   virtual void EndGLCmd();
   virtual void FlushGL();
   virtual void FrontGLFace(EG3D2GLmode faceflag);
   virtual void MultGLMatrix(Double_t *mat);
   virtual void NewGLList(UInt_t ilist,EG3D2GLmode mode);
   virtual void NewModelView(Double_t *angles,Double_t *delta );
   virtual void NewProjectionView(Double_t viewboxmin[],Double_t viewboxmax[],Bool_t perspective=kTRUE);
   virtual void PaintGLPoints(Int_t n, Float_t *p, Option_t *option);
   virtual void PaintCone(Float_t *vertex,Int_t ndiv,Int_t nstacks);
   virtual void PaintPolyLine(Int_t n, Float_t *p, Option_t *option);
   virtual void PaintGLPointsObject(const TPoints3DABC *points, Option_t *option="");
   virtual void PaintBrik(Float_t vertex[24]);
   virtual void PolygonGLMode(EG3D2GLmode face , EG3D2GLmode mode);
   virtual void PopGLMatrix();
   virtual void PushGLMatrix();
   virtual void RotateGL(Double_t *direction, Int_t mode);
   virtual void RotateGL(Double_t angle, Double_t x,Double_t y,Double_t z);
   virtual void RotateGL(Double_t Theta, Double_t Phi, Double_t Psi);
   virtual void RunGLList(Int_t list);
   virtual void TranslateGL(Double_t x,Double_t y,Double_t z);
   virtual void TranslateGL(Double_t *xyz);
   virtual void SetGLColor(Float_t *rgb);
   virtual void SetGLColorIndex(Int_t color);
   virtual void SetGLLineWidth(Float_t width);
   virtual void SetGLPointSize(Float_t size);
   virtual void SetGLVertex(Float_t *vertex);
   virtual void SetStack(Double_t *matrix=0);
   virtual void SetRootLight(Bool_t flag=kTRUE);
   virtual void ShadeGLModel(EG3D2GLmode mode);
   virtual void SetLineAttr(Color_t color, Int_t width);
   virtual void UpdateMatrix(Double_t *translate=0, Double_t *rotate=0, Bool_t isreflection=kFALSE);
};

#endif
