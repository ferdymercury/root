//*CMZ :  2.24/01 31/03/2000  08.46.15  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author :    Valery Fine(fine@mail.cern.ch)   05/08/98

#ifndef ROOT_TFileSet
#define ROOT_TFileSet

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TFileSet                                                             //
//                                                                      //
// TFileSet class is a class to convert the                             //
//      "native file system structure"                                  //
// into an instance of the TDataSet class                               //
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
