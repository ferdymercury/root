//*CMZ :  1.00/05 20/03/97  15.02.46  by  Rene Brun
//*-- Author :    Fons Rademakers   30/03/95

#ifndef CodeROOT_TWinNTInput
#define CodeROOT_TWinNTInput

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TWinNTInput                                                          //
//                                                                      //
// This class encapsulates input callback from file descriptors.        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include "Rtypes.h"


class TWinNTInput {

private:

  static void InputHandler(void *clientData, int *source, void *id);

protected:

   int       fFd;

 public:

   TWinNTInput();
  ~TWinNTInput();
   void Attach(int fd, int mask);
   void Remove();
   int Fd();
   int Id();


   ClassDef(TWinNTInput,0)

};

#endif
