//*CMZ :  2.23/12 26/01/2000  12.18.16  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine   10/05/99  (E-mail: fine@bnl.gov)
// $Id: TTableElementDescriptor.cxx,v 1.7 1999/12/07 22:26:27 fine Exp $
// $Log: TTableElementDescriptor.cxx,v $
// Revision 1.7  1999/12/07 22:26:27  fine
// Clean up to remove the compilation warnings
//
// Revision 1.6  1999/08/06 15:25:03  fine
// TTableElementDescriptor.cxx has been restored
//
// Revision 1.5  1999/08/02 00:44:12  fine
//  Wrong element size was returned - fixed
//
// Revision 1.4  1999/07/01 23:12:37  fine
// Bug fixed, when an array is supplied with no index. Afftect I/O
//
// Revision 1.3  1999/06/25 17:29:31  fine
// Some bugs with a new Streamer fixed
//
// Revision 1.2  1999/05/18 20:08:46  fine
// TTAbleElementDescriptor class have been introduced
//
// Revision 1.1  1999/05/18 18:00:43  fine
// The first implementation of the table column descriptor
//

#include <stdlib.h>
#include "TTableElementDescriptor.h"
#include "TTable.h"
#include "TClass.h"
#include "TDataMember.h"
#include "TDataType.h"

ClassImp(TTableElementDescriptor)

//____________________________________________________________________________
void TTableElementDescriptor::LearnTable(TTable *parentTable, const Char_t *columnName)
{
//
//  LearnTable() creates a descriptor of one element of the row by CINT dictionary
//

  if (!parentTable || !columnName || !columnName[0]) {
    MakeZombie();
    return;
  }
  // define dimensions if any;
  // count the open "["
  Char_t *name = StrDup(columnName);
  fDimensions = 0;
  Char_t *br = name - 1;
  while((br = strchr(br+1,'['))) {
    if (!fDimensions) *br = 0;
    fDimensions++;
  }

  Int_t *indexArray = 0;
  if (fDimensions) {
     indexArray = new Int_t[fDimensions];
     memset(indexArray,0,fDimensions*sizeof(Int_t));
     // Define the index
     const char *openBracket  = columnName-1;
     const char *closeBracket = columnName-1;
     for (Int_t i=0; i< Int_t(fDimensions); i++)
     {
          openBracket  = strchr(openBracket+1, '[');
          closeBracket = strchr(closeBracket+1,']');
          if (closeBracket > openBracket)
             indexArray[i] = atoi(openBracket+1);
          else {
            Error("TTable ctor", "Wrong parethethis <%s>",columnName);
            MakeZombie();
            return;
          }
     }
  }

  SetName(columnName);
  SetTitle(parentTable->GetTitle());

  TClass *classPtr = parentTable->GetRowClass();
  if (!classPtr) return;

  if (!classPtr->GetListOfRealData()) classPtr->BuildRealData();
  if (!(classPtr->GetNdata())) return;

  const Char_t *types;
  Char_t *varname;

  TIter next(classPtr->GetListOfDataMembers());
  TDataMember *member = 0;
  while ( (member = (TDataMember *) next()) ) {
    varname = (Char_t *) member->GetName();
    // define index
    if (strcmp(varname,name)) continue;
    TDataType *memberType = member->GetDataType();
    types = memberType->GetTypeName();
    fType = kNAN;
    if (!strcmp("float", types))
      fType = kFloat ;
    else if (!strcmp("int", types))
      fType = kInt   ;
    else if (!strcmp("long", types))
      fType = kLong  ;
    else if (!strcmp("short", types))
      fType = kShort ;
    else if (!strcmp("double", types))
      fType = kDouble;
    else if (!strcmp("unsigned int", types))
      fType = kUInt  ;
    else if (!strcmp("unsigned long", types))
      fType = kULong ;
    else if (!strcmp("unsigned short", types))
      fType = kUShort;
    else if (!strcmp("unsigned char", types))
      fType = kUChar;
    else if (!strcmp("char", types))
      fType= kChar;

    if (fType != kNAN) {
      Int_t dim = 0;
      Int_t globalIndex = 0;
      if ( (dim = member->GetArrayDim()) ) {
      // Check dimensions
        if (fDimensions && dim != Int_t(fDimensions)) {
           Error("LearnTable","Wrong dimension");
           parentTable->Print();
           return;
        }
        // Calculate the global index
        if (!fDimensions) {
            fDimensions = dim;
            globalIndex = 1;
        }
        for( Int_t indx=0; indx < Int_t(fDimensions); indx++ ){
           globalIndex *= member->GetMaxIndex(indx);
           if (indexArray) globalIndex += indexArray[indx];
        }
      }
//      fSize   = memberType->Size() * globalIndex; // memberType->Size();
//      fOffset = member->GetOffset() + fSize;     // memberType->Size() * globalIndex;
      //  for VP ***       fSize   = memberType->Size() * (!indexArray?1:globalIndex);
      fSize   = memberType->Size() * (indexArray?1:globalIndex);
      fOffset = member->GetOffset() + (indexArray?fSize * globalIndex : 0);
    }
    break;
  }
  delete [] name;
}

