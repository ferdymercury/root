//*CMZ :  2.23/12 26/01/2000  12.08.00  by  Valery Fine(fine@bnl.gov)
//*-- Author :
// Class TPointPosition converts TVolumePostion objects
// into Tvector3 table one to be saved with MySQL data-base
// $Id: TPointPosition.cxx,v 1.2 2000/01/12 18:07:24 fine Exp $
#include "TDataSetIter.h"
#include "TPointPosition.h"
#include "TRotMatrix.h"

ClassImp(TPointPosition)

//_____________________________________________________________________________
TPointPosition::TPointPosition(const TVolumeView &viewNode)
{
  //
  // This ctor creates a TPointPosition structure from the TVolumeView
  // dataset
   TVolumePosition *pos = viewNode.GetPosition();
   if (pos)  MakePosition(*pos);
   TDataSetIter next((TDataSet *)&viewNode);
   TVolumeView *nextView = 0;
   while ( (nextView = (TVolumeView *)next()) )
         Add(new TPointPosition(*nextView));
}

//_____________________________________________________________________________
TPointPosition::TPointPosition(const TVolumePosition &pos)
{
       MakePosition(pos);
}
//_____________________________________________________________________________
void TPointPosition::MakePosition(const TVolumePosition &pos)
{
  TVolume *node = pos.GetNode();
  if (node) {
     Char_t buffer[10];
     TString nodeName = node->GetName();
     sprintf(buffer,"#%d",pos.GetId());
     nodeName += buffer;
     SetName(nodeName);
  }
  TRotMatrix *matrix = pos.GetMatrix();
  Double_t *marray = 0;
  if (matrix) marray = matrix->GetMatrix();
  Int_t i = 0;
  if (marray) {
      ReAllocate(3);
      for (i=0;i<3;i++,marray += 3) AddAt(marray,i);
  }
  Double_t translation[3];
  if ( (translation[0] = pos.GetX()) || (translation[1] = pos.GetY()) ||
                                        (translation[2] = pos.GetZ()) )
  {  ReAllocate();    AddAt(translation,i);  }
};

//_____________________________________________________________________________
void TPointPosition::UpdatePosition(TVolumePosition *pos) {
 if (!pos) return;
 Int_t nRow = GetNRows();
 if (!nRow) return;
 TRotMatrix *m = 0;
 Int_t indx = 0;
 if (nRow >=3) { m = new TRotMatrix(" "," ",(Double_t *)GetTable(indx)); indx += 3; }
 pos->SetMatrix(m);
 if (nRow - indx) {
   point3_st *translation = GetTable(indx);
   pos->SetPosition(translation->point[0],translation->point[1],translation->point[2]);
 }
}

//_____________________________________________________________________________
// $Log: TPointPosition.cxx,v $
// Revision 1.2  2000/01/12 18:07:24  fine
//  cvs symbols have been added and copyright class introduced
//
//_____________________________________________________________________________

