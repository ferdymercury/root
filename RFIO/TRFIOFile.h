//*CMZ :  2.21/03 20/01/99  11.38.44  by  Fons Rademakers
//*-- Author :    Fons Rademakers   20/01/99

#ifndef ROOT_TRFIOFile
#define ROOT_TRFIOFile

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

   TRFIOFile() : fUrl("dummy") { }

   // Interface to basic system I/O routines
   Int_t  SysOpen(const char *pathname, Int_t flags, UInt_t mode) const;
   Int_t  SysClose(Int_t fd) const;
   Int_t  SysRead(Int_t fd, void *buf, Int_t len) const;
   Int_t  SysWrite(Int_t fd, const void *buf, Int_t len) const;
   Seek_t SysSeek(Int_t fd, Seek_t offset, Int_t whence) const;

public:
   TRFIOFile(const char *url, Option_t *option="", const Text_t *ftitle="", Int_t compress=1);

   ClassDef(TRFIOFile,1)  //A ROOT file that reads/writes via a rfiod server
};

#endif
