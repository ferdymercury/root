//*CMZ :  2.22/05 10/06/99  18.12.29  by  Fons Rademakers
//*CMZ :  1.03/01 15/08/97  18.08.32  by  Fons Rademakers
//*-- Author :    Fons Rademakers   19/12/96

#ifndef ROOT_TMessage
#define ROOT_TMessage

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
   virtual ~TMessage();

   TClass  *GetClass() const { return fClass; }
   void     Reset();
   void     Reset(UInt_t what) { SetWhat(what); Reset(); }
   UInt_t   What() const { return fWhat; }
   void     SetWhat(UInt_t what);

   ClassDef(TMessage,0)  // Message buffer class
};

#endif
