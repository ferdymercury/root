//*CMZ :  2.23/10 26/11/99  09.16.44  by  Rene Brun
//*CMZ :  2.23/09 25/11/99  18.20.05  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/11/99

#ifndef ROOT_TSQLResult
#define ROOT_TSQLResult

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
// TSQLResult                                                           //
//                                                                      //
// Abstract base class defining interface to a SQL query result.        //
// Objects of this class are created by TSQLServer methods.             //
//                                                                      //
// Related classes are TSQLServer and TSQLRow.                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif

class  TSQLRow;


class TSQLResult : public TObject {

protected:
   Int_t    fRowCount;   // number of rows in result

   TSQLResult() { }

public:
   virtual ~TSQLResult() { }

   virtual void        Close(Option_t *option="") = 0;
   virtual Int_t       GetFieldCount() = 0;
   virtual const char *GetFieldName(Int_t field) = 0;
   Int_t               GetRowCount() const { return fRowCount; }
   virtual TSQLRow    *Next() = 0;

   ClassDef(TSQLResult,0)  // SQL query result
};

#endif
