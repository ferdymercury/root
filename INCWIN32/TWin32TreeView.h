//*CMZ :  2.00/11 22/08/98  10.07.35  by  Rene Brun
//*CMZ :  0.90/01 21/10/96  16.07.44  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   21/10/96

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

#ifndef ROOT_TWin32TreeView
#define ROOT_TWin32TreeView

class TWin32TreeView {

////////////////////////////////////////////////////////////////////
//                                                                //
//  TWin32TreeView is define to manage Win32 Tree View Controls   //
//                                                                //
//                                                                //
//                                                                //
////////////////////////////////////////////////////////////////////

private:

   HWND  fhwnd;  //

public:

  TWin32TreeView()
  TWin32TreeView(TWin32WindowsObject *obj, const char *title, UInt_t width, UInt_t height);
  TWin32TreeView(TWin32WindowsObject *obj, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);
 ~TWin32TreeView();

  AddItem(TObject *obj);
  AddItem(TObject *obj, const char *name);

};

#endif
