//*CMZ :  2.23/12 26/01/2000  12.20.09  by  Valery Fine(fine@bnl.gov)
//*-- Author :  Valery Fine   10/05/99  (E-mail: fine@bnl.gov)
// $Id: St_tableDescriptor.h,v 1.6 1999/10/28 00:32:55 fine Exp $
// $Log: St_tableDescriptor.h,v $
// Revision 1.6  1999/10/28 00:32:55  fine
// method At() has been removed
//
// Revision 1.5  1999/09/07 19:30:29  fine
// table descriptor access has been changed. All tables are affected and must be re-compiled
//
// Revision 1.4  1999/08/12 18:53:49  fine
// clash between St_tableDescriptor::GetSize and St_Table::GetSize resolved
//
// Revision 1.3  1999/08/12 02:23:30  fine
//  GetRowDescriptor must be const
//
// Revision 1.2  1999/08/11 14:44:39  fine
// name clash with ROOT over enum resolved
//
// Revision 1.1  1999/08/11 00:40:12  fine
// new class St_tableDescriptor
//

#ifndef STAR_TTableDescriptor
#define STAR_TTableDescriptor

#include "TTable.h"
#include "tableDescriptor.h"


class TTableDescriptor : public TTable {
  protected:
     static TTableDescriptor *fgColDescriptors;
     virtual TTableDescriptor *GetDescriptorPointer() const { return fgColDescriptors;}
     virtual void  SetDescriptorPointer(TTableDescriptor *list) const { fgColDescriptors = list;}
     TTableDescriptor(){;}
  public:

    TTableDescriptor(const TTable *parentTable);
   ~TTableDescriptor();
    tableDescriptor_st *GetTable(){ return (tableDescriptor_st *)fTable;}
             void        LearnTable(const TTable *parentTable);
             const Char_t *GetColumnName(Int_t columnIndex)        const;
             const Int_t GetColumnByName(const Char_t *columnName=0) const;
             UInt_t      GetNumberOfColumns()                      const;
             UInt_t     *GetIndexArray(Int_t columnIndex)          const;
             UInt_t      GetOffset(Int_t columnIndex)              const;
             Int_t       GetOffset(const Char_t *columnName=0)     const;
             UInt_t      GetColumnSize(Int_t columnIndex)          const;
             Int_t       GetColumnSize(const Char_t *columnName=0) const;
             UInt_t      GetTypeSize(Int_t columnIndex)            const;
             Int_t       GetTypeSize(const Char_t *columnName=0)   const;
             UInt_t      GetDimensions(Int_t columnIndex)          const;
             Int_t       GetDimensions(const Char_t *columnName=0) const;
             EColumnType GetColumnType(Int_t columnIndex)          const;
             EColumnType GetColumnType(const Char_t *columnName=0) const;
             void        SetOffset(UInt_t offset,Int_t column);
             void        SetSize(UInt_t size,Int_t column);
             void        SetTypeSize(UInt_t size,Int_t column);
             void        SetDimensions(UInt_t dim,Int_t column);
             void        SetColumnType(EColumnType type,Int_t column);
    ClassDef(TTableDescriptor,0)
};

//______________________________________________________________________________
inline  const Char_t *TTableDescriptor::GetColumnName(Int_t column)const{return ((tableDescriptor_st *)At(column))->fColumnName;}
inline  UInt_t TTableDescriptor::GetOffset(Int_t column)          const {return ((tableDescriptor_st *)At(column))->fOffset;    }
inline  UInt_t *TTableDescriptor::GetIndexArray(Int_t column)     const {return ((tableDescriptor_st *)At(column))->fIndexArray;}
inline  UInt_t TTableDescriptor::GetNumberOfColumns()             const {return GetNRows();                                      }
inline  UInt_t TTableDescriptor::GetColumnSize(Int_t column)      const {return ((tableDescriptor_st *)At(column))->fSize;      }
inline  UInt_t TTableDescriptor::GetTypeSize(Int_t column)        const {return ((tableDescriptor_st *)At(column))->fTypeSize;  }
inline  UInt_t TTableDescriptor::GetDimensions(Int_t column)      const {return ((tableDescriptor_st *)At(column))->fDimensions;}
inline  TTable::EColumnType TTableDescriptor::GetColumnType(Int_t column) const {return EColumnType(((tableDescriptor_st *)At(column))->fType);}
inline  void   TTableDescriptor::SetOffset(UInt_t offset,Int_t column)  {((tableDescriptor_st *)At(column))->fOffset     = offset;}
inline  void   TTableDescriptor::SetSize(UInt_t size,Int_t column)      {((tableDescriptor_st *)At(column))->fSize       = size;  }
inline  void   TTableDescriptor::SetTypeSize(UInt_t size,Int_t column)  {((tableDescriptor_st *)At(column))->fTypeSize   = size;  }
inline  void   TTableDescriptor::SetDimensions(UInt_t dim,Int_t column) {((tableDescriptor_st *)At(column))->fDimensions = dim;   }
inline  void   TTableDescriptor::SetColumnType(EColumnType type,Int_t column) {((tableDescriptor_st *)At(column))->fType = type;  }

#endif
