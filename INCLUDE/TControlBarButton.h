//*CMZ :  2.00/04 06/04/98  18.58.27  by  Fons Rademakers
//*CMZ :  2.00/00 22/02/98  23.59.17  by  Fons Rademakers
//*CMZ :  0.90/01 07/10/96  18.12.35  by  Rene Brun
//*-- Author :    Nenad Buncic   20/02/96

#ifndef ROOT_TControlBarButton
#define ROOT_TControlBarButton

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

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// TControlBarButton                                                          //
//                                                                            //
// This class defines the control bar buttons.                                //
//                                                                            //
//                                                                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif


class TControlBarButton : public TNamed {

protected:
   Int_t    fType;       //button type
   TString  fAction;     //action to be executed

public:
   enum { kButton = 1, kDrawnButton, kSeparator };

   TControlBarButton();
   TControlBarButton(const char *label, const char *action="", const char *hint="", const char *type="button");
   virtual ~TControlBarButton() { }

   virtual void        Create() { }
   virtual void        Action();
   virtual const char *GetAction() const { return fAction.Data(); }
   virtual Int_t       GetType() const { return fType; }
   virtual void        SetAction(const char *action);
   virtual void        SetType(const char *type);
   virtual void        SetType(Int_t type);

   ClassDef(TControlBarButton,0) //The Control bar button
};

#endif
