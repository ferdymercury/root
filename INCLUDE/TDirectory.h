//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/09 07/11/99  02.43.34  by  Fons Rademakers
//*CMZ :  2.21/01 11/01/99  16.37.56  by  Fons Rademakers
//*CMZ :  2.20/04 09/12/98  19.25.20  by  Rene Brun
//*CMZ :  2.00/11 09/08/98  10.59.45  by  Rene Brun
//*CMZ :  2.00/10 28/07/98  10.44.07  by  Fons Rademakers
//*-- Author :    Rene Brun   21/11/94

#ifndef ROOT_TDirectory
#define ROOT_TDirectory

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

          Bool_t cd1(const char *path);
   static Bool_t Cd1(const char *path);

private:
   TDirectory(const TDirectory &directory);  //Directories cannot be copied
   void operator=(const TDirectory &);

public:
   // TDirectory status bits
   enum { kCloseDirectory = BIT(7) };

   TDirectory();
   TDirectory(const char *name, const char *title, Option_t *option="");
   virtual ~TDirectory();
   virtual void        Append(TObject *obj);
           Int_t       AppendKey(TKey *key);
   virtual void        Browse(TBrowser *b);
           void        Build();
   virtual void        Clear(Option_t *option="");
   virtual void        Close(Option_t *option="");
   virtual void        Copy(TObject &) { MayNotUse("Copy(TObject &)"); }
   virtual Bool_t      cd(const char *path = 0);
   virtual void        DeleteAll(Option_t *option="");
   virtual void        Delete(const char *namecycle="");
   virtual void        Draw(Option_t *option="");
   virtual void        FillBuffer(char *&buffer);
   virtual TObject    *Get(const char *namecycle);
   virtual TFile      *GetFile() {return fFile;}
   virtual TKey       *GetKey(const char *name, const Short_t cycle=9999);
   TList              *GetList() const { return fList; }
   TList              *GetListOfKeys() const { return fKeys; }
   TObject            *GetMother() const { return fMother; }
   virtual Int_t       GetNkeys() {return fKeys->GetSize();}
   virtual Seek_t      GetSeekDir() { return fSeekDir; }
   virtual Seek_t      GetSeekParent() { return fSeekParent; }
   virtual Seek_t      GetSeekKeys() { return fSeekKeys; }
   virtual const char *GetPath() const;
   Bool_t              IsFolder() { return kTRUE; }
   Bool_t              IsModified() { return fModified; }
   Bool_t              IsWritable() { return fWritable; }
   virtual void        ls(Option_t *option="");
   virtual TDirectory *mkdir(const char *name, const char *title="");
   virtual void        Paint(Option_t *option="");
   virtual void        Print(Option_t *option="");
   virtual void        Purge(Short_t nkeep=1);
   virtual void        pwd() const;
   virtual void        ReadAll(Option_t *option="");
   virtual void        ReadKeys();
   virtual void        RecursiveRemove(TObject *obj);
   virtual void        Save();
   virtual void        SaveSelf(Bool_t force = kFALSE);
   void                SetModified() {fModified = kTRUE;}
   void                SetMother(TObject *mother) {fMother = mother;}
   virtual Int_t       Sizeof() const;
   virtual void        Write(const char *name=0, Int_t opt=0, Int_t bufsiz=0);
   virtual void        WriteDirHeader();
   virtual void        WriteKeys();

   static Bool_t       Cd(const char *path);
   static void         DecodeNameCycle(const char *namecycle, char *name, Short_t &cycle);
   static void         EncodeNameCycle(char *buffer, const char *name, Short_t cycle);

   ClassDef(TDirectory,1)  //Describe directory structure in memory
};

R__EXTERN TDirectory   *gDirectory;

#endif

