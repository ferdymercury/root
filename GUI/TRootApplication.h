//*CMZ :  2.23/02 02/09/99  15.39.25  by  Rene Brun
//*CMZ :  2.00/00 05/03/98  20.13.28  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/01/98

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

#ifndef ROOT_TRootApplication
#define ROOT_TRootApplication

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
