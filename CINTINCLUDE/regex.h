/*CMZ :  2.20/04 08/12/98  16.25.42  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   08/12/98*/
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
