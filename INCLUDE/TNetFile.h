//*CMZ :  2.24/01 15/02/2000  01.52.52  by  Fons Rademakers
//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.22/01 15/04/99  18.04.45  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  19.41.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   14/08/97

#ifndef ROOT_TNetFile
#define ROOT_TNetFile

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
class TNetFile;

typedef Int_t (*SecureAuth_t)(TNetFile *);


class TNetFile : public TFile {

friend Int_t SRPAuthenticate(TNetFile *);

private:
   TUrl      fUrl;        //URL of file
   TString   fUser;       //remote user name
   Seek_t    fOffset;     //seek offset
   TSocket  *fSocket;     //connection to rootd server

   static char         *fgUser;
   static char         *fgPasswd;
   static SecureAuth_t  fgSecAuthHook;

   TNetFile() : fUrl("dummy") { fSocket = 0; }
   Bool_t Authenticate();
   Bool_t CheckNetrc(char *&user, char *&passwd);
   void   Init(Bool_t create);
   void   Print(Option_t *option);
   void   PrintError(const char *where, Int_t err);
   Int_t  Recv(Int_t &status, EMessageTypes &kind);
   char  *GetUser();
   char  *GetPasswd(const char *prompt = "Password: ");

public:
   TNetFile(const char *url, Option_t *option="", const char *ftitle="", Int_t compress=1);
   virtual ~TNetFile();

   void    Close(Option_t *option=""); // *MENU*
   void    Flush();
   Bool_t  IsOpen() const;
   Bool_t  ReadBuffer(char *buf, int len);
   Bool_t  WriteBuffer(const char *buf, int len);
   void    Seek(Seek_t offset, ERelativeTo pos = kBeg);

   static void SetUser(const char *user);
   static void SetPasswd(const char *passwd);
   static void SetSecureAuthHook(SecureAuth_t func);

   ClassDef(TNetFile,1)  //A ROOT file that reads/writes via a rootd server
};

#endif
