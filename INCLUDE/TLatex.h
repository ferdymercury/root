//*CMZ :  2.00/11 26/08/98  15.17.35  by  Rene Brun
//*-- Author :    Nicolas Brun   07/08/98
#ifndef ROOT_TLatex
#define ROOT_TLatex

#include <fstream.h>
#ifndef ROOT_TText
#include "TText.h"
#include "TAttLine.h"
#endif
#ifndef ROOT_TMath
#include "TMath.h"
#endif

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TLatex                                                               //
//                                                                      //
// The Latex-style text processor class                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#define null 0

struct s_FormSize {
      Float_t width,dessus,dessous;
};

struct s_TextSpec {
   Float_t angle,size;
   Int_t color,font;
};

// compute size of a portion of a formula
class FormSize {
private:
      Float_t width, dessus, dessous;
public:
      FormSize() { width=0; dessus=0; dessous=0; } // constructeur par defaut
      FormSize(Float_t x, Float_t y1, Float_t y2) { width=x; dessus=y1; dessous=y2; } // constructeur
      virtual ~FormSize() {} //destructeur

      // definition de l'operateur + et +=
      FormSize operator+(FormSize f) { return FormSize(f.Width()+width,TMath::Max(f.Dessus(),dessus),TMath::Max(f.Dessous(),dessous)); }
      void operator+=(FormSize f) { width += f.Width(); dessus = TMath::Max(dessus,f.Dessus()); dessous = TMath::Max(dessous,f.Dessous()); }

      FormSize add_Dessus(FormSize f)  { return FormSize(f.Width()+width,f.Height()+dessus,dessous); }
      FormSize add_Dessous(FormSize f) { return FormSize(f.Width()+width,dessus,f.Height()+dessous); }
      FormSize add_DessusDessous(FormSize f1, FormSize f2) { return FormSize(width+TMath::Max(f1.Width(),f2.Width()),dessus+f1.Dessus(),dessous+f2.Dessous()); }

      // retour des valeurs
      inline Float_t Width()   { return width; }
      inline Float_t Dessus()  { return dessus; }
      inline Float_t Dessous() { return dessous; }
      inline Float_t Height()  { return dessus+dessous; }
};

class TLatex : public TText, public TAttLine {
protected:
      Float_t   fFactorSize;      // Relative size of subscripts and superscripts
      Float_t   fFactorPos;       // Relative position of subscripts and superscripts
      Int_t     fLimitFactorSize; // lower bound for subscripts/superscripts size
      Char_t   *fError;           //! error code
      Bool_t    fShow;            // is true during the second pass (Painting)
      s_FormSize *fTabSize;       //! array of values for the different zones
      Float_t   fOriginSize;      // Font size of the starting font
      Int_t     fTabMax;          // Maximum allocation for array fTabSize;
      Int_t     fPos;             // Current position in array fTabSize;

      //Text analysis and painting
      FormSize Analyse(Float_t x, Float_t y, s_TextSpec spec, Char_t* t,Int_t length);
      FormSize Anal1(s_TextSpec spec, Char_t* t,Int_t length);

      void DrawLine(Float_t x1, Float_t y1, Float_t x2, Float_t y2, s_TextSpec spec);

      FormSize FirstParse(Float_t angle, Float_t size, Char_t *text);

      void Savefs(FormSize *fs);
      FormSize Readfs();

public:
      TLatex();
      TLatex(Coord_t x, Coord_t y, const Text_t *text);
      TLatex(const TLatex &text);
      virtual ~TLatex();
      void     Copy(TObject &text);

      void     DrawLatex(Float_t x, Float_t y, const Text_t *text);
      Float_t  GetHeight();
      Float_t  GetXsize();
      Float_t  GetYsize();
      void     Paint(Option_t *option="");
      void     PaintLatex(Float_t x, Float_t y, Float_t angle, Float_t size, char *text);

      void     SavePrimitive(ofstream &out, Option_t *option);
      void     SetIndiceSize(Float_t factorSize);
      void     SetLimitIndiceSize(Int_t limitFactorSize);


 ClassDef(TLatex,1)  //The Latex-style text processor class
};

#endif
