//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  1.02/00 23/07/97  10.55.00  by  Rene Brun
//*-- Author :    Rene Brun   23/07/97

#ifndef ROOT_TKeyMapFile
#define ROOT_TKeyMapFile


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TKeyMapFile                                                          //
//                                                                      //
// Utility class for browsing TMapFile objects.                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TBrowser;
class TMapFile;

class TKeyMapFile : public TNamed {

private:

   TMapFile      *fMapFile;       //pointer to map file

public:
    TKeyMapFile();
    TKeyMapFile(const char *name, const char *classname, TMapFile *mapfile);
    virtual ~TKeyMapFile() {;}
    virtual void      Browse(TBrowser *b);

    ClassDef(TKeyMapFile,0)  //Utility class for browsing TMapFile objects.
};

#endif
