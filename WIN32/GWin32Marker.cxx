//*CMZ :  1.00/06 23/03/97  11.51.59  by  Rene Brun
//*-- Author :    Valery Fine   27/01/96

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

#include "TGWin32Marker.h"

//______________________________________________________________________________
TGWin32Marker::TGWin32Marker(int n, TPoint *xy, int type){
  fNumNode = n;
  fMarkerType = type;
  if (type >= 2)
     if (fChain = new POINT[n])
      for( int i = 0; i < n; i++ ) {
                 fChain[i].x = xy[i].GetX();
                 fChain[i].y = xy[i].GetY();
      }
  else
     fChain = NULL;
}
//______________________________________________________________________________
TGWin32Marker::~TGWin32Marker(){
//*-*-*-*-*-*-*-*-*-*-*-*Default Destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ==================
  if (fChain) delete fChain;
}

//______________________________________________________________________________
int    TGWin32Marker::GetNumber(){return fNumNode;}
//______________________________________________________________________________
POINT *TGWin32Marker::GetNodes(){return fChain;}
//______________________________________________________________________________
int  TGWin32Marker::GetType(){return fMarkerType;}

//______________________________________________________________________________
void TGWin32Marker::SetMarker(int n, TPoint *xy, int type){

//*-* Did we have a chain ?

if (fMarkerType >= 2 && fNumNode != n){    // Yes, we had chain
       if (fChain) delete fChain;  // Delete the obsolete chain
       fChain = NULL;
}

//*-*  Create the new shaped marker

if (type >= 2) {
    if (!fChain) fChain = new POINT[n];
    for( int i = 0; i < n; i++ ) {
      fChain[i].x = xy[i].GetX();
      fChain[i].y = xy[i].GetY();
    }
}
else if (fChain) { delete fChain; fChain = NULL; }

fNumNode = n;
fMarkerType = type;

}
