//*CMZ :  2.00/00 03/03/99  14.18.31  by  Rene Brun
//*CMZ :  1.00/06 23/03/97  11.38.37  by  Rene Brun
//*-- Author :    Rene Brun   11/02/97

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
// A TChainElement describes a component of a TChain.                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TTree.h"
#include "TChainElement.h"

ClassImp(TChainElement)

//______________________________________________________________________________
TChainElement::TChainElement(): TNamed()
{
//*-*-*-*-*-*Default constructor for a chain element*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        =======================================

   fNPackets   = 0;
   fPackets    = 0;
   fEntries    = 0;
   fPacketSize = 100;
   fBaddress   = 0;
   fStatus     = -1;
}

//______________________________________________________________________________
TChainElement::TChainElement(const Text_t *name, const Text_t *title)
    :TNamed(name,title)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a chain element*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ======================
//

   fNPackets   = 0;
   fPackets    = 0;
   fEntries    = 0;
   fPacketSize = 100;
   fBaddress   = 0;
   fStatus     = -1;
}

//______________________________________________________________________________
TChainElement::~TChainElement()
{
//*-*-*-*-*-*Default destructor for a chain element*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ======================================

   delete [] fPackets;
}

//_______________________________________________________________________
void TChainElement::CreatePackets()
{
//*-*-*-*-*-*-*-*-*Initialize the packet descriptor string*-*-*-*-*-*-*-*-*-*
//*-*              =======================================

   fNPackets = 1 + fEntries/fPacketSize;
   delete [] fPackets;
   fPackets = new Text_t[fNPackets+1];
   for (Int_t i=0;i<fNPackets;i++) fPackets[i] = ' ';
   fPackets[fNPackets] = 0;

}

//_______________________________________________________________________
void TChainElement::SetPacketSize(Int_t size)
{
//*-*-*-*-*-*-*-*-*Set number of events per packet for parallel root*-*-*-*-*
//*-*              =================================================

   fPacketSize = size;
}
