//*CMZ :  2.00/00 05/03/98  18.02.38  by  Fons Rademakers
//*CMZ :  1.03/09 05/12/97  13.20.51  by  Fons Rademakers
//*-- Author :    Rene Brun   05/03/95

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

#include "TRealData.h"
#include "TDataMember.h"
#include "TClass.h"


ClassImp(TRealData)

//______________________________________________________________________________
//
//  The TRealData class manages the effective list of all data members
//  for a given class. For example for an object of class TLine that inherits
//  from TObject and TAttLine, the TRealData object for a line contains the
//  complete list of all data members of the 3 classes.
//
//  The list of TRealData members in TClass is built when functions like
//  object.Inspect or object.DrawClass are called.

//______________________________________________________________________________
TRealData::TRealData() : TObject()
{
//*-*-*-*-*-*-*-*-*-*-*RealData default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

}

//______________________________________________________________________________
TRealData::TRealData(const char *name, Int_t offset, TDataMember *datamember)
            : TObject()
{
//*-*-*-*-*-*-*-*-*-*Constructor to define one persistent data member*-*-*-*-*
//*-*                ================================================
//*-* datamember is the pointer to the data member descriptor.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   fDataMember = datamember;
   fThisOffset = offset;
   fName = name;
}

//______________________________________________________________________________
TRealData::~TRealData()
{
//*-*-*-*-*-*-*-*-*-*-*RealData default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =============================

}

//______________________________________________________________________________
void TRealData::WriteRealData(void *, char *&)
{
//*-*-*-*-*Write one persistent data member on output buffer*-*-*-*-*-*-*-*
//*-*      =================================================
//*-* pointer points to the current persistent data member
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*
}
