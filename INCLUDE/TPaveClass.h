//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/01 19/08/99  10.42.50  by  Rene Brun
//*CMZ :  2.23/00 16/08/99  10.44.18  by  Rene Brun
//*-- Author :    Rene Brun   06/08/99
#ifndef ROOT_TPaveClass
#define ROOT_TPaveClass

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
// TPaveClass                                                           //
//                                                                      //
// A TPaveLabel specialized for TClassTree objects                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPaveLabel
#include "TPaveLabel.h"
#endif
#ifndef ROOT_TTreeViewer
#include "TClassTree.h"
#endif


class TPaveClass : public TPaveLabel{

protected:
        TClassTree   *fClassTree;       //Pointer to the TClassTree referencing this object

public:
        TPaveClass();
        TPaveClass(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, const char *label, TClassTree *classtree);
        TPaveClass(const TPaveClass &PaveVar);
        virtual      ~TPaveClass();
                void  Copy(TObject &PaveVar);
        virtual void  DrawClasses(const char *classes="this");   // *MENU*
        TClassTree   *GetClassTree() {return fClassTree;}
        virtual void  SaveAs(const char *filename=""); // *MENU*
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetClasses(const char *classes="this", Option_t *option="ID");   // *MENU*
        virtual void  ShowClassesUsedBy(const char *classes="this");  // *MENU*
        virtual void  ShowClassesUsing(const char *classes="this");   // *MENU*
        virtual void  SetClassTree(TClassTree *classtree) {fClassTree = classtree;}
        virtual void  ShowLinks(Option_t *option="HMR"); // *MENU*

        ClassDef(TPaveClass,1)  //A TPaveLabel specialized for TClassTree objects
};

#endif
