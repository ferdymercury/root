//*CMZ :  2.20/04 09/12/98  19.25.20  by  Rene Brun
//*CMZ :  2.00/11 09/08/98  10.59.45  by  Rene Brun
//*CMZ :  2.00/10 28/07/98  10.44.07  by  Fons Rademakers
//*CMZ :  2.00/08 22/05/98  17.58.57  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  00.20.37  by  Fons Rademakers
//*-- Author :    Rene Brun   21/11/94

#ifndef ROOT_TDirectory
#define ROOT_TDirectory

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
// TDirectory                                                           //
//                                                                      //
// Describe directory structure in memory.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TDatime
#include "TDatime.h"
#endif

class TBrowser;
class TKey;
class TFile;


class TDirectory : public TNamed {

protected:
    Bool_t      fModified;        //true if directory has been modified
    Bool_t      fWritable;        //true if directory is writable
    TDatime     fDatimeC;         //Date and time when directory is created
    TDatime     fDatimeM;         //Date and time of last modification
    Int_t       fNbytesKeys;      //Number of bytes for the keys
    Int_t       fNbytesName;      //Number of bytes in TNamed at creation time
    Seek_t      fSeekDir;         //Location of directory on file
    Seek_t      fSeekParent;      //Location of parent directory on file
    Seek_t      fSeekKeys;        //Location of Keys record on file
    TFile       *fFile;           //pointer to current file in memory
    TObject     *fMother;         //pointer to mother of the directory
    TList       *fList;           //Pointer to objects list in memory
    TList       *fKeys;           //Pointer to keys list in memory

           Bool_t cd1(const Text_t *path);
    static Bool_t Cd1(const Text_t *path);

public:
    TDirectory();
    TDirectory(const Text_t *name, const Text_t *title, Option_t *option="");
    TDirectory(const TDirectory &directory);
    virtual ~TDirectory();
    virtual void        Append(TObject *obj);
            Int_t       AppendKey(TKey *key);
    virtual void        Browse(TBrowser *b);
            void        Build();
    virtual void        Clear(Option_t *option="");
    virtual void        Close(Option_t *option="");
    virtual void        Copy(TObject &directory);
    virtual Bool_t      cd(const Text_t *path = 0);
    virtual void        DeleteAll(Option_t *option="");
    virtual void        Delete(const Text_t *namecycle="");
    virtual void        Draw(Option_t *option="");
    virtual void        FillBuffer(char *&buffer);
    virtual TObject    *Get(const Text_t *namecycle);
    virtual TFile      *GetFile() {return fFile;}
    virtual TKey       *GetKey(const Text_t *name, const Short_t cycle=9999);
    TList              *GetList() const {return fList;}
    TList              *GetListOfKeys()   {return fKeys;}
            TObject    *GetMother() const { return fMother; }
    virtual Int_t       GetNkeys()   {return fKeys->GetSize();}
    virtual Seek_t      GetSeekDir()   {return fSeekDir;}
    virtual Seek_t      GetSeekParent()  {return fSeekParent;}
    virtual Seek_t      GetSeekKeys()   {return fSeekKeys;}
    virtual const char *GetPath() const;
            Bool_t      IsFolder() {return kTRUE;}
            Bool_t      IsModified() {return fModified;}
            Bool_t      IsWritable() {return fWritable;}
    virtual void        ls(Option_t *option="");
    virtual TDirectory *mkdir(const Text_t *name, const Text_t *title="");
    virtual void        Paint(Option_t *option="");
    virtual void        Print(Option_t *option="");
    virtual void        Purge(Short_t nkeep=1);
    virtual void        pwd() const;
    virtual void        ReadAll(Option_t *option="");
    virtual void        ReadKeys();
    virtual void        RecursiveRemove(TObject *obj);
    virtual void        Save();
    virtual void        SaveSelf(Bool_t force = kFALSE);
            void        SetModified() {fModified = kTRUE;}
            void        SetMother(TObject *mother) {fMother = mother;}
    virtual Int_t       Sizeof() const;
    virtual void        Write(const Text_t *name=0, Int_t opt=0, Int_t bufsiz=0);
    virtual void        WriteDirHeader();
    virtual void        WriteKeys();

    static Bool_t       Cd(const Text_t *path);
    static void         DecodeNameCycle(const Text_t *namecycle, Text_t *name, Short_t &cycle);
    static void         EncodeNameCycle(Text_t *buffer, const Text_t *name, Short_t cycle);

    ClassDef(TDirectory,1)  //Describe directory structure in memory
};

R__EXTERN TDirectory   *gDirectory;

#endif

