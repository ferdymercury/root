//*CMZ :  1.03/04 17/09/97  13.02.46  by  Piotr Golonka
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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGenerator                                                           //
//                                                                      //
// Is an abstact base class, that defines the interface of ROOT and the //
// various event generators. Every event generator should inherit from  //
// TGenerator or its subclasses.                                        //
//                                                                      //
// Every class inherited from TGenerator knows already the interface to //
// the /HEPEVT/ common block. So in the event creation of the various   //
// generators, the /HEPEVT/ common block should be filled               //
// The GetPrimaries method then parses the result from the event        //
// generators into a TClonesArray of TPrimary objects.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGenerator
#define ROOT_TGenerator

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TObjArray
#include "TObjArray.h"
#endif

class TBrowser;
class TPrimary;

class TGenerator : public TNamed {
 protected:
        Float_t       fPtCut;        //Pt cut. Do not show primaries below
        Bool_t        fShowNeutrons; //display neutrons if true
        TObjArray    *fPrimaries;    //static container of the primaries
 public:

        TGenerator(){}; //Used by Dictionary
        TGenerator(Text_t *name, Text_t *title="Generator class");
        virtual ~TGenerator();
        virtual void            Browse(TBrowser *b);
        virtual Int_t           DistancetoPrimitive(Int_t px, Int_t py);
        virtual void            Draw(Option_t *option="");
        virtual void            ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual TObjArray      *GetPrimaries(Option_t *option="");
        virtual TPrimary       *GetPrimary(Int_t i);
        Int_t                   GetNumberOfPrimaries() {return fPrimaries->GetLast()+1;}
        virtual TObjArray      *GetListOfPrimaries() {return fPrimaries;}
        Float_t                 GetPtCut() {return fPtCut;}
        virtual void            Paint(Option_t *option="");
        virtual void            SetPtCut(Float_t ptcut=0); // *MENU*
        virtual void            SetViewRadius(Float_t rbox = 1000); //*MENU*
        virtual void            SetViewRange(Float_t xmin=-10000,Float_t ymin=-10000,Float_t zmin=-10000
                                            ,Float_t xmax=10000,Float_t ymax=10000,Float_t zmax=10000);  // *MENU*
        virtual void            ShowNeutrons(Bool_t show=1); // *MENU*

        ClassDef(TGenerator,1)  //Event generator interface abstract baseclass
};

#endif
