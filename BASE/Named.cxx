//*CMZ :  1.03/09 07/12/97  13.13.34  by  Fons Rademakers
//*-- Author :    Rene Brun   26/12/94

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TNamed                                                               //
//                                                                      //
// The TNamed class is the base class for all named ROOT classes        //
// A TNamed contains the essential elements (name, title)               //
// to identify a derived object in containers, directories and files.   //
// Most member functions defined in this base class are in general      //
// overridden by the derived classes.                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <iostream.h>

#include "Strlen.h"
#include "TNamed.h"
#include "TClass.h"
#include "TROOT.h"
#include "TVirtualPad.h"
#include "bytes.h"


ClassImp(TNamed)


//______________________________________________________________________________
TNamed::TNamed(const TNamed &named)
{
   // TNamed copy ctor.

   fName = named.fName;
   fTitle = named.fTitle;
}

//______________________________________________________________________________
TNamed& TNamed::operator=(const TNamed& rhs)
{
   // TNamed assignment operator.

   if (this != &rhs) {
      TObject::operator=(rhs);
      fName  = rhs.fName;
      fTitle = rhs.fTitle;
   }
   return *this;
}

//______________________________________________________________________________
Int_t TNamed::Compare(TObject *obj)
{
   // Compare two TNamed objects. Returns 0 when equal, -1 when this is
   // smaller and +1 when bigger (like strcmp).

   if (this == obj) return 0;
   return fName.CompareTo(obj->GetName());
}

//______________________________________________________________________________
void TNamed::Copy(TObject &obj)
{
   // Copy this to obj.

   TObject::Copy(obj);
   ((TNamed&)obj).fName  = fName;
   ((TNamed&)obj).fTitle = fTitle;
}

//______________________________________________________________________________
void TNamed::FillBuffer(char *&buffer)
{
   // Encode TNamed into output buffer.

   fName.FillBuffer(buffer);
   fTitle.FillBuffer(buffer);
}

//______________________________________________________________________________
void TNamed::ls(Option_t *)
{
   // List TNamed name and title.

   IndentLevel();
   cout <<"OBJ: " << IsA()->GetName() << "\t" << GetName() << "\t" << GetTitle() << " : "
        << Int_t(TestBit(kCanDelete)) << endl;
}

//______________________________________________________________________________
void TNamed::Print(Option_t *)
{
   // Print TNamed name and title.

   cout <<"OBJ: " << IsA()->GetName() << "\t" << GetName() << "\t" << GetTitle() << endl;
}

//______________________________________________________________________________
void TNamed::SetName(const Text_t *name)
{
   // Change (i.e. set) the name of the TNamed.

   fName = name;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TNamed::SetObject(const Text_t *name, const Text_t *title)
{
   // Change (i.e. set) all the TNamed parameters (name and title).

   fName  = name;
   fTitle = title;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
void TNamed::SetTitle(const Text_t *title)
{
   // Change (i.e. set) the title of the TNamed.

   fTitle = title;
   if (gPad) gPad->Modified();
}

//______________________________________________________________________________
Int_t TNamed::Sizeof() const
{
   // Return size of the TNamed part of the TObject.

   Int_t nbytes = fName.Sizeof() + fTitle.Sizeof();
   return nbytes;
}
