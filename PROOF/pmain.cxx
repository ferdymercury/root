//*CMZ :  2.23/04 02/10/99  14.41.51  by  Fons Rademakers
//*CMZ :  1.00/06 23/03/97  11.41.18  by  Rene Brun
//*-- Author :    Fons Rademakers   15/02/97

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
// PMain                                                                //
//                                                                      //
// Main program used to create PROOF server application.                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TProofServ.h"

TROOT root("Proofserv","The PROOF Server");

//______________________________________________________________________________
int main(int argc, char **argv)
{
   gROOT->SetBatch();
   TProofServ *theApp = new TProofServ(&argc, argv);

   theApp->Run();

   delete theApp;

   return(0);
}
