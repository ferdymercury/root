//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  16.15.27  by  Fons Rademakers
//*-- Author :    Rene Brun   01/07/96

#ifndef ROOT_TGroupButton
#define ROOT_TGroupButton

//////////////////////////////////////////////////////////////////////////
//
// TGroupButton
//
//  A TGroupButton object is a specialized TButton used in a group of Buttons.
//  When a button from a group of TGroupButtons is selected, all other buttons
//  from the group with the same name are disabled.
//
//  For examples of use of TGroupButton objects, see:
//    TAttFillCanvas, TAttLineCanvas, TAttTextCanvas and TAttMarkerCanvas.
//  A TGroupButton object is a specialized TPad including possible list
//  of primitives used to build selections and options menus in a canvas.
//
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TButton
#include "TButton.h"
#endif

class TGroupButton : public TButton {

private:
   TGroupButton(const TGroupButton &org);  // no copy, use TObject::Clone()
   TGroupButton &operator=(const TGroupButton &rhs);  // idem

public:
   TGroupButton();
   TGroupButton(const char *groupname, const char *title, const char *method, Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2);
   virtual ~TGroupButton();
   virtual void  DisplayColorTable(const char *action, Float_t x0, Float_t y0, Float_t wc, Float_t hc);
   virtual void  ExecuteAction();
   virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual void  SavePrimitive(ofstream &out, Option_t *option);
   ClassDef(TGroupButton,0)  //A user interface button in a group of buttons.
};

#endif

