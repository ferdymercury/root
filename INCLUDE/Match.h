//*CMZ :  0.03/02 14/08/95  15.59.34  by  Rene Brun
//*-- Author :    Fons Rademakers   04/08/95

#ifndef ROOT_Match
#define ROOT_Match

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
//  Declarations for regular expression routines.                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

typedef unsigned short Pattern_t;

int         Makepat(const char*, Pattern_t*, int);
const char* Matchs(const char*, size_t len, const Pattern_t*,
                   const char**);

#endif
