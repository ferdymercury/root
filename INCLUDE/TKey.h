//*CMZ :  2.00/09 12/06/98  11.07.05  by  Fons Rademakers
//*CMZ :  1.03/09 04/12/97  19.53.35  by  Fons Rademakers
//*-- Author :    Rene Brun   28/12/94

#ifndef ROOT_TKey
#define ROOT_TKey

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
// TKey                                                                 //
//                                                                      //
// Header description of a logical record on file.                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TDatime
#include "TDatime.h"
#endif
#ifndef ROOT_TBuffer
#include "TBuffer.h"
#endif

class TClass;
class TBrowser;

class TKey : public TNamed {

protected:
    Int_t       fVersion;        //Key version identifier
    Int_t       fNbytes;         //Number of bytes for the object on file
    Int_t       fObjlen;         //Length of uncompressed object in bytes
    TDatime     fDatime;         //Date/Time of insertion in file
    Short_t     fKeylen;         //Number of bytes for the key itself
    Short_t     fCycle;          //Cycle number
    Seek_t      fSeekKey;        //Location of object on file
    Seek_t      fSeekPdir;       //Location of parent directory on file
    TString     fClassName;      //Object Class name
    Int_t       fLeft;           //Number of bytes left in current segment
    char        *fBuffer;        //Object buffer
    TBuffer     *fBufferRef;     //Pointer to the TBuffer object

    virtual void     Create(Int_t nbytes);
    virtual void     Read(const Text_t *name) { TObject::Read(name); }

public:
    TKey();
    TKey(const Text_t *name, const Text_t *title, TClass *cl, Int_t nbytes);
    TKey(const TString &name, const TString &title, TClass *cl, Int_t nbytes);
    TKey(TObject *obj, const Text_t *name, const Int_t bufsize);
    TKey(Seek_t pointer, Int_t nbytes);
    virtual ~TKey();
    virtual void      Browse(TBrowser *b);
    virtual void      Delete(Option_t *option="");
    virtual void      DeleteBuffer();
    virtual void      FillBuffer(char *&buffer);
    virtual const Text_t *GetClassName() const {return fClassName.Data();}
    virtual char     *GetBuffer() {return fBuffer+fKeylen;}
         TBuffer     *GetBufferRef() {return fBufferRef;}
         Short_t      GetCycle();
         Short_t      GetKeep();
           Int_t      GetKeylen()  {return fKeylen;}
           Int_t      GetNbytes()  {return fNbytes;}
           Int_t      GetObjlen()  {return fObjlen;}
           Int_t      GetVersion() {return fVersion;}
    virtual Seek_t    GetSeekKey()   {return fSeekKey;}
    virtual Seek_t    GetSeekPdir()  {return fSeekPdir;}
    Bool_t            IsFolder();
    virtual void      Keep();
    virtual void      ls(Option_t *option="");
    virtual void      Print(Option_t *option="");
    virtual void      Read(TObject *obj);
    virtual TObject  *ReadObj();
    virtual void      ReadBuffer(char *&buffer);
    virtual void      ReadFile();
    virtual void      SetBuffer() { fBuffer = new char[fNbytes];}
    virtual Int_t     Sizeof() const;
    virtual void      WriteFile(Int_t cycle=1);

    ClassDef(TKey,2)  //Header description of a logical record on file
};

#endif
