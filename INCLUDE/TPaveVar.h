//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/09 21/11/99  16.09.54  by  Fons Rademakers
//*CMZ :  2.20/04 09/12/98  21.51.31  by  Rene Brun
//*-- Author :    Rene Brun   08/12/98
#ifndef ROOT_TPaveVar
#define ROOT_TPaveVar

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
        // TPaveVar status bits
        enum { kBranchObject = BIT(15) };

        TPaveVar();
        TPaveVar(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, const char *label, TTreeViewer *viewer);
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

