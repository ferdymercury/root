//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine   10/05/99  (E-mail: fine@bnl.gov)
// $Id: TTableElementDescriptor.h,v 1.3 1999/08/11 00:44:12 fine Exp $
// $Log: TTableElementDescriptor.h,v $
// Revision 1.3  1999/08/11 00:44:12  fine
// clean up
//
// Revision 1.2  1999/05/18 20:08:47  fine
// TTableElementDescriptor class have been introduced
//
// Revision 1.1  1999/05/18 18:00:43  fine
// The first implementation of the table column descriptor
//

#ifndef STAR_TTableElementDescriptor
#define STAR_TTableElementDescriptor

#include <TNamed.h>

class TTable;

class TTableElementDescriptor : public TNamed {
  public:
    enum EColumnType {kNAN, kFloat, kInt, kLong, kShort, kDouble, kUInt
                           ,kULong, kUShort, kUChar, kChar };
  protected:
    UInt_t       fOffset;      // The first byte in the row this column
    UInt_t       fSize;        // The size of the selected column in bytes
    UInt_t       fDimensions;  // The number of the dimensions for array
    EColumnType  fType;        // The data type of the selected column
  public:
    TTableElementDescriptor(TTable *parentTable=0, const Char_t *columnName="")
     { LearnTable(parentTable,columnName); }
   ~TTableElementDescriptor(){}
    void   LearnTable(TTable *parentTable, const Char_t *columnName);
    UInt_t GetOffset()               {return fOffset;    }
    UInt_t GetSize()                 {return fSize;      }
    UInt_t GetDimensions()           {return fDimensions;}
    EColumnType GetType()            {return fType;      }
    void   SetOffset(UInt_t offset)  {fOffset     = offset;}
    void   SetSize(UInt_t size)      {fSize       = size;  }
    void   SetDimensions(UInt_t dim) {fDimensions = dim;   }
   // void   SetType(TTableElementDescriptor::EColumnType type) {fType       = type;  }
    ClassDef(TTableElementDescriptor,0)
};

#endif
