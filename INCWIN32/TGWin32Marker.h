//*CMZ :  0.80/01 16/08/96  17.29.40  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TGWin32Marker
#define ROOT_TGWin32Marker

#include "GTYPES.h"
#include "TPOINT.h"
#include "WINDOWS4ROOT.h"

class TGWin32Marker {

private:

   int     fNumNode;    // Number of chain in the marker shape
   POINT  *fChain;      // List of the n chains to build a shaped marker
   Color_t fCindex;     // Color index of the marker;
   int     fMarkerType; // Type of the current marker

public:

   TGWin32Marker(int n=0, TPoint *xy=0,int type=0);
  ~TGWin32Marker();
   int    GetNumber();
   POINT *GetNodes();
   int    GetType();
   void   SetMarker(int n, TPoint *xy, int type);

};

#endif
