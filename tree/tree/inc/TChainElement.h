// @(#)root/tree:$Id$
// Author: Rene Brun   11/02/97

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/
#ifndef ROOT_TChainElement
#define ROOT_TChainElement


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TChainElement                                                        //
//                                                                      //
// Describes a component of a TChain.                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#include "TNamed.h"

class TBranch;

class TChainElement : public TNamed {

   /// TChainElement status bits
   enum EStatusBits {
      kHasBeenLookedUp = BIT(15)
   };

protected:
   Long64_t      fEntries;           ///<  Number of entries in the tree of this chain element
   Int_t         fNPackets;          ///<  Number of packets
   Int_t         fPacketSize;        ///<  Number of events in one packet for parallel root
   Int_t         fStatus;            ///<  branch status when used as a branch
   void         *fBaddress;          ///<! branch address when used as a branch
   TString       fBaddressClassName; ///<! Name of the class pointed to by fBaddress
   UInt_t        fBaddressType;      ///<! Type of the value pointed to by fBaddress
   bool          fBaddressIsPtr : 1; ///<! True if the address is a pointer to an address
   bool          fDecomposedObj : 1; ///<! True if the address needs the branch in MakeClass/DecomposedObj mode.
   bool          fCheckedType : 1;   ///<! True if the branch type and the address type have been checked.
   char         *fPackets;           ///<! Packet descriptor string
   TBranch     **fBranchPtr;         ///<! Address of user branch pointer (to updated upon loading a file)
   Int_t         fLoadResult;        ///<! Return value of TChain::LoadTree(); 0 means success
   bool          fIsDelayed{false};  ///<! Postpone detection of missing branch in certain contexts (e.g. TTree::SetBranchStatus)

public:
   TChainElement();
   TChainElement(const char *title, const char *filename);
   ~TChainElement() override;
   virtual void        CreatePackets();
   virtual void       *GetBaddress() const {return fBaddress;}
   virtual const char *GetBaddressClassName() const { return fBaddressClassName; }
   virtual bool        GetBaddressIsPtr() const { return fBaddressIsPtr; }
   virtual UInt_t      GetBaddressType() const { return fBaddressType; }
   virtual TBranch   **GetBranchPtr() const { return fBranchPtr; }
   virtual Long64_t    GetEntries() const {return fEntries;}
           Int_t       GetLoadResult() const { return fLoadResult; }
           bool        GetCheckedType() const { return fCheckedType; }
           bool        GetDecomposedObj() const { return fDecomposedObj; }
   virtual char       *GetPackets() const {return fPackets;}
   virtual Int_t       GetPacketSize() const {return fPacketSize;}
   virtual Int_t       GetStatus() const {return fStatus;}
   virtual bool        HasBeenLookedUp() { return TestBit(kHasBeenLookedUp); }
   void        ls(Option_t *option="") const override;
   virtual void        SetBaddress(void *add) {fBaddress = add;}
   virtual void        SetBaddressClassName(const char* clname) { fBaddressClassName = clname; }
   virtual void        SetBaddressIsPtr(bool isptr) { fBaddressIsPtr = isptr; }
   virtual void        SetBaddressType(UInt_t type) { fBaddressType = type; }
   virtual void        SetBranchPtr(TBranch **ptr) { fBranchPtr = ptr; }
           void        SetCheckedType(bool m) { fCheckedType = m; }
           void        SetDecomposedObj(bool m) { fDecomposedObj = m; }
           void        SetLoadResult(Int_t result) { fLoadResult = result; }
   virtual void        SetLookedUp(bool y = true);
   virtual void        SetNumberEntries(Long64_t n) {fEntries=n;}
   virtual void        SetPacketSize(Int_t size = 100);
   virtual void        SetStatus(Int_t status) {fStatus = status;}
           void        IsDelayed(bool isDelayed) { fIsDelayed = isDelayed; }
           bool        IsDelayed() const { return fIsDelayed; }

   ClassDefOverride(TChainElement,2);  //A chain element
};

#endif

