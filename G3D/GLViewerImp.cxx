//*CMZ :  2.00/00 05/03/98  20.12.17  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  16.25.35  by  Fons Rademakers
//*-- Author :    Valery Fine      23/05/97

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
// TGLViewerImp                                                         //
//                                                                      //
// TGLViewerImp is abstract OpenGL viewer. Actual implementations are   //
// TRootGLViewer and TWin32GLViewerImp. The TGLViewer is used by the    //
// TPadOpenGLView.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGLViewerImp.h"
#include "TGuiFactory.h"
#include "TROOT.h"
#include "TPadOpenGLView.h"
#include "TGLKernelABC.h"


// ClassImp(TGLViewerImp)
//______________________________________________________________________________
TGLViewerImp::TGLViewerImp()
{
    fDrawList = 0;
    fGLView   = 0;
    fPaint    = kFALSE;
}

//______________________________________________________________________________
TGLViewerImp::TGLViewerImp(TPadOpenGLView *, const char *, UInt_t, UInt_t)
{
    fDrawList = 0;
    fGLView   = 0;
    fPaint    = kFALSE;
}

//______________________________________________________________________________
TGLViewerImp::TGLViewerImp(TPadOpenGLView *, const char *, Int_t, Int_t, UInt_t, UInt_t)
{
    fDrawList = 0;
    fGLView   = 0;
    fPaint    = kFALSE;
}

//______________________________________________________________________________
TGLViewerImp::~TGLViewerImp()
{
   fPaint    = kFALSE;
   // Delete the browser.

//   gROOT->GetListOfGLViewers()->Remove(this);
}

//______________________________________________________________________________
void TGLViewerImp::DeleteView(){ if(fGLView) { delete fGLView; fGLView = 0;} }

//______________________________________________________________________________
void TGLViewerImp::HandleInput(EEventType button, Int_t x, Int_t y)
{
    if (!fGLView) return;

    switch (button) {
    case kButton1Down:
    case kButton1Up:
    case kButton1Motion:
    case kKeyPress :
        fGLView->ExecuteEvent(button,x,y);
        break;
    default:
        break;
    }
}

//______________________________________________________________________________
void TGLViewerImp::Paint(Option_t *)
{
    if (fPaint)
    {
        MakeCurrent();
        if (fGLView) fGLView->Paint();
        //*-* Run extra GL list if any
        UInt_t list = 0;
        if ((list=GetDrawList()))
            gGLKernel->RunGLList(list);
        gGLKernel->FlushGL();
        SwapBuffers();
//        SetStatusText("Done",1);
 //       fPaint = kFALSE;
    }
}
