//*CMZ :  2.23/10 30/11/99  18.08.04  by  Fons Rademakers
//*-- Author :    Fons Rademakers   30/11/99

#ifndef ROOT_TTreeRow
#define ROOT_TTreeRow

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
// TTreeRow                                                             //
//                                                                      //
// Class defining interface to a row of a TTree query result.           //
// Objects of this class are created by TTreeResult methods.            //
//                                                                      //
// Related classes are TTreeResult.                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TSQLRow
#include "TSQLRow.h"
#endif

class TString;


class TTreeRow : public TSQLRow {

friend class TTreeResult;

private:
   Int_t        fColumnCount;  // number of columns in row
   TString     *fFields;       // array containing result strings
   TTreeRow    *fOriginal;     // pointer to original row

   Bool_t  IsValid(Int_t field);
   TTreeRow(TSQLRow *original);

public:
   TTreeRow(Int_t nfields);
   virtual ~TTreeRow();

   void        AddField(Int_t field, const char *fieldvalue);

   void        Close(Option_t *option="");
   ULong_t     GetFieldLength(Int_t field);
   const char *GetField(Int_t field);

   ClassDef(TTreeRow,0)  // One row of an TTree query result
};

#endif
