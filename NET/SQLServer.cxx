//*CMZ :  2.23/12 26/01/2000  18.36.51  by  Fons Rademakers
//*CMZ :  2.23/09 25/11/99  18.08.58  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/11/99

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
// TSQLServer                                                           //
//                                                                      //
// Abstract base class defining interface to a SQL server.              //
//                                                                      //
// To open a connection to a server use the static method Connect().    //
// The db argument of Connect() is of the form:                         //
//    <dbms>://<host>[:<port>][/<database>], e.g.                       //
// mysql://pcroot.cern.ch:3456/test, oracle://srv1.cern.ch/main, ...    //
// Depending on the <dbms> specified an appropriate plugin library      //
// will be loaded which will provide the real interface.                //
//                                                                      //
// Related classes are TSQLResult and TSQLRow.                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TSQLServer.h"
#include "TROOT.h"


ClassImp(TSQLServer)

//______________________________________________________________________________
TSQLServer *TSQLServer::Connect(const char *db, const char *uid, const char *pw)
{
   // The db should be of the form:  <dbms>://<host>[:<port>][/<database>],
   // e.g.:  mysql://pcroot.cern.ch:3456/test, oracle://srv1.cern.ch/main, ...
   // The uid is the username and pw the password that should be used for
   // the connection. Depending on the <dbms> the shared library (plugin)
   // for the selected system will be loaded. When the connection could not
   // be opened 0 is returned.

   TSQLServer *serv = 0;

   if (!strncmp(db, "mysql", 5)) {
      if (gROOT->LoadClass("TMySQLServer", "MySQL"))
         return 0;
      serv = (TSQLServer *) gROOT->ProcessLineFast(Form(
             "new TMySQLServer(\"%s\", \"%s\", \"%s\")", db, uid, pw));
   } else if (!strncmp(db, "oracle", 6)) {
      if (gROOT->LoadClass("TOracleServer", "Oracle"))
         return 0;
      serv = (TSQLServer *) gROOT->ProcessLineFast(Form(
             "new TOracleServer(\"%s\", \"%s\", \"%s\")", db, uid, pw));
   }
   return serv;
}


