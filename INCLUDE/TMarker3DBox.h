//*CMZ :  1.03/08 09/11/97  17.30.21  by  Rene Brun
//*-- Author :    "Valery fine"   31/10/97
#ifndef ROOT_TMarker3DBox
#define ROOT_TMarker3DBox

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
#ifndef ROOT_X3DBuffer
#include "X3DBuffer.h"
#endif

class TMarker3DBox : public TObject, public TAttLine, public TAttFill {

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
    virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
    virtual void    PaintGLPoints(Float_t *buff);

public:
    TMarker3DBox();
    TMarker3DBox(Float_t x, Float_t y, Float_t z,
                 Float_t dx, Float_t dy, Float_t dz,
                 Float_t theta, Float_t phi);
    virtual        ~TMarker3DBox();

    TObject        *GetRefObject() {return fRefObject;}
    virtual void    GetDirection(Float_t &theta, Float_t &phi) {theta = fTheta; phi = fPhi;}
    virtual void    GetPosition(Float_t &x, Float_t &y, Float_t &z) {x=fX; y=fY, z=fZ;}
    virtual void    GetSize(Float_t &dx, Float_t &dy, Float_t &dz) {dx=fDx; dy=fDy; dz=fDz;}
    virtual Bool_t  Is3D() {return kTRUE;}

    virtual void    Paint(Option_t *option);
    virtual void    PaintShape(X3DBuffer *buff);
    virtual void    SavePrimitive(ofstream &out, Option_t *option);
    virtual void    SetPoints(Float_t *buff);
    virtual void    SetDirection(Float_t theta, Float_t phi);
    virtual void    SetPosition(Float_t x, Float_t y, Float_t z);
    virtual void    SetSize(Float_t dx, Float_t dy, Float_t dz);
    virtual void    SetRefObject(TObject *obj=0) {fRefObject = obj;}

    virtual void    Sizeof3D() const;

    ClassDef(TMarker3DBox,1)  //a special 3-D marker designed for event display
};

#endif
