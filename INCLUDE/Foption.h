//*CMZ :  2.23/09 23/11/99  19.19.17  by  Rene Brun
//*CMZ :  2.23/03 15/09/99  11.16.43  by  Rene Brun
//*CMZ :  1.03/02 01/09/97  18.51.02  by  Fons Rademakers
//*-- Author :    Rene Brun   05/05/95

#ifndef ROOT_Foption
#define ROOT_Foption

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
   int User;        // "U"  Use a User specified fitting algorithm (via SetFCN)
   int W1;          // "W"  Set all the weights to 1. Ignore error bars
   int Errors;      // "E"  Performs a better error evaluation, calling HESSE and MINOS
   int More;        // "M"  Improve fit results.
   int Range;       // "R"  Use the range stored in function
   int Gradient;    // "G"  Option to compute derivatives analytically
   int Nostore;     // "N"  If set, do not store the function graph
   int Nograph;     // "0"  If set, do not display the function graph
   int Plus;        // "+"  Add new function (default is replace)
   int Integral;    // "I"  Use function integral instead of function in center of bin
};

#endif
