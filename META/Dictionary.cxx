//*CMZ :  2.20/05 13/12/98  17.41.19  by  Rene Brun
//*CMZ :  1.00/06 23/03/97  11.32.06  by  Rene Brun
//*-- Author :    Fons Rademakers   20/06/96

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
// TDictionary                                                          //
//                                                                      //
// This class defines an abstract interface that must be implemented    //
// by all classes that contain dictionary information.                  //
//                                                                      //
// The dictionary is defined by the followling classes:                 //
// TDataType                              (typedef definitions)         //
// TGlobal                                (global variables)            //
// TGlobalFunc                            (global functions)            //
// TClass                                 (classes)                     //
//    TBaseClass                          (base classes)                //
//    TDataMember                         (class datamembers)           //
//    TMethod                             (class methods)               //
//       TMethodArg                       (method arguments)            //
//                                                                      //
// All the above classes implement the TDictionary abstract interface.  //
// Note: the indentation shows aggregation not inheritance.             //
//                                                                      //
// TMethodCall                            (method call environment)     //
//                                                                      //
//Begin_Html
/*
<img src="gif/tdictionary_classtree.gif">
*/
//End_Html
//////////////////////////////////////////////////////////////////////////

#include "TDictionary.h"

ClassImp(TDictionary)
