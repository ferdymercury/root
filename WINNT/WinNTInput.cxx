//*CMZ :  1.00/06 23/03/97  11.46.46  by  Rene Brun
//*-- Author :    Fons Rademakers   02/04/95

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TWinNTInput                                                          //
//                                                                      //
// This class encapsulates input callback from file descriptors.        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TWinNTInput.h"
#include "TApplication.h"


ClassImp(TWinNTInput)

TWinNTInput::TWinNTInput()
{
   fFd = -1;
}

TWinNTInput::~TWinNTInput()
{
}

 void TWinNTInput::Attach(int fd, int mask)
 {
   if (fFd != -1)
      Remove();

   fFd = fd;

   AllocConsole();
}

void TWinNTInput::Remove()
{
   if (fFd != -1)
          FreeConsole;
   fFd = -1;
}

int TWinNTInput::Fd()
{
   return fFd;
}

int TWinNTInput::Id()
{
     return 0;
}

void TWinNTInput::InputHandler(void * clientData, int *, void *)
{
   TWinNTInput *obj = (TWinNTInput*)clientData;

}

