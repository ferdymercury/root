//*CMZ :  2.20/06 17/12/98  09.30.50  by  Rene Brun
//*CMZ :  2.20/05 12/12/98  18.29.08  by  Rene Brun
//*CMZ :  2.20/04 11/12/98  12.18.12  by  Rene Brun
//*-- Author :    Rene Brun   08/12/98

#ifndef ROOT_TTreeViewer
#define ROOT_TTreeViewer

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
// TTreeViewer                                                          //
//                                                                      //
// This class is a specialized canvas to browse a Root TTree,           //
// define cuts, make 1-d,2-d,3-d histograms, selection lists.           //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TButton
#include "TButton.h"
#endif
#ifndef ROOT_TSlider
#include "TSlider.h"
#endif
#ifndef ROOT_TTimer
#include "TTimer.h"
#endif
#ifndef ROOT_TTree
#include "TTree.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif

class TButton;
class TPaveVar;

class TTreeViewer : public TCanvas, public TAttText {

protected:
   TString     fTreeName;       //Name of the TTree to be viewed
   TTree       *fTree;          //!pointer to the TTree
   TButton     *fDraw;          //Pointer to the Draw button
   TButton     *fScan;          //Pointer to the Scan button
   TButton     *fBreak;         //Pointer to the Break button
   TButton     *fGopt;          //Pointer to the Graphics option button
   TButton     *fIList;         //Pointer to the EventList In button
   TButton     *fOList;         //Pointer to the EventList Out button
   TButton     *fX;             //Pointer to the X button
   TButton     *fY;             //Pointer to the Y button
   TButton     *fZ;             //Pointer to the Z button
   TButton     *fW;             //Pointer to the W button
   TButton     *fCpad;          //Pointer to the button referencing the drawing pad
   TButton     *fHist;          //Pointer to the Histogram button
   TSlider     *fSlider;        //Pointer to the Event slider
   TTimer      *fTimer;         //!Pointer to timer
   Int_t        fTimerInterval; //Timer interval in milliseconds

public:
   TTreeViewer();
   TTreeViewer(const char *treename, const char *title="TreeViewer", UInt_t ww=520, UInt_t wh=400);
   virtual        ~TTreeViewer();
   virtual void   BuildInterface();
   TPaveVar      *CreateNewVar(const char *varname="");  // *MENU*
   virtual void   ExecuteDraw(Option_t *option="");
   Bool_t         HandleTimer(TTimer *timer);
   TPaveVar      *IsUnder(TButton *button);
   TPaveVar      *IsUnderW(TButton *button);
   TTree         *GetTree()    {return fTree;}
   TButton       *GetDraw()    {return fDraw;}
   TButton       *GetScan()    {return fScan;}
   TButton       *GetBreak()   {return fBreak;}
   TButton       *GetGopt()    {return fGopt;}
   TButton       *GetIList()   {return fIList;}
   TButton       *GetOList()   {return fOList;}
   TButton       *GetX()       {return fX;}
   TButton       *GetY()       {return fY;}
   TButton       *GetZ()       {return fZ;}
   TButton       *GetW()       {return fW;}
   TButton       *GetCpad()    {return fCpad;}
   TButton       *GetHist()    {return fHist;}
   TSlider       *GetSlider()  {return fSlider;}
   TTimer        *GetTimer()   {return fTimer;}
   virtual const Text_t  *GetTreeName() const {return fTreeName.Data();}
   virtual void   MakeClass(const char *classname);  // *MENU*
   virtual void   Reorganize();  // *MENU*
   virtual void   SetTimerInterval(Int_t msec=333) {fTimerInterval=msec;} // *MENU*
   virtual void   SetTreeName(const Text_t *treename); // *MENU*

   //dummies
   virtual void   Divide(Int_t nx=1, Int_t ny=1, Float_t xmargin=0.01, Float_t ymargin=0.01, Int_t color=0);
   virtual void   SetGrid(Int_t valuex = 1, Int_t valuey = 1);
   virtual void   SetGridx(Int_t value = 1);
   virtual void   SetGridy(Int_t value = 1);
   virtual void   SetLogx(Int_t value = 1);
   virtual void   SetLogy(Int_t value = 1);
   virtual void   SetLogz(Int_t value = 1);
   virtual void   SetTickx(Int_t value = 1);
   virtual void   SetTicky(Int_t value = 1);
   virtual void   x3d(Option_t *option="");

   ClassDef(TTreeViewer,1)  //The Tree viewer and Browser
};

inline void TTreeViewer::Divide(Int_t, Int_t, Float_t, Float_t, Int_t) { }
inline void TTreeViewer::SetGrid(Int_t, Int_t) { }
inline void TTreeViewer::SetGridx(Int_t) { }
inline void TTreeViewer::SetGridy(Int_t) { }
inline void TTreeViewer::SetLogx(Int_t) { }
inline void TTreeViewer::SetLogy(Int_t) { }
inline void TTreeViewer::SetLogz(Int_t) { }
inline void TTreeViewer::SetTickx(Int_t) { }
inline void TTreeViewer::SetTicky(Int_t) { }
inline void TTreeViewer::x3d(Option_t *) { }

#endif

