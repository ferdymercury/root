//*CMZ :  1.03/05 15/10/97  12.11.13  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/08/97

#ifndef ROOT_rootd
#define ROOT_rootd

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
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
