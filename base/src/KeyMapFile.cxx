//*CMZ :  2.23/12 26/01/2000  09.41.49  by  Rene Brun
//*CMZ :  1.02/00 23/07/97  18.41.34  by  Rene Brun
//*-- Author :    Rene Brun   23/07/97

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
TKeyMapFile::TKeyMapFile(const char *name, const char *classname, TMapFile *mapfile)
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
