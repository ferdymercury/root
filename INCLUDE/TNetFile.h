//*CMZ :  2.22/01 15/04/99  18.04.45  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  19.41.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   14/08/97

#ifndef ROOT_TNetFile
#define ROOT_TNetFile

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
// TNetFile                                                             //
//                                                                      //
// A TNetFile is like a normal TFile except that it reads and writes    //
// its data via a rootd server.                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TFile
#include "TFile.h"
#endif
#ifndef ROOT_TUrl
#include "TUrl.h"
#endif
#ifndef ROOT_MessageTypes
#include "MessageTypes.h"
#endif

class TSocket;


class TNetFile : public TFile {

private:
   TUrl      fUrl;        //URL of file
   TString   fUser;       //remote user name
   Seek_t    fOffset;     //seek offset
   TSocket  *fSocket;     //connection to rootd server

   static char *fgUser;
   static char *fgPasswd;

   TNetFile() : fUrl("dummy") { fSocket = 0; }
   Bool_t Authenticate();
   Bool_t CheckNetrc(char *&user, char *&passwd);
   void   Init(Bool_t create);
   void   Print(Option_t *option);
   void   PrintError(const char *where, Int_t err);
   Int_t  Recv(Int_t &status, EMessageTypes &kind);
   char  *GetUser();
   char  *GetPasswd();

public:
   TNetFile(const char *url, Option_t *option="", const Text_t *ftitle="", Int_t compress=1);
   virtual ~TNetFile();

   void    Close(Option_t *option=""); // *MENU*
   void    Flush();
   Bool_t  IsOpen() const;
   Bool_t  ReadBuffer(char *buf, int len);
   Bool_t  WriteBuffer(const char *buf, int len);
   void    Seek(Seek_t offset, ERelativeTo pos = kBeg);

   static void SetUser(const char *user);
   static void SetPasswd(const char *passwd);

   ClassDef(TNetFile,1)  //A ROOT file that reads/writes via a rootd server
};

#endif
