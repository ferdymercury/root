/*CMZ :  2.20/04 08/12/98  16.25.24  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/* /% C %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file disp.c
 ************************************************************************
 * Description:
 *  Display information
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

#include "common.h"

int G__browsing=1; /* used in disp.c and intrpt.c */

#ifndef G__OLDIMPLEMENTATION713
/***********************************************************************
* G__redirected_on()
* G__redirected_off()
***********************************************************************/
static int G__redirected = 0;
void G__redirect_on() { G__redirected = 1; }
void G__redirect_off() { G__redirected = 0; }
#endif

#ifndef G__OLDIMPLEMENTATION640
/***********************************************************************
* G__more_pause()
***********************************************************************/
void G__more_pause(fp)
FILE* fp;
{
  static int shownline = 0;
  static int dispsize = 23;
  static int store_dispsize = 0;
  static int onemore=0;

  /*************************************************
  * initialization
  *************************************************/
  if(!fp) {
    shownline = 0;
    if(1>dispsize) {
      if(store_dispsize>0) dispsize=store_dispsize;
      else {
	char* lines;
	lines = getenv("LINES");
	if(lines)  dispsize=atoi(lines)-1;
	else       dispsize=23;
      }
    }
    return;
  }

#ifndef G__OLDIMPLEMENTATION713
  if(fp==G__stdout && 0<dispsize && 0==G__redirected ) {
#else
  if(fp==G__stdout && 0<dispsize) {
#endif
    ++shownline;
    /*************************************************
     * judgement for pause
     *************************************************/
    if(shownline>=dispsize || onemore) {
      char buf[G__MAXNAME];
      shownline=0;
      strcpy(buf,G__input("-- Press return for more -- (input [number] of lines, Cont,Step,More) "));
      if(isdigit(buf[0])) { /* change display size */
	dispsize = G__int(G__calc(buf));
	if(dispsize>0) store_dispsize = dispsize;
        onemore=0;
      }
      else if('c'==tolower(buf[0])) { /* continue to the end */
	dispsize = 0;
        onemore=0;
      }
      else if('s'==tolower(buf[0])) { /* one more line */
	onemore = 1;
      }
      else if(isalpha(buf[0])||isspace(buf[0])) { /* more lines */
	onemore = 0;
      }
    }
  }
}

/***********************************************************************
* G__more()
***********************************************************************/
void G__more(fp,msg)
FILE* fp;
char* msg;
{
  fprintf(fp,msg);
  G__more_pause(fp);
}
#endif /* ON640 */

/***********************************************************************
* void G__listfunc
***********************************************************************/
void G__listfunc(fp,access,fname,ifunc)
FILE *fp;
int access;
char *fname;
struct G__ifunc_table *ifunc;
{
  int i,n;
  char temp[G__ONELINE];

  G__browsing=1;

#ifndef G__OLDIMPLEMENTATION511
  if(!ifunc) ifunc = G__p_ifunc;
#else
  if(G__exec_memberfunc) {
    G__incsetup_memfunc(G__tagnum);
    ifunc = G__struct.memfunc[G__tagnum] ;
  }
  else {
    ifunc = G__p_ifunc;
  }
#endif

  fprintf(fp,"%-15sline:size busy function type and name\n","filename");
  G__more_pause(fp);

  /***************************************************
   * while interpreted function table list exists
   ***************************************************/
  while(ifunc) {
    for(i=0;i<ifunc->allifunc;i++) {

      if(!G__browsing) return;

      if(fname && strcmp(fname,ifunc->funcname[i])!=0) continue;

      if(ifunc->hash[i] && ifunc->access[i]&access) {
	
	/* print out file name and line number */
	if(ifunc->pentry[i]->filenum>=0) {
	  fprintf(fp,"%-15s%4d:%-3d%c%2d "
		  ,G__srcfile[ifunc->pentry[i]->filenum].filename
		  ,ifunc->pentry[i]->line_number
#ifdef G__ASM_FUNC
		  ,ifunc->pentry[i]->size
#else
		  ,0
#endif
#ifdef G__ASM_WHOLEFUNC
		  ,(ifunc->pentry[i]->bytecode)? '*' : ' '
#else
		  ,' '
#endif
		  ,ifunc->busy[i]
		  );
#ifdef G__ASM_DBG
	  if(ifunc->pentry[i]->bytecode) {
	    G__ASSERT(ifunc->pentry[i]->bytecodestatus==G__BYTECODE_SUCCESS);
	  }
	  else {
	    G__ASSERT(ifunc->pentry[i]->bytecodestatus==G__BYTECODE_FAILURE||
		      ifunc->pentry[i]->bytecodestatus==G__BYTECODE_NOTYET);
	  }
	  if(ifunc->pentry[i]->bytecodestatus==G__BYTECODE_SUCCESS) {
	    G__ASSERT(ifunc->pentry[i]->bytecode);
	  }
	  else {
	    G__ASSERT(!ifunc->pentry[i]->bytecode);
	  }
#endif
	}
	else {
	  fprintf(fp,"%-15s%4d:%-3d%3d "
		  ,"(compiled)"
		  ,0,0
		  ,ifunc->busy[i]
		  );
	}
	
	fprintf(fp,"%s ",G__access2string(ifunc->access[i]));
#ifndef G__NEWINHERIT
	if(ifunc->isinherit[i]) fprintf(fp,"inherited ");
#endif
	if(ifunc->isvirtual[i]) fprintf(fp,"virtual ");

#ifdef G__OLDIMPLEMENTATION401
#ifndef G__OLDIMPLEMENATTION379
	if(ifunc->isconst[i]&G__CONSTVAR) fprintf(fp,"const ");
#else
	if(ifunc->isconst[i]) fprintf(fp,"const ");
#endif
#endif
	
	/* print out type of return value */
#ifndef G__OLDIMPLEMENTATION401
	fprintf(fp,"%s ",G__type2string(ifunc->type[i]
					,ifunc->p_tagtable[i]
					,ifunc->p_typetable[i]
					,ifunc->reftype[i]
					,ifunc->isconst[i]));
#else
	fprintf(fp,"%s ",G__type2string(ifunc->type[i]
					,ifunc->p_tagtable[i]
					,ifunc->p_typetable[i]
					,ifunc->reftype[i]));
#endif
	
	/*****************************************************
	 * to get type of function parameter
	 *****************************************************/
	/**********************************************************
	 * print out type and name of function and parameters
	 **********************************************************/
	/* print out function name */
	fprintf(fp,"%s(",ifunc->funcname[i]);

	if(ifunc->ansi[i] && 0==ifunc->para_nu[i]) fprintf(fp,"void");
	
	/* print out parameter types */
	for(n=0;n<ifunc->para_nu[i];n++) {
	
	  if(n!=0) fprintf(fp,",");
	  /* print out type of return value */
#ifndef G__OLDIMPLEMENATTION401
	  fprintf(fp,"%s",G__type2string(ifunc->para_type[i][n]
					 ,ifunc->para_p_tagtable[i][n]
					 ,ifunc->para_p_typetable[i][n]
					 ,ifunc->para_reftype[i][n]
					 ,ifunc->para_isconst[i][n]));
#else
	  fprintf(fp,"%s",G__type2string(ifunc->para_type[i][n]
					 ,ifunc->para_p_tagtable[i][n]
					 ,ifunc->para_p_typetable[i][n]
					 ,ifunc->para_reftype[i][n]));
#endif

	  if(ifunc->para_name[i][n]) {
	    fprintf(fp," %s",ifunc->para_name[i][n]);
	  }
	  if(ifunc->para_def[i][n]) {
	    fprintf(fp,"=%s",ifunc->para_def[i][n]);
	  }

	}
	fprintf(fp,")");
	if(ifunc->isconst[i]&G__CONSTFUNC) fprintf(fp," const");
	if(ifunc->ispurevirtual[i]) fprintf(fp,")=0;");
	fprintf(fp,";");
	temp[0] = '\0';
	G__getcomment(temp,&ifunc->comment[i],ifunc->tagnum);
	if(temp[0]) fprintf(fp," //%s",temp);
	G__more(fp,"\n");
      }

    }
    /***************************************************
     * next page of interpterive function table
     ***************************************************/
    ifunc=ifunc->next;
  } /* end of while(ifunc) */

}




/**************************************************************************
* G__showstack()
*
**************************************************************************/
void G__showstack(fout)
FILE *fout;
{
  int temp,temp1;
  struct G__var_array *local;
  char syscom[G__MAXNAME];

  local=G__p_local;
  temp=0;
  while(local) {
#ifdef G__VAARG
    fprintf(fout,"%d ",temp);
    if(local->exec_memberfunc && -1!=local->tagnum)
      fprintf(fout,"%s::",G__struct.name[local->tagnum]);
    fprintf(fout,"%s(",local->ifunc->funcname[local->ifn]);
    for(temp1=0;temp1<local->libp->paran;temp1++) {
      if(temp1) fprintf(fout,",");
      G__valuemonitor(local->libp->para[temp1],syscom);
      fprintf(fout,"%s",syscom);
    }
    if(-1!=local->prev_filenum) {
      fprintf(fout,") [%s: %d]\n"
	      ,G__srcfile[local->prev_filenum].filename
	      ,local->prev_line_number);
      G__more_pause(fout);
    }
    else {
      G__more(fout,") [entry]\n" );
    }
#else
    fprintf(fout,"%d %s() [%s: %d]\n" ,temp ,local->ifunc->funcname[local->ifn]
	    ,G__filenameary[local->prev_filenum] ,local->prev_line_number);
    G__more_pause(fout);
#endif
    ++temp;
    local=local->prev_local;
  }
}

#ifndef G__OLDIMPLEMENTATION873
/**************************************************************************
* G__getdictpos()
**************************************************************************/
struct G__dictposition* G__get_dictpos(fname)
char *fname;
{
  struct G__dictposition *dict = (struct G__dictposition*)NULL;
  int i;
  /* search for source file entry */
  for(i=0;i<G__nfile;i++) {
    if(strcmp(G__srcfile[i].filename,fname)==0) {
      dict = G__srcfile[i].dictpos;
      break;
    }
  }
  return(dict);
}

/**************************************************************************
* G__display_newtypes()
*
**************************************************************************/
int G__display_newtypes(fout,fname)
FILE* fout;
char *fname;
{
  struct G__dictposition *dict = (struct G__dictposition*)NULL;
  int i;

  /* search for source file entry */
  for(i=0;i<G__nfile;i++) {
    if(strcmp(G__srcfile[i].filename,fname)==0) {
      dict = G__srcfile[i].dictpos;
      break;
    }
  }

  if(dict) {
    /* listup new class/struct/enum/union */
    G__display_class(fout,"",0,dict->tagnum);
    /* listup new typedef */
    G__display_typedef(fout,"",dict->typenum);
    return(0);
  }

  fprintf(G__serr,"File %s not loaded\n",fname);
  return(1);
}
#endif

/**************************************************************************
* G__display_string()
*
**************************************************************************/
int G__display_string(fout)
FILE *fout;
{
  int len;
  unsigned long totalsize=0;
  struct G__ConstStringList *pconststring;

  pconststring = G__plastconststring;
  while(pconststring->prev) {
    len=strlen(pconststring->string);
    totalsize+=len+1;
    fprintf(fout,"%3d %s\n",len,pconststring->string);
    G__more_pause(fout);
    pconststring=pconststring->prev;
  }
  fprintf(fout,"Total string constant size = %ld\n",totalsize);
  G__more_pause(fout);
  return(0);
}

/****************************************************************
* G__display_classinheritance()
*
****************************************************************/
static void G__display_classinheritance(fout,tagnum,space)
FILE *fout;
int tagnum;
char *space;
{
  int i;
  struct G__inheritance *baseclass;
  char addspace[50];
  char temp[G__ONELINE];

  baseclass = G__struct.baseclass[tagnum];

  if(NULL==baseclass) return;

  sprintf(addspace,"%s  ",space);

  for(i=0;i<baseclass->basen;i++) {
    if(baseclass->property[i]&G__ISDIRECTINHERIT) {
      fprintf(fout,"%s0x%-8lx ",space ,baseclass->baseoffset[i]);
      if(baseclass->property[i]&G__ISVIRTUALBASE)
	fprintf(fout,"virtual ");
      fprintf(fout,"%s %s"
	      ,G__access2string(baseclass->baseaccess[i])
	      ,G__fulltagname(baseclass->basetagnum[i],0));
      temp[0]='\0';
      G__getcomment(temp,&G__struct.comment[baseclass->basetagnum[i]]
		    ,baseclass->basetagnum[i]);
      if(temp[0]) fprintf(fout," //%s",temp);
      G__more(fout,"\n");
      G__display_classinheritance(fout,baseclass->basetagnum[i],addspace);
    }
  }
}

/****************************************************************
* G__display_membervariable()
*
****************************************************************/
static void G__display_membervariable(fout,tagnum,base)
FILE *fout;
int tagnum;
int base;
{
  struct G__var_array *var;
  struct G__inheritance *baseclass;
  int i;
  baseclass = G__struct.baseclass[tagnum];

  if(base) {
    for(i=0;i<baseclass->basen;i++) {
      if(!G__browsing) return;
      if(baseclass->property[i]&G__ISDIRECTINHERIT) {
	G__display_membervariable(fout,baseclass->basetagnum[i],base);
      }
    }
  }

  G__incsetup_memvar(tagnum);
  var = G__struct.memvar[tagnum];
  /* member variable */
  if(var) {
    fprintf(fout,"Defined in %s\n",G__struct.name[tagnum]);
    G__more_pause(fout);
    G__varmonitor(fout,var,"","",(long)(-1));
  }
}

/****************************************************************
* G__display_memberfunction()
*
****************************************************************/
static void G__display_memberfunction(fout,tagnum,access,base)
FILE *fout;
int tagnum;
int access;
int base;
{
  struct G__ifunc_table *store_ifunc;
  int store_exec_memberfunc;
  struct G__inheritance *baseclass;
  int i;
  baseclass = G__struct.baseclass[tagnum];

  if(base) {
    for(i=0;i<baseclass->basen;i++) {
      if(!G__browsing) return;
      if(baseclass->property[i]&G__ISDIRECTINHERIT) {
	G__display_memberfunction(fout,baseclass->basetagnum[i]
				  ,access,base);
      }
    }
  }

  /* member variable */
  if(G__struct.memfunc[tagnum]) {
    G__incsetup_memfunc(tagnum);
    fprintf(fout,"Defined in %s\n",G__struct.name[tagnum]);
    G__more_pause(fout);
    store_ifunc = G__p_ifunc;
    store_exec_memberfunc=G__exec_memberfunc;
    G__p_ifunc = G__struct.memfunc[tagnum];
    G__exec_memberfunc=0;
    G__listfunc(fout,access,(char*)NULL,(struct G__ifunc_table*)NULL);
    G__p_ifunc=store_ifunc;
    G__exec_memberfunc=store_exec_memberfunc;
  }
}

/****************************************************************
* G__display_class()
*
****************************************************************/
int G__display_class(fout,name,base,start)
FILE *fout;
char *name;
int base;
int start;
{
  int tagnum;
  int i,j;
  struct G__inheritance *baseclass;
  char temp[G__ONELINE];
  char *p;

  G__browsing=1;

  i=0;
  while(isspace(name[i])) i++;

  /*******************************************************************
  * List of classes
  *******************************************************************/
  if('\0'==name[i]) {
    /* no class name specified, list up all tagnames */
    G__more(fout,"List of classes\n");
    fprintf(fout,"%-15s%5s\n","file","line");
    G__more_pause(fout);
    for(i=start;i<G__struct.alltag;i++) {
      if(!G__browsing) return(0);
      switch(G__struct.iscpplink[i]) {
      case G__CLINK:
	fprintf(fout,"%-20s " ,"(C compiled)");
	break;
      case G__CPPLINK:
	fprintf(fout,"%-20s " ,"(C++ compiled)");
	break;
      case 1:
	fprintf(fout,"%-20s " ,"(C compiled old 1)");
	break;
      case 2:
	fprintf(fout,"%-20s " ,"(C compiled old 2)");
	break;
      case 3:
	fprintf(fout,"%-20s " ,"(C compiled old 3)");
	break;
      default:
	if (G__struct.filenum[i] == -1)
	  fprintf(fout,"%-20s " ," ");
	else
	  fprintf(fout,"%-15s%5d " ,G__srcfile[G__struct.filenum[i]].filename
		  ,G__struct.line_number[i]);
	break;
      }
      if(G__struct.isbreak[i]) fputc('*',fout);
      else                     fputc(' ',fout);
      if(G__struct.istrace[i]) fputc('-',fout);
      else                     fputc(' ',fout);
#ifndef G__OLDIMPLEMENTATION401
      fprintf(fout," %s ",G__type2string('u',i,-1,0,0));
#else
      fprintf(fout," %s ",G__type2string('u',i,-1,0));
#endif
      baseclass = G__struct.baseclass[i];
      if(baseclass) {
	for(j=0;j<baseclass->basen;j++) {
	  if(baseclass->property[j]&G__ISDIRECTINHERIT) {
	    if(baseclass->property[j]&G__ISVIRTUALBASE) {
	      fprintf(fout,"virtual ");
	    }
	    fprintf(fout,"%s%s "
		    ,G__access2string(baseclass->baseaccess[j])
		    ,G__fulltagname(baseclass->basetagnum[j],0));
	  }
	}
      }
      if('$'==G__struct.name[i][0]) {
	fprintf(fout," (typedef %s)",G__struct.name[i]+1);
      }
      temp[0]='\0';
      G__getcomment(temp,&G__struct.comment[i],i);
      if(temp[0]) fprintf(fout," //%s",temp);
      G__more(fout,"\n");
    }
    return(0);
  }

  /*******************************************************************
  * Detail of a specific class
  *******************************************************************/

  p = name+i+strlen(name+i)-1;
  while(isspace(*p)) {
    *p = '\0';
    --p;
  }

#ifndef G__OLDIMPLEMENTATION556
  if((char*)NULL!=strstr(name+i,">>")) {
    /* dealing with A<A<int>> -> A<A<int> > */
    char *pt1;
    char tmpbuf[G__ONELINE];
    pt1 = strstr(name+i,">>");
    ++pt1;
    strcpy(tmpbuf,pt1);
    *pt1=' ';
    ++pt1;
    strcpy(pt1,tmpbuf);
  }
#endif

  if(isdigit(*(name+i))) tagnum = atoi(name+i);
  else                   tagnum = G__defined_tagname(name+i,0);

  /* no such class,struct */
  if(-1==tagnum||G__struct.alltag<=tagnum) return(0);

  G__more(fout,"===========================================================================\n");
  fprintf(fout,"%s ",G__tagtype2string(G__struct.type[tagnum]));
  fprintf(fout,"%s",G__fulltagname(tagnum,0));
  temp[0]='\0';
  G__getcomment(temp,&G__struct.comment[tagnum],tagnum);
  if(temp[0]) fprintf(fout," //%s",temp);
  G__more(fout,"\n");
  if (G__struct.filenum[tagnum] == -1)
    fprintf(fout," size=0x%x\n" ,G__struct.size[tagnum]);
  else {
    fprintf(fout," size=0x%x FILE:%s LINE:%d\n" ,G__struct.size[tagnum]
	    ,G__srcfile[G__struct.filenum[tagnum]].filename
	    ,G__struct.line_number[tagnum]);
  }
  G__more_pause(fout);
  fprintf(fout
	  ," (tagnum=%d,voffset=%d,isabstract=%d,parent=%d,gcomp=%d,=~cd=%x)"
	  ,tagnum ,G__struct.virtual_offset[tagnum]
	  ,G__struct.isabstract[tagnum] ,G__struct.parent_tagnum[tagnum]
	  ,G__struct.globalcomp[tagnum]
	  ,G__struct.funcs[tagnum]);
  if('$'==G__struct.name[tagnum][0]) {
    fprintf(fout," (typedef %s)",G__struct.name[tagnum]+1);
  }
  G__more(fout,"\n");

  baseclass = G__struct.baseclass[tagnum];

  /* inheritance */
  if(baseclass) {
    G__more(fout,"List of base class--------------------------------------------------------\n");
    G__display_classinheritance(fout,tagnum,"");
  }

  G__more(fout,"List of member variable---------------------------------------------------\n");
  G__display_membervariable(fout,tagnum,base);
  if(!G__browsing) return(0);

  /* member function */
  G__more(fout,"List of member function---------------------------------------------------\n");
  G__display_memberfunction(fout,tagnum,G__PUBLIC_PROTECTED_PRIVATE,base);
  return(0);
}

/****************************************************************
* G__display_typedef()
*
****************************************************************/
int G__display_typedef(fout,name,startin)
FILE *fout;
char *name;
int startin;
{
  int i,j;
  int start,stop;
  char temp[G__ONELINE];

  i=0;
  while(name[i]&&isspace(name[i])) i++;
  if(name[i]) {
    start = G__defined_typename(name+i);
    if(-1==start) {
      fprintf(G__serr,"!!!Type %s not defined\n",name+i);
      return(0);
    }
    stop = start+1;
  }
  else {
    start = startin;
    stop = G__newtype.alltype;
  }

  G__browsing=1;

  G__more(fout,"List of typedefs\n");

  for(i=start;i<stop;i++) {
    if(!G__browsing) return(0);
    if('Q'==G__newtype.type[i]) {
      /* pointer to statuc function */
      fprintf(fout,"typedef void* %s",G__newtype.name[i]);
    }
    else if('a'==G__newtype.type[i]) {
      /* pointer to member */
      fprintf(fout,"typedef G__p2memfunc %s",G__newtype.name[i]);
    }
    else {
#ifndef G__OLDIMPLEMENTATION401
      /* G__typedef may need to be changed to add isconst member */
      fprintf(fout,"typedef %s" ,G__type2string(tolower(G__newtype.type[i])
						,G__newtype.tagnum[i],-1
						,G__newtype.reftype[i]
						,0));  /* isconst */
#else
      fprintf(fout,"typedef %s" ,G__type2string(tolower(G__newtype.type[i])
						,G__newtype.tagnum[i],-1
						,G__newtype.reftype[i]));
#endif
      fprintf(fout," ");
      if(isupper(G__newtype.type[i])&&G__newtype.nindex[i]) {
	if(0<=G__newtype.parent_tagnum[i])
	  fprintf(fout,"(*%s::%s)"
		  ,G__fulltagname(G__newtype.parent_tagnum[i],1)
		  ,G__newtype.name[i]);
	else
	  fprintf(fout,"(*%s)",G__newtype.name[i]);
      }
      else {
	if(isupper(G__newtype.type[i])) fprintf(fout,"*");
	if(0<=G__newtype.parent_tagnum[i])
	  fprintf(fout,"%s::",G__fulltagname(G__newtype.parent_tagnum[i],1));
	fprintf(fout,"%s",G__newtype.name[i]);
      }
      for(j=0;j<G__newtype.nindex[i];j++) {
	fprintf(fout,"[%d]",G__newtype.index[i][j]);
      }
    }
    temp[0]='\0';
    G__getcommenttypedef(temp,&G__newtype.comment[i],i);
    if(temp[0]) fprintf(fout," //%s",temp);
    G__more(fout,"\n");
  }
  return(0);
}

/****************************************************************
* G__display_eachtemplate()
*
****************************************************************/
void G__display_eachtemplate(fout,deftmplt,detail)
FILE *fout;
struct G__Definedtemplateclass *deftmplt;
int detail;
{
  struct G__Templatearg *def_para;
  struct G__Definedtemplatememfunc *memfunctmplt;
  fpos_t store_pos;
  /* char buf[G__LONGLINE]; */
  int c;

#ifndef G__OLDIMPLEMENTATION608
  if(!deftmplt->def_fp) return;
#endif

  fprintf(fout,"%-20s%5d "
	  ,G__srcfile[deftmplt->filenum].filename,deftmplt->line);
  fprintf(fout,"template<");
  def_para=deftmplt->def_para;
  while(def_para) {
    switch(def_para->type) {
    case G__TMPLT_CLASSARG:
      fprintf(fout,"class ");
      break;
    case G__TMPLT_TMPLTARG:
      fprintf(fout,"template<class U> class ");
      break;
    case G__TMPLT_SIZEARG:
      fprintf(fout,"size_t ");
      break;
    default:
#ifndef G__OLDIMPLEMENTATION401
      fprintf(fout,"%s ",G__type2string(def_para->type,-1,-1,0,0));
#else
      fprintf(fout,"%s ",G__type2string(def_para->type,-1,-1,0));
#endif
      break;
    }
    fprintf(fout,"%s",def_para->string);
      def_para=def_para->next;
    if(def_para) fprintf(fout,",");
    else         fprintf(fout,">");
  }
#ifndef G__OLDIMPLEMENTATION682
  fprintf(fout," class ");
  if(-1!=deftmplt->parent_tagnum)
    fprintf(fout,"%s::",G__fulltagname(deftmplt->parent_tagnum,1));
  fprintf(fout,"%s\n",deftmplt->name);
#else
  fprintf(fout," class %s\n",deftmplt->name);
#endif
  G__more_pause(fout);

  if(detail) {
    memfunctmplt = &deftmplt->memfunctmplt;
    while(memfunctmplt->next) {
      fprintf(fout,"%-20s%5d "
	      ,G__srcfile[memfunctmplt->filenum].filename,memfunctmplt->line);
      fgetpos(memfunctmplt->def_fp,&store_pos);
      fsetpos(memfunctmplt->def_fp,&memfunctmplt->def_pos);
      do {
	c=fgetc(memfunctmplt->def_fp);
	if('\n'==c||'\r'==c) fputc(' ',fout);
	else        fputc(c,fout);
      } while(';'!=c && '{'!=c) ;
      fputc('\n',fout);
      G__more_pause(fout);
      fsetpos(memfunctmplt->def_fp,&store_pos);
      memfunctmplt=memfunctmplt->next;
    }
  }
#ifndef G__OLDIMPLEMENTATION691
  if(detail) {
    struct G__IntList *ilist = deftmplt->instantiatedtagnum;
    while(ilist) {
      fprintf(fout,"      %s\n",G__fulltagname(ilist->i,1));
      G__more_pause(fout);
      ilist=ilist->next;
    }
  }
#endif
}

/****************************************************************
* G__display_eachtemplatefunc()
*
****************************************************************/
void G__display_eachtemplatefunc(fout,deftmpfunc)
FILE *fout;
struct G__Definetemplatefunc *deftmpfunc;
{
  struct G__Templatearg *def_para;
  struct G__Templatefuncarg *pfuncpara;
  int i;
  fprintf(fout,"%-20s%5d "
	  ,G__srcfile[deftmpfunc->filenum].filename,deftmpfunc->line);
  fprintf(fout,"template<");
  def_para=deftmpfunc->def_para;
  while(def_para) {
    switch(def_para->type) {
    case G__TMPLT_CLASSARG:
      fprintf(fout,"class ");
      break;
    case G__TMPLT_TMPLTARG:
      fprintf(fout,"template<class U> class ");
      break;
    case G__TMPLT_SIZEARG:
      fprintf(fout,"size_t ");
      break;
    default:
#ifndef G__OLDIMPLEMENTATION401
      fprintf(fout,"%s ",G__type2string(def_para->type,-1,-1,0,0));
#else
      fprintf(fout,"%s ",G__type2string(def_para->type,-1,-1,0));
#endif
      break;
    }
    fprintf(fout,"%s",def_para->string);
    def_para=def_para->next;
    if(def_para) fprintf(fout,",");
    else         fprintf(fout,">");
  }
  fprintf(fout," func %s(",deftmpfunc->name);
  def_para=deftmpfunc->def_para;
  pfuncpara = &deftmpfunc->func_para;
  for(i=0;i<pfuncpara->paran;i++) {
    if(i) fprintf(fout,",");
    if(pfuncpara->argtmplt[i]>0) {
      fprintf(fout,"%s",G__gettemplatearg(pfuncpara->argtmplt[i],def_para));
    }
    else if(pfuncpara->argtmplt[i]<0) {
      if(pfuncpara->typenum[i])
	fprintf(fout,"%s<",G__gettemplatearg(pfuncpara->typenum[i],def_para));
      else
	fprintf(fout,"X<");
      if(pfuncpara->tagnum[i])
	fprintf(fout,"%s>",G__gettemplatearg(pfuncpara->tagnum[i],def_para));
      else
	fprintf(fout,"Y>");
    }
    else {
#ifndef G__OLDIMPLEMENTATION401
      fprintf(fout,"%s",G__type2string(pfuncpara->type[i]
				       ,pfuncpara->tagnum[i]
				       ,pfuncpara->typenum[i]
				       ,pfuncpara->reftype[i]
				       ,0));
#else
      fprintf(fout,"%s",G__type2string(pfuncpara->type[i]
				       ,pfuncpara->tagnum[i]
				       ,pfuncpara->typenum[i]
				       ,pfuncpara->reftype[i]));
#endif
      if(pfuncpara->paradefault[i]) fprintf(fout,"=");
    }
  }
  G__more(fout,");\n");
}

/****************************************************************
* G__display_template()
*
****************************************************************/
void G__display_template(fout,name)
FILE *fout;
char *name;
{
  int i /* ,j */;
  struct G__Definedtemplateclass *deftmplt;
  struct G__Definetemplatefunc *deftmpfunc;
  i=0;
  G__browsing=1;
  while(name[i]&&isspace(name[i])) i++;
  if(name[i]) {
    deftmpfunc = &G__definedtemplatefunc;
    while(deftmpfunc->next) {
      if(strcmp(name+i,deftmpfunc->name)==0)
	G__display_eachtemplatefunc(fout,deftmpfunc);
      deftmpfunc = deftmpfunc->next;
    }
    deftmplt = G__defined_templateclass(name+i);
    if(deftmplt) G__display_eachtemplate(fout,deftmplt,1);
  }
  else {
    deftmplt = &G__definedtemplateclass;
    while(deftmplt->next) {
      if(!G__browsing) return;
      if(strlen(name)) G__display_eachtemplate(fout,deftmplt,1);
      else               G__display_eachtemplate(fout,deftmplt,0);
      deftmplt=deftmplt->next;
    }
    deftmpfunc = &G__definedtemplatefunc;
    while(deftmpfunc->next) {
      G__display_eachtemplatefunc(fout,deftmpfunc);
      deftmpfunc = deftmpfunc->next;
    }
  }
}

/****************************************************************
* G__display_includepath()
*
****************************************************************/
int G__display_includepath(fout)
FILE *fout;
{
  fprintf(fout,"include path: %s\n",G__allincludepath);
  return(0);
}

/****************************************************************
* G__display_macro()
*
****************************************************************/
int G__display_macro(fout,name)
FILE *fout;
char *name;
{
  struct G__Deffuncmacro *deffuncmacro;
  struct G__Charlist *charlist;
  int i=0;

  while(name[i]&&isspace(name[i])) i++;
  if(name[i]) {
    deffuncmacro = &G__deffuncmacro;
    while(deffuncmacro->next) {
      if(deffuncmacro->name && strcmp(deffuncmacro->name,name+i)==0) {
	fprintf(fout,"#define %s(",deffuncmacro->name);
	charlist = &deffuncmacro->def_para;
	while(charlist) {
	  if(charlist->string) fprintf(fout,"%s",charlist->string);
	  charlist=charlist->next;
	  if(charlist && charlist->next) fprintf(fout,",");
	}
	G__more(fout,")\n");
	return(0);
      }
      deffuncmacro=deffuncmacro->next;
    }
    return(0);
  }

  deffuncmacro = &G__deffuncmacro;
  while(deffuncmacro->next) {
    if(deffuncmacro->name) {
      fprintf(fout,"#define %s(",deffuncmacro->name);
      charlist = &deffuncmacro->def_para;
      while(charlist) {
	if(charlist->string) fprintf(fout,"%s",charlist->string);
	charlist=charlist->next;
	if(charlist && charlist->next) fprintf(fout,",");
      }
      G__more(fout,")\n");
    }
    deffuncmacro=deffuncmacro->next;
  }

  fprintf(fout,"command line: %s\n",G__macros);
  G__more_pause(fout);
  return(0);
}

/****************************************************************
* G__display_files()
*
****************************************************************/
int G__display_files(fout)
FILE *fout;
{
  int i;
  for(i=0;i<G__nfile;i++) {
    fprintf(fout,"%3d fp=0x%8lx lines=%-4d file=\"%s\" "
	    ,i,(long)G__srcfile[i].fp,G__srcfile[i].maxline
	    ,G__srcfile[i].filename);
    if(G__srcfile[i].prepname) fprintf(fout,"cppfile=\"%s\""
				       ,G__srcfile[i].prepname);
    /* fprintf(fout," q%x",G__srcfile[i].security); */
    fputc('\n',fout);
    G__more_pause(fout);
  }
  fprintf(fout,"G__MAXFILE = %d\n",G__MAXFILE);
  G__more_pause(fout);
  return(0);
}

/********************************************************************
* G__pr
*
*  print source file
*
********************************************************************/
int G__pr(fout,view)
FILE *fout;
struct G__input_file view;
{
  int center,thisline,filenum;
  char G__oneline[G__LONGLINE*2];
  int top,bottom,screen,line=0;
  fpos_t store_fpos;
  /* char original[G__MAXFILENAME]; */
  FILE *G__fp;
  int tempopen;
  char *lines;

  if(G__srcfile[view.filenum].prepname||(FILE*)NULL==view.fp) {
    /*************************************************************
     * using C preprocessor , re-open original .c file
     *************************************************************/
    if((char*)NULL==G__srcfile[view.filenum].filename) {
      G__genericerror("Error: File maybe unloaded");
      return(0);
    }
    G__fp = fopen(G__srcfile[view.filenum].filename,"r");
    tempopen=1;
  }
  else {
    /*************************************************************
     * store current file position and rewind file to the beginning
     *************************************************************/
    G__fp=view.fp;
    fgetpos(G__fp,&store_fpos);
    fseek(G__fp,0,SEEK_SET);
    tempopen=0;
  }

  /*************************************************************
   * If no file, print error message and return
   *************************************************************/
  if(G__fp==NULL) {
    fprintf(stdout,"Filename not specified. Can not display source!\n");
    return(0);
  }

  /*************************************************************
   * set center and thisline
   *************************************************************/
  filenum = view.filenum;
  center = view.line_number;
  thisline=center;

  /*************************************************************
   * Get screensize
   *************************************************************/
#if defined(__hpux) || defined(__GNUC__)
  lines = getenv("LINES");
  if(lines) screen = atoi(lines);
  else      screen = 24;
#else
  screen=24;
#endif
  if(screen<=0) screen=24;

  if(0==view.line_number) {
    top=0;
    bottom=1000000;
  }
  else {
    top=center-screen/2;
    if( top < 0) top=0;
    bottom=top+screen;
  }

  /********************************************************
   * Read lines until end of file
   ********************************************************/
  while(G__readsimpleline(G__fp,G__oneline)!=0) {
    /************************************************
     *  If input line is "abcdefg hijklmn opqrstu"
     *
     *           arg[0]
     *             |
     *     +-------+-------+
     *     |       |       |
     *  abcdefg hijklmn opqrstu
     *     |       |       |
     *   arg[1]  arg[2]  arg[3]    argn=3
     *
     ************************************************/
    line++;
    if(line>=bottom) break;
    if(top<line) {
      fprintf(fout,"%d",line);
      if(G__srcfile[filenum].breakpoint && G__srcfile[filenum].maxline>line) {
	if(G__BREAK&G__srcfile[filenum].breakpoint[line])
	  fprintf(fout,"*");
	else if(G__TRACED&G__srcfile[filenum].breakpoint[line])
	  fprintf(fout,"-");
	else
	  fprintf(fout," ");
      }
      else
	fprintf(fout," ");
	
      if(line==thisline) fprintf(fout,">");
      else               fprintf(fout," ");
      fprintf(fout,"\t%s\n",G__oneline);
    }
  }

  /*************************************************************
   * After reading file
   *************************************************************/
  if(tempopen) {
    /************************************************
     * close .c file
     ************************************************/
    fclose(G__fp);
  }
  else {
    /************************************************
     * restore file position
     ************************************************/
    fsetpos(G__fp,&store_fpos);
  }

  return(1);
}
/********************************************************************
* end of G__pr
********************************************************************/


/***********************************************************************
* G__dump_tracecoverage()
*
***********************************************************************/
int G__dump_tracecoverage(fout)
FILE *fout;
{
  int iarg;
  struct G__input_file view;
  for(iarg=0;iarg<G__nfile;iarg++) {
    if(G__srcfile[iarg].fp) {
      view.line_number=0;
      view.filenum=iarg;
      view.fp=G__srcfile[iarg].fp;
      strcpy(view.name,G__srcfile[iarg].filename);
      fprintf(fout
	      ,"%s trace coverage==========================================\n"
	      ,view.name);
      G__pr(fout,view);
    }
  }
  return(0);
}

#ifndef G__OLDIMPLEMENTATION444
/******************************************************************
* void G__objectmonitor()
*
******************************************************************/
void G__objectmonitor(fout,pobject,tagnum,addspace)
FILE *fout;
long pobject;
int tagnum;
char *addspace;
{
  struct G__inheritance *baseclass;
  char space[G__ONELINE];
  int i;

  sprintf(space,"%s  ",addspace);

  baseclass = G__struct.baseclass[tagnum];
  for(i=0;i<baseclass->basen;i++) {
    if(baseclass->property[i]&G__ISDIRECTINHERIT) {
      if(baseclass->property[i]&G__ISVIRTUALBASE) {
	if(0>G__getvirtualbaseoffset(pobject,tagnum,baseclass,i)) {
	  fprintf(fout,"%s-0x%-7lx virtual ",space
		  ,-1*G__getvirtualbaseoffset(pobject,tagnum,baseclass,i));
	}
	else {
	  fprintf(fout,"%s0x%-8lx virtual ",space
		  ,G__getvirtualbaseoffset(pobject,tagnum,baseclass,i));
	}
	switch(baseclass->baseaccess[i]) {
	case G__PRIVATE:   fprintf(fout,"private: "); break;
	case G__PROTECTED: fprintf(fout,"protected: "); break;
	case G__PUBLIC:    fprintf(fout,"public: "); break;
	}
	fprintf(fout,"%s\n",G__fulltagname(baseclass->basetagnum[i],1));
	G__more_pause(fout);
#ifdef G__NEVER_BUT_KEEP
	G__objectmonitor(fout
			 ,pobject+(*(long*)(pobject+baseclass->baseoffset[i]))
			 ,baseclass->basetagnum[i],space);
#endif
      }
      else {
	fprintf(fout,"%s0x%-8lx ",space ,baseclass->baseoffset[i]);
	switch(baseclass->baseaccess[i]) {
	case G__PRIVATE:   fprintf(fout,"private: "); break;
	case G__PROTECTED: fprintf(fout,"protected: "); break;
	case G__PUBLIC:    fprintf(fout,"public: "); break;
	}
	fprintf(fout,"%s\n",G__fulltagname(baseclass->basetagnum[i],1));
	G__more_pause(fout);
	G__objectmonitor(fout
			 ,pobject+baseclass->baseoffset[i]
			 ,baseclass->basetagnum[i],space);
      }
    }
  }
  G__incsetup_memvar(tagnum);
  G__varmonitor(fout,G__struct.memvar[tagnum],"",space,pobject);
}
#endif

/******************************************************************
* void G__varmonitor()
*
******************************************************************/
void G__varmonitor(fout,var,index,addspace,offset)
FILE *fout;
struct G__var_array *var;
char *index;
char *addspace;
long offset;
{
  int imon1;
  long addr;
  char space[50];
  char temp[G__ONELINE];
  int startindex,stopindex;
  int precompiled_private;


  if((struct G__var_array *)NULL == var) {
    fprintf(G__serr,"No variable table\n");
    return;
  }

  if(index[0]=='\0') {
    startindex=0;
    stopindex=var->allvar;
  }
  else {
    if(isdigit(index[0])) {
      fprintf(G__serr,"variable name must be specified\n");
      return;
    }
    else {
    search_again:
      startindex=0;
      while((strcmp(index,var->varnamebuf[startindex])!=0)&&
	    (startindex<var->allvar)) {
	startindex++;
      }
      if(startindex==var->allvar&&var->next) {
	var=var->next;
	goto search_again;
      }
      if(startindex>=var->allvar) {
	fprintf(fout,"Variable %s not found\n"
		,index);
	return;
      }
    }
    stopindex=startindex+1;
  }

  sprintf(space,"%s  ",addspace);

  G__browsing=1;

  for(imon1=startindex;imon1<stopindex;imon1++) {

    if(!G__browsing) return;

#ifndef G__OLDIMPLEMENTATION546
    if(0==var->hash[imon1]) continue;
#endif

    if(G__LOCALSTATIC==var->statictype[imon1] && offset) addr=var->p[imon1];
    else addr=offset+var->p[imon1];

#ifdef G__VARIABLEFPOS
    if(var->filenum[imon1]>=0)
      fprintf(fout,"%-20s ",G__srcfile[var->filenum[imon1]].filename);
    else
      fprintf(fout,"%-20s ","(compiled)");
#endif
    fprintf(fout,"%s",addspace);
    fprintf(fout,"0x%-8lx ",var->p[imon1]);

#ifndef G__NEWINHERIT
    if(var->isinherit[imon1]) fprintf(fout,"inherited ");
#endif

    precompiled_private=0;

    switch(var->access[imon1]) {
    case G__PUBLIC:
      /* fprintf(fout,"public: "); */
      break;
    case G__PROTECTED:
      fprintf(fout,"protected: ");
      if(-1!=var->tagnum && G__CPPLINK==G__struct.iscpplink[var->tagnum]) {
	precompiled_private=1;
      }
      break;
    case G__PRIVATE:
      fprintf(fout,"private: ");
      if(-1!=var->tagnum && G__CPPLINK==G__struct.iscpplink[var->tagnum]) {
	precompiled_private=1;
      }
      break;
    }
    switch(var->statictype[imon1]) {
    case G__COMPILEDGLOBAL : /* compiled global variable */
    case G__AUTO : /* auto */
      break;
    case G__LOCALSTATIC : /* static for function */
      fprintf(fout,"static ");
      break;
    case G__LOCALSTATICBODY : /* body for function static */
      fprintf(fout,"body of static ");
      break;
    default : /* static for file 0,1,2,... */
      if(var->statictype[imon1]>=0) { /* bug fix */
	fprintf(fout,"file=%s static "
		,G__srcfile[var->statictype[imon1]].filename);
      }
      else {
        fprintf(fout,"static ");
      }
      break;
    }

#ifndef G__OLDIMPLEMENTATION401
    fprintf(fout,"%s"
	    ,G__type2string((int)var->type[imon1],var->p_tagtable[imon1]
			    ,var->p_typetable[imon1],var->reftype[imon1]
			    ,var->constvar[imon1]));
#else
    fprintf(fout,"%s"
	    ,G__type2string((int)var->type[imon1],var->p_tagtable[imon1]
			    ,var->p_typetable[imon1],var->reftype[imon1]));
#endif
    fprintf(fout," ");
    fprintf(fout,"%s",var->varnamebuf[imon1]);
    if(var->varlabel[imon1][1]) fprintf(fout,"[]");

#ifndef G__OLDIMPLEMENTATION401
    if(var->bitfield[imon1]) {
      fprintf(fout," : %d (%d)",var->bitfield[imon1]
	      ,var->varlabel[imon1][G__MAXVARDIM-1]);
    }
#endif

    if(-1!=offset && 0==precompiled_private && addr) {
      if(0==var->varlabel[imon1][1]) {
	switch(var->type[imon1]) {
#ifndef G__OLDIMPLEMENTATION904
	case 'T': fprintf(fout,"=\"%s\"",*(char**)addr); break;
#endif
	case 'm': break;
	case 'p':
	case 'o': fprintf(fout,"=%d",*(int*)addr); break;
	case 'P':
	case 'O': fprintf(fout,"=%g",*(double*)addr); break;
	case 'u':
	  fprintf(fout," , size=%d",G__struct.size[var->p_tagtable[imon1]]);
	  temp[0]='\0';
	  G__getcomment(temp,&var->comment[imon1],var->tagnum);
	  if(temp[0]) fprintf(fout," //%s",temp);
	  G__more(fout,"\n");
	  G__incsetup_memvar(var->p_tagtable[imon1]);
	  G__varmonitor(fout,G__struct.memvar[var->p_tagtable[imon1]]
			,"",space,addr);
	  break;
	case 'b': fprintf(fout,"=%d",*(unsigned char*)addr); break;
	case 'c': fprintf(fout,"=%d ('%c')",*(char*)addr,*(char*)addr); break;
	case 's': fprintf(fout,"=%d",*(short*)addr); break;
	case 'r': fprintf(fout,"=%d",*(unsigned short*)addr); break;
	case 'i': fprintf(fout,"=%d",*(int*)addr); break;
	case 'h': fprintf(fout,"=%d",*(unsigned int*)addr); break;
#ifndef G__FONS31
	case 'l': fprintf(fout,"=%ld",*(long*)addr); break;
	case 'k': fprintf(fout,"=0x%lx",*(unsigned long*)addr); break;
#else
	case 'l': fprintf(fout,"=%d",*(long*)addr); break;
	case 'k': fprintf(fout,"=0x%x",*(unsigned long*)addr); break;
#endif
	case 'f': fprintf(fout,"=%g",*(float*)addr); break;
	case 'd': fprintf(fout,"=%g",*(double*)addr); break;
#ifndef G__FONS31
	default: fprintf(fout,"=0x%lx",*(long*)addr); break;
#else
	default: fprintf(fout,"=0x%x",*(long*)addr); break;
#endif
	}
	if('u'!=var->type[imon1]) G__more(fout,"\n");
      }
      else {
	switch(var->type[imon1]) {
	case 'c':
#ifndef G__FONS31
	  if(isprint(*(char*)addr))
	    fprintf(fout,"=0x%lx=\"%s\"",addr,(char*)addr);
	  else
	    fprintf(fout,"=0x%lx",addr);
#else
	  if(isprint(*(char*)addr))
	    fprintf(fout,"=0x%x=\"%s\"",addr,(char*)addr);
	  else
	    fprintf(fout,"=0x%x",addr);
#endif
	  break;
#ifndef G__FONS31
	default: fprintf(fout,"=0x%lx",addr); break;
#else
	default: fprintf(fout,"=0x%x",addr); break;
#endif
	}
	temp[0]='\0';
	G__getcomment(temp,&var->comment[imon1],var->tagnum);
	if(temp[0]) fprintf(fout," //%s",temp);
	G__more(fout,"\n");
      }
    }
    else {
      if('u'==var->type[imon1]) {
	fprintf(fout," , size=%d",G__struct.size[var->p_tagtable[imon1]]);
	temp[0]='\0';
	G__getcomment(temp,&var->comment[imon1],var->tagnum);
	if(temp[0]) fprintf(fout," //%s",temp);
	G__more(fout,"\n");
	G__incsetup_memvar(var->p_tagtable[imon1]);
	G__varmonitor(fout,G__struct.memvar[var->p_tagtable[imon1]]
		      ,"",space,offset);
      }
      else {
	temp[0]='\0';
	G__getcomment(temp,&var->comment[imon1],var->tagnum);
	if(temp[0]) fprintf(fout," //%s",temp);
	G__more(fout,"\n");
      }
    }
  }

  if((var->next)&&(index[0]=='\0')) {
    G__varmonitor(fout,var->next,index,addspace,offset);
  }
}


#ifndef G__OLDIMPLEMENTATION562
#ifdef G__WIN32
/**************************************************************************
***************************************************************************
* Create new console window and re-open stdio ports
***************************************************************************
**************************************************************************/
#include <windows.h>

/**************************************************************************
* Undefine special macros
**************************************************************************/
#undef printf
#undef fprintf
#undef fputc
#undef putc
#undef putchar
#undef fputs
#undef puts
#undef fgets
#undef gets
#ifndef G__OLDIMPLEMENTATION614
#undef signal
#endif

/**************************************************************************
* status flags
**************************************************************************/
#ifdef G__SPECIALSTDIO
static int G__autoconsole=1;
static int G__isconsole=0;
#else
static int G__autoconsole=0;
static int G__isconsole=1;
#endif
static int G__lockstdio=0;


#ifndef G__OLDIMPLEMENTATION614
static int G__masksignal=0;

/**************************************************************************
* G__signal()
**************************************************************************/
#ifndef G__SYMANTEC
G__signaltype G__signal(sgnl,f)
#else
void* G__signal(sgnl,f)
#endif
int sgnl;
void (*f) G__P((int));
{
  if(!G__masksignal) return(signal(sgnl,f));
#ifndef G__SYMANTEC
  else               return((G__signaltype)1);
#else
  else               return((void*)1);
#endif
}

/**************************************************************************
* G__setmasksignal()
**************************************************************************/
int G__setmasksignal(masksignal)
int masksignal;
{
  G__masksignal=masksignal;
}
#endif /* ON614 */

/**************************************************************************
* G__setautoconsole()
**************************************************************************/
void G__setautoconsole(autoconsole)
int autoconsole;
{
  G__autoconsole=autoconsole;
  G__isconsole=0;
}

/**************************************************************************
* G__AllocConsole()
**************************************************************************/
int G__AllocConsole()
{
  BOOL result=TRUE;
  if(0==G__isconsole) {
    result=FreeConsole();
    result = AllocConsole();
    SetConsoleTitle("CINT : C++ interpreter");
    G__isconsole=1;
    if(TRUE==result) {
      G__stdout=G__sout=freopen("CONOUT$","w",stdout);
      G__stderr=G__serr=freopen("CONOUT$","w",stderr);
      G__stdin=G__sin=freopen("CONIN$","r",stdin);
#ifndef G__OLDIMPLEMENTATION713
      G__update_stdio();
#endif
    }
  }
  return result;
}

/**************************************************************************
* G__FreeConsole()
**************************************************************************/
int G__FreeConsole()
{
  BOOL result=TRUE;
  if(G__isconsole && !G__lockstdio) {
    G__isconsole=0;
    result=FreeConsole();
  }
  else {
    result=FALSE;
  }
  return result;
}

/**************************************************************************
* G__printf()
**************************************************************************/
int G__printf(char *fmt,...)
{
  int result;
  va_list argptr;
  va_start(argptr,fmt);
  G__lockstdio=1;
  if(G__autoconsole&&0==G__isconsole) G__AllocConsole();
  result = vprintf(fmt,argptr);
  G__lockstdio=0;
  va_end(argptr);
  return(result);
}


/**************************************************************************
* G__fprintf()
**************************************************************************/
int G__fprintf(FILE *fp,char *fmt,...)
{
  int result;
  va_list argptr;
  va_start(argptr,fmt);
  G__lockstdio=1;
  if(stdout==fp||stderr==fp) {
    if(G__autoconsole&&0==G__isconsole) G__AllocConsole();
  }
  result = vfprintf(fp,fmt,argptr);
  G__lockstdio=0;
  va_end(argptr);
  return(result);
}

/**************************************************************************
* G__fputc()
**************************************************************************/
int G__fputc(int character,FILE *fp)
{
  int result;
  G__lockstdio=1;
  if(stdout==fp||stderr==fp) {
    if(G__autoconsole&&0==G__isconsole) G__AllocConsole();
  }
  result=fputc(character,fp);
  G__lockstdio=0;
  return(result);
}

/**************************************************************************
* G__putchar()
**************************************************************************/
int G__putchar(int character)
{
   int result;
   G__lockstdio=1;
   if(G__autoconsole&&0==G__isconsole) G__AllocConsole();
   result=putchar(character);
   G__lockstdio=0;
   return(result);
}

/**************************************************************************
* G__fputs()
**************************************************************************/
int G__fputs(char *string,FILE *fp)
{
  int result;
  G__lockstdio=1;
  if(stdout==fp||stderr==fp) {
    if(G__autoconsole&&0==G__isconsole) G__AllocConsole();
  }
  result=fputs(string,fp);
  G__lockstdio=0;
  return(result);
}

/**************************************************************************
* G__puts()
**************************************************************************/
int G__puts(char *string)
{
   int result;
   G__lockstdio=1;
   if(G__autoconsole&&0==G__isconsole) G__AllocConsole();
   result=puts(string);
   G__lockstdio=0;
   return(result);
}

/**************************************************************************
* G__fgets()
**************************************************************************/
char *G__fgets(char *string,int n,FILE *fp)
{
  char *result;
  G__lockstdio=1;
  if(fp==stdin) {
    if(G__autoconsole&&0==G__isconsole) G__AllocConsole();
  }
  result=fgets(string,n,fp);
  G__lockstdio=0;
  return(result);
}
/**************************************************************************
* G__gets()
**************************************************************************/
char *G__gets(char *buffer)
{
   char *result;
   G__lockstdio=1;
   if(G__autoconsole&&0==G__isconsole) G__AllocConsole();
   result=gets(buffer);
   G__lockstdio=0;
   return(result);
}

#else /* G__WIN32 */

/**************************************************************************
* G__setautoconsole()
**************************************************************************/
void G__setautoconsole(autoconsole)
int autoconsole;
{
  autoconsole=autoconsole; /* no effect */
}

/**************************************************************************
* G__AllocConsole()
**************************************************************************/
int G__AllocConsole()
{
  return(0);
}

/**************************************************************************
* G__FreeConsole()
**************************************************************************/
int G__FreeConsole()
{
  return(0);
}

#endif /* G__WIN32 */
#endif /* ON562 */


/*
 * Local Variables:
 * c-tab-always-indent:nil
 * c-indent-level:2
 * c-continued-statement-offset:2
 * c-brace-offset:-2
 * c-brace-imaginary-offset:0
 * c-argdecl-indent:0
 * c-label-offset:-2
 * compile-command:"make -k"
 * End:
 */
