//*CMZ :  1.03/05 15/10/97  12.11.13  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/08/97

#ifndef ROOT_rootd
#define ROOT_rootd

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
// rootd                                                                //
//                                                                      //
// This header file contains public definitions and declarations        //
// used by rootd.                                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

// Rootd error codes. In case of change update also strings in TNetFile.h.

enum ERootdErrors {
   kErrUndef,
   kErrNoFile,
   kErrBadFile,
   kErrFileExists,
   kErrNoAccess,
   kErrFileOpen,
   kErrFileWriteOpen,
   kErrFileReadOpen,
   kErrNoSpace,
   kErrBadOp,
   kErrBadMess,
   kErrFilePut,
   kErrFileGet,
   kErrNoUser,
   kErrNoAnon,
   kErrBadUser,
   kErrNoHome,
   kErrNoPasswd,
   kErrBadPasswd,
   kErrFatal
};

#endif
