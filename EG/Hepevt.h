//*CMZ :  0.90/01 08/09/97  10.27.37  by  Rene Brun
//*-- Author :    Ola Nordmann   21/09/95

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


#ifndef ROOT_HepEvt
#define ROOT_HepEvt

extern "C" {

#ifndef __CFORTRAN_LOADED
#include "cfortran.h"
#endif

typedef struct {
	Int_t	 nevhep;
        Int_t    nhep;
        Int_t    isthep[2000];
        Int_t    idhep[2000];
        Int_t    jmohep[2000][2];
        Int_t    jdahep[2000][2];
        Double_t phep[2000][5];
        Double_t vhep[2000][4];
} HEPEVT_DEF;

#define HEPEVT COMMON_BLOCK(HEPEVT,hepevt)

COMMON_BLOCK_DEF(HEPEVT_DEF,HEPEVT);

HEPEVT_DEF HEPEVT;

}

#endif
