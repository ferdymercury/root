//*CMZ :  1.03/08 03/03/99  14.18.31  by  Fons Rademakers
//*-- Author :    Rene Brun   14/04/97

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
//  Operators =, +=, +, -, !, &&, || overloaded.                        //
//                                                                      //
//   Examples of use:                                                   //
//     Root > TCut c1 = "x<1"                                           //
//     Root > TCut c2 = "y<0"                                           //
//     Root > TCut c3 = c1&&c2                                          //
//     Root > ntuple.Draw("x", c1)                                      //
//     Root > ntuple.Draw("x", c1||"x>0")                               //
//     Root > ntuple.Draw("x", c1&&c2)                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TCut.h"

ClassImp(TCut)

//______________________________________________________________________________
TCut::TCut() : TNamed()
{

}

//______________________________________________________________________________
TCut::TCut(const Text_t *title) : TNamed("CUT",title)
{

}

//______________________________________________________________________________
TCut::TCut(const Text_t *name, const Text_t *title) : TNamed(name,title)
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
TCut& TCut::operator!()
{
   fTitle = "!(" + fTitle + ")";
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
