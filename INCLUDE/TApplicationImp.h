//*CMZ :  1.03/09 04/12/97  14.36.12  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/12/95

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
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

   ClassDef(TApplicationImp,0)  //ABC describing application implementation protocol
};

inline TApplicationImp::TApplicationImp(const char *, int *, char **,
                                        void *, int) { }

#endif
