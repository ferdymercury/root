//*CMZ :  2.23/03 22/09/99  18.07.45  by  Rene Brun
//*CMZ :  1.03/07 29/10/97  16.26.13  by  Fons Rademakers
//*-- Author :    Fons Rademakers   16/09/95

#ifndef ROOT_TSysEvtHandler
#define ROOT_TSysEvtHandler

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
// TSysEvtHandler                                                       //
//                                                                      //
// Abstract base class for handling system events.                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif


class TSysEvtHandler : public TObject {

public:
   TSysEvtHandler() { }
   virtual ~TSysEvtHandler() { }

   virtual Bool_t   Notify() = 0;
   virtual void     Remove() = 0;

   ClassDef(TSysEvtHandler,0)  //ABC for handling system events
};


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TFileHandler                                                         //
//                                                                      //
// Handles events on file descriptors.                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TFileHandler : public TSysEvtHandler {

protected:
   int  fFileNum;     //File descriptor
   int  fMask;        //Event mask

   TFileHandler() { fFileNum = -1; } //For Dictionary()

public:
   TFileHandler(int fd, int mask);
   virtual ~TFileHandler() { Remove(); }
   int             GetFd() const { return fFileNum; }
   void            SetFd(int fd) { fFileNum = fd; }
   virtual Bool_t  Notify();
   virtual Bool_t  ReadNotify();
   virtual Bool_t  WriteNotify();
   virtual Bool_t  HasReadInterest();
   virtual Bool_t  HasWriteInterest();
   virtual void    Remove();

   ClassDef(TFileHandler,0)  //Handles events on file descriptors
};


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TSignalHandler                                                       //
//                                                                      //
// Handles signals.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

enum ESignals {
   kSigBus,
   kSigSegmentationViolation,
   kSigSystem,
   kSigPipe,
   kSigIllegalInstruction,
   kSigQuit,
   kSigInterrupt,
   kSigWindowChanged,
   kSigAlarm,
   kSigChild,
   kSigUrgent,
   kSigFloatingException,
   kSigTermination,
   kSigUser1,
   kSigUser2
};


class TSignalHandler : public TSysEvtHandler {

protected:
   ESignals    fSignal;   //Signal to be handled
   Bool_t      fSync;     //Synchronous or a-synchronous signal
   Int_t       fDelay;    //Delay handling of signal (use fDelay in Notify())

   TSignalHandler() { fSignal = (ESignals)-1; fDelay = 0; }

public:
   TSignalHandler(ESignals sig, Bool_t sync = kTRUE);
   virtual ~TSignalHandler() { Remove(); }
   void           Delay() { fDelay = 1; }
   void           HandleDelayedSignal();
   ESignals       GetSignal() const { return fSignal; }
   void           SetSignal(ESignals sig) { fSignal = sig; }
   Bool_t         IsSync() const { return fSync; }
   Bool_t         IsAsync() const { return !fSync; }
   virtual Bool_t Notify();
   virtual void   Remove();

   ClassDef(TSignalHandler,0)  //Signal event handler
};

inline void TSignalHandler::HandleDelayedSignal()
{
   if (fDelay > 1) {
      fDelay = 0;
      Notify();
   } else
      fDelay = 0;
}

#endif
