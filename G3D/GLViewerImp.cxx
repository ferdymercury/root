//*CMZ :  2.23/02 03/09/99  11.39.44  by  Rene Brun
//*CMZ :  2.21/07 17/04/99  07.50.09  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/00 05/03/98  20.12.17  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  16.25.35  by  Fons Rademakers
//*-- Author :    Valery Fine      23/05/97

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
#include "TVirtualGL.h"


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
 //   if (fPaint)
    {
        MakeCurrent();
        if (fGLView) fGLView->Paint();
        //*-* Run extra GL list if any
        UInt_t list = 0;
        if ((list=GetDrawList()))
            gVirtualGL->RunGLList(list);
        gVirtualGL->FlushGL();
        SwapBuffers();
//        SetStatusText("Done",1);
 //       fPaint = kFALSE;
    }
}
