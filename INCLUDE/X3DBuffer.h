/*CMZ :  2.00/09 26/06/98  17.24.25  by  Fons Rademakers*/
/*CMZ :  0.90/01 07/10/96  18.12.35  by  Rene Brun*/
/*-- Author :    Nenad Buncic   01/11/95*/

#ifndef ROOT_X3DBuffer
#define ROOT_X3DBuffer

#include "DllImport.h"

#ifndef __CINT__
#ifdef __cplusplus
extern "C" {
#endif
#endif

typedef struct _x3d_data_ {
      int  numPoints;
      int  numSegs;
      int  numPolys;
    float *points;            /* x0, y0, z0, x1, y1, z1, ..... ..... ....    */
      int *segs;              /* c0, p0, q0, c1, p1, q1, ..... ..... ....    */
      int *polys;             /* c0, n0, s0, s1, ... sn, c1, n1, s0, ... sn  */
} X3DBuffer;


typedef struct _x3d_sizeof_ {
      int  numPoints;
      int  numSegs;
      int  numPolys;
} Size3D;

extern int AllocateX3DBuffer ();
extern void FillX3DBuffer (X3DBuffer *buff);

R__EXTERN Size3D gSize3D;

#ifndef __CINT__
#ifdef __cplusplus
}
#endif
#endif


#endif
