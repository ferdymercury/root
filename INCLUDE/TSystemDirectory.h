//*CMZ :  2.00/00 08/03/98  00.13.26  by  Fons Rademakers
//*CMZ :  1.03/09 15/12/97  12.40.58  by  Rene Brun
//*-- Author :    Rene Brun   13/10/97
#ifndef ROOT_TSystemDirectory
#define ROOT_TSystemDirectory

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
// TSystemDirectory                                                     //
//                                                                      //
// Describes an Operating System directory for the browser.             //
//                                                                      //
// Author: Christian Bormann  30/09/97                                  //
//         http://www.ikf.physik.uni-frankfurt.de/~bormann/             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TSystemFile
#include "TSystemFile.h"
#endif

class TOrdCollection;


class TSystemDirectory : public TSystemFile {

private:
   TOrdCollection *fDirsInBrowser;
   TOrdCollection *fFilesInBrowser;

   Bool_t             IsDirectory(const char* name);
   TSystemDirectory  *FindDirObj(const char *name);
   TSystemFile       *FindFileObj(const char *name, const char *dir);

public:
   TSystemDirectory();
   TSystemDirectory(const Text_t *dirname, const Text_t *path);

   virtual ~TSystemDirectory();

   virtual Bool_t IsFolder() { return kTRUE; }

   virtual void   Browse(TBrowser *b);
   virtual void   Edit() { }
   virtual void   SetDirectory(Text_t *name); // *MENU*

   ClassDef(TSystemDirectory,0)  //A system directory
};

#endif

