//*CMZ :  2.23/03 08/09/99  18.50.35  by  Fons Rademakers
//*CMZ :  2.00/11 17/08/98  16.02.25  by  Rene Brun
//*CMZ :  2.00/00 06/03/98  15.29.58  by  Rene Brun
//*-- Author :    Ping Yeh   19/12/97

#ifndef ROOT_THelix
#define ROOT_THelix

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
// THelix                                                               //
//                                                                      //
// A Helix with axis // z-axis:                                         //
//                                                                      //
//  X(t) = X0 - vt / w sin(-wt+phi0)                                    //
//  Y(t) = Y0 + vt / w cos(-wt+phi0)                                    //
//  Z(t) = Z0 + vz t                                                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPolyLine3D
#include "TPolyLine3D.h"
#endif
#ifndef ROOT_TRotMatrix
#include "TRotMatrix.h"
#endif

enum EHelixRangeType {
   kHelixT, kHelixX, kHelixY, kHelixZ, kLabX, kLabY, kLabZ, kUnchanged
};


class THelix : public TPolyLine3D {

protected:
   Double_t     fX0;       //Initial X position
   Double_t     fY0;       //Initial Y position
   Double_t     fZ0;       //Initial Z position
   Double_t     fVt;       //Transverse velocity (constant of motion)
   Double_t     fPhi0;     //Initial phase, so vx0 = fVt*cos(fPhi0)
   Double_t     fVz;       //Z velocity (constant of motion)
   Double_t     fW;        //Angular frequency
   Double_t     fAxis[3];  //Direction unit vector of the helix axis
   TRotMatrix  *fRotMat;   //Rotation matrix: axis // z  -->  axis // fAxis
   Double_t     fRange[2]; //Range of helix parameter t

   void         SetRotMatrix();    //Set rotation matrix
   Double_t     FindClosestPhase(Double_t phi0,  Double_t cosine);

   static Int_t fgMinNSeg;   //minimal number of segments in polyline

public:
   THelix();
   THelix(Double_t x,  Double_t y,  Double_t z,
          Double_t vx, Double_t vy, Double_t vz,
          Double_t w);
   THelix(Double_t * xyz, Double_t * v, Double_t w,
          Double_t * range=0, EHelixRangeType rtype=kHelixZ,
          Double_t * axis=0);
   THelix(const THelix &helix);
   virtual ~THelix();

   virtual void    Copy(TObject &helix);
// virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
   virtual void    Draw(Option_t *option="");
// virtual void    DrawHelix(Int_t n, Float_t *p, Option_t *option="");
// virtual void    ExecuteEvent(Int_t event, Int_t px, Int_t py);
   Option_t       *GetOption() const {return fOption.Data();}
// virtual void    ls(Option_t *option="");
   virtual void    Paint(Option_t *option="") { TPolyLine3D::Paint(option); }
// virtual void    PaintPolyLine(Int_t n, Float_t *p, Option_t *option="");
   virtual void    Print(Option_t *option="");
   virtual void    SavePrimitive(ofstream &out, Option_t *option);
   virtual void    SetOption(Option_t *option="") {fOption = option;}
   virtual void    SetAxis(Double_t * axis);       //Define new axis
   virtual void    SetAxis(Double_t x, Double_t y, Double_t z);
   virtual void    SetRange(Double_t * range, EHelixRangeType rtype=kHelixZ);
   virtual void    SetRange(Double_t r1, Double_t r2, EHelixRangeType rtype=kHelixZ);
           void    SetHelix(Double_t *xyz,  Double_t *v, Double_t w,
                            Double_t *range=0, EHelixRangeType type=kUnchanged,
                            Double_t *axis=0);
   virtual void    Sizeof3D() const;

   ClassDef(THelix,1)  //A Helix drawn as a PolyLine3D
};

#endif
