//*CMZ :  2.00/08 02/06/98  10.09.23  by  Rene Brun
//*CMZ :  1.00/09 21/04/97  16.11.09  by  Fons Rademakers
//*-- Author :    Rene Brun   11/02/97

#ifndef ROOT_TEventList
#define ROOT_TEventList

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
// TEventList                                                           //
//                                                                      //
// A list of selected entries in a TTree.                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TDirectory;

class TEventList : public TNamed {

protected:
        Int_t            fN;           //Number of elements in the list
        Int_t            fSize;        //Size of array
        Int_t            fDelta;       //Increment size
        Int_t            *fList;       //Array of elements
        TDirectory       *fDirectory;  //Pointer to directory holding this tree

public:
        TEventList();
        TEventList(const Text_t *name, const Text_t *title="",Int_t initsize=0, Int_t delta = 0);
        TEventList(const TEventList &list);
        virtual          ~TEventList();
        virtual void     Add(const TEventList *list);
        virtual Bool_t   Contains(Int_t entry);
        virtual void     Enter(Int_t entry);
        TDirectory      *GetDirectory() {return fDirectory;}
        virtual Int_t    GetEntry(Int_t index) const;
        virtual Int_t    GetIndex(Int_t entry) const;
        virtual Int_t   *GetList() const { return fList; }
        virtual Int_t    GetN() const { return fN; }
        virtual Int_t    GetSize() const { return fSize; }
        virtual void     Print(Option_t *option="");
        virtual void     Reset(Option_t *option="");
        virtual void     Resize(Int_t delta=0);
        virtual void     SetDirectory(TDirectory *dir);
        virtual void     Sort();
        virtual void     Subtract(const TEventList *list);

        TEventList& operator=(const TEventList &list);
 friend TEventList  operator+(const TEventList &list1, const TEventList &list2);
 friend TEventList  operator-(const TEventList &list1, const TEventList &list2);

        ClassDef(TEventList,1)  //A list of selected entries in a TTree.
};

#endif

