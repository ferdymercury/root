//*CMZ :  2.24/01 31/03/2000  08.46.15  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author :  Valery Fine(fine@bnl.gov)   25/01/99

#ifndef ROOT_TVolumeViewIter
#define ROOT_TVolumeViewIter

#include "TDataSetIter.h"
#include "TVolumePosition.h"

class TObjArray;
class TVolumeView;

class TVolumeViewIter : public TDataSetIter {
private:
protected:
     friend class TVolumeView;
     TObjArray    *fPositions; // the array of the Node position in the absolute system
     virtual const TVolumePosition *GetPosition(Int_t level=0) const;
     virtual TVolumePosition *SetPositionAt(TVolume *node,Double_t x=0, Double_t y=0, Double_t z=0, TRotMatrix *matrix=0);
     virtual TVolumePosition *SetPositionAt(TVolumePosition &curPosition);
public:
     TVolumeViewIter(TVolumeView *view, Int_t depth=1, Bool_t dir=kIterForward);
    ~TVolumeViewIter();
     virtual void            Notify(TDataSet *set);
     virtual void            Reset(TDataSet *l=0,Int_t depth=0);

     TVolumePosition        *operator[](Int_t level) const ;

     TVolumePosition        *UpdateTempMatrix(TVolumePosition *curPosition);
     void                    ResetPosition(Int_t level=0, TVolumePosition *newPosition=0);
     ClassDef(TVolumeViewIter,0)
};


#endif
