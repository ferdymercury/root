//*CMZ :  2.23/09 18/11/99  12.23.11  by  Rene Brun
//*CMZ :  2.00/13 29/10/98  08.29.43  by  Fons Rademakers
//*CMZ :  2.00/10 14/07/98  20.34.56  by  Fons Rademakers
//*CMZ :  1.00/05 20/03/97  11.02.42  by  Fons Rademakers
//*-- Author :    Fons Rademakers   07/04/95

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

#ifndef ROOT_TRint
#define ROOT_TRint

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Rint                                                                 //
//                                                                      //
// Rint is the ROOT Interactive Interface. It allows interactive access //
// to the ROOT system via a C++ interpreter.                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TApplication.h"


class TRint : public TApplication {

private:
   Int_t       fNcmd;               //Command history number
   char        fPrompt[64];         //Interpreter prompt
   const char *fDefaultPrompt;      //Default prompt: "root [%d] "
   Bool_t      fInterrupt;          //If true macro execution will be stopped

public:
   TRint(const char *appClassName, int *argc, char **argv,
         void *options = NULL, int numOptions = 0);
   virtual             ~TRint();
   virtual char       *GetPrompt();
   virtual const char *SetPrompt(const char *newPrompt);
   virtual void        HandleTermInput();
   virtual void        PrintLogo();
   virtual void        Run(Bool_t retrn = kFALSE);
   virtual void        Terminate(int status);
           void        Interrupt() { fInterrupt = kTRUE; }

   ClassDef(TRint,0)  //ROOT Interactive Application Interface
};

#endif
