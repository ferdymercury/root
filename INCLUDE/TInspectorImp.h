//*CMZ :  2.24/05 08/05/2000  17.21.23  by  Fons Rademakers
//*-- Author :    Fons Rademakers   07/05/2000

#ifndef ROOT_TInspectorImp
#define ROOT_TInspectorImp

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

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// TInspectorImp                                                              //
//                                                                            //
// ABC describing GUI independent object inspector (abstration mainly needed  //
// for Win32. On X11 systems it currently uses a standard TCanvas).           //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

class TObject;


class TInspectorImp {

public:
   TInspectorImp() { }
   TInspectorImp(const TObject *, UInt_t, UInt_t) { }
   virtual ~TInspectorImp() { }

   virtual void Hide() { }
   virtual void Show() { }

   ClassDef(TInspectorImp,0)  //GUI independent inspector abc
};

#endif
