//*CMZ :  1.03/02 23/08/97  08.33.36  by  Fons Rademakers
//*-- Author :    Fons Rademakers   19/12/96

#ifndef ROOT_MessageTypes
#define ROOT_MessageTypes

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// MessageTypes                                                         //
//                                                                      //
// System predefined message types. Message types are constants that    //
// indicate what kind of message it is. Make sure your own message      //
// types don't clash whith the ones defined in this file. ROOT reserves //
// all message ids between 0 - 10000. Make sure your message            //
// id < 200000000.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

enum EMessageTypes {
   kMESS_ACK             = 0x10000000,   //OR with kMESS_ACK to force each
                                         //message to be acknowledged
   kMESS_ANY             = 0,            //generic message type
   kMESS_OK,                             //everything OK
   kMESS_NOTOK,                          //things are NOT OK
   kMESS_STRING,                         //string follows
   kMESS_OBJECT,                         //object follows
   kMESS_CINT,                           //cint command follows

   //---- PROOF message opcodes (1000 - 1999)
   kPROOF_GROUPVIEW       = 1000,        //groupview follows
   kPROOF_STOP,                          //stop proof server
   kPROOF_FATAL,                         //server got fatal error and died
   kPROOF_LOGLEVEL,                      //loglevel follows
   kPROOF_LOGFILE,                       //log file follows
   kPROOF_LOGDONE,                       //log file received
   kPROOF_STATUS,                        //print status of slave
   kPROOF_PING,                          //ping slave
   kPROOF_RESET,                         //reset slave
   kPROOF_GETOBJECT,                     //ask for object with given name
   kPROOF_TREEDRAW,                      //tree draw command follows
   kPROOF_GETPACKET,                     //ask for next packet
   kPROOF_LIMITS,                        //ask for histogram limits

   //---- ROOTD message opcodes (2000 - 2099)
   kROOTD_USER             = 2000,       //user id follows
   kROOTD_PASS,                          //passwd follows
   kROOTD_AUTH,                          //authorization status (to client)
   kROOTD_FSTAT,                         //filename follows
   kROOTD_OPEN,                          //filename follows + mode
   kROOTD_PUT,                           //offset, number of bytes and buffer
   kROOTD_GET,                           //offset, number of bytes
   kROOTD_FLUSH,                         //flush file
   kROOTD_CLOSE,                         //close file
   kROOTD_STAT,                          //return rootd statistics
   kROOTD_ACK,                           //acknowledgement (all OK)
   kROOTD_ERR                            //error code and message follow
};

#endif
