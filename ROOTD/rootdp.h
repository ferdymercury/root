//*CMZ :  2.20/00 08/11/98  12.14.36  by  Rene Brun
//*CMZ :  1.03/04 30/09/97  12.39.02  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/08/97

#ifndef ROOT_rootdp
#define ROOT_rootdp

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// rootdp                                                               //
//                                                                      //
// This header file contains private definitions and declarations       //
// used by rootd.                                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "Varargs.h"
#include "MessageTypes.h"
#include "rootd.h"

extern int  gInetdFlag;
extern int  gPort;
extern int  gDebug;
extern int  gSockFd;
extern int  gAuth;
extern int  gFd;
extern char gFile[];
extern char gOption[];

extern double  gBytesRead;
extern double  gBytesWritten;
extern double  gBytesSent;
extern double  gBytesRecv;


void DaemonStart(int ignsigcld);

void ErrorInit(const char *ident);
void ErrorInfo(const char *va_(fmt), ...);
void ErrorSys(ERootdErrors code, const char *va_(fmt), ...);
void ErrorFatal(ERootdErrors code, const char *va_(fmt), ...);

void NetInit(const char *service, int port);
int  NetOpen(int inetdflag);
void NetClose();
void NetSetOptions();
int  NetSendRaw(const void *buf, int len);
int  NetSend(const void *buf, int len, EMessageTypes kind);
int  NetSend(int code, EMessageTypes kind);
int  NetSend(const char *msg, EMessageTypes kind);
int  NetSendAck();
int  NetSendError(ERootdErrors err);
int  NetRecvRaw(void *buf, int len);
int  NetRecv(void *&buf, int &len, EMessageTypes &kind);
int  NetRecv(char *msg, int len, EMessageTypes &kind);

void RootdClose();
int  RootdIsOpen();

#endif
