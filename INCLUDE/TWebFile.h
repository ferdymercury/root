//*CMZ :  2.23/03 16/09/99  23.50.44  by  Fons Rademakers
//*CMZ :  1.00/01 04/03/97  20.22.38  by  Fons Rademakers
//*-- Author :    Fons Rademakers   17/01/97

#ifndef ROOT_TWebFile
#define ROOT_TWebFile

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
// TWebFile                                                             //
//                                                                      //
// A TWebFile is like a normal TFile except that it reads its data      //
// via a (slightly modified) apache web server. A TWebFile is a         //
// read-only file.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TFile
#include "TFile.h"
#endif
#ifndef ROOT_TUrl
#include "TUrl.h"
#endif


class TWebFile : public TFile {

private:
   TUrl     fUrl;        // URL of file
   Seek_t   fOffset;     // seek offset

   void Init(Bool_t);

public:
   TWebFile(const char *url);
   TWebFile(TUrl url);
   virtual ~TWebFile() { }

   Bool_t  IsOpen() const;
   Bool_t  ReadBuffer(char *buf, int len);
   void    Seek(Seek_t offset, ERelativeTo pos = kBeg);

   ClassDef(TWebFile,1)  //A ROOT file that reads via a http server
};

#endif
