//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  1.03/09 05/12/97  16.17.44  by  Fons Rademakers
//*-- Author :    Rene Brun   26/06/96

#ifndef ROOT_TSystemFile
#define ROOT_TSystemFile

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
// TSystemFile                                                          //
//                                                                      //
// Describes an Operating System file for the browser.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TBrowser;

class TSystemFile : public TNamed {

public:
        TSystemFile();
        TSystemFile(const char *filename, const char *dirname);
        virtual ~TSystemFile();
        virtual void     Browse(TBrowser *b);
        virtual void     Edit(); // *MENU*

        ClassDef(TSystemFile,0)  //A system file
};

#endif

