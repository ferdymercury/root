//*CMZ :  2.20/05 13/12/98  12.42.44  by  Rene Brun
//*CMZ :  2.20/04 09/12/98  21.16.03  by  Rene Brun
//*CMZ :  2.00/12 05/10/98  19.18.59  by  Fons Rademakers
//*CMZ :  2.00/11 25/08/98  01.45.05  by  Fons Rademakers
//*CMZ :  1.00/06 23/03/97  11.01.59  by  Rene Brun
//*-- Author :    Fons Rademakers   28/11/96

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
// TTimer                                                               //
//                                                                      //
// Handles synchronous and a-synchronous timer events. To make use of   //
// this class one can use one of the threee cases:                      //
//   -sub-class TTimer and implement Notify() and Remove() (if timer    //
//    has not been added to the gSystem timer list).                    //
//   -Give a pointer of an object to be notified.                       //
//   -Specify a command string to be executed by the interpreter        //
// Without sub-classing one can use the HasTimedOut() method.           //
// Use Reset() to reset the timer after expiration. To disable a timer  //
// remove it using Remove() or destroy it.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TTimer.h"
#include "TSystem.h"
#include "TInterpreter.h"

ClassImp(TTimer)

//______________________________________________________________________________
TTimer::TTimer(Long_t ms, Bool_t mode) : fTime(ms)
{
   // Create timer that times out in ms milliseconds. If mode == kTRUE then
   // the timer is synchronous else a-synchronous. The default is synchronous.
   // Add a timer to the system eventloop by doing: gSystem->AddTimer().

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
   // Add a timer to the system eventloop by doing: gSystem->AddTimer().
   // obj->HandleTimer will be called by Notify

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
   // Add a timer to the system eventloop by doing: gSystem->AddTimer().
   // the interpreter will execute command from Notify

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
   // Notify when timer times out

   if (fObject) return fObject->HandleTimer(this);
   if (fCommand && strlen(fCommand)) {
      gInterpreter->ProcessLine(fCommand);
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
   // Set the interpreter command to be executed at time out

   fObject  = 0;
   fCommand = command;
}

//______________________________________________________________________________
void TTimer::SetObject(TObject *object)
{
   // Set the object to be notified  at time out

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
