//*CMZ :  2.21/07 19/02/99  11.07.10  by  Fons Rademakers
//*CMZ :  2.21/03 15/01/99  18.37.02  by  Fons Rademakers
//*CMZ :  2.21/01 11/01/99  16.37.57  by  Fons Rademakers
//*CMZ :  2.20/00 08/11/98  11.43.55  by  Rene Brun
//*CMZ :  2.00/11 17/08/98  16.26.04  by  Rene Brun
//*CMZ :  2.00/10 28/07/98  10.50.05  by  Fons Rademakers
//*CMZ :  2.00/08 25/05/98  22.48.59  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  19.37.47  by  Fons Rademakers
//*-- Author :    Rene Brun   28/11/94

#ifndef ROOT_TFile
#define ROOT_TFile

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
// TFile                                                                //
//                                                                      //
// ROOT file.                                                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDirectory
#include "TDirectory.h"
#endif

class TFree;


class TFile : public TDirectory {

protected:
   Int_t       fD;                //File descriptor
   Seek_t      fBEGIN;            //First used byte in file
   Seek_t      fEND;              //Last used byte in file
   Int_t       fVersion;          //File format version
   Int_t       fCompress;         //(=1 file is compressed, 0 otherwise)
   TString     fOption;           //File options
   Char_t      fUnits;            //Number of bytes for file pointers
   Seek_t      fSeekFree;         //Location on disk of free segments structure
   Int_t       fNbytesFree;       //Number of bytes for free segments structure
   Int_t       fWritten;          //Number of objects written so far
   Double_t    fSumBuffer;        //Sum of buffer sizes of objects written so far
   Double_t    fSum2Buffer;       //Sum of squares of buffer sizes of objects written so far
   TList      *fFree;             //Free segments linked list table
   Double_t    fBytesWrite;       //Number of bytes written to this file
   Double_t    fBytesRead;        //Number of bytes read from this file

   static Double_t fgBytesWrite;    //Number of bytes written by all TFile objects
   static Double_t fgBytesRead;     //Number of bytes read by all TFile objects

   static const Int_t  kBegin;
   static const Char_t kUnits;

   void Init(Bool_t create);

   // Interface to basic system I/O routines
   virtual Int_t  SysOpen(const char *pathname, Int_t flags, UInt_t mode) const;
   virtual Int_t  SysClose(Int_t fd) const;
   virtual Int_t  SysRead(Int_t fd, void *buf, Int_t len) const;
   virtual Int_t  SysWrite(Int_t fd, const void *buf, Int_t len) const;
   virtual Seek_t SysSeek(Int_t fd, Seek_t offset, Int_t whence) const;
   virtual Int_t  SysSync(Int_t fd) const;

private:
   TFile(const TFile &);            //Files cannot be copied
   void operator=(const TFile &);

public:
   enum ERelativeTo { kBeg = 0, kCur = 1, kEnd = 2 };

   TFile();
   TFile(const Text_t *fname, Option_t *option="", const Text_t *ftitle="", Int_t compress=1);
   virtual ~TFile();
   virtual void      Close(Option_t *option=""); // *MENU*
   virtual void      Copy(TObject &) { MayNotUse("Copy(TObject &)"); }
   virtual void      Delete(const Text_t *namecycle="");
   virtual void      Draw(Option_t *option="");
   virtual void      FillBuffer(char *&buffer);
   virtual void      Flush() const;
   Int_t             GetBestBuffer();
   Int_t             GetCompressionLevel() {return fCompress;}
   Float_t           GetCompressionFactor();
   virtual Seek_t    GetEND() {return fEND;}
   Int_t             GetFd() const { return fD; }
   TList            *GetListOfFree() {return fFree;}
   virtual Int_t     GetNfree() {return fFree->GetSize();}
   Option_t         *GetOption() const { return fOption.Data();}
   Double_t          GetBytesRead() const { return fBytesRead; }
   Double_t          GetBytesWritten() const { return fBytesWrite; }
   Int_t             GetVersion() const { return fVersion; }
   virtual Bool_t    IsOpen() const;
   virtual void      ls(Option_t *option="");
   virtual void      MakeFree(Seek_t first, Seek_t last);
   virtual void      Map(); // *MENU*
   virtual void      Paint(Option_t *option="");
   virtual void      Print(Option_t *option="");
   virtual Bool_t    ReadBuffer(char *buf, int len);
   virtual void      ReadFree();
   virtual void      Recover();
   virtual void      Seek(Seek_t offset, ERelativeTo pos = kBeg);
   virtual void      SetCompressionLevel(Int_t level=1);
   virtual void      SetEND(Seek_t last) {fEND = last;}
   virtual void      SetOption(Option_t *option=">") {fOption = option;}
   virtual Int_t     Sizeof() const;
   void              SumBuffer(Int_t bufsize);
   virtual Bool_t    WriteBuffer(const char *buf, int len);
   virtual void      Write(const Text_t *name=0, Int_t opt=0, Int_t bufsiz=0);
   virtual void      WriteFree();
   virtual void      WriteHeader();

   static TFile     *Open(const Text_t *name, Option_t *option="",
                          const Text_t *ftitle="", Int_t compress=1);

   static Double_t   GetFileBytesRead();
   static Double_t   GetFileBytesWritten();

   static void       SetFileBytesRead(Double_t bytes=0);
   static void       SetFileBytesWritten(Double_t bytes=0);

   ClassDef(TFile,1)  //ROOT file
};

R__EXTERN TFile   *gFile;

#endif

