//*CMZ :  1.03/09 05/12/97  13.41.25  by  Fons Rademakers
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   05/03/97

#ifndef ROOT_TGLKernelABC
#define ROOT_TGLKernelABC

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
// TGLKernelABC                                                         //
//                                                                      //
// The TGLKernelABC class is an abstract base class defining the        //
// OpenGL interface protocol. All interactions with OpenGL should be    //
// done via the global pointer gGLKernel. If the OpenGL library is      //
// available this pointer is pointing to an instance of the TGLKernel   //
// class which provides the actual interface to OpenGL. Using this      //
// scheme of ABC we can use OpenGL in other parts of the framework      //
// without having to link with the OpenGL library in case we don't      //
// use the classes using OpenGL.                                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif
#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif

class TGLKernelABC;
class TGLViewerImp;
class TPadView3D;
class TPadOpenGLView;
class TVirtualPad;

R__EXTERN TGLKernelABC *gGLKernel;

#include "GLConstants.h"


class TGLKernelABC {

protected:
   UInt_t       fColorIndx;     // Current color index;
   Bool_t       fRootLight;     // Whether the "ROOT" light will be used (otherwise OpenGL)
   Bool_t       fTrueColorMode; // Defines the whether the current hardware layer supports the true colors
   EG3D2GLmode  fFaceFlag;      // The current "face" definiton - clockwise/counterclockwise

   Float_t *Invert(Float_t *vector)
      { for (int i = 0; i < 3; i++) vector[i] = -vector[i]; return vector; }

public:
   TGLKernelABC();
   virtual ~TGLKernelABC() { }

   virtual void AddRotation(Double_t *rotmatrix, Double_t *extraangles);
   virtual void BeginGLCmd(EG3D2GLmode mode);
   virtual void ClearColor(Int_t color);
   virtual void ClearGLColor(Float_t red, Float_t green, Float_t blue, Float_t alpha);
   virtual void ClearGL(UInt_t bufbits );
   virtual Int_t CreateGLLists(Int_t range);
   virtual TGLViewerImp *CreateGLViewerImp(TPadOpenGLView *c, const char *title, UInt_t width, UInt_t height);
   virtual TPadView3D *CreatePadGLView(TVirtualPad *c);
   virtual void DeleteGLLists(Int_t ilist, Int_t range);
   virtual void DisableGL(EG3D2GLmode mode);
   virtual void EnableGL(EG3D2GLmode mode);
   virtual void EndGLList() { }
   virtual void EndGLCmd() { }
   virtual void FlushGL() { }
   virtual void FrontGLFace(EG3D2GLmode faceflag);
   virtual void GetGL(EG3D2GLmode mode, Bool_t *params);
   virtual void GetGL(EG3D2GLmode mode, Double_t *params);
   virtual void GetGL(EG3D2GLmode mode, Float_t *params);
   virtual void GetGL(EG3D2GLmode mode, Int_t *params);
   virtual Int_t GetGLError() {return 0;}
           Bool_t GetRootLight() {return fRootLight;}
           Bool_t GetTrueColorMode() {return fTrueColorMode;}
   virtual void MultGLMatrix(Double_t *mat);
   virtual void NewGLList(UInt_t ilist=1, EG3D2GLmode mode=kCOMPILE);
   virtual void NewGLModelView(Int_t ilist);
   virtual void PaintGLPoints(Int_t n, Float_t *p, Option_t *option);
   virtual void PolygonGLMode(EG3D2GLmode face, EG3D2GLmode mode);
   virtual void PushGLMatrix() { }
   virtual void PopGLMatrix() { }
   virtual void RotateGL(Double_t angle, Double_t x, Double_t y, Double_t z);
   virtual void RotateGL(Double_t Theta, Double_t Phi, Double_t Psi);
   virtual void SetGLVertex(Float_t *vertex);
   virtual void SetGLColor(Float_t *rgb);
   virtual void SetGLColorIndex(Int_t color);
   virtual void SetGLLineWidth(Float_t width);
   virtual void SetGLPointSize(Float_t size);
   virtual void SetStack(Double_t *matrix=0);
   virtual void ShadeGLModel(EG3D2GLmode mode);

   virtual void TranslateGL(Double_t x, Double_t y, Double_t z);

   virtual void RunGLList(Int_t list);
   virtual void NewProjectionView(Double_t viewboxmin[], Double_t viewboxmax[], Bool_t perspective=kTRUE);
   virtual void NewModelView(Double_t *angles, Double_t *delta );
   virtual void PaintCone(Float_t *vertex, Int_t ndiv, Int_t nstacks);
   virtual void PaintPolyLine(Int_t n, Float_t *p, Option_t *option);
   virtual void PaintBrik(Float_t vertex[24]);

   virtual void SetRootLight(Bool_t flag=kTRUE) { fRootLight = flag; }
   virtual void SetLineAttr(Color_t color, Int_t width=1);
   virtual void UpdateMatrix(Double_t *translate=0, Double_t *rotate=0, Bool_t isreflection=kFALSE);

   void SetTrueColorMode(Bool_t flag=kTRUE) { fTrueColorMode = flag; }
};

//--- inlines ------------------------------------------------------------------
inline void TGLKernelABC::AddRotation(Double_t *,Double_t *) { }
inline void TGLKernelABC::BeginGLCmd(EG3D2GLmode) { }  // Begins the vertices of a primitive or a group of like primitives.
inline void TGLKernelABC::ClearColor(Int_t) { }
inline void TGLKernelABC::ClearGLColor(Float_t, Float_t, Float_t, Float_t) { }
inline void TGLKernelABC::ClearGL(UInt_t) { }
inline Int_t TGLKernelABC::CreateGLLists(Int_t) { return 0; }
inline TGLViewerImp *TGLKernelABC::CreateGLViewerImp(TPadOpenGLView *, const char *, UInt_t, UInt_t) { return 0; }
inline TPadView3D *TGLKernelABC::CreatePadGLView(TVirtualPad *) { return 0; }
inline void TGLKernelABC::DeleteGLLists(Int_t, Int_t) { }
inline void TGLKernelABC::DisableGL(EG3D2GLmode) { }
inline void TGLKernelABC::EnableGL(EG3D2GLmode) { }
inline void TGLKernelABC::FrontGLFace(EG3D2GLmode) { }
inline void TGLKernelABC::GetGL(EG3D2GLmode, Bool_t *) { }
inline void TGLKernelABC::GetGL(EG3D2GLmode, Double_t *) { }
inline void TGLKernelABC::GetGL(EG3D2GLmode, Float_t *) { }
inline void TGLKernelABC::GetGL(EG3D2GLmode, Int_t *) { }
inline void TGLKernelABC::MultGLMatrix(Double_t *) { }
inline void TGLKernelABC::NewGLList(UInt_t,EG3D2GLmode) { }
inline void TGLKernelABC::NewGLModelView(Int_t) { }
inline void TGLKernelABC::PaintGLPoints(Int_t, Float_t *, Option_t *) { }
inline void TGLKernelABC::PolygonGLMode(EG3D2GLmode , EG3D2GLmode) { }
inline void TGLKernelABC::RotateGL(Double_t, Double_t, Double_t, Double_t) { }
inline void TGLKernelABC::RotateGL(Double_t, Double_t, Double_t) { }
inline void TGLKernelABC::SetGLVertex(Float_t *) { }
inline void TGLKernelABC::SetGLColor(Float_t *) { }
inline void TGLKernelABC::SetGLColorIndex(Int_t) { }
inline void TGLKernelABC::SetGLLineWidth(Float_t) { }
inline void TGLKernelABC::SetGLPointSize(Float_t) { }
inline void TGLKernelABC::SetStack(Double_t *) { }
inline void TGLKernelABC::ShadeGLModel(EG3D2GLmode) { }
inline void TGLKernelABC::TranslateGL(Double_t, Double_t, Double_t) { }
inline void TGLKernelABC::RunGLList(Int_t) { }
inline void TGLKernelABC::NewProjectionView(Double_t [], Double_t [], Bool_t) { }
inline void TGLKernelABC::NewModelView(Double_t *, Double_t *) { }
inline void TGLKernelABC::PaintCone(Float_t *, Int_t, Int_t) { }
inline void TGLKernelABC::PaintPolyLine(Int_t, Float_t *, Option_t *) { }
inline void TGLKernelABC::PaintBrik(Float_t [24]) { }
inline void TGLKernelABC::SetLineAttr(Color_t, Int_t) { }
inline void TGLKernelABC::UpdateMatrix(Double_t *, Double_t *, Bool_t) { }

#endif
