//*CMZ :  2.00/00 03/03/98  11.22.59  by  Rene Brun
//*CMZ :  1.03/02 29/08/97  15.07.24  by  Rene Brun
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAttAxis
#define ROOT_TAttAxis

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
// TAttAxis                                                             //
//                                                                      //
// Axis attributes.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif

#include <fstream.h>

class TAttAxis {
protected:
        Int_t        fNdivisions;   //Number of divisions(10000*n3 + 100*n2 + n1)
        Color_t      fAxisColor;    //color of the line axis
        Color_t      fLabelColor;   //color of labels
        Style_t      fLabelFont;    //font for labels
        Float_t      fLabelOffset;  //offset of labels
        Float_t      fLabelSize;    //size of labels
        Float_t      fTickLength;   //length of tick marks
        Float_t      fTitleOffset;  //offset of axis title
        Float_t      fTitleSize;    //size of axis title

public:
        TAttAxis();
        virtual          ~TAttAxis();
                void     Copy(TAttAxis &attaxis);
        virtual Int_t    GetNdivisions()  {return fNdivisions;}
        virtual Color_t  GetAxisColor()   {return fAxisColor;}
        virtual Color_t  GetLabelColor()  {return fLabelColor;}
        virtual Style_t  GetLabelFont()   {return fLabelFont;}
        virtual Float_t  GetLabelOffset() {return fLabelOffset;}
        virtual Float_t  GetLabelSize()   {return fLabelSize;}
        virtual Float_t  GetTitleOffset() {return fTitleOffset;}
        virtual Float_t  GetTitleSize()   {return fTitleSize;}
        virtual Float_t  GetTickLength()  {return fTickLength;}
        virtual void     Reset(Option_t *option="");
        virtual void     SaveAttributes(ofstream &out, const char *name, const char *subname);
        virtual void     SetNdivisions(Int_t n=510);           // *MENU*
        virtual void     SetAxisColor(Color_t color=1);        // *MENU*
        virtual void     SetLabelColor(Color_t color=1);       // *MENU*
        virtual void     SetLabelFont(Style_t font=62);        // *MENU*
        virtual void     SetLabelOffset(Float_t offset=0.005); // *MENU*
        virtual void     SetLabelSize(Float_t size=0.04);      // *MENU*
        virtual void     SetTickLength(Float_t length=0.03);   // *MENU*
        virtual void     SetTitleOffset(Float_t offset=1);     // *MENU*
        virtual void     SetTitleSize(Float_t size=.005);      // *MENU*

        ClassDef(TAttAxis,2)  //Axis attributes
};

#endif

