//*CMZ :  2.23/12 26/01/2000  09.45.01  by  Rene Brun
//*CMZ :  2.22/01 26/04/99  11.51.22  by  Rene Brun
//*CMZ :  2.00/00 03/03/99  14.18.31  by  Rene Brun
//*CMZ :  1.00/06 23/03/97  11.38.37  by  Rene Brun
//*-- Author :    Rene Brun   11/02/97

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
TChainElement::TChainElement(const char *name, const char *title)
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
   fPackets = new char[fNPackets+1];
   for (Int_t i=0;i<fNPackets;i++) fPackets[i] = ' ';
   fPackets[fNPackets] = 0;

}

//_______________________________________________________________________
void TChainElement::SetPacketSize(Int_t size)
{
//*-*-*-*-*-*-*-*-*Set number of entries per packet for parallel root*-*-*-*-*
//*-*              =================================================

   fPacketSize = size;
}
