//*CMZ :  2.21/06 12/02/99  13.20.57  by  Pasha Murat
//*-- Author :    Pasha Murat   12/02/99

#include "TDatabasePDG.h"

ClassImp(TDatabasePDG)

TDatabasePDG*  TDatabasePDG::fgInstance = 0;

//______________________________________________________________________________
TDatabasePDG::TDatabasePDG(const char* name, const char* title)
             :TNamed(name,title)
{
    fParticleList = new THashList();
    Init();
    fgInstance    = this;
}

//______________________________________________________________________________
TDatabasePDG::~TDatabasePDG()
{
  delete fParticleList;
}

//------------------------------------------------------------------------------
TDatabasePDG::Cleaner::Cleaner()
{
}

//------------------------------------------------------------------------------
TDatabasePDG::Cleaner::~Cleaner()
{
  if (TDatabasePDG::fgInstance) {
     delete TDatabasePDG::fgInstance;
     TDatabasePDG::fgInstance = 0;
  }
}

//------------------------------------------------------------------------------
void TDatabasePDG::AddParticle(const Text_t *name, const Text_t *title,
			       Double_t mass, Bool_t stable,
			       Double_t width, Double_t charge,
			       Text_t *type, Int_t PDGcode)
{
//
//  Particle definition normal constructor. If the particle is set to be
//  stable, the decay width parameter does have no meaning and can be set to
//  any value. The parameters granularity, LowerCutOff and HighCutOff are
//  used for the construction of the mean free path look up tables. The
//  granularity will be the number of logwise energy points for which the
//  mean free path will be calculated.
//

  TParticlePDG* p = new TParticlePDG(name, title, mass, stable, width,
				     charge, type, PDGcode);
  fParticleList->Add(p);
}

//______________________________________________________________________________
Int_t TDatabasePDG::ConvertIsajetToPdg(Int_t isaNumber)
{
//
//  Converts the ISAJET Particle number into the PDG MC number
//
  switch (isaNumber) {
    case     1 : return     2; //     UP        .30000E+00       .67
    case    -1 : return    -2; //     UB        .30000E+00      -.67
    case     2 : return     1; //     DN        .30000E+00      -.33
    case    -2 : return    -1; //     DB        .30000E+00       .33
    case     3 : return     3; //     ST        .50000E+00      -.33
    case    -3 : return    -3; //     SB        .50000E+00       .33
    case     4 : return     4; //     CH        .16000E+01       .67
    case    -4 : return    -4; //     CB        .16000E+01      -.67
    case     5 : return     5; //     BT        .49000E+01      -.33
    case    -5 : return    -5; //     BB        .49000E+01       .33
    case     6 : return     7; //     TP        .30000E+02       .67
    case    -6 : return    -7; //     TB        .30000E+02      -.67
    case     9 : return    21; //     GL       0.               0.00
    case    80 : return    24; //     W+        SIN2W=.23       1.00
    case   -80 : return   -24; //     W-        SIN2W=.23      -1.00
    case    90 : return    23; //     Z0        SIN2W=.23       0.00
    case   230 : return   311; //     K0        .49767E+00      0.00
    case  -230 : return  -311; //     AK0       .49767E+00      0.00
    case   330 : return   331; //     ETAP      .95760E+00      0.00
    case   340 : return     0; //     F-        .20300E+01     -1.00
    case  -340 : return     0; //     F+        .20300E+01      1.00
    case   440 : return   441; //     ETAC      .29760E+01      0.00
    case   111 : return   113; //     RHO0      .77000E+00      0.00
    case   121 : return   213; //     RHO+      .77000E+00      1.00
    case  -121 : return  -213; //     RHO-      .77000E+00     -1.00
    case   221 : return   223; //     OMEG      .78260E+00      0.00
    case   131 : return   323; //     K*+       .88810E+00      1.00
    case  -131 : return  -323; //     K*-       .88810E+00     -1.00
    case   231 : return   313; //     K*0       .89220E+00      0.00
    case  -231 : return  -313; //     AK*0      .89220E+00      0.00
    case   331 : return   333; //     PHI       .10196E+01      0.00
    case   141 : return  -423; //     AD*0      .20060E+01      0.00
    case  -141 : return   423; //     D*0       .20060E+01      0.00
    case   241 : return  -413; //     D*-       .20086E+01     -1.00
    case  -241 : return   413; //     D*+       .20086E+01      1.00
    case   341 : return     0; //     F*-       .21400E+01     -1.00
    case  -341 : return     0; //     F*+       .21400E+01      1.00
    case   441 : return   443; //     JPSI      .30970E+01      0.00
    case  1140 : return  4222; //     SC++      .24300E+01      2.00
    case -1140 : return -4222; //     ASC--     .24300E+01     -2.00
    case  1240 : return  4212; //     SC+       .24300E+01      1.00
    case -1240 : return -4212; //     ASC-      .24300E+01     -1.00
    case  2140 : return  4122; //     LC+       .22600E+01      1.00
    case -2140 : return -4122; //     ALC-      .22600E+01     -1.00
    case  2240 : return  4112; //     SC0       .24300E+01      0.00
    case -2240 : return -4112; //     ASC0      .24300E+01      0.00
    case  1340 : return     0; //     USC.      .25000E+01      1.00
    case -1340 : return     0; //     AUSC.     .25000E+01     -1.00
    case  3140 : return     0; //     SUC.      .24000E+01      1.00
    case -3140 : return     0; //     ASUC.     .24000E+01     -1.00
    case  2340 : return     0; //     DSC.      .25000E+01      0.00
    case -2340 : return     0; //     ADSC.     .25000E+01      0.00
    case  3240 : return     0; //     SDC.      .24000E+01      0.00
    case -3240 : return     0; //     ASDC.     .24000E+01      0.00
    case  3340 : return     0; //     SSC.      .26000E+01      0.00
    case -3340 : return     0; //     ASSC.     .26000E+01      0.00
    case  1440 : return     0; //     UCC.      .35500E+01      2.00
    case -1440 : return     0; //     AUCC.     .35500E+01     -2.00
    case  2440 : return     0; //     DCC.      .35500E+01      1.00
    case -2440 : return     0; //     ADCC.     .35500E+01     -1.00
    case  3440 : return     0; //     SCC.      .37000E+01      1.00
    case -3440 : return     0; //     ASCC.     .37000E+01     -1.00
    case  1111 : return  2224; //     DL++      .12320E+01      2.00
    case -1111 : return -2224; //     ADL--     .12320E+01     -2.00
    case  1121 : return  2214; //     DL+       .12320E+01      1.00
    case -1121 : return -2214; //     ADL-      .12320E+01     -1.00
    case  1221 : return  2114; //     DL0       .12320E+01      0.00
    case -1221 : return -2114; //     ADL0      .12320E+01      0.00
    case  2221 : return   1114; //     DL-       .12320E+01     -1.00
    case -2221 : return -1114; //     ADL+      .12320E+01      1.00
    case  1131 : return  3224; //     S*+       .13823E+01      1.00
    case -1131 : return -3224; //     AS*-      .13823E+01     -1.00
    case  1231 : return  3214; //     S*0       .13820E+01      0.00
    case -1231 : return -3214; //     AS*0      .13820E+01      0.00
    case  2231 : return  3114; //     S*-       .13875E+01     -1.00
    case -2231 : return -3114; //     AS*+      .13875E+01      1.00
    case  1331 : return  3324; //     XI*0      .15318E+01      0.00
    case -1331 : return -3324; //     AXI*0     .15318E+01      0.00
    case  2331 : return  3314; //     XI*-      .15350E+01     -1.00
    case -2331 : return -3314; //     AXI*+     .15350E+01      1.00
    case  3331 : return  3334; //     OM-       .16722E+01     -1.00
    case -3331 : return -3334; //     AOM+      .16722E+01      1.00
    case  1141 : return     0; //     UUC*      .26300E+01      2.00
    case -1141 : return     0; //     AUUC*     .26300E+01     -2.00
    case  1241 : return     0; //     UDC*      .26300E+01      1.00
    case -1241 : return     0; //     AUDC*     .26300E+01     -1.00
    case  2241 : return     0; //     DDC*      .26300E+01      0.00
    case -2241 : return     0; //     ADDC*     .26300E+01      0.00
    case  1341 : return     0; //     USC*      .27000E+01      1.00
    case -1341 : return     0; //     AUSC*     .27000E+01     -1.00
    case  2341 : return     0; //     DSC*      .27000E+01      0.00
    case -2341 : return     0; //     ADSC*     .27000E+01      0.00
    case  3341 : return     0; //     SSC*      .28000E+01      0.00
    case -3341 : return     0; //     ASSC*     .28000E+01      0.00
    case  1441 : return     0; //     UCC*      .37500E+01      2.00
    case -1441 : return     0; //     AUCC*     .37500E+01     -2.00
    case  2441 : return     0; //     DCC*      .37500E+01      1.00
    case -2441 : return     0; //     ADCC*     .37500E+01     -1.00
    case  3441 : return     0; //     SCC*      .39000E+01      1.00
    case -3441 : return     0; //     ASCC*     .39000E+01     -1.00
    case  4441 : return     0; //     CCC*      .48000E+01      2.00
    case -4441 : return     0; //     ACCC*     .48000E+01     -2.00
    case    10 : return    22; // Photon
    case    12 : return    11; // Electron
    case   -12 : return   -11; // Positron
    case    14 : return    13; // Muon-
    case   -14 : return   -13; // Muon+
    case    16 : return    15; // Tau-
    case   -16 : return   -15; // Tau+
    case    11 : return    12; // Neutrino e
    case   -11 : return   -12; // Anti Neutrino e
    case    13 : return    14; // Neutrino Muon
    case   -13 : return   -14; // Anti Neutrino Muon
    case    15 : return    16; // Neutrino Tau
    case   -15 : return   -16; // Anti Neutrino Tau
    case   110 : return   111; // Pion0
    case   120 : return   211; // Pion+
    case  -120 : return  -211; // Pion-
    case   220 : return   221; // Eta
    case   130 : return   321; // Kaon+
    case  -130 : return  -321; // Kaon-
    case   -20 : return   130; // Kaon Long
    case    20 : return   310; // Kaon Short
    case  -240 : return  -411; // D+
    case   240 : return   411; // D-
    case  -140 : return   421; // D0
    case   140 : return  -421; // D0 bar
    case  1120 : return  2212; // Proton
    case -1120 : return -2212; // Anti Proton
    case  1220 : return  2112; // Neutron
    case -1220 : return -2112; // Anti Neutron
    case  2130 : return  3122; // Lambda
    case -2130 : return -3122; // Lambda bar
    case  1130 : return  3222; // Sigma+
    case -1130 : return -3222; // Sigma bar -
    case  1230 : return  3212; // Sigma0
    case -1230 : return -3212; // Sigma bar 0
    case  2230 : return  3112; // Sigma-
    case -2230 : return -3112; // Sigma bar +
    case  1330 : return  3322; // Xi0
    case -1330 : return -3322; // Xi bar 0
    case  2330 : return  3312; // Xi-
    case -2330 : return -3312; // Xi bar +
    default :    return 0;      // isajet or pdg number does not exist
  }
}

//______________________________________________________________________________
void TDatabasePDG::Init()
{
//
//  Defines particles according to the Particle Data Group
//
//  For questions regarding distribution or content of the MC particle
//  codes, contact
//  Gary Wagman (GSWagman@LBL.BITNET, LBL::GSWagman, or GSWagman@LBL.GOV).
//  (510)486-6610
//

   fParticleList->Add(new TParticlePDG("down","Q001",0.3,kTRUE, .0,-0.333333333333333,"Quark", 1));
   fParticleList->Add(new TParticlePDG("down bar","Q001",
                                      0.3,kTRUE, .0,
                                     0.333333333333333,"Quark", -1));
   fParticleList->Add(new TParticlePDG("up","Q002",
                                      0.3,kTRUE, .0,
                                     0.666666666666666,"Quark", 2));
   fParticleList->Add(new TParticlePDG("up bar","Q002",
                                      0.3,kTRUE, .0,
                                     -0.666666666666666,"Quark", -2));
   fParticleList->Add(new TParticlePDG("strange","Q003",
                                      0.5,kTRUE, .0,
                                     -0.333333333333333,"Quark", 3));
   fParticleList->Add(new TParticlePDG("strange bar","Q003",
                                      0.5,kTRUE, .0,
                                     0.333333333333333,"Quark", -3));
   fParticleList->Add(new TParticlePDG("charm","Q004",
                                      1.6,kTRUE, .0,
                                     0.666666666666666,"Quark", 4));
   fParticleList->Add(new TParticlePDG("charm bar","Q004",
                                      1.6,kTRUE, .0,
                                     -0.666666666666666,"Quark", -4));
   fParticleList->Add(new TParticlePDG("bottom","Q005",
                                      4.9,kTRUE, .0,
                                     -0.333333333333333,"Quark", 5));
   fParticleList->Add(new TParticlePDG("bottom bar","Q005",
                                      4.9,kTRUE, .0,
                                     0.333333333333333,"Quark", -5));
   fParticleList->Add(new TParticlePDG("top","Q007",
                                      30.,kTRUE, .0,
                                     0.666666666666666,"Quark", 7));
   fParticleList->Add(new TParticlePDG("top bar","Q007",
                                      30.,kTRUE, .0,
                                     -0.666666666666666,"Quark", -7));
   fParticleList->Add(new TParticlePDG("gluon","G021",
                                      .0,kTRUE, .0,
                                     0.0,"Gauge Boson", 21));

// Entry point of the pdg table conversion

   fParticleList->Add(new TParticlePDG("Searches0","S054",
                                      169.0,kTRUE, .0,
                                     0.0,"Meson", 6));
   fParticleList->Add(new TParticlePDG("e-","S003",
                                      5.10999E-04,kTRUE, .0,
                                     0.0,"Lepton", 11));
   fParticleList->Add(new TParticlePDG("e+","S003",
                                      5.10999E-04,kTRUE, .0,
                                     0.0,"Lepton", -11));
   fParticleList->Add(new TParticlePDG("nu(e)","S001",
                                      .0,kTRUE, .0,
                                     0.0,"Lepton", 12));
   fParticleList->Add(new TParticlePDG("nu(e) bar","S001",
                                      .0,kTRUE, .0,
                                     0.0,"Lepton", -12));
   fParticleList->Add(new TParticlePDG("mu-","S004",
                                      .1056583,kFALSE, 2.99591E-19,
                                     0.0,"Lepton", 13));
   fParticleList->Add(new TParticlePDG("mu+","S004",
                                      .1056583,kFALSE, 2.99591E-19,
                                     0.0,"Lepton", -13));
   fParticleList->Add(new TParticlePDG("nu(mu)","S002",
                                      .0,kTRUE, .0,
                                     0.0,"Lepton", 14));
   fParticleList->Add(new TParticlePDG("nu(mu) bar","S002",
                                      .0,kTRUE, .0,
                                     0.0,"Lepton", -14));
   fParticleList->Add(new TParticlePDG("tau-","S035",
                                      1.7771,kFALSE, 2.22700E-12,
                                     0.0,"Lepton", 15));
   fParticleList->Add(new TParticlePDG("tau+","S035",
                                      1.7771,kFALSE, 2.22700E-12,
                                     0.0,"Lepton", -15));
   fParticleList->Add(new TParticlePDG("nu(tau)","S036",
                                      .0,kTRUE, .0,
                                     0.0,"Lepton", 16));
   fParticleList->Add(new TParticlePDG("nu(tau) bar","S036",
                                      .0,kTRUE, .0,
                                     0.0,"Lepton", -16));
   fParticleList->Add(new TParticlePDG("gamma","S000",
                                      .0,kTRUE, .0,
                                     0.0,"Gauge Boson", 22));
   fParticleList->Add(new TParticlePDG("Z0","S044",
                                      91.18699,kFALSE, 2.49,
                                     0.0,"Gauge Boson", 23));
   fParticleList->Add(new TParticlePDG("W+","S043",
                                      80.22,kFALSE, 2.08,
                                     +1.,"Gauge Boson", 24));
   fParticleList->Add(new TParticlePDG("W-","S043",
                                      80.22,kFALSE, 2.08,
                                     -1.,"Gauge Boson", -24));
   fParticleList->Add(new TParticlePDG("pi0","S009",
                                      .1349764,kFALSE, 7.80000E-09,
                                     0.0,"Meson", 111));
   fParticleList->Add(new TParticlePDG("rho(770)0","M009",
                                      .7699,kFALSE, .1511999,
                                     0.0,"Meson", 113));
   fParticleList->Add(new TParticlePDG("a(2)(1320)0","M012",
                                      1.3184,kFALSE, .107,
                                     0.0,"Meson", 115));
   fParticleList->Add(new TParticlePDG("rho(3)(1690)0","M015",
                                      1.691,kFALSE, .215,
                                     0.0,"Meson", 117));
   fParticleList->Add(new TParticlePDG("K(L)0","S013",
                                      .4976719,kFALSE, 1.27400E-17,
                                     0.0,"Meson", 130));
   fParticleList->Add(new TParticlePDG("pi+","S008",
                                      .1395699,kFALSE, 2.52860E-17,
                                     0.0,"Meson", 211));
   fParticleList->Add(new TParticlePDG("pi-","S008",
                                      .1395699,kFALSE, 2.52860E-17,
                                     0.0,"Meson", -211));
   fParticleList->Add(new TParticlePDG("rho(770)+","M009",
                                      .7699,kFALSE, .1511999,
                                     0.0,"Meson", 213));
   fParticleList->Add(new TParticlePDG("rho(770)-","M009",
                                      .7699,kFALSE, .1511999,
                                     0.0,"Meson", -213));
   fParticleList->Add(new TParticlePDG("a(2)(1320)+","M012",
                                      1.3184,kFALSE, .107,
                                     0.0,"Meson", 215));
   fParticleList->Add(new TParticlePDG("a(2)(1320)-","M012",
                                      1.3184,kFALSE, .107,
                                     0.0,"Meson", -215));
   fParticleList->Add(new TParticlePDG("rho(3)(1690)+","M015",
                                      1.691,kFALSE, .215,
                                     0.0,"Meson", 217));
   fParticleList->Add(new TParticlePDG("rho(3)(1690)-","M015",
                                      1.691,kFALSE, .215,
                                     0.0,"Meson", -217));
   fParticleList->Add(new TParticlePDG("eta0","S014",
                                      .54745,kFALSE, 1.20000E-06,
                                     0.0,"Meson", 221));
   fParticleList->Add(new TParticlePDG("omega(782)0","M001",
                                      .7819399,kFALSE, 8.43000E-03,
                                     0.0,"Meson", 223));
   fParticleList->Add(new TParticlePDG("f(2)(1270)0","M005",
                                      1.275,kFALSE, .185,
                                     0.0,"Meson", 225));
   fParticleList->Add(new TParticlePDG("omega(3)(1670)0","M045",
                                      1.668,kFALSE, .1729999,
                                     0.0,"Meson", 227));
   fParticleList->Add(new TParticlePDG("f(4)(2050)0","M016",
                                      2.044,kFALSE, .208,
                                     0.0,"Meson", 229));
   fParticleList->Add(new TParticlePDG("K(S)0","S012",
                                      .4976719,kFALSE, 7.37400E-15,
                                     0.0,"Meson", 310));
   fParticleList->Add(new TParticlePDG("K0","S011",
                                      .4976719,kFALSE, .0,
                                     0.0,"Meson", 311));
   fParticleList->Add(new TParticlePDG("K0 bar","S011",
                                      .4976719,kFALSE, .0,
                                     0.0,"Meson", -311));
   fParticleList->Add(new TParticlePDG("K*(892)0","M018",
                                      .8960999,kFALSE, 5.05000E-02,
                                     0.0,"Meson", 313));
   fParticleList->Add(new TParticlePDG("K*(892)0 bar","M018",
                                      .8960999,kFALSE, 5.05000E-02,
                                     0.0,"Meson", -313));
   fParticleList->Add(new TParticlePDG("K(2)*(1430)0","M022",
                                      1.4324,kFALSE, .1089999,
                                     0.0,"Meson", 315));
   fParticleList->Add(new TParticlePDG("K(2)*(1430)0 bar","M022",
                                      1.4324,kFALSE, .1089999,
                                     0.0,"Meson", -315));
   fParticleList->Add(new TParticlePDG("K(3)*(1780)0","M060",
                                      1.77,kFALSE, .164,
                                     0.0,"Meson", 317));
   fParticleList->Add(new TParticlePDG("K(3)*(1780)0 bar","M060",
                                      1.77,kFALSE, .164,
                                     0.0,"Meson", -317));
   fParticleList->Add(new TParticlePDG("K(4)*(2045)0","M035",
                                      2.045,kFALSE, .1979999,
                                     0.0,"Meson", 319));
   fParticleList->Add(new TParticlePDG("K(4)*(2045)0 bar","M035",
                                      2.045,kFALSE, .1979999,
                                     0.0,"Meson", -319));
   fParticleList->Add(new TParticlePDG("K+","S010",
                                      .4936769,kFALSE, 5.32100E-17,
                                     0.0,"Meson", 321));
   fParticleList->Add(new TParticlePDG("K-","S010",
                                      .4936769,kFALSE, 5.32100E-17,
                                     0.0,"Meson", -321));
   fParticleList->Add(new TParticlePDG("K*(892)+","M018",
                                      .8915899,kFALSE, 4.98000E-02,
                                     0.0,"Meson", 323));
   fParticleList->Add(new TParticlePDG("K*(892)-","M018",
                                      .8915899,kFALSE, 4.98000E-02,
                                     0.0,"Meson", -323));
   fParticleList->Add(new TParticlePDG("K(2)*(1430)+","M022",
                                      1.4254,kFALSE, 9.84000E-02,
                                     0.0,"Meson", 325));
   fParticleList->Add(new TParticlePDG("K(2)*(1430)-","M022",
                                      1.4254,kFALSE, 9.84000E-02,
                                     0.0,"Meson", -325));
   fParticleList->Add(new TParticlePDG("K(3)*(1780)+","M060",
                                      1.77,kFALSE, .164,
                                     0.0,"Meson", 327));
   fParticleList->Add(new TParticlePDG("K(3)*(1780)-","M060",
                                      1.77,kFALSE, .164,
                                     0.0,"Meson", -327));
   fParticleList->Add(new TParticlePDG("K(4)*(2045)+","M035",
                                      2.045,kFALSE, .1979999,
                                     0.0,"Meson", 329));
   fParticleList->Add(new TParticlePDG("K(4)*(2045)-","M035",
                                      2.045,kFALSE, .1979999,
                                     0.0,"Meson", -329));
   fParticleList->Add(new TParticlePDG("eta'(958)0","M002",
                                      .9577699,kFALSE, 2.01000E-04,
                                     0.0,"Meson", 331));
   fParticleList->Add(new TParticlePDG("phi(1020)0","M004",
                                      1.01941,kFALSE, 4.43000E-03,
                                     0.0,"Meson", 333));
   fParticleList->Add(new TParticlePDG("f(2)'(1525)0","M013",
                                      1.525,kFALSE, 7.60000E-02,
                                     0.0,"Meson", 335));
   fParticleList->Add(new TParticlePDG("phi(3)(1850)0","M054",
                                      1.854,kFALSE, 8.70000E-02,
                                     0.0,"Meson", 337));
   fParticleList->Add(new TParticlePDG("D+","S031",
                                      1.8694,kFALSE, 6.23000E-13,
                                     0.0,"Meson", 411));
   fParticleList->Add(new TParticlePDG("D-","S031",
                                      1.8694,kFALSE, 6.23000E-13,
                                     0.0,"Meson", -411));
   fParticleList->Add(new TParticlePDG("D*(2010)+","M062",
                                      2.01,kTRUE, .0,
                                     0.0,"Meson", 413));
   fParticleList->Add(new TParticlePDG("D*(2010)-","M062",
                                      2.01,kTRUE, .0,
                                     0.0,"Meson", -413));
   fParticleList->Add(new TParticlePDG("D(2)*(2460)+","M150",
                                      2.456,kFALSE, 2.30000E-02,
                                     0.0,"Meson", 415));
   fParticleList->Add(new TParticlePDG("D(2)*(2460)-","M150",
                                      2.456,kFALSE, 2.30000E-02,
                                     0.0,"Meson", -415));
   fParticleList->Add(new TParticlePDG("D0","S032",
                                      1.8646,kFALSE, 1.58600E-12,
                                     0.0,"Meson", 421));
   fParticleList->Add(new TParticlePDG("D*(2007)0","M061",
                                      2.0067,kTRUE, .0,
                                     0.0,"Meson", 423));
   fParticleList->Add(new TParticlePDG("D(2)*(2460)0","M119",
                                      2.4577,kFALSE, 2.10000E-02,
                                     0.0,"Meson", 425));
   fParticleList->Add(new TParticlePDG("D(s)+","S034",
                                      1.9685,kFALSE, 1.41000E-12,
                                     0.0,"Meson", 431));
   fParticleList->Add(new TParticlePDG("D(s)-","S034",
                                      1.9685,kFALSE, 1.41000E-12,
                                     0.0,"Meson", -431));
   fParticleList->Add(new TParticlePDG("D(s)*+","S074",
                                      2.11,kTRUE, .0,
                                     0.0,"Meson", 433));
   fParticleList->Add(new TParticlePDG("D(s)*-","S074",
                                      2.11,kTRUE, .0,
                                     0.0,"Meson", -433));
   fParticleList->Add(new TParticlePDG("eta(c)(1S)0","M026",
                                      2.9788,kFALSE, 1.03000E-02,
                                     0.0,"Meson", 441));
   fParticleList->Add(new TParticlePDG("J/psi(1S)0","M070",
                                      3.09688,kFALSE, 8.80000E-05,
                                     0.0,"Meson", 443));
   fParticleList->Add(new TParticlePDG("chi(c2)(1P)0","M057",
                                      3.55617,kFALSE, 2.00000E-03,
                                     0.0,"Meson", 445));
   fParticleList->Add(new TParticlePDG("B0","S049",
                                      5.279,kFALSE, 4.39000E-13,
                                     0.0,"Meson", 511));
   fParticleList->Add(new TParticlePDG("B*0","S085",
                                      5.3248,kTRUE, .0,
                                     0.0,"Meson", 513));
   fParticleList->Add(new TParticlePDG("B+","S049",
                                      5.2787,kFALSE, 4.28000E-13,
                                     0.0,"Meson", 521));
   fParticleList->Add(new TParticlePDG("B-","S049",
                                      5.2787,kFALSE, 4.28000E-13,
                                     0.0,"Meson", -521));
   fParticleList->Add(new TParticlePDG("B*+","S085",
                                      5.3248,kTRUE, .0,
                                     0.0,"Meson", 523));
   fParticleList->Add(new TParticlePDG("B*-","S085",
                                      5.3248,kTRUE, .0,
                                     0.0,"Meson", -523));
   fParticleList->Add(new TParticlePDG("B(s)0","S086",
                                      5.375,kFALSE, 4.90000E-13,
                                     0.0,"Meson", 531));
   fParticleList->Add(new TParticlePDG("chi(b0)(1P)0","M076",
                                      9.8598,kTRUE, .0,
                                     0.0,"Meson", 551));
   fParticleList->Add(new TParticlePDG("Upsilon(1S)0","M049",
                                      9.46037,kFALSE, 5.25000E-05,
                                     0.0,"Meson", 553));
   fParticleList->Add(new TParticlePDG("chi(b2)(1P)0","M078",
                                      9.9132,kTRUE, .0,
                                     0.0,"Meson", 555));
   fParticleList->Add(new TParticlePDG("Delta(1620)-","B082",
                                      1.62,kFALSE, .15,
                                     -1.,"Baryon", 1112));
   fParticleList->Add(new TParticlePDG("Delta(1620)+ bar","B082",
                                      1.62,kFALSE, .15,
                                     +1.,"Baryon", -1112));
   fParticleList->Add(new TParticlePDG("Delta(1232)-","B033",
                                      1.232,kFALSE, .1199999,
                                     -1.,"Baryon", 1114));
   fParticleList->Add(new TParticlePDG("Delta(1232)+ bar","B033",
                                      1.232,kFALSE, .1199999,
                                     +1.,"Baryon", -1114));
   fParticleList->Add(new TParticlePDG("Delta(1905)-","B011",
                                      1.905,kFALSE, .3499999,
                                     -1.,"Baryon", 1116));
   fParticleList->Add(new TParticlePDG("Delta(1905)+ bar","B011",
                                      1.905,kFALSE, .3499999,
                                     +1.,"Baryon", -1116));
   fParticleList->Add(new TParticlePDG("Delta(1950)-","B083",
                                      1.95,kFALSE, .3,
                                     -1.,"Baryon", 1118));
   fParticleList->Add(new TParticlePDG("Delta(1950)+ bar","B083",
                                      1.95,kFALSE, .3,
                                     +1.,"Baryon", -1118));
   fParticleList->Add(new TParticlePDG("Delta(1620)0","B082",
                                      1.62,kFALSE, .15,
                                     0.0,"Baryon", 1212));
   fParticleList->Add(new TParticlePDG("Delta(1620)0 bar","B082",
                                      1.62,kFALSE, .15,
                                     0.0,"Baryon", -1212));
   fParticleList->Add(new TParticlePDG("N(1520)0","B062",
                                      1.52,kFALSE, .1199999,
                                     0.0,"Baryon", 1214));
   fParticleList->Add(new TParticlePDG("N(1520)0 bar","B062",
                                      1.52,kFALSE, .1199999,
                                     0.0,"Baryon", -1214));
   fParticleList->Add(new TParticlePDG("Delta(1905)0","B011",
                                      1.905,kFALSE, .3499999,
                                     0.0,"Baryon", 1216));
   fParticleList->Add(new TParticlePDG("Delta(1905)0 bar","B011",
                                      1.905,kFALSE, .3499999,
                                     0.0,"Baryon", -1216));
   fParticleList->Add(new TParticlePDG("N(2190)0","B071",
                                      2.19,kFALSE, .4499999,
                                     0.0,"Baryon", 1218));
   fParticleList->Add(new TParticlePDG("N(2190)0 bar","B071",
                                      2.19,kFALSE, .4499999,
                                     0.0,"Baryon", -1218));
   fParticleList->Add(new TParticlePDG("n","S017",
                                      .9395656,kFALSE, 7.42100E-28,
                                     0.0,"Baryon", 2112));
   fParticleList->Add(new TParticlePDG("n bar","S017",
                                      .9395656,kFALSE, 7.42100E-28,
                                     0.0,"Baryon", -2112));
   fParticleList->Add(new TParticlePDG("Delta(1232)0","B033",
                                      1.232,kFALSE, .1199999,
                                     0.0,"Baryon", 2114));
   fParticleList->Add(new TParticlePDG("Delta(1232)0 bar","B033",
                                      1.232,kFALSE, .1199999,
                                     0.0,"Baryon", -2114));
   fParticleList->Add(new TParticlePDG("N(1675)0","B064",
                                      1.675,kFALSE, .15,
                                     0.0,"Baryon", 2116));
   fParticleList->Add(new TParticlePDG("N(1675)0 bar","B064",
                                      1.675,kFALSE, .15,
                                     0.0,"Baryon", -2116));
   fParticleList->Add(new TParticlePDG("Delta(1950)0","B083",
                                      1.95,kFALSE, .3,
                                     0.0,"Baryon", 2118));
   fParticleList->Add(new TParticlePDG("Delta(1950)0 bar","B083",
                                      1.95,kFALSE, .3,
                                     0.0,"Baryon", -2118));
   fParticleList->Add(new TParticlePDG("Delta(1620)+","B082",
                                      1.62,kFALSE, .15,
                                     +1.,"Baryon", 2122));
   fParticleList->Add(new TParticlePDG("Delta(1620)- bar","B082",
                                      1.62,kFALSE, .15,
                                     -1.,"Baryon", -2122));
   fParticleList->Add(new TParticlePDG("N(1520)+","B062",
                                      1.52,kFALSE, .1199999,
                                     +1.,"Baryon", 2124));
   fParticleList->Add(new TParticlePDG("N(1520)- bar","B062",
                                      1.52,kFALSE, .1199999,
                                     -1.,"Baryon", -2124));
   fParticleList->Add(new TParticlePDG("Delta(1905)+","B011",
                                      1.905,kFALSE, .3499999,
                                     +1.,"Baryon", 2126));
   fParticleList->Add(new TParticlePDG("Delta(1905)- bar","B011",
                                      1.905,kFALSE, .3499999,
                                     -1.,"Baryon", -2126));
   fParticleList->Add(new TParticlePDG("N(2190)+","B071",
                                      2.19,kFALSE, .4499999,
                                     +1.,"Baryon", 2128));
   fParticleList->Add(new TParticlePDG("N(2190)- bar","B071",
                                      2.19,kFALSE, .4499999,
                                     -1.,"Baryon", -2128));
   fParticleList->Add(new TParticlePDG("p","S016",
                                      .9382722,kTRUE, .0,
                                     +1.,"Baryon", 2212));
   fParticleList->Add(new TParticlePDG("p bar","S016",
                                      .9382722,kTRUE, .0,
                                     -1.,"Baryon", -2212));
   fParticleList->Add(new TParticlePDG("Delta(1232)+","B033",
                                      1.232,kFALSE, .1199999,
                                     +1.,"Baryon", 2214));
   fParticleList->Add(new TParticlePDG("Delta(1232)- bar","B033",
                                      1.232,kFALSE, .1199999,
                                     -1.,"Baryon", -2214));
   fParticleList->Add(new TParticlePDG("N(1675)+","B064",
                                      1.675,kFALSE, .15,
                                     +1.,"Baryon", 2216));
   fParticleList->Add(new TParticlePDG("N(1675)- bar","B064",
                                      1.675,kFALSE, .15,
                                     -1.,"Baryon", -2216));
   fParticleList->Add(new TParticlePDG("Delta(1950)+","B083",
                                      1.95,kFALSE, .3,
                                     +1.,"Baryon", 2218));
   fParticleList->Add(new TParticlePDG("Delta(1950)- bar","B083",
                                      1.95,kFALSE, .3,
                                     -1.,"Baryon", -2218));
   fParticleList->Add(new TParticlePDG("Delta(1620)++","B082",
                                      1.62,kFALSE, .15,
                                     +2.,"Baryon", 2222));
   fParticleList->Add(new TParticlePDG("Delta(1620)-- bar","B082",
                                      1.62,kFALSE, .15,
                                     -2.,"Baryon", -2222));
   fParticleList->Add(new TParticlePDG("Delta(1232)++","B033",
                                      1.232,kFALSE, .1199999,
                                     +2.,"Baryon", 2224));
   fParticleList->Add(new TParticlePDG("Delta(1232)-- bar","B033",
                                      1.232,kFALSE, .1199999,
                                     -2.,"Baryon", -2224));
   fParticleList->Add(new TParticlePDG("Delta(1905)++","B011",
                                      1.905,kFALSE, .3499999,
                                     +2.,"Baryon", 2226));
   fParticleList->Add(new TParticlePDG("Delta(1905)-- bar","B011",
                                      1.905,kFALSE, .3499999,
                                     -2.,"Baryon", -2226));
   fParticleList->Add(new TParticlePDG("Delta(1950)++","B083",
                                      1.95,kFALSE, .3,
                                     +2.,"Baryon", 2228));
   fParticleList->Add(new TParticlePDG("Delta(1950)-- bar","B083",
                                      1.95,kFALSE, .3,
                                     -2.,"Baryon", -2228));
   fParticleList->Add(new TParticlePDG("Sigma-","S020",
                                      1.19744,kFALSE, 4.45000E-15,
                                     -1.,"Baryon", 3112));
   fParticleList->Add(new TParticlePDG("Sigma+ bar","S020",
                                      1.19744,kFALSE, 4.45000E-15,
                                     +1.,"Baryon", -3112));
   fParticleList->Add(new TParticlePDG("Sigma(1385)-","B043",
                                      1.3872,kFALSE, 3.94000E-02,
                                     -1.,"Baryon", 3114));
   fParticleList->Add(new TParticlePDG("Sigma(1385)+ bar","B043",
                                      1.3872,kFALSE, 3.94000E-02,
                                     +1.,"Baryon", -3114));
   fParticleList->Add(new TParticlePDG("Sigma(1775)-","B045",
                                      1.775,kFALSE, .1199999,
                                     -1.,"Baryon", 3116));
   fParticleList->Add(new TParticlePDG("Sigma(1775)+ bar","B045",
                                      1.775,kFALSE, .1199999,
                                     +1.,"Baryon", -3116));
   fParticleList->Add(new TParticlePDG("Sigma(2030)-","B047",
                                      2.03,kFALSE, .18,
                                     -1.,"Baryon", 3118));
   fParticleList->Add(new TParticlePDG("Sigma(2030)+ bar","B047",
                                      2.03,kFALSE, .18,
                                     +1.,"Baryon", -3118));
   fParticleList->Add(new TParticlePDG("Lambda0","S018",
                                      1.11568,kFALSE, 2.50100E-15,
                                     0.0,"Baryon", 3122));
   fParticleList->Add(new TParticlePDG("Lambda0 bar","S018",
                                      1.11568,kFALSE, 2.50100E-15,
                                     0.0,"Baryon", -3122));
   fParticleList->Add(new TParticlePDG("Lambda(1520)0","B038",
                                      1.5195,kFALSE, 1.56000E-02,
                                     0.0,"Baryon", 3124));
   fParticleList->Add(new TParticlePDG("Lambda(1520)0 bar","B038",
                                      1.5195,kFALSE, 1.56000E-02,
                                     0.0,"Baryon", -3124));
   fParticleList->Add(new TParticlePDG("Lambda(1820)0","B039",
                                      1.82,kFALSE, 8.00000E-02,
                                     0.0,"Baryon", 3126));
   fParticleList->Add(new TParticlePDG("Lambda(1820)0 bar","B039",
                                      1.82,kFALSE, 8.00000E-02,
                                     0.0,"Baryon", -3126));
   fParticleList->Add(new TParticlePDG("Lambda(2100)0","B041",
                                      2.1,kFALSE, .2,
                                     0.0,"Baryon", 3128));
   fParticleList->Add(new TParticlePDG("Lambda(2100)0 bar","B041",
                                      2.1,kFALSE, .2,
                                     0.0,"Baryon", -3128));
   fParticleList->Add(new TParticlePDG("Sigma0","S021",
                                      1.19255,kFALSE, 8.90000E-06,
                                     0.0,"Baryon", 3212));
   fParticleList->Add(new TParticlePDG("Sigma0 bar","S021",
                                      1.19255,kFALSE, 8.90000E-06,
                                     0.0,"Baryon", -3212));
   fParticleList->Add(new TParticlePDG("Sigma(1385)0","B043",
                                      1.3837,kFALSE, 3.60000E-02,
                                     0.0,"Baryon", 3214));
   fParticleList->Add(new TParticlePDG("Sigma(1385)0 bar","B043",
                                      1.3837,kFALSE, 3.60000E-02,
                                     0.0,"Baryon", -3214));
   fParticleList->Add(new TParticlePDG("Sigma(1775)0","B045",
                                      1.775,kFALSE, .1199999,
                                     0.0,"Baryon", 3216));
   fParticleList->Add(new TParticlePDG("Sigma(1775)0 bar","B045",
                                      1.775,kFALSE, .1199999,
                                     0.0,"Baryon", -3216));
   fParticleList->Add(new TParticlePDG("Sigma(2030)0","B047",
                                      2.03,kFALSE, .18,
                                     0.0,"Baryon", 3218));
   fParticleList->Add(new TParticlePDG("Sigma(2030)0 bar","B047",
                                      2.03,kFALSE, .18,
                                     0.0,"Baryon", -3218));
   fParticleList->Add(new TParticlePDG("Sigma+","S019",
                                      1.18937,kFALSE, 8.24000E-15,
                                     +1.,"Baryon", 3222));
   fParticleList->Add(new TParticlePDG("Sigma- bar","S019",
                                      1.18937,kFALSE, 8.24000E-15,
                                     -1.,"Baryon", -3222));
   fParticleList->Add(new TParticlePDG("Sigma(1385)+","B043",
                                      1.3828,kFALSE, 3.58000E-02,
                                     +1.,"Baryon", 3224));
   fParticleList->Add(new TParticlePDG("Sigma(1385)- bar","B043",
                                      1.3828,kFALSE, 3.58000E-02,
                                     -1.,"Baryon", -3224));
   fParticleList->Add(new TParticlePDG("Sigma(1775)+","B045",
                                      1.775,kFALSE, .1199999,
                                     +1.,"Baryon", 3226));
   fParticleList->Add(new TParticlePDG("Sigma(1775)- bar","B045",
                                      1.775,kFALSE, .1199999,
                                     -1.,"Baryon", -3226));
   fParticleList->Add(new TParticlePDG("Sigma(2030)+","B047",
                                      2.03,kFALSE, .18,
                                     +1.,"Baryon", 3228));
   fParticleList->Add(new TParticlePDG("Sigma(2030)- bar","B047",
                                      2.03,kFALSE, .18,
                                     -1.,"Baryon", -3228));
   fParticleList->Add(new TParticlePDG("Xi-","S022",
                                      1.32132,kFALSE, 4.02000E-15,
                                     -1.,"Baryon", 3312));
   fParticleList->Add(new TParticlePDG("Xi+ bar","S022",
                                      1.32132,kFALSE, 4.02000E-15,
                                     +1.,"Baryon", -3312));
   fParticleList->Add(new TParticlePDG("Xi(1530)-","B049",
                                      1.535,kFALSE, 9.90000E-03,
                                     -1.,"Baryon", 3314));
   fParticleList->Add(new TParticlePDG("Xi(1530)+ bar","B049",
                                      1.535,kFALSE, 9.90000E-03,
                                     +1.,"Baryon", -3314));
   fParticleList->Add(new TParticlePDG("Xi0","S023",
                                      1.3149,kFALSE, 2.27000E-15,
                                     0.0,"Baryon", 3322));
   fParticleList->Add(new TParticlePDG("Xi0 bar","S023",
                                      1.3149,kFALSE, 2.27000E-15,
                                     0.0,"Baryon", -3322));
   fParticleList->Add(new TParticlePDG("Xi(1530)0","B049",
                                      1.5318,kFALSE, 9.10000E-03,
                                     0.0,"Baryon", 3324));
   fParticleList->Add(new TParticlePDG("Xi(1530)0 bar","B049",
                                      1.5318,kFALSE, 9.10000E-03,
                                     0.0,"Baryon", -3324));
   fParticleList->Add(new TParticlePDG("Omega-","S024",
                                      1.67245,kFALSE, 8.01000E-15,
                                     -1.,"Baryon", 3334));
   fParticleList->Add(new TParticlePDG("Omega+ bar","S024",
                                      1.67245,kFALSE, 8.01000E-15,
                                     +1.,"Baryon", -3334));
   fParticleList->Add(new TParticlePDG("Sigma(c)(2455)0","B104",
                                      2.4524,kTRUE, .0,
                                     0.0,"Baryon", 4112));
   fParticleList->Add(new TParticlePDG("Sigma(c)(2455)0 bar","B104",
                                      2.4524,kTRUE, .0,
                                     0.0,"Baryon", -4112));
   fParticleList->Add(new TParticlePDG("Lambda(c)+","S033",
                                      2.2851,kFALSE, 3.29000E-12,
                                     +1.,"Baryon", 4122));
   fParticleList->Add(new TParticlePDG("Lambda(c)- bar","S033",
                                      2.2851,kFALSE, 3.29000E-12,
                                     -1.,"Baryon", -4122));
   fParticleList->Add(new TParticlePDG("Sigma(c)(2455)+","B104",
                                      2.4538,kTRUE, .0,
                                     +1.,"Baryon", 4212));
   fParticleList->Add(new TParticlePDG("Sigma(c)(2455)- bar","B104",
                                      2.4538,kTRUE, .0,
                                     -1.,"Baryon", -4212));
   fParticleList->Add(new TParticlePDG("Sigma(c)(2455)++","B104",
                                      2.4531,kTRUE, .0,
                                     +2.,"Baryon", 4222));
   fParticleList->Add(new TParticlePDG("Sigma(c)(2455)-- bar","B104",
                                      2.4531,kTRUE, .0,
                                     -2.,"Baryon", -4222));
   fParticleList->Add(new TParticlePDG("Xi(c)0","S048",
                                      2.4703,kFALSE, 6.70000E-12,
                                     0.0,"Baryon", 4312));
   fParticleList->Add(new TParticlePDG("Xi(c)0 bar","S048",
                                      2.4703,kFALSE, 6.70000E-12,
                                     0.0,"Baryon", -4312));
   fParticleList->Add(new TParticlePDG("Xi(c)+","S045",
                                      2.4651,kFALSE, 1.86000E-12,
                                     +1.,"Baryon", 4322));
   fParticleList->Add(new TParticlePDG("Xi(c)- bar","S045",
                                      2.4651,kFALSE, 1.86000E-12,
                                     -1.,"Baryon", -4322));
   fParticleList->Add(new TParticlePDG("Lambda(b)0","S040",
                                      5.64,kFALSE, 6.20000E-13,
                                     0.0,"Baryon", 5122));
   fParticleList->Add(new TParticlePDG("Lambda(b)0 bar","S040",
                                      5.64,kFALSE, 6.20000E-13,
                                     0.0,"Baryon", -5122));
   fParticleList->Add(new TParticlePDG("a(0)(980)0","M036",
                                      .9824,kTRUE, .0,
                                     0.0,"Meson", 10111));
   fParticleList->Add(new TParticlePDG("b(1)(1235)0","M011",
                                      1.231,kFALSE, .142,
                                     0.0,"Meson", 10113));
   fParticleList->Add(new TParticlePDG("pi(2)(1670)0","M034",
                                      1.67,kFALSE, .2399999,
                                     0.0,"Meson", 10115));
   fParticleList->Add(new TParticlePDG("a(0)(980)+","M036",
                                      .9824,kTRUE, .0,
                                     0.0,"Meson", 10211));
   fParticleList->Add(new TParticlePDG("a(0)(980)-","M036",
                                      .9824,kTRUE, .0,
                                     0.0,"Meson", -10211));
   fParticleList->Add(new TParticlePDG("b(1)(1235)+","M011",
                                      1.231,kFALSE, .142,
                                     0.0,"Meson", 10213));
   fParticleList->Add(new TParticlePDG("b(1)(1235)-","M011",
                                      1.231,kFALSE, .142,
                                     0.0,"Meson", -10213));
   fParticleList->Add(new TParticlePDG("pi(2)(1670)+","M034",
                                      1.67,kFALSE, .2399999,
                                     0.0,"Meson", 10215));
   fParticleList->Add(new TParticlePDG("pi(2)(1670)-","M034",
                                      1.67,kFALSE, .2399999,
                                     0.0,"Meson", -10215));
   fParticleList->Add(new TParticlePDG("f(0)(980)0","M003",
                                      .98,kTRUE, .0,
                                     0.0,"Meson", 10221));
   fParticleList->Add(new TParticlePDG("h(1)(1170)0","M030",
                                      1.17,kFALSE, .36,
                                     0.0,"Meson", 10223));
   fParticleList->Add(new TParticlePDG("K(0)*(1430)0","M019",
                                      1.429,kFALSE, .287,
                                     0.0,"Meson", 10311));
   fParticleList->Add(new TParticlePDG("K(0)*(1430)0 bar","M019",
                                      1.429,kFALSE, .287,
                                     0.0,"Meson", -10311));
   fParticleList->Add(new TParticlePDG("K(1)(1270)0","M028",
                                      1.272,kFALSE, 9.00000E-02,
                                     0.0,"Meson", 10313));
   fParticleList->Add(new TParticlePDG("K(1)(1270)0 bar","M028",
                                      1.272,kFALSE, 9.00000E-02,
                                     0.0,"Meson", -10313));
   fParticleList->Add(new TParticlePDG("K(2)(1770)0","M023",
                                      1.773,kFALSE, .186,
                                     0.0,"Meson", 10315));
   fParticleList->Add(new TParticlePDG("K(2)(1770)0 bar","M023",
                                      1.773,kFALSE, .186,
                                     0.0,"Meson", -10315));
   fParticleList->Add(new TParticlePDG("K(0)*(1430)+","M019",
                                      1.429,kFALSE, .287,
                                     0.0,"Meson", 10321));
   fParticleList->Add(new TParticlePDG("K(0)*(1430)-","M019",
                                      1.429,kFALSE, .287,
                                     0.0,"Meson", -10321));
   fParticleList->Add(new TParticlePDG("K(1)(1270)+","M028",
                                      1.272,kFALSE, 9.00000E-02,
                                     0.0,"Meson", 10323));
   fParticleList->Add(new TParticlePDG("K(1)(1270)-","M028",
                                      1.272,kFALSE, 9.00000E-02,
                                     0.0,"Meson", -10323));
   fParticleList->Add(new TParticlePDG("K(2)(1770)+","M023",
                                      1.773,kFALSE, .186,
                                     0.0,"Meson", 10325));
   fParticleList->Add(new TParticlePDG("K(2)(1770)-","M023",
                                      1.773,kFALSE, .186,
                                     0.0,"Meson", -10325));
   fParticleList->Add(new TParticlePDG("phi(1680)0","M067",
                                      1.68,kFALSE, .15,
                                     0.0,"Meson", 10333));
   fParticleList->Add(new TParticlePDG("D(1)(2420)0","M097",
                                      2.4228,kFALSE, 1.80000E-02,
                                     0.0,"Meson", 10423));
   fParticleList->Add(new TParticlePDG("D(s1)(2536)+","M121",
                                      2.53535,kTRUE, .0,
                                     0.0,"Meson", 10433));
   fParticleList->Add(new TParticlePDG("D(s1)(2536)-","M121",
                                      2.53535,kTRUE, .0,
                                     0.0,"Meson", -10433));
   fParticleList->Add(new TParticlePDG("chi(c0)(1P)0","M056",
                                      3.4151,kFALSE, 1.40000E-02,
                                     0.0,"Meson", 10441));
   fParticleList->Add(new TParticlePDG("chi(c1)(1P)0","M055",
                                      3.51053,kFALSE, 8.80000E-04,
                                     0.0,"Meson", 10443));
   fParticleList->Add(new TParticlePDG("chi(b0)(2P)0","M079",
                                      10.23209,kTRUE, .0,
                                     0.0,"Meson", 10551));
   fParticleList->Add(new TParticlePDG("chi(b1)(1P)0","M077",
                                      9.8919,kTRUE, .0,
                                     0.0,"Meson", 10553));
   fParticleList->Add(new TParticlePDG("chi(b2)(2P)0","M081",
                                      10.2685,kTRUE, .0,
                                     0.0,"Meson", 10555));
   fParticleList->Add(new TParticlePDG("Delta(1900)-","B030",
                                      1.9,kFALSE, .2,
                                     -1.,"Baryon", 11112));
   fParticleList->Add(new TParticlePDG("Delta(1900)+ bar","B030",
                                      1.9,kFALSE, .2,
                                     +1.,"Baryon", -11112));
   fParticleList->Add(new TParticlePDG("Delta(1700)-","B010",
                                      1.7,kFALSE, .3,
                                     -1.,"Baryon", 11114));
   fParticleList->Add(new TParticlePDG("Delta(1700)+ bar","B010",
                                      1.7,kFALSE, .3,
                                     +1.,"Baryon", -11114));
   fParticleList->Add(new TParticlePDG("Delta(1930)-","B013",
                                      1.93,kFALSE, .3499999,
                                     -1.,"Baryon", 11116));
   fParticleList->Add(new TParticlePDG("Delta(1930)+ bar","B013",
                                      1.93,kFALSE, .3499999,
                                     +1.,"Baryon", -11116));
   fParticleList->Add(new TParticlePDG("Delta(1900)0","B030",
                                      1.9,kFALSE, .2,
                                     0.0,"Baryon", 11212));
   fParticleList->Add(new TParticlePDG("Delta(1900)0 bar","B030",
                                      1.9,kFALSE, .2,
                                     0.0,"Baryon", -11212));
   fParticleList->Add(new TParticlePDG("Delta(1930)0","B013",
                                      1.93,kFALSE, .3499999,
                                     0.0,"Baryon", 11216));
   fParticleList->Add(new TParticlePDG("Delta(1930)0 bar","B013",
                                      1.93,kFALSE, .3499999,
                                     0.0,"Baryon", -11216));
   fParticleList->Add(new TParticlePDG("N(1440)0","B061",
                                      1.44,kFALSE, .3499999,
                                     0.0,"Baryon", 12112));
   fParticleList->Add(new TParticlePDG("N(1440)0 bar","B061",
                                      1.44,kFALSE, .3499999,
                                     0.0,"Baryon", -12112));
   fParticleList->Add(new TParticlePDG("Delta(1700)0","B010",
                                      1.7,kFALSE, .3,
                                     0.0,"Baryon", 12114));
   fParticleList->Add(new TParticlePDG("Delta(1700)0 bar","B010",
                                      1.7,kFALSE, .3,
                                     0.0,"Baryon", -12114));
   fParticleList->Add(new TParticlePDG("N(1680)0","B065",
                                      1.68,kFALSE, .1299999,
                                     0.0,"Baryon", 12116));
   fParticleList->Add(new TParticlePDG("N(1680)0 bar","B065",
                                      1.68,kFALSE, .1299999,
                                     0.0,"Baryon", -12116));
   fParticleList->Add(new TParticlePDG("Delta(1900)+","B030",
                                      1.9,kFALSE, .2,
                                     +1.,"Baryon", 12122));
   fParticleList->Add(new TParticlePDG("Delta(1900)- bar","B030",
                                      1.9,kFALSE, .2,
                                     -1.,"Baryon", -12122));
   fParticleList->Add(new TParticlePDG("Delta(1930)+","B013",
                                      1.93,kFALSE, .3499999,
                                     +1.,"Baryon", 12126));
   fParticleList->Add(new TParticlePDG("Delta(1930)- bar","B013",
                                      1.93,kFALSE, .3499999,
                                     -1.,"Baryon", -12126));
   fParticleList->Add(new TParticlePDG("N(1440)+","B061",
                                      1.44,kFALSE, .3499999,
                                     +1.,"Baryon", 12212));
   fParticleList->Add(new TParticlePDG("N(1440)- bar","B061",
                                      1.44,kFALSE, .3499999,
                                     -1.,"Baryon", -12212));
   fParticleList->Add(new TParticlePDG("Delta(1700)+","B010",
                                      1.7,kFALSE, .3,
                                     +1.,"Baryon", 12214));
   fParticleList->Add(new TParticlePDG("Delta(1700)- bar","B010",
                                      1.7,kFALSE, .3,
                                     -1.,"Baryon", -12214));
   fParticleList->Add(new TParticlePDG("N(1680)+","B065",
                                      1.68,kFALSE, .1299999,
                                     +1.,"Baryon", 12216));
   fParticleList->Add(new TParticlePDG("N(1680)- bar","B065",
                                      1.68,kFALSE, .1299999,
                                     -1.,"Baryon", -12216));
   fParticleList->Add(new TParticlePDG("Delta(1900)++","B030",
                                      1.9,kFALSE, .2,
                                     +2.,"Baryon", 12222));
   fParticleList->Add(new TParticlePDG("Delta(1900)-- bar","B030",
                                      1.9,kFALSE, .2,
                                     -2.,"Baryon", -12222));
   fParticleList->Add(new TParticlePDG("Delta(1700)++","B010",
                                      1.7,kFALSE, .3,
                                     +2.,"Baryon", 12224));
   fParticleList->Add(new TParticlePDG("Delta(1700)-- bar","B010",
                                      1.7,kFALSE, .3,
                                     -2.,"Baryon", -12224));
   fParticleList->Add(new TParticlePDG("Delta(1930)++","B013",
                                      1.93,kFALSE, .3499999,
                                     +2.,"Baryon", 12226));
   fParticleList->Add(new TParticlePDG("Delta(1930)-- bar","B013",
                                      1.93,kFALSE, .3499999,
                                     -2.,"Baryon", -12226));
   fParticleList->Add(new TParticlePDG("Sigma(1660)-","B079",
                                      1.66,kFALSE, .1,
                                     -1.,"Baryon", 13112));
   fParticleList->Add(new TParticlePDG("Sigma(1660)+ bar","B079",
                                      1.66,kFALSE, .1,
                                     +1.,"Baryon", -13112));
   fParticleList->Add(new TParticlePDG("Sigma(1670)-","B051",
                                      1.67,kFALSE, 6.00000E-02,
                                     -1.,"Baryon", 13114));
   fParticleList->Add(new TParticlePDG("Sigma(1670)+ bar","B051",
                                      1.67,kFALSE, 6.00000E-02,
                                     +1.,"Baryon", -13114));
   fParticleList->Add(new TParticlePDG("Sigma(1915)-","B046",
                                      1.915,kFALSE, .1199999,
                                     -1.,"Baryon", 13116));
   fParticleList->Add(new TParticlePDG("Sigma(1915)+ bar","B046",
                                      1.915,kFALSE, .1199999,
                                     +1.,"Baryon", -13116));
   fParticleList->Add(new TParticlePDG("Lambda(1405)0","B037",
                                      1.407,kFALSE, 5.00000E-02,
                                     0.0,"Baryon", 13122));
   fParticleList->Add(new TParticlePDG("Lambda(1405)0 bar","B037",
                                      1.407,kFALSE, 5.00000E-02,
                                     0.0,"Baryon", -13122));
   fParticleList->Add(new TParticlePDG("Lambda(1690)0","B055",
                                      1.69,kFALSE, 6.00000E-02,
                                     0.0,"Baryon", 13124));
   fParticleList->Add(new TParticlePDG("Lambda(1690)0 bar","B055",
                                      1.69,kFALSE, 6.00000E-02,
                                     0.0,"Baryon", -13124));
   fParticleList->Add(new TParticlePDG("Lambda(1830)0","B056",
                                      1.83,kFALSE, 9.50000E-02,
                                     0.0,"Baryon", 13126));
   fParticleList->Add(new TParticlePDG("Lambda(1830)0 bar","B056",
                                      1.83,kFALSE, 9.50000E-02,
                                     0.0,"Baryon", -13126));
   fParticleList->Add(new TParticlePDG("Sigma(1660)0","B079",
                                      1.66,kFALSE, .1,
                                     0.0,"Baryon", 13212));
   fParticleList->Add(new TParticlePDG("Sigma(1660)0 bar","B079",
                                      1.66,kFALSE, .1,
                                     0.0,"Baryon", -13212));
   fParticleList->Add(new TParticlePDG("Sigma(1670)0","B051",
                                      1.67,kFALSE, 6.00000E-02,
                                     0.0,"Baryon", 13214));
   fParticleList->Add(new TParticlePDG("Sigma(1670)0 bar","B051",
                                      1.67,kFALSE, 6.00000E-02,
                                     0.0,"Baryon", -13214));
   fParticleList->Add(new TParticlePDG("Sigma(1915)0","B046",
                                      1.915,kFALSE, .1199999,
                                     0.0,"Baryon", 13216));
   fParticleList->Add(new TParticlePDG("Sigma(1915)0 bar","B046",
                                      1.915,kFALSE, .1199999,
                                     0.0,"Baryon", -13216));
   fParticleList->Add(new TParticlePDG("Sigma(1660)+","B079",
                                      1.66,kFALSE, .1,
                                     +1.,"Baryon", 13222));
   fParticleList->Add(new TParticlePDG("Sigma(1660)- bar","B079",
                                      1.66,kFALSE, .1,
                                     -1.,"Baryon", -13222));
   fParticleList->Add(new TParticlePDG("Sigma(1670)+","B051",
                                      1.67,kFALSE, 6.00000E-02,
                                     +1.,"Baryon", 13224));
   fParticleList->Add(new TParticlePDG("Sigma(1670)- bar","B051",
                                      1.67,kFALSE, 6.00000E-02,
                                     -1.,"Baryon", -13224));
   fParticleList->Add(new TParticlePDG("Sigma(1915)+","B046",
                                      1.915,kFALSE, .1199999,
                                     +1.,"Baryon", 13226));
   fParticleList->Add(new TParticlePDG("Sigma(1915)- bar","B046",
                                      1.915,kFALSE, .1199999,
                                     -1.,"Baryon", -13226));
   fParticleList->Add(new TParticlePDG("Xi(1820)-","B050",
                                      1.823,kFALSE, 2.40000E-02,
                                     -1.,"Baryon", 13314));
   fParticleList->Add(new TParticlePDG("Xi(1820)+ bar","B050",
                                      1.823,kFALSE, 2.40000E-02,
                                     +1.,"Baryon", -13314));
   fParticleList->Add(new TParticlePDG("Xi(1820)0","B050",
                                      1.823,kFALSE, 2.40000E-02,
                                     0.0,"Baryon", 13324));
   fParticleList->Add(new TParticlePDG("Xi(1820)0 bar","B050",
                                      1.823,kFALSE, 2.40000E-02,
                                     0.0,"Baryon", -13324));
   fParticleList->Add(new TParticlePDG("pi(1300)0","M058",
                                      1.3,kTRUE, .0,
                                     0.0,"Meson", 20111));
   fParticleList->Add(new TParticlePDG("a(1)(1260)0","M010",
                                      1.23,kTRUE, .0,
                                     0.0,"Meson", 20113));
   fParticleList->Add(new TParticlePDG("pi(1300)+","M058",
                                      1.3,kTRUE, .0,
                                     0.0,"Meson", 20211));
   fParticleList->Add(new TParticlePDG("pi(1300)-","M058",
                                      1.3,kTRUE, .0,
                                     0.0,"Meson", -20211));
   fParticleList->Add(new TParticlePDG("a(1)(1260)+","M010",
                                      1.23,kTRUE, .0,
                                     0.0,"Meson", 20213));
   fParticleList->Add(new TParticlePDG("a(1)(1260)-","M010",
                                      1.23,kTRUE, .0,
                                     0.0,"Meson", -20213));
   fParticleList->Add(new TParticlePDG("eta(1295)0","M037",
                                      1.295,kFALSE, 5.30000E-02,
                                     0.0,"Meson", 20221));
   fParticleList->Add(new TParticlePDG("f(1)(1285)0","M008",
                                      1.282,kFALSE, 2.40000E-02,
                                     0.0,"Meson", 20223));
   fParticleList->Add(new TParticlePDG("f(2)(2010)0","M106",
                                      2.01,kFALSE, .2,
                                     0.0,"Meson", 20225));
   fParticleList->Add(new TParticlePDG("K(1)(1400)0","M064",
                                      1.402,kFALSE, .1739999,
                                     0.0,"Meson", 20313));
   fParticleList->Add(new TParticlePDG("K(1)(1400)0 bar","M064",
                                      1.402,kFALSE, .1739999,
                                     0.0,"Meson", -20313));
   fParticleList->Add(new TParticlePDG("K(2)(1820)0","M146",
                                      1.816,kFALSE, .2759999,
                                     0.0,"Meson", 20315));
   fParticleList->Add(new TParticlePDG("K(2)(1820)0 bar","M146",
                                      1.816,kFALSE, .2759999,
                                     0.0,"Meson", -20315));
   fParticleList->Add(new TParticlePDG("K(1)(1400)+","M064",
                                      1.402,kFALSE, .1739999,
                                     0.0,"Meson", 20323));
   fParticleList->Add(new TParticlePDG("K(1)(1400)-","M064",
                                      1.402,kFALSE, .1739999,
                                     0.0,"Meson", -20323));
   fParticleList->Add(new TParticlePDG("K(2)(1820)+","M146",
                                      1.816,kFALSE, .2759999,
                                     0.0,"Meson", 20325));
   fParticleList->Add(new TParticlePDG("K(2)(1820)-","M146",
                                      1.816,kFALSE, .2759999,
                                     0.0,"Meson", -20325));
   fParticleList->Add(new TParticlePDG("psi(2S)0","M071",
                                      3.686,kFALSE, 2.77000E-04,
                                     0.0,"Meson", 20443));
   fParticleList->Add(new TParticlePDG("Upsilon(2S)0","M052",
                                      10.0233,kFALSE, 4.40000E-05,
                                     0.0,"Meson", 20553));
   fParticleList->Add(new TParticlePDG("Delta(1910)-","B012",
                                      1.91,kFALSE, .25,
                                     -1.,"Baryon", 21112));
   fParticleList->Add(new TParticlePDG("Delta(1910)+ bar","B012",
                                      1.91,kFALSE, .25,
                                     +1.,"Baryon", -21112));
   fParticleList->Add(new TParticlePDG("Delta(1920)-","B117",
                                      1.92,kFALSE, .2,
                                     -1.,"Baryon", 21114));
   fParticleList->Add(new TParticlePDG("Delta(1920)+ bar","B117",
                                      1.92,kFALSE, .2,
                                     +1.,"Baryon", -21114));
   fParticleList->Add(new TParticlePDG("Delta(1910)0","B012",
                                      1.91,kFALSE, .25,
                                     0.0,"Baryon", 21212));
   fParticleList->Add(new TParticlePDG("Delta(1910)0 bar","B012",
                                      1.91,kFALSE, .25,
                                     0.0,"Baryon", -21212));
   fParticleList->Add(new TParticlePDG("N(1700)0","B018",
                                      1.7,kFALSE, .1,
                                     0.0,"Baryon", 21214));
   fParticleList->Add(new TParticlePDG("N(1700)0 bar","B018",
                                      1.7,kFALSE, .1,
                                     0.0,"Baryon", -21214));
   fParticleList->Add(new TParticlePDG("N(1535)0","B063",
                                      1.535,kFALSE, .15,
                                     0.0,"Baryon", 22112));
   fParticleList->Add(new TParticlePDG("N(1535)0 bar","B063",
                                      1.535,kFALSE, .15,
                                     0.0,"Baryon", -22112));
   fParticleList->Add(new TParticlePDG("Delta(1920)0","B117",
                                      1.92,kFALSE, .2,
                                     0.0,"Baryon", 22114));
   fParticleList->Add(new TParticlePDG("Delta(1920)0 bar","B117",
                                      1.92,kFALSE, .2,
                                     0.0,"Baryon", -22114));
   fParticleList->Add(new TParticlePDG("Delta(1910)+","B012",
                                      1.91,kFALSE, .25,
                                     +1.,"Baryon", 22122));
   fParticleList->Add(new TParticlePDG("Delta(1910)- bar","B012",
                                      1.91,kFALSE, .25,
                                     -1.,"Baryon", -22122));
   fParticleList->Add(new TParticlePDG("N(1700)+","B018",
                                      1.7,kFALSE, .1,
                                     +1.,"Baryon", 22124));
   fParticleList->Add(new TParticlePDG("N(1700)- bar","B018",
                                      1.7,kFALSE, .1,
                                     -1.,"Baryon", -22124));
   fParticleList->Add(new TParticlePDG("N(1535)+","B063",
                                      1.535,kFALSE, .15,
                                     +1.,"Baryon", 22212));
   fParticleList->Add(new TParticlePDG("N(1535)- bar","B063",
                                      1.535,kFALSE, .15,
                                     -1.,"Baryon", -22212));
   fParticleList->Add(new TParticlePDG("Delta(1920)+","B117",
                                      1.92,kFALSE, .2,
                                     +1.,"Baryon", 22214));
   fParticleList->Add(new TParticlePDG("Delta(1920)- bar","B117",
                                      1.92,kFALSE, .2,
                                     -1.,"Baryon", -22214));
   fParticleList->Add(new TParticlePDG("Delta(1910)++","B012",
                                      1.91,kFALSE, .25,
                                     +2.,"Baryon", 22222));
   fParticleList->Add(new TParticlePDG("Delta(1910)-- bar","B012",
                                      1.91,kFALSE, .25,
                                     -2.,"Baryon", -22222));
   fParticleList->Add(new TParticlePDG("Delta(1920)++","B117",
                                      1.92,kFALSE, .2,
                                     +2.,"Baryon", 22224));
   fParticleList->Add(new TParticlePDG("Delta(1920)-- bar","B117",
                                      1.92,kFALSE, .2,
                                     -2.,"Baryon", -22224));
   fParticleList->Add(new TParticlePDG("Sigma(1750)-","B057",
                                      1.75,kFALSE, 9.00000E-02,
                                     -1.,"Baryon", 23112));
   fParticleList->Add(new TParticlePDG("Sigma(1750)+ bar","B057",
                                      1.75,kFALSE, 9.00000E-02,
                                     +1.,"Baryon", -23112));
   fParticleList->Add(new TParticlePDG("Sigma(1940)-","B098",
                                      1.94,kFALSE, .2199999,
                                     -1.,"Baryon", 23114));
   fParticleList->Add(new TParticlePDG("Sigma(1940)+ bar","B098",
                                      1.94,kFALSE, .2199999,
                                     +1.,"Baryon", -23114));
   fParticleList->Add(new TParticlePDG("Lambda(1600)0","B101",
                                      1.6,kFALSE, .15,
                                     0.0,"Baryon", 23122));
   fParticleList->Add(new TParticlePDG("Lambda(1600)0 bar","B101",
                                      1.6,kFALSE, .15,
                                     0.0,"Baryon", -23122));
   fParticleList->Add(new TParticlePDG("Lambda(1890)0","B060",
                                      1.89,kFALSE, .1,
                                     0.0,"Baryon", 23124));
   fParticleList->Add(new TParticlePDG("Lambda(1890)0 bar","B060",
                                      1.89,kFALSE, .1,
                                     0.0,"Baryon", -23124));
   fParticleList->Add(new TParticlePDG("Lambda(2110)0","B035",
                                      2.11,kFALSE, .2,
                                     0.0,"Baryon", 23126));
   fParticleList->Add(new TParticlePDG("Lambda(2110)0 bar","B035",
                                      2.11,kFALSE, .2,
                                     0.0,"Baryon", -23126));
   fParticleList->Add(new TParticlePDG("Sigma(1750)0","B057",
                                      1.75,kFALSE, 9.00000E-02,
                                     0.0,"Baryon", 23212));
   fParticleList->Add(new TParticlePDG("Sigma(1750)0 bar","B057",
                                      1.75,kFALSE, 9.00000E-02,
                                     0.0,"Baryon", -23212));
   fParticleList->Add(new TParticlePDG("Sigma(1940)0","B098",
                                      1.94,kFALSE, .2199999,
                                     0.0,"Baryon", 23214));
   fParticleList->Add(new TParticlePDG("Sigma(1940)0 bar","B098",
                                      1.94,kFALSE, .2199999,
                                     0.0,"Baryon", -23214));
   fParticleList->Add(new TParticlePDG("Sigma(1750)+","B057",
                                      1.75,kFALSE, 9.00000E-02,
                                     +1.,"Baryon", 23222));
   fParticleList->Add(new TParticlePDG("Sigma(1750)- bar","B057",
                                      1.75,kFALSE, 9.00000E-02,
                                     -1.,"Baryon", -23222));
   fParticleList->Add(new TParticlePDG("Sigma(1940)+","B098",
                                      1.94,kFALSE, .2199999,
                                     +1.,"Baryon", 23224));
   fParticleList->Add(new TParticlePDG("Sigma(1940)- bar","B098",
                                      1.94,kFALSE, .2199999,
                                     -1.,"Baryon", -23224));
   fParticleList->Add(new TParticlePDG("rho(1700)0","M065",
                                      1.7,kFALSE, .23,
                                     0.0,"Meson", 30113));
   fParticleList->Add(new TParticlePDG("rho(1700)+","M065",
                                      1.7,kFALSE, .23,
                                     0.0,"Meson", 30213));
   fParticleList->Add(new TParticlePDG("rho(1700)-","M065",
                                      1.7,kFALSE, .23,
                                     0.0,"Meson", -30213));
   fParticleList->Add(new TParticlePDG("f(1)(1420)0","M006",
                                      1.4268,kFALSE, 5.20000E-02,
                                     0.0,"Meson", 30223));
   fParticleList->Add(new TParticlePDG("f(2)(2300)0","M107",
                                      2.297,kFALSE, .15,
                                     0.0,"Meson", 30225));
   fParticleList->Add(new TParticlePDG("K*(1410)0","M094",
                                      1.412,kFALSE, .2269999,
                                     0.0,"Meson", 30313));
   fParticleList->Add(new TParticlePDG("K*(1410)0 bar","M094",
                                      1.412,kFALSE, .2269999,
                                     0.0,"Meson", -30313));
   fParticleList->Add(new TParticlePDG("K*(1410)+","M094",
                                      1.412,kFALSE, .2269999,
                                     0.0,"Meson", 30323));
   fParticleList->Add(new TParticlePDG("K*(1410)-","M094",
                                      1.412,kFALSE, .2269999,
                                     0.0,"Meson", -30323));
   fParticleList->Add(new TParticlePDG("psi(3770)0","M053",
                                      3.7699,kFALSE, 2.36000E-02,
                                     0.0,"Meson", 30443));
   fParticleList->Add(new TParticlePDG("Upsilon(3S)0","M048",
                                      10.35529,kFALSE, 2.63000E-05,
                                     0.0,"Meson", 30553));
   fParticleList->Add(new TParticlePDG("Delta(1600)-","B019",
                                      1.6,kFALSE, .3499999,
                                     -1.,"Baryon", 31114));
   fParticleList->Add(new TParticlePDG("Delta(1600)+ bar","B019",
                                      1.6,kFALSE, .3499999,
                                     +1.,"Baryon", -31114));
   fParticleList->Add(new TParticlePDG("N(1720)0","B015",
                                      1.72,kFALSE, .15,
                                     0.0,"Baryon", 31214));
   fParticleList->Add(new TParticlePDG("N(1720)0 bar","B015",
                                      1.72,kFALSE, .15,
                                     0.0,"Baryon", -31214));
   fParticleList->Add(new TParticlePDG("N(1650)0","B066",
                                      1.65,kFALSE, .15,
                                     0.0,"Baryon", 32112));
   fParticleList->Add(new TParticlePDG("N(1650)0 bar","B066",
                                      1.65,kFALSE, .15,
                                     0.0,"Baryon", -32112));
   fParticleList->Add(new TParticlePDG("Delta(1600)0","B019",
                                      1.6,kFALSE, .3499999,
                                     0.0,"Baryon", 32114));
   fParticleList->Add(new TParticlePDG("Delta(1600)0 bar","B019",
                                      1.6,kFALSE, .3499999,
                                     0.0,"Baryon", -32114));
   fParticleList->Add(new TParticlePDG("N(1720)+","B015",
                                      1.72,kFALSE, .15,
                                     +1.,"Baryon", 32124));
   fParticleList->Add(new TParticlePDG("N(1720)- bar","B015",
                                      1.72,kFALSE, .15,
                                     -1.,"Baryon", -32124));
   fParticleList->Add(new TParticlePDG("N(1650)+","B066",
                                      1.65,kFALSE, .15,
                                     +1.,"Baryon", 32212));
   fParticleList->Add(new TParticlePDG("N(1650)- bar","B066",
                                      1.65,kFALSE, .15,
                                     -1.,"Baryon", -32212));
   fParticleList->Add(new TParticlePDG("Delta(1600)+","B019",
                                      1.6,kFALSE, .3499999,
                                     +1.,"Baryon", 32214));
   fParticleList->Add(new TParticlePDG("Delta(1600)- bar","B019",
                                      1.6,kFALSE, .3499999,
                                     -1.,"Baryon", -32214));
   fParticleList->Add(new TParticlePDG("Delta(1600)++","B019",
                                      1.6,kFALSE, .3499999,
                                     +2.,"Baryon", 32224));
   fParticleList->Add(new TParticlePDG("Delta(1600)-- bar","B019",
                                      1.6,kFALSE, .3499999,
                                     -2.,"Baryon", -32224));
   fParticleList->Add(new TParticlePDG("Lambda(1670)0","B040",
                                      1.67,kFALSE, 3.50000E-02,
                                     0.0,"Baryon", 33122));
   fParticleList->Add(new TParticlePDG("Lambda(1670)0 bar","B040",
                                      1.67,kFALSE, 3.50000E-02,
                                     0.0,"Baryon", -33122));
   fParticleList->Add(new TParticlePDG("rho(1450)0","M105",
                                      1.465,kFALSE, .31,
                                     0.0,"Meson", 40113));
   fParticleList->Add(new TParticlePDG("rho(1450)+","M105",
                                      1.465,kFALSE, .31,
                                     0.0,"Meson", 40213));
   fParticleList->Add(new TParticlePDG("rho(1450)-","M105",
                                      1.465,kFALSE, .31,
                                     0.0,"Meson", -40213));
   fParticleList->Add(new TParticlePDG("eta(1440)0","M027",
                                      1.42,kFALSE, 6.00000E-02,
                                     0.0,"Meson", 40221));
   fParticleList->Add(new TParticlePDG("f(1)(1510)0","M084",
                                      1.512,kFALSE, 3.50000E-02,
                                     0.0,"Meson", 40223));
   fParticleList->Add(new TParticlePDG("f(2)(2340)0","M108",
                                      2.34,kFALSE, .3199999,
                                     0.0,"Meson", 40225));
   fParticleList->Add(new TParticlePDG("K*(1680)0","M095",
                                      1.714,kFALSE, .3199999,
                                     0.0,"Meson", 40313));
   fParticleList->Add(new TParticlePDG("K*(1680)0 bar","M095",
                                      1.714,kFALSE, .3199999,
                                     0.0,"Meson", -40313));
   fParticleList->Add(new TParticlePDG("K*(1680)+","M095",
                                      1.714,kFALSE, .3199999,
                                     0.0,"Meson", 40323));
   fParticleList->Add(new TParticlePDG("K*(1680)-","M095",
                                      1.714,kFALSE, .3199999,
                                     0.0,"Meson", -40323));
   fParticleList->Add(new TParticlePDG("psi(4040)0","M072",
                                      4.04,kFALSE, 5.20000E-02,
                                     0.0,"Meson", 40443));
   fParticleList->Add(new TParticlePDG("Upsilon(4S)0","M047",
                                      10.57999,kFALSE, 2.38000E-02,
                                     0.0,"Meson", 40553));
   fParticleList->Add(new TParticlePDG("N(1710)0","B014",
                                      1.71,kFALSE, .1,
                                     0.0,"Baryon", 42112));
   fParticleList->Add(new TParticlePDG("N(1710)0 bar","B014",
                                      1.71,kFALSE, .1,
                                     0.0,"Baryon", -42112));
   fParticleList->Add(new TParticlePDG("N(1710)+","B014",
                                      1.71,kFALSE, .1,
                                     +1.,"Baryon", 42212));
   fParticleList->Add(new TParticlePDG("N(1710)- bar","B014",
                                      1.71,kFALSE, .1,
                                     -1.,"Baryon", -42212));
   fParticleList->Add(new TParticlePDG("Lambda(1800)0","B036",
                                      1.8,kFALSE, .3,
                                     0.0,"Baryon", 43122));
   fParticleList->Add(new TParticlePDG("Lambda(1800)0 bar","B036",
                                      1.8,kFALSE, .3,
                                     0.0,"Baryon", -43122));
   fParticleList->Add(new TParticlePDG("f(0)(1590)0","M096",
                                      1.581,kFALSE, .18,
                                     0.0,"Meson", 50221));
   fParticleList->Add(new TParticlePDG("omega(1420)0","M125",
                                      1.419,kFALSE, .17,
                                     0.0,"Meson", 50223));
   fParticleList->Add(new TParticlePDG("psi(4160)0","M025",
                                      4.159,kFALSE, 7.80000E-02,
                                     0.0,"Meson", 50443));
   fParticleList->Add(new TParticlePDG("Upsilon(10860)0","M092",
                                      10.86499,kFALSE, .1099999,
                                     0.0,"Meson", 50553));
   fParticleList->Add(new TParticlePDG("Lambda(1810)0","B077",
                                      1.81,kFALSE, .15,
                                     0.0,"Baryon", 53122));
   fParticleList->Add(new TParticlePDG("Lambda(1810)0 bar","B077",
                                      1.81,kFALSE, .15,
                                     0.0,"Baryon", -53122));
   fParticleList->Add(new TParticlePDG("f(J)(1710)0","M068",
                                      1.709,kFALSE, .14,
                                     0.0,"Meson", 60221));
   fParticleList->Add(new TParticlePDG("omega(1600)0","M126",
                                      1.662,kFALSE, .28,
                                     0.0,"Meson", 60223));
   fParticleList->Add(new TParticlePDG("psi(4415)0","M073",
                                      4.415,kFALSE, 4.30000E-02,
                                     0.0,"Meson", 60443));
   fParticleList->Add(new TParticlePDG("Upsilon(11020)0","M093",
                                      11.019,kFALSE, 7.90000E-02,
                                     0.0,"Meson", 60553));
   fParticleList->Add(new TParticlePDG("chi(b1)(2P)0","M080",
                                      10.2552,kTRUE, .0,
                                     0.0,"Meson", 70553));
// End of the entry point of the pdg table conversion
  fParticleList->Add(new TParticlePDG("Rootino","",
                                    0.0,kTRUE,
                                    1.e38,0.0,"Artificial",0));

}


//______________________________________________________________________________
TParticlePDG* TDatabasePDG::GetParticle(const Text_t *name)
{
//
//  Get a pointer to the particle object according to the name given
//
  TParticlePDG *def = (TParticlePDG *)fParticleList->FindObject(name);
  if (!def) {
      fParticleList->Error("Particle","No match for %s exists !",name);
  }
  return def;
}

//______________________________________________________________________________
TParticlePDG* TDatabasePDG::GetParticle(Int_t PDGcode)
{
//
//  Get a pointer to the particle object according to the MC code number
//
  TIter next(fParticleList);
  TParticlePDG *p;
  while ((p = (TParticlePDG *)next())) {
    if (p->PdgCode() == PDGcode) return p;
  }
  fParticleList->Error("Particle","No match for PDG code %d exists !",PDGcode);
  return 0;
}


//______________________________________________________________________________
void TDatabasePDG::Print(Option_t *)
{
}

