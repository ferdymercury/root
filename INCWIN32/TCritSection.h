//*CMZ :  0.80/01 16/08/96  17.29.40  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TCritSection
#define ROOT_TCritSection

#ifndef ROOT_Windows4Root
#include "WINDOWS4ROOT.h"
#endif

#ifndef ROOT_TObject
#include "TOBJECT.h"
#endif

class TCritSection : public TObject {

private:
   LPCRITICAL_SECTION  flpCriticalSection; // pointer to critical section object
   int          fSectionCount;             // flag to mark whether we are witin the section
   HANDLE       fhEvent;                   // The event object to synch threads
   HANDLE       fWriteLock;                // Event object to synch thread


public:

    TCritSection();
    ~TCritSection();

    void      WriteLock ();
    void      ReleaseWriteLock();
    void      ReadLock();
    void      ReleaseReadLock();


    void      XW_OpenSemaphore(){;}
    void      XW_CloseSemaphore(){;}
    void      XW_WaitSemaphore(){;}
    void      XW_CreateSemaphore(){;}

    ClassDef(TCritSection,0)
};
#endif
