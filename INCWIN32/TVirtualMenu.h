//*CMZ :  1.00/05 20/03/97  15.34.59  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TVirtualMenu
#define ROOT_TVirtualMenu
//*-* ABC to menu system impelmetation

class TVirtualMenu : public TList {

private:


public:
    TVirtualMenu();
    TVirtualMenu(const Text_t *name, const Text_t *title);
    TVirtualMenu(const Text_t *name, const Text_t *title, TVirtualMenu *parent);
   ~TVirtualMenu();
};


class TWin32MenuItem : public Named {

private:

    Int_t    fItemID;


public:

   TWin32MenuItem();
   TWin32MenuItem(const Text_t *name, const Text_t *title);
  ~TWin32MenuItem()

};

#endif
