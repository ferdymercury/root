//*CMZ :  2.23/04 12/10/99  00.38.40  by  Fons Rademakers
//*CMZ :  2.23/03 22/09/99  19.15.24  by  Rene Brun
//*CMZ :  1.00/06 23/03/97  11.46.46  by  Rene Brun
//*-- Author :    Fons Rademakers   02/04/95

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
          FreeConsole();
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

