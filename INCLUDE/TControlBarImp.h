//*CMZ :  2.00/08 26/05/98  08.20.37  by  Fons Rademakers
//*CMZ :  2.00/00 27/02/98  00.11.40  by  Fons Rademakers
//*CMZ :  0.90/01 05/11/96  19.41.11  by  Fons Rademakers
//*-- Author :    Nenad Buncic   20/02/96

#ifndef ROOT_TControlBarImp
#define ROOT_TControlBarImp

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

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// TControlBarImp                                                             //
//                                                                            //
// ABC describing GUI independent control bar (see TControlBar)               //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif


class TControlBar;


class TControlBarImp {

protected:
   TControlBar *fControlBar; //TControlBar associated with this implementation
   Int_t        fXpos;       //Initial x position
   Int_t        fYpos;       //Initial y position

public:
   TControlBarImp(TControlBar *c, const char * = "") : fControlBar(c) { }
   TControlBarImp(TControlBar *c, const char *, Int_t, Int_t) : fControlBar(c) { }
   virtual ~TControlBarImp() { }

   virtual TControlBar *GetControlBar() { return fControlBar; }

   virtual void Create() { }
   virtual void Hide() { }
   virtual void Show() { }

   ClassDef(TControlBarImp,0)  //GUI independent controlbar abc
};

#endif
