//*CMZ :  2.23/12 26/01/2000  09.41.50  by  Rene Brun
//*CMZ :  2.23/02 05/09/99  16.18.00  by  Rene Brun
//*-- Author :    Rene Brun   05/09/99

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#include "TVirtualPS.h"

TVirtualPS *gVirtualPS = 0;

ClassImp(TVirtualPS)

//______________________________________________________________________________
//
//  TVirtualPS is an abstract interface to a Postscript driver
//

//______________________________________________________________________________
TVirtualPS::TVirtualPS()
{
//*-*-*-*-*-*-*-*-*-*-*VirtualPS default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============================
}

//______________________________________________________________________________
TVirtualPS::TVirtualPS(const char *name, Int_t)
          : TNamed(name,"Postscript interface")
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*VirtualPS constructor*-*-*-*-*-*-*-*-*-*-*-*-*

}

//______________________________________________________________________________
TVirtualPS::~TVirtualPS()
{
//*-*-*-*-*-*-*-*-*-*-*VirtualPS destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =====================
}

