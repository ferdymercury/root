//*CMZ :  2.24/01 31/03/2000  08.46.15  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine(fine@bnl.gov)   25/12/98
#ifndef ROOT_TObjectSet
#define ROOT_TObjectSet

#include "TDataSet.h"

//////////////////////////////////////////////////////////////////////////////////////
//                                                                                  //
//  TObjectSet  - is a container TDataSet                                           //
//                  This means this object has an extra pointer to an embedded      //
//                  TObject.                                                        //
//  Terminology:    This TOvjectSet may be an OWNER of the embeded TObject          //
//                  If the container is the owner it can delete the embeded object  //
//                  otherwsie it leaves that object "as is"                         //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////

class TObjectSet : public TDataSet {
protected:
  enum EOwnerBits { kIsOwner         = BIT(23) };
  TObject *fObj;                              // TObject to be inserted
  virtual Bool_t DoOwner(Bool_t done=kTRUE);

public:
  TObjectSet(const Char_t *name, TObject *obj=0,Bool_t makeOwner=kTRUE);
  TObjectSet(TObject *obj=0,Bool_t makeOwner=kTRUE);
  virtual ~TObjectSet();
  virtual void     Browse(TBrowser *b);
  virtual void     Delete(Option_t *opt="");
  virtual TObject *GetObject() const {return fObj;};
  virtual void     SetObject(TObject *obj) { SetObject(obj,kTRUE);}
  virtual TObject *SetObject(TObject *obj,Bool_t makeOwner);
  virtual TObject *AddObject(TObject *obj,Bool_t makeOwner=kTRUE);
  virtual Long_t   HasData() const {return fObj ? 1 : 0;}
  virtual Bool_t   IsOwner() const {return TestBit(kIsOwner);}

  ClassDef(TObjectSet,1)
};

#endif

