//*CMZ :  2.00/12 23/09/98  17.30.45  by  Fons Rademakers
//*CMZ :  2.00/11 17/08/98  15.14.16  by  Rene Brun
//*CMZ :  2.00/09 09/06/98  18.53.39  by  Fons Rademakers
//*CMZ :  1.03/09 10/12/97  12.08.15  by  Fons Rademakers
//*-- Author :    Fons Rademakers   18/12/96

#ifndef ROOT_TSocket
#define ROOT_TSocket

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
// TSocket                                                              //
//                                                                      //
// This class implements client sockets. A socket is an endpoint for    //
// communication between two machines.                                  //
// The actual work is done via the TSystem class (either TUnixSystem,   //
// TWin32System or TMacSystem).                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TInetAddress
#include "TInetAddress.h"
#endif
#ifndef ROOT_MessageTypes
#include "MessageTypes.h"
#endif

enum ESockOptions {
   kSendBuffer,        // size of send buffer
   kRecvBuffer,        // size of receive buffer
   kOobInline,         // OOB message inline
   kKeepAlive,         // keep socket alive
   kReuseAddr,         // allow reuse of local portion of address 5-tuple
   kNoDelay,           // send without delay
   kNoBlock,           // non-blocking I/O
   kProcessGroup,      // socket process group (used for SIGURG and SIGIO)
   kAtMark,            // are we at out-of-band mark (read only)
   kBytesToRead        // get number of bytes to read, FIONREAD (read only)
};

enum ESendRecvOptions {
   kDefault,           // default option (= 0)
   kOob,               // send or receive out-of-band data
   kPeek               // peek at incoming message (receive only)
};


class TMessage;

class TSocket : public TNamed {

friend class TServerSocket;
friend class TProofServ;   // to be able to call SetDescriptor()

protected:
   Int_t         fSocket;         // socket descriptor
   TString       fService;        // name of service (matches remote port #)
   TInetAddress  fAddress;        // remote internet address and port #

   TSocket() { fSocket = -1; fBytesSent = fBytesRecv = 0; }

private:
   TInetAddress  fLocalAddress;   // local internet address and port #
   UInt_t        fBytesSent;      // total bytes sent using this socket
   UInt_t        fBytesRecv;      // total bytes received over this socket

   static UInt_t fgBytesSent;     // total bytes sent by all socket objects
   static UInt_t fgBytesRecv;     // total bytes received by all socket objects

   void operator=(const TSocket &);  // not implemented
   void SetDescriptor(Int_t desc) { fSocket = desc; }
   Option_t *GetOption() const { return TObject::GetOption(); }

public:
   TSocket(TInetAddress address, const char *service);
   TSocket(TInetAddress address, Int_t port);
   TSocket(const char *host, const char *service);
   TSocket(const char *host, Int_t port);
   TSocket(Int_t descriptor);
   TSocket(const TSocket &s);
   virtual ~TSocket() { Close(); }

   virtual void          Close(Option_t *opt="");
   Int_t                 GetDescriptor() const { return fSocket; }
   TInetAddress          GetInetAddress() const { return fAddress; }
   virtual TInetAddress  GetLocalInetAddress();
   Int_t                 GetPort() const { return fAddress.GetPort(); }
   virtual Int_t         GetLocalPort();
   UInt_t                GetBytesSent() const { return fBytesSent; }
   UInt_t                GetBytesRecv() const { return fBytesRecv; }
   virtual Int_t         Send(const TMessage &mess);
   virtual Int_t         Send(Int_t kind);
   virtual Int_t         Send(const char *mess, Int_t kind = kMESS_STRING);
   virtual Int_t         SendObject(const TObject *obj, Int_t kind = kMESS_OBJECT);
   virtual Int_t         SendRaw(const void *buffer, Int_t length, ESendRecvOptions opt = kDefault);
   virtual Int_t         Recv(TMessage *&mess);
   virtual Int_t         Recv(char *mess, Int_t max);
   virtual Int_t         Recv(char *mess, Int_t max, Int_t &kind);
   virtual Int_t         RecvRaw(void *buffer, Int_t length, ESendRecvOptions opt = kDefault);
   Bool_t                IsValid() const { return fSocket < 0 ? kFALSE : kTRUE; }
   Int_t                 GetErrorCode() const;
   virtual Int_t         SetOption(ESockOptions opt, Int_t val);
   virtual Int_t         GetOption(ESockOptions opt, Int_t &val);

   static  UInt_t        GetSocketBytesSent() { return fgBytesSent; }
   static  UInt_t        GetSocketBytesRecv() { return fgBytesRecv; }

   ClassDef(TSocket,1)  //This class implements client sockets
};

#endif
