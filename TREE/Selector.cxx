//*CMZ :  1.03/09 08/12/97  13.49.55  by  Fons Rademakers
//*-- Author :    Rene Brun   05/02/97

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
// A TSelector object is used by the TTree::Draw, TTree::Scan,          //
//  TTree::Loop to navigate in a TTree and make selections.             //
//                                                                      //
//  The following members functions are called by the TTree functions.  //
//    Init:      to initialize the selector                             //
//    Start:     called everytime a loop on the tree starts.            //
//               a convenient place to create your histograms.          //
//    Finish:    called at the end of a loop on a TTree.                //
//               a convenient place to draw/fit your histograms.        //
//    BeginFile: called when a TChain is processed at the begining of   //
//               of a new file.                                         //
//    EndFile:   called when a TChain is processed at the end of a file.//                                         //
//    Execute:   called for each selected event.                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TSelector.h"
#include "TTree.h"
#include "TFile.h"

ClassImp(TSelector)

//______________________________________________________________________________
TSelector::TSelector(): TNamed()
{
   // Default constructor for a Selector.

}

//______________________________________________________________________________
TSelector::TSelector(const Text_t *name, const Text_t *title)
    :TNamed(name,title)
{
   // Create a Selector.

}

//______________________________________________________________________________
TSelector::~TSelector()
{
   // Destructor for a Selector.

}

//______________________________________________________________________________
void TSelector::BeginFile()
{
   // Called by TTree::Loop when a new file begins in a TChain.

   printf("%s::BeginFile called for file: %s\n",GetName(),fTree->GetCurrentFile()->GetName());
}

//______________________________________________________________________________
void TSelector::EndFile()
{
   // Called by TTree::Loop when a file ends in a TChain.

   printf("%s::EndFile called for file: %s\n",GetName(),fTree->GetCurrentFile()->GetName());
}

//______________________________________________________________________________
void TSelector::Execute(TTree *tree, Int_t event)
{
   // Process event number event.

   tree->GetEvent(event);
}

//______________________________________________________________________________
void TSelector::Finish(Option_t *)
{
   // Called at the end of TTree::Loop.

   printf("%s::Finish called\n",GetName());
}


//______________________________________________________________________________
void TSelector::Init(TTree *tree, Option_t *)
{
   // Called to initialize/reinitialize the selector.

   fTree = tree;
}

//______________________________________________________________________________
void TSelector::Start(Option_t *)
{
   // Called at the begining of TTree::Loop.

   printf("%s::Start called\n",GetName());
}
