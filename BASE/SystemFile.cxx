//*CMZ :  2.00/05 15/04/98  18.32.00  by  Rene Brun
//*CMZ :  2.00/00 08/03/98  00.26.26  by  Fons Rademakers
//*CMZ :  1.03/09 05/12/97  16.17.44  by  Fons Rademakers
//*-- Author :    Rene Brun   26/06/96

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
// TSystemFile                                                          //
//                                                                      //
// A TSystemFile describes an operating system file.                    //
// The information is used by the browser (see TBrowser).               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TSystemFile.h"
#include "TBrowser.h"
#include "TSystem.h"
#include "TEnv.h"


ClassImp(TSystemFile)

//______________________________________________________________________________
TSystemFile::TSystemFile() : TNamed()
{
   // TSystemFile default constructor

}

//______________________________________________________________________________
TSystemFile::TSystemFile(const Text_t *filename, const Text_t *dirname)
   : TNamed(filename, dirname)
{
   // TSystemFile normal constructor

   SetBit(kCanDelete);
}

//______________________________________________________________________________
TSystemFile::~TSystemFile()
{
   // Delete TSystemFile object.

}

//______________________________________________________________________________
void TSystemFile::Browse(TBrowser *b)
{
   // Execute default action for this system file (action is specified
   // in the $HOME/.root.mimes or $ROOTSYS/icons/root.mimes file.

#ifndef WIN32
   if (b)
      b->ExecuteDefaultAction(this);
#else
   Edit();  // Temporary unless the "default action" will be done
#endif
}

//______________________________________________________________________________
void TSystemFile::Edit()
{
   // Invoke text editor on this file

#ifndef _WIN32
   const char *ed = gEnv->GetValue("Editor", "vi");
   Char_t *cmd = new Char_t[strlen(ed)+strlen(GetName()) + 50];
   if (!strcmp(ed, "vi"))
      sprintf(cmd, "xterm -e vi %s &", GetName());
   else
      sprintf(cmd, "%s %s &", ed, GetName());
#else
   const char *ed = gEnv->GetValue("Editor", "notepad");
   Char_t *cmd = new Char_t[strlen(ed)+strlen(GetName()) + 50];
   sprintf(cmd, "start %s %s", ed, GetName());
#endif
   gSystem->Exec(cmd);

   delete [] cmd;
}
