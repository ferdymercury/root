//*CMZ :  2.00/06 25/04/98  00.47.56  by  Fons Rademakers
//*CMZ :  1.03/02 02/09/97  17.44.44  by  Rene Brun
//*-- Author :    Fons Rademakers   17/01/97

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
// TWebFile                                                             //
//                                                                      //
// A TWebFile is like a normal TFile except that it reads its data      //
// via a (slightly modified) apache web server. A TWebFile is a         //
// read-only file.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TWebFile.h"
#include "TROOT.h"
#include "TSocket.h"
#include "Bytes.h"


ClassImp(TWebFile)

//______________________________________________________________________________
TWebFile::TWebFile(const char *url) : TFile(url, "WEB"), fUrl(url)
{
   // Create a Web file object. A web file is the same as a read-only
   // TFile except that it is being read via a HTTP server. The url
   // argument must be of the form: http://host.dom.ain/file.root.
   // If the file specified in the URL does not exist or is not accessible
   // the kZombie bit will be set in the TWebFile object. Use IsZombie()
   // to see if the file is accessible.

   fOffset = 0;

   Init();
}

//______________________________________________________________________________
TWebFile::TWebFile(TUrl url) : TFile(url.GetUrl(), "WEB"), fUrl(url)
{
   // Create a Web file object. A web file is the same as a read-only
   // TFile except that it is being read via a HTTP server. Make sure url
   // is a valid TUrl object.
   // If the file specified in the URL does not exist or is not accessible
   // the kZombie bit will be set in the TWebFile object. Use IsZombie()
   // to see if the file is accessible.

   fOffset = 0;

   Init();
}

//______________________________________________________________________________
void TWebFile::Init()
{
   // Initialize a TWebFile object.

   char buf[4];

   Seek(0);
   if (ReadBuffer(buf, 4)) {
      Error("TWebFile", "cannot connect to remote host %s", fUrl.GetHost());
      MakeZombie();
      gDirectory = gROOT;
      return;
   }

   if (strncmp(buf, "root", 4)) {
      Error("TWebFile", "remote file does not exists or is not a ROOT file");
      MakeZombie();
      gDirectory = gROOT;
      return;
   }

   TFile::Init(kFALSE);
}

//______________________________________________________________________________
Bool_t TWebFile::IsOpen() const
{
   // A TWebFile that has been correctly constructed is always considered open.

   return IsZombie() ? kFALSE : kTRUE;
}

//______________________________________________________________________________
Bool_t TWebFile::ReadBuffer(char *buf, int len)
{
   // Read specified byte range from remote file via HTTP daemon. This
   // routine connects to the remote host, sends the request and returns
   // the buffer. Returns kTRUE in case of error.

   TSocket s(fUrl.GetHost(), fUrl.GetPort());
   if (!s.IsValid())
      return kTRUE;

   char msg[256];

   // Give full URL so Apache's virtual hosts solution works.
   // Use protocol 0.9 for efficiency, we are not interested in the 1.0 headers.
   sprintf(msg, "GET %s://%s:%d%s?%d:%d\r\n", fUrl.GetProtocol(),
           fUrl.GetHost(), fUrl.GetPort(), fUrl.GetFile(), fOffset, len);
   s.SendRaw(msg, strlen(msg));
   s.RecvRaw(buf, len);

   fOffset += len;

   fBytesRead  += len;
#ifdef WIN32
   SetFileBytesRead(GetFileBytesRead() + len);
#else
   fgBytesRead += len;
#endif

   return kFALSE;
}

//______________________________________________________________________________
void TWebFile::Seek(Seek_t offset, ERelativeTo pos)
{
   // Set position from where to start reading.

   switch (pos) {
   case kBeg:
      fOffset = offset;
      break;
   case kCur:
      fOffset += offset;
      break;
   case kEnd:
      fOffset = fEND - offset;  // is fEND really EOF or logical EOF?
      break;
   }
