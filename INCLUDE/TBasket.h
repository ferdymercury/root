//*CMZ :  2.23/12 31/01/2000  10.48.04  by  Rene Brun
//*CMZ :  2.23/09 15/11/99  16.39.58  by  Rene Brun
//*CMZ :  2.23/00 16/08/99  16.18.10  by  Rene Brun
//*CMZ :  2.22/07 30/06/99  11.38.05  by  Rene Brun
//*CMZ :  2.22/01 18/05/99  09.58.35  by  Rene Brun
//*CMZ :  2.00/06 15/05/98  09.35.59  by  Rene Brun
//*-- Author :    Rene Brun   19/01/96

#ifndef ROOT_TBasket
#define ROOT_TBasket

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
// TBasket                                                              //
//                                                                      //
// The TBasket objects are created at run time to collect TTree entries //
// in buffers. When a Basket is full, it is written to the file.        //
// The Basket is kept in memory if there is enough space.               //
//  (see the fMaxVirtualsize of TTree).                                 //
//                                                                      //
// The Basket class derives from TKey.                                  //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TKey
#include "TKey.h"
#endif


class TFile;
class TTree;
class TBranch;

class TBasket : public TKey {

protected:
    Int_t       fBufferSize;      //fBuffer length in bytes
    Int_t       fNevBufSize;      //Length in Int_t of fEntryOffset
    Int_t       fNevBuf;          //Number of entries in basket
    Int_t       fLast;            //Pointer to last used byte in basket
    Bool_t      fHeaderOnly;      //True when only the basket header must be read/written
    char        *fZipBuffer;      //Basket compressed buffer (if compression)
    Int_t       *fEntryOffset;    //[fNevBuf] Offset of entries in fBuffer(TKey)
    TBranch     *fBranch;         //Pointer to the basket support branch

public:
    TBasket();
    TBasket(const char *name, const char *title, TBranch *branch);
    virtual ~TBasket();

    virtual void    AdjustSize(Int_t newsize);
    virtual Int_t   DropBuffers();
    TBranch         *GetBranch() {return fBranch;}
    virtual Int_t   GetBufferSize() {return fBufferSize;}
    virtual Int_t   *GetEntryOffset() {return fEntryOffset;}
    virtual Int_t   GetEntryPointer(Int_t Entry);
    char            *GetZipBuffer() {return fZipBuffer;}
    virtual Int_t   GetNevBuf() {return fNevBuf;}
    virtual Int_t   GetNevBufSize() {return fNevBufSize;}
    virtual Int_t   GetLast() {return fLast;}
    virtual void    ReadBasketBuffers(Seek_t pos, Int_t len, TFile *file);
    virtual Int_t   ReadBasketBytes(Seek_t pos, TFile *file);

    virtual void    SetNevBufSize(Int_t n) {fNevBufSize=n;}
    virtual void    SetReadMode();
    virtual void    SetWriteMode();
    virtual void    Update(Int_t newlast);
    virtual Int_t   WriteBuffer();

    ClassDef(TBasket,2)  //the TBranch buffers
};

#endif
