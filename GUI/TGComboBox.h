//*CMZ :  2.00/00 13/01/98  13.31.11  by  Fons Rademakers
//*-- Author :    Fons Rademakers   13/01/98

#ifndef ROOT_TGComboBox
#define ROOT_TGComboBox

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
// TGComboBox, TGComboBoxPopup                                          //
//                                                                      //
// A combobox (also known as a drop down listbox) allows the selection  //
// of one item out of a list of items. The selected item is visible in  //
// a little window. To view the list of possible items one has to click //
// on a button on the right of the little window. This will drop down   //
// a listbox. After selecting an item from the listbox the box will     //
// disappear and the newly selected item will be shown in the little    //
// window.                                                              //
//                                                                      //
// The TGComboBox is user callable. The TGComboBoxPopup is a service    //
// class of the combobox.                                               //
//                                                                      //
// Selecting an item in the combobox will generate the event:           //
// kC_COMMAND, kCM_COMBOBOX, combobox id, item id.                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGListBox
#include "TGListBox.h"
#endif

class TGScrollBarElement;


class TGComboBoxPopup : public TGCompositeFrame {

friend class TGClient;

protected:
   static Cursor_t  fgDefaultCursor;

public:
   TGComboBoxPopup(const TGWindow *p, UInt_t w, UInt_t h,
                   UInt_t options = kVerticalFrame,
                   ULong_t back = fgWhitePixel);

   virtual Bool_t HandleButton(Event_t *);
   void PlacePopup(Int_t x, Int_t y, UInt_t w, UInt_t h);
   void EndPopup();

   ClassDef(TGComboBoxPopup,0)  // Combobox popup window
};

class TGComboBox : public TGCompositeFrame {

friend class TGClient;

protected:
   Int_t                fComboBoxId;    // combobox widget id
   TGLBEntry           *fSelEntry;      // selected item frame
   TGScrollBarElement  *fDDButton;      // button controlling drop down of popup
   TGComboBoxPopup     *fComboFrame;    // popup containing a listbox
   TGListBox           *fListBox;       // the listbox with text items
   const TGPicture     *fBpic;          // down arrow picture used in fDDButton
   const TGWindow      *fMsgWindow;     // window handling combobox messages
   TGLayoutHints       *fLhs;           // layout hints for selected item frame
   TGLayoutHints       *fLhb;           // layout hints for fDDButton
   TGLayoutHints       *fLhdd;          // layout hints for fListBox

public:
   TGComboBox(const TGWindow *p, Int_t id,
              UInt_t options = kHorizontalFrame | kSunkenFrame | kDoubleBorder,
              ULong_t back = fgWhitePixel);
   virtual ~TGComboBox();

   virtual void DrawBorder();
   virtual TGDimension GetDefaultSize() const { return TGDimension (fWidth, fHeight); }

   virtual void Associate(const TGWindow *w) { fMsgWindow = w; }
   virtual Bool_t HandleButton(Event_t *event);
   virtual Bool_t ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);

   virtual void AddEntry(TGString *s, Int_t id)
           { fListBox->AddEntry(s, id); }
   virtual void AddEntry(const char *s, Int_t id)
           { fListBox->AddEntry(s, id); }
   virtual void AddEntry(TGLBEntry *lbe, TGLayoutHints *lhints)
           { fListBox->AddEntry(lbe, lhints); }
   virtual void InsertEntry(TGString *s, Int_t id, Int_t afterID)
           { fListBox->InsertEntry(s, id, afterID); }
   virtual void InsertEntry(const char *s, Int_t id, Int_t afterID)
           { fListBox->InsertEntry(s, id, afterID); }
   virtual void InsertEntry(TGLBEntry *lbe, TGLayoutHints *lhints, Int_t afterID)
           { fListBox->InsertEntry(lbe, lhints, afterID); }
   virtual void RemoveEntry(Int_t id)
           { fListBox->RemoveEntry(id); }
   virtual void RemoveEntries(Int_t from_ID, Int_t to_ID)
           { fListBox->RemoveEntries(from_ID, to_ID); }

   virtual const TGListBox *GetListBox() const { return fListBox; }
   virtual void  Select(Int_t id);
   virtual Int_t GetSelected() const { return fListBox->GetSelected(); }
   virtual TGLBEntry *GetSelectedEntry() const
           { return fListBox->GetSelectedEntry(); }

   virtual void SetTopEntry(TGLBEntry *e, TGLayoutHints *lh);

   ClassDef(TGComboBox,0)  // Combo box widget
};

#endif
