//*CMZ :  2.00/00 08/02/99  14.42.40  by  Fons Rademakers
//*-- Author :    Fons Rademakers   04/03/98

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
