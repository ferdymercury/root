//*CMZ :  2.22/07 28/06/99  18.55.09  by  Fons Rademakers
//*-- Author :    Fons Rademakers   27/06/99

#ifndef ROOT_WidgetMessageTypes
#define ROOT_WidgetMessageTypes

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
// WidgetMessageTypes                                                   //
//                                                                      //
// System predefined widget message types. Message types are constants  //
// that indicate which widget sent the message and by which widget      //
// function (sub-message). Make sure your own message types don't clash //
// whith the ones defined in this file. ROOT reserves all message ids   //
// between 0 - 1000. User defined messages should be in the range       //
// 1001 - 10000. Sub-messages must always be in the range 1-255.        //
// To use MK_MSG() just cast your message id's to an EWidgetMessageType.//
//                                                                      //
//////////////////////////////////////////////////////////////////////////

enum EWidgetMessageTypes {
   kC_COMMAND          = 1,
      kCM_MENU            = 1,
      kCM_MENUSELECT      = 2,
      kCM_BUTTON          = 3,
      kCM_CHECKBUTTON     = 4,
      kCM_RADIOBUTTON     = 5,
      kCM_LISTBOX         = 6,
      kCM_COMBOBOX        = 7,
      kCM_TAB             = 8,
   kC_HSCROLL          = 2,
   kC_VSCROLL          = 3,
      kSB_LINEUP          = 1,
      kSB_LINEDOWN        = 2,
      kSB_PAGEUP          = 3,
      kSB_PAGEDOWN        = 4,
      kSB_SLIDERTRACK     = 5,
      kSB_SLIDERPOS       = 6,
   kC_TEXTENTRY        = 4,
      kTE_TEXTCHANGED     = 1,
      kTE_ENTER           = 2,
   kC_CONTAINER        = 5,
      kCT_ITEMCLICK       = 1,
      kCT_ITEMDBLCLICK    = 2,
      kCT_SELCHANGED      = 3,
   kC_HSLIDER          = 6,
   kC_VSLIDER          = 7,
      kSL_POS             = 1,
      kSL_TRACK           = 2,
   kC_LISTTREE         = 8,

   kC_MSGMAX           = 10000
};


// Message cracking routines
inline Int_t MK_MSG(EWidgetMessageTypes msg, EWidgetMessageTypes submsg)
                                   { return (msg << 8) + submsg; }
inline Int_t GET_MSG(Long_t val)    { return Int_t((val >> 8) & 255); }
inline Int_t GET_SUBMSG(Long_t val) { return Int_t(val & 255); }

#endif
