//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author :
#ifndef STAF_TPointPosition
#define STAF_TPointPosition

#include "Tpoint3_Table.h"
#include "TVolumePosition.h"
#include "TVolumeView.h"
// $Id: TPointPosition.h,v 1.1 1999/12/29 20:44:19 fine Exp $
class TPointPosition : public Tpoint3 {
 protected:
 public:
   TPointPosition(){;}
   TPointPosition(const TVolumeView &viewNode);
   TPointPosition(const TVolumePosition &pos);
   void MakePosition(const TVolumePosition &pos);
   void UpdatePosition(TVolumePosition *pos);
   void Print(Int_t n = 4);   //*MENU
   ClassDef(TPointPosition,0) // class table to define the geometry 3D positions
};

inline void TPointPosition::Print(Int_t n){ TTable::Print(0,n);}
// $Log: TPointPosition.h,v $
// Revision 1.1  1999/12/29 20:44:19  fine
// New set of classes to provide update detector geometry from Db
//
#endif
