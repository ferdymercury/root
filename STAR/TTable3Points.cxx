//*CMZ :  2.23/12 26/01/2000  12.18.16  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine   10/05/99  (E-mail: fine@bnl.gov)
// $Id: TTable3Points.cxx,v 1.4 1999/11/04 18:03:03 fine Exp $
// $Log: TTable3Points.cxx,v $
// Revision 1.4  1999/11/04 18:03:03  fine
// new ctor for tablepoints introduced to make EventDiplay happy
//
// Revision 1.3  1999/06/01 01:27:53  fine
// Comments clean ups
//
// Revision 1.2  1999/05/24 01:54:02  fine
// clean up
//
// Revision 1.1  1999/05/18 20:21:24  fine
// New class to 3D table viewer
//

#include "TTable3Points.h"
#include "TTableElementDescriptor.h"

///////////////////////////////////////////////////////////////////////////////////
//
//   TTable3Points class is to create 3D view of any 3 columns of the TTable objects
//   with one the same "key column value".
//
//   For example all values of the column "x[0]" "x[1]" "x[2]" of the begin_html <a href="http://www.rhic.bnl.gov/STAR/html/comp_l/root/html/g2t_tpc_hit_st.html"> g2t_tpc_hit </a> end_html table
//   from the rows with one and same "track_id" column value will be regarded
//   as an image of one and the same "track".
//   The last means all those points will be painted with one and the same 3D
//   attributes like "color", "size", "style", "light","markers", "connections"  etc.
//
//   The original TTable object must be pre-sorted by "key column" via TTableSorter
//   class
//
// void   CreatePoints(Tg2t_tpc_hit *points)
// {
//   g2t_tpc_hit_st *p = points->GetTable();
//
//  TTable3Points *track = 0;
//  TString tr;
//  tr = "track_p";
//  TTable &ttt = *((TTable *)points);
//  // Track2Line MUST be on heap othwise 3D view will crash just code leaves this
//  // subroutine
//  We will assemble all points by its "track_p" field.
//
//  TTableSorter *Track2Line = new TTableSorter (ttt,"track_p");
//
//  Int_t i = 0;
//  Char_t buffer[10];
//  Int_t ntracks = 0;
//  const Int_t maxtracks = 5;
////---------------------------- Fill tracks -------------------
//  long currentId = -1;
//  long newId =  0;
//  g2t_tpc_hit_st *hitPoint = 0;
//  TNode *thisTrack[7] = {0,0,0,0,0,0,0}; // seven noded for 7 different colors
//  Int_t  MaxRowtoCount = 5000; // 5000;
//  Int_t  MaxTracks = Track2Line->CountKeys();
//  MaxTracks = 100;
//  for (i=0;i<Track2Line->GetNRows() && ntracks <  MaxTracks ;i++)
//  {
//   hitPoint = p + Track2Line->GetIndex(i);
//   newId =  hitPoint->track_p;
//   if (newId != currentId)  { // The hit for the new track has been found
//
//     const Char_t *xName = "x[0]";
//     const Char_t *yName = "x[1]";
//     const Char_t *zName = "x[2]";
//
//     track =  new TTable3Points(Track2Line,(const void *)&newId,xName,yName,zName);
//
//     // Create a shape for this node
//     TPolyLineShape *trackShape  =  new TPolyLineShape(track);
//     trackShape->SetVisibility(1);
//     Int_t colorIndx = ntracks%7;
//     trackShape->SetColorAttribute(colorIndx+kGreen);
//     trackShape->SetLineStyle(1);
//     trackShape->SetSizeAttribute(2);
//     // Create a node to hold it
//     if (!thisTrack[colorIndx])  {
//         thisTrack[colorIndx] = new TNode("hits","hits",trackShape);
//         thisTrack[colorIndx]->Mark();
//         thisTrack[colorIndx]->SetVisibility();
//         TNodePosition *pp = hall->Add(thisTrack[colorIndx]);
//         if (!pp) printf(" no position %d\n",ntrack);
//     }
//     else
//       thisTrack[colorIndx]->Add(trackShape);
//     currentId = newId;
//     ntracks++;
//   }
// }
//
///////////////////////////////////////////////////////////////////////////////////
ClassImp(TTable3Points)

//________________________________________________________________________________
TTable3Points::TTable3Points():fArrayOfColumnDesciptors(0){}

//________________________________________________________________________________
TTable3Points::TTable3Points(TTableSorter *sorter,const void *key,
                       const Char_t *xName, const Char_t *yName, const Char_t *zName
                      ,Option_t *opt)
                : TTablePoints(sorter,key,opt)

{
  fArrayOfColumnDesciptors =  new TObjArray(kTotalSize);
  SetXColumn(xName);  SetYColumn(yName);  SetZColumn(zName);
}
//________________________________________________________________________________
TTable3Points::TTable3Points(TTableSorter *sorter,Int_t keyIndex,
                       const Char_t *xName, const Char_t *yName, const Char_t *zName
                      ,Option_t *opt)
                : TTablePoints(sorter,keyIndex,opt)

{
  fArrayOfColumnDesciptors =  new TObjArray(kTotalSize);
  SetXColumn(xName);  SetYColumn(yName);  SetZColumn(zName);
}
//________________________________________________________________________________
TTable3Points::~TTable3Points()
{
  if (fArrayOfColumnDesciptors)
  {
    fArrayOfColumnDesciptors->Delete();
    delete fArrayOfColumnDesciptors;
    fArrayOfColumnDesciptors = 0;
  }
}
//________________________________________________________________________________
TTableElementDescriptor *TTable3Points::GetDescriptor(EPointDirection idx) const
{
  TObjArray &refs  = *fArrayOfColumnDesciptors;
  return  (TTableElementDescriptor *)refs[idx];
}
//________________________________________________________________________________
Float_t TTable3Points::GetAnyPoint(Int_t idx, EPointDirection xAxis) const
{
 Float_t point    = 0;
 TTable  *table = 0;
 if (fTableSorter) table = fTableSorter->GetTable();
 if (table) {
    const Char_t *tablePtr = (Char_t *)fRows;
    tablePtr += Indx(idx)*(table->GetRowSize());
    TTableElementDescriptor *tableDsc = GetDescriptor(xAxis);
    tablePtr += tableDsc->GetOffset();
    point = *((Float_t *)tablePtr);
 }
  return point;
}
//____________________________________________________________________________
void TTable3Points::SetAnyColumn(const Char_t *anyName, EPointDirection indx)
{
   TTableElementDescriptor *dsc = (TTableElementDescriptor *)(*fArrayOfColumnDesciptors)[indx];
   if (dsc) delete dsc;
   dsc = new TTableElementDescriptor(fTableSorter->GetTable(), anyName);
   if (dsc->IsZombie()) { delete dsc; dsc = 0; MakeZombie();}
   (*fArrayOfColumnDesciptors)[indx] =  dsc;
}

//____________________________________________________________________________
Float_t *TTable3Points::GetXYZ(Float_t *xyz,Int_t idx, Int_t num) const
{
  if (xyz) {
    Int_t size = TMath::Min(idx+num,Size());
    Int_t j=0;
    for (Int_t i=idx;i<size;i++) {
      xyz[j++] = GetX(i);
      xyz[j++] = GetY(i);
      xyz[j++] = GetZ(i);
    }
  }
  return xyz;
}

