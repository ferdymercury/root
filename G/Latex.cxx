//*CMZ :  2.20/05 15/12/98  09.17.20  by  Rene Brun
//*CMZ :  2.20/00 30/10/98  12.44.23  by  Rene Brun
//*CMZ :  2.00/13 29/10/98  16.58.54  by  Rene Brun
//*CMZ :  2.00/12 08/10/98  09.06.14  by  Rene Brun
//*CMZ :  2.00/11 27/08/98  09.08.58  by  Rene Brun
//*-- Author :    Nicolas Brun   07/08/98

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

#include <stdio.h>

#include "TROOT.h"
#include "TLatex.h"
#include "TVirtualPad.h"
#include "TGXW.h"

const Int_t kTextNDC = BIT(14);

ClassImp(TLatex)

//______________________________________________________________________________
//
//   TLatex : to draw Mathematical Formula
//
//   This class has been implemented by begin_html <a href="http://hpsalo.cern.ch/nicolas">Nicolas Brun</a> end_html.
//   ========================================================
//
//   TLatex's purpose is to write mathematical equations
//   The syntax is very similar to the Latex one :
//
//   ** Subscripts and Superscripts
//   ------------------------------
//   Subscripts and superscripts are made with the _ and ^ commands.  These commands
//   can be combined to make complicated subscript and superscript expressions.
//   You may choose how to display subscripts and superscripts using the 2 functions
//   SetIndiceSize(Float_t) and SetLimitIndiceSize(Int_t).
//Begin_Html
/*
<img src="gif/latex_subscripts.gif">
*/
//End_Html
//
//   ** Fractions
//   ------------
//   Fractions denoted by the / symbol are made in the obvious way.
//   The #frac command is used for large fractions in displayed formula; it has
//   two arguments: the numerator and the denominator.
//Begin_Html
/*
<img src="gif/latex_frac.gif">
*/
//End_Html
//
//   ** Roots
//   --------
//   The #sqrt command produces the square root of its argument; it has an optional
//   first argument for other roots.
//   ex: #sqrt{10}  #sqrt[3]{10}
//
//   ** Mathematical Symbols
//   -----------------------
//   TLatex can make dozens of special mathematical symbols. A few of them, such as
//   + and > , are produced by typing the corresponding keyboard character.  Others
//   are obtained with the commands in the following table :
//Begin_Html
/*
<img src="gif/latex_symbols.gif">
*/
//End_Html
//    #Box draw a square
//    you may delimit an expression with proportional brackets using #[]{ ... }
//
//   ** Greek Letters
//   ----------------
//   The command to produce a lowercase Greek letter is obtained by adding a # to
//   the name of the letter. For an uppercase Greek letter, just capitalize the first
//   letter of the command name.
//   #alpha #beta #gamma #delta #epsilon #zeta #eta #theta #iota #kappa #lambda #mu
//   #nu #xi #omicron #pi #varpi #rho #sigma #tau #upsilon #phi #varphi #chi #psi #omega
//   #Gamma #Delta #Theta #Lambda #Xi #Pi #Sigma #Upsilon #Phi #Psi #Omega
//
//   ** Putting One Thing Above Another
//   ----------------------------------
//   Symbols in a formula are sometimes placed on above another. TLatex provides
//   special commands for doing this.
//
//   ** Accents
//   ----------
//    #hat{a} = hat
//    #check  = inversed hat
//    #acute  = acute
//    #grave  = agrave
//    #dot    = derivative
//    #ddot   = double derivative
//
//Begin_Html
/*
<img src="gif/latex_above.gif">
*/
//End_Html
//   #dot  #ddot  #hat  #check  #acute  #grave
//
//   ** Changing Style in Math Mode
//   ------------------------------
//   You can change the font and the text color at any moment using :
//   #font[font-number]{...} and #color[color-number]{...}
//
//   ** Example1
//   -----------
//     The following macro (tutorials/latex.C) produces the following picture:
//  {
//     gROOT->Reset();
//     TCanvas c1("c1","Latex",600,700);
//     TLatex l;
//     l.SetTextAlign(12);
//     l.SetTextSize(0.04);
//     l.DrawLatex(0.1,0.8,"1)   C(x) = d #sqrt{#frac{2}{#lambdaD}}  #int^{x}_{0}cos(#frac{#pi}{2}t^{2})dt");
//     l.DrawLatex(0.1,0.6,"2)   C(x) = d #sqrt{#frac{2}{#lambdaD}}  #int^{x}cos(#frac{#pi}{2}t^{2})dt");
//     l.DrawLatex(0.1,0.4,"3)   R = |A|^{2} = #frac{1}{2}(#[]{#frac{1}{2}+C(V)}^{2}+#[]{#frac{1}{2}+S(V)}^{2})");
//     l.DrawLatex(0.1,0.2,"4)   F(t) = #sum_{i=-#infty}^{#infty}A(i)cos#[]{#frac{i}{t+i}}");
//  }
//Begin_Html
/*
<img src="gif/latex_example.gif">
*/
//End_Html
//
//   ** Example2
//   -----------
//     The following macro (tutorials/latex2.C) produces the following picture:
//  {
//     gROOT->Reset();
//     TCanvas c1("c1","Latex",600,700);
//     TLatex l;
//     l.SetTextAlign(23);
//     l.SetTextSize(0.1);
//     l.DrawLatex(0.5,0.95,"e^{+}e^{-}#rightarrowZ^{0}#rightarrowI#bar{I}, q#bar{q}");
//     l.DrawLatex(0.5,0.75,"|#vec{a}#bullet#vec{b}|=#Sigmaa^{i}_{jk}+b^{bj}_{i}");
//     l.DrawLatex(0.5,0.5,"i(#partial_{#mu}#bar{#psi}#gamma^{#mu}+m#bar{#psi}=0#Leftrightarrow(#Box+m^{2})#psi=0");
//     l.DrawLatex(0.5,0.3,"L_{em}=eJ^{#mu}_{em}A_{#mu} , J^{#mu}_{em}=#bar{I}#gamma_{#mu}I , M^{j}_{i}=#SigmaA_{#alpha}#tau^{#alphaj}_{i}");
//  }
//Begin_Html
/*
<img src="gif/latex_example2.gif">
*/
//End_Html
//
//______________________________________________________________________________


//______________________________________________________________________________
TLatex::TLatex()
{
// default constructor
      fFactorSize  = 1.5;
      fFactorPos   = 0.6;
      fLimitFactorSize = 3;
      fError       = null;
      fShow        = kFALSE;
      fPos=fTabMax = 0;
}

//______________________________________________________________________________
TLatex::TLatex(Coord_t x, Coord_t y, const Text_t *text)
       :TText(x,y,text)
{
// normal constructor
      fFactorSize  = 1.5;
      fFactorPos   = 0.6;
      fLimitFactorSize = 3;
      fError       = null;
      fShow        = kFALSE;
      fPos=fTabMax = 0;
}

//______________________________________________________________________________
TLatex::~TLatex()
{
}

//______________________________________________________________________________
TLatex::TLatex(const TLatex &text)
{
   ((TLatex&)text).Copy(*this);
}

//______________________________________________________________________________
void TLatex::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this TLatex object to another TLatex*-*-*-*-*-*-*
//*-*                  =========================================

   ((TLatex&)obj).fFactorSize  = fFactorSize;
   ((TLatex&)obj).fFactorPos   = fFactorPos;
   ((TLatex&)obj).fLimitFactorSize  = fLimitFactorSize;
   ((TLatex&)obj).fError       = fError;
   ((TLatex&)obj).fShow        = fShow;
   ((TLatex&)obj).fOriginSize  = fOriginSize;
   ((TLatex&)obj).fTabMax      = fTabMax;
   ((TLatex&)obj).fPos         = fPos;
   TText::Copy(obj);
   TAttLine::Copy(((TAttLine&)obj));
}

//______________________________________________________________________________
FormSize TLatex::Anal1(s_TextSpec spec, Char_t* t, Int_t length)
{
   return Analyse(0,0,spec,t,length);
}


//______________________________________________________________________________
FormSize TLatex::Analyse(Float_t x, Float_t y, s_TextSpec spec, Char_t* t, Int_t length)
{
//  Analyse and paint the TLatex formula
//
//  It is called 2 times : one for calculating the size of
//  each portion of the formula, another to paint the formula.
//  When analyse finds an operator or separator, it calls
//  itself to analyse the arguments of the operator.
//  when the argument is an atom (normal text), it calculates
//  the size of it and return it as the result.
//  for example : if the operator #frac{arg1}{arg2} is found :
//  Analyse(arg1) return the size of arg1 (width, up, down)
//  Analyse(arg2) return the size of arg2
//  now, we know the size of #frac{arg1}{arg2}  :
//  width = max(width_arg1, width_arg2)
//  up = up_arg1 + down_arg1
//  down = up_arg2 + down_arg2
//  so, when the user wants to paint a fraction at position (x,y),
//  the rect used for the formula is : (x,y-up,x+width,y+down)
//
// return size of zone occupied by the text/formula
// t : chain to be analyzed
// length : number of chars in t to analyse.
//
static char *tab[] = { "alpha","beta","chi","delta","epsilon","phi","gamma","eta","iota","varphi","kappa","lambda",
                "mu","nu","omicron","pi","theta","rho","sigma","tau","upsilon","varpi","omega","xi","psi","zeta",
                "varpi","varpi","varpi","Delta","varpi","Phi","Gamma","varpi","varpi","varpi",
                "varpi","Lambda","varpi","varpi","varpi","Pi","Theta","varpi","Sigma","varpi",
                "Upsilon","varpi","Omega","Xi","Psi" };

static char *tab2[] = { "leq","/","infty","/","/","/","/","/","leftrightarrow","leftarrow","uparrow","rightarrow",
                 "downarrow","circ","pm","/","geq","/","propto","partial","bullet","/","neq","equiv","approx","/",
                 "/","/","/","/","/","/","/","otimes","oplus","oslash","cap","cup","supset","supseteq","/","subset",
                 "subseteq","in","/","/","nabla","/","/","/","prod","surd","/","/","wedge","vee","Leftrightarrow",
                 "Leftarrow","Uparrow","Rightarrow","Downarrow","diamond","/","/","/","/","sum","/","/","/","/","/",
                 "/","/","/","/","/","/","/","int" };
static char *tab3[] = { "bar","vec","dot","hat","ddot","acute","grave","check"};
      if (fError != null) return FormSize(0,0,0);

      Int_t NbBlancDeb=0,NbBlancFin=0,l_NbBlancDeb=0,l_NbBlancFin=0;
      Int_t i,k;
      Int_t min=0, max=0;
      Bool_t cont = kTRUE;
      while(cont) {
         // count leading blanks
         //while(NbBlancDeb+NbBlancFin<length && t[NbBlancDeb]==' ') NbBlancDeb++;

         if (NbBlancDeb==length) return FormSize(0,0,0); // empty string

         // count trailing blanks
         //while(NbBlancDeb+NbBlancFin<length && t[length-NbBlancFin-1]==' ') NbBlancFin++;

         if (NbBlancDeb==l_NbBlancDeb && NbBlancFin==l_NbBlancFin) cont = kFALSE;

         // remove characters { }
         if (t[NbBlancDeb]=='{' && t[length-NbBlancFin-1]=='}') {
            Int_t NbBrackets = 0;
            Bool_t sameBrackets = kTRUE;
            for(i=NbBlancDeb;i<length-NbBlancFin;i++) {
               if (t[i] == '{') NbBrackets++;
               if (t[i] == '}') NbBrackets--;
               if (NbBrackets==0 && i<length-NbBlancFin-2) {
                  sameBrackets=kFALSE;
                  break;
               }
            }

            if (sameBrackets) {
               // begin and end brackets match
               NbBlancDeb++;
               NbBlancFin++;
               if (NbBlancDeb+NbBlancFin==length) return FormSize(0,0,0); // empty string
               cont = kTRUE;
            }

         }

         l_NbBlancDeb = NbBlancDeb;
         l_NbBlancFin = NbBlancFin;
      }

      // make a copy of the just processed chain of characters
      // removing leading and trailing blanks
      length -= NbBlancFin+NbBlancDeb; // length of string without blanks
      Char_t* text = new Char_t[length+1];
      strncpy(text,t+NbBlancDeb,length);
      text[length] = null;

      // compute size of subscripts and superscripts
      Float_t IndiceSize = spec.size/fFactorSize;
      if(IndiceSize<fOriginSize/TMath::Exp(fLimitFactorSize*TMath::Log(fFactorSize))-0.001f)
         IndiceSize = spec.size;
      // substract 0.001 because of rounding errors
      s_TextSpec specNewSize = spec;
      specNewSize.size       = IndiceSize;

      // recherche des operateurs
      Int_t OpPower = -1;   // Position of first ^ (power)
      Int_t OpUnder = -1;   // Position of first _ (indice)
      Int_t OpFrac  = -1;   // Position of first \frac
      Int_t OpSqrt  = -1;   // Position of first \sqrt
      Int_t NbBrackets = 0; // Nesting level in { }
      Int_t NbCroch = 0;    // Nesting level in [ ]
      Int_t Sep     = -1;   // Position of first }{
      Int_t Sep2    = -1;   // Position of first ]{
      Int_t Sep3    = -2;   // Position of first }
      Int_t OpColor = -1;   // Position of first \color
      Int_t OpFont  = -1;   // Position of first \font
      Int_t OpGreek = -1;   // Position of a Greek letter
      Int_t OpSpec  = -1;   // position of a special character
      Int_t OpAbove = -1;   // position of a vector/overline
      Int_t OpCroch = -1;   // position of a [ ] operator
      Int_t AbovePlace = 0; // true if subscripts must be written above and not after
      Int_t OpBox = -1; // position of #Box
      Bool_t OpFound = kFALSE;
      for(i=0;i<length;i++) {
         switch (text[i]) {
         case '{': if (NbCroch==0) NbBrackets++; break;
         case '}': if (NbCroch==0) {
                  NbBrackets--;
                  if (NbBrackets<0) {
                     // more "}" than "{"
                     fError = "Missing \"{\"";
                     return FormSize(0,0,0);
                  }
                  if (NbBrackets==0) {
                     if (i<length-1) if (text[i+1]=='{' && Sep==-1) Sep=i;
                     if (i<length-2) { if (text[i+1]!='{' && !(text[i+2]=='{' && (text[i+1]=='^' || text[i+1]=='_')) && Sep3==-2) Sep3=i; }
                     else if (i<length-1) { if (text[i+1]!='{' && Sep3==-2) Sep3=i; }
                     else if (Sep3==-2) Sep3=i;
                  }
                 }
                 break;
         case '[': if (NbBrackets==0) NbCroch++; break;
         case ']': if (NbBrackets==0) {
                  NbCroch--;
                  if (NbCroch<0) {
                     // more "]" than "["
                     fError = "Missing \"[\"";
                     return FormSize(0,0,0);
                  }
                 }
                 break;
         }
         if (length>i+1) {
            Char_t buf[2];
            strncpy(buf,&text[i],2);
            if (strncmp(buf,"^{",2)==0) {
               if (OpPower==-1 && NbBrackets==0 && NbCroch==0) OpPower=i;
               if (i>3) {
                  Char_t buf[4];
                  strncpy(buf,&text[i-4],4);
                  if (strncmp(buf,"#int",4)==0) AbovePlace = 1;
                  if (strncmp(buf,"#sum",4)==0) AbovePlace = 2;
               }
            }
            if (strncmp(buf,"_{",2)==0) {
               if (OpUnder==-1 && NbBrackets==0 && NbCroch==0) OpUnder=i;
               if (i>3) {
                  Char_t buf[4];
                  strncpy(buf,&text[i-4],4);
                  if (strncmp(buf,"#int",4)==0) AbovePlace = 1;
                  if (strncmp(buf,"#sum",4)==0) AbovePlace = 2;
               }
            }
            if (strncmp(buf,"]{",2)==0) if (Sep2==-1    && NbBrackets==0 && NbCroch==0) Sep2=i;
         }
         // detect other operators
         if (text[i]=='\\' || text[i]=='#' && !OpFound && NbBrackets==0 && NbCroch==0) {

            if (length>i+6) {
               Char_t buf[6];
               strncpy(buf,&text[i+1],6);
               if (strncmp(buf,"color[",6)==0 || strncmp(buf,"color{",6)==0)
                  { OpColor=i; OpFound = kTRUE; if (i>0 && Sep3==-2) Sep3=i-1; continue;  }
            }
            if (length>i+5) {
               Char_t buf[5];
               strncpy(buf,&text[i+1],5);
               if (strncmp(buf,"frac{",5)==0)
                  { OpFrac=i; OpFound = kTRUE; if (i>0 && Sep3==-2) Sep3=i-1; continue;   }
               if (strncmp(buf,"sqrt{",5)==0 || strncmp(buf,"sqrt[",5)==0)
                  { OpSqrt=i; OpFound = kTRUE; if (i>0 && Sep3==-2) Sep3=i-1;  continue;  }
               if (strncmp(buf,"font{",5)==0 || strncmp(buf,"font[",5)==0)
                  { OpFont=i; OpFound = kTRUE; if (i>0 && Sep3==-2) Sep3=i-1; continue;   }
            }
            if (length>i+3) {
               Char_t buf[3];
               strncpy(buf,&text[i+1],3);
               if (strncmp(buf,"[]{",3)==0)
                  { OpCroch=0; OpFound = kTRUE; if (i>0 && Sep3==-2) Sep3=i-1; continue;   }
               if (OpBox==-1 && strncmp(buf,"Box",3)==0)
                  { OpBox=0; OpFound = kTRUE; if (i>0 && Sep3==-2) Sep3=i-1; continue; }
            }
            for(k=0;k<51;k++) {
               if (!OpFound && UInt_t(length)>i+strlen(tab[k])) {
                  if (strncmp(&text[i+1],tab[k],strlen(tab[k]))==0) {
                     OpGreek=k;
                     OpFound = kTRUE;
                     if (i>0 && Sep3==-2) Sep3=i-1;
                  }
               }
            }
            for(k=0;k<8;k++) {
               if (!OpFound && UInt_t(length)>i+strlen(tab3[k])) {
                  if (strncmp(&text[i+1],tab3[k],strlen(tab3[k]))==0) {
                     OpAbove=k;
                     OpFound = kTRUE;
                     if (i>0 && Sep3==-2) Sep3=i-1;
                  }
               }
            }
            UInt_t lastsize = 0;
            if (!OpFound)
            for(k=0;k<80;k++) {
               if ((OpSpec==-1 || strlen(tab2[k])>lastsize) && UInt_t(length)>i+strlen(tab2[k])) {
                  if (strncmp(&text[i+1],tab2[k],strlen(tab2[k]))==0) {
                     lastsize = strlen(tab2[k]);
                     OpSpec=k;
                     OpFound = kTRUE;
                     if (i>0 && Sep3==-2) Sep3=i-1;
                  }
               }
            }
         }
      }

      if (NbBrackets>0) {
         // More "{" than "}"
         fError = "Missing \"}\"";
         return FormSize(0,0,0);
      }

      FormSize fs1;
      FormSize fs2;
      FormSize fs3;
      FormSize result;

      // analysis of operators found
      if (Sep3>-1 && Sep3<length-1) { // separator found
         if(!fShow) {
            fs1 = Anal1(spec,text,Sep3+1);
            fs2 = Anal1(spec,text+Sep3+1,length-Sep3-1);
            Savefs(&fs1);
         }
         else {
            fs1 = Readfs();
            Analyse(x+fs1.Width(),y,spec,text+Sep3+1,length-Sep3-1);
            Analyse(x,y,spec,text,Sep3+1);
         }
         result = fs1+fs2;
      }


      else if (OpPower>-1 && OpUnder>-1) { // ^ and _ found
         min = TMath::Min(OpPower,OpUnder);
         max = TMath::Max(OpPower,OpUnder);
         Float_t prop=1, prop2=1; // scale factor for #sum & #int
         switch (AbovePlace) {
            case 1 : prop = 2; break; // integral
            case 2 : prop = 2; prop2 = 3; break; // sum
         }
         if (!fShow) {
            fs1 = Anal1(spec,text,min);
            fs2 = Anal1(specNewSize,text+min+1,max-min-1);
            fs3 = Anal1(specNewSize,text+max+1,length-max-1);
            Savefs(&fs1);
            Savefs(&fs2);
            Savefs(&fs3);
         }
         else {
            fs3 = Readfs();
            fs2 = Readfs();
            fs1 = Readfs();
            Float_t pos = 0;
            if (!AbovePlace) {
               Float_t addW = fs1.Width(), addH1, addH2;
               if (OpPower<OpUnder) {
                  addH1 = -fs1.Dessus()+fs1.Dessous()*(1-fFactorPos)-fs2.Dessous();
                  addH2 = fs1.Dessous()*(fFactorPos)+fs3.Dessus();
               }
               else {
                addH1 = fs1.Dessous()*(fFactorPos)+fs2.Dessus();
                addH2 = -fs1.Dessus()+fs1.Dessous()*(1-fFactorPos)-fs3.Dessous();
               }
               Analyse(x+addW,y+addH2,specNewSize,text+max+1,length-max-1);
               Analyse(x+addW,y+addH1,specNewSize,text+min+1,max-min-1);
            }
            else {
               Float_t addW1, addW2, addH1, addH2;
               Float_t m = TMath::Max(fs1.Width(),TMath::Max(fs2.Width(),fs3.Width()));
               pos = (m-fs1.Width())/2;
               if (OpPower<OpUnder) {
                  addH1 = -fs1.Dessus()/prop2-fs2.Dessous();
                  addW1 = (m-fs2.Width())/2;
                  addH2 = fs1.Dessous()/prop+fs3.Dessus();
                  addW2 = (m-fs3.Width())/2;
               }
               else {
                  addH1 = fs1.Dessous()/prop+fs2.Dessus();
                  addW1 = (m-fs2.Width())/2;
                  addH2 = -fs1.Dessus()/prop2-fs3.Dessous();
                  addW2 = (m-fs3.Width())/2;
               }
               Analyse(x+addW2,y+addH2,specNewSize,text+max+1,length-max-1);
               Analyse(x+addW1,y+addH1,specNewSize,text+min+1,max-min-1);
            }

            Analyse(x+pos,y,spec,text,min);
         }

         if (!AbovePlace) {
            if (OpPower<OpUnder) {
               result = FormSize(fs1.Width()+TMath::Max(fs2.Width(),fs3.Width()),
                                 fs1.Dessus()+fs2.Height()-fs1.Dessous()*(1-fFactorPos),
                                 fs1.Dessous()+fs3.Height()-fs1.Dessous()*(1-fFactorPos));

                        //TMath::Max(fs1.Dessus()*fFactorPos+fs2.Height(),fs1.Dessus()),
                        //TMath::Max(fs1.Dessous()*fFactorPos+fs3.Height(),fs1.Dessous()));
            }
            else {
               result = FormSize(fs1.Width()+TMath::Max(fs2.Width(),fs3.Width()),
                                 fs1.Dessus()+fs3.Height()-fs1.Dessous()*(1-fFactorPos),
                                 fs1.Dessous()+fs2.Height()-fs1.Dessous()*(1-fFactorPos));
                        //TMath::Max(fs1.Dessus()*fFactorPos+fs3.Height(),fs1.Dessus()),
                        //TMath::Max(fs1.Dessous()*fFactorPos+fs2.Height(),fs1.Dessous()));
            }
         }
         else {
            if (OpPower<OpUnder) {
               result = FormSize(TMath::Max(fs1.Width(),TMath::Max(fs2.Width(),fs3.Width())),
                                 fs1.Dessus()/prop2+fs2.Height(),fs1.Dessous()/prop+fs3.Height());
            }
            else {
               result = FormSize(TMath::Max(fs1.Width(),TMath::Max(fs2.Width(),fs3.Width())),
                                 fs1.Dessus()/prop2+fs3.Height(),fs1.Dessous()/prop+fs2.Height());
            }
         }
      }
      else if (OpPower>-1) { // ^ found
        Float_t prop=1;
        if (AbovePlace==2) prop=3; // sum
        if(!fShow) {
            fs1 = Anal1(spec,text,OpPower);
            fs2 = Anal1(specNewSize,text+OpPower+1,length-OpPower-1);
            Savefs(&fs1);
            Savefs(&fs2);
         }
         else {
            fs2 = Readfs();
            fs1 = Readfs();
            Int_t pos = 0;
            if (!AbovePlace)
               Analyse(x+fs1.Width(),y-fs1.Dessus()+fs1.Dessous()*(1-fFactorPos)-fs2.Dessous(),specNewSize,text+OpPower+1,length-OpPower-1);
            else {
               Int_t pos2=0;
               if (fs2.Width()>fs1.Width()) pos=Int_t((fs2.Width()-fs1.Width())/2);
               else pos2=Int_t((fs1.Width()-fs2.Width())/2);
               Analyse(x+pos2,y-fs1.Dessus()/prop-fs2.Dessous(),specNewSize,text+OpPower+1,length-OpPower-1);
            }
            Analyse(x+pos,y,spec,text,OpPower);
         }

         if (!AbovePlace) result = fs1.add_Dessus(fs2).add_Dessus(FormSize(0,-fs1.Dessous()*(1-fFactorPos),0));
         else result = FormSize(TMath::Max(fs1.Width(),fs2.Width()),fs1.Dessus()/prop+fs2.Height(),fs1.Dessous());

      }
      else if (OpUnder>-1) { // _ found
         Float_t prop = 2; // scale factor for #sum & #frac
         if (AbovePlace==2) prop=2.8; // sum
         if(!fShow) {
            fs1 = Anal1(spec,text,OpUnder);
            fs2 = Anal1(specNewSize,text+OpUnder+1,length-OpUnder-1);
            Savefs(&fs1);
            Savefs(&fs2);
         }
         else {
            fs2 = Readfs();
            fs1 = Readfs();
            Int_t pos = 0;
            if (!AbovePlace)
               Analyse(x+fs1.Width(),y+fs1.Dessous()*(fFactorPos)+fs2.Dessus(),specNewSize,text+OpUnder+1,length-OpUnder-1);
            else {
               Int_t pos2=0;
               if (fs2.Width()>fs1.Width()) pos=Int_t((fs2.Width()-fs1.Width())/2);
               else pos2=Int_t((fs1.Width()-fs2.Width())/2);
               Analyse(x+pos2,y+fs1.Dessous()/prop+fs2.Dessus(),specNewSize,text+OpUnder+1,length-OpUnder-1);
            }
            Analyse(x+pos,y,spec,text,OpUnder);
         }
         if (!AbovePlace) result = fs1.add_Dessous(fs2).add_Dessous(FormSize(0,0,-fs1.Dessous()*(1-fFactorPos)));
         else result = FormSize(TMath::Max(fs1.Width(),fs2.Width()),fs1.Dessus(),fs1.Dessous()/prop+fs2.Height());
      }
      else if (OpBox>-1) {
         Float_t square = GetHeight()*spec.size/2;
         if (!fShow) {
            fs1 = Anal1(spec,text+4,length-4);
         }
         else {
            fs1 = Analyse(x+square,y,spec,text+4,length-4);
            Float_t adjust = GetHeight()*spec.size/20;
            Float_t yoffset= adjust*2;
            DrawLine(x+adjust,y+adjust+yoffset,x-adjust+square,y+adjust+yoffset,spec);
            DrawLine(x-adjust+square,y+adjust+yoffset,x-adjust+square,y-adjust+yoffset+square,spec);
            DrawLine(x-adjust+square,y-adjust+yoffset+square,x+adjust,y-adjust+yoffset+square,spec);
            DrawLine(x+adjust,y-adjust+yoffset+square,x+adjust,y+adjust+yoffset,spec);
         }
         result = fs1 + FormSize(square,0,square);
      }
      else if (OpGreek>-1) {
         s_TextSpec NewSpec = spec;
         NewSpec.font = 122;
         char letter = 97 + OpGreek;
         if (OpGreek>25) letter -= 58;
         if (!fShow) {
            fs1 = Anal1(NewSpec,&letter,1);
            fs2 = Anal1(spec,text+strlen(tab[OpGreek])+1,length-strlen(tab[OpGreek])-1);
            Savefs(&fs1);
         }
         else {
            fs1 = Readfs();
            Analyse(x+fs1.Width(),y,spec,text+strlen(tab[OpGreek])+1,length-strlen(tab[OpGreek])-1);
            Analyse(x,y,NewSpec,&letter,1);
         }
         result = fs1+fs2;
      }

      else if (OpSpec>-1) {
         s_TextSpec NewSpec = spec;
         NewSpec.font = 122;
         char letter = '\243' + OpSpec;
         Float_t prop = 2; // scale factor for #sum(66) & #int(79)
         if (OpSpec==66 || OpSpec==79) NewSpec.size = spec.size*prop;
         if (!fShow) {
            fs1 = Anal1(NewSpec,&letter,1);
            fs1 = FormSize(fs1.Width(),fs1.Dessous()*0.5,fs1.Dessous()*1.2);
            fs2 = Anal1(spec,text+strlen(tab2[OpSpec])+1,length-strlen(tab2[OpSpec])-1);
            Savefs(&fs1);
         }
         else {
            fs1 = Readfs();
            Analyse(x+fs1.Width(),y,spec,text+strlen(tab2[OpSpec])+1,length-strlen(tab2[OpSpec])-1);
            if (OpSpec!=66 && OpSpec!=79) Analyse(x,y,NewSpec,&letter,1);
            else                          Analyse(x,y-GetHeight()*spec.size*prop/10,NewSpec,&letter,1);
         }
         result = fs1+fs2;
      }
      else if (OpAbove>-1) {
         if (!fShow) {
            fs1 = Anal1(spec,text+strlen(tab3[OpAbove])+1,length-strlen(tab3[OpAbove])-1);
            Savefs(&fs1);
         }
         else {
            fs1 = Readfs();
            Analyse(x,y,spec,text+strlen(tab3[OpAbove])+1,length-strlen(tab3[OpAbove])-1);
            Float_t sub = GetHeight()*spec.size/12;
            switch(OpAbove) {
            case 0: // bar
               DrawLine(x,y-fs1.Dessus()-GetHeight()*spec.size/4,x+fs1.Width(),y-fs1.Dessus()-GetHeight()*spec.size/4,spec);
               break;
            case 1: // vec
               DrawLine(x,y-sub-fs1.Dessus()-GetHeight()*spec.size/8,x+fs1.Width(),y-sub-fs1.Dessus()-GetHeight()*spec.size/8,spec);
               DrawLine(x+fs1.Width(),y-sub-fs1.Dessus()-GetHeight()*spec.size/8,x+fs1.Width()-GetHeight()*spec.size/4,y-sub-fs1.Dessus()-GetHeight()*spec.size/4,spec);
               DrawLine(x+fs1.Width(),y-sub-fs1.Dessus()-GetHeight()*spec.size/8,x+fs1.Width()-GetHeight()*spec.size/4,y-sub-fs1.Dessus(),spec);
               break;
            case 2: // dot
               DrawLine(x+fs1.Width()/2-3*sub/4,y-sub-fs1.Dessus(),x+fs1.Width()/2+3*sub/4,y-sub-fs1.Dessus(),spec);
               break;
            case 3: // hat
               DrawLine(x+fs1.Width()/2-2*sub,y-sub-fs1.Dessus(),x+fs1.Width()/2,y-3*sub-fs1.Dessus(),spec);
               DrawLine(x+fs1.Width()/2+2*sub,y-sub-fs1.Dessus(),x+fs1.Width()/2,y-3*sub-fs1.Dessus(),spec);
               break;
            case 4: // ddot
               DrawLine(x+fs1.Width()/2-9*sub/4,y-sub-fs1.Dessus(),x+fs1.Width()/2-3*sub/4,y-sub-fs1.Dessus(),spec);
               DrawLine(x+fs1.Width()/2+9*sub/4,y-sub-fs1.Dessus(),x+fs1.Width()/2+3*sub/4,y-sub-fs1.Dessus(),spec);
               break;
            case 5: // acute
               DrawLine(x+fs1.Width()/2-sub,y-sub-fs1.Dessus(),x+fs1.Width()/2+sub,y-3*sub-fs1.Dessus(),spec);
               break;
            case 6: // agrave
               DrawLine(x+fs1.Width()/2-sub,y-3*sub-fs1.Dessus(),x+fs1.Width()/2+sub,y-sub-fs1.Dessus(),spec);
               break;
            case 7: // check
               DrawLine(x+fs1.Width()/2-2*sub,y-3*sub-fs1.Dessus(),x+fs1.Width()/2,y-sub-fs1.Dessus(),spec);
               DrawLine(x+fs1.Width()/2+2*sub,y-3*sub-fs1.Dessus(),x+fs1.Width()/2,y-sub-fs1.Dessus(),spec);
               break;
           }
         }
         Float_t div = 3;
         if (OpAbove==1) div=4;
         result = FormSize(fs1.Width(),fs1.Dessus()+GetHeight()*spec.size/div,fs1.Dessous());

      }
      else if (OpCroch>-1) {
         if (!fShow) {
            fs1 = Anal1(spec,text+3,length-3);
            Savefs(&fs1);
         }
         else {
            fs1 = Readfs();
            Float_t l = GetHeight()*spec.size/4;
            Float_t l2 = l/2;
            Analyse(x+l2+l,y,spec,text+3,length-3);
            DrawLine(x+l2,y-fs1.Dessus(),x+l2,y+fs1.Dessous(),spec);
            DrawLine(x+l2,y-fs1.Dessus(),x+l2+l,y-fs1.Dessus(),spec);
            DrawLine(x+l2,y+fs1.Dessous(),x+l2+l,y+fs1.Dessous(),spec);
            DrawLine(x+l2+fs1.Width()+2*l,y-fs1.Dessus(),x+l2+fs1.Width()+2*l,y+fs1.Dessous(),spec);
            DrawLine(x+l2+fs1.Width()+2*l,y-fs1.Dessus(),x+l2+fs1.Width()+l,y-fs1.Dessus(),spec);
            DrawLine(x+l2+fs1.Width()+2*l,y+fs1.Dessous(),x+l2+fs1.Width()+l,y+fs1.Dessous(),spec);
         }
         result = FormSize(fs1.Width()+GetHeight()*spec.size*3/4,fs1.Dessus(),fs1.Dessous());
      }
      else if (OpFrac>-1) { // \frac found
         if (Sep==-1) {
            // arguments missing for \frac
            fError = "Missing denominator for #frac";
            return FormSize(0,0,0);
         }
         Float_t height = GetHeight()*spec.size/8;
         if (!fShow) {
            fs1 = Anal1(spec,text+OpFrac+6,Sep-OpFrac-6);
            fs2 = Anal1(spec,text+Sep+2,length-Sep-3);
            Savefs(&fs1);
            Savefs(&fs2);
         }
         else {
            fs2 = Readfs();
            fs1 = Readfs();
            Float_t addW1,addW2;
            if (fs1.Width()<fs2.Width()) {
               addW1 = (fs2.Width()-fs1.Width())/2;
               addW2 = 0;
            }
            else {
               addW1 = 0;
               addW2 = (fs1.Width()-fs2.Width())/2;
            }
            Analyse(x+addW2,y+fs2.Dessus()+height*4,spec,text+Sep+2,length-Sep-3);
            Analyse(x+addW1,y-fs1.Dessous()+height*3,spec,text+OpFrac+6,Sep-OpFrac-6);

            DrawLine(x,y+height*2.6,x+TMath::Max(fs1.Width(),fs2.Width()),y+height*2.6,spec);
         }

         result = FormSize(TMath::Max(fs1.Width(),fs2.Width()),fs1.Height()-height*3,fs2.Height()+height*4);

      }
      else if (OpSqrt>-1) { // \sqrt found
         if (!fShow) {
            if (Sep2>-1) {
               // power nth
               fs1 = Anal1(specNewSize,text+OpSqrt+6,Sep2-OpSqrt-6);
               fs2 = Anal1(spec,text+Sep2+1,length-Sep2-1);
               Savefs(&fs1);
               Savefs(&fs2);
               result = FormSize(fs2.Width()+ GetHeight()*spec.size/10+TMath::Max(GetHeight()*spec.size/2,fs1.Width()),fs2.Dessus()+fs1.Height()+GetHeight()*spec.size/4,fs2.Dessous());
            }
            else {
               fs1 = Anal1(spec,text+OpSqrt+5,length-OpSqrt-5);
               Savefs(&fs1);
               result = FormSize(fs1.Width()+GetHeight()*spec.size/2,fs1.Dessus()+GetHeight()*spec.size/4,fs1.Dessous());
            }
         }
         else {
            if (Sep2>-1) {
               fs2 = Readfs();
               fs1 = Readfs();
               Float_t pas = TMath::Max(GetHeight()*spec.size/2,fs1.Width());
               Float_t pas2 = pas + GetHeight()*spec.size/10;
               Analyse(x+pas2,y,spec,text+Sep2+1,length-Sep2-1);
               Analyse(x,y-fs1.Height()-fs2.Dessus(),specNewSize,text+OpSqrt+6,Sep2-OpSqrt-6);
               DrawLine(x,y-fs2.Dessus(),x+pas,y+fs2.Dessous(),spec);
               DrawLine(x+pas,y+fs2.Dessous(),x+pas,y-fs2.Dessus()-GetHeight()*spec.size/4,spec);
               DrawLine(x+pas,y-fs2.Dessus()-GetHeight()*spec.size/4,x+pas2+fs2.Width(),y-fs2.Dessus()-GetHeight()*spec.size/4,spec);
            }
            else {
               fs1 = Readfs();

               Analyse(x+GetHeight()*spec.size/2,y,spec,text+OpSqrt+6,length-OpSqrt-7);
               DrawLine(x,y-fs1.Dessus(),x+GetHeight()*spec.size*2/5,y+fs1.Dessous(),spec);

               DrawLine(x+GetHeight()*spec.size*2/5,y+fs1.Dessous(),x+GetHeight()*spec.size*2/5,y-fs1.Dessus()-GetHeight()*spec.size/4,spec);

               DrawLine(x+GetHeight()*spec.size*2/5,y-fs1.Dessus()-GetHeight()*spec.size/4,x+GetHeight()*spec.size/2+fs1.Width(),y-fs1.Dessus()-GetHeight()*spec.size/4,spec);
            }
         }
      }
      else if (OpColor>-1) { // \color found
         if (Sep2==-1) {
            // color number is not specified
            fError = "Missing color number. Syntax is #color[(Int_t)nb]{ ... }";
            return FormSize(0,0,0);
         }
         s_TextSpec NewSpec = spec;
         Char_t *nb = new Char_t[Sep2-OpColor-7];
         strncpy(nb,text+OpColor+7,Sep2-OpColor-7);
         if (sscanf(nb,"%d",&NewSpec.color) < 1) {
            delete[] nb;
            // color number is invalid
            fError = "Invalid color number. Syntax is #color[(Int_t)nb]{ ... }";
            return FormSize(0,0,0);
         }
         delete[] nb;
         if (!fShow) {
            result = Anal1(NewSpec,text+Sep2+1,length-Sep2-1);
         }
         else {
            Analyse(x,y,NewSpec,text+Sep2+1,length-Sep2-1);
         }
      }
      else if (OpFont>-1) { // \font found
         if (Sep2==-1) {
            // font number is not specified
            fError = "Missing font number. Syntax is #font[nb]{ ... }";
            return FormSize(0,0,0);
         }
         s_TextSpec NewSpec = spec;
         Char_t *nb = new Char_t[Sep2-OpFont-6];
         strncpy(nb,text+OpFont+6,Sep2-OpFont-6);
         if (sscanf(nb,"%d",&NewSpec.font) < 1) {
            delete[] nb;
            // font number is invalid
            fError = "Invalid font number. Syntax is #font[(Int_t)nb]{ ... }";
            return FormSize(0,0,0);
         }
         delete[] nb;
         if (!fShow) {
            result = Anal1(NewSpec,text+Sep2+1,length-Sep2-1);
         }
         else {
            Analyse(x,y,NewSpec,text+Sep2+1,length-Sep2-1);
         }
      }
      else { // no operators found, simply a character chain
         SetTextSize(spec.size);
         SetTextAngle(spec.angle);
         SetTextColor(spec.color);
         SetTextFont(spec.font);
         SetTextAlign(13);
         TAttText::Modify();
         UInt_t w=0,h=0;
         gGXW->GetTextExtent(w,h,text);
         Float_t hy    = h*gGXW->GetTextMagnitude();
         Float_t width = w*gGXW->GetTextMagnitude();
         if (fTextFont == 122) hy *= 1.2; //greek font too down
         fs1 = FormSize(width,0,hy);
         if (fShow) {
            // only one part, paint it
            Float_t Xorigin = (Float_t)gPad->XtoAbsPixel(fX);
            Float_t Yorigin = (Float_t)gPad->YtoAbsPixel(fY);
            Float_t X = gPad->AbsPixeltoX(Int_t((x-Xorigin)*TMath::Cos(spec.angle/180*3.14259)+(y-Yorigin)*TMath::Sin(spec.angle/180*3.14259)+Xorigin));
            Float_t Y = gPad->AbsPixeltoY(Int_t((x-Xorigin)*TMath::Sin(-spec.angle/180*3.14259)+(y-Yorigin)*TMath::Cos(spec.angle/180*3.14259)+Yorigin));
            gPad->PaintText(X,Y,text);
         }


         result = fs1;
      }

      delete[] text;

      return result;
}

//______________________________________________________________________________
void TLatex::DrawLatex(Coord_t x, Coord_t y, const Text_t *text)
{
// Make a copy of this object with the new parameters
// Also copy object attributes
   TLatex *newtext = new TLatex(x, y, text);
   TAttText::Copy(*newtext);
   newtext->SetBit(kCanDelete);
   if (TestBit(kTextNDC)) newtext->SetNDC();
   newtext->AppendPad();
}

//______________________________________________________________________________
void TLatex::DrawLine(Float_t x1, Float_t y1, Float_t x2, Float_t y2, s_TextSpec spec)
{
// Draw a line in a Latex formula
      Float_t sinang  = TMath::Sin(spec.angle/180*3.14259);
      Float_t cosang  = TMath::Cos(spec.angle/180*3.14259);
      Float_t Xorigin = (Float_t)gPad->XtoAbsPixel(fX);
      Float_t Yorigin = (Float_t)gPad->YtoAbsPixel(fY);
      Float_t X  = gPad->AbsPixeltoX(Int_t((x1-Xorigin)*cosang+(y1-Yorigin)*sinang+Xorigin));
      Float_t Y  = gPad->AbsPixeltoY(Int_t((x1-Xorigin)*-sinang+(y1-Yorigin)*cosang+Yorigin));

      Float_t X2 = gPad->AbsPixeltoX(Int_t((x2-Xorigin)*cosang+(y2-Yorigin)*sinang+Xorigin));
      Float_t Y2 = gPad->AbsPixeltoY(Int_t((x2-Xorigin)*-sinang+(y2-Yorigin)*cosang+Yorigin));

      Short_t lw = Short_t(GetHeight()*spec.size/8);
      SetLineWidth(lw);
      SetLineColor(spec.color);
      TAttLine::Modify();
      gPad->PaintLine(X,Y,X2,Y2);
}

//______________________________________________________________________________
void TLatex::Paint(Option_t *)
{
// Paint
   TAttText::Modify();  //Change text attributes only if necessary
   PaintLatex(fX,fY,GetTextAngle(),GetTextSize(),(char *)GetTitle());
}

//______________________________________________________________________________
void TLatex::PaintLatex(Float_t x, Float_t y, Float_t angle, Float_t size, Char_t *text)
{
// Main drawing function
      x = gPad->XtoAbsPixel(x);
      y = gPad->YtoAbsPixel(y);

      FormSize fs = FirstParse(angle,size,text);
      fOriginSize = size;

      //get current line attributes
      Short_t lineW = GetLineWidth();
      Int_t lineC = GetLineColor();

      s_TextSpec spec;
      spec.angle = angle;
      spec.size  = size;
      spec.color = GetTextColor();
      spec.font  = GetTextFont();
      Short_t halign = fTextAlign/10;
      Short_t valign = fTextAlign - 10*halign;
      s_TextSpec NewSpec = spec;
      if (fError != null) {
         cout<<"*ERROR<TLatex> :"<<fError<<endl;
         cout<<"==> "<<text<<endl;
      }
      else {
         fShow = kTRUE;
         Float_t mul = size*GetHeight()/1.5/fs.Height(); // if SetLatexSize (not implemented yet)
         mul=1;
         fOriginSize *= mul;
         NewSpec.size = mul*size;
         for(int i=0;i<fPos;i++) {
            fTabSize[i].width   *= mul;
            fTabSize[i].dessus  *= mul;
            fTabSize[i].dessous *= mul;
         }
         // compute x,y  for TextAlign
         switch (valign) {
            case 1: y -= fs.Dessous()*mul; break;
            case 2: y += (fs.Dessus()-fs.Dessous())*mul/2; break;
            case 3: y += fs.Dessus()*mul;  break;
         }
         switch (halign) {
            case 2: x -= fs.Width()*mul/2; break;
            case 3: x -= fs.Width()*mul;   break;
         }
         Analyse(x,y,NewSpec,text,strlen(text));
      }

      SetTextSize(size);
      SetTextAngle(angle);
      SetTextFont(spec.font);
      SetTextColor(spec.color);
      SetTextAlign(valign+10*halign);
      SetLineWidth(lineW);
      SetLineColor(lineC);
      delete[] fTabSize;
}

//______________________________________________________________________________
FormSize TLatex::FirstParse(Float_t angle, Float_t size, Char_t *text) {
// first parse of the analyse sequence
      fError   = null;
      fTabMax  = 100;
      fTabSize = new s_FormSize[fTabMax];
      // we assume less than 100 parts in one formula
      // we will reallocate if necessary.
      fPos        = 0;
      fShow       = kFALSE;
      fOriginSize = size;

      //get current line attributes
      Short_t lineW = GetLineWidth();
      Int_t lineC = GetLineColor();

      s_TextSpec spec;
      spec.angle = angle;
      spec.size  = size;
      spec.color = GetTextColor();
      spec.font  = GetTextFont();
      Short_t halign = fTextAlign/10;
      Short_t valign = fTextAlign - 10*halign;
      FormSize fs = Anal1(spec,text,strlen(text));

      SetTextSize(size);
      SetTextAngle(angle);
      SetTextFont(spec.font);
      SetTextColor(spec.color);
      SetTextAlign(valign+10*halign);
      SetLineWidth(lineW);
      SetLineColor(lineC);
      return fs;
}

//______________________________________________________________________________
Float_t TLatex::GetHeight()
{
// return height of current font in pixels

      return gPad->GetAbsHNDC()*Float_t(gPad->GetWh());
}

//______________________________________________________________________________
Float_t TLatex::GetXsize()
{
// return size of the formula along X in pad coordinates
      if (!gPad) return 0;
      FormSize fs = FirstParse(0,GetTextSize(),(Char_t *) GetTitle());
      delete[] fTabSize;
      return TMath::Abs(gPad->AbsPixeltoX(Int_t(fs.Width())) - gPad->AbsPixeltoX(0));
}

//______________________________________________________________________________
Float_t TLatex::GetYsize()
{
// return size of the formula along Y in pad coordinates
      if (!gPad) return 0;
      FormSize fs = FirstParse(0,GetTextSize(),(Char_t *) GetTitle());
      delete[] fTabSize;
      return TMath::Abs(gPad->AbsPixeltoY(Int_t(fs.Height())) - gPad->AbsPixeltoY(0));
}

//______________________________________________________________________________
FormSize TLatex::Readfs()
{
// read fs in fTabSize
      fPos--;
      FormSize result(fTabSize[fPos].width,fTabSize[fPos].dessus,fTabSize[fPos].dessous);
      return result;
}

//______________________________________________________________________________
void TLatex::Savefs(FormSize *fs)
{
// Save fs values in array fTabSize
      fTabSize[fPos].width   = fs->Width();
      fTabSize[fPos].dessus  = fs->Dessus();
      fTabSize[fPos].dessous = fs->Dessous();
      fPos++;
      if (fPos>=fTabMax) {
         // allocate more memory
         s_FormSize *temp = new s_FormSize[fTabMax+100];
         // copy array
         memcpy(temp,fTabSize,fTabMax*sizeof(s_FormSize));
         fTabMax += 100;
         // free previous array
         delete [] fTabSize;
         // swap pointers
         fTabSize = temp;
      }
}

//______________________________________________________________________________
void TLatex::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   if (gROOT->ClassSaved(TLatex::Class())) {
       out<<"   ";
   } else {
       out<<"   TLatex *";
   }
   out<<"text = new TLatex("<<fX<<","<<fY<<","<<quote<<GetTitle()<<quote<<");"<<endl;

   SaveTextAttributes(out,"text",11,0,1,62,1);
   SaveLineAttributes(out,"text",1,1,1);

   out<<"   text->Draw();"<<endl;
}

//______________________________________________________________________________
void TLatex::SetIndiceSize(Float_t factorSize)
{
// set relative size of subscripts and superscripts
      fFactorSize = factorSize;
}

//______________________________________________________________________________
void TLatex::SetLimitIndiceSize(Int_t limitFactorSize)
{
// Set limit for text resizing of subscipts and superscripts
      fLimitFactorSize = limitFactorSize;
}
