//*CMZ :  1.03/07 03/11/97  12.44.40  by  Rene Brun
//*-- Author :    Fons Rademakers   04/05/96

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TObjPtr                                                              //
//                                                                      //
// Collectable generic pointer class. This is a TObject containing a    //
// void *.                                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TObjPtr.h"

//ClassImp(TObjPtr)

Int_t TObjPtr::Compare(TObject *obj)
{
   if (fPtr == obj)
      return 0;
   else if (fPtr < obj)
      return -1;
   else
      return 1;
}
