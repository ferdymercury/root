//*CMZ :  2.24/04 05/05/2000  09.44.38  by  Rene Brun
//*CMZ :  2.24/01 17/02/2000  10.43.29  by  Fons Rademakers
//*CMZ :  2.23/12 26/01/2000  09.45.01  by  Rene Brun
//*CMZ :  1.03/08 03/03/99  14.18.31  by  Fons Rademakers
//*-- Author :    Rene Brun   14/04/97

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
// TCut                                                                 //
//                                                                      //
//  A specialized string object used for TTree selections.              //
//  A TCut object has a name and a title. It does not add any data      //
//  members compared to a TNamed. It only add a set of operators to     //
//  facilitate logical string concatenation. For example, assume        //
//     cut1 = "x<1"  and cut2 = "y>2"                                   //
//  then                                                                //
//     cut1 && cut2 will be the string "(x<1)&&(y>2)"                   //
//                                                                      //
//  Operators =, +=, +, *, !, &&, || overloaded.                        //
//                                                                      //
//   Examples of use:                                                   //
//     Root > TCut c1 = "x<1"                                           //
//     Root > TCut c2 = "y<0"                                           //
//     Root > TCut c3 = c1&&c2                                          //
//     Root > ntuple.Draw("x", c1)                                      //
//     Root > ntuple.Draw("x", c1||"x>0")                               //
//     Root > ntuple.Draw("x", c1&&c2)                                  //
//     Root > ntuple.Draw("x", "(x+y)"*(c1&&c2))                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TCut.h"

ClassImp(TCut)

//______________________________________________________________________________
TCut::TCut() : TNamed()
{

}

//______________________________________________________________________________
TCut::TCut(const char *title) : TNamed("CUT",title)
{

}

//______________________________________________________________________________
TCut::TCut(const char *name, const char *title) : TNamed(name,title)
{

}

//______________________________________________________________________________
TCut::TCut(const TCut &cut) : TNamed(cut)
{
   //fName  = cut.fName;
   //fTitle = cut.fTitle;
}

//______________________________________________________________________________
TCut::~TCut()
{

}

//______________________________________________________________________________
TCut& TCut::operator=(const char *rhs)
{
   fTitle = rhs;
   return *this;
}

//______________________________________________________________________________
TCut& TCut::operator=(const TCut& rhs)
{
   if (this != &rhs)
      TNamed::operator=(rhs);

   return *this;
}

//______________________________________________________________________________
TCut& TCut::operator+=(const char *rhs)
{
   fTitle = "(" + fTitle + ")&&(" + TString(rhs) + ")";
   return *this;
}

//______________________________________________________________________________
TCut& TCut::operator+=(const TCut& rhs)
{
   fTitle = "(" + fTitle + ")&&(" + rhs.fTitle + ")";
   return *this;
}

//______________________________________________________________________________
TCut& TCut::operator*=(const char *rhs)
{
   fTitle = fTitle + "*(" + TString(rhs) + ")";;
   return *this;
}

//______________________________________________________________________________
TCut& TCut::operator*=(const TCut& rhs)
{
   fTitle = fTitle + "*(" + rhs.fTitle + ")";;
   return *this;
}

//______________________________________________________________________________
TCut operator+(const TCut& lhs, const char *rhs)
{
   return TCut(lhs) += rhs;
}

//______________________________________________________________________________
TCut operator+(const char *lhs, const TCut& rhs)
{
   return TCut(lhs) += rhs;
}

//______________________________________________________________________________
TCut operator+(const TCut& lhs, const TCut& rhs)
{
   return TCut(lhs) += rhs;
}

//______________________________________________________________________________
TCut operator*(const TCut& lhs, const char *rhs)
{
   return TCut(lhs) *= rhs;
}

//______________________________________________________________________________
TCut operator*(const char *lhs, const TCut& rhs)
{
   return TCut(lhs) *= rhs;
}

//______________________________________________________________________________
TCut operator*(const TCut& lhs, const TCut& rhs)
{
   return TCut(lhs) *= rhs;
}

//______________________________________________________________________________
TCut operator&&(const TCut& lhs, const char *rhs)
{
   return TCut(lhs) += rhs;
}

//______________________________________________________________________________
TCut operator&&(const char *lhs, const TCut& rhs)
{
   return TCut(lhs) += rhs;
}

//______________________________________________________________________________
TCut operator&&(const TCut& lhs, const TCut& rhs)
{
   return TCut(lhs) += rhs;
}

//______________________________________________________________________________
TCut operator||(const TCut& lhs, const char *rhs)
{
   TString s = "(" + lhs.fTitle + ")||(" + TString(rhs) + ")";
   return TCut(s.Data());
}

//______________________________________________________________________________
TCut operator||(const char *lhs, const TCut& rhs)
{
   TString s = "(" + TString(lhs) + ")||(" + rhs.fTitle + ")";
   return TCut(s.Data());
}

//______________________________________________________________________________
TCut operator||(const TCut& lhs, const TCut& rhs)
{
   TString s = "(" + lhs.fTitle + ")||(" + rhs.fTitle + ")";
   return TCut(s.Data());
}

//______________________________________________________________________________
TCut operator!(const TCut &rhs)
{
   TString s = "!(" + rhs.fTitle + ")";
   return TCut(s.Data());
}

