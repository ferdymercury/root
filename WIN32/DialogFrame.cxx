//*CMZ :  1.03/09 16/12/97  11.48.35  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   08/05/96


// Main class to manage the modal and modaless dialogs under WIN32

#include <process.h>

#include "TDialogFrame.h"
#include "TError.h"
#include "TGWin32Object.h"
#include "TWin32WindowABC.h"


//______________________________________________________________________________
TDialogFrame::TDialogFrame(){
  HANDLE ThrSem;

  fDialogCounter    = 0;
  fDialogWindowList = 0;
  fIDDlgThread      = 0;
  fhdDlgThread      = 0;

  if (!fListOfDialogFrames)
      fListOfDialogFrames = new TList;

  //
  //  Create thread to do the Dialogs loop
  //

  ThrSem = CreateSemaphore(NULL, 0, 1, NULL);

  if ( (Int_t)(fhdDlgThread = (HANDLE) _beginthreadex(NULL,0, (void *) ROOT_DlgLoop,
                 (LPVOID) ThrSem, 0, (void *)&fIDDlgThread))== -1){
      int  erret = GetLastError();
      ::Error("CreatCmdThread", "Thread was not created");
//      cout << erret << endl;
  }

  WaitForSingleObject(ThrSem, INFINITE);
  fListOfDialogFrames->Add(this);
  CloseHandle(ThrSem);
}


//______________________________________________________________________________
TDialogFrame::~TDialogFrame(){

//*-*  Close the dialog thread

   if (fListOfDialogFrames) {
          fListOfDialogFrames->Remove(this);
          if (!fListOfDialogFrames->First())
              SafeDelete(fListOfDialogFrames);
   }

  if (fIDDlgThread) {
      PostThreadMessage(fIDDlgThread,WM_QUIT,0,0);
      if (WaitForSingleObject(fhdDlgThread,10000)==WAIT_FAILED)
                            TerminateThread(fhdDlgThread, -1);
      CloseHandle(fhdDlgThread);
      fIDDlgThread = 0;
      fhdDlgThread = 0;
  }

//*-*  Delete the list of the dialogs

  if (fDialogWindowList) {
    free(fDialogWindowList);
    fDialogWindowList = 0;
  }

}

//______________________________________________________________________________
void TDialogFrame::Add(TWin32Dialog *dialog){
    TWin32AddDialog CodeOp(dialog);
    ExecCommand(&CodeOp);
}

//______________________________________________________________________________
void TDialogFrame::ExecCommand(TGWin32Command *code){
  PostThreadMessage(fIDDlgThread,
                    code->GetMsgID(),
                    (WPARAM)code->GetCOP(),
                    (LPARAM)code);
};

//______________________________________________________________________________
static LPTHREAD_START_ROUTINE TDialogFrame::ROOT_DlgLoop(HANDLE ThrSem)
//*-*-*-*-*-*-*-*-*-*-*-*-* ROOT_CmdLoop*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                       ============
//*-*  Launch a separate thread to handle the ROOT command  messages
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
 {
   MSG msg;
   int erret;  // GetMessage result

   ReleaseSemaphore(ThrSem, 1, NULL);
   Bool_t EventLoopStop = kFALSE;
   while(!EventLoopStop)
   {
     if (EventLoopStop = (!(erret=GetMessage(&msg,NULL,0,0)) || erret == -1))
                                                                   continue;
//*-*
//*-*   GetMessage( ... ):
//*-* If the function retrieves a message other than WM_QUIT,
//*-*     the return value is TRUE.
//*-* If the function retrieves the WM_QUIT,
//*-*     the return value is FALSE.
//*-* If there is an error,
//*-*     the return value is -1.
//*-*
       HWND   hwnd   = msg.hwnd;
       UINT   uMsg   = msg.message;
       LPARAM lParam = msg.lParam;
       LPARAM wParam = msg.wParam;

//*-*  Look for instance
       DWORD idThread = GetCurrentThreadId();
       TIter next(fListOfDialogFrames);
       TDialogFrame *obj;
       while(UINT (obj = (TDialogFrame *)next()) &&
            UINT ((obj->GetDlgThreadID()) != idThread));

       if (!obj) {
          ::Error("ROOT_DlgLoop","Dialog has been not found !!!");
//          return (LRESULT) 1;
       }

       if (hwnd == NULL) {
//*-*
//*-*  The Thread message has been received
//*-*

         switch (uMsg) {
            case WM_INITDIALOG: {
              obj->fDialogCounter++;
              HWND *list = obj->fDialogWindowList;

              if (list) // Increase the list of the dialog windows
                   obj->fDialogWindowList = (HWND *) realloc(list,
                                                     obj->fDialogCounter*sizeof(HWND));
              else     //  Create the list of dialog windows
                   obj->fDialogWindowList = (HWND *) malloc(sizeof(HWND));

//*-* Enumerate some controls to subclass it
  //              EnumChildWindows((HWND) lParam, fnSetClipBoadOp,0;
              break;
            } // WM_INITDIALOG

            case ROOT_CMD:
               switch (wParam){
                default:
                 TWin32WindowABC *win = (TWin32WindowABC *)(((TWin32SendClass *) lParam)->GetPointer());
                 win->CreateWin32Window();
                 break;
               }
              break;

            case WM_DESTROY:{

              //  Look for the the present dialog
              int i;
              HWND *list = obj->fDialogWindowList;

              for(i=0;i<obj->fDialogCounter &&
                        list[i] != (HWND) lParam;i++);
              if (i < obj->fDialogCounter) {
              //  Put the dialog window handle the list off
                obj->fDialogCounter--;

                if (obj->fDialogCounter > i+1) {

                  // And shift the tail of the list
                  strncpy((char *)&list[i],(char *)&list[i+1],
                          sizeof(HWND)*((obj->fDialogCounter)-i));
                  // Resize the list
                  obj->fDialogWindowList = (HWND *) realloc(list,
                                                    obj->fDialogCounter*sizeof(HWND));
                }
              }
              break;
            }  // WM_DESTROY

            default: continue;
         }
       }
       else {  // The "real" Window messsage has been retrieved
          BOOLEAN IsDialog = 0;
          int i;
          HWND *list = obj->fDialogWindowList;

          for (i=0;i<obj->fDialogCounter;i++) {
            if (IsDialogMessage(list[i],&msg)){
                IsDialog = 1;
                break;
            }
          }


          if (!IsDialog){
            TranslateMessage(&msg);
            DispatchMessage(&msg);
          }
       }
    }  // End of Event loop

    if (erret == -1)
    {
        erret = GetLastError();
        ::Error("CmdLoop", "Error in GetMessage");
        Printf(" %d \n",erret);
    }
    _endthreadex(0);
    return 0;
} /* ROOT_DlgLoop */
