//*CMZ :  2.23/12 26/01/2000  09.41.50  by  Rene Brun
//*CMZ :  2.23/11 05/01/2000  23.47.43  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  13.13.34  by  Fons Rademakers
//*-- Author :    Rene Brun   26/12/94

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
void TNamed::SetName(const char *name)
{
   // Change (i.e. set) the name of the TNamed.

   fName = name;
   if (gPad && TestBit(kObjInCanvas)) gPad->Modified();
}

//______________________________________________________________________________
void TNamed::SetObject(const char *name, const char *title)
{
   // Change (i.e. set) all the TNamed parameters (name and title).

   fName  = name;
   fTitle = title;
   if (gPad && TestBit(kObjInCanvas)) gPad->Modified();
}

//______________________________________________________________________________
void TNamed::SetTitle(const char *title)
{
   // Change (i.e. set) the title of the TNamed.

   fTitle = title;
   if (gPad && TestBit(kObjInCanvas)) gPad->Modified();
}

//______________________________________________________________________________
Int_t TNamed::Sizeof() const
{
   // Return size of the TNamed part of the TObject.

   Int_t nbytes = fName.Sizeof() + fTitle.Sizeof();
   return nbytes;
}
