//*CMZ :  2.20/04 09/12/98  21.51.31  by  Rene Brun
//*-- Author :    Rene Brun   08/12/98
#ifndef ROOT_TPaveVar
#define ROOT_TPaveVar

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
// TPaveVar                                                             //
//                                                                      //
// A TPaveLabel specialized for TTree variables and cuts                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPaveLabel
#include "TPaveLabel.h"
#endif
#ifndef ROOT_TTreeViewer
#include "TTreeViewer.h"
#endif


class TPaveVar : public TPaveLabel{

protected:
        TTreeViewer   *fViewer;       //Pointer to the TTreeViewer referencing this object
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);

public:
        TPaveVar();
        TPaveVar(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, const Text_t *label, TTreeViewer *viewer);
        TPaveVar(const TPaveVar &PaveVar);
        virtual      ~TPaveVar();
                void  Copy(TObject &PaveVar);
        TTreeViewer  *GetViewer() {return fViewer;}
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  Merge(Option_t *option="AND");  // *MENU*
        virtual void  SetViewer(TTreeViewer *viewer) {fViewer = viewer;}

        ClassDef(TPaveVar,1)  //A TPaveLabel specialized for TTree variables and cuts
};

#endif

