//*CMZ :  1.03/08 17/11/97  16.21.41  by  Fons Rademakers
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
// TUrl                                                                 //
//                                                                      //
// This class represents a WWW compatible URL.                          //
// It provides member functions to returns the different parts of       //
// an URL.                                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include "TUrl.h"

ClassImp(TUrl)

//______________________________________________________________________________
TUrl::TUrl(const char *url)
{
   // Parse url character string and split in its different subcomponents.
   // Use IsValid() to check if URL is legal.
   //
   // url: [proto://]host[:port][/file.ext][#anchor][?options]
   //
   // Allowed protocols: http, root, ftp, news, file (default http)
   // Default ports: http=80, root=432, ftp=20, news=119.

   if (!url || !strlen(url)) {
      fPort = -1;
      return;
   }

   // Set defaults
   fUrl      = "";
   fProtocol = "http";
   fPort     = 80;
   fFile     = "/";
   fAnchor   = "";
   fOptions  = "";

   char *u = (char *)url;  // yes, I know, but I promise I'll not damage it

   // Find protocol
   char *s, sav;

   // Special case for "file:"
   if (!strncmp(u, "file:", 5)) {
      fProtocol = "file";
      fFile = u+5;
      fPort = 0;
      return;
   }

   if ((s = strstr(u, "://"))) {
      sav = *s;
      *s = 0;
      fProtocol = u;
      *s = sav;
      if (!fProtocol.CompareTo("http"))
         fPort = 80;
      else if (!fProtocol.CompareTo("root"))
         fPort = 432;
      else if (!fProtocol.CompareTo("ftp"))
         fPort = 20;
      else if (!fProtocol.CompareTo("news"))
         fPort = 119;
      else {
         // illegal protocol
         fPort = -1;
         return;
      }
      s += 3;
      if (!*s) {
         // error if we are at end of string
         fPort = -1;
         return;
      }
   } else
      s = u;

   // Find host
   u = s;
   if ((s = strchr(u, ':')) || (s = strchr(u, '/'))) {
      sav = *s;
      *s = 0;
      fHost = u;
      *s = sav;
      if (sav == ':') {
         s++;
         // Get port #
         if (!*s) {
            fPort = -1;
            return;
         }
         u = s;
         if ((s = strchr(u, '/'))) {
            sav = *s;
            *s = 0;
            fPort = atoi(u);
            *s = sav;
         } else {
            fPort = atoi(u);
            return;
         }
      }
   } else {
      fHost = u;
      return;
   }

   if (!*s) return;

   // Find file
   u = s;
   if ((s = strchr(u, '#')) || (s = strchr(u, '?'))) {
      sav = *s;
      *s = 0;
      fFile = u;
      *s = sav;
      s++;
      if (sav == '#') {
         // Get anchor
         if (!*s) {
            fPort = -1;
            return;
         }
         u = s;
         if ((s = strchr(u, '?'))) {
            sav = *s;
            *s = 0;
            fAnchor = u;
            *s = sav;
            s++;
         } else {
            fAnchor = u;
            return;
         }
      }
      if (!*s) {
         // error if we are at end of string
         fPort = -1;
         return;
      }
   } else {
      fFile = u;
      return;
   }

   // Set option
   fOptions = s;
}

//______________________________________________________________________________
TUrl::TUrl(const TUrl &url)
{
   // TUrl copt ctor.

   fUrl      = url.fUrl;
   fProtocol = url.fProtocol;
   fHost     = url.fHost;
   fFile     = url.fFile;
   fAnchor   = url.fAnchor;
   fOptions  = url.fOptions;
   fPort     = url.fPort;
}

//______________________________________________________________________________
TUrl &TUrl::operator=(const TUrl &rhs)
{
   // TUrl assignment operator.

   if (this != &rhs) {
      TObject::operator=(rhs);
      fUrl      = rhs.fUrl;
      fProtocol = rhs.fProtocol;
      fHost     = rhs.fHost;
      fFile     = rhs.fFile;
      fAnchor   = rhs.fAnchor;
      fOptions  = rhs.fOptions;
      fPort     = rhs.fPort;
   }
   return *this;
}

//______________________________________________________________________________
const char *TUrl::GetUrl()
{
   // Return full URL.

   if (IsValid() && fUrl == "") {
      if (!fProtocol.CompareTo("file")) {
         fUrl = fProtocol + ":" + fFile;
         return fUrl.Data();
      }

      Bool_t deflt = kTRUE;
      if ((!fProtocol.CompareTo("http") && fPort != 80)  ||
          (!fProtocol.CompareTo("root") && fPort != 432) ||
          (!fProtocol.CompareTo("ftp")  && fPort != 20)  ||
          (!fProtocol.CompareTo("news") && fPort != 119))
         deflt = kFALSE;
      if (!deflt) {
         char p[10];
         sprintf(p, "%d", fPort);
         fUrl = fProtocol + "://" + fHost + ":" + p + fFile;
      } else
         fUrl = fProtocol + "://" + fHost + fFile;
      if (fAnchor != "") {
         fUrl += "#";
         fUrl += fAnchor;
      }
      if (fOptions != "") {
         fUrl += "?";
         fUrl += fOptions;
      }
   }

   return fUrl.Data();
}

//______________________________________________________________________________
void TUrl::Print(Option_t *)
{
   // Print URL on stdout.

   if (fPort == -1)
      Printf("Illegal URL");

   Printf("%s", GetUrl());
}
