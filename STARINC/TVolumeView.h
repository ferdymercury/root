//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author :  Valery Fine(fine@bnl.gov)   25/12/98
// $Id: TVolumeView.h,v 1.22 1999/11/16 16:29:57 fine Exp $
// $Log: TVolumeView.h,v $
// Revision 1.22  1999/11/16 16:29:57  fine
// TObject::GetObjectInfo() implemented
//
// Revision 1.21  1999/11/13 16:59:17  fine
// TVolume and TVolumeView headers adjusted to ROOT 2.23/ not compatible with ROOT 2.22 anymore though!
//
// Revision 1.20  1999/09/22 03:51:50  fine
// New method and RMath class to manage different transformation have been introduced
//
// Revision 1.19  1999/07/09 17:52:56  fine
// New ctors to create sub-view between two nodes
//
// Revision 1.18  1999/07/09 01:56:39  fine
// New method to contrsuct sub views and manage visibilities
//
// Revision 1.17  1999/06/21 22:16:55  fine
// Some clean up
//
// Revision 1.16  1999/06/14 09:30:31  fine
//   default ctor clean
//
// Revision 1.15  1999/06/14 08:45:28  fine
// List of the shapes have been introduced for TVolumeView
//
// Revision 1.14  1999/06/05 00:42:32  fine
// SetLineAttribute methods have been introduced
//
// Revision 1.13  1999/05/29 20:52:33  fine
// Several method to estimat range of 3D object were introduced
//
// Revision 1.12  1999/04/23 22:47:36  fine
// Node family has been adjusted for TPolyLineShape class
//
// Revision 1.11  1999/04/23 00:09:19  fine
// Working verion of PolyLineShape. Some correction for TVolume family as well
//
// Revision 1.10  1999/04/13 14:26:41  fine
// Geometry-based dataset implementation, next step
//
// Revision 1.9  1999/04/10 15:05:05  fine
// First working version of SavePrimitive. New ctor has been introduced to back SavePrimitive
//
// Revision 1.8  1999/04/09 23:24:08  fine
// TVolumeView::SavePrimitive() - first approach
//
// Revision 1.7  1999/04/08 16:44:10  fine
// Working version of the NodeView family
//
// Revision 1.6  1999/03/30 16:24:02  fine
//  Corrections towards GEANT manager
//
// Revision 1.5  1999/03/29 19:25:26  fine
// Visibility flag have been activated. Some working correction
//
#ifndef STAR_TVolumeView
#define STAR_TVolumeView

#include "TVolume.h"

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TVolumeView                                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

// typedef TVolumeView St_NodeView;

class TVolumeView : public TObjectSet, public TAtt3D  {
protected:
  TList          *fListOfShapes;     //Pointer to the list of the "extra" shape definitions

  virtual void    PaintShape(Option_t *option);

public:
  TVolumeView():TObjectSet(),fListOfShapes(0) {;}
  TVolumeView(TVolumeView *viewNode,TVolumePosition *nodePosition=0);
  TVolumeView(TVolumeView *viewNode,const Char_t *NodeName1,const Char_t *NodeName2=0);
  TVolumeView(TVolumeView *viewNode,TVolumeView *topNode);
  TVolumeView(TVolumeView *viewNode,const TVolumeView *node1,const TVolumeView *node2);
  TVolumeView(TVolume &pattern,const TVolumePosition *nodePosition=0,EDataSetPass iopt=kAll,Int_t level=0);
  TVolumeView(Double_t *translate, Double_t *rotate, UInt_t positionId, TVolume *thisNode,
              const Char_t *thisNodePath, const Char_t *matrixName=0, const Int_t matrixType=0);
  TVolumeView(TVolume *thisNode,TVolumePosition *nodePosition);
  virtual ~TVolumeView();
  virtual TVolume *AddNode(TVolume *node);
  virtual void     Add(TVolumeView *node);
  virtual void     Add(TShape *shape, Bool_t IsMaster=kFALSE);
  virtual void     Browse(TBrowser *b);
  virtual void     Draw(Option_t *option=""); // *MENU*
  virtual Int_t    DistancetoPrimitive(Int_t px, Int_t py);
  virtual TVolumePosition *GetPosition() const { return (TVolumePosition *)GetObject();}
  virtual TVolume *GetNode() const ;
  virtual Int_t    GetGlobalRange(const TVolumeView *rootNode,Float_t *min, Float_t *max);
  virtual TList   *GetListOfShapes()      const;
  virtual void     GetLocalRange(Float_t *min, Float_t *max);
  virtual Text_t  *GetObjectInfo(Int_t px, Int_t py);
  virtual TShape  *GetShape()  const;
  virtual Int_t    GetVisibility() const;
  virtual Bool_t   IsMarked();
  virtual Bool_t   Is3D()  {return kTRUE;}
  virtual TVolumePosition  *Local2Master(const TVolumeView *localNode,const TVolumeView *masterNode=0);
  virtual TVolumePosition  *Local2Master(const Char_t *localName, const Char_t *masterName=0);
  virtual Float_t *Local2Master(const Float_t *local, Float_t *master,
                                const Char_t *localName, const Char_t *masterName=0, Int_t nVector=1);
  virtual Float_t   *Local2Master(const Float_t *local, Float_t *master,
                                const TVolumeView *localNode,
                                const TVolumeView *masterNode=0, Int_t nVector=1);
  virtual TList   *Nodes(){ return GetList();}
  virtual void     Paint(Option_t *option="");
  virtual TString  PathP() const;
  virtual void     SetLineAttributes(); // *MENU*
  virtual void     SavePrimitive(ofstream &out, Option_t *option="");
  virtual void     SetVisibility(Int_t vis=1); // *MENU*
  virtual void     Sizeof3D() const;
  ClassDef(TVolumeView,1)
};

inline void    TVolumeView::Add(TVolumeView *node){ TDataSet::Add(node);}
inline Bool_t  TVolumeView::IsMarked(){ return TestBit(kMark); }
inline TList  *TVolumeView::GetListOfShapes() const {return fListOfShapes;}
inline TShape *TVolumeView::GetShape()  const
       {return fListOfShapes ? (TShape *)fListOfShapes->First():0;}
inline Int_t   TVolumeView::GetVisibility() const {return GetNode() ? GetNode()->GetVisibility():0;}

#endif

