//*CMZ :  1.03/09 05/12/97  16.17.44  by  Fons Rademakers
//*-- Author :    Rene Brun   26/06/96

#ifndef ROOT_TSystemFile
#define ROOT_TSystemFile

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
        TSystemFile(const Text_t *filename, const Text_t *dirname);
        virtual ~TSystemFile();
        virtual void     Browse(TBrowser *b);
        virtual void     Edit(); // *MENU*

        ClassDef(TSystemFile,0)  //A system file
};

#endif

