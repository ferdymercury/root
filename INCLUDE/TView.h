//*CMZ :  2.23/11 11/01/2000  08.50.00  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.23/09 09/11/99  10.11.30  by  Rene Brun
//*CMZ :  2.23/04 04/10/99  10.36.36  by  Rene Brun
//*CMZ :  2.20/00 26/11/98  15.18.31  by  Rene Brun
//*CMZ :  1.03/07 04/11/97  17.17.18  by  Rene Brun
//*-- Author :    Nenad Buncic   14/08/95


#ifndef ROOT_TView
#define ROOT_TView

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

/////////////////////////////////////////////////////////////////////////
//                                                                     //
// TView                                                               //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TObject
#include "TObject.h"
#endif

#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif

class TSeqCollection;
class TVirtualPad;

class TView : public TObject, public TAttLine {


protected:
        Int_t           fSystem;           //Coordinate system
        Float_t         fLatitude;         //View angle latitude
        Float_t         fLongitude;        //View angle longitude
        Float_t         fPsi;              //View angle psi
        Float_t         fTN[12];           //
        Float_t         fTB[12];           //
        Float_t         fRmax[3];          //Upper limits of object
        Float_t         fRmin[3];          //Lower limits of object
        Float_t         fTnorm[12];        //Transformation matrix
        Float_t         fTback[12];        //Back transformation matrix
        Float_t         fX1[3];            //First coordinate of X axis
        Float_t         fX2[3];            //Second coordinate of X axis
        Float_t         fY1[3];            //First coordinate of Y axis
        Float_t         fY2[3];            //Second coordinate of Y axis
        Float_t         fZ1[3];            //First coordinate of Z axis
        Float_t         fZ2[3];            //Second coordinate of Z axis
        TSeqCollection *fOutline;          //Collection of outline's objects
        Bool_t          fDefaultOutline;   //Set to TRUE if outline is default cube
        Bool_t          fAutoRange;        //Set to TRUE if range computed automatically
        void            ResetView(Float_t longitude, Float_t latitude, Float_t psi, Int_t &irep);


public:
                TView();
                TView(Int_t system);
                TView(Float_t *rmin, Float_t *rmax, Int_t system = 1);
virtual         ~TView();
   virtual void AxisVertex(Float_t ang, Float_t *av, Int_t &ix1, Int_t &ix2, Int_t &iy1, Int_t &iy2, Int_t &iz1, Int_t &iz2);
   virtual void DefineViewDirection(Float_t *s, Float_t *c,
                                    Double_t cosphi, Double_t sinphi,
                                    Double_t costhe, Double_t sinthe,
                                    Double_t cospsi, Double_t sinpsi,
                                    Float_t *tnorm,  Float_t *tback);
   virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual void  ExecuteRotateView(Int_t event, Int_t px, Int_t py);
   virtual void  FindScope(Float_t *scale, Float_t *center, Int_t &irep);
   virtual Int_t GetDistancetoAxis(Int_t axis, Int_t px, Int_t py, Float_t &ratio);
Bool_t           GetAutoRange() {return fAutoRange;}
Float_t          GetLatitude() {return fLatitude;}
Float_t          GetLongitude() {return fLongitude;}
Float_t          GetPsi() {return fPsi;}
   virtual void  GetRange (Float_t *min, Float_t *max);
Float_t         *GetRmax() {return fRmax;}
Float_t         *GetRmin() {return fRmin;}
TSeqCollection  *GetOutline() {return fOutline; }
Float_t         *GetTN() {return fTN;}
Float_t         *GetTnorm() {return fTnorm;}
  Int_t          GetSystem() {return fSystem;}
   virtual void  FindNormal(Float_t x, Float_t  y, Float_t z, Float_t &zn);
   virtual void  FindPhiSectors(Int_t iopt, Int_t &kphi, Float_t *aphi, Int_t &iphi1, Int_t &iphi2);
   virtual void  FindThetaSectors(Int_t iopt, Float_t phi, Int_t &kth, Float_t *ath, Int_t &ith1, Int_t &ith2);
   virtual void  NDCtoWC(Float_t *pn, Float_t *pw);
   virtual void  NormalWCtoNDC(Float_t *pw, Float_t *pn);
   virtual void  PadRange(Float_t rback);
   virtual void  SetAutoRange(Bool_t autorange=kTRUE) {fAutoRange=autorange;}
   virtual void  SetAxisNDC(Float_t *x1, Float_t *x2, Float_t *y1, Float_t *y2, Float_t *z1, Float_t *z2);
   void          SetLatitude(Float_t latitude) {fLatitude = latitude;}
   void          SetLongitude(Float_t longitude) {fLongitude = longitude;}
   void          SetPsi(Float_t psi) {fPsi = psi;}
   virtual void  SetOutlineToCube();
   virtual void  SetRange(Float_t *min, Float_t *max);
   virtual void  SetRange(Float_t x0, Float_t y0, Float_t z0, Float_t x1, Float_t y1, Float_t z1, Int_t flag=0);
   virtual void  SetSystem(Int_t system) {fSystem = system;}
   virtual void  SetView(Float_t longitude, Float_t latitude, Float_t psi, Int_t &irep);
   virtual void  WCtoNDC(Float_t *pw, Float_t *pn);

//--
    virtual void MoveViewCommand(Char_t chCode, Int_t count=1);

    static  void AdjustPad(TVirtualPad *pad=0);
    virtual void AdjustScales(TVirtualPad *pad=0); // *MENU*
    virtual void Centered3DImages(TVirtualPad *pad=0);
            void Centered();                       // *MENU*
    virtual void FrontView(TVirtualPad *pad=0);
            void Front();                          // *MENU*

    virtual void ZoomView(TVirtualPad *pad=0, Float_t zoomFactor = 1.25 );
    virtual void UnzoomView(TVirtualPad *pad=0,Float_t unZoomFactor = 1.25);

    virtual void RotateView(Float_t phi, Float_t theta, TVirtualPad *pad=0);
    virtual void SideView(TVirtualPad *pad=0);
            void Side();                          // *MENU*
    virtual void TopView(TVirtualPad *pad=0);
            void Top();                           // *MENU*

    virtual void ToggleRulers(TVirtualPad *pad=0);
            void ShowAxis();                      // *MENU*
    virtual void ToggleZoom(TVirtualPad *pad=0);
            void ZoomMove();                      // *MENU*

   ClassDef(TView,1)  //3-D View
};

//      Shortcuts for menus
inline void TView::Centered(){Centered3DImages();}
inline void TView::Front()   {FrontView();}
inline void TView::ShowAxis(){ToggleRulers(); }
inline void TView::Side()    {SideView();}
inline void TView::Top()     {TopView();}
inline void TView::ZoomMove(){ToggleZoom();}

#endif

