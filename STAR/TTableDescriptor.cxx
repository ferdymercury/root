//*CMZ :  2.23/12 26/01/2000  12.10.10  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine   09/08/99  (E-mail: fine@bnl.gov)
// $Id: TTableDescriptor.cxx,v 1.6 1999/12/03 20:51:27 fine Exp $
// $Log: TTableDescriptor.cxx,v $
// Revision 1.6  1999/12/03 20:51:27  fine
// change the data-member name size from 20 to 32 to be in line with dstype.h
//
// Revision 1.5  1999/09/13 13:28:27  fine
// One cast int -> uint introduced to avoid compiler warnings
//
// Revision 1.4  1999/08/13 16:35:53  fine
// The artificial restrictions for tableDescriptor have been introduced since database want that
//
// Revision 1.3  1999/08/12 18:53:49  fine
// clash between TTableDescriptor::GetSize and TTable::GetSize resolved
//
// Revision 1.2  1999/08/11 14:44:39  fine
// name clash with ROOT over enum resolved
//
// Revision 1.1  1999/08/11 00:40:11  fine
// new class TTableDescriptor
//

#include <stdlib.h>
#include "TTableDescriptor.h"
#include "TTable.h"
#include "TClass.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "Ttypes.h"

TTableDescriptor *TTableDescriptor::fgColDescriptors = 0;
TableImp(TableDescriptor)

//______________________________________________________________________________
void TTableDescriptor::Streamer(TBuffer &R__b)
{
  // This class needs a special version of Streamer because of pointers
  if (!R__b.IsReading()) R__b.WriteVersion(TTableDescriptor::IsA());
  TTable::Streamer(R__b);
}
//______________________________________________________________________________
TTableDescriptor::TTableDescriptor(const TTable *parentTable)
 : TTable("tableDescriptor",sizeof(tableDescriptor_st))
{
  SetType("tableDescriptor");
  if (parentTable) {
      SetName(parentTable->GetName());
      LearnTable(parentTable);
  }
}
//______________________________________________________________________________
TTableDescriptor::~TTableDescriptor()
{
  if (!IsZombie()) {
    for (Int_t i=0;i<GetNRows();i++) {
      Char_t *name = (Char_t *)GetColumnName(i);
      if (name) delete [] name;
      UInt_t  *indxArray = (UInt_t *)GetIndexArray(i);
      if (indxArray) delete [] indxArray;
    }
  }
}
//____________________________________________________________________________
void TTableDescriptor::LearnTable(const TTable *parentTable)
{
//
//  LearnTable() creates an array of the descriptors for elements of the row
//
//  This is to introduce an artificial restriction demanded by STAR database group
//
//    1. the name may be 19 symbols at most
//    2. the number the dimension is 2 at most
//
//  To lift this restriction one has to provide -DNORESTRICTIONS CPP symbol and
//  recompile code.
//
  if (!parentTable) {
    MakeZombie();
    return;
  }

  TClass *classPtr = parentTable->GetRowClass();
  if (!classPtr) return;

  if (!classPtr->GetListOfRealData()) classPtr->BuildRealData();
  if (!(classPtr->GetNdata())) return;

  const Char_t *types;
  Char_t *varname;

  tableDescriptor_st elementDescriptor;

  ReAllocate(classPtr->GetListOfDataMembers()->GetSize());
  Int_t columnIndex = 0;
  TIter next(classPtr->GetListOfDataMembers());
  TDataMember *member = 0;
  while ( (member = (TDataMember *) next()) ) {
    memset(&elementDescriptor,0,sizeof(tableDescriptor_st));
    varname = (Char_t *) member->GetName();
#ifdef NORESTRICTIONS
//  This is remove to introduce an artificial restriction demanded by STAR infrastructure group
                                             elementDescriptor.fColumnName = StrDup(varname);
#else
                                             elementDescriptor.fColumnName[0] = '\0';
         strncat(elementDescriptor.fColumnName,varname,sizeof(elementDescriptor.fColumnName));
#endif
    // define index
    TDataType *memberType = member->GetDataType();
                                              elementDescriptor.fTypeSize = memberType->Size();
    types = memberType->GetTypeName();
    elementDescriptor.fType = kNAN;
    if (!strcmp("float", types))              elementDescriptor.fType = kFloat;
    else if (!strcmp("int", types))           elementDescriptor.fType = kInt;
    else if (!strcmp("long", types))          elementDescriptor.fType = kLong;
    else if (!strcmp("short", types))         elementDescriptor.fType = kShort;
    else if (!strcmp("double", types))        elementDescriptor.fType = kDouble;
    else if (!strcmp("unsigned int", types))  elementDescriptor.fType = kUInt;
    else if (!strcmp("unsigned long", types)) elementDescriptor.fType = kULong ;
    else if (!strcmp("unsigned short", types))elementDescriptor.fType = kUShort;
    else if (!strcmp("unsigned char", types)) elementDescriptor.fType = kUChar;
    else if (!strcmp("char", types))          elementDescriptor.fType = kChar;

    Int_t globalIndex = 1;
    if (elementDescriptor.fType != kNAN) {
      Int_t dim = 0;
      if ( (dim = member->GetArrayDim()) ) {
                                              elementDescriptor.fDimensions = dim;
#ifdef NORESTRICTIONS
                                              elementDescriptor.fIndexArray = new UInt_t(dim);
#else
       if (UInt_t(dim) > sizeof(elementDescriptor.fIndexArray)/sizeof(UInt_t *)) {
                Error("LearnTable","Too many dimenstions - %d", dim);
                dim =  2;
       }
#endif
        for( Int_t indx=0; indx < dim; indx++ ){
                                              elementDescriptor.fIndexArray[indx] = member->GetMaxIndex(indx);
          globalIndex *= elementDescriptor.fIndexArray[indx];
        }
      }
    }
    else Error("LearnTable","Wrong data type for <%s> table",parentTable->GetType());
    elementDescriptor.fSize   =  globalIndex * (elementDescriptor.fTypeSize);
    elementDescriptor.fOffset = member->GetOffset();
    AddAt(&elementDescriptor,columnIndex); columnIndex++;
  }
}
//____________________________________________________________________________
const Int_t TTableDescriptor::GetColumnByName(const Char_t *columnName) const
{
 const tableDescriptor_st *elementDescriptor = ((TTableDescriptor *)this)->GetTable();
 Int_t i = -1;
 if (!elementDescriptor) return i;
 Int_t nRows = GetNRows();
 if (nRows) {
   for (Int_t i=0; i < nRows; i++)
     if (strcmp(columnName,elementDescriptor->fColumnName) == 0) break;
 }
 if (i==nRows) i = -1;
 return i;
}
//____________________________________________________________________________
Int_t TTableDescriptor::GetOffset(const Char_t *columnName) const
{
  Int_t indx = GetColumnByName(columnName);
  if (indx >= 0 ) indx = GetOffset(indx);
  return indx;
}
//____________________________________________________________________________
Int_t TTableDescriptor::GetColumnSize(const Char_t *columnName) const
{
  Int_t indx = GetColumnByName(columnName);
  if (indx >= 0 ) indx = GetColumnSize(indx);
  return indx;
}
//____________________________________________________________________________
Int_t TTableDescriptor::GetTypeSize(const Char_t *columnName) const
{
  Int_t indx = GetColumnByName(columnName);
  if (indx >= 0 ) indx = GetTypeSize(indx);
  return indx;
}
//____________________________________________________________________________
Int_t TTableDescriptor::GetDimensions(const Char_t *columnName) const
{
  Int_t indx = GetColumnByName(columnName);
  if (indx >= 0 ) indx = GetDimensions(indx);
  return indx;
}
//____________________________________________________________________________
TTable::EColumnType TTableDescriptor::GetColumnType(const Char_t *columnName) const
{
  Int_t indx = GetColumnByName(columnName);
  if (indx >= 0 ) indx = GetColumnType(indx);
  return EColumnType(indx);
}
