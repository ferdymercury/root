//*CMZ :  2.23/10 26/11/99  09.16.15  by  Rene Brun
//*CMZ :  2.23/09 25/11/99  18.20.22  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/11/99

#ifndef ROOT_TSQLRow
#define ROOT_TSQLRow

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
// TSQLRow                                                              //
//                                                                      //
// Abstract base class defining interface to a row of a SQL query       //
// result. Objects of this class are created by TSQLResult methods.     //
//                                                                      //
// Related classes are TSQLServer and TSQLResult.                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif


class TSQLRow : public TObject {

protected:
   TSQLRow() { }

public:
   virtual ~TSQLRow() { }

   virtual void        Close(Option_t *option="") = 0;
   virtual ULong_t     GetFieldLength(Int_t field) = 0;
   virtual const char *GetField(Int_t field) = 0;
   const char         *operator[](Int_t field) { return GetField(field); }

   ClassDef(TSQLRow,0)  // One row of an SQL query result
};

#endif
