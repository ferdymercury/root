//*CMZ :  2.00/00 08/03/98  00.58.41  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  20.11.11  by  Fons Rademakers
//*-- Author :    Christian Bormann  13/10/97

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
// TSystemDirectory                                                     //
//                                                                      //
// Describes an Operating System directory for the browser.             //
//                                                                      //
// Author: Christian Bormann  30/09/97                                  //
//         http://www.ikf.physik.uni-frankfurt.de/~bormann/             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TSystemDirectory.h"
#include "TSystem.h"
#include "TBrowser.h"
#include "TOrdCollection.h"



ClassImp(TSystemDirectory)

//______________________________________________________________________________
TSystemDirectory::TSystemDirectory()
{
   // Create a system directory object.

   fDirsInBrowser  = 0;
   fFilesInBrowser = 0;
}

//______________________________________________________________________________
TSystemDirectory::TSystemDirectory(const Text_t *dirname, const Text_t *path) :
   TSystemFile(dirname, path)
{
   // Create a system directory object.

   fDirsInBrowser  = 0;
   fFilesInBrowser = 0;
}

//______________________________________________________________________________
TSystemDirectory::~TSystemDirectory()
{
   // Delete system directory object.

   delete fDirsInBrowser;
   delete fFilesInBrowser;
}

//______________________________________________________________________________
void TSystemDirectory::SetDirectory(Text_t *name)
{
   // Create a system directory object.

   SetName(name);
   SetTitle(name);
}

//______________________________________________________________________________
Bool_t TSystemDirectory::IsDirectory(const char* name)
{
   // Check if name is a directory.

   Long_t id, size, flags, modtime;
   const char *dirfile = GetTitle();

   gSystem->ChangeDirectory(dirfile);
   flags = id = size = modtime = 0;
   gSystem->GetPathInfo(name, &id, &size, &flags, &modtime);
   Int_t isdir = (Int_t)flags & 2;

   // this is a directory
   if (isdir) return kTRUE;
   return kFALSE;
}

//______________________________________________________________________________
void TSystemDirectory::Browse(TBrowser *b)
{
   // Browse OS system directories.

   // Collections to keep track of all browser objects that have been generated.
   // It's main goal is to prevent the contineous allocations of new
   // objects with the same names during browsing.
   if (!fDirsInBrowser)  fDirsInBrowser  = new TOrdCollection;
   if (!fFilesInBrowser) fFilesInBrowser = new TOrdCollection(10);

   const char *name = GetTitle();
   TSystemFile *sfile;
   TSystemDirectory *sdir;
   const char *file;

   gSystem->ChangeDirectory(name);

#ifdef WIN32
//      gSystem->Exec("explorer .");
#endif

   void *dir = gSystem->OpenDirectory(name);

   if (dir) {
      while ((file = gSystem->GetDirEntry(dir))) {
         if (!strcmp(file,".") || !strcmp(file,"..")) continue;
         if (IsDirectory(file)) {
            TString sdirname(name);
            sdirname = sdirname + "/";
            sdirname = sdirname + file;

            if ((sdir = FindDirObj(sdirname.Data())) == 0) {
               sdir = new TSystemDirectory(file, sdirname.Data());
               fDirsInBrowser->Add(sdir);
            }
            b->Add(sdir, file);
         } else {
            if ((sfile = FindFileObj(file, gSystem->WorkingDirectory())) == 0) {
               sfile = new TSystemFile(file, gSystem->WorkingDirectory());
               fFilesInBrowser->Add(sfile);
            }
            b->Add(sfile, file);
         }
      }
      gSystem->FreeDirectory(dir);
      return;
   }
}

//______________________________________________________________________________
TSystemDirectory *TSystemDirectory::FindDirObj(const char *name)
{
   // Static function that returns system directory object if it
   // exists in list, 0 otherwise.

   int size = fDirsInBrowser->GetSize();
   for (int i = 0; i < size; i++) {
      TSystemDirectory *obj = (TSystemDirectory *) fDirsInBrowser->At(i);
      if (!strcmp(name, obj->GetTitle()))
         return obj;
   }
   return 0;
}

//______________________________________________________________________________
TSystemFile *TSystemDirectory::FindFileObj(const char *name, const char *dir)
{
   // Static function that returns system file object if it exists in
   // list, 0 otherwise.

   int size = fFilesInBrowser->GetSize();
   for (int i = 0; i < size; i++) {
      TSystemFile *obj = (TSystemFile *) fFilesInBrowser->At(i);
      if (!strcmp(name, obj->GetName()) && !strcmp(dir, obj->GetTitle()))
         return obj;
   }
   return 0;
}
