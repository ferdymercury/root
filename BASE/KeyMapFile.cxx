//*CMZ :  1.02/00 23/07/97  18.41.34  by  Rene Brun
//*-- Author :    Rene Brun   23/07/97

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
// Utility class for browsing TMapFile objects.                         //
// When the browser is invoked for a TMapFile, a TKeyMapFile object     //
// is created for each object in the mapped file.                       //
// When a TKeyMapFile object is clicked in the browser, a new copy      //
// of this object is copied into the local directory and the action     //
// corresponding to object->Browse is executed (typically Draw).        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TKeyMapFile.h"
#include "TDirectory.h"
#include "TMapFile.h"
#include "TBrowser.h"

ClassImp(TKeyMapFile)

//______________________________________________________________________________
TKeyMapFile::TKeyMapFile() : TNamed()
{
}

//______________________________________________________________________________
TKeyMapFile::TKeyMapFile(const Text_t *name, const Text_t *classname, TMapFile *mapfile)
      : TNamed(name,classname)
{
   fMapFile = mapfile;
}

//______________________________________________________________________________
void TKeyMapFile::Browse(TBrowser *b)
{
    TObject *obj = gDirectory->Get((char*)GetName());
    delete obj;
    obj = fMapFile->Get(GetName(),0);

    if( b && obj )
        obj->Browse( b );
}
