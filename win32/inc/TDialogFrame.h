//*CMZ :  0.80/01 16/08/96  17.29.40  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TDialogFrame
#define ROOT_TDialogFrame

#ifndef ROOT_Rtypes
#include "RTYPES.h"
#endif

#ifndef ROOT_TList
#include "TLIST.h"
#endif

#ifndef ROOT_TObject
#include "TOBJECT.h"
#endif

#ifndef ROOT_Windows4Root
#include "WINDOWS4ROOT.h"
#endif

// This class creates a separate thread to manage WIN32 dialogs


class TWin32Dialog;
class TGWin32Command;

class TDialogFrame : public TObject {

private:

  static TList *fListOfDialogFrames; // List of all instance of the dialog frames
  DWORD  fIDDlgThread;   // ID of the dialog thread
  HANDLE fhdDlgThread;      // HANDLE of the dialog thread
  Int_t  fDialogCounter;    // The number of the active dialogs
  HWND  *fDialogWindowList; // The array of the Window handle
                            // for active dialogs

  Int_t   CreateDlgThread();
  static DlgMainLoop();

public:

  TDialogFrame();
 ~TDialogFrame();

  void Add(TWin32Dialog *dialog);
  void ExecCommand(TGWin32Command *code);

  DWORD   GetDlgThreadID()  { return fIDDlgThread; }  // returns the dialog thread ID
  HANDLE  GetDlgThreadhd()  { return fhdDlgThread; }  // returns the HANDLER of the dialog thread
  Int_t   GetDialogCounter(){ return fDialogCounter;} // returns the current number of the dialogs

  static LPTHREAD_START_ROUTINE ROOT_DlgLoop(HANDLE ThrSem);

};

#endif
