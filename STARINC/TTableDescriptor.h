//*CMZ :  2.24/05 11/05/2000  13.49.28  by  Valery Fine(fine@bnl.gov)
//*CMZ :  2.24/03 10/04/2000  12.23.27  by  Valery Fine(fine@bnl.gov)
//*CMZ :  2.24/01 31/03/2000  08.46.15  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  12.20.09  by  Valery Fine(fine@bnl.gov)
//*-- Author :    Valery Fine   10/05/99  (E-mail: fine@bnl.gov)
#ifndef ROOT_TTableDescriptor
#define ROOT_TTableDescriptor

#include "TTable.h"
#include "tableDescriptor.h"

class TTableDescriptor : public TTable {
  protected:
     TClass  *fRowClass;  // TClass defining the table row C-structure
     virtual void Init(TClass *classPtr);

  public:

    TTableDescriptor(const TTable *parentTable);
    TTableDescriptor(TClass *classPtr);
   ~TTableDescriptor();
    TString CreateLeafList() const;
             void        LearnTable(const TTable *parentTable);
             void        LearnTable(TClass *classPtr);
             const Char_t *ColumnName(Int_t columnIndex)        const;
             const Int_t ColumnByName(const Char_t *columnName=0) const;
             UInt_t      NumberOfColumns()                      const;
             UInt_t     *IndexArray(Int_t columnIndex)          const;
             UInt_t      Offset(Int_t columnIndex)              const;
             Int_t       Offset(const Char_t *columnName=0)     const;
             UInt_t      ColumnSize(Int_t columnIndex)          const;
             Int_t       ColumnSize(const Char_t *columnName=0) const;
             UInt_t      TypeSize(Int_t columnIndex)            const;
             Int_t       TypeSize(const Char_t *columnName=0)   const;
             UInt_t      Dimensions(Int_t columnIndex)          const;
             Int_t       Dimensions(const Char_t *columnName=0) const;
             TTable::EColumnType ColumnType(Int_t columnIndex)          const;
             TTable::EColumnType ColumnType(const Char_t *columnName=0) const;
             TClass     *RowClass() const;
             void        SetOffset(UInt_t offset,Int_t column);
             void        SetSize(UInt_t size,Int_t column);
             void        SetTypeSize(UInt_t size,Int_t column);
             void        SetDimensions(UInt_t dim,Int_t column);
             void        SetColumnType(TTable::EColumnType type,Int_t column);
    virtual  Int_t       UpdateOffsets(const TTableDescriptor *newDesciptor);
    ClassDefTable(TTableDescriptor,tableDescriptor_st)
    ClassDef(TTableDescriptor,0)
};

//______________________________________________________________________________
inline  const Char_t *TTableDescriptor::ColumnName(Int_t column)const {return ((tableDescriptor_st *)At(column))->fColumnName;}
inline  UInt_t  TTableDescriptor::Offset(Int_t column)          const {return ((tableDescriptor_st *)At(column))->fOffset;    }
inline  UInt_t *TTableDescriptor::IndexArray(Int_t column)      const {return ((tableDescriptor_st *)At(column))->fIndexArray;}
inline  UInt_t  TTableDescriptor::NumberOfColumns()             const {return  GetNRows();                                      }
inline  UInt_t  TTableDescriptor::ColumnSize(Int_t column)      const {return ((tableDescriptor_st *)At(column))->fSize;      }
inline  UInt_t  TTableDescriptor::TypeSize(Int_t column)        const {return ((tableDescriptor_st *)At(column))->fTypeSize;  }
inline  UInt_t  TTableDescriptor::Dimensions(Int_t column)      const {return ((tableDescriptor_st *)At(column))->fDimensions;}
inline  TTable::EColumnType TTableDescriptor::ColumnType(Int_t column) const {return EColumnType(((tableDescriptor_st *)At(column))->fType);}
inline  TClass *TTableDescriptor::RowClass() const { return fRowClass;}
inline  void    TTableDescriptor::SetOffset(UInt_t offset,Int_t column)  {((tableDescriptor_st *)At(column))->fOffset     = offset;}
inline  void    TTableDescriptor::SetSize(UInt_t size,Int_t column)      {((tableDescriptor_st *)At(column))->fSize       = size;  }
inline  void    TTableDescriptor::SetTypeSize(UInt_t size,Int_t column)  {((tableDescriptor_st *)At(column))->fTypeSize   = size;  }
inline  void    TTableDescriptor::SetDimensions(UInt_t dim,Int_t column) {((tableDescriptor_st *)At(column))->fDimensions = dim;   }
inline  void    TTableDescriptor::SetColumnType(TTable::EColumnType type,Int_t column) {((tableDescriptor_st *)At(column))->fType = type;  }


#endif
