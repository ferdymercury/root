//*CMZ :  2.00/00 05/03/98  20.13.28  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/01/98

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

#ifndef ROOT_TRootApplication
#define ROOT_TRootApplication

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TRootApplication                                                     //
//                                                                      //
// This class create the ROOT native GUI version of the ROOT            //
// application environment. This in contrast the Win32 version.         //
// Once the native widgets work on Win32 this class can be folded into  //
// the TApplication class (since all graphic will go via TGXW).         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TApplicationImp
#include "TApplicationImp.h"
#endif


class TGClient;


class TRootApplication : public TApplicationImp {

private:
   TGClient    *fClient;        // pointer to the client environment
   char        *fAppClassName;  // application class name
   char        *fDisplay;       // display server to conntect to

   TRootApplication() { fClient = 0; fAppClassName = fDisplay = 0; }
   void GetOptions(Int_t *argc, char **argv);

public:
   TRootApplication(const char *appClassName, Int_t *argc, char **argv,
                    void *options = 0, Int_t numOptions = 0);
   virtual ~TRootApplication();

   const char   *ApplicationClassName() const { return fAppClassName; }
   TGClient     *Client() const { return fClient; }

   void    Show() { }
   void    Hide() { }
   void    Iconify() { }
   Bool_t  IsCmdThread() { return kTRUE; } // by default (for UNIX) ROOT is a single thread application
   void    Init() { }
   void    Open() { }
   void    Raise() { }
   void    Lower() { }

   ClassDef(TRootApplication,0)  // ROOT native GUI application environment
};

#endif
