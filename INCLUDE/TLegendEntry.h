//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/09 11/11/99  15.51.10  by  Rene Brun
//*CMZ :  2.23/03 27/09/99  10.04.50  by  Rene Brun
//*CMZ :  2.23/02 07/09/99  08.38.39  by  Rene Brun
//*-- Author :    Matthew.Adam.Dobbs   06/09/99
//--------------------------------------------------------------------------

#ifndef ROOT_TLegendEntry
#define ROOT_TLegendEntry

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TLegendEntry                                                         //
// Matthew.Adam.Dobbs@Cern.CH, September 1999                           //
// Storage class for one entry of a TLegend                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif
#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif

class TLegendEntry : public TObject, public TAttText, public TAttLine,
                     public TAttFill, public TAttMarker {
public:
  TLegendEntry();
  TLegendEntry(TObject *obj, const char *label = 0, Option_t *option="lpf" );
  TLegendEntry( const TLegendEntry &entry );
  virtual ~TLegendEntry();
  virtual void          Copy( TObject &obj );
  virtual const char   *GetLabel() const { return fLabel.Data(); }
  virtual TObject      *GetObject() { return fObject; }
  virtual Option_t     *GetOption() const { return fOption.Data(); }
  virtual void          Print( Option_t *option = "" );
  virtual void          SaveEntry( ofstream &out, const char *name );
  virtual void          SetLabel( const char *label = "" ) { fLabel = label; } // *MENU*
  virtual void          SetObject(TObject* obj );
  virtual void          SetObject( const char *objectName );  // *MENU*
  virtual void          SetOption( Option_t *option="lpf" ) { fOption = option; } // *MENU*

protected:
  TObject      *fObject;   // pointer to object being represented by this entry
  TString       fLabel;    // Text associated with the entry, will become latex
  TString       fOption;   // Options associated with this entry

  ClassDef(TLegendEntry,1) // Storage class for one entry of a TLegend
};

#endif
