//*CMZ :  2.00/09 09/06/98  18.49.41  by  Fons Rademakers
//*CMZ :  1.03/09 10/12/97  12.05.29  by  Fons Rademakers
//*-- Author :    Fons Rademakers   18/12/96

#ifndef ROOT_TServerSocket
#define ROOT_TServerSocket

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
// TServerSocket                                                        //
//                                                                      //
// This class implements server sockets. A server socket waits for      //
// requests to come in over the network. It performs some operation     //
// based on that request and then possibly returns a result to the      //
// requester. The actual work is done via the TSystem class (either     //
// TUnixSystem, TWin32System or TMacSystem).                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TSocket
#include "TSocket.h"
#endif


class TServerSocket : public TSocket {

private:
   TServerSocket() { }
   TServerSocket(const TServerSocket &);
   void operator=(const TServerSocket &);

public:
   enum { kDefaultBacklog = 10 };

   TServerSocket(Int_t port, Bool_t reuse = kFALSE, Int_t backlog = kDefaultBacklog);
   TServerSocket(const char *service, Bool_t reuse = kFALSE, Int_t backlog = kDefaultBacklog);
   virtual ~TServerSocket() { Close(); }

   virtual TSocket      *Accept();
   virtual TInetAddress  GetLocalInetAddress();
   virtual Int_t         GetLocalPort();

   Int_t         Send(const TMessage &)
                    { MayNotUse("Send(const TMessage &)"); return 0; }
   Int_t         Send(Int_t)
                    { MayNotUse("Send(Int_t)"); return 0; }
   Int_t         Send(const char *, Int_t = kMESS_STRING)
                    { MayNotUse("Send(const char *, Int_t)"); return 0; }
   Int_t         SendObject(const TObject *, Int_t = kMESS_OBJECT)
                    { MayNotUse("SendObject(const TObject *, Int_t)"); return 0; }
   Int_t         SendRaw(const void *, Int_t, ESendRecvOptions = kDefault)
                    { MayNotUse("SendRaw(const void *, Int_t, ESendRecvOptions)"); return 0; }
   Int_t         Recv(TMessage *&)
                    { MayNotUse("Recv(TMessage *&)"); return 0; }
   Int_t         Recv(char *, Int_t)
                    { MayNotUse("Recv(char *, Int_t)"); return 0; }
   Int_t         Recv(char *, Int_t, Int_t &)
                    { MayNotUse("Recv(char *, Int_t, Int_t &)"); return 0; }
   Int_t         RecvRaw(void *, Int_t, ESendRecvOptions = kDefault)
                    { MayNotUse("RecvRaw(void *, Int_t, ESendRecvOptions)"); return 0; }

   ClassDef(TServerSocket,1)  //This class implements server sockets
};

#endif
