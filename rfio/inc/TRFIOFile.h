//*CMZ :  2.22/10 22/07/99  20.05.46  by  Fons Rademakers
//*CMZ :  2.22/01 15/04/99  17.51.47  by  Fons Rademakers
//*CMZ :  2.21/03 20/01/99  11.38.44  by  Fons Rademakers
//*-- Author :    Fons Rademakers   20/01/99

#ifndef ROOT_TRFIOFile
#define ROOT_TRFIOFile

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
// TRFIOFile                                                            //
//                                                                      //
// A TRFIOFile is like a normal TFile except that it reads and writes   //
// its data via a rfiod server.                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TFile
#include "TFile.h"
#endif
#ifndef ROOT_TUrl
#include "TUrl.h"
#endif


class TRFIOFile : public TFile {

private:
   TUrl      fUrl;        //URL of file
   Seek_t    fOffset;     //seek offet

   TRFIOFile() : fUrl("dummy") { }

   // Interface to basic system I/O routines
   Int_t  SysOpen(const char *pathname, Int_t flags, UInt_t mode);
   Int_t  SysClose(Int_t fd);
   Int_t  SysRead(Int_t fd, void *buf, Int_t len);
   Int_t  SysWrite(Int_t fd, const void *buf, Int_t len);
   Seek_t SysSeek(Int_t fd, Seek_t offset, Int_t whence);
   Int_t  SysSync(Int_t) { /* no fsync for RFIO */ return 0; }

public:
   TRFIOFile(const char *url, Option_t *option="", const Text_t *ftitle="", Int_t compress=1);
   ~TRFIOFile();

   ClassDef(TRFIOFile,1)  //A ROOT file that reads/writes via a rfiod server
};

#endif
