//*CMZ :  1.00/07 04/04/97  11.04.05  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TError
#include "TERROR.h"
#endif


#ifndef ROOT_TVirtualMenuItem
#include "TWin32MenuItem.h"
#endif.


class TCustomMenuItem : public TWin32MenuItem {

private:
    void SetItemStatus(EMenuModified state){ ; }

protected:
    void ExecuteEventCB(TWin32Canvas *c){ ; }

public:
    const char *ClassName(){ return "TCustomMenuItem"; }
    void Checked(){Warning("Checked","Can't check/uncheck a separator") ; }

    void Disable(){Warning("Disable","Can't Enable/Disable a separator") ; }
    void Enable(){Warning("Enable","Can't Enable/Disable a separator") ; }
    void ExecuteEvent(TWin32Canvas *c){ ; }
    TWin32Menu *GetPopUpItem(){ return 0;}

    void Grayed(){Warning("Grayed","Can't Gray a separator") ; };
    void UnChecked(){Warning("UnChecked","Can't check/uncheck a separator") ; }

};
