//*CMZ :  2.23/03 22/09/99  18.07.48  by  Rene Brun
//*CMZ :  2.20/05 13/12/98  12.42.44  by  Rene Brun
//*CMZ :  2.20/04 09/12/98  21.16.03  by  Rene Brun
//*CMZ :  2.00/12 05/10/98  19.18.59  by  Fons Rademakers
//*-- Author :    Fons Rademakers   28/11/96

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
// TTimer                                                               //
//                                                                      //
// Handles synchronous and a-synchronous timer events. To make use of   //
// this class one can use one of the three cases:                       //
//   - Sub-class TTimer and implement Notify() and Remove() (if timer   //
//     has not been added to the gSystem timer list).                   //
//   - Give a pointer of an object to be notified.                      //
//   - Specify a command string to be executed by the interpreter.      //
// Without sub-classing one can also use the HasTimedOut() method.      //
// Use Reset() to reset the timer after expiration. To disable a timer  //
// remove it using Remove() or destroy it.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TTimer.h"
#include "TSystem.h"
#include "TROOT.h"

ClassImp(TTimer)

//______________________________________________________________________________
TTimer::TTimer(Long_t ms, Bool_t mode) : fTime(ms)
{
   // Create timer that times out in ms milliseconds. If mode == kTRUE then
   // the timer is synchronous else a-synchronous. The default is synchronous.
   // Add a timer to the system eventloop by calling TurnOn().

   fObject  = 0;
   fCommand = "";
   fSync    = mode;
   Reset();
}

//______________________________________________________________________________
TTimer::TTimer(TObject *obj, Long_t ms, Bool_t mode) : fTime(ms)
{
   // Create timer that times out in ms milliseconds. If mode == kTRUE then
   // the timer is synchronous else a-synchronous. The default is synchronous.
   // Add a timer to the system eventloop by calling TurnOn().
   // The object's HandleTimer() will be called by Notify().

   fObject  = obj;
   fCommand = "";
   fSync    = mode;
   Reset();
}

//______________________________________________________________________________
TTimer::TTimer(const char *command, Long_t ms, Bool_t mode) : fTime(ms)
{
   // Create timer that times out in ms milliseconds. If mode == kTRUE then
   // the timer is synchronous else a-synchronous. The default is synchronous.
   // Add a timer to the system eventloop by calling TurnOn().
   // The interpreter will execute command from Notify().

   fObject  = 0;
   fCommand = command;
   fSync    = mode;
   Reset();
}

//______________________________________________________________________________
Bool_t TTimer::CheckTimer(const TTime &now)
{
   // Check if timer timed out.

   if (fAbsTime <= now) {
      fTimeout = kTRUE;
      Notify();
      return kTRUE;
   }
   return kFALSE;
}

//______________________________________________________________________________
Bool_t TTimer::Notify()
{
   // Notify when timer times out. When a command string is executed
   // the timer is implicitely reset. To stop the timer in that case
   // call TurnOff(). When an object's HandleTimer() is called the timer
   // has to be reset in that method.

   if (fObject) return fObject->HandleTimer(this);
   if (fCommand && strlen(fCommand)) {
      gROOT->ProcessLine(fCommand);
      Reset();
   }
   return kFALSE;
}

//______________________________________________________________________________
void TTimer::Reset()
{
   // Reset the timer.

   fTimeout = kFALSE;
   fAbsTime = fTime;
   if (gSystem) {
      fAbsTime += gSystem->Now();
      if (!fSync) gSystem->ResetTimer(this);
   }
}

//______________________________________________________________________________
void TTimer::SetCommand(const char *command)
{
   // Set the interpreter command to be executed at time out.

   fObject  = 0;
   fCommand = command;
}

//______________________________________________________________________________
void TTimer::SetObject(TObject *object)
{
   // Set the object to be notified  at time out.

   fObject  = object;
   fCommand = "";
}

//______________________________________________________________________________
void TTimer::TurnOff()
{
   // Remove timer from system timer list. This requires that a timer
   // has been placed in the system timer list (using TurnOn()).
   // If a TTimer subclass is placed on another list, override TurnOff() to
   // remove the timer from the correct list.

   if (gSystem)
      gSystem->RemoveTimer(this);
}

//______________________________________________________________________________
void TTimer::TurnOn()
{
   // Add the timer to the system timer list. If a TTimer subclass has to be
   // placed on another list, override TurnOn() to add the timer to the correct
   // list.

   if (gSystem)
      gSystem->AddTimer(this);
}
