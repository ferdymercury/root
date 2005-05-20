// @(#)root/alien:$Name:  $:$Id: TAlienResult.h,v 1.2 2004/10/01 12:45:23 jgrosseo Exp $
// Author: Fons Rademakers   3/1/2002

/*************************************************************************
 * Copyright (C) 1995-2002, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT_TAlienResult
#define ROOT_TAlienResult

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TAlienResult                                                         //
//                                                                      //
// Class defining interface to a Alien result set.                      //
// Objects of this class are created by TGrid methods.                  //
//                                                                      //
// Related classes are TAlien.                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGridResult
#include "TGridResult.h"
#endif

class TAlienResult : public TGridResult {
public:
   void DumpResult();

   ClassDef(TAlienResult,0)  // Alien query result set
};

#endif
