//*CMZ :  2.00/07 17/05/98  12.27.35  by  Fons Rademakers
//*CMZ :  2.00/06 13/05/98  18.12.36  by  Fons Rademakers
//*CMZ :  1.03/01 15/08/97  18.08.32  by  Fons Rademakers
//*-- Author :    Fons Rademakers   19/12/96

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
// over a network. This class inherits from TBuffer the basic I/O       //
// serializer.                                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TMessage.h"
#include "Bytes.h"

ClassImp(TMessage)

//______________________________________________________________________________
TMessage::TMessage(UInt_t what) : TBuffer(kWrite)
{
   // Create a TMessage object for storing objects. The "what" integer
   // describes the type of message. Predifined ROOT system message types
   // can be found in MessageTypes.h. Make sure your own message types are
   // unique from the ROOT defined message types (i.e. 0 - 10000 are
   // reserved by ROOT). In case you OR "what" with kMESS_ACK, the message
   // will wait for an acknowledgement from the remote side. This makes
   // the sending process synchronous.

   // space at the beginning of the message to contain the message length
   UInt_t   reserved = 0;
   *this << reserved;

   fClass = 0;
   fWhat  = what;
   *this << what;
}

//______________________________________________________________________________
TMessage::TMessage(void *buf, Int_t bufsize) : TBuffer(kRead, bufsize, buf)
{
   // Create a TMessage object for reading objects. The objects will be
   // read from buf. Use the What() method to get the message type.

   *this >> fWhat;

   if (fWhat == kMESS_OBJECT) {
      MapObject(0);
      fClass = ReadClass();     // get first class in stored in message
      Reset();
   } else
      fClass = 0;
}

//______________________________________________________________________________
void TMessage::Reset()
{
   // Reset the message buffer so we can use (i.e. fill) it again.

   if (IsWriting())
      SetBufferOffset(sizeof(fWhat) + sizeof(UInt_t));
   else
      SetBufferOffset(sizeof(fWhat));
   ResetMap();
}

//______________________________________________________________________________
void TMessage::SetLength() const
{
   // Set the message length at the beginning of the message buffer.
   // This method is only called by TSocket::Send().

   if (IsWriting()) {
      char *buf = Buffer();
      tobuf(buf, (UInt_t)(Length() - sizeof(UInt_t)));
   }
}

//______________________________________________________________________________
void TMessage::SetWhat(UInt_t what)
{
   // Using this method one can change the message type a posteriory.

   char *buf = Buffer();
   if (IsWriting())
      buf += sizeof(UInt_t);   // skip reserved space
   tobuf(buf, what);
   fWhat = what;
}
