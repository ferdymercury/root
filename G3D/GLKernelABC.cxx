//*CMZ :  1.01/05 04/06/97  11.55.03  by  Fons Rademakers
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   05/03/97

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-* T G L K e r n e l ABC class *-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                     ===========================
//*-*
//*-*   TGLKernel class defines the interface for OpenGL commands and utilities
//*-*   Those are defined with GL/gl and GL/glu include directories
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

#include "TGLKernelABC.h"

TGLKernelABC *gGLKernel=0;

//____________________________________________________________________________
TGLKernelABC::TGLKernelABC()
{
   fColorIndx     = 0;
   fRootLight     = kFALSE;
   fTrueColorMode = kFALSE;
   fFaceFlag      = kCCW;
}
