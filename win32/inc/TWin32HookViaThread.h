//*CMZ :  2.21/06 10/02/99  19.01.39  by  Rene Brun
//*CMZ :  1.01/00 30/04/97  10.40.37  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
//  This class is used to synchonize threads
//  To implement event the base class should never call his own callback
//  function directly rather via thread hook.

#ifndef ROOT_TWin32HookViaThread
#define ROOT_TWin32HookViaThread

#ifndef ROOT_RTypes
#include "RTypes.h"
#endif

class TGWin32Command;
class TWin32SendClass;
class TWin32SendWaitClass;

class TWin32HookViaThread {

protected:
   int             fSendFlag;     // = 0 - No message
                                  //   1 - Message is about to be sent
                                  //   2 - Message is about to be destroyed

public:
   TWin32HookViaThread(){;}                                                          // default ctor
   virtual void ExecCommandThread(TGWin32Command *command=0, Bool_t synch=kTRUE);    // Pass the command to the altrenative "command" thread
   virtual void ExecWindowThread(TGWin32Command *command=0);                         // Pass the command to the altrenative "window" thread
   virtual void ExecThreadCB(TWin32SendClass *command=0) = 0;                        // Perform the command
   virtual void ExecThreadCB(TWin32SendWaitClass *command=0){;}                       // Perform the command then release the origin thread
   static  Bool_t ExecuteEvent(void *msg,Bool_t synch=kTRUE,UInt_t msgtype=UInt_t(-1)); // Indirect call ExecThreadCB method
};

#endif
