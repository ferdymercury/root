//*CMZ :  1.03/02 01/09/97  18.51.02  by  Fons Rademakers
//*-- Author :    Rene Brun   05/05/95

#ifndef ROOT_Foption
#define ROOT_Foption

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
// Foption                                                              //
//                                                                      //
// Histogram fit options structure.                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


struct Foption_t {
//*-*      chopt may be the concatenation of the following options:
//*-*      =======================================================
//*-*
//*-*   The following structure members are set to 1 if the option is selected:
   int Quiet;       // "Q"  Quiet mode. No print
   int Verbose;     // "V"  Verbose mode. Print results after each iteration
   int Bound;       // "B"  Some or all parameters are bounded
   int Like;        // "L"  Use Log Likelihood. Default is chisquare method
   int W1;          // "W"  Set all the weights to 1. Ignore error bars
   int Errors;      // "E"  Performs a better error evaluation, calling HESSE and MINOS
   int Range;       // "R"  Use the range stored in function
   int Gradient;    // "G"  Option to compute derivatives analytically
   int Nostore;     // "N"  If set, do not store the function graph
   int Nograph;     // "0"  If set, do not display the function graph
   int Plus;        // "+"  Add new function (default is replace)
   int Integral;    // "I"  Use function integral instead of function in center of bin
};

#endif
