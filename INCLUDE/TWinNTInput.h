//*CMZ :  2.23/04 12/10/99  10.17.48  by  Fons Rademakers
//*CMZ :  1.00/05 20/03/97  15.02.46  by  Rene Brun
//*-- Author :    Fons Rademakers   30/03/95

#ifndef CodeROOT_TWinNTInput
#define CodeROOT_TWinNTInput

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
// TWinNTInput                                                          //
//                                                                      //
// This class encapsulates input callback from file descriptors.        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#if !defined(__CINT__)
#include <windows.h>
#endif

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif


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

   ClassDef(TWinNTInput,0)  //Handle callbacks from file descriptors
};

#endif
