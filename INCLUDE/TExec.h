//*CMZ :  2.23/11 28/12/99  14.56.44  by  Rene Brun
//*-- Author :    Rene Brun   29/12/99

#ifndef ROOT_TExec
#define ROOT_TExec

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
// TExec                                                                //
//                                                                      //
// A TExec object can execute a CINT command.                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
#include "TNamed.h"
#endif


class TExec : public TNamed {

public:

        TExec();
        TExec(const char *name, const char *command);
        TExec(const TExec &text);
        virtual ~TExec();
        virtual void     Exec(const char *command="");
        virtual void     Paint(Option_t *option="");
        virtual void     SavePrimitive(ofstream &out, Option_t *option);

        ClassDef(TExec,1)  //To execute a CINT command
};

#endif

