//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author :    Valery Fine(fine@mail.cern.ch)   05/08/98
// $Id: TFileSet.h,v 1.5 1999/03/11 00:34:44 perev Exp $
// $Log: TFileSet.h,v $
// Revision 1.5  1999/03/11 00:34:44  perev
// Tbase in new maker schema
//
// Revision 1.4  1998/12/26 21:40:38  fisyak
// Add Id and Log
//

#ifndef ROOT_TFileSet
#define ROOT_TFileSet

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TFileSet                                                           //
//                                                                      //
// TFileSet class is a class to convert the                           //
//      "native file system structure"                                  //
// into an instance of the TDataSet class                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TDataSet.h"
#include "TString.h"

class TFileSet : public TDataSet
{
 public:
    TFileSet();
    TFileSet(const TString &dirname, const Char_t *filename=0,Bool_t expand=kTRUE);
    virtual ~TFileSet();
    virtual Long_t HasData() const;
    virtual Bool_t IsEmpty() const;
    virtual Bool_t IsFolder();
    ClassDef(TFileSet,1)
};

#endif
