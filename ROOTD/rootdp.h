//*CMZ :  2.23/09 19/11/99  13.28.23  by  Fons Rademakers
//*CMZ :  2.20/00 08/11/98  12.14.36  by  Rene Brun
//*CMZ :  1.03/04 30/09/97  12.39.02  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/08/97

#ifndef ROOT_rootdp
#define ROOT_rootdp

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
int  GetErrno();
void ResetErrno();

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
