// @(#)root/mathcore:$Name:  $:$Id: DistFunc.h,v 1.3 2006/11/16 17:17:37 rdm Exp $
// Authors: L. Moneta, A. Zsenei   08/2005

 /**********************************************************************
  *                                                                    *
  * Copyright (c) 2004 ROOT Foundation,  CERN/PH-SFT                   *
  *                                                                    *
  *                                                                    *
  **********************************************************************/

/** 
    Header file declaring all distributions, pdf, cdf and quantiles present in 
    MathCore and optionally MathMore. 
    The MathMore ones are included only if ROOT has been built with MathMore. 
*/

#ifndef ROOT_Math_DistFunc
#define ROOT_Math_DistFunc


#ifndef ROOT_RConfigure
#include "RConfigure.h"
#endif




// pdf functions are all in MathCore
#ifndef ROOT_Math_PdfFunc
#include "Math/PdfFunc.h"
#endif

// some cdf are in MathCore others in mathmore
#ifndef ROOT_Math_ProbFuncMathCore
#include "Math/ProbFuncMathCore.h"
#endif

// include distributions from MathMore when is there
#ifdef R__HAS_MATHMORE  

// extra cdf in MathMore
#ifndef ROOT_Math_ProbFuncMathMore
#include "Math/ProbFuncMathMore.h"
#endif

// inverse (quantiles) are all in mathmore
#ifndef ROOT_Math_ProbFuncInv
#include "Math/ProbFuncInv.h"
#endif

#endif

#endif  // ROOT_Math_DistFunc
