//*CMZ :  2.24/03 02/05/2000  19.08.37  by  Valery Fine(fine@bnl.gov)
//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  12.02.48  by  Rene Brun
//*CMZ :  2.21/00 02/01/99  21.56.23  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/12 07/10/98  08.52.48  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.03/09 05/12/97  13.26.56  by  Fons Rademakers
//*-- Author :    Rene Brun   14/09/95

#ifndef ROOT_TRotMatrix
#define ROOT_TRotMatrix

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
// TRotMatrix                                                           //
//                                                                      //
// Rotation Matrix for 3-D geometry objects.                            //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

enum {
   kReflection = BIT(23)    //  "Reflection" bit
};


class TRotMatrix  : public TNamed {
private:
   virtual      void  SetReflection();   // Set the "reflection" flag if det < 0

protected:
   Int_t        fNumber;      //Rotation matrix number
   Int_t        fType;        //Type of matrix (0=identity, 1=reflexion, 2=otherwise)
   Double_t     fTheta;       //theta angle
   Double_t     fPhi;         //phi angle
   Double_t     fPsi;         //psi angle
   Double_t     fMatrix[9];   //Rotation matrix

public:
   TRotMatrix();
   TRotMatrix(const char *name, const char *title, Double_t *matrix);
   TRotMatrix(const char *name, const char *title, Double_t theta, Double_t phi, Double_t psi);
   TRotMatrix(const char *name, const char *title, Double_t theta1, Double_t phi1,
                                           Double_t theta2, Double_t phi2,
                                           Double_t theta3, Double_t phi3);
   virtual ~TRotMatrix();
   virtual Double_t  Determinant() const ;   // returns the determinant of this matrix
   virtual Double_t* GetMatrix()         {return &fMatrix[0];}
   virtual Int_t     GetNumber()   const {return fNumber;}
   virtual Int_t     GetType()     const {return fType;}
   virtual Double_t  GetTheta()    const {return fTheta;}
   virtual Double_t  GetPhi()      const {return fPhi;}
   virtual Double_t  GetPsi()      const {return fPsi;}
   virtual Double_t* GetGLMatrix(Double_t *rGLMatrix) const ;  // Convert this matrix to the OpenGL [4x4]
   virtual Bool_t    IsReflection() const {return TestBit(kReflection);}  // Return kTRUE if this matrix defines the reflection
   virtual const Double_t* SetAngles(Double_t theta1, Double_t phi1,Double_t theta2, Double_t phi2, Double_t theta3, Double_t phi3);
   virtual void      SetMatrix(const Double_t *matrix);
   virtual void      SetName(const char *name);

   ClassDef(TRotMatrix,1)  //Rotation Matrix for 3-D geometry objects
};

inline void TRotMatrix::SetName(const char *) { }

#endif


