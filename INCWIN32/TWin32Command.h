//*CMZ :  0.90/11 05/01/97  14.43.16  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96

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

// The class to control WM_COMMAND Win32 messages

#ifndef ROOT_TWin32Command
#define ROOT_TWin32Command

#include "TOBJARRAY.h"

#include "TVIRTUALMENUITEM.h"

class TWin32CommCtrl;

class TWin32Command : public TObjArray {


public:
  TWin32Command(Int_t s=64, Int_t lowerBound=1);
  void ExecuteEvent(Int_t Id,TWin32Canvas *c);
  void JoinMenuItem(TVirtualMenuItem *item);
  void JoinControlItem(TWin32CommCtrl *item);
};

#endif
