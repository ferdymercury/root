//*CMZ :  2.23/02 02/09/99  15.39.26  by  Rene Brun
//*CMZ :  2.00/00 05/03/98  20.13.07  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/01/98

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
// TRootApplication                                                     //
//                                                                      //
// This class create the ROOT native GUI version of the ROOT            //
// application environment. This in contrast the Win32 version.         //
// Once the native widgets work on Win32 this class can be folded into  //
// the TApplication class (since all graphic will go via TVirtualX).         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TRootApplication.h"
#include "TSystem.h"
#include "TString.h"
#include "TGClient.h"


ClassImp(TRootApplication)

//______________________________________________________________________________
TRootApplication::TRootApplication(const char *appClassName,
                                   Int_t *argc, char **argv, void *, Int_t)
{
   fAppClassName  = StrDup(appClassName);
   fDisplay       = 0;

   GetOptions(argc, argv);

   if (!fDisplay)
      // Set DISPLAY based on utmp (only if DISPLAY is not yet set).
      gSystem->SetDisplay();

   fClient = new TGClient(fDisplay);
}

//______________________________________________________________________________
TRootApplication::~TRootApplication()
{
   // Delete ROOT application environment.

   delete fAppClassName;
   delete fDisplay;
   delete fClient;
}

//______________________________________________________________________________
void TRootApplication::GetOptions(Int_t *argc, char **argv)
{
   // Handle command line arguments. Arguments handled are removed from the
   // argument array. Currently only option "-display xserver" is considered.

   if (!argc) return;

   int i, j;
   for (i = 0; i < *argc; i++) {
      if (!strcmp(argv[i], "-display")) {
         if (argv[i+1] && strlen(argv[i+1]) && argv[i+1][0] != '-') {
            fDisplay = StrDup(argv[i+1]);
            argv[i]   = 0;
            argv[i+1] = 0;
            i++;
         }
      }
   }

   j = 0;
   for (i = 0; i < *argc; i++) {
      if (argv[i]) {
         argv[j] = argv[i];
         j++;
      }
   }

   *argc = j;
}

