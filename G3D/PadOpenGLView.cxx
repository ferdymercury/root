//*CMZ :  1.03/09 10/12/97  09.38.29  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   08/05/97

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
// TPadOpenGLView                                                       //
//                                                                      //
// TPadOpenGLView is a window in which an OpenGL representation of a    //
// pad is viewed.                                                       //
//                                                                      //
// Seven different OpenGL lists are used to draw a 3D object:           //
//                                                                      //
// fGLList + kLightOpt   - defines the "light" options to build thr GL  //
//                         light model                                  //
// fGLList + kColorOpt   - defines the "color" options                  //
// fGLList + kScene      - defines the common object for the resize and //
//                         re-paint operations                          //
// fGLList + kProject    - defines the "Projection" transformation.     //
//                         It is affected by the rotate operations.     //
// fGLList + kView       - defines the "Viewing" transformation         //
// fGLList + kUpdateView - defines the corrections for the "Viewing"    //
//                         transformation                               //
// fGLList + kModel      - defines the "Modeling" transformations       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGLKernelABC.h"
#include "TPadOpenGLView.h"
#include "TView.h"
#include "TPad.h"
#include "TGLViewerImp.h"
#include "TGeometry.h"
#include "TPolyMarker3D.h"
#include "TPolyLine3D.h"
#include "TNode.h"
#include "TStopwatch.h"
#include "TSystem.h"


// ClassImp(TPadOpenGLView)

//____________________________________________________________________________
TPadOpenGLView::TPadOpenGLView(TVirtualPad *pad) : TPadView3D((TPad*)pad)
{
   fGLViewerImp = gGLKernel->CreateGLViewerImp(this,pad->GetTitle(), pad->GetWw(), pad->GetWh());
   fGLViewerImp->CreateContext();
   fGLViewerImp->MakeCurrent();

   Int_t i;
   for (i=0;i<3;i++) {
      fExtraAngles[i] = 0;
      fExtraTranslate[i] = 0;
      fAnglFactor[i] = 1;
   }

//    fExtraAngles[1] = -90;
    fScale = 1.0;

    fSpeedMove = 0.02;
    fResetView = kTRUE;
    fPerspective = kFALSE;

    SetPad(pad);

    MapOpenGL();
//*-* Set the indentity matrix as a extra rotations
    for (i=1;i<15;i++)  fExtraRotMatrix[i] = 0;
    for (i=0;i<16;i+=5) fExtraRotMatrix[i] = 1.0;
#if 0
//*-*  Date protection
    TDatime lock;
    if (lock.GetDate() > 970530) ::exit(-1);
#endif
}

//____________________________________________________________________________
TPadOpenGLView::~TPadOpenGLView()
{
    if (!fParent) return;
//*-*  Delete OpenGL lists;
   if (fGLViewerImp)
   {
       if (fGLList) { gGLKernel->DeleteGLLists(fGLList,kGLListSize);fGLList =0; }
       delete fGLViewerImp;
       fGLViewerImp = 0;
   }
}

//____________________________________________________________________________
void TPadOpenGLView::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
    switch ((EEventType)event)
    {
    case kButton1Down:
//*-* Save the start coordinates
        fMouseInit=kTRUE;
        fMouseX = px;
        fMouseY = py;
        break;
    case kKeyPress :
        {
            Char_t chCharCode = (Char_t) px;
//            if (chCharCode != '+' || chCharCode != '-') chCharCode |= 0x20;
            MoveModelView(chCharCode, py);
            break;
        }
    case kButton1Up:
        if (!fMouseInit) break;
        fMouseInit=kFALSE;
        RotateView(px,py);
        fMouseX = px;
        fMouseY = py;
        PaintScene();
        break;
    case kButton1Motion:
        if (!fMouseInit) break;
        RotateView(px,py);
        fMouseX = px;
        fMouseY = py;
        PaintScene();
        break;
    default:
        break;
    };
}

//____________________________________________________________________________
void TPadOpenGLView::MapOpenGL()
{
//*-* Set the default attributes
   gGLKernel->EnableGL(kDEPTH_TEST);
   gGLKernel->EnableGL(kCULL_FACE);

   gGLKernel->PolygonGLMode(kFRONT,kFILL);
   gGLKernel->SetRootLight(kTRUE);
   gGLKernel->FrontGLFace(kCCW);

//*-* Create a main GL list to draw the scene

   fGLList = gGLKernel->CreateGLLists(kGLListSize);
   fGLLastList = fGLList+kGLListSize-1;


   gGLKernel->NewGLList(fGLList+kScene,kCOMPILE);
   {
       for (UInt_t i=fGLList+kProject; i<=fGLLastList;i++) gGLKernel->RunGLList(i);
   }
   gGLKernel->EndGLList();
   fGLViewerImp->SetStatusText("working...",4,TGLViewerImp::kStatusPopOut);
}
//______________________________________________________________________________
void TPadOpenGLView::PushMatrix()
{
    gGLKernel->PushGLMatrix();
}
//______________________________________________________________________________
void TPadOpenGLView::PopMatrix()
{
    gGLKernel->PopGLMatrix();
}

//______________________________________________________________________________
void TPadOpenGLView::SetAttNode(TNode *node, Option_t *)
{
    gGLKernel->SetLineAttr(node->GetLineColor(),node->GetLineWidth());
}
//______________________________________________________________________________
void TPadOpenGLView::UpdateNodeMatrix(TNode *node,Option_t *)
{
    Float_t bomb = gGeometry->GetBomb();

//*-*  Create a translation matrix

    Double_t translate[3];
    translate[0] = bomb*node->GetX();
    translate[1] = bomb*node->GetY();
    translate[2] = bomb*node->GetZ();

//*-*  Create a rotation/reflection matrix

    TRotMatrix *matrix = node->GetMatrix();
    Bool_t isreflection = matrix->IsReflection();

    Double_t rotate[16];
    matrix->GetGLMatrix(rotate);

//*-* Update the OpenGL matrix

    gGLKernel->UpdateMatrix(translate,rotate,isreflection);

}
#if 0
//______________________________________________________________________________
void TPadOpenGLView::PaintBrik(TShape *shape,Option_t *opt)
{
    gGLKernel->PaintBrik(vertex);
}
//______________________________________________________________________________
void TPadOpenGLView::PaintCone(TShape *shape,Option_t *opt)
{
    gGLKernel->PaintCone(vertex,-(GetNumberOfDivisions()+1),fNz);
}
#endif
//______________________________________________________________________________
void TPadOpenGLView::PaintPolyLine(TPolyLine3D *line,Option_t *opt)
{
    gGLKernel->SetGLColorIndex(line->GetLineColor());
    gGLKernel->SetGLLineWidth((Float_t)(line->GetLineWidth()));
    gGLKernel->PaintPolyLine(line->GetN(), line->GetP(), opt);
}

//______________________________________________________________________________
void TPadOpenGLView::PaintPolyMarker(TPolyMarker3D *marker,Option_t *opt)
{
    gGLKernel->SetGLColorIndex(marker->GetMarkerColor());
    gGLKernel->SetGLPointSize((Float_t)(marker->GetMarkerSize()));
    gGLKernel->PaintGLPoints(marker->GetN(), marker->GetP(), opt);
}
//______________________________________________________________________________
void TPadOpenGLView::PaintBeginModel(Option_t *)
{
//*-*   Apply OpenGL lists
    if (!fGLList) return;  // There is nothing to render

   fGLViewerImp->SetStatusText("working...",4,TGLViewerImp::kStatusPopOut);
   fGLViewerImp->MakeCurrent();

//    MakeCurrent();
   if (fResetView)
   {
       TView *view = ((TPad *)fParent)->GetView();
       if (view) {
           Float_t min[3],max[3];
           view->GetRange(min,max);

//*-*  sqrt(3) = 1.73 factor to fit all possible position of the rotated shapes

           Float_t bomb = 1.73*gGeometry->GetBomb();
//           Float_t bomb = gGeometry->GetBomb();
// sqrt((max[i]-min[i])**2)/(max[i]-min[i])**2
           int i;
//*-* Set the indentity matrix as a extra rotations
           for (i=1;i<15;i++)  fExtraRotMatrix[i] = 0;
           for (i=0;i<16;i+=5) fExtraRotMatrix[i] = 1.0;
           for (i=0;i<3;i++) {
               fStep[i] = fSpeedMove*(max[0] - min[0]);
               fTranslate[i] =-(max[i]+min[i])/2;
               fExtraTranslate[i] = 0;
               fExtraAngles[i] =   0;
               fViewBoxMin[i] = (Double_t)bomb*(min[i]+fTranslate[i]);
               fViewBoxMax[i] = (Double_t)bomb*(max[i]+fTranslate[i]);
           }
// Move object backwards to allow the OpenGL perspective view
                   if (max[2] > 0) {
                           fExtraTranslate[2] = -fViewBoxMax[2] - (Double_t)bomb*TMath::Abs(max[0]-min[0]);
               fViewBoxMin[2] += fExtraTranslate[2];
               fViewBoxMax[2] += fExtraTranslate[2];
                   }
           fAngles[0] = view->GetLatitude();
           fAngles[1] = view->GetLongitude();
           fAngles[2] = view->GetPsi();
           // Create Object view
           UpdateObjectView();
       }
   }
   else
       fResetView = kTRUE;  // We can lock ResetView only at once

   UpdateProjectView();  //*-* Update/Create  kProject GL list.
   UpdateModelView();
   gGLKernel->NewGLList(fGLList+kModel,kCOMPILE);  // Create "Model View" list
}
//______________________________________________________________________________
void TPadOpenGLView::PaintEnd(Option_t *)
{
   if (!fGLList) return;  // There is nothing to render
//*-*  Close the "model" view and start the projection one
    gGLKernel->EndGLList();
}

//______________________________________________________________________________
void TPadOpenGLView::PaintScene(Option_t *)
{
    if (!(fGLList && fGLViewerImp) ) return;  // There is nothing to render
    fGLViewerImp->SetStatusText("working...",4,TGLViewerImp::kStatusPopOut);
    fGLViewerImp->Update();
}


#if 0
//______________________________________________________________________________
void TPadOpenGLView::HandleInput(Int_t button, Int_t x, Int_t y)
{
    switch ((EEventType)button)
    {
    case kButton1Down:
//*-* Save the start coordinates
        fMouseInit=kTRUE;
        fMouseX = x;
        fMouseY = y;
        break;
    case kButton1Up:
        if (!fMouseInit) break;
        fMouseInit=kFALSE;
        ExecuteEvent(button,x,y);
        break;
    case kButton1Motion:
        if (!fMouseInit) break;
        ExecuteEvent(button,x,y);
        break;
    case kKeyPress :
        ExecuteEvent(button,x,y);
        break;
    default:
        return;
    }
}
#endif

//______________________________________________________________________________
void TPadOpenGLView::MoveModelView(Char_t option, Int_t count)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-* option = 'u' //*-*  Move down
//*-*          'i' //*-*  Move up
//*-*          'h' //*-*  Move right
//*-*          'l' //*-*  Move left
//*-*          'j' //*-*  Move backward
//*-*          'k' //*-*  Move foreward
//*-*
//*-*          '+' //*-*  Increase speed to move
//*-*          '-' //*-*  Decrease speed to move
//*-*
//*-*          'n' //*-*  turn "SMOOTH" color mode on
//*-*          'm' //*-*  turn "SMOOTH" color mode off
//*-*
//*-*          't' //*-*  toggle Light model
//*-*
//*-*          'p' //*-*  Perspective/Orthographic projection
//*-*          'r' //*-*  Hidden surface mode
//*-*          'w' //*-*  wireframe mode
//*-*          'c' //*-*  cull-face mode
//*-*
//*-*          's' //*-*  increase  scale factor (clip cube borders)
//*-*          'a' //*-*  decrease  scale factor (clip cube borders)
//*-*
//*-*          'x' //*-*
//*-*          'y' //*-*  rotate object along x,y,z axis
//*-*          'z' //*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
    if (count <= 0) count = 1;

    Int_t done = 0;

    Int_t direction = 1;       //*-* = 1 means the Positive direction has been entered
    const Char_t *fwd = "hij";  //*-* "keys" for the "positive" directions
    const Char_t *bck = "luk";  //*-* "keys" for the "negative" directions

    const Char_t *sch = fwd;
    Char_t *c = strchr(sch,option|0x20);  //*-* Check the "positive" direction"
    if (!c)
    {
        direction = -direction;
        sch = bck;
        c = strchr(sch,option|0x20);     //*-* Check the "negative" direction"
    }
    if (c)
    {
        Int_t indx = c - sch;
        fExtraTranslate[indx] += direction*count*fStep[indx];
        done = 2;
    }
    else
    {
        direction = -1;

        switch (option) {
        case 'x':
            direction = -direction;
        case 'X':
//        fExtraAngles[0] += fAxStep/rect.bottom; += count*fZStep;
          fExtraAngles[0] += direction*fAnglFactor[0];
            done = 4;
            break;
        case 'z':
            direction = -direction;
        case 'Z':
       //        fExtraAngles[1] += fAyStep/rect.bottom; += count*fZStep;
            fExtraAngles[1] += direction*fAnglFactor[1];
            done = 4;
            break;
        case 'y':
            direction = -direction;
        case 'Y':
//       fExtraAngles[3] += fAzStep/rect.bottom; += count*fZStep;
            fExtraAngles[2] += direction*fAnglFactor[2];
            done = 4;
            break;
        case '+':
            {
                fSpeedMove *= 2;
                for (Int_t i=0;i<3;i++) fStep[i] *= 2;
                break;
            }
        case '-':
            {
                fSpeedMove /= 2;
                for (Int_t i=0;i<3;i++) fStep[i] /= 2;
                break;
            }
        case 's':
        case 'S':
            if (fScale < 1.0) fScale = 1.0;
            fScale *= 1.1;
            done = 3;
            break;
        case 'a':
        case 'A':
            if (fScale > 1.0) fScale = 1.0;
            fScale *= 0.9;
            done = 3;
            break;
        case 'c':
        case 'C':
            gGLKernel->EnableGL(kCULL_FACE);
            done = 1;
            break;
        case 'r':
        case 'R':
            gGLKernel->PolygonGLMode(kFRONT,kFILL);
  //          gGLKernel->PolygonGLMode(kFRONT_AND_BACK,kFILL);
            done = 1;
            break;
        case 'w':
        case 'W':
            gGLKernel->DisableGL(kCULL_FACE);
            gGLKernel->PolygonGLMode(kFRONT_AND_BACK,kLINE);
            done = 1;
            break;
        case 'n':    //*-*      turn "SMOOTH" shade model on
        case 'N':    //*-*      turn "SMOOTH" shade model on
            gGLKernel->ShadeGLModel(kSMOOTH);
            done = 1;
            break;
        case 'm':    //*-*      turn "FLAT" color shade off
        case 'M':    //*-*      turn "FLAT" color shade off
            gGLKernel->ShadeGLModel(kFLAT);
            done = 1;
            break;
        case 't':    //*-*      toggle the light model
        case 'T':    //*-*      toggle the light model
            {
                Bool_t light = gGLKernel->GetRootLight();
                gGLKernel->SetRootLight(!light);
                if (light)
                    fGLViewerImp->SetStatusText("Real (\" T \")",3);
                else
                    fGLViewerImp->SetStatusText("Pseudo (\" T \")",3);
            }

            if (fParent)
            {
                fResetView = kFALSE;  // To keep the current orientations
                fScale = 1;
                ((TPad *)fParent)->Modified();
                ((TPad *)fParent)->Update();
            }
            done = 0;
            break;
        case 'p':  //*-* toggle between perspecitve and  and orthographics projections
        case 'P':  //*-* toggle between perspecitve and  and orthographics projections
            fPerspective = !fPerspective;
            done = 3;
            break;
        default:
            break;
        }
    }

    if (done)
        fGLViewerImp->SetStatusText("working...",4,TGLViewerImp::kStatusPopOut);

    switch (done) {
    case 4:
        UpdateObjectView();
        break;
    case 3:
        UpdateProjectView();
        break;
    case 2:
        UpdateModelView();
        break;
//    case 1:
//        PaintScene();
    default:
        break;
    };
    if (done)
        PaintScene();
}

//______________________________________________________________________________
void TPadOpenGLView::MoveModelView(char *cmd, int mlsecc)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*  Emulate the "chain" of the "KeyPress" events
//*-*     Input:
//*-*     char *cmd  - any "ASCII" character defined in
//*-*                  TPadOpenGLView::MoveModelView(Char_t option, Int_t count)
//*0*
//*-*     int mlsecc - The total time desired to perform full "chain".
//*-*                  It is assume thata single step is perform quite fast
//*-*                  and mast be slow done
//*-*              = 0;  No slowdown. It is painting as fast as the
//*-*                    present CPU allows
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
  Int_t lcmd = strlen(cmd);
  if (lcmd)  {
    Int_t i = 0;
            // Estimate the time for a single step
    Int_t quant = 0;
    TStopwatch *stopwatch=0;
    if (mlsecc > 0) {
      quant = Int_t(Double_t(mlsecc)/lcmd);
      if (quant > 0) stopwatch = new TStopwatch;
      else printf(" Display time too small !\n");
    }
           // Start stopwatch
    if (stopwatch)  stopwatch->Start();
    for (i=0;i<lcmd;i++) {
       MoveModelView(cmd[i]);
       // Estimate sleep time
      if (stopwatch) {
        Int_t sleeptime = Int_t(i*quant-stopwatch->GetRealTime()*1000);
        if (sleeptime > 0) gSystem->Sleep(sleeptime);
      }
    }
  }
}
//______________________________________________________________________________
void TPadOpenGLView::Paint(Option_t *)
{
//*-*
//*-*  This method is designed to be called from the TGLViewerImp object to paint
//*-*  the 3D scene  onto the "GL" screen
//*-*
    Int_t color;
    if (fParent)
    {
        color = ((TPad *)fParent)->GetFillColor();
        gGLKernel->ClearColor(color);
    }
//          gGLKernel->ClearGL(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    gGLKernel->ClearGL(0);

    if (fGLList) gGLKernel->RunGLList(fGLList+kScene);
}

//______________________________________________________________________________
void TPadOpenGLView::RotateView(Int_t x, Int_t y)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

    Int_t fx = fMouseX-x;
    Int_t fy = fMouseY-y;
    Double_t angles[3];

    angles[0] = -fy*fAnglFactor[0];
    angles[1] = -fx*fAnglFactor[1];
    angles[2] =  0;

    for (Int_t i=0;i<3;i++) {
                fScale = 1.0;
        if (TMath::Abs(angles[i]) >= 360.0) {
            if (angles[i] > 0)
                angles[i] -= 360.0;
            else
                angles[i] += 360.0;
        }
    }

    gGLKernel->AddRotation(fExtraRotMatrix,angles);

    UpdateModelView();
    PaintScene();
}

//______________________________________________________________________________
void TPadOpenGLView::Size(Int_t width, Int_t height)
{
   if (height) fAnglFactor[0] = 360./height;
   if (width)  fAnglFactor[1] = 360./width;
   fAnglFactor[2] = fAnglFactor[1];
//   glViewport( 0, 0, (GLint) width, (GLint)  height );
}

//______________________________________________________________________________
void TPadOpenGLView::UpdateObjectView()
{
    Double_t angles[3];
    for (Int_t i=0;i<3;i++) angles[i] = fAngles[i] + fExtraAngles[i];
    gGLKernel->NewGLList(fGLList+kView,kCOMPILE);
       gGLKernel->NewModelView(angles,fTranslate);
    gGLKernel->EndGLList();
}
//______________________________________________________________________________
void TPadOpenGLView::UpdateModelView()
{
    gGLKernel->NewGLList(fGLList+kUpdateView,kCOMPILE);
    {
      Float_t s = 0;
      for (Int_t i=0;i<3;i++) s += TMath::Abs(fExtraTranslate[i]);


      if (s != 0.0) gGLKernel->TranslateGL(fExtraTranslate[0],
                                           fExtraTranslate[1],
                                           fExtraTranslate[2]);
      gGLKernel->MultGLMatrix(fExtraRotMatrix);
    }
    gGLKernel->EndGLList();

}

//______________________________________________________________________________
void TPadOpenGLView::UpdateProjectView()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-UpdateProjectView()*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*    UpdateProjectView() - defines the "Projection" transformation. It is
//*-*                   affected with the rotate operations
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

    if (TMath::Abs(fScale-1.0) > 0.1)
    {
        for (Int_t i=0;i<2;i++)
        {
            Double_t shift = (fScale-1)*TMath::Abs(fViewBoxMax[i]-fViewBoxMin[i]);
            fViewBoxMin[i] -= shift;
            fViewBoxMax[i] += shift;
        }
    }
    gGLKernel->NewGLList(fGLList+kProject,kCOMPILE);
       gGLKernel->NewProjectionView(fViewBoxMin,fViewBoxMax,fPerspective);
    gGLKernel->EndGLList();

    if (fGLViewerImp)
    {
        if (fPerspective)
            fGLViewerImp->SetStatusText("Perspective (\" P \")",1);
        else
            fGLViewerImp->SetStatusText("Orthographic (\" P \")",1);
#if 0
        char boxview[128];
        Double_t dnear = TMath::Abs(fViewBoxMax[0]-fViewBoxMin[0]);
        Double_t dfar = 3*(dnear + TMath::Abs(fViewBoxMax[2]-fViewBoxMin[2]));

        sprintf(boxview,"Clip: Z:%.2fx%.2f; X:%.2fx%.2f; Y:%.2fx%.2f",
            dnear,dfar,
            fViewBoxMin[0],fViewBoxMax[0],
            fViewBoxMin[1],fViewBoxMax[1]
            );
        fGLViewerImp->SetStatusText(boxview,3);
#endif
    }
}
