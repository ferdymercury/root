//*CMZ :  2.23/03 22/09/99  18.07.45  by  Rene Brun
//*CMZ :  2.20/05 14/12/98  16.23.46  by  Fons Rademakers
//*CMZ :  2.20/04 09/12/98  21.09.40  by  Rene Brun
//*CMZ :  2.00/12 05/10/98  19.18.59  by  Fons Rademakers
//*-- Author :    Fons Rademakers   28/11/96

#ifndef ROOT_TTimer
#define ROOT_TTimer

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
// TTimer                                                               //
//                                                                      //
// Handles synchronous and a-synchronous timer events. To make use of   //
// this class one has to sub-class TTimer and implement Notify() and    //
// Remove() (if timer has not been added to the gSystem timer list).    //
// Without sub-classing one can use the HasTimedOut() method.           //
// Use Reset() to reset the timer after expiration. To disable a timer  //
// remove it using Remove() or destroy it.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TSysEvtHandler
#include "TSysEvtHandler.h"
#endif
#ifndef ROOT_TTime
#include "TTime.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif



class TTimer : public TSysEvtHandler {

protected:
   TTime     fTime;      // time out time in ms
   TTime     fAbsTime;   // absolute time out time in ms
   Bool_t    fTimeout;   // true if timer has timed out
   Bool_t    fSync;      // true if synchrounous timer
   UInt_t    fTimeID;    // the system ID of this timer (for WIN32)
   TObject  *fObject;    // object to be notified (if any)
   TString   fCommand;   // interpreter command to be executed

public:
   TTimer(Long_t milliSec, Bool_t mode = kTRUE);
   TTimer(TObject *obj, Long_t milliSec, Bool_t mode = kTRUE);
   TTimer(const char *command, Long_t milliSec, Bool_t mode = kTRUE);
   virtual ~TTimer() { Remove(); }

   Bool_t         CheckTimer(const TTime &now);
   const char    *GetCommand() const { return fCommand.Data(); }
   TObject       *GetObject() { return fObject; }
   TTime          GetTime() const { return fTime; }
   UInt_t         GetTimerID(){ return fTimeID;}
   TTime          GetAbsTime() const { return fAbsTime; }
   Bool_t         HasTimedOut() const { return fTimeout; }
   Bool_t         IsSync() const { return fSync; }
   Bool_t         IsAsync() const { return !fSync; }
   virtual Bool_t Notify();
   void           Remove() { TurnOff(); }
   void           Reset();
   void           SetCommand(const char *command);
   void           SetObject(TObject *object);
   void           SetTime(Long_t milliSec) { fTime = milliSec; }
   void           SetTimerID(UInt_t id = 0) { fTimeID = id; }
   virtual void   TurnOn();
   virtual void   TurnOff();

   ClassDef(TTimer,0)  //Handle timer event
};

#endif
