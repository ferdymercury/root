//*CMZ :  0.80/00 05/06/96  22.22.47  by  Rene Brun
//*-- Author :    Valery Fine   26/04/96

#ifndef ROOT_TRefObject
#include "TRefObject.h"
#endif
  1. Notify my children about my perdition
  2. Remove the died parents from my list of my relations.
  3. Delete details
//______________________________________________________________________________
//*-*-*-*-*-* R e f O b j e c t a special class to set relationships *-*-*-*-*-*
//*-*
//*-* It is assumed that each instance of this class has three kind of realtionships
//*-*
//*-* RefObject has:
//*-*
//*-*  1. Parents
//*-*  2. Children
//*-*  3. Its own body
//*-*
//*-*  Each of those must be derived from the RefObject as well
//*-*
//*-*  When RefObject is being deleteing it will
//*-*
//*-*  1. Notify my children about my perdition
//*-*  2. Delete details (kill part of its own  body
//*-*
//*-*  3. Been notified aboud parent's perdition it removes that
//*-*     from the list of its parents
//*-*  4. Any RefObject insatnce may become a parents of the instance via
//*-*     setting relationships
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*


//_________________________________________
TRefObject(TRefObject *parent=0){
 if(parent)  {
    fListOfMyRelations = new TSeqCollection;
    fListOfMyRelations.Add(parent);
 }
}

//_________________________________________
TRefObject::~TRefObject(){
    if (fListOfMyRelations)
                   NotifyMyRelation();
    if (fListOfDetails)
                   BuryMyBody();
 }

//_________________________________________
TRefObject::SetRelation(TRefObject *relationt){
 relation->AddRelation(this);
}

//_________________________________________
TRefObject::BuryMyBody(){
 TIter next(fListOfDetails)
   if (TRefObject *member = next()) {
    // An imitation of my perdition,
    // otherwise the detail will try to notify back
     member->ForgetMyDiedRelation(this);
//     fListofMyDetails->Remove(member);
     delete member;
   }
}

//_________________________________________
TRefObject::ForgetMyDiedRelation(TRefObject *parent){
   if (fListOfMyRelations)
        fListOfMyRelations->Remove(parent);
}

//_________________________________________
TRefObject::NotifyMyRelations(){
if (fListOfMyRelations) {
  TIter next(fListOfMyRelations);
    if (TRefObject *parent = next())
      parent->ForgetMyDiedRelation(this);
}

//_________________________________________
TRefObject::AddRelation(TRefObject *newparent){
   if (!fListOfMyRelations)
         fListOfMyRelations = new TSeqCollection;

   fListOfMyRelations->Add(newparent);
}


