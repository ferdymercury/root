//*CMZ :  1.00/02 12/03/97  19.52.14  by  Fons Rademakers
//*-- Author :    Fons Rademakers   08/01/97

#ifndef ROOT_TMonitor
#define ROOT_TMonitor

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TMonitor                                                             //
//                                                                      //
// This class monitors activity on a number of network sockets.         //
// The actual monitoring is done by TSystem::DispatchOneEvent().        //
// Typical usage: create a TMonitor object. Register a number of        //
// TSocket objects and call TMonitor::Select(). Select() returns the    //
// socket object which has data waiting. TSocket objects can be added,  //
// removed, (temporary) enabled or disabled.                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif

class TSocket;
class TList;

class TMonitor : public TObject {

private:
   TList    *fActive;     //list of sockets to monitor
   TList    *fDeActive;   //list of (temporary) disabled sockets
   TSocket  *fReady;      //socket which is ready to be read

public:
   TMonitor();
   virtual ~TMonitor();

   void Add(TSocket *sock);
   void Remove(TSocket *sock);

   void Activate(TSocket *sock);
   void ActivateAll();
   void DeActivate(TSocket *sock);
   void DeActivateAll();

   TSocket *Select();
   TSocket *Select(Long_t timeout);
   void     SetReady(TSocket *sock);

   Int_t  GetActive() const;
   Int_t  GetDeActive() const;

   ClassDef(TMonitor,0)  //Monitor activity on a set of TSocket objects
};

#endif
