//*CMZ :  0.80/01 16/08/96  17.29.41  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TRefObject
#define ROOT_TRefObject

#ifndef ROOT_TObject
#include "TOBJECT.h"
#endif


class TRefObject : public TObject {

private:
   TSeqCollection *fListOfMyRelations;

public:

TRefObject(TRefObject *parent=0);
virtual ~TRefObject();

virtual TRefObject::BuryMyBody(){
 TIter next(fListOfDetails)
   if (TRefObject *member = next()) {
     fListofMyDetails->Remove(member);
     delete member;
   }
}

//_________________________________________
TRefObject::ForgetMyDiedRelation(TRefObject *parent){
   if (fListOfMyRelations)
        fListOfMyRelations->Remove(parent);
}

//_________________________________________
TRefObject::NotifyMyChildren(){
  TIter next(fListOfChildren);
    if (TRefObject *child = next())
      child->ForgetMyDiedRelation(this);
}

//_________________________________________
TRefObject::SetRelation(TRefObject *newparent){
   if (fListOfMyRelations)
           fListOfMyRelations->add(newparent);
}

};
#endif
