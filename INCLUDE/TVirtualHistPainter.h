//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/02 02/09/99  19.26.21  by  Rene Brun
//*CMZ :  2.23/01 30/08/99  16.09.37  by  Rene Brun
//*-- Author :    Rene Brun   30/08/99
#ifndef ROOT_TVirtualHistPainter
#define ROOT_TVirtualHistPainter

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
// TVirtualHistPainter                                                  //
//                                                                      //
// Abstract base class for Histogram painters                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TClass
#include "TClass.h"
#endif

class TH1;
class TF1;

class TVirtualHistPainter : public TObject {


private:
   static TClass   *fgPainter; //Pointer to class painter

public:
    TVirtualHistPainter();
    virtual ~TVirtualHistPainter();
    virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py) = 0;
    virtual void    DrawPanel() = 0;
    virtual void    ExecuteEvent(Int_t event, Int_t px, Int_t py) = 0;
    virtual void    FitPanel() = 0;
    virtual char   *GetObjectInfo(Int_t px, Int_t py) = 0;
    virtual void    Paint(Option_t *option="") = 0;
    virtual void    PaintStat(Int_t dostat, TF1 *fit) = 0;
    virtual void    SetHistogram(TH1 *h) = 0;

   static  TVirtualHistPainter *HistPainter(TH1 *obj);
   static void      SetPainter(const char *painter);

    ClassDef(TVirtualHistPainter,0)  //Abstract interface for histogram painters
};

#endif
