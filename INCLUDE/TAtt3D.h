//*CMZ :  2.23/03 09/09/99  22.22.11  by  Fons Rademakers
//*-- Author :    Fons Rademakers   08/09/99

#ifndef ROOT_TAtt3D
#define ROOT_TAtt3D

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
// TAtt3D                                                               //
//                                                                      //
// Use this attribute class when an object should have 3D capabilities. //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif


class TAtt3D {

public:
   TAtt3D() { }
   virtual ~TAtt3D() { }

   virtual void Sizeof3D() const;

   ClassDef(TAtt3D,1)  //3D attributes
};

#endif

