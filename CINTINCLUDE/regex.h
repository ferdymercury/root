/*CMZ :  2.23/10 10/12/99  18.00.16  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
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
