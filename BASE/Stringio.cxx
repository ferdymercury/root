//*CMZ :  1.03/09 05/12/97  13.58.15  by  Fons Rademakers
//*-- Author :    Fons Rademakers   04/08/95

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TString Input/Output functions, put here so the linker will include  //
// them only if I/O is done.                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <ctype.h>              // Looking for isspace()
#include <fstream.h>

#include "TString.h"


//______________________________________________________________________________
istream& TString::ReadFile(istream& strm)
{
   // Replace string with the contents of strm, stopping at an EOF.

   Clobber(GetInitialCapacity());

   while(1) {
      strm.read(fData+Length(), Capacity()-Length());
      Pref()->fNchars += strm.gcount();

      if (!strm.good())
         break;                    // EOF encountered

      // If we got here, the read must have stopped because
      // the buffer was going to overflow. Resize and keep
      // going.
      Capacity(Length() + GetResizeIncrement());
   }

   fData[Length()] = '\0';         // Add null terminator

   if (Capacity()-Length() > GetMaxWaste())
      Capacity(AdjustCapacity(Capacity()));

   return strm;
}

//______________________________________________________________________________
istream& TString::ReadLine(istream& strm, Bool_t skipWhite)
{
   // Read a line from strm upto newline skipping any whitespace.

   if (skipWhite)
      strm >> ws;

    return ReadToDelim(strm, '\n');
}

//______________________________________________________________________________
istream& TString::ReadString(istream& strm)
{
   // Read a line from strm upto newline.

   return ReadToDelim(strm, '\0');
}

//______________________________________________________________________________
istream& TString::ReadToDelim(istream& strm, char delim)
{
   // Read up to an EOF, or a delimiting character, whichever comes
   // first.  The delimiter is not stored in the string,
   // but is removed from the input stream.
   // Because we don't know how big a string to expect, we first read
   // as much as we can and then, if the EOF or null hasn't been
   // encountered, do a resize and keep reading.

   Clobber(GetInitialCapacity());

   while (1) {
      strm.get(fData+Length(),            // Address of next byte
               Capacity()-Length()+1,     // Space available (+1 for terminator)
               delim);                    // Delimiter
      Pref()->fNchars += strm.gcount();
      if (!strm.good()) break;            // Check for EOF or stream failure
      int p = strm.peek();
      if (p == delim) {                   // Check for delimiter
         strm.get();                      // eat the delimiter.
         break;
      }
      // Delimiter not seen.  Resize and keep going:
      Capacity(Length() + GetResizeIncrement());
   }

   fData[Length()] = '\0';                // Add null terminator

   if (Capacity()-Length() > GetMaxWaste())
      Capacity(AdjustCapacity(Capacity()));

   return strm;
}

//______________________________________________________________________________
istream& TString::ReadToken(istream& strm)
{
   // Read a token, delimited by whitespace, from the input stream.

   Clobber(GetInitialCapacity());

   strm >> ws;                                   // Eat whitespace

   UInt_t wid = strm.width(0);
   char c;
   Bool_t hitSpace = kFALSE;
   while ((wid == 0 || Pref()->fNchars < (Int_t)wid) &&
          strm.get(c).good() && (hitSpace = isspace((unsigned char)c)) == 0) {
      // Check for overflow:
      if (Length() == Capacity())
         Capacity(Length() + GetResizeIncrement());

      fData[Pref()->fNchars++] = c;
   }
   if (hitSpace)
      strm.putback(c);

   fData[Length()] = '\0';                       // Add null terminator

   if (Capacity()-Length() > GetMaxWaste())
      Capacity(AdjustCapacity(Capacity()));

   return strm;
}

//______________________________________________________________________________
istream& operator>>(istream& strm, TString& s)
{
   // Read string from stream.

   return s.ReadToken(strm);
}

//______________________________________________________________________________
ostream& operator<<(ostream& os, const TString& s)
{
   // Write string to stream.

   if (os.opfx()) {
      UInt_t len = s.Length();
      UInt_t wid = os.width();
      wid = (len < wid) ? wid - len : 0;
      os.width(wid);
      long flags = os.flags();
      if (wid && !(flags & ios::left))
         os << "";  // let the ostream fill
      os.write((char*)s.Data(), s.Length());
      if (wid && (flags & ios::left))
         os << "";  // let the ostream fill
   }
   os.osfx();
   return os;
}
