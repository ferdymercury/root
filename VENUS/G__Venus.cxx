//*CMZ :  2.00/12 08/10/98  19.50.46  by  Fons Rademakers
//*-- Author :    Fons Rademakers   08/10/98
//*CMZ :  1.00/09 23/04/97  17.59.54  by  Rene Brun
//*-- Author :    Rene Brun   23/04/97
#if defined(__hpux) && !defined(__GNUG__)
#pragma OPTIMIZE OFF
#endif

#if defined(_AIX) && !defined(__GNUG__)
#endif

#if defined(__alpha) && !defined(__GNUG__)
#endif

#if defined(__sun) && !defined(__GNUG__)
#endif

#if defined(__sgi) && !defined(__GNUG__)
#endif

#if defined(_linux)
#endif

#ifdef WIN32
#pragma optimize("",off)
#endif

/********************************************************************
********************************************************************/
#ifdef __CINT__
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
extern "C" {
#define G__ANSIHEADER
#include "G__ci.h"
extern void G__cpp_setup_tagtableG__Venus();
extern void G__cpp_setup_inheritanceG__Venus();
extern void G__cpp_setup_typetableG__Venus();
extern void G__cpp_setup_memvarG__Venus();
extern void G__cpp_setup_globalG__Venus();
extern void G__cpp_setup_memfuncG__Venus();
extern void G__cpp_setup_funcG__Venus();
extern void G__set_cpp_environmentG__Venus();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TVenus.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__VenusLN_TClass;
extern G__linked_taginfo G__G__VenusLN_TObjArray;
extern G__linked_taginfo G__G__VenusLN_TObject;
extern G__linked_taginfo G__G__VenusLN_TString;
extern G__linked_taginfo G__G__VenusLN_TNamed;
extern G__linked_taginfo G__G__VenusLN_TGenerator;
extern G__linked_taginfo G__G__VenusLN_TVenus;
/********************************************************
* G__Venus.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__Venus() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TVenus.h");
}
int G__cpp_dllrevG__Venus() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TVenus */
static int G__TVenus_TVenus_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVenus *p=NULL;
   if(G__getaryconstruct()) p=new TVenus[G__getaryconstruct()];
   else                    p=new TVenus;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__VenusLN_TVenus);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_TVenus_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TVenus *p=NULL;
      p = new TVenus(
(Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Bool_t)G__int(libp->para[7])
,(Bool_t)G__int(libp->para[8]),(Double_t)G__double(libp->para[9])
,(Double_t)G__double(libp->para[10]),(Double_t)G__double(libp->para[11])
,(Double_t)G__double(libp->para[12]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__VenusLN_TVenus);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_GenerateEvent_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->GenerateEvent((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->GenerateEvent();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_GetPrimaries_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,85,(long)((TVenus*)(G__getstructoffset()))->GetPrimaries((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TVenus*)(G__getstructoffset()))->GetPrimaries());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetVersionNumber_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetVersionNumber((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetVersionNumber();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetU_D_QuarkProductionProb_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetU_D_QuarkProductionProb((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetU_D_QuarkProductionProb();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetQQ_QQbarProbability_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetQQ_QQbarProbability((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetQQ_QQbarProbability();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetLightFlavoursSpinProb_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetLightFlavoursSpinProb((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetLightFlavoursSpinProb();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetHeavyFlavoursSpinProb_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetHeavyFlavoursSpinProb((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetHeavyFlavoursSpinProb();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetIsoSpinProb_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetIsoSpinProb((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetIsoSpinProb();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_Setp_T_Distribution_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->Setp_T_Distribution((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->Setp_T_Distribution();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetAveragep_T_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetAveragep_T((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetAveragep_T();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetStringTension_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStringTension((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStringTension();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetStringDecayParameter_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStringDecayParameter((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStringDecayParameter();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetThresholdResonanceToString_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetThresholdResonanceToString((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetThresholdResonanceToString();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetCutOffForKmaxor_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCutOffForKmaxor((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCutOffForKmaxor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetBreakingProcedureOption_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetBreakingProcedureOption((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetBreakingProcedureOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetQuarkp_TDistributionOption_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetQuarkp_TDistributionOption((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetQuarkp_TDistributionOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMeanTransverseQuarkMomentum_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMeanTransverseQuarkMomentum((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMeanTransverseQuarkMomentum((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMeanTransverseQuarkMomentum((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMeanTransverseQuarkMomentum();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetSemihardInteractionProb_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSemihardInteractionProb((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSemihardInteractionProb();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetSemihardCutOff_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSemihardCutOff((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSemihardCutOff();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetSeaRatio_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSeaRatio((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSeaRatio();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetProjectileDiffractiveProb_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetProjectileDiffractiveProb((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetProjectileDiffractiveProb();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetTargetDiffractiveProb_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetTargetDiffractiveProb((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetTargetDiffractiveProb();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetStructureFunctionSeaValence_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStructureFunctionSeaValence((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStructureFunctionSeaValence();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetStructureFunctionCutOffMass_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStructureFunctionCutOffMass((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStructureFunctionCutOffMass();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetDiffractiveValenceQuarkFrac_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetDiffractiveValenceQuarkFrac((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetDiffractiveValenceQuarkFrac();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetPhaseSpace_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPhaseSpace((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPhaseSpace();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetGribovReggeGamma_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeGamma((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeGamma();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetGribovReggeRSquared_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeRSquared((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeRSquared();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetGribovReggeDelta_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeDelta((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeDelta();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetGribovReggeSlope_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeSlope((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeSlope();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetGribovReggeCrossSecWeight_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeCrossSecWeight((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGribovReggeCrossSecWeight();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetHardCoreDistance_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetHardCoreDistance((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetHardCoreDistance();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetJ_PsiNucleonCrossSec_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJ_PsiNucleonCrossSec((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJ_PsiNucleonCrossSec();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetReactionTime_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetReactionTime((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetReactionTime();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetBaryonRadius_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetBaryonRadius((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetBaryonRadius();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMesonRadius_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMesonRadius((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMesonRadius();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetInteractionMass_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetInteractionMass((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetInteractionMass();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetJIntaOption_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJIntaOption((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJIntaOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetPrintOptionAmprif_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintOptionAmprif((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintOptionAmprif();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetPrintOptionDelvol_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintOptionDelvol((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintOptionDelvol();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetPrintOptionDeleps_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintOptionDeleps((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintOptionDeleps();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetEntropyOption_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetEntropyOption((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetEntropyOption((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetEntropyOption((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetEntropyOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetDecayTime_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetDecayTime((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetDecayTime();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetOscillatorQuantum_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetOscillatorQuantum((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetOscillatorQuantum();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetSpaceTimeEvolutionMinTau_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSpaceTimeEvolutionMinTau((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSpaceTimeEvolutionMinTau();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetTauSteps_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetTauSteps((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetTauSteps();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_Setp_TDistributionRange_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->Setp_TDistributionRange((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->Setp_TDistributionRange();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetGaussDistributionRange_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGaussDistributionRange((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetGaussDistributionRange();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetDensityDistributionRange_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetDensityDistributionRange((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetDensityDistributionRange();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetTryAgain_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetTryAgain((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetTryAgain();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetJ_PsiEvolutionTime_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJ_PsiEvolutionTime((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJ_PsiEvolutionTime();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetJ_PsiEvolutionTimeSteps_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJ_PsiEvolutionTimeSteps((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJ_PsiEvolutionTimeSteps();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMinimumEnergyOption_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMinimumEnergyOption((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMinimumEnergyOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetBergerJaffeTheta_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetBergerJaffeTheta((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetBergerJaffeTheta();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetSeaProbability_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSeaProbability((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSeaProbability();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetInelasticProtonProtonCrossSec_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetInelasticProtonProtonCrossSec((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetInelasticProtonProtonCrossSec();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetEntropyCalculated_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetEntropyCalculated((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetEntropyCalculated();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetDualPartonModel_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetDualPartonModel((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetDualPartonModel();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetAntiQuarkColourExchange_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetAntiQuarkColourExchange((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetAntiQuarkColourExchange();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMinNumberOfValenceQuarks_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMinNumberOfValenceQuarks((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMinNumberOfValenceQuarks();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMaxNumberOfValenceQuarks_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMaxNumberOfValenceQuarks((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMaxNumberOfValenceQuarks();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetRapidityUpperLimit_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetRapidityUpperLimit((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetRapidityUpperLimit();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetClean_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetClean((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetClean();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetCMToLabTransformation_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCMToLabTransformation((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCMToLabTransformation();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMaxNumberOfCollisions_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMaxNumberOfCollisions((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMaxNumberOfCollisions();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMaxResonanceSpin_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMaxResonanceSpin((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMaxResonanceSpin();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMomentumRescaling_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMomentumRescaling((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMomentumRescaling();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetNueEnergy_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetNueEnergy((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetNueEnergy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMuonEnergy_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMuonEnergy((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMuonEnergy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMuonAngle_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMuonAngle((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMuonAngle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetCollisionTrigger_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCollisionTrigger((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCollisionTrigger();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetPrintOption_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintOption((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetPrintSubOption_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintSubOption((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintSubOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetEventPrint_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetEventPrint((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetEventPrint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetPrintMarks_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintMarks((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPrintMarks();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMaxImpact_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMaxImpact((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMaxImpact();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMinImpact_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMinImpact((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMinImpact();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetStoreOnlyStable_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStoreOnlyStable((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStoreOnlyStable();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetInitialRandomSeed_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetInitialRandomSeed((Double_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetInitialRandomSeed();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetJFRADESuppression_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJFRADESuppression((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetJFRADESuppression();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetResonanceStable_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetResonanceStable((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetResonanceStable();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetKShortKLongStable_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetKShortKLongStable((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetLambdaStable_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetLambdaStable((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetSigmaStable_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSigmaStable((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetCascadeStable_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCascadeStable((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetOmegaStable_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetOmegaStable((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetPiZeroStable_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetPiZeroStable((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetRhoPhiRatio_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetRhoPhiRatio((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetRhoPhiRatio();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetSpaceTimeEvolution_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSpaceTimeEvolution((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetSpaceTimeEvolution();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetMinTimeInEvolution_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMinTimeInEvolution((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetMinTimeInEvolution();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetTimeStepInEvolution_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetTimeStepInEvolution((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetTimeStepInEvolution();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetCentralPointInEvolution_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCentralPointInEvolution((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetCentralPointInEvolution();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetsMass_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetsMass((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetsMass();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetuuMass_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetuuMass((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetuuMass();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetusMass_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetusMass((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetusMass();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetssMass_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetssMass((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetssMass();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_SetStorage_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->SetStorage((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_Show_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_DeclFileName_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVenus*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_DeclFileLine_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVenus*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_ImplFileName_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVenus*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_ImplFileLine_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVenus*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_Class_Version_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVenus*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_Class_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVenus*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_Dictionary_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_IsA_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVenus*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_ShowMembers_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVenus_Streamer_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVenus*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TVenus_TVenus_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TVenus *p;
   if(1!=libp->paran) ;
   p=new TVenus(*(TVenus*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__VenusLN_TVenus);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVenus_wATVenus_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVenus *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVenus *)((G__getstructoffset())+sizeof(TVenus)*i);
   else  delete (TVenus *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TVenus */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Venus {
 public:
  G__Sizep2memfuncG__Venus() {p=&G__Sizep2memfuncG__Venus::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Venus::*p)();
};

size_t G__get_sizep2memfuncG__Venus()
{
  G__Sizep2memfuncG__Venus a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceG__Venus() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__VenusLN_TVenus))) {
     TVenus *G__Lderived;
     G__Lderived=(TVenus*)0x1000;
     {
       TGenerator *G__Lpbase=(TGenerator*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__VenusLN_TVenus),G__get_linked_tagnum(&G__G__VenusLN_TGenerator),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__VenusLN_TVenus),G__get_linked_tagnum(&G__G__VenusLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__VenusLN_TVenus),G__get_linked_tagnum(&G__G__VenusLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Venus() {

   /* Setting up typedef entry */
   G__search_typename2("Char_t",99,-1,0,
-1);
   G__setnewtype(-1,"Signed Character 1 byte",0);
   G__search_typename2("UChar_t",98,-1,0,
-1);
   G__setnewtype(-1,"Unsigned Character 1 byte",0);
   G__search_typename2("Short_t",115,-1,0,
-1);
   G__setnewtype(-1,"Signed Short integer 2 bytes",0);
   G__search_typename2("UShort_t",114,-1,0,
-1);
   G__setnewtype(-1,"Unsigned Short integer 2 bytes",0);
   G__search_typename2("Int_t",105,-1,0,
-1);
   G__setnewtype(-1,"Signed integer 4 bytes",0);
   G__search_typename2("UInt_t",104,-1,0,
-1);
   G__setnewtype(-1,"Unsigned integer 4 bytes",0);
   G__search_typename2("Seek_t",105,-1,0,
-1);
   G__setnewtype(-1,"File pointer",0);
   G__search_typename2("Long_t",108,-1,0,
-1);
   G__setnewtype(-1,"Signed long integer 8 bytes",0);
   G__search_typename2("ULong_t",107,-1,0,
-1);
   G__setnewtype(-1,"Unsigned long integer 8 bytes",0);
   G__search_typename2("Float_t",102,-1,0,
-1);
   G__setnewtype(-1,"Float 4 bytes",0);
   G__search_typename2("Double_t",100,-1,0,
-1);
   G__setnewtype(-1,"Float 8 bytes",0);
   G__search_typename2("Text_t",99,-1,0,
-1);
   G__setnewtype(-1,"General string",0);
   G__search_typename2("Bool_t",98,-1,0,
-1);
   G__setnewtype(-1,"Boolean (0=false, 1=true)",0);
   G__search_typename2("Byte_t",98,-1,0,
-1);
   G__setnewtype(-1,"Byte (8 bits)",0);
   G__search_typename2("Version_t",115,-1,0,
-1);
   G__setnewtype(-1,"Class version identifier",0);
   G__search_typename2("Option_t",99,-1,0,
-1);
   G__setnewtype(-1,"Option string",0);
   G__search_typename2("Ssiz_t",105,-1,0,
-1);
   G__setnewtype(-1,"String size",0);
   G__search_typename2("Real_t",102,-1,0,
-1);
   G__setnewtype(-1,"TVector and TMatrix element type",0);
   G__search_typename2("VoidFuncPtr_t",89,-1,0,
-1);
   G__setnewtype(-1,"pointer to void function",0);
   G__search_typename2("FreeHookFun_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("ReAllocFun_t",81,-1,2,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("ReAllocCFun_t",81,-1,2,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Axis_t",102,-1,0,
-1);
   G__setnewtype(-1,"Axis values type",0);
   G__search_typename2("Stat_t",100,-1,0,
-1);
   G__setnewtype(-1,"Statistics type",0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TVenus */
static void G__setup_memvarTVenus(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__VenusLN_TVenus));
   { TVenus *p; p=(TVenus*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fAllStable=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fAProjectile=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fAveragePt=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fATarget=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fBaryonRadius=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fBreaking=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fCascadeStable=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCentralPoint=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__VenusLN_TString),-1,-1,2,"fChoice=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fClean=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCollisionTrigger=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fColourExchange=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fCore=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCutKmaxor=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fCutMass=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fCutSemi=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fDecayTime=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fDensityRange=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fDualParton=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEntropy1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fEntropy2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEntropy3=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEntropyCalc=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fGaussianRange=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fGribovCross=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fGribovDelta=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fGribovGamma=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fGribovR2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fGribovSlope=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fImpactParameterMin=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fImpactParameterMax=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fInitialSeed=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fInteractionMass=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fInterval=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fIstore=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fJfradeSup=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fJintalOpt=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fJ_PsiEvolution=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fJ_PsiSteps=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fKStable=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fLabSys=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fLambdaStable=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fLastGeneration=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMassTheta=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMaxCollisions=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMaxSpin=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMaxValence=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMeanQMomentum1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMeanQMomentum2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMeanQMomentum3=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMesonRadius=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMinEnergy=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMinTime=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMinValence=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMuonAngle=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fMuonEnergy=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fNueEnergy=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNumberOfEvents=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fIncidentMomentum=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fOmegaStable=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fOsciQuantum=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPIsospin=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fPiZeroStable=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPhaseSpace=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPhiMin=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPhiMax=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPDiQuark=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPPInelastic=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPrintEvent=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPrintMarks=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPrintOption=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPrintOption1=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPrintOption2=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPrintOption3=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPrintSubOption=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fProjDiffProb=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPSpinLight=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPSpinHeavy=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fPTDistribution=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPtRange=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fPud=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fQuarkPt=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fReacTime=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRescale=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fResThreshold=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fRetries=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fRhoPhi=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSeaProbability=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSeaRatio=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSeaValenceCut=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSemihard=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSigmaJ_Psi=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fSigmaStable=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSpaceTime=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSpaceTimeStep=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fssQuarkMass=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSQuarkMass=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fStringDecay=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fStringTension=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fTargDiffProb=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fTauMin=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fTauMax=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTauSteps=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fUpdate=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fuuQuarkMass=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fusQuarkMass=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fValenceFrac=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVersion=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fZProjectile=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fZTarget=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__VenusLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Venus() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncTVenus(void) {
   /* TVenus */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__VenusLN_TVenus));
   G__memfunc_setup("TVenus",613,G__TVenus_TVenus_0_0,105,G__get_linked_tagnum(&G__G__VenusLN_TVenus),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVenus",613,G__TVenus_TVenus_1_0,105,G__get_linked_tagnum(&G__G__VenusLN_TVenus),-1,0,13,1,1,0,
"C - 'Text_t' 0 - choice i - 'Int_t' 0 - numberOfEvents "
"i - 'Int_t' 0 - zprojectile i - 'Int_t' 0 - aprojectile "
"i - 'Int_t' 0 - ztarget i - 'Int_t' 0 - atarget "
"d - 'Double_t' 0 - incidentMomentum b - 'Bool_t' 0 - labSys "
"b - 'Bool_t' 0 - lastGeneration d - 'Double_t' 0 - impactParameterMin "
"d - 'Double_t' 0 - impactParameterMax d - 'Double_t' 0 - phiMin "
"d - 'Double_t' 0 - phiMax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GenerateEvent",1325,G__TVenus_GenerateEvent_3_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrimaries",1228,G__TVenus_GetPrimaries_4_0,85,G__get_linked_tagnum(&G__G__VenusLN_TObjArray),-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetVersionNumber",1659,G__TVenus_SetVersionNumber_5_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 521 iversn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetU_D_QuarkProductionProb",2625,G__TVenus_SetU_D_QuarkProductionProb_6_0,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.455 pud",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetQQ_QQbarProbability",2181,G__TVenus_SetQQ_QQbarProbability_7_0,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.08 pdiqua",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLightFlavoursSpinProb",2467,G__TVenus_SetLightFlavoursSpinProb_8_0,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.50 pspinl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHeavyFlavoursSpinProb",2472,G__TVenus_SetHeavyFlavoursSpinProb_9_0,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.75 pspinh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIsoSpinProb",1412,G__TVenus_SetIsoSpinProb_0_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.50 pispn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Setp_T_Distribution",1966,G__TVenus_Setp_T_Distribution_1_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 ioptf",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAveragep_T",1290,G__TVenus_SetAveragep_T_2_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.45 ptf",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStringTension",1667,G__TVenus_SetStringTension_3_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.0 tensn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStringDecayParameter",2346,G__TVenus_SetStringDecayParameter_4_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.20 parea",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetThresholdResonanceToString",2993,G__TVenus_SetThresholdResonanceToString_5_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.0 delrem",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCutOffForKmaxor",1804,G__TVenus_SetCutOffForKmaxor_6_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 4 kutdiq",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBreakingProcedureOption",2673,G__TVenus_SetBreakingProcedureOption_7_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 iopbrk",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetQuarkp_TDistributionOption",3020,G__TVenus_SetQuarkp_TDistributionOption_8_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 2 ioptq",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMeanTransverseQuarkMomentum",3120,G__TVenus_SetMeanTransverseQuarkMomentum_9_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 0.260 ptq1 f - 'Float_t' 0 0.0 ptq2 "
"f - 'Float_t' 0 0.0 ptq3",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSemihardInteractionProb",2668,G__TVenus_SetSemihardInteractionProb_0_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 -1.0 phard",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSemihardCutOff",1696,G__TVenus_SetSemihardCutOff_1_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.0 pth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSeaRatio",1092,G__TVenus_SetSeaRatio_2_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.0 rstras",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetProjectileDiffractiveProb",2871,G__TVenus_SetProjectileDiffractiveProb_3_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.32 wproj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTargetDiffractiveProb",2445,G__TVenus_SetTargetDiffractiveProb_4_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.32 wtarg",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStructureFunctionSeaValence",3098,G__TVenus_SetStructureFunctionSeaValence_5_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 2.0 cutmsq",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStructureFunctionCutOffMass",3102,G__TVenus_SetStructureFunctionCutOffMass_6_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.001 cutmss",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDiffractiveValenceQuarkFrac",3025,G__TVenus_SetDiffractiveValenceQuarkFrac_7_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.30 pvalen",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPhaseSpace",1289,G__TVenus_SetPhaseSpace_8_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.300 delmss",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGribovReggeGamma",1890,G__TVenus_SetGribovReggeGamma_9_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 3.64*0.04 grigam",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGribovReggeRSquared",2214,G__TVenus_SetGribovReggeRSquared_0_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 3.56*0.04 grirsq",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGribovReggeDelta",1897,G__TVenus_SetGribovReggeDelta_1_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.07 gridel",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGribovReggeSlope",1922,G__TVenus_SetGribovReggeSlope_2_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.25*0.04 grislo",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGribovReggeCrossSecWeight",2828,G__TVenus_SetGribovReggeCrossSecWeight_3_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.5 gricel",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHardCoreDistance",1887,G__TVenus_SetHardCoreDistance_4_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.8 core",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetJ_PsiNucleonCrossSec",2298,G__TVenus_SetJ_PsiNucleonCrossSec_5_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.2 sigj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetReactionTime",1520,G__TVenus_SetReactionTime_6_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.5 taurea",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBaryonRadius",1535,G__TVenus_SetBaryonRadius_7_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.63 radbar",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMesonRadius",1430,G__TVenus_SetMesonRadius_8_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.40 radmes",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetInteractionMass",1856,G__TVenus_SetInteractionMass_9_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.8 amsiac",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetJIntaOption",1403,G__TVenus_SetJIntaOption_0_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 2 iojint",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPrintOptionAmprif",2065,G__TVenus_SetPrintOptionAmprif_1_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.0 amprif",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPrintOptionDelvol",2072,G__TVenus_SetPrintOptionDelvol_2_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.0 delvol",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPrintOptionDeleps",2063,G__TVenus_SetPrintOptionDeleps_3_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.0 deleps",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetEntropyOption",1686,G__TVenus_SetEntropyOption_4_4,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 5 iopent f - 'Float_t' 0 4. uentro "
"i - 'Int_t' 0 10000 kentro",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDecayTime",1185,G__TVenus_SetDecayTime_5_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.0 taunll",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOscillatorQuantum",2099,G__TVenus_SetOscillatorQuantum_6_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 .500 omega",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSpaceTimeEvolutionMinTau",2746,G__TVenus_SetSpaceTimeEvolutionMinTau_7_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1. taumin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTauSteps",1125,G__TVenus_SetTauSteps_8_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 86 numtau",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Setp_TDistributionRange",2364,G__TVenus_Setp_TDistributionRange_9_4,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 6.0 ptmx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGaussDistributionRange",2588,G__TVenus_SetGaussDistributionRange_0_5,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 8.0 gaumx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDensityDistributionRange",2809,G__TVenus_SetDensityDistributionRange_1_5,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 10.0 fctrmx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTryAgain",1099,G__TVenus_SetTryAgain_2_5,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 10 ntrymx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetJ_PsiEvolutionTime",2133,G__TVenus_SetJ_PsiEvolutionTime_3_5,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 20.0 taumx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetJ_PsiEvolutionTimeSteps",2660,G__TVenus_SetJ_PsiEvolutionTimeSteps_4_5,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 100 nsttau",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMinimumEnergyOption",2283,G__TVenus_SetMinimumEnergyOption_5_5,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 iopenu",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBergerJaffeTheta",1877,G__TVenus_SetBergerJaffeTheta_6_5,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.51225 themas",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSeaProbability",1734,G__TVenus_SetSeaProbability_7_5,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 -1.0 prosea",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetInelasticProtonProtonCrossSec",3313,G__TVenus_SetInelasticProtonProtonCrossSec_8_5,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 -1.0 sigppi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetEntropyCalculated",2063,G__TVenus_SetEntropyCalculated_9_5,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 2 ientro",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDualPartonModel",1815,G__TVenus_SetDualPartonModel_0_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 idpm",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAntiQuarkColourExchange",2643,G__TVenus_SetAntiQuarkColourExchange_1_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 iaqu",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMinNumberOfValenceQuarks",2723,G__TVenus_SetMinNumberOfValenceQuarks_2_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 -5 neqmn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMaxNumberOfValenceQuarks",2725,G__TVenus_SetMaxNumberOfValenceQuarks_3_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 5 neqmx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRapidityUpperLimit",2173,G__TVenus_SetRapidityUpperLimit_4_6,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 2.0 ymximi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClean",783,G__TVenus_SetClean_5_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 nclean",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCMToLabTransformation",2405,G__TVenus_SetCMToLabTransformation_6_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 labsys",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMaxNumberOfCollisions",2447,G__TVenus_SetMaxNumberOfCollisions_7_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 10000 ncolmx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMaxResonanceSpin",1930,G__TVenus_SetMaxResonanceSpin_8_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 99999 maxres",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMomentumRescaling",2070,G__TVenus_SetMomentumRescaling_9_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 irescl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNueEnergy",1214,G__TVenus_SetNueEnergy_0_7,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 43.00 elepti",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMuonEnergy",1333,G__TVenus_SetMuonEnergy_1_7,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 26.24 elepto",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMuonAngle",1202,G__TVenus_SetMuonAngle_2_7,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 3.9645/360.0*2*3.14159 angmue",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCollisionTrigger",1964,G__TVenus_SetCollisionTrigger_3_7,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 9999 ko1ko2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPrintOption",1458,G__TVenus_SetPrintOption_4_7,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 ish",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPrintSubOption",1756,G__TVenus_SetPrintSubOption_5_7,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 ishsub",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetEventPrint",1339,G__TVenus_SetEventPrint_6_7,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 ishevt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPrintMarks",1335,G__TVenus_SetPrintMarks_7_7,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 ipagi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMaxImpact",1200,G__TVenus_SetMaxImpact_8_7,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 10000. bmaxim",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMinImpact",1198,G__TVenus_SetMinImpact_9_7,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0. bminim",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStoreOnlyStable",1846,G__TVenus_SetStoreOnlyStable_0_8,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 istmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetInitialRandomSeed",2008,G__TVenus_SetInitialRandomSeed_1_8,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 0.0 seedi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetJFRADESuppression",1923,G__TVenus_SetJFRADESuppression_2_8,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 ifrade",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetResonanceStable",1829,G__TVenus_SetResonanceStable_3_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE stable",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetKShortKLongStable",1981,G__TVenus_SetKShortKLongStable_4_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - stable",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLambdaStable",1480,G__TVenus_SetLambdaStable_5_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - stable",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSigmaStable",1400,G__TVenus_SetSigmaStable_6_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - stable",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCascadeStable",1579,G__TVenus_SetCascadeStable_7_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - stable",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOmegaStable",1392,G__TVenus_SetOmegaStable_8_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - stable",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPiZeroStable",1504,G__TVenus_SetPiZeroStable_9_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - stable",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRhoPhiRatio",1397,G__TVenus_SetRhoPhiRatio_0_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 rhophi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSpaceTimeEvolution",2156,G__TVenus_SetSpaceTimeEvolution_1_9,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 ispall",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMinTimeInEvolution",2139,G__TVenus_SetMinTimeInEvolution_2_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 -3.0 wtmini",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTimeStepInEvolution",2259,G__TVenus_SetTimeStepInEvolution_3_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1.0 wtstep",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCentralPointInEvolution",2683,G__TVenus_SetCentralPointInEvolution_4_9,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 iwcent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetsMass",819,G__TVenus_SetsMass_5_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.0 smas",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetuuMass",938,G__TVenus_SetuuMass_6_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.0 uumas",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetusMass",936,G__TVenus_SetusMass_7_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.0 usmas",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetssMass",934,G__TVenus_SetssMass_8_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.0 ssmas",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStorage",1025,G__TVenus_SetStorage_9_9,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - istore",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TVenus_Show_0_10,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TVenus_DeclFileName_1_10,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVenus_DeclFileLine_2_10,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVenus_ImplFileName_3_10,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVenus_ImplFileLine_4_10,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVenus_Class_Version_5_10,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVenus_Class_6_10,85,G__get_linked_tagnum(&G__G__VenusLN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TVenus_Dictionary_7_10,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVenus_IsA_8_10,85,G__get_linked_tagnum(&G__G__VenusLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVenus_ShowMembers_9_10,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVenus_Streamer_0_11,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TVenus",613,G__TVenus_TVenus_1_11,(int)('i'),G__get_linked_tagnum(&G__G__VenusLN_TVenus),-1,0,1,1,1,0,"u 'TVenus' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TVenus",739,G__TVenus_wATVenus_2_11,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Venus() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Venus() {

   /* Setting up global variables */
   G__resetplocal();


   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Venus() {
   G__lastifuncposition();


   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__VenusLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__VenusLN_TObjArray = { "TObjArray" , 99 , -1 };
G__linked_taginfo G__G__VenusLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__VenusLN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__VenusLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__VenusLN_TGenerator = { "TGenerator" , 99 , -1 };
G__linked_taginfo G__G__VenusLN_TVenus = { "TVenus" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__Venus() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__VenusLN_TVenus),sizeof(TVenus),-1,0,"Venus event generator interface class",G__setup_memvarTVenus,G__setup_memfuncTVenus);
}
extern "C" void G__cpp_setupG__Venus() {
  G__check_setup_version(51111,"G__cpp_setupG__Venus()");
  G__set_cpp_environmentG__Venus();
  G__cpp_setup_tagtableG__Venus();

  G__cpp_setup_inheritanceG__Venus();

  G__cpp_setup_typetableG__Venus();

  G__cpp_setup_memvarG__Venus();

  G__cpp_setup_memfuncG__Venus();
  G__cpp_setup_globalG__Venus();
  G__cpp_setup_funcG__Venus();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Venus();
  return;
}
class G__cpp_setup_initG__Venus {
  public:
    G__cpp_setup_initG__Venus() { G__add_setup_func("G__Venus",&G__cpp_setupG__Venus); }
   ~G__cpp_setup_initG__Venus() { G__remove_setup_func("G__Venus"); }
};
G__cpp_setup_initG__Venus G__cpp_setup_initializerG__Venus;

//
// File generated by /home/rdm/root/bin/rootcint at Thu Oct  8 19:50:46 1998.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVenus *&obj)
{
   // Read a pointer to an object of class TVenus.

   obj = (TVenus *) buf.ReadObject(TVenus::Class());
   return buf;
}

//______________________________________________________________________________
void TVenus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVenus.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TGenerator::Streamer(R__b);
      R__b >> fAllStable;
      R__b >> fAProjectile;
      R__b >> fAveragePt;
      R__b >> fATarget;
      R__b >> fBaryonRadius;
      R__b >> fBreaking;
      R__b >> fCascadeStable;
      R__b >> fCentralPoint;
      fChoice.Streamer(R__b);
      R__b >> fClean;
      R__b >> fCollisionTrigger;
      R__b >> fColourExchange;
      R__b >> fCore;
      R__b >> fCutKmaxor;
      R__b >> fCutMass;
      R__b >> fCutSemi;
      R__b >> fDecayTime;
      R__b >> fDensityRange;
      R__b >> fDualParton;
      R__b >> fEntropy1;
      R__b >> fEntropy2;
      R__b >> fEntropy3;
      R__b >> fEntropyCalc;
      R__b >> fGaussianRange;
      R__b >> fGribovCross;
      R__b >> fGribovDelta;
      R__b >> fGribovGamma;
      R__b >> fGribovR2;
      R__b >> fGribovSlope;
      R__b >> fImpactParameterMin;
      R__b >> fImpactParameterMax;
      R__b >> fInitialSeed;
      R__b >> fInteractionMass;
      R__b >> fInterval;
      R__b >> fIstore;
      R__b >> fJfradeSup;
      R__b >> fJintalOpt;
      R__b >> fJ_PsiEvolution;
      R__b >> fJ_PsiSteps;
      R__b >> fKStable;
      R__b >> fLabSys;
      R__b >> fLambdaStable;
      R__b >> fLastGeneration;
      R__b >> fMassTheta;
      R__b >> fMaxCollisions;
      R__b >> fMaxSpin;
      R__b >> fMaxValence;
      R__b >> fMeanQMomentum1;
      R__b >> fMeanQMomentum2;
      R__b >> fMeanQMomentum3;
      R__b >> fMesonRadius;
      R__b >> fMinEnergy;
      R__b >> fMinTime;
      R__b >> fMinValence;
      R__b >> fMuonAngle;
      R__b >> fMuonEnergy;
      R__b >> fNueEnergy;
      R__b >> fNumberOfEvents;
      R__b >> fIncidentMomentum;
      R__b >> fOmegaStable;
      R__b >> fOsciQuantum;
      R__b >> fPIsospin;
      R__b >> fPiZeroStable;
      R__b >> fPhaseSpace;
      R__b >> fPhiMin;
      R__b >> fPhiMax;
      R__b >> fPDiQuark;
      R__b >> fPPInelastic;
      R__b >> fPrintEvent;
      R__b >> fPrintMarks;
      R__b >> fPrintOption;
      R__b >> fPrintOption1;
      R__b >> fPrintOption2;
      R__b >> fPrintOption3;
      R__b >> fPrintSubOption;
      R__b >> fProjDiffProb;
      R__b >> fPSpinLight;
      R__b >> fPSpinHeavy;
      R__b >> fPTDistribution;
      R__b >> fPtRange;
      R__b >> fPud;
      R__b >> fQuarkPt;
      R__b >> fReacTime;
      R__b >> fRescale;
      R__b >> fResThreshold;
      R__b >> fRetries;
      R__b >> fRhoPhi;
      R__b >> fSeaProbability;
      R__b >> fSeaRatio;
      R__b >> fSeaValenceCut;
      R__b >> fSemihard;
      R__b >> fSigmaJ_Psi;
      R__b >> fSigmaStable;
      R__b >> fSpaceTime;
      R__b >> fSpaceTimeStep;
      R__b >> fssQuarkMass;
      R__b >> fSQuarkMass;
      R__b >> fStringDecay;
      R__b >> fStringTension;
      R__b >> fTargDiffProb;
      R__b >> fTauMin;
      R__b >> fTauMax;
      R__b >> fTauSteps;
      R__b >> fUpdate;
      R__b >> fuuQuarkMass;
      R__b >> fusQuarkMass;
      R__b >> fValenceFrac;
      R__b >> fVersion;
      R__b >> fZProjectile;
      R__b >> fZTarget;
   } else {
      R__b.WriteVersion(TVenus::IsA());
      TGenerator::Streamer(R__b);
      R__b << fAllStable;
      R__b << fAProjectile;
      R__b << fAveragePt;
      R__b << fATarget;
      R__b << fBaryonRadius;
      R__b << fBreaking;
      R__b << fCascadeStable;
      R__b << fCentralPoint;
      fChoice.Streamer(R__b);
      R__b << fClean;
      R__b << fCollisionTrigger;
      R__b << fColourExchange;
      R__b << fCore;
      R__b << fCutKmaxor;
      R__b << fCutMass;
      R__b << fCutSemi;
      R__b << fDecayTime;
      R__b << fDensityRange;
      R__b << fDualParton;
      R__b << fEntropy1;
      R__b << fEntropy2;
      R__b << fEntropy3;
      R__b << fEntropyCalc;
      R__b << fGaussianRange;
      R__b << fGribovCross;
      R__b << fGribovDelta;
      R__b << fGribovGamma;
      R__b << fGribovR2;
      R__b << fGribovSlope;
      R__b << fImpactParameterMin;
      R__b << fImpactParameterMax;
      R__b << fInitialSeed;
      R__b << fInteractionMass;
      R__b << fInterval;
      R__b << fIstore;
      R__b << fJfradeSup;
      R__b << fJintalOpt;
      R__b << fJ_PsiEvolution;
      R__b << fJ_PsiSteps;
      R__b << fKStable;
      R__b << fLabSys;
      R__b << fLambdaStable;
      R__b << fLastGeneration;
      R__b << fMassTheta;
      R__b << fMaxCollisions;
      R__b << fMaxSpin;
      R__b << fMaxValence;
      R__b << fMeanQMomentum1;
      R__b << fMeanQMomentum2;
      R__b << fMeanQMomentum3;
      R__b << fMesonRadius;
      R__b << fMinEnergy;
      R__b << fMinTime;
      R__b << fMinValence;
      R__b << fMuonAngle;
      R__b << fMuonEnergy;
      R__b << fNueEnergy;
      R__b << fNumberOfEvents;
      R__b << fIncidentMomentum;
      R__b << fOmegaStable;
      R__b << fOsciQuantum;
      R__b << fPIsospin;
      R__b << fPiZeroStable;
      R__b << fPhaseSpace;
      R__b << fPhiMin;
      R__b << fPhiMax;
      R__b << fPDiQuark;
      R__b << fPPInelastic;
      R__b << fPrintEvent;
      R__b << fPrintMarks;
      R__b << fPrintOption;
      R__b << fPrintOption1;
      R__b << fPrintOption2;
      R__b << fPrintOption3;
      R__b << fPrintSubOption;
      R__b << fProjDiffProb;
      R__b << fPSpinLight;
      R__b << fPSpinHeavy;
      R__b << fPTDistribution;
      R__b << fPtRange;
      R__b << fPud;
      R__b << fQuarkPt;
      R__b << fReacTime;
      R__b << fRescale;
      R__b << fResThreshold;
      R__b << fRetries;
      R__b << fRhoPhi;
      R__b << fSeaProbability;
      R__b << fSeaRatio;
      R__b << fSeaValenceCut;
      R__b << fSemihard;
      R__b << fSigmaJ_Psi;
      R__b << fSigmaStable;
      R__b << fSpaceTime;
      R__b << fSpaceTimeStep;
      R__b << fssQuarkMass;
      R__b << fSQuarkMass;
      R__b << fStringDecay;
      R__b << fStringTension;
      R__b << fTargDiffProb;
      R__b << fTauMin;
      R__b << fTauMax;
      R__b << fTauSteps;
      R__b << fUpdate;
      R__b << fuuQuarkMass;
      R__b << fusQuarkMass;
      R__b << fValenceFrac;
      R__b << fVersion;
      R__b << fZProjectile;
      R__b << fZTarget;
   }
}

//______________________________________________________________________________
void TVenus::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TVenus.

   TClass *R__cl  = TVenus::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fAllStable", &fAllStable);
   R__insp.Inspect(R__cl, R__parent, "fAProjectile", &fAProjectile);
   R__insp.Inspect(R__cl, R__parent, "fAveragePt", &fAveragePt);
   R__insp.Inspect(R__cl, R__parent, "fATarget", &fATarget);
   R__insp.Inspect(R__cl, R__parent, "fBaryonRadius", &fBaryonRadius);
   R__insp.Inspect(R__cl, R__parent, "fBreaking", &fBreaking);
   R__insp.Inspect(R__cl, R__parent, "fCascadeStable", &fCascadeStable);
   R__insp.Inspect(R__cl, R__parent, "fCentralPoint", &fCentralPoint);
   fChoice.ShowMembers(R__insp, strcat(R__parent,"fChoice.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fClean", &fClean);
   R__insp.Inspect(R__cl, R__parent, "fCollisionTrigger", &fCollisionTrigger);
   R__insp.Inspect(R__cl, R__parent, "fColourExchange", &fColourExchange);
   R__insp.Inspect(R__cl, R__parent, "fCore", &fCore);
   R__insp.Inspect(R__cl, R__parent, "fCutKmaxor", &fCutKmaxor);
   R__insp.Inspect(R__cl, R__parent, "fCutMass", &fCutMass);
   R__insp.Inspect(R__cl, R__parent, "fCutSemi", &fCutSemi);
   R__insp.Inspect(R__cl, R__parent, "fDecayTime", &fDecayTime);
   R__insp.Inspect(R__cl, R__parent, "fDensityRange", &fDensityRange);
   R__insp.Inspect(R__cl, R__parent, "fDualParton", &fDualParton);
   R__insp.Inspect(R__cl, R__parent, "fEntropy1", &fEntropy1);
   R__insp.Inspect(R__cl, R__parent, "fEntropy2", &fEntropy2);
   R__insp.Inspect(R__cl, R__parent, "fEntropy3", &fEntropy3);
   R__insp.Inspect(R__cl, R__parent, "fEntropyCalc", &fEntropyCalc);
   R__insp.Inspect(R__cl, R__parent, "fGaussianRange", &fGaussianRange);
   R__insp.Inspect(R__cl, R__parent, "fGribovCross", &fGribovCross);
   R__insp.Inspect(R__cl, R__parent, "fGribovDelta", &fGribovDelta);
   R__insp.Inspect(R__cl, R__parent, "fGribovGamma", &fGribovGamma);
   R__insp.Inspect(R__cl, R__parent, "fGribovR2", &fGribovR2);
   R__insp.Inspect(R__cl, R__parent, "fGribovSlope", &fGribovSlope);
   R__insp.Inspect(R__cl, R__parent, "fImpactParameterMin", &fImpactParameterMin);
   R__insp.Inspect(R__cl, R__parent, "fImpactParameterMax", &fImpactParameterMax);
   R__insp.Inspect(R__cl, R__parent, "fInitialSeed", &fInitialSeed);
   R__insp.Inspect(R__cl, R__parent, "fInteractionMass", &fInteractionMass);
   R__insp.Inspect(R__cl, R__parent, "fInterval", &fInterval);
   R__insp.Inspect(R__cl, R__parent, "fIstore", &fIstore);
   R__insp.Inspect(R__cl, R__parent, "fJfradeSup", &fJfradeSup);
   R__insp.Inspect(R__cl, R__parent, "fJintalOpt", &fJintalOpt);
   R__insp.Inspect(R__cl, R__parent, "fJ_PsiEvolution", &fJ_PsiEvolution);
   R__insp.Inspect(R__cl, R__parent, "fJ_PsiSteps", &fJ_PsiSteps);
   R__insp.Inspect(R__cl, R__parent, "fKStable", &fKStable);
   R__insp.Inspect(R__cl, R__parent, "fLabSys", &fLabSys);
   R__insp.Inspect(R__cl, R__parent, "fLambdaStable", &fLambdaStable);
   R__insp.Inspect(R__cl, R__parent, "fLastGeneration", &fLastGeneration);
   R__insp.Inspect(R__cl, R__parent, "fMassTheta", &fMassTheta);
   R__insp.Inspect(R__cl, R__parent, "fMaxCollisions", &fMaxCollisions);
   R__insp.Inspect(R__cl, R__parent, "fMaxSpin", &fMaxSpin);
   R__insp.Inspect(R__cl, R__parent, "fMaxValence", &fMaxValence);
   R__insp.Inspect(R__cl, R__parent, "fMeanQMomentum1", &fMeanQMomentum1);
   R__insp.Inspect(R__cl, R__parent, "fMeanQMomentum2", &fMeanQMomentum2);
   R__insp.Inspect(R__cl, R__parent, "fMeanQMomentum3", &fMeanQMomentum3);
   R__insp.Inspect(R__cl, R__parent, "fMesonRadius", &fMesonRadius);
   R__insp.Inspect(R__cl, R__parent, "fMinEnergy", &fMinEnergy);
   R__insp.Inspect(R__cl, R__parent, "fMinTime", &fMinTime);
   R__insp.Inspect(R__cl, R__parent, "fMinValence", &fMinValence);
   R__insp.Inspect(R__cl, R__parent, "fMuonAngle", &fMuonAngle);
   R__insp.Inspect(R__cl, R__parent, "fMuonEnergy", &fMuonEnergy);
   R__insp.Inspect(R__cl, R__parent, "fNueEnergy", &fNueEnergy);
   R__insp.Inspect(R__cl, R__parent, "fNumberOfEvents", &fNumberOfEvents);
   R__insp.Inspect(R__cl, R__parent, "fIncidentMomentum", &fIncidentMomentum);
   R__insp.Inspect(R__cl, R__parent, "fOmegaStable", &fOmegaStable);
   R__insp.Inspect(R__cl, R__parent, "fOsciQuantum", &fOsciQuantum);
   R__insp.Inspect(R__cl, R__parent, "fPIsospin", &fPIsospin);
   R__insp.Inspect(R__cl, R__parent, "fPiZeroStable", &fPiZeroStable);
   R__insp.Inspect(R__cl, R__parent, "fPhaseSpace", &fPhaseSpace);
   R__insp.Inspect(R__cl, R__parent, "fPhiMin", &fPhiMin);
   R__insp.Inspect(R__cl, R__parent, "fPhiMax", &fPhiMax);
   R__insp.Inspect(R__cl, R__parent, "fPDiQuark", &fPDiQuark);
   R__insp.Inspect(R__cl, R__parent, "fPPInelastic", &fPPInelastic);
   R__insp.Inspect(R__cl, R__parent, "fPrintEvent", &fPrintEvent);
   R__insp.Inspect(R__cl, R__parent, "fPrintMarks", &fPrintMarks);
   R__insp.Inspect(R__cl, R__parent, "fPrintOption", &fPrintOption);
   R__insp.Inspect(R__cl, R__parent, "fPrintOption1", &fPrintOption1);
   R__insp.Inspect(R__cl, R__parent, "fPrintOption2", &fPrintOption2);
   R__insp.Inspect(R__cl, R__parent, "fPrintOption3", &fPrintOption3);
   R__insp.Inspect(R__cl, R__parent, "fPrintSubOption", &fPrintSubOption);
   R__insp.Inspect(R__cl, R__parent, "fProjDiffProb", &fProjDiffProb);
   R__insp.Inspect(R__cl, R__parent, "fPSpinLight", &fPSpinLight);
   R__insp.Inspect(R__cl, R__parent, "fPSpinHeavy", &fPSpinHeavy);
   R__insp.Inspect(R__cl, R__parent, "fPTDistribution", &fPTDistribution);
   R__insp.Inspect(R__cl, R__parent, "fPtRange", &fPtRange);
   R__insp.Inspect(R__cl, R__parent, "fPud", &fPud);
   R__insp.Inspect(R__cl, R__parent, "fQuarkPt", &fQuarkPt);
   R__insp.Inspect(R__cl, R__parent, "fReacTime", &fReacTime);
   R__insp.Inspect(R__cl, R__parent, "fRescale", &fRescale);
   R__insp.Inspect(R__cl, R__parent, "fResThreshold", &fResThreshold);
   R__insp.Inspect(R__cl, R__parent, "fRetries", &fRetries);
   R__insp.Inspect(R__cl, R__parent, "fRhoPhi", &fRhoPhi);
   R__insp.Inspect(R__cl, R__parent, "fSeaProbability", &fSeaProbability);
   R__insp.Inspect(R__cl, R__parent, "fSeaRatio", &fSeaRatio);
   R__insp.Inspect(R__cl, R__parent, "fSeaValenceCut", &fSeaValenceCut);
   R__insp.Inspect(R__cl, R__parent, "fSemihard", &fSemihard);
   R__insp.Inspect(R__cl, R__parent, "fSigmaJ_Psi", &fSigmaJ_Psi);
   R__insp.Inspect(R__cl, R__parent, "fSigmaStable", &fSigmaStable);
   R__insp.Inspect(R__cl, R__parent, "fSpaceTime", &fSpaceTime);
   R__insp.Inspect(R__cl, R__parent, "fSpaceTimeStep", &fSpaceTimeStep);
   R__insp.Inspect(R__cl, R__parent, "fssQuarkMass", &fssQuarkMass);
   R__insp.Inspect(R__cl, R__parent, "fSQuarkMass", &fSQuarkMass);
   R__insp.Inspect(R__cl, R__parent, "fStringDecay", &fStringDecay);
   R__insp.Inspect(R__cl, R__parent, "fStringTension", &fStringTension);
   R__insp.Inspect(R__cl, R__parent, "fTargDiffProb", &fTargDiffProb);
   R__insp.Inspect(R__cl, R__parent, "fTauMin", &fTauMin);
   R__insp.Inspect(R__cl, R__parent, "fTauMax", &fTauMax);
   R__insp.Inspect(R__cl, R__parent, "fTauSteps", &fTauSteps);
   R__insp.Inspect(R__cl, R__parent, "fUpdate", &fUpdate);
   R__insp.Inspect(R__cl, R__parent, "fuuQuarkMass", &fuuQuarkMass);
   R__insp.Inspect(R__cl, R__parent, "fusQuarkMass", &fusQuarkMass);
   R__insp.Inspect(R__cl, R__parent, "fValenceFrac", &fValenceFrac);
   R__insp.Inspect(R__cl, R__parent, "fVersion", &fVersion);
   R__insp.Inspect(R__cl, R__parent, "fZProjectile", &fZProjectile);
   R__insp.Inspect(R__cl, R__parent, "fZTarget", &fZTarget);
   TGenerator::ShowMembers(R__insp, R__parent);
}
