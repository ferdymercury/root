//*CMZ :  2.23/02 03/09/99  11.42.29  by  Rene Brun
//*CMZ :  1.01/05 17/04/99  07.50.09  by  Fons Rademakers
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   05/03/97

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-* TVirtualGL class *-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                     ================
//*-*
//*-*   TGLKernel class defines the interface for OpenGL commands and utilities
//*-*   Those are defined with GL/gl and GL/glu include directories
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

#include "TVirtualGL.h"

TVirtualGL *gVirtualGL=0;

//____________________________________________________________________________
TVirtualGL::TVirtualGL()
{
   fColorIndx     = 0;
   fRootLight     = kFALSE;
   fTrueColorMode = kFALSE;
   fFaceFlag      = kCCW;
}
