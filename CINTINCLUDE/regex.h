/*CMZ :  2.22/10 23/07/99  14.42.26  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
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
