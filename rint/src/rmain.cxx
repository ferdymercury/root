//*CMZ :  2.23/04 02/10/99  14.52.39  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  03.53.49  by  Fons Rademakers
//*CMZ :  1.03/01 12/08/97  15.37.03  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Fons Rademakers   02/03/95

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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


TROOT root("Rint","The ROOT Interactive Interface");

//______________________________________________________________________________
int main(int argc, char **argv)
{
   TRint *theApp = new TRint("Rint", &argc, argv, 0, 0);

   // Enter the event loop...
   theApp->Run();

   delete theApp;

   return 0;
}
