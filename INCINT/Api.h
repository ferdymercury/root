/*CMZ :  2.20/04 08/12/98  16.25.21  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Header file Api.h
 ************************************************************************
 * Description:
 *  Extended Run Time Type Identification API
 *   -I$(CINTSYSDIR) -I$(CINTSYSDIR)/src must be given at compile time
 ************************************************************************
 * Copyright(c) 1991~1996  [hp] Hewlett Packard Japan, All rights reserved
 * Author                  Masaharu Goto (gotom@jpn.hp.com)
 * Copyright(c) 1995~1998  Masaharu Goto (MXJ02154@niftyserve.or.jp)
 *
 * Permission to use, copy, modify and distribute this software and its
 * documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Japan Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 ************************************************************************/

#ifndef G__API_H
#define G__API_H

#include <string.h>

/*********************************************************************
* include header files
*********************************************************************/

#define G__API
#define G__CINTBODY /* may not be needed */
#include "G__ci.h"
#ifdef __MAKECINT__
#pragma link off all classes;
#endif

#define G__INFO_BUFLEN 50
#define G__INFO_TITLELEN 256

#include "Property.h"
#include "Class.h"
#include "BaseCls.h"
#include "Type.h"
#include "Method.h"
#include "MethodAr.h"
#include "DataMbr.h"
#include "CallFunc.h"
#include "Typedf.h"
#include "Token.h"


/*********************************************************************
* $xxx object resolution function, pointer to a class object
*
* Usage:
*
*  extern "C" void YourGetObject(char *name,G__ClassInfo *type) {
*     void *p;
*     // Whatever you want to fill type and pointetr to the object info
*     return(p);
*  }
*
*  ROOT_Initialization() {
*     // set pointer to yourown interface method
*     G__InitGetSpecialObject(YourGetObject);
*  }
*********************************************************************/
extern "C" {
#if !defined(G__OLDIMPLEMENTATION481)
typedef void *(*G__pMethodSpecialObject)(char *item,G__ClassInfo *typeinfo
					 ,void** pptr,void** ppdict);
#elif !defined(G__OLDIMPLEMENTATION455)
typedef void *(*G__pMethodSpecialObject)(char *item,G__ClassInfo *typeinfo
					 ,void* ptr);
#else
typedef void *(*G__pMethodSpecialObject)(char *item,G__ClassInfo *typeinfo);
#endif
void G__InitGetSpecialObject(G__pMethodSpecialObject pmethod);
}

/*********************************************************************
* $xxx object resolution function, Generic
*********************************************************************/
extern "C" {
#if !defined(G__OLDIMPLEMENTATION481)
typedef void (*G__pMethodSpecialValue)(char *item,G__TypeInfo *typeinfo
				       ,long *pl,double *pd,void** pptr
				       ,void** ppdict);
#elif !defined(G__OLDIMPLEMENTATION455)
typedef void (*G__pMethodSpecialValue)(char *item,G__TypeInfo *typeinfo
				        ,long *pl,double *pd,void* ptr);
#else
typedef void (*G__pMethodSpecialValue)(char *item,G__TypeInfo *typeinfo
				        ,long *pl,double *pd);
#endif
void G__InitGetSpecialValue(G__pMethodSpecialValue pmethod);
}

#ifdef __MAKECINT__
#pragma link off class $G__value;
#pragma link off class $G__COMPLETIONLIST;
#pragma link off class $G__linked_taginfo;
#endif

#endif
