//*CMZ :  2.22/05 11/06/99  09.46.02  by  Rene Brun
//*CMZ :  2.22/04 03/06/99  14.45.34  by  Rene Brun
//*CMZ :  2.22/03 29/05/99  17.44.04  by  Rene Brun
//*CMZ :  2.22/02 28/05/99  17.41.50  by  Rene Brun
//*-- Author :    Rene Brun   27/05/99
#ifndef ROOT_TSpectrum
#define ROOT_TSpectrum

/////////////////////////////////////////////////////////////////////////////
//	THIS FILE CONTAINS HEADERS FOR ADVANCED				   //
//	SPECTRA PROCESSING FUNCTIONS.	   				   //
//									   //
//	ONE-DIMENSIONAL BACKGROUND ESTIMATION FUNCTION			   //
//	TWO-DIMENSIONAL BACKGROUND ESTIMATION FUNCTION			   //
//	ONE-DIMENSIONAL DECONVOLUTION FUNCTION				   //
//	TWO-DIMENSIONAL DECONVOLUTION FUNCTION				   //
//	ONE-DIMENSIONAL PEAK SEARCH FUNCTION				   //
//	TWO-DIMENSIONAL PEAK SEARCH FUNCTION				   //
//									   //
//	Miroslav Morhac							   //
//	Institute of Physics						   //
//	Slovak Academy of Sciences					   //
//	Dubravska cesta 9, 842 28 BRATISLAVA				   //
//	SLOVAKIA							   //
//									   //
//	email:fyzimiro@savba.sk,	 fax:+421 7 54772479		   //
//									   //
/////////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TH1
#include "TH1.h"
#endif


class TSpectrum : public TNamed {
protected:
   Int_t         fNPeaks;         //number of peaks found
   Float_t      *fPosition;       //!array of current peak positions
   Float_t      *fPositionX;      //!X position of peaks
   Float_t      *fPositionY;      //!Y position of peaks
   TH1          *fHistogram;      //resulting histogram

public:
   TSpectrum();
   TSpectrum(Int_t maxpositions);
   virtual          ~TSpectrum();
   virtual  char    *Background(TH1 *hist,int number_of_iterations, Option_t *option="goff");
   virtual  char    *Background1(float *spectrum,int size,int number_of_iterations);
   virtual  char    *Background2(float **spectrum,int sizex,int sizey,int number_of_iterations);
   virtual  char    *Deconvolution1(float *source,float *resp,int size,int number_of_iterations);
   virtual  char    *Deconvolution2(float** source,float** resp,int sizex,int sizey,int number_of_iterations);
   virtual  TH1     *GetHistogram() {return fHistogram;}
   virtual  Int_t    GetNPeaks() {return fNPeaks;}
   virtual  Float_t *GetPositionX() {return fPositionX;}
   virtual  Float_t *GetPositionY() {return fPositionY;}
   virtual  int      PeakEvaluate(double *temp,int size,int xmax,double xmin);
   virtual  Int_t    Search(TH1 *hist, Double_t sigma, Option_t *option="goff");
   virtual  Int_t    Search1(float *spectrum,int size,double sigma);
   virtual  Int_t    Search2(float **source,int sizex,int sizey,double sigma);

    ClassDef(TSpectrum,1)  //Peak Finder, background estimator, Deconvolution
};

#endif
