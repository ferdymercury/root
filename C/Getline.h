/*CMZ :  1.03/02 23/08/97  08.33.56  by  Fons Rademakers*/
/*-- Author :    Fons Rademakers   21/04/95*/

#ifndef _GETLINE_
#define _GETLINE_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { kInit = -1, kLine1, kOneChar, kCleanUp } EGetLineMode;

char *Getline(char *prompt);
char *Getlinem(EGetLineMode mode, char *prompt);
void Gl_config(const char *which, int value);
void Gl_setwidth(int width);
void Gl_windowchanged();
void Gl_histinit(char *file);
void Gl_histadd(char *buf);

char *strip(char *line);

extern int (*gl_in_hook)(char *buf);
extern int (*gl_out_hook)(char *buf);
extern int (*gl_tab_hook)(char *buf, int prompt_width, int *cursor_loc);

#ifdef __cplusplus
}
#endif

#endif   /* _GETLINE_ */
