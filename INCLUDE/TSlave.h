//*CMZ :  2.20/00 08/11/98  12.07.26  by  Rene Brun
//*CMZ :  2.00/05 20/04/98  15.14.29  by  Fons Rademakers
//*CMZ :  1.03/09 11/12/97  08.14.32  by  Fons Rademakers
//*-- Author :    Fons Rademakers   13/02/97

#ifndef ROOT_TSlave
#define ROOT_TSlave

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
// TSlave                                                               //
//                                                                      //
// This class describes a PROOF slave server.                           //
// It contains information like the slaves host name, ordinal number,   //
// performance index, socket, etc. Objects of this class can only be    //
// created via TProof member functions.                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif

class TSocket;


class TSlave : public TObject {

friend class TProof;

private:
   TString   fName;      //slave's hostname
   Int_t     fOrdinal;   //slave's ordinal number
   Int_t     fPerfIdx;   //performance index, on a scale of 1-200, PPro200=40
   TSocket  *fSocket;    //socket to slave
   TProof   *fProof;     //proof cluster to which slave belongs
   Double_t  fBytesRead; //bytes read by slave (info is obtained from slave)
   Float_t   fRealTime;  //real time spent executing commands (info obtained from slave)
   Float_t   fCpuTime;   //CPU time spent executing commands (info obtained from slave)

   TSlave() { fOrdinal = -1; fSocket = 0; fProof = 0; }
   TSlave(const TSlave &) { }
   void operator=(const TSlave &) { }

   TSlave(const char *host, Int_t ord, Int_t perf, TProof *proof);

public:
   virtual ~TSlave();

   void        Close(Option_t *opt = "");

   Int_t       Compare(TObject *obj);
   Bool_t      IsSortable() const { return kTRUE; }

   const char *GetName() const { return fName.Data(); }
   Int_t       GetOrdinal() const { return fOrdinal; }
   Int_t       GetPerfIdx() const { return fPerfIdx; }
   TSocket    *GetSocket() const { return fSocket; }
   TProof     *GetProof() const { return fProof; }
   Double_t    GetBytesRead() const { return fBytesRead; }
   Float_t     GetRealTime() const { return fRealTime; }
   Float_t     GetCpuTime() const { return fCpuTime; }

   Bool_t      IsValid() const { return fSocket ? kTRUE : kFALSE; }

   void        Print(Option_t *option="");

   ClassDef(TSlave,0)  //PROOF slave server
};

#endif
