/*CMZ :  2.20/04 08/12/98  16.25.42  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
/* /% C++ %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * I/O stream header file iostream.h
 ************************************************************************
 * Description:
 *  CINT iostream header file
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

#ifndef G__IOSTREAM_H

/*********************************************************************
* Try initializaing precompiled iostream library
*********************************************************************/
#pragma setstream
#pragma ifdef G__IOSTREAM_H
#pragma include <iosenum.h>
#pragma endif

#include <bool.h>

/*********************************************************************
* Use fake iostream only if precompiled version does not exist.
*********************************************************************/
#pragma if !defined(G__IOSTREAM_H) // && !defined(__cplusplus)
#define G__IOSTREAM_H

#pragma security level0

#include <stdio.h>

/*********************************************************************
* ios
*
*********************************************************************/
typedef long streamoff;
typedef long streampos;
class io_state;
class streambuf;
class fstreambase;
enum seek_dir{ };
class ios {
      public:
	// enum seek_dir { };
	static int in ;
	static int out ;
	static int app ;
	static int ate ;
	static int goodbit ;
	static int badbit ;
	static int failbit ;
	static int eofbit ;
};


/*********************************************************************
* ostream
*
*********************************************************************/

class ostream {
	FILE *fout;
      public:
	ostream(FILE *setfout) { fout=setfout; }
	ostream(char *fname) ;
	~ostream() ;
	void close() { if(fout) fclose(fout); fout=NULL;}
	void flush() { if(fout) fflush(fout); }
	FILE *fp() { return(fout); }

	ostream& operator <<(char c);
	ostream& operator <<(char *s);
	ostream& operator <<(long i);
	ostream& operator <<(unsigned long i);
	ostream& operator <<(double d);
	ostream& operator <<(void *p);
	ostream& form(char *format ...);
};

ostream::~ostream()
{
	if(fout!=stderr && fout!=stdout && fout!=NULL) {
		fclose(fout);
	}
}

ostream::ostream(char *fname)
{
	fout = fopen(fname,"w");
	if(fout==NULL) {
		fprintf(stderr,"%s can not open\n",fname);
	}
}

ostream& ostream::operator <<(char c)
{
	fprintf(fout,"%c",c);
	return(*this);
}

ostream& ostream::operator <<(char *s)
{
	fprintf(fout,"%s",s);
	return(*this);
}

ostream& ostream::operator <<(long i)
{
	fprintf(fout,"%d",i);
	return(*this);
}

ostream& ostream::operator <<(unsigned long i)
{
	fprintf(fout,"%u",i);
	return(*this);
}

ostream& ostream::operator <<(double d)
{
	fprintf(fout,"%g",d);
	return(*this);
}

ostream& ostream::operator <<(void *p)
{
	printf("0x%x",p);
	return(*this);
}

/* instanciation of cout,cerr */
ostream cout=ostream(stdout);
ostream cerr=ostream(stderr);


/*********************************************************************
* istream
*
*********************************************************************/

class istream {
	FILE *fin;
	ostream *tie;
      public:
	istream(FILE *setfin) { fin = setfin; tie=(ostream*)NULL; }
	istream(char *fname);
	~istream();
	void close() { if(fin) fclose(fin); fin=NULL;}
	ostream& tie(ostream& cx);
	FILE *fp() { return(fin); }

	istream& operator >>(char& c);
	istream& operator >>(char *s);
	istream& operator >>(short& s);
	istream& operator >>(int& i);
	istream& operator >>(long& i);
	istream& operator >>(unsigned char& c);
	istream& operator >>(unsigned short& s);
	istream& operator >>(unsigned int& i);
	istream& operator >>(unsigned long& i);
	istream& operator >>(double& d);
	istream& operator >>(float& d);
};

istream::~istream()
{
	if(fin!=stdin && fin!=NULL) {
		fclose(fin);
	}
}

istream::istream(char *fname)
{
	fin = fopen(fname,"r");
	if(fin==NULL) {
		fprintf(stderr,"%s can not open\n",fname);
	}
	tie=(ostream*)NULL;
}


ostream& istream::tie(ostream& cx)

{
	ostream *tmp;
	tmp=tie;
	tie = &cx;
	return(*tmp);
}

istream& istream::operator >>(char& c)
{
	if(tie) tie->flush();
	c=fgetc(fin);
	return(*this);
}

istream& istream::operator >>(char *s)
{
	if(tie) tie->flush();
	fscanf(fin,"%s",s);
	return(*this);
}

istream& istream::operator >>(short& s)
{
	if(tie) tie->flush();
	fscanf(fin,"%hd",&s);
	return(*this);
}

istream& istream::operator >>(int& i)
{
	if(tie) tie->flush();
	fscanf(fin,"%d",&i);
	return(*this);
}

istream& istream::operator >>(long& i)
{
	if(tie) tie->flush();
	fscanf(fin,"%ld",&i);
	return(*this);
}

istream& istream::operator >>(unsigned char& c)
{
	int i;
	if(tie) tie->flush();
	fscanf(fin,"%u",&i);
	c = i;
	return(*this);
}
istream& istream::operator >>(unsigned short& s)
{
	if(tie) tie->flush();
	fscanf(fin,"%hu",&s);
	return(*this);
}
istream& istream::operator >>(unsigned int& i)
{
	if(tie) tie->flush();
	fscanf(fin,"%u",&i);
	return(*this);
}
istream& istream::operator >>(unsigned long& i)
{
	if(tie) tie->flush();
	fscanf(fin,"%lu",&i);
	return(*this);
}

istream& istream::operator >>(float& f)
{
	if(tie) tie->flush();
	fscanf(fin,"%g",&f);
	return(*this);
}

istream& istream::operator >>(double& d)
{
	if(tie) tie->flush();
	fscanf(fin,"%lg",&d);
	return(*this);
}

/* instanciation of cin */
istream cin=istream(stdin);

/*********************************************************************
* iostream
*
*********************************************************************/
class iostream : public istream , public ostream {
 public:
  iostream(FILE *setfin) : istream(setfin), ostream(setfin) { }
  iostream(char *fname) : istream(fname), ostream(fname) { }
};


/*********************************************************************
* ofstream, ifstream
*
*********************************************************************/

class fstream;

class ofstream : public ostream {
 public:
  ofstream(FILE* setfin) : ostream(setfin) { }
  ofstream(char* fname) : ostream(fname) { }
};

class ifstream : public istream {
 public:
  ifstream(FILE* setfin) : istream(setfin) { }
  ifstream(char* fname) : istream(fname) { }
};

class iofstream : public iostream {
 public:
  iofstream(FILE* setfin) : iostream(setfin) { }
  iofstream(char* fname) : iostream(fname) { }
};


ostream& flush(ostream& i) {i.flush(); return(i);}
ostream& endl(ostream& i) {return i << '\n' << flush;}
ostream& ends(ostream& i) {return i << '\0';}
istream& ws(istream& i) {
  fprintf(stderr,"Limitation: ws,WS manipurator not supported\n");
  return(i);
}
istream& WS(istream& i) {
  fprintf(stderr,"Limitation: ws,WS manipurator not supported\n");
  return(i);
}

#pragma endif /* G__IOSTREAM_H */

ostream& ostream::form(char *format ...) {
  char temp[1024];
  return(*this<<G__charformatter(0,temp));
}

/*********************************************************************
* iostream manipurator emulation
*
*  Following description must be deleted when pointer to compiled
* function is fully supported.
*********************************************************************/
class G__CINT_ENDL { int dmy; } endl;
ostream& operator<<(ostream& ostr,G__CINT_ENDL& i) {return(endl(ostr));}

class G__CINT_ENDS { int dmy; } ends;
ostream& operator<<(ostream& ostr,G__CINT_ENDS& i) {return(ends(ostr));}

class G__CINT_FLUSH { int dmy; } flush;
ostream& operator<<(ostream& ostr,G__CINT_FLUSH& i) {return(flush(ostr));}

class G__CINT_ws { int dmy; } ws;
istream& operator>>(istream& istr,G__CINT_ws& i) {return(ws(istr));}

class G__CINT_WS { int dmy; } WS;
istream& operator>>(istream& istr,G__CINT_WS& i) {return(WS(istr));}

class G__CINT_HEX { int dmy; } hex;
ostream& operator<<(ostream& ostr,G__CINT_HEX& i) {
  ostr.setf(ios::hex);
  return(ostr);
}
istream& operator>>(istream& istr,G__CINT_HEX& i) {
  istr.setf(ios::hex);
  return(istr);
}

class G__CINT_DEC { int dmy; } dec;
ostream& operator<<(ostream& ostr,G__CINT_DEC& i) {
  ostr.setf(ios::dec);
  return(ostr);
}
istream& operator>>(istream& istr,G__CINT_DEC& i) {
  istr.setf(ios::dec);
  return(istr);
}

class G__CINT_OCT { int dmy; } oct;
ostream& operator<<(ostream& ostr,G__CINT_OCT& i) {
  ostr.setf(ios::oct);
  return(ostr);
}
istream& operator>>(istream& istr,G__CINT_OCT& i) {
  istr.setf(ios::oct);
  return(istr);
}

class G__CINT_NOSUPPORT { int dmy; } ;
ostream& operator<<(ostream& ostr,G__CINT_NOSUPPORT& i) {
  fprintf(stderr,"Limitation: dec,hex,oct manipurator not supported\n");
  return(ostr);
}
istream& operator<<(istream& istr,G__CINT_NOSUPPORT& i) {
  fprintf(stderr,"Limitation: dec,hex,oct manipurator not supported\n");
  return(istr);
}

// Value evaluation
//#include <ertti>
template<class T>
int G__ateval(const T& x) {
  //cout << "(" << typeid(x).name() << ")" << x << endl;
  return(0);
}

#endif
