//*CMZ :  0.03/02 14/08/95  15.59.34  by  Rene Brun
//*-- Author :    Rene Brun   05/05/95

#ifndef ROOT_Hparam
#define ROOT_Hparam

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
// THparam                                                              //
//                                                                      //
// structure to store current histogram parameters.                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_Htypes
#include "Htypes.h"
#endif

typedef struct Hparam_t {
//*-*-     structure to store current histogram parameters
//*-*      ===============================================
//*-*
   Int_t    xfirst;        //first bin number along X
   Int_t    xlast;         //last bin number along X
   Float_t  xbinsize;      //bin size in case of equidistant bins
   Float_t  xlowedge;      //low edge of axis
   Float_t  xmin;          //minimum value along X
   Float_t  xmax;          //maximum value along X
   Int_t    yfirst;        //first bin number along Y
   Int_t    ylast;         //last bin number along Y
   Float_t  ybinsize;      //bin size in case of equidistant bins
   Float_t  ylowedge;      //low edge of axis
   Float_t  ymin;          //minimum value along y
   Float_t  ymax;          //maximum value along y
   Int_t    zfirst;        //first bin number along Z
   Int_t    zlast;         //last bin number along Z
   Float_t  zbinsize;      //bin size in case of equidistant bins
   Float_t  zlowedge;      //low edge of axis
   Float_t  zmin;          //minimum value along Z
   Float_t  zmax;          //maximum value along Z
   Float_t  factor;        //multiplication factor (normalization)
   Stat_t   allchan;       //integrated sum of contents
   Float_t  baroffset;     //offset of bin for bars or legos [0,1]
   Float_t  barwidth;      //width of bin for bars and legos [0,1]
} Hparam_t;

#endif
