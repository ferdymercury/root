//*CMZ :  2.22/01 29/04/99  18.00.45  by  Fons Rademakers
//*CMZ :  2.20/00 26/11/98  10.19.18  by  Fons Rademakers
//*CMZ :  2.00/10 14/07/98  16.15.29  by  Fons Rademakers
//*CMZ :  2.00/09 05/06/98  15.17.37  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/07 18/05/98  18.24.40  by  Fons Rademakers
//*CMZ :  2.00/06 12/05/98  16.11.33  by  Fons Rademakers
//*CMZ :  1.03/02 01/09/97  12.37.29  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/01/96

# ROOT Environment settings are handled via the class TEnv. To see
# which values are active do: gEnv->Print().

# Path used by dynamic loader to find shared libraries and macros
# Paths are different for Unix and Windows. The example shows the defaults
# for all ROOT applications for either Unix or Windows.
Unix.*.Root.DynamicPath:    .:$(ROOTSYS)/lib
Unix.*.Root.MacroPath:      .:$(ROOTSYS)/macros
WinNT.*.Root.DynamicPath:   ./;$(ROOTSYS);$(ROOTSYS)/bin;$(PATH)
WinNT.*.Root.MacroPath:     ./;$(ROOTSYS)/macros

# Path where to look for TrueType fonts
Unix.*.Root.UseTTFonts:     true
Unix.*.Root.TTFontPath:     $(ROOTSYS)/ttf/fonts

# Show where item is found in the specified path
Root.ShowPath:           false

# Activate memory statistics (size and cnt is used to trap allocation of
# blocks of a certain size after cnt times)
Root.MemStat:            0
Root.MemStat.size:      -1
Root.MemStat.cnt:       -1
Root.ObjectStat:         0

# Global debug mode. When >0 turns on progressively more details debugging.
# When >4 X11 runs in synchronous mode.
Root.Debug:              0

# Default editor
Unix.*.Editor:           vi
WinNT.*.Editor:          notepad

# Specify list of file endings which TTabCom (TAB completion) should ignore.
#TabCom.FileIgnore:       .cpp:.h:.cmz

# TCanvas specific settings. Opaque move and resize show full pad during
# the operation instead of only the outline. Especially for resize you'll
# need serious CPU power. UseScreenFactor=true means to size canvas according
# to size of screen, so a canvas still looks good on a low resolution
# laptop screen without having to change canvas size in macros.
# HighLightColor 2 = red. ShowEventStatus allows the event status bar to
# be turned on by default.
Canvas.MoveOpaque:          false
Canvas.ResizeOpaque:        false
Canvas.UseScreenFactor:     true
Canvas.HighLightColor:      2
Canvas.ShowEventStatus:     false

# THtml specific settings.
Root.Html.OutputDir:         html/
Unix.*.Root.Html.SourceDir:  ./:src/
WinNT.*.Root.Html.SourceDir: ./
#Root.Html.Author:           //*-- Author :
#Root.Html.Author:           Fons Rademakers
#Root.Html.Copyright:        * Copyright
#Root.Html.LastUpdate:       //*CMZ :
#Root.Html.Description:      //____________________
#Root.Html.Root:             http://root.cern.ch/root/html
#Root.Html.SearchEngine:     ../Search.phtml

# GUI specific settings
Gui.NormalFont:        -adobe-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1
Gui.BoldFont:          -adobe-helvetica-bold-r-*-*-12-*-*-*-*-*-iso8859-1
Gui.SmallFont:         -adobe-helvetica-medium-r-*-*-10-*-*-*-*-*-iso8859-1
Gui.ProportionalFont:  -adobe-courier-medium-r-*-*-12-*-*-*-*-*-iso8859-1
Gui.BackgroundColor:        #c0c0c0
Gui.ForegroundColor:        black
Gui.SelectForegroundColor:  white
Gui.SelectBackgroundColor:  #000080
Gui.IconPath:               $(HOME)/icons:$(ROOTSYS)/icons:.
Gui.MimeTypeFile:           $(HOME)/.root.mimes
# If above does not exists defaults to this:
#Gui.MimeTypeFile:           $ROOTSYS/icons/root.mimes
# Can be either small, big, list, details
Browser.IconStyle:          small
# Can be either name, type, size, date
Browser.SortBy:             name

# Rint (interactive ROOT executable) specific alias, logon and logoff macros
Rint.Load:               rootalias.C
Rint.Logon:              rootlogon.C
Rint.Logoff:             rootlogoff.C
Rint.History:            $(HOME)/.root_hist

# Example of custom setting for the Rint application (root.exe).
# This overrides the default specified above for a generic application.
# Color 5 is yellow.
Rint.Canvas.HighLightColor:      5

