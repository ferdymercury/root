//*CMZ :  2.00/04 05/04/98  17.10.58  by  Rene Brun
//*CMZ :  1.00/00 05/04/98  17.02.44  by  Rene Brun
//*-- Author :    Rene Brun   11/02/97
#ifndef ROOT_TChainElement
#define ROOT_TChainElement

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TChainElement                                                        //
//                                                                      //
// Describes a component of a TChain.                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TChainElement : public TNamed {

protected:
    Int_t         fEntries;         //Number of entries in the tree of this chain element
    Int_t         fNPackets;        //Number of packets
    Int_t         fPacketSize;      //Number of events in one packet for parallel root
    Int_t         fStatus;          //branch status when used as a branch
    void         *fBaddress;        //branch address when used as a branch
    Text_t       *fPackets;         //Packet descriptor string

public:
        TChainElement();
        TChainElement(const Text_t *filename, const Text_t *title);
        virtual ~TChainElement();
        virtual void     CreatePackets();
        virtual void    *GetBaddress() {return fBaddress;}
        virtual Text_t  *GetPackets() {return fPackets;}
        virtual Int_t    GetPacketSize() {return fPacketSize;}
        virtual Int_t    GetStatus() {return fStatus;}
        virtual void     SetBaddress(void *add) {fBaddress = add;}
        virtual void     SetNumberEntries(Int_t n) {fEntries=n;}
        virtual void     SetPacketSize(Int_t size = 100);
        virtual void     SetStatus(Int_t status) {fStatus = status;}

        ClassDef(TChainElement,0)  //A chain element
};

#endif

