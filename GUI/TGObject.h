//*CMZ :  2.00/00 04/02/98  20.15.01  by  Fons Rademakers
//*-- Author :    Fons Rademakers   27/12/97

#ifndef ROOT_TGObject
#define ROOT_TGObject

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
// TGObject                                                             //
//                                                                      //
// This class is the baseclass for all ROOT GUI widgets.                //
// The ROOT GUI components emulate the Win95 look and feel and the code //
// is based on the XClass'95 code (see Copyleft in source).             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_GuiTypes
#include "GuiTypes.h"
#endif

class TGClient;


class TGObject : public TObject {

protected:
   Handle_t    fId;                  // X11/Win32 Window identifier
   TGClient   *fClient;              // Connection to display server

public:
   TGObject() { fId = 0; fClient = 0; }
   virtual ~TGObject() { }

   Handle_t GetId() const { return fId; }
   ULong_t  Hash() { return (ULong_t) fId >> 0; }
   Bool_t   IsEqual(TObject *obj) { return fId == ((TGObject *) obj)->fId; }

   ClassDef(TGObject,0)  //ROOT GUI base class
};

#endif
