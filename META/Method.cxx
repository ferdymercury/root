//*CMZ :  2.00/12 22/09/98  15.24.25  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  18.02.40  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  23.08.51  by  Fons Rademakers
//*-- Author :    Rene Brun   09/02/95

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  Each ROOT class (see TClass) has a linked list of methods.          //
//  This class describes one single method (member function).           //
//  The method info is obtained via the CINT api. See class TCint.      //
//                                                                      //
//  The method information is used a.o. by the THml class and by the    //
//  TTree class.                                                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TClass.h"
#include "TMethod.h"
#include "TMethodarg.h"
#include "TROOT.h"
#include "TInterpreter.h"
#include "Strlen.h"
#include "Api.h"
#include "TDataMember.h"


ClassImp(TMethod)

//______________________________________________________________________________
TMethod::TMethod(G__MethodInfo *info, TClass *cl) : TFunction(info)
{
   // Default TMethod ctor. TMethods are constructed in TClass.
   // Comment strings are pre-parsed to find out whether the method is
   // a contxt-menu item.

   fClass = cl;

   if (fInfo) {
      const char *t = fInfo->Title();

      if (t && strstr(t, "*TOGGLE"))
         fMenuItem = kMenuToggle;
      else
      if (t && strstr(t, "*MENU"))
         fMenuItem = kMenuDialog;
      else
      if (t && strstr(t, "*SUBMENU"))
         {
         fMenuItem = kMenuSubMenu;
         }
      else
         fMenuItem = kMenuNoMenu;
   }
}


//______________________________________________________________________________
const Text_t *TMethod::GetCommentString()
{
    // Returns a comment string from the class declaration.

    return fInfo->Title();
}


//______________________________________________________________________________
void TMethod::CreateSignature()
{
   // Using the CINT method arg information create a complete signature string.

   TFunction::CreateSignature();

   if (Property() & kIsConstant) fSignature += " const";
}

//______________________________________________________________________________
TDataMember *TMethod::FindDataMember()
{
   // Tries to guess DataMember from comment string
   // and Method's name <==(only if 1 Argument!).
   // If more then one argument=> returns pointer to the last argument.
   // It also sets MethodArgs' pointers to point to specified data members.
   //
   // The form of comment string defining arguments is:
   // void XXX(Int_t x1, Float_t y2) //*ARGS={x1=>fX1,y2=>fY2}
   // where fX1, fY2 are data fields in the same class.
   // ("pointers" to data members)

   Char_t *argstring = strstr(GetCommentString(),"*ARGS={");

   if (!(GetClass()->GetListOfRealData())) GetClass()->BuildRealData();

   if (argstring) {

      // if we found any argument-specifying hints  - parse it

      if (!fMethodArgs) return 0;

      Text_t argstr[2048];    // workspace...
      Text_t *ptr1 = 0;
      Text_t *tok  = 0;
      Text_t *ptr2 = 0;
      Int_t i;

      strcpy(argstr,argstring);       //let's move it to "worksapce"  copy

      ptr2 = strtok(argstr,"{}");     //extract the data!
      ptr2 = strtok((Text_t*)0,"{}");

      //extract argument tokens//
      Text_t *tokens[20];
      Int_t cnt       = 0;
      Int_t token_cnt = 0;
      do {
          ptr1 = strtok((Text_t*) (cnt++ ? 0:ptr2),",;"); //extract tokens
                                                         // separated by , or ;
          if (ptr1) {
             tok = new Text_t[strlen(ptr1)+1];
             strcpy(tok,ptr1);
             tokens[token_cnt] = tok;            //store this token.
             token_cnt++;
          }
      } while (ptr1);

      //now let's  parse all argument tokens...
      TClass     *cl = 0;
      TMethodArg *a  = 0;
      TMethodArg *ar = 0;
      TDataMember *member = 0;

      for (i=0; i<token_cnt;i++) {
         cnt = 0;
         ptr1 = strtok(tokens[i],"=>");  //LeftHandedSide=methodarg
         ptr2 = strtok((Text_t*)0,"=>"); //RightHandedSide-points to datamember

         //find the MethodArg
         a      = 0;
         ar     = 0;
         member = 0;
         TIter nextarg(fMethodArgs);     // iterate through all arguments.
         while ((ar = (TMethodArg*)nextarg())) {
            if (!strcmp(ptr1,ar->GetName())) {
                a = ar;
               break;
            }
         }

         //now find the data member
         cl = GetClass()->GetBaseDataMember(ptr2);
         if (cl) {
            member = cl->GetDataMember(ptr2);
            if (a) a->fDataMember = member; //SET THE APROPRIATE FIELD !!!
                                     //We can do it - friend decl. in MethodArg
         }
         delete tokens[i];
      }
      return member; // nothing else to do! We return a pointer to the last
                     // found data member

   // if not found in comment string - try to guess it from name!
   } else {
      if (fMethodArgs)
        if (fMethodArgs->GetSize() != 1) return 0;

      TMethodArg *a = 0;
      if (fMethodArgs) a = (TMethodArg*)(fMethodArgs->First());

      Text_t dataname[64]    = "";
      Text_t basename[64]    = "";
      const Text_t *funcname = GetName();
      if ( strncmp(funcname,"Get",3) == 0 || strncmp(funcname,"Set",3) == 0 )
         sprintf(basename,"%s",funcname+3);
      else if ( strncmp(funcname,"Is",2) == 0 )
         sprintf(basename,"%s",funcname+2);
      else
         return 0;

      sprintf(dataname,"f%s",basename);

      TClass *cl = GetClass()->GetBaseDataMember(dataname);
      if (cl) {
         TDataMember *member   = cl->GetDataMember(dataname);
         if (a) a->fDataMember = member;
         return member;
      } else {
         sprintf(dataname,"fIs%s",basename);  //in case of IsEditable()
                                                        //and fIsEditable
         cl = GetClass()->GetBaseDataMember(dataname);
         if (cl) {
           TDataMember *member = cl->GetDataMember(dataname);
           if (a) a->fDataMember = member;
           return member;
         }
      }
   }

    //if nothing found - return null -pointer:
    return 0;
}


//______________________________________________________________________________
TList *TMethod::GetListOfMethodArgs()
{
   // Returns methodarg list and additionally updates fDataMember in TMethod by
   // calling FindDataMember();

   if (!fMethodArgs){
      TFunction::GetListOfMethodArgs();
      FindDataMember();
   }
   return fMethodArgs;
}
