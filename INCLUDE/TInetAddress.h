//*CMZ :  2.23/05 20/10/99  18.40.32  by  Fons Rademakers
//*CMZ :  2.00/06 12/05/98  15.32.25  by  Rene Brun
//*CMZ :  1.03/05 09/10/97  13.31.55  by  Fons Rademakers
//*-- Author :    Fons Rademakers   16/12/96

#ifndef ROOT_TInetAddress
#define ROOT_TInetAddress

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TInetAddress                                                         //
//                                                                      //
// This class represents an Internet Protocol (IP) address.             //
// Objects of this class can not be created directly, but only via      //
// the TSystem GetHostByName(), GetSockName(), and GetPeerName()        //
// members and via members of the TServerSocket and TSocket classes.    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif


class TInetAddress : public TObject {

friend class TSystem;
friend class TUnixSystem;
friend class TWinNTSystem;
friend class TVmsSystem;
friend class TMacSystem;
friend class TSocket;
friend class TServerSocket;

private:
   TString fHostname;    // full qualified hostname
   UInt_t  fAddress;     // IP address in host byte order
   Int_t   fFamily;      // address family
   Int_t   fPort;        // port through which we are connected

   TInetAddress(const char *host, UInt_t addr, Int_t family, Int_t port = -1);

public:
   TInetAddress();
   TInetAddress(const TInetAddress &adr);
   TInetAddress &operator=(const TInetAddress &rhs);
   virtual ~TInetAddress() { }

   UInt_t      GetAddress() const { return fAddress; }
   UChar_t    *GetAddressBytes() const;
   const char *GetHostAddress() const;
   const char *GetHostName() const { return (const char *) fHostname; }
   Int_t       GetFamily() const { return fFamily; }
   Int_t       GetPort() const { return fPort; }
   Bool_t      IsValid() const { return fFamily == -1 ? kFALSE : kTRUE; }
   void        Print(Option_t *option="");

   ClassDef(TInetAddress,1)  //Represents an Internet Protocol (IP) address
};

#endif
