//*CMZ :  2.23/12 26/01/2000  09.41.47  by  Rene Brun
//*CMZ :  2.00/00 08/03/98  00.13.26  by  Fons Rademakers
//*CMZ :  1.03/09 15/12/97  12.40.58  by  Rene Brun
//*-- Author :    Rene Brun   13/10/97
#ifndef ROOT_TSystemDirectory
#define ROOT_TSystemDirectory

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
   TSystemDirectory(const char *dirname, const char *path);

   virtual ~TSystemDirectory();

   virtual Bool_t IsFolder() { return kTRUE; }

   virtual void   Browse(TBrowser *b);
   virtual void   Edit() { }
   virtual void   SetDirectory(const char *name); // *MENU*

   ClassDef(TSystemDirectory,0)  //A system directory
};

#endif

