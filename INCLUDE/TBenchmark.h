//*CMZ :  1.03/09 03/12/97  18.29.59  by  Fons Rademakers
//*-- Author :    Rene Brun   01/04/96
// ---------------------------------- Benchmark.h

#ifndef ROOT_TBenchmark
#define ROOT_TBenchmark

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
// TBenchmark                                                           //
//                                                                      //
// This class is a ROOT utility to help benchmarking applications       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TStopwatch
#include "TStopwatch.h"
#endif

class TBenchmark : public TNamed {

protected:

   Int_t      fNbench;          //Number of active benchmarks
   Int_t      fNmax;            //Maximum number of benchmarks initialized
   TString    *fNames;          //Names of benchmarks
   Float_t    *fRealTime;       //Real Time
   Float_t    *fCpuTime;        //Cpu Time
   TStopwatch *fTimer;          //Timers

public:
                       TBenchmark();
   virtual            ~TBenchmark();
   Int_t              GetBench(const char *name);
   Float_t            GetCpuTime(const char *name);
   Float_t            GetRealTime(const char *name);
   virtual void       Print(Option_t *name);
   virtual void       Reset();
   virtual void       Show(const char *name);
   virtual void       Start(const char *name);
   virtual void       Stop(const char *name);
   virtual void       Summary();

   ClassDef(TBenchmark,0)  //ROOT utility to help benchmarking applications
};

R__EXTERN TBenchmark  *gBenchmark;

#endif
