//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  1.03/09 17/04/99  07.50.09  by  Fons Rademakers
//*-- Author :    Rene Brun   14/09/95

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

#include "TROOT.h"
#include "TVirtualPad.h"
#include "TNodeDiv.h"

ClassImp(TNodeDiv)


//______________________________________________________________________________
TNodeDiv::TNodeDiv()
{
//*-*-*-*-*-*-*-*-*-*-*NodeDiv default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===========================

   fNdiv = 0;
   fAxis = 0;
}

//______________________________________________________________________________
TNodeDiv::TNodeDiv(const char *name, const char *title, const char *shapename, Int_t ndiv, Int_t axis, Option_t *option)
         :TNode(name,title,shapename,0,0,0,0,option)
{
//*-*-*-*-*-*-*-*-*-*-*NodeDiv normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==========================
//*-*
//*-*    name    is the name of the node
//*-*    title   is title
//*-*    shapename is the name of the referenced shape
//*-*    x,y,z   are the offsets of the volume with respect to his mother
//*-*    matrixname  is the name of the rotation matrix
//*-*
//*-*    This new node is added into the list of sons of the current node
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fNdiv = ndiv;
   fAxis = axis;
}


//______________________________________________________________________________
TNodeDiv::TNodeDiv(const char *name, const char *title, TShape *shape, Int_t ndiv, Int_t axis, Option_t *option)
         :TNode(name,title,shape,0,0,0,0,option)
{
//*-*-*-*-*-*-*-*-*-*-*NodeDiv normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =========================
//*-*
//*-*    name    is the name of the node
//*-*    title   is title
//*-*    shape   is the pointer to the shape definition
//*-*    ndiv    number of divisions
//*-*    axis    number of the axis for the division
//*-*
//*-*    This new node is added into the list of sons of the current node
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fNdiv = ndiv;
   fAxis = axis;
}

//______________________________________________________________________________
TNodeDiv::~TNodeDiv()
{
//*-*-*-*-*-*-*-*-*-*-*NodeDiv default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==========================

}

//______________________________________________________________________________
void TNodeDiv::Draw(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*Draw Referenced node with current parameters*-*-*-*
//*-*                   =============================================

}

//______________________________________________________________________________
void TNodeDiv::Paint(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*Paint Referenced node with current parameters*-*-*-*
//*-*                   ==============================================

}
