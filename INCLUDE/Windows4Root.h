//*CMZ :  2.00/00 22/02/98  17.41.12  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.00/07 11/03/97  12.40.51  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Rene Brun   07/12/95
#ifndef ROOT_Windows4Root
#define ROOT_Windows4Root

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// This include file is necessary to solve a problem with the original  //
//  Windows.h file from Microsoft                                       //
// The native Windows.h redefines the following names:                  //
//     RemoveDirectory                                                  //
//     GetClassName                                                     //
//     GetTextAlign                                                     //
//     GetTextColor                                                     //
//                                                                      //
//   This include file references the original Windows.h file           //
//   and undefined these symbols in exit.                               //
//////////////////////////////////////////////////////////////////////////

#ifndef __CINT__
#include <windows.h>



#undef OpenSemaphore

#undef RemoveDirectory
#undef GetClassName
#undef GetTextAlign
#undef GetTextColor

#undef SetTextAlign
#undef SetTextColor
#undef UpdateWindow
#undef SetClipRegion


    #undef      ClearWindow
    #undef      ClosePixmap
    #undef      CloseWindow
    #undef      CopyPixmap
    #undef      DrawBox
    #undef      DrawCellArray
    #undef      DrawFillArea
    #undef      DrawLine
    #undef      DrawPolyLine
    #undef      DrawPolyMarker
    #undef      DrawText
    #undef      GetCharacterUp

    #undef      GetDoubleBuffer
    #undef      GetPixel
    #undef      GetPlanes
    #undef      GetRGB
    #undef      GetTextExtent
    #undef      InitWindow
    #undef      MoveWindow
    #undef      OpenPixmap
    #undef      PutByte
    #undef      QueryPointer
    #undef      RescaleWindow
    #undef      ResizePixmap
    #undef      ResizeWindow
    #undef      SelectWindow
    #undef      SetCharacterUp
    #undef      SetClipOFF
    #undef      SetClipRegion
    #undef      SetCursor
    #undef      SetDrawMode
    #undef      SetFillColor
    #undef      SetFillStyle
    #undef      SetLineColor
    #undef      SetLineType
    #undef      SetLineStyle
    #undef      SetLineWidth
    #undef      SetMarkerColor
    #undef      SetMarkerSize
    #undef      SetMarkerStyle
    #undef      SetRGB
    #undef      SetTextAlign
    #undef      SetTextColor
    #undef      SetTextFont
    #undef      SetTextFont
    #undef      SetTextSize
    #undef      UpdateWindow
    #undef      Warp
    #undef      WritePixmap

    #undef      CreateWindow

#   ifndef ROOT_TGWin32Object
#      undef GetObject
#      undef GetClassInfo
#   endif

#else
   typedef HANDLE void *
#endif


#endif
