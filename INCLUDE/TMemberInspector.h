//*CMZ :  2.23/03 27/09/99  10.59.41  by  Rene Brun
//*CMZ :  1.03/09 05/12/97  18.48.44  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/07/96

#ifndef ROOT_TMemberInspector
#define ROOT_TMemberInspector

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
// TMemberInspector                                                     //
//                                                                      //
// Abstract base class for accessing the datamembers of a class.        //
// Classes derived from this class can be given as argument to the      //
// ShowMembers() methods of ROOT classes. This feature facilitates      //
// the writing of class browsers and inspectors.                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TObject.h"


class TClass;


class TMemberInspector {

public:
   TMemberInspector() { }
   virtual ~TMemberInspector() { }

   virtual void Inspect(TClass *cl, const char *parent, const char *name, void *addr) = 0;

   ClassDef(TMemberInspector,0)  //ABC for inspecting class data members
};

#endif
