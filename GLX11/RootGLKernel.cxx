//*CMZ :  2.00/00 08/02/99  14.42.40  by  Fons Rademakers
//*-- Author :    Fons Rademakers   04/03/98

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
// TRootGLKernel                                                        //
//                                                                      //
// The TRootGLKernel class overrides the CreateGLViewerImp method to    //
// return a ROOT native GUI version of the GLViewer.                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TRootGLKernel.h"
#include "TRootGLViewer.h"


// Force creation of TRootGLKernel when shared library will be loaded.
static TRootGLKernel gGLKernelCreator;


//______________________________________________________________________________
TGLViewerImp *TRootGLKernel::CreateGLViewerImp(TPadOpenGLView *p, const char *title,
                                               UInt_t width, UInt_t height)
{
   return new TRootGLViewer(p, title, width, height);
}
