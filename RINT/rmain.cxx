//*CMZ :  2.00/00 05/03/98  03.53.49  by  Fons Rademakers
//*CMZ :  1.03/01 12/08/97  15.37.03  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Fons Rademakers   02/03/95

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
// RMain                                                                //
//                                                                      //
// Main program used to create RINT application.                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TRint.h"

extern void InitGui();
VoidFuncPtr_t initfuncs[] = { InitGui, 0 };


TROOT root("Rint","The ROOT Interactive Interface", initfuncs);

//______________________________________________________________________________
int main(int argc, char **argv)
{
#ifndef WIN32
   char appname[] = "Rint";
#else
   char appname[] = "Root_Rint";
#endif
   TRint *theApp = new TRint(appname, &argc, argv, 0, 0);

   // Init Intrinsics, build all windows, and enter event loop
   theApp->Run();

   delete theApp;

   return(0);
