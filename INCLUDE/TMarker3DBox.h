//*CMZ :  2.23/12 31/01/2000  10.22.48  by  Rene Brun
//*CMZ :  2.23/04 11/10/99  17.19.39  by  Rene Brun
//*CMZ :  2.23/03 08/09/99  18.52.09  by  Fons Rademakers
//*CMZ :  2.22/02 21/05/99  11.16.17  by  Rene Brun
//*CMZ :  2.21/07 21/02/99  19.15.32  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.03/08 09/11/97  17.30.21  by  Rene Brun
//*-- Author :    "Valery fine"   31/10/97
#ifndef ROOT_TMarker3DBox
#define ROOT_TMarker3DBox

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

////////////////////////////////////////////////////////////////////////////
//                                                                        //
// TMarker3DBox                                                           //
//                                                                        //
// Marker3DBox is a special 3-D marker designed for event display.        //
// It has the following parameters:                                       //
//    fDx;              half length in X                                  //
//    fDy;              half length in Y                                  //
//    fDz;              half length in Z                                  //
//    fTranslation[3];  the coordinates of the center of the box          //
//    fDirCos[3];       the direction cosinus defining the orientation    //
//    fRefObject;       A reference to an object                          //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif
#ifndef ROOT_TAtt3D
#include "TAtt3D.h"
#endif
#ifndef ROOT_X3DBuffer
#include "X3DBuffer.h"
#endif

class TH1;

class TMarker3DBox : public TObject, public TAttLine, public TAttFill,
                     public TAtt3D {

protected:

    Float_t  fX;               // X coordinate of center of box
    Float_t  fY;               // Y coordinate of center of box
    Float_t  fZ;               // Z coordinate of center of box
    Float_t  fDx;              // half length in x
    Float_t  fDy;              // half length in y
    Float_t  fDz;              // half length in z

    Float_t  fTheta;           // Angle of box z axis with respect to main Z axis
    Float_t  fPhi;             // Angle of box x axis with respect to main Xaxis
    TObject *fRefObject;       // Pointer to an object

protected:
    virtual void    PaintGLPoints(Float_t *buff);

public:
    TMarker3DBox();
    TMarker3DBox(Float_t x, Float_t y, Float_t z,
                 Float_t dx, Float_t dy, Float_t dz,
                 Float_t theta, Float_t phi);
    virtual        ~TMarker3DBox();

    virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
    virtual void    ExecuteEvent(Int_t event, Int_t px, Int_t py);
    TObject        *GetRefObject() {return fRefObject;}
    virtual void    GetDirection(Float_t &theta, Float_t &phi) {theta = fTheta; phi = fPhi;}
    virtual void    GetPosition(Float_t &x, Float_t &y, Float_t &z) {x=fX; y=fY, z=fZ;}
    virtual void    GetSize(Float_t &dx, Float_t &dy, Float_t &dz) {dx=fDx; dy=fDy; dz=fDz;}

    virtual void    Paint(Option_t *option);
    static  void    PaintH3(TH1 *h, Option_t *option);
    virtual void    PaintShape(X3DBuffer *buff, Bool_t rangeView=kFALSE);
    virtual void    SavePrimitive(ofstream &out, Option_t *option);
    virtual void    SetPoints(Float_t *buff);
    virtual void    SetDirection(Float_t theta, Float_t phi);
    virtual void    SetPosition(Float_t x, Float_t y, Float_t z);
    virtual void    SetSize(Float_t dx, Float_t dy, Float_t dz);
    virtual void    SetRefObject(TObject *obj=0) {fRefObject = obj;}

    virtual void    Sizeof3D() const;
    static  void    SizeofH3(TH1 *h) ;

    ClassDef(TMarker3DBox,1)  //a special 3-D marker designed for event display
};

#endif
