/*CMZ :  2.24/05 16/05/2000  12.03.57  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/
#ifndef G__REGEX_H
#define G__REGEX_H
/*
*  regex.h dummy file
*/

class regex_t {
  regex_t() {fprintf(stderr,"Limitation: regex not supported\n");}
};

int regcomp()
{
}

int regexec()
{
}

void regfree()
{
}

#endif
