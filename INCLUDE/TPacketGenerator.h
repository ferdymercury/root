//*CMZ :  1.00/07 04/04/97  11.47.40  by  Fons Rademakers
//*-- Author :    Fons Rademakers   28/03/97

#ifndef ROOT_TPacketGenerator
#define ROOT_TPacketGenerator

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
// TPacketGenerator                                                     //
//                                                                      //
// This class generates packets to be processed on PROOF slave servers. //
// A packet is an event range (begin event and number of events).       //
// Packets are generated taking into account the performance of the     //
// remote machine, the time it took to process a previous packet on     //
// the remote machine, the locality of the database files, etc.         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TTime
#include "TTime.h"
#endif
#ifndef ROOT_Htypes
#include "Htypes.h"
#endif

class TObjArray;
class TList;
class TSlave;
class TTree;


class TPacketGenerator : public TObject {

private:
   Stat_t     fNextEvent;         //next event to be processed
   Stat_t     fLastEvent;         //last event to be processed
   Stat_t     fEventsProcessed;   //number of events processed
   Int_t      fInitialPacketSize; //initial packet size
   Int_t      fMinPacketSize;     //minimum packet size
   Int_t      fSmallestPacket;    //smallest packet generated
   TTime      fMinTimeDiff;       //time difference between last two packets for fastest slave
   Int_t      fMaxOrd;            //highest ordinal slave number
   TTree     *fTree;              //tree or chain being processed
   TList     *fSlaves;            //list of slaves
   Stat_t    *fEventsPerSlave;    //array containing number of events processed per slave
   TObjArray *fLastPackets;       //pointer to the last packet for each slave
   TList     *fPackets;           //list of packets that have been processed

   TPacketGenerator();
   TPacketGenerator(const TPacketGenerator &) { }
   void operator=(const TPacketGenerator &) { }
   void Init();

public:
   TPacketGenerator(Stat_t firstEvent, Stat_t lastEvent, TTree *tree, TList *slaves);
   TPacketGenerator(Stat_t firstEvent, Stat_t lastEvent, Int_t packetSize, TList *slaves);
   virtual ~TPacketGenerator();

   Stat_t      GetEventsProcessed() const { return fEventsProcessed; }
   Stat_t      GetEventsProcessed(TSlave *sl) const;
   Int_t       GetInitialPacketSize() const { return fInitialPacketSize; }
   Stat_t      GetNextEvent() const { return fNextEvent; }
   Bool_t      GetNextPacket(TSlave *sl, Int_t &nevent, Stat_t &first);
   Int_t       GetNoPackets() const;
   TList      *GetPackets() const { return fPackets; }
   Stat_t      GetLastEvent() const { return fLastEvent; }

   void        SetMinPacketSize(Int_t minps);

   void        Print(Option_t *option="");
   void        Reset(Stat_t firstEvent, Stat_t lastEvent, TList *slaves);

   ClassDef(TPacketGenerator,0)  //Generate packets of events for parallel processing
};

#endif
