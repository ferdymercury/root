//*CMZ :  0.80/00 30/07/96  14.01.11  by  Fons Rademakers
//*-- Author :    Rene Brun   05/03/95

#ifndef ROOT_TRealData
#define ROOT_TRealData

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TRealData                                                            //
//                                                                      //
// Description of persistent data members.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif

class TDataMember;


class TRealData : public TObject {

private:
   TDataMember *fDataMember;         //pointer to data member descriptor
   Int_t       fThisOffset;          //offset with the THIS object pointer
   TString     fName;                //Concatenated names of this realdata

public:
   TRealData();
   TRealData(const char *name, Int_t offset, TDataMember *datamember);
   virtual     ~TRealData();
   virtual const Text_t *GetName() const {return fName.Data();}
   TDataMember *GetDataMember() {return fDataMember;}
   Int_t       GetThisOffset() {return fThisOffset;}
   void        WriteRealData(void *pointer, char *&buffer);

   ClassDef(TRealData,0)  //Description of persistent data members
};

#endif

