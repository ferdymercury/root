//*CMZ :  2.00/13 29/10/98  18.54.20  by  Rene Brun
//*CMZ :  2.00/12 30/09/98  10.04.17  by  Rene Brun
//*CMZ :  2.00/07 18/05/98  15.20.39  by  Rene Brun
//*CMZ :  2.00/03 26/03/98  18.07.30  by  Rene Brun
//*CMZ :  2.00/00 03/03/98  16.44.18  by  Rene Brun
//*CMZ :  1.03/08 10/11/97  17.42.01  by  Rene Brun
//*-- Author :    Rene Brun   12/12/94

#ifndef ROOT_TStyle
#define ROOT_TStyle

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
// TStyle                                                               //
//                                                                      //
// A collection of all graphics attributes.                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
+Seq,TNamed.
#endif
#ifndef ROOT_TAttAxis
#include "TAttAxis.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif
#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif
#ifndef ROOT_TArrayI
#include "TArrayI.h"
#endif

class TBrowser;

class TStyle : public TNamed, public TAttLine, public TAttFill, public TAttMarker, public TAttText {

private:
        TAttAxis      fXaxis;       //X axis attributes
        TAttAxis      fYaxis;       //Y axis attributes
        TAttAxis      fZaxis;       //Z axis attributes
        Float_t       fBarWidth;    //width of bar for graphs
        Float_t       fBarOffset;   //offset of bar for graphs
        Int_t         fDrawBorder;  //flag to draw border(=1) or not (0)
        Int_t         fOptLogx;     //=1 if log scale in X
        Int_t         fOptLogy;     //=1 if log scale in y
        Int_t         fOptLogz;     //=1 if log scale in z
        Int_t         fOptDate;     //=1 if date option is selected
        Int_t         fOptStat;     //=1 if option Stat is selected
        Int_t         fOptTitle;    //=1 if option Title is selected
        Int_t         fOptFile;     //=1 if option File is selected
        Int_t         fOptFit;      //=1 if option Fit is selected
        Int_t         fErrorMarker; //marker for error bars
        Int_t         fShowEventStatus; //Show event status panel
        Float_t       fErrorMsize;  //marker size for error bars
        Float_t       fErrorX;      //per cent of bin width for errors along X
        Color_t       fFuncColor;   //function color
        Style_t       fFuncStyle;   //function style
        Width_t       fFuncWidth;   //function line width
        Color_t       fFrameFillColor;    //pad frame fill color
        Color_t       fFrameLineColor;    //pad frame line color
        Style_t       fFrameFillStyle;    //pad frame fill style
        Style_t       fFrameLineStyle;    //pad frame line style
        Width_t       fFrameLineWidth;    //pad frame line width
        Width_t       fFrameBorderSize;   //pad frame border size
        Int_t         fFrameBorderMode;   //pad frame border mode
        Color_t       fHistFillColor;     //histogram fill color
        Color_t       fHistLineColor;     //histogram line color
        Style_t       fHistFillStyle;     //histogram fill style
        Style_t       fHistLineStyle;     //histogram line style
        Width_t       fHistLineWidth;     //histogram line width
        Color_t       fCanvasColor;       //canvas color
        Width_t       fCanvasBorderSize;  //canvas border size
        Int_t         fCanvasBorderMode;  //canvas border mode
        Int_t         fCanvasDefH;        //default canvas height
        Int_t         fCanvasDefW;        //default canvas width
        Int_t         fCanvasDefX;        //default canvas top X position
        Int_t         fCanvasDefY;        //default canvas top Y position
        Color_t       fPadColor;          //pad color
        Width_t       fPadBorderSize;     //pad border size
        Int_t         fPadBorderMode;     //pad border mode
        Float_t       fPadBottomMargin;   //pad bottom margin
        Float_t       fPadTopMargin;      //pad top margin
        Float_t       fPadLeftMargin;     //pad left margin
        Float_t       fPadRightMargin;    //pad right margin
        Float_t       fPaperSizeX;  //PostScript paper size along X
        Float_t       fPaperSizeY;  //PostScript paper size along Y
        Float_t       fScreenFactor;//Multiplication factor for canvas size and position
        Color_t       fStatColor;    //stat color
        Float_t       fStatX;        //X position of top right corner of stat box
        Float_t       fStatY;        //Y position of top right corner of stat box
        Float_t       fStatW;        //width of stat box
        Float_t       fStatH;        //height of stat box
        Color_t       fTitleColor;   //title color
        Float_t       fTitleXOffset; //Offset of title to X axis
        Style_t       fTitleXFont;   //font for X title
        Float_t       fTitleXSize;   //size of X title
        Float_t       fTitleYOffset; //Offset of title to Y axis
        Style_t       fTitleYFont;   //font for Y title
        Float_t       fTitleYSize;   //size of Y title
        Float_t       fTitleX;       //X position of top left corner of title box
        Float_t       fTitleY;       //Y position of top left corner of title box
        Float_t       fTitleW;       //width of title box
        Float_t       fTitleH;       //height of title box
        Float_t       fLegoInnerR;   //Inner radius for cylindrical legos
        TArrayI       fPalette;      //Color palette
        TString       fLineStyle[30];   //String describing line style i (for postScript)
        TString       fHeaderPS;     //User defined additional Postscript header

public:
        enum EPaperSize { kA4, kUSLetter };

        TStyle();
        TStyle(Text_t *name, Text_t *title);
        TStyle(const TStyle &style);
        virtual          ~TStyle();
        Int_t            AxisChoice(Option_t *axis);
        virtual void     Browse(TBrowser *b);
        virtual void     Copy(TObject &style);
        virtual void     cd();

          Int_t          GetNdivisions(Option_t *axis="X");
        Color_t          GetAxisColor(Option_t *axis="X");
        Color_t          GetLabelColor(Option_t *axis="X");
        Style_t          GetLabelFont(Option_t *axis="X");
        Float_t          GetLabelOffset(Option_t *axis="X");
        Float_t          GetLabelSize(Option_t *axis="X");
        Float_t          GetTitleOffset(Option_t *axis="X");
        Float_t          GetTickLength(Option_t *axis="X");

        Float_t          GetBarOffset() {return fBarOffset;}
        Float_t          GetBarWidth() {return fBarWidth;}
        Int_t            GetDrawBorder() {return fDrawBorder;}
        Int_t            GetErrorMarker() {return fErrorMarker;}
        Float_t          GetErrorMsize() {return fErrorMsize;}
        Float_t          GetErrorX() {return fErrorX;}
        Color_t          GetCanvasColor() {return fCanvasColor;}
        Width_t          GetCanvasBorderSize() {return fCanvasBorderSize;}
        Int_t            GetCanvasBorderMode() {return fCanvasBorderMode;}
        Int_t            GetCanvasDefH()      {return fCanvasDefH;}
        Int_t            GetCanvasDefW()      {return fCanvasDefW;}
        Int_t            GetCanvasDefX()      {return fCanvasDefX;}
        Int_t            GetCanvasDefY()      {return fCanvasDefY;}
        Int_t            GetColorPalette(Int_t i);
        Int_t            GetNumberOfColors()  {return fPalette.fN;}
        Color_t          GetPadColor() {return fPadColor;}
        Width_t          GetPadBorderSize()   {return fPadBorderSize;}
        Int_t            GetPadBorderMode()   {return fPadBorderMode;}
        Float_t          GetPadBottomMargin() {return fPadBottomMargin;}
        Float_t          GetPadTopMargin()    {return fPadTopMargin;}
        Float_t          GetPadLeftMargin()   {return fPadLeftMargin;}
        Float_t          GetPadRightMargin()  {return fPadRightMargin;}
        Color_t          GetFuncColor() {return fFuncColor;}
        Style_t          GetFuncStyle() {return fFuncStyle;}
        Width_t          GetFuncWidth() {return fFuncWidth;}
        Color_t          GetFrameFillColor() {return fFrameFillColor;}
        Color_t          GetFrameLineColor() {return fFrameLineColor;}
        Style_t          GetFrameFillStyle() {return fFrameFillStyle;}
        Style_t          GetFrameLineStyle() {return fFrameLineStyle;}
        Width_t          GetFrameLineWidth() {return fFrameLineWidth;}
        Width_t          GetFrameBorderSize() {return fFrameBorderSize;}
        Int_t            GetFrameBorderMode() {return fFrameBorderMode;}
        Color_t          GetHistFillColor() {return fHistFillColor;}
        Color_t          GetHistLineColor() {return fHistLineColor;}
        Style_t          GetHistFillStyle() {return fHistFillStyle;}
        Style_t          GetHistLineStyle() {return fHistLineStyle;}
        Width_t          GetHistLineWidth() {return fHistLineWidth;}
        Float_t          GetLegoInnerR() {return fLegoInnerR;}
        Int_t            GetOptDate() {return fOptDate;}
        Int_t            GetOptFile() {return fOptFile;}
        Int_t            GetOptFit() {return fOptFit;}
        Int_t            GetOptStat() {return fOptStat;}
        Int_t            GetOptTitle() {return fOptTitle;}
        Int_t            GetOptLogx() {return fOptLogx;}
        Int_t            GetOptLogy() {return fOptLogy;}
        Int_t            GetOptLogz() {return fOptLogz;}
        void             GetPaperSize(Float_t &xsize, Float_t &ysize);
        Int_t            GetShowEventStatus(){return fShowEventStatus;}
        Float_t          GetScreenFactor() {return fScreenFactor;}
        Color_t          GetStatColor() {return fStatColor;}
        Float_t          GetStatX()     {return fStatX;}
        Float_t          GetStatY()     {return fStatY;}
        Float_t          GetStatW()     {return fStatW;}
        Float_t          GetStatH()     {return fStatH;}
        Color_t          GetTitleColor() {return fTitleColor;}
        Float_t          GetTitleXOffset() {return fTitleXOffset;}
        Style_t          GetTitleXFont()   {return fTitleXFont;}
        Float_t          GetTitleXSize()   {return fTitleXSize;}
        Float_t          GetTitleYOffset() {return fTitleYOffset;}
        Style_t          GetTitleYFont()   {return fTitleYFont;}
        Float_t          GetTitleYSize()   {return fTitleYSize;}
        Float_t          GetTitleX()     {return fTitleX;}
        Float_t          GetTitleY()     {return fTitleY;}
        Float_t          GetTitleW()     {return fTitleW;}
        Float_t          GetTitleH()     {return fTitleH;}
        const Text_t     *GetHeaderPS() const {return fHeaderPS.Data();}
        const Text_t     *GetLineStyleString(Int_t i=1) const;
        virtual void     Reset(Option_t *option="");

        void             SetHeaderPS(const Text_t *header);
        void             SetLineStyleString(Int_t i, const char *text);
        void             SetNdivisions(Int_t n=510, Option_t *axis="X");
        void             SetAxisColor(Color_t color=1, Option_t *axis="X");
        void             SetLabelColor(Color_t color=1, Option_t *axis="X");
        void             SetLabelFont(Style_t font=62, Option_t *axis="X");
        void             SetLabelOffset(Float_t offset=0.005, Option_t *axis="X");
        void             SetLabelSize(Float_t size=0.04, Option_t *axis="X");
        void             SetLegoInnerR(Float_t rad=0.5) {fLegoInnerR = rad;}
        void             SetScreenFactor(Float_t factor=1) {fScreenFactor = factor;}
        void             SetTickLength(Float_t length=0.03, Option_t *axis="X");
        void             SetTitleOffset(Float_t offset=1, Option_t *axis="X");
        void             SetOptDate(Int_t datefl=1) {fOptDate = datefl;}
        void             SetOptFile(Int_t file=1) {fOptFile = file;}
        void             SetOptFit(Int_t fit=1);
        void             SetOptLogx(Int_t logx=1) {fOptLogx = logx;}
        void             SetOptLogy(Int_t logy=1) {fOptLogy = logy;}
        void             SetOptLogz(Int_t logz=1) {fOptLogz = logz;}
        void             SetOptStat(Int_t stat=1);
        void             SetOptTitle(Int_t tit=1) {fOptTitle = tit;}
        void             SetBarOffset(Float_t baroff=0.5) {fBarOffset = baroff;}
        void             SetBarWidth(Float_t barwidth=0.5) {fBarWidth = barwidth;}
        void             SetErrorMarker(Int_t marker=21) {fErrorMarker = marker;}
        void             SetErrorMsize(Float_t msize=0.05) {fErrorMsize = msize;}
        void             SetErrorX(Float_t errorx=0.5) {fErrorX = errorx;}
        void             SetDrawBorder(Int_t drawborder=1) {fDrawBorder = drawborder;}
        void             SetCanvasColor(Color_t color=19) {fCanvasColor = color;}
        void             SetCanvasBorderSize(Width_t size=1) {fCanvasBorderSize = size;}
        void             SetCanvasBorderMode(Int_t mode=1) {fCanvasBorderMode = mode;}
        void             SetCanvasDefH(Int_t h=500) {fCanvasDefH = h;}
        void             SetCanvasDefW(Int_t w=700) {fCanvasDefW = w;}
        void             SetCanvasDefX(Int_t topx=10) {fCanvasDefX = topx;}
        void             SetCanvasDefY(Int_t topy=10) {fCanvasDefY = topy;}
        void             SetPadColor(Color_t color=19) {fPadColor = color;}
        void             SetPadBorderSize(Width_t size=1) {fPadBorderSize = size;}
        void             SetPadBorderMode(Int_t mode=1) {fPadBorderMode = mode;}
        void             SetPadBottomMargin(Float_t margin=0.1) {fPadBottomMargin=margin;}
        void             SetPadTopMargin(Float_t margin=0.1)    {fPadTopMargin=margin;}
        void             SetPadLeftMargin(Float_t margin=0.1)   {fPadLeftMargin=margin;}
        void             SetPadRightMargin(Float_t margin=0.1)  {fPadRightMargin=margin;}
        void             SetFuncStyle(Style_t style=1) {fFuncStyle = style;}
        void             SetFuncColor(Color_t color=1) {fFuncColor = color;}
        void             SetFuncWidth(Width_t width=4) {fFuncWidth = width;}
        void             SetFrameFillColor(Color_t color=1) {fFrameFillColor = color;}
        void             SetFrameLineColor(Color_t color=1) {fFrameLineColor = color;}
        void             SetFrameFillStyle(Style_t styl=0)  {fFrameFillStyle = styl;}
        void             SetFrameLineStyle(Style_t styl=0)  {fFrameLineStyle = styl;}
        void             SetFrameLineWidth(Width_t width=1) {fFrameLineWidth = width;}
        void             SetFrameBorderSize(Width_t size=1) {fFrameBorderSize = size;}
        void             SetFrameBorderMode(Int_t mode=1) {fFrameBorderMode = mode;}
        void             SetHistFillColor(Color_t color=1) {fHistFillColor = color;}
        void             SetHistLineColor(Color_t color=1) {fHistLineColor = color;}
        void             SetHistFillStyle(Style_t styl=0)  {fHistFillStyle = styl;}
        void             SetHistLineStyle(Style_t styl=0)  {fHistLineStyle = styl;}
        void             SetHistLineWidth(Width_t width=1) {fHistLineWidth = width;}
        void             SetPaperSize(EPaperSize size);
        void             SetPaperSize(Float_t xsize=20, Float_t ysize=26);
        void             SetStatColor(Int_t color=19) {fStatColor=color;}
        void             SetStatX(Float_t x=0) {fStatX=x;}
        void             SetStatY(Float_t y=0) {fStatY=y;}
        void             SetStatW(Float_t w=0.19) {fStatW=w;}
        void             SetStatH(Float_t h=0.1) {fStatH=h;}
        void             SetTitleColor(Int_t color=19) {fTitleColor=color;}
        void             SetTitleXOffset(Float_t offset=1) {fTitleXOffset=offset;}
        void             SetTitleXFont(Style_t font=62)    {fTitleXFont=font;}
        void             SetTitleXSize(Float_t size=0.02)  {fTitleXSize=size;}
        void             SetTitleYOffset(Float_t offset=1) {fTitleYOffset=offset;}
        void             SetTitleYFont(Style_t font=62)    {fTitleYFont=font;}
        void             SetTitleYSize(Float_t size=0.02)  {fTitleYSize=size;}
        void             SetTitleX(Float_t x=0) {fTitleX=x;}
        void             SetTitleY(Float_t y=1) {fTitleY=y;}
        void             SetTitleW(Float_t w=0) {fTitleW=w;}
        void             SetTitleH(Float_t h=0) {fTitleH=h;}
        void             ToggleEventStatus() { fShowEventStatus = fShowEventStatus ? 0 : 1; }
        void             SetPalette(Int_t ncolors=0, Int_t *colors=0);

        ClassDef(TStyle,3)  //A collection of all graphics attributes
};


R__EXTERN TStyle  *gStyle;

#endif
