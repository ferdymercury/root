//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author :
#ifndef STAF_Tpoint3_Table
#define STAF_Tpoint3_Table
// $Id: Tpoint3_Table.h,v 1.1 1999/12/29 20:44:20 fine Exp $

#include "TTable.h"

#include "point3.h"

class Tpoint3 : public TTable
{
protected:
  static TTableDescriptor *fgColDescriptors;
  virtual TTableDescriptor *GetDescriptorPointer() const { return fgColDescriptors;}
  virtual void SetDescriptorPointer(TTableDescriptor *list) const { fgColDescriptors = list;}
public:
  Tpoint3() : TTable("point3",sizeof(point3_st)) {SetType("point3");}
  Tpoint3(Text_t *name) : TTable(name,sizeof(point3_st)) {SetType("point3");}
  Tpoint3(Int_t n): TTable("point3",n,sizeof(point3_st)) {SetType("point3");}
  Tpoint3(Text_t *name,Int_t n): TTable(name,n,sizeof(point3_st)) {SetType("point3");}
  point3_st *GetTable(Int_t i=0){ return ((point3_st *)fTable)+i;}
  point3_st &operator[](Int_t i){ assert(i>=0 && i < GetNRows()); return *GetTable(i); }

  ClassDef(Tpoint3,0) // class 3D point vector
};
// $Log: Tpoint3_Table.h,v $
// Revision 1.1  1999/12/29 20:44:20  fine
// New set of classes to provide update detector geometry from Db
//
#endif
