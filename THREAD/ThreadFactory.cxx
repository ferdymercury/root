//*CMZ :  2.23/12 26/12/99  02.03.07  by  Fons Rademakers
//*CMZ :  2.00/00 19/11/97  01.24.05  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Victor Perev
//*-- Author :    Fons Rademakers   01/07/97

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
// TThreadFactory                                                       //
//                                                                      //
// This ABC is a factory for thread components. Depending on which      //
// factory is active one gets either Posix, Solaris or WinNT threads.   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TThreadFactory.h"

TThreadFactory *gThreadFactory = 0;

ClassImp(TThreadFactory)

//______________________________________________________________________________
TThreadFactory::TThreadFactory(const char *name, const char *title)
               : TNamed(name, title)
{
   // TThreadFactory ctor only called by derived classes.
}
