//*CMZ :  0.80/00 05/06/96  22.13.18  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   07/05/96


#ifndef ROOT_RConfig
#include "RConfig.h"
#endif

#ifndef ROOT_TSemaphore
#include "TSemaphore.h"
#endif


//______________________________________________________________________________
TSemaphore::TSemaphore(){
        fhEvent = CreateEvent(NULL,TRUE,FALSE,NULL);
}

//______________________________________________________________________________
TSemaphore::~TSemaphore(){
  CloseHandle(fhEvent);
  fhEvent = 0;
}
//______________________________________________________________________________
void TSemaphore::ROpenSemaphore(){
        SetEvent(fhEvent);
}

//______________________________________________________________________________
void TSemaphore::XW_CloseSemaphore(){
        ResetEvent(fhEvent);
}

//______________________________________________________________________________
void TSemaphore::XW_WaitSemaphore(){
    WaitForSingleObject(fhEvent, INFINITE);
}

