//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/04 06/10/99  18.55.30  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  12.03.32  by  Rene Brun
//*CMZ :  2.21/06 17/04/99  07.50.09  by  Rene Brun
//*CMZ :  2.21/04 22/01/99  19.05.00  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/12 07/10/98  08.52.28  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Rene Brun   14/09/95

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

#include "TROOT.h"
#include "TGeometry.h"
#include "TRotMatrix.h"

ClassImp(TRotMatrix)

//______________________________________________________________________________
//
// Manages a detector rotation matrix. See class TGeometry.
//

//______________________________________________________________________________
TRotMatrix::TRotMatrix()
{
//*-*-*-*-*-*-*-*-*-*-*RotMatrix default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   //do nothing
}



//______________________________________________________________________________
TRotMatrix::TRotMatrix(const char *name, const char *title, Double_t *matrix)
           :TNamed(name,title)
{
  if (!matrix) { Error("ctor","No rotation is supplied"); return; }

  SetMatrix(matrix);
  fNumber = gGeometry->GetListOfMatrices()->GetSize();
  gGeometry->GetListOfMatrices()->Add(this);
}

//______________________________________________________________________________
TRotMatrix::TRotMatrix(const char *name, const char *title, Double_t theta, Double_t phi, Double_t psi)
           :TNamed(name,title)
{
//*-*-*-*-*-*-*-*-*-*-*RotMatrix normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   printf("ERROR: This form of TRotMatrix constructor not implemented yet\n");

   Int_t i;
   fTheta  = theta;
   fPhi    = phi;
   fPsi    = psi;
   fType   = 2;
   for (i=0;i<9;i++) fMatrix[i] = 0;
   fMatrix[0] = 1;   fMatrix[4] = 1;   fMatrix[8] = 1;

   fNumber = gGeometry->GetListOfMatrices()->GetSize();
   gGeometry->GetListOfMatrices()->Add(this);
}



//______________________________________________________________________________
TRotMatrix::TRotMatrix(const char *name, const char *title, Double_t theta1, Double_t phi1
                                                  , Double_t theta2, Double_t phi2
                                                  , Double_t theta3, Double_t phi3)
                :TNamed(name,title)
{
//*-*-*-*-*-*RotMatrix normal constructor defined a la GEANT*-*-*-*-*-*-*
//*-*        ===============================================
//
// The TRotMatrix constructor with six angles uses the GEANT convention:
//
// theta1 is the polar angle of the x-prim axis in the main reference system
// (MRS), theta2 and theta3 have the same meaning for the y-prim and z-prim
// axis.
//
// Phi1 is the azimuthal angle of the x-prim in the MRS and phi2 and phi3
// have the same meaning for y-prim and z-prim.
//
//
// for example, the unit matrix is defined in the following way.
//
//     x-prim || x, y-prim || y, z-prim || z
//
//     means:  theta1=90, theta2=90, theta3=0, phi1=0, phi2=90, phi3=0

   const Double_t degrad = 0.0174532925199432958;

   fTheta  = theta1;
   fPhi    = phi1;
   fPsi    = theta2;

   fType   = 2;
   if (!strcmp(GetName(),"Identity")) fType = 0;

   fMatrix[0] = TMath::Sin(theta1*degrad)*TMath::Cos(phi1*degrad);
   fMatrix[1] = TMath::Sin(theta1*degrad)*TMath::Sin(phi1*degrad);
   fMatrix[2] = TMath::Cos(theta1*degrad);
   fMatrix[3] = TMath::Sin(theta2*degrad)*TMath::Cos(phi2*degrad);
   fMatrix[4] = TMath::Sin(theta2*degrad)*TMath::Sin(phi2*degrad);
   fMatrix[5] = TMath::Cos(theta2*degrad);
   fMatrix[6] = TMath::Sin(theta3*degrad)*TMath::Cos(phi3*degrad);
   fMatrix[7] = TMath::Sin(theta3*degrad)*TMath::Sin(phi3*degrad);
   fMatrix[8] = TMath::Cos(theta3*degrad);

   SetReflection();

   fNumber = gGeometry->GetListOfMatrices()->GetSize();
   gGeometry->GetListOfMatrices()->Add(this);
}


//______________________________________________________________________________
TRotMatrix::~TRotMatrix()
{
//*-*-*-*-*-*-*-*-*-*-*RotMatrix default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

    gGeometry->GetListOfMatrices()->Remove(this);
}

//______________________________________________________________________________
Double_t  TRotMatrix::Determinant() const
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*
//*-*  Determinant() returns the value of the determiant of this matrix
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
 return
        fMatrix[0] * (fMatrix[4]*fMatrix[8] - fMatrix[7]*fMatrix[5])
      - fMatrix[3] * (fMatrix[1]*fMatrix[8] - fMatrix[7]*fMatrix[2])
      + fMatrix[6] * (fMatrix[1]*fMatrix[5] - fMatrix[4]*fMatrix[2]);
}

//______________________________________________________________________________
Double_t* TRotMatrix::GetGLMatrix(Double_t *rGLMatrix) const
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*  Convert this matrix to the OpenGL [4x4]
//*-*
//*-*  [  fMatrix[0]   fMatrix[1]   fMatrix[2]    0  ]
//*-*  [  fMatrix[3]   fMatrix[4]   fMatrix[5]    0  ]
//*-*  [  fMatrix[6]   fMatrix[7]   fMatrix[8]    0  ]
//*-*  [     0             0           0          1  ]
//*-*
//*-*  Input:
//*-*  -----
//*-*  Double_t *rGLMatrix - pointer to Double_t 4x4 buffer array
//*-*
//*-*  Return:
//*-*  ------
//*-*  Double_t pointer to the input buffer
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   Double_t *glmatrix = rGLMatrix;
   const Double_t *matrix   = fMatrix;
   if (rGLMatrix)
   {
       for (Int_t i=0;i<3;i++)
       {
           for (Int_t j=0;j<3;j++)
                 memcpy(glmatrix,matrix,3*sizeof(Double_t));
            matrix   += 3;
            glmatrix += 3;
           *glmatrix = 0.0;
            glmatrix++;

       }
       for (Int_t j=0;j<3;j++) {
           *glmatrix = 0.0;
           glmatrix++;
       }
       *glmatrix = 1.0;
   }
       return rGLMatrix;
}

//______________________________________________________________________________
void TRotMatrix::SetMatrix(const Double_t *matrix)
{
  // copy predefined 3x3 matrix into TRotMatrix object
   fTheta  = 0;
   fPhi    = 0;
   fPsi    = 0;
   fType   = 0;
   if (!matrix) return;
   fType   = 2;
   memcpy(fMatrix,matrix,9*sizeof(Double_t));
   SetReflection();
}
//______________________________________________________________________________
void TRotMatrix::SetReflection()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*  SetReflection() -  checks whether the determinant of this
//*-*                     matrix defines the reflection transformation
//*-*                     and set the "reflection" flag if any
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   ResetBit(kReflection);
   if (Determinant() < 0) { fType=1; SetBit(kReflection);}
}
