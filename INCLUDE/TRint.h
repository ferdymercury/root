//*CMZ :  2.00/13 29/10/98  08.29.43  by  Fons Rademakers
//*CMZ :  2.00/10 14/07/98  20.34.56  by  Fons Rademakers
//*CMZ :  1.00/05 20/03/97  11.02.42  by  Fons Rademakers
//*-- Author :    Fons Rademakers   07/04/95

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
   TRint(char *appClassName, int *argc, char **argv,
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
