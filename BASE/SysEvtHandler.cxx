//*CMZ :  2.23/03 22/09/99  18.07.48  by  Rene Brun
//*CMZ :  1.03/02 25/08/97  16.23.18  by  Fons Rademakers
//*-- Author :    Fons Rademakers   16/09/95

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TSysEvtHandler                                                       //
//                                                                      //
// Abstract base class for handling system events.                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TSysEvtHandler.h"
#include "TSystem.h"


ClassImp(TSysEvtHandler)
ClassImp(TFileHandler)


//______________________________________________________________________________
TFileHandler::TFileHandler(int fd, int mask)
{
   // Create a file descriptor event handler.

   fFileNum = fd;
   if (!mask)
      mask = 1;
   fMask = mask;
}

//______________________________________________________________________________
Bool_t TFileHandler::Notify()
{
   // Notify when event occured on descriptor associated with this handler.

   return kFALSE;
}

//______________________________________________________________________________
Bool_t TFileHandler::ReadNotify()
{
   // Notify when something can be read from the descriptor associated with
   // this handler.

   return kFALSE;
}

//______________________________________________________________________________
Bool_t TFileHandler::WriteNotify()
{
   // Notify when something can be written to the descriptor associated with
   // this handler.

   return kFALSE;
}

//______________________________________________________________________________
Bool_t TFileHandler::HasReadInterest()
{
   // True if handler is interested in read events.

   return (fMask & 1);
}

//______________________________________________________________________________
Bool_t TFileHandler::HasWriteInterest()
{
   // True if handler is interested in write events.

   return (fMask & 2);
}

//______________________________________________________________________________
void TFileHandler::Remove()
{
   // Remove file event handler from system file handler list.

   if (gSystem && fFileNum != -1)
      gSystem->RemoveFileHandler(this);
}


ClassImp(TSignalHandler)

//______________________________________________________________________________
TSignalHandler::TSignalHandler(ESignals sig, Bool_t sync)
{
   // Create signal event handler.

   fSignal = sig;
   fSync   = sync;
   fDelay  = 0;
}

//______________________________________________________________________________
Bool_t TSignalHandler::Notify()
{
   // Notify when signal occurs.

   return kFALSE;
}

//______________________________________________________________________________
void TSignalHandler::Remove()
{
   // Remove signal handler from system signal handler list.

   if (gSystem && fSignal != (ESignals)-1)
      gSystem->RemoveSignalHandler(this);
}
