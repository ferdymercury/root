//*CMZ :  2.23/03 22/09/99  08.20.01  by  Rene Brun
//*CMZ :  2.23/02 02/09/99  19.38.51  by  Rene Brun
//*CMZ :  2.23/01 31/08/99  15.24.04  by  Rene Brun
//*-- Author :    Rene Brun   30/08/99

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

#include "TROOT.h"
#include "TVirtualTreePlayer.h"

TClass  *TVirtualTreePlayer::fgPlayer = 0;

ClassImp(TVirtualTreePlayer)

//______________________________________________________________________________
TVirtualTreePlayer *TVirtualTreePlayer::TreePlayer(TTree *obj)
{
   // Static function returning a pointer to a Tree player.
   // The player will process the specified obj. If the Tree player
   // does not exist a default player is created.

   // if no player set yet, set TTreePlayer by default
   if (!fgPlayer) {
      if (gROOT->LoadClass("TProof","Proof")) return 0;
      if (gROOT->LoadClass("TTreePlayer","TreePlayer")) return 0;
      TVirtualTreePlayer::SetPlayer("TTreePlayer");
      if (!fgPlayer) return 0;
   }
   //create an instance of the Tree player
   TVirtualTreePlayer *p = (TVirtualTreePlayer*)fgPlayer->New();
   if (p) p->SetTree(obj);
   return p;
}

//______________________________________________________________________________
void TVirtualTreePlayer::SetPlayer(const char *player)
{
   // Static function to set an alternative Tree player.

   fgPlayer = gROOT->GetClass(player);
