//*CMZ :  2.23/04 12/10/99  12.11.47  by  Fons Rademakers
//*CMZ :  1.03/09 04/12/97  14.36.12  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/12/95

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

#ifndef ROOT_TApplicationImp
#define ROOT_TApplicationImp

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TApplicationImp                                                      //
//                                                                      //
// ABC describing GUI independent application implementation protocol.  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

class TGWin32Command;


class TApplicationImp {

public:
   TApplicationImp() { }
   TApplicationImp(const char *appClassName, int *argc, char **argv,
                   void *options, int numOptions);
   virtual ~TApplicationImp() { }

   virtual char   *ApplicationName() const { return 0; }
   virtual void    Show() { }
   virtual void    Hide() { }
   virtual void    Iconify() { }
   virtual Bool_t  IsCmdThread() { return kTRUE; } // by default (for UNIX) ROOT is a single thread application
   virtual void    Init() { }
   virtual void    Open() { }
   virtual void    Raise() { }
   virtual void    Lower() { }
   virtual Int_t   ExecCommand(TGWin32Command *code, Bool_t synch);

   ClassDef(TApplicationImp,0)  //ABC describing application implementation protocol
};

inline TApplicationImp::TApplicationImp(const char *, int *, char **,
                                        void *, int) { }
inline Int_t TApplicationImp::ExecCommand(TGWin32Command *, Bool_t) { return 0; }

#endif
