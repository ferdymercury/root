/*CMZ :  2.21/08 17/03/99  13.13.52  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   17/03/99*/
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
