//*CMZ :  0.80/01 16/08/96  17.29.41  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TWin32Semaphore
#define ROOT_TWin32Semaphore

#include <winbase.h>

class TWin32Semaphore {

private:
  HANDLE  fSemaphore;  // Handle of the semaphore to synch actitvities

public:
  TWin32Semaphore(){fSemaphore = CreateSemaphore(NULL, 0, 1, NULL);}
  virtual ~TWin32Semaphore(){ CloseHandle(fSemaphore); }
  virtual void Wait() {WaitForSingleObject(fSemaphore, INFINITE);}
  virtual void Release(){ReleaseSemaphore(fSemaphore,1L,NULL); }
};


#endif
