//*CMZ :  1.03/01 15/08/97  18.08.32  by  Fons Rademakers
//*-- Author :    Fons Rademakers   19/12/96

#ifndef ROOT_TMessage
#define ROOT_TMessage

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
// TMessage                                                             //
//                                                                      //
// Message buffer class used for serializing objects and sending them   //
// over the network.                                                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TBuffer
#include "TBuffer.h"
#endif
#ifndef ROOT_MessageTypes
#include "MessageTypes.h"
#endif


class TMessage : public TBuffer {

friend class TSocket;

private:
   UInt_t   fWhat;   //message type
   TClass  *fClass;  //if message is kMESS_OBJECT, pointer to object's class

   TMessage(void *buf, Int_t bufsize);   // only called by TSocket::Recv()
   void SetLength() const;               // only called by TSocket::Send()

public:
   TMessage(UInt_t what = kMESS_ANY);
   virtual ~TMessage() { }

   TClass  *GetClass() const { return fClass; }
   void     Reset();
   void     Reset(UInt_t what) { SetWhat(what); Reset(); }
   UInt_t   What() const { return fWhat; }
   void     SetWhat(UInt_t what);

   ClassDef(TMessage,0)  // Message buffer class
};

#endif
