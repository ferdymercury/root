//*CMZ :  2.00/06 15/05/98  09.35.59  by  Rene Brun
//*CMZ :  1.01/00 29/04/97  16.02.43  by  Rene Brun
//*-- Author :    Rene Brun   19/01/96

#ifndef ROOT_TBasket
#define ROOT_TBasket

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
// TBasket                                                              //
//                                                                      //
// The TBasket objects are created at run time to collect TTree events  //
// in buffers. When a Basket is full, it is written to the file.        //
// The Basket is kept in memory if there is enough space.               //
//  (see the fMaxVirtualsize of TTree).                                 //
//                                                                      //
// The Basket class derives from TKey.                                  //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TKey
#include "TKey.h"
#endif


class TTree;
class TBasket;
class TBranch;
class TLeaf;

class TBasket : public TKey {

protected:
    Int_t       fBufferSize;      //fBuffer length in bytes
    Int_t       fNevBufSize;      //Length in Int_t of fEventOffset
    Int_t       fNevBuf;          //Number of events in basket
    Int_t       fLast;            //Pointer to last used byte in basket
    Bool_t      fWritingBuffer;   //True when writing buffer
    char        *fZipBuffer;      //Basket compressed buffer (if compression)
    Int_t       *fEventOffset;    //Offset of events in fBuffer(TKey)
    TBranch     *fBranch;         //Pointer to the basket support branch

public:
    TBasket();
    TBasket(const Text_t *name, const Text_t *title, TBranch *branch);
    virtual ~TBasket();

    virtual void    AdjustSize(Int_t newsize);
    virtual Int_t   DropBuffers();
    TBranch         *GetBranch() {return fBranch;}
    virtual Int_t   GetBufferSize() {return fBufferSize;}
    virtual Int_t   *GetEventOffset() {return fEventOffset;}
    virtual Int_t   GetEventPointer(Int_t event);
    char            *GetZipBuffer() {return fZipBuffer;}
    virtual Int_t   GetNevBuf() {return fNevBuf;}
    virtual Int_t   GetNevBufSize() {return fNevBufSize;}
    virtual Int_t   GetLast() {return fLast;}
    virtual void    Print(Option_t *option="");
    virtual void    ReadBasketBuffers();
    virtual void    Reset(Option_t *option="");

    virtual void    SetNevBufSize(Int_t n) {fNevBufSize=n;}
    virtual void    SetReadMode();
    virtual void    SetWriteMode();
    virtual void    Update(Int_t newlast);
    virtual Int_t   WriteBuffer();

    ClassDef(TBasket,1)  //the TBranch event buffers
};

#endif
