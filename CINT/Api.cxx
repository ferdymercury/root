//*CMZ :  2.20/04 08/12/98  16.25.34  by  Masaharu Goto
//*-- Author :    Masaharu Goto   08/12/98
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file Api.cxx
 ************************************************************************
 * Description:
 *  Extended Run Time Type Identification API
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

#include "Api.h"
#include "common.h"


/*********************************************************************
* $xxx object resolution function Generic form
* There is another form of interface which only allow you to return
* pointer to a class object if you want to gain a slight speed
* advantage.
*********************************************************************/
//
// Static object to store pointer to interface function
//
static G__pMethodSpecialValue  G__UserSpecificGetSpecialValue;

//
// API to Cint internal type information translater
//
extern "C" void G__TypeInfo2G__value(G__TypeInfo* type,G__value* pvalue
				     ,long l,double d)
{
  pvalue->tagnum=(int)type->Tagnum();
  pvalue->typenum=(int)type->Typenum();
  pvalue->type=(int)type->Type();
  pvalue->ref=0;
  switch(pvalue->type) {
  case 'd':
  case 'f':
    pvalue->obj.d = d;
    break;
  default:
    pvalue->obj.i = l;
    break;
  }
}

//
// Used directly from src/expr.c:G__getitem()
//
#if !defined(G__OLDIMPLEMENTATION481)
extern "C" G__value G__APIGetSpecialValue_layer1(char *item,void **pptr
	,void **ppdict)
#elif !defined(G__OLDIMPLEMENTATION455)
extern "C" G__value G__APIGetSpecialValue_layer1(char *item,void *ptr)
#else
extern "C" G__value G__APIGetSpecialValue_layer1(char *item)
#endif
{
  G__value result;
  long l;
  double d;
  G__TypeInfo typeinfo;
#if !defined(G__OLDIMPLEMENTATION481)
  (*G__UserSpecificGetSpecialValue)(item,&typeinfo,&l,&d,pptr,ppdict);
#elif !defined(G__OLDIMPLEMENTATION455)
  (*G__UserSpecificGetSpecialValue)(item,&typeinfo,&l,&d,ptr);
#else
  (*G__UserSpecificGetSpecialValue)(item,&typeinfo,&l,&d);
#endif
  G__TypeInfo2G__value(&typeinfo,&result,l,d);
  return(result);
}

//
// Initialization routine
//
extern "C" void G__InitGetSpecialValue(G__pMethodSpecialValue pmethod)
{
#if !defined(G__OLDIMPLEMENTATION481)
  G__GetSpecialObject
	=(G__value (*)(char*,void**,void**))G__APIGetSpecialValue_layer1;
#elif !defined(G__OLDIMPLEMENTATION455)
  G__GetSpecialObject=(G__value (*)(char*,void*))G__APIGetSpecialValue_layer1;
#else
  G__GetSpecialObject = (G__value (*)(char*))G__APIGetSpecialValue_layer1;
#endif
  G__UserSpecificGetSpecialValue = pmethod;
}


/*********************************************************************
* $xxx object resolution function for ROOT, slight speed advantage.
* Following interface library can only return pointer to a class object
*********************************************************************/
//
// Static object to store pointer to interface functionb
//
static G__pMethodSpecialObject G__UserSpecificGetSpecialObject;


//
// API to Cint internal type information translater
//
extern "C" void G__ClassInfo2G__value(G__ClassInfo* type
				     ,G__value* pvalue,long l)
{
  pvalue->tagnum=(int)type->Tagnum();
  pvalue->typenum = -1;
  pvalue->type = 'U';
  pvalue->ref=0;
  pvalue->obj.i = l;
}

//
// Used directly from src/expr.c:G__getitem()
//
#if !defined(G__OLDIMPLEMENTATION481)
extern "C" G__value G__APIGetSpecialObject_layer1(char *item,void** pptr
	,void** ppdict)
#elif !defined(G__OLDIMPLEMENTATION455)
extern "C" G__value G__APIGetSpecialObject_layer1(char *item,void* ptr)
#else
extern "C" G__value G__APIGetSpecialObject_layer1(char *item)
#endif
{
  G__value result;
  long l;
  G__ClassInfo type;
#if !defined(G__OLDIMPLEMENTATION481)
  l=(long)((*G__UserSpecificGetSpecialObject)(item,&type,pptr,ppdict));
#elif !defined(G__OLDIMPLEMENTATOIN455)
  l=(long)((*G__UserSpecificGetSpecialObject)(item,&type,ptr));
#else
  l=(long)((*G__UserSpecificGetSpecialObject)(item,&type));
#endif
  G__ClassInfo2G__value(&type,&result,l);
  return(result);
}

//
// Initialization routine
//
extern "C" void G__InitGetSpecialObject(G__pMethodSpecialObject pmethod)
{
#if !defined(G__OLDIMPLEMENTATION481)
  G__GetSpecialObject
	=(G__value (*)(char*,void**,void**))G__APIGetSpecialObject_layer1;
#elif !defined(G__OLDIMPLEMENTATION455)
  G__GetSpecialObject=(G__value (*)(char*,void*))G__APIGetSpecialObject_layer1;
#else
  G__GetSpecialObject = (G__value (*)(char*))G__APIGetSpecialObject_layer1;
#endif
  G__UserSpecificGetSpecialObject = pmethod;
}

