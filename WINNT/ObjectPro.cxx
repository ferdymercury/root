//*CMZ :  1.00/07 28/03/97  09.25.47  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   22/12/96

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

#ifndef ROOT_TObjectPro
#include "TObjectPro.h"
#endif

#ifndef ROOT_TObjectView
#include "TObjectView.h"
#endif

////////////////////////////////////////////////////////////////////////
//                                                                    //
// TObjectPro is an ABC base class to replace TObject class in future //
// All other classes must be derived from this                        //
//                                                                    //
////////////////////////////////////////////////////////////////////////

//______________________________________________________________________________
void TObjectPro::Draw(Option_t opt)
{
//*-*
//*-*  Create "main" image
//*-*
      CreatePadView(opt)->DrawView();
}

//______________________________________________________________________________
TObjectView *TObjectPro::CreateClassView(Option_t option)
{
    return CreateView(option);
}

//______________________________________________________________________________
TObjectView *TObjectPro::CreatePadView(Option_t option)
{
    return CreateView(option);
}

//______________________________________________________________________________
TObjectView *TObjectPro::CreateBrowseView(Option_t option)
{
    return CreateView(option);
}

//______________________________________________________________________________
TObjectView *TObjectPro::CreateView(Option_t option)
{
// This function DOES define (and replace TObject::Draw()) the default real view
// of the TObject
// It is a virtual function of the TObject class and each Class must
// supply its own implementation

    return
              new TObjectView((TObject *)this);
}

