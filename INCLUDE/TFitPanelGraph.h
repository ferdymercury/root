//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.45.43  by  Rene Brun
//*CMZ :  0.90/07 28/11/96  08.29.06  by  Rene Brun
//*-- Author :    Rene Brun   28/11/96

#ifndef ROOT_TFitPanelGraph
#define ROOT_TFitPanelGraph

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
// TFitPanelGraph                                                       //
//                                                                      //
// Class used to control graphs fit panel                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////



#ifndef ROOT_TFitPanel
#include "TFitPanel.h"
#endif

class TSlider;
class TH1;

class TFitPanelGraph : public TFitPanel {

public:
        TFitPanelGraph();
        TFitPanelGraph(const char *name, const char *title, UInt_t ww=300, UInt_t wh=400);
        virtual ~TFitPanelGraph();
        virtual void  Apply(const char *action="");
        virtual void  SavePrimitive(ofstream &out, Option_t *option);

        ClassDef(TFitPanelGraph,1)  //Class used to control graphs fit panel
};

#endif

