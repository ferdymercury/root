//*CMZ :  2.23/10 30/11/99  18.08.38  by  Fons Rademakers
//*-- Author :    Fons Rademakers   30/11/99

#ifndef ROOT_TTreeResult
#define ROOT_TTreeResult

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
// TTreeResult                                                          //
//                                                                      //
// Class defining interface to a TTree query result with the same       //
// interface as for SQL databases. A TTreeResult is returned by         //
// TTree::Query() (actually TTreePlayer::Query()).                      //
//                                                                      //
// Related classes are TTreeRow.                                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TSQLResult
#include "TSQLResult.h"
#endif

class TString;
class TObjArray;


class TTreeResult : public TSQLResult {

private:
   Int_t       fColumnCount;   // number of columns in result
   TString    *fFields;        // array containing field strings
   TObjArray  *fResult;        // query result (TTreeRow objects)
   Int_t       fNextRow;       // row iterator

   Bool_t  IsValid(Int_t field);

public:
   TTreeResult(Int_t nfields);
   virtual ~TTreeResult();

   void        AddField(Int_t field, const char *fieldname);
   void        AddRow(TSQLRow *row);

   void        Close(Option_t *option="");
   Int_t       GetFieldCount();
   const char *GetFieldName(Int_t field);
   TSQLRow    *Next();

   ClassDef(TTreeResult,0)  // TTree query result
};

#endif
