//*CMZ :  1.03/08 17/11/97  16.19.14  by  Fons Rademakers
//*-- Author :    Fons Rademakers   16/12/96

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
// TInetAddress                                                         //
//                                                                      //
// This class represents an Internet Protocol (IP) address.             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TInetAddress.h"

ClassImp(TInetAddress)

//______________________________________________________________________________
TInetAddress::TInetAddress()
{
   // Private default ctor. Used in case of unknown host. Not a valid address.

   fHostname = "UnknownHost";
   fAddress  = 0;
   fFamily   = -1;
   fPort     = -1;
}

//______________________________________________________________________________
TInetAddress::TInetAddress(const char *host, UInt_t addr, Int_t family, Int_t port)
{
   // Create TInetAddress. Private ctor. TInetAddress objects can only
   // be created via the friend classes TSystem, TServerSocket and TSocket.
   // Use the IsValid() method to check the validity of a TInetAddress.

   fAddress = addr;
   if (!strcmp(host, "????"))
      fHostname = GetHostAddress();
   else
      fHostname = host;
   fFamily = family;
   fPort   = port;
}

//______________________________________________________________________________
TInetAddress::TInetAddress(const TInetAddress &adr)
{
   // TInetAddress copy ctor.

   fHostname = adr.fHostname;
   fAddress  = adr.fAddress;
   fFamily   = adr.fFamily;
   fPort     = adr.fPort;
}

//______________________________________________________________________________
TInetAddress& TInetAddress::operator=(const TInetAddress &rhs)
{
   // TInetAddress assignment operator.

   if (this != &rhs) {
      TObject::operator=(rhs);
      fHostname = rhs.fHostname;
      fAddress  = rhs.fAddress;
      fFamily   = rhs.fFamily;
      fPort     = rhs.fPort;
   }
   return *this;
}

//______________________________________________________________________________
UChar_t *TInetAddress::GetAddressBytes() const
{
   // Returns the raw IP address in host byte order. The highest
   // order byte position is in addr[0]. To be prepared for 64-bit
   // IP addresses an array of bytes is returned.

   static UChar_t addr[4];

   addr[0] = (UChar_t) ((fAddress >> 24) & 0xFF);
   addr[1] = (UChar_t) ((fAddress >> 16) & 0xFF);
   addr[2] = (UChar_t) ((fAddress >> 8) & 0xFF);
   addr[3] = (UChar_t) (fAddress & 0xFF);

   return addr;
}

//______________________________________________________________________________
const char *TInetAddress::GetHostAddress() const
{
   // Returns the IP address string "%d.%d.%d.%d".
   // Copy string immediately, it will be reused.

   return Form("%d.%d.%d.%d", (fAddress >> 24) & 0xFF,
                              (fAddress >> 16) & 0xFF,
                              (fAddress >>  8) & 0xFF,
                               fAddress & 0xFF);
}

//______________________________________________________________________________
void TInetAddress::Print(Option_t *)
{
   // Print internet address as string.

   if (fPort == -1)
      Printf("%s/%s (not connected)", GetHostName(), GetHostAddress());
   else
      Printf("%s/%s (port %d)", GetHostName(), GetHostAddress(), fPort);
}
