//*CMZ :  2.24/02 03/04/2000  14.31.12  by  Fons Rademakers
//*CMZ :  2.24/01 31/03/2000  08.03.59  by  Valery Fine(fine@bnl.gov)
//*CMZ :  2.00/12 14/09/98  17.55.56  by  Fons Rademakers
//*CMZ :  1.00/00 20/02/97  12.27.40  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/10/95

#ifndef ROOT_TStopwatch
#define ROOT_TStopwatch

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
// TStopwatch                                                           //
//                                                                      //
// Stopwatch class. This class returns the real and cpu time between    //
// the start and stop events.                                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif


class TStopwatch : public TObject {

private:
   enum EState { kUndefined, kStopped, kRunning };

   Double_t     fStartRealTime;   //wall clock start time
   Double_t     fStopRealTime;    //wall clock stop time
   Double_t     fStartCpuTime;    //cpu start time
   Double_t     fStopCpuTime;     //cpu stop time
   Double_t     fTotalCpuTime;    //total cpu time
   Double_t     fTotalRealTime;   //total real time
   EState       fState;           //stopwatch state
   Int_t        fCounter;         //number of times the stopwatch was started

public:
   TStopwatch();
   void        Start(Bool_t reset = kTRUE);
   void        Stop();
   void        Continue();
   Int_t       Counter() const { return fCounter; }
   Double_t    RealTime();
   void        Reset() { ResetCpuTime(); ResetRealTime(); }
   void        ResetCpuTime(Double_t time = 0) { Stop();  fTotalCpuTime = time; }
   void        ResetRealTime(Double_t time = 0) { Stop(); fTotalRealTime = time; }
   Double_t    CpuTime();
   void        Print(Option_t *option="");
   static Double_t GetRealTime();
   static Double_t GetCPUTime();

   ClassDef(TStopwatch,0)  //A stopwatch which times real and cpu time
};

#endif
