//*CMZ :  2.00/00 05/03/98  03.54.09  by  Fons Rademakers
//*-- Author :    Rene Brun   01/03/98

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
// Roots                                                                //
//                                                                      //
// Main program for the Root graphics network server                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TServerSocket.h"
#include "TSocket.h"
#include "TMessage.h"
#include "TGXServer.h"
#include "TGX11.h"

extern void InitGui();
VoidFuncPtr_t initfuncs[] = { InitGui, 0 };

TROOT roots("Roots","The ROOT graphics network server", initfuncs);

//______________________________________________________________________________
int main(int , char **)
{

   //TGX11 *gGXW = new TGX11("rootserv","server");
   gGXW->Dump();

   // Open a server socket looking for connections on a named service or
   // on a specified port.
   //TServerSocket *ss = new TServerSocket("rootserv", kTRUE);
   TServerSocket *ss = new TServerSocket(5051, kTRUE);

   // Accept a connection and return a full-duplex communication socket.
   TSocket *s = ss->Accept();

   // tell the client to start
   s->Send("go 0");

   // Close the server socket (unless we will use it later to wait for
   // another connection).
   ss->Close();

   // Create a TGServer object
   TGXServer *server = new TGXServer(s);

   TMessage *mess;
   Int_t nmess = 0;
   Short_t code;
   Int_t len,messlen,bufcur;

   while (1) {
      nmess++;
      messlen = s->Recv(mess);
      printf(" got message%d type=%d, length=%d\n",nmess,mess->What(),messlen);

     //mess->Dump();
      while (1) {
         *mess >> code;
         *mess >> len;
         bufcur = mess->Length();
//         printf("   code = %d, len=%d, bufcur=%d\n",code,len,bufcur);
         server->ProcessCode(code,mess);
         if (code == 125) {s->Close(); return 0;}
         if(bufcur+len >= messlen) break;
         mess->SetBufferOffset(bufcur+len);
      }
      if (mess->What() == kMESS_ANY) {
          s->Send(" 0 1 2 3 4 5 6 7 8 9 10 11 12");
      }
      delete mess; mess = 0;
   }

   // Close the socket.
   s->Close();

   return 0;
