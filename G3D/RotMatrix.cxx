//*CMZ :  2.00/12 07/10/98  08.52.28  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/04 30/03/98  17.16.57  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  17.04.29  by  Fons Rademakers
//*-- Author :    Rene Brun   14/09/95

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
TRotMatrix::TRotMatrix(Text_t *name, Text_t *title, Double_t *matrix)
           :TNamed(name,title)
{
  if (!matrix) { Error("ctor","No rotation is supplied"); return; }

  SetMatrix(matrix);
  fNumber = gGeometry->GetListOfMatrices()->GetSize();
  gGeometry->GetListOfMatrices()->Add(this);
}

//______________________________________________________________________________
TRotMatrix::TRotMatrix(Text_t *name, Text_t *title, Double_t theta, Double_t phi, Double_t psi)
           :TNamed(name,title)
{
//*-*-*-*-*-*-*-*-*-*-*RotMatrix normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   printf("ERROR: This form of TRotMatrix constructor not implemented yet\n");

   Int_t i;
   fTheta  = theta;
   fPhi    = phi;
   fPsi    = psi;
   fType   = 0;
   for (i=0;i<9;i++) fMatrix[i] = 0;
   fMatrix[0] = 1;   fMatrix[4] = 1;   fMatrix[8] = 1;

   fNumber = gGeometry->GetListOfMatrices()->GetSize();
   gGeometry->GetListOfMatrices()->Add(this);
}



//______________________________________________________________________________
TRotMatrix::TRotMatrix(Text_t *name, Text_t *title, Double_t theta1, Double_t phi1
                                                  , Double_t theta2, Double_t phi2
                                                  , Double_t theta3, Double_t phi3)
                :TNamed(name,title)
{
//*-*-*-*-*-*RotMatrix normal constructor defined a la GEANT*-*-*-*-*-*-*
//*-*        ===============================================

   const Double_t degrad = 0.0174532925199432958;

   fTheta  = theta1;
   fPhi    = phi1;
   fPsi    = theta2;
   fType   = 0;

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

   //do nothing
}

//______________________________________________________________________________
Double_t  TRotMatrix::Determinant()
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
Double_t* TRotMatrix::GetGLMatrix(Double_t *rGLMatrix)
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
   Double_t *matrix   = fMatrix;
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
   if (Determinant() < 0) SetBit(kReflection);
}
