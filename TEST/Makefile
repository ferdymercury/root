*CMZ :  2.22/07 06/07/99  08.18.49  by  Rene Brun
*CMZ :  2.22/05 08/06/99  16.25.51  by  Fons Rademakers
*CMZ :  2.22/01 11/05/99  09.08.02  by  Rene Brun
*CMZ :  2.21/07 04/03/99  18.06.22  by  Rene Brun
*CMZ :  2.21/04 05/02/99  11.19.10  by  Fons Rademakers
*CMZ :  2.20/00 21/11/98  21.14.38  by  Rene Brun
*CMZ :  2.00/13 29/10/98  13.27.18  by  Rene Brun
*CMZ :  2.00/12 09/10/98  10.22.49  by  Rene Brun
*CMZ :  2.00/10 29/07/98  11.38.31  by  Rene Brun
*CMZ :  2.00/09 17/06/98  11.22.46  by  Fons Rademakers
*CMZ :  2.00/08 24/05/98  21.23.31  by  Rene Brun
*CMZ :  2.00/07 15/05/98  19.36.15  by  Fons Rademakers
*CMZ :  2.00/06 25/04/98  09.06.57  by  Rene Brun
*CMZ :  2.00/01 12/03/98  20.15.52  by  Fons Rademakers
*CMZ :  2.00/00 07/03/98  15.20.36  by  Fons Rademakers
*CMZ :  1.03/09 16/12/97  17.11.12  by  Rene Brun
*-- Author :
ObjSuf        = o
SrcSuf        = cxx
ExeSuf        =
DllSuf        = so
EVENTLIB      = $(EVENTO)
OutPutOpt     = -o

ROOTCFLAGS    = $(shell root-config --cflags)
ROOTLIBS      = $(shell root-config --libs)
ROOTGLIBS     = $(shell root-config --glibs)

+SELF,IF=HPUX,IF=-ACC,IF=-EGCS.
# HP-UX with CC
CXX           = CC
+SELF,IF=HPUX,IF=HPUX9,IF=-ACC,IF=-EGCS.
CXXFLAGS      = -O +Z
+SELF,IF=HPUX,IF=-HPUX9,IF=-ACC,IF=-EGCS.
CXXFLAGS      = -O +Z
+SELF,IF=HPUX,IF=-ACC,IF=-EGCS.
LD            = CC
LDFLAGS       = -g +a1 -z
SOFLAGS       = -b

+SELF,IF=HPUX,IF=ACC.
# HP-UX 10.x with aCC
CXX           = aCC
CXXFLAGS      = -O +Z
LD            = aCC
LDFLAGS       = -g -z
SOFLAGS       = -b

+SELF,IF=HPUX,IF=EGCS.
# HP-UX 10.x with g++
CXXFLAGS      = -O -fPIC
CXX           = g++
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -fPIC -shared

+SELF,IF=IBMRT,IF=-GCC.
# IBM AIX
CXX           = xlC
CXXFLAGS      = -O
LD            = xlC
LDFLAGS       = -g
SOFLAGS       =

+SELF,IF=IBMRT,IF=GCC.
# IBM AIX with GCC
CXX           = g++
CXXFLAGS      = -O
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -shared

+SELF,IF=SOLARIS,IF=-GCC.
# Solaris
CXX           = CC
CXXFLAGS      = -O -KPIC
LD            = CC
LDFLAGS       = -g
SOFLAGS       = -G

+SELF,IF=SOLARIS,IF=GCC.
# Solaris
CXX           = g++
CXXFLAGS      = -O -fPIC
LD            = CC
LDFLAGS       = -g
SOFLAGS       = -shared

+SELF,IF=SOLARISPC.
# Solaris
CXX           = CC
CXXFLAGS      = -O -KPIC
LD            = CC
LDFLAGS       = -g
SOFLAGS       = -G

+SELF,IF=SGI,IF=-GCC,IF=-KCC,IF=-EGCS.
# SGI
CXX           = CC
CXXFLAGS      = -O
LD            = CC
LDFLAGS       = -g
SOFLAGS       = -shared

+SELF,IF=SGI,IF=EGCS.
# SGI with EGCS
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -g -Wl,-u,__builtin_new -Wl,-u,__builtin_delete -Wl,-u,__nw__FUiPv
SOFLAGS       = -shared

+SELF,IF=SGI,IF=EGCS,IF=SGI64.
# SGI 6.4 with EGCS
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -g -Wl,-u,__builtin_new -Wl,-u,__builtin_delete -Wl,-u,__nw__FUiPv \
                -lgcc -lm -L/usr/lib32
SOFLAGS       = -shared

+SELF,IF=SGI,IF=GCC.
# SGI with GCC
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -g -Wl,-u,__builtin_new -Wl,-u,__builtin_delete -Wl,-u,__nw__FUiPv
SOFLAGS       = -shared

+SELF,IF=SGI,IF=KCC.
# SGI with KCC
CXX           = KCC -32
CXXFLAGS      = -O
LD            = KCC -32
LDFLAGS       = -g -Wl,-u,__builtin_new -Wl,-u,__builtin_delete -Wl,-u,__nw__FUiPv \
                --no_exceptions
SOFLAGS       =

+SELF,IF=ALPHA,IF=GCC.
# Alpha/OSF with g++
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -Wl,-expect_unresolved,* -shared

+SELF,IF=ALPHA,IF=EGCS.
# Alpha/OSF with egcs
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -Wl,-expect_unresolved,* -shared

+SELF,IF=ALPHA,IF=KCC.
# Alpha/OSF with kai compiler (not yet valid)
CXX           = g++
CXXFLAGS      = -O -fPIC
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -Wl,-expect_unresolved,* -shared

+SELF,IF=ALPHA,IF=-GCC,IF=-EGCS,IF=-KCC,IF=CXX6.
# Alpha/OSF with cxx6
CXX           = cxx
CXXFLAGS      = -O0
LD            = cxx
LDFLAGS       = -g
SOFLAGS       = -Wl,-expect_unresolved,* -call_shared

+SELF,IF=ALPHA,IF=-GCC,IF=-EGCS,IF=-KCC,IF=-CXX6.
# Alpha/OSF with cxx5
CXX           = cxx
CXXFLAGS      = -O
LD            = cxx
LDFLAGS       = -g
SOFLAGS       = -Wl,-expect_unresolved,* -call_shared

+SELF,IF=LINUX,IF=-EGCS,IF=-KCC.
# Linux with gcc 2.7.2.x
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -shared

+SELF,IF=LINUX,IF=EGCS.
# Linux with egcs
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -shared

+SELF,IF=LINUX,IF=KCC.
# Linux with the KAI compiler
CXX           = KCC
CXXFLAGS      = -fPIC +K0
LD            = KCC
LDFLAGS       = -g
SOFLAGS       =

+SELF,IF=HIUX.
# Hitachi HIUX
DllSuf        = sl
CXX           = g++
CXXFLAGS      = -O2 -fPIC
LD            = g++
LDFLAGS       = -Wl,+s
SOFLAGS       = -Wl,-b,-E -nostdlib -nostartfiles

+SELF,IF=MkLinux.
# MkLinux with glibc
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -shared -Wl,-soname,

+SELF.

CXXFLAGS     += $(ROOTCFLAGS)
LIBS          = $(ROOTLIBS)
GLIBS         = $(ROOTGLIBS)

#------------------------------------------------------------------------------

EVENTO        = Event.$(ObjSuf) \
                EventDict.$(ObjSuf)

EVENTS        = Event.$(SrcSuf) \
                EventDict.$(SrcSuf)

MAINEVENTO    = MainEvent.$(ObjSuf)
MAINEVENTS    = MainEvent.$(SrcSuf)

EVENT         = Event$(ExeSuf)
EVENTSO       = libEvent.$(DllSuf)

HWORLDO       = hworld.$(ObjSuf)
HWORLDS       = hworld.$(SrcSuf)
HWORLD        = hworld$(ExeSuf)

HSIMPLEO      = hsimple.$(ObjSuf)
HSIMPLES      = hsimple.$(SrcSuf)
HSIMPLE       = hsimple$(ExeSuf)

MINEXAMO      = minexam.$(ObjSuf)
MINEXAMS      = minexam.$(SrcSuf)
MINEXAM       = minexam$(ExeSuf)

TSTRINGO      = tstring.$(ObjSuf)
TSTRINGS      = tstring.$(SrcSuf)
TSTRING       = tstring$(ExeSuf)

TCOLLEXO      = tcollex.$(ObjSuf)
TCOLLEXS      = tcollex.$(SrcSuf)
TCOLLEX       = tcollex$(ExeSuf)

TCOLLBMO      = tcollbm.$(ObjSuf)
TCOLLBMS      = tcollbm.$(SrcSuf)
TCOLLBM       = tcollbm$(ExeSuf)

VVECTORO      = vvector.$(ObjSuf)
VVECTORS      = vvector.$(SrcSuf)
VVECTOR       = vvector$(ExeSuf)

VMATRIXO      = vmatrix.$(ObjSuf)
VMATRIXS      = vmatrix.$(SrcSuf)
VMATRIX       = vmatrix$(ExeSuf)

VLAZYO        = vlazy.$(ObjSuf)
VLAZYS        = vlazy.$(SrcSuf)
VLAZY         = vlazy$(ExeSuf)

GUITESTO      = guitest.$(ObjSuf)
GUITESTS      = guitest.$(SrcSuf)
GUITEST       = guitest$(ExeSuf)

HELLOO        = Hello.$(ObjSuf) HelloDict.$(ObjSuf)
HELLOS        = Hello.$(SrcSuf) HelloDict.$(SrcSuf)
HELLOSO       = Hello.$(DllSuf)

ACLOCKO       = Aclock.$(ObjSuf) AclockDict.$(ObjSuf)
ACLOCKS       = Aclock.$(SrcSuf) AclockDict.$(SrcSuf)
ACLOCKSO      = Aclock.$(DllSuf)

TETRISO       = Tetris.$(ObjSuf) TetrisDict.$(ObjSuf)
TETRISS       = Tetris.$(SrcSuf) TetrisDict.$(SrcSuf)
TETRISSO      = Tetris.$(DllSuf)

STRESSO       = stress.$(ObjSuf)
STRESSS       = stress.$(SrcSuf)
STRESS        = stress$(ExeSuf)

OBJS          = $(EVENTO) $(MAINEVENTO) $(HWORLDO) $(HSIMPLEO) $(MINEXAMO) \
                $(TSTRINGO) $(TCOLLEXO) $(VVECTORO) $(VMATRIXO) $(VLAZYO) \
                $(GUITESTO) $(HELLOO) $(ACLOCKO) $(TETRISO) $(STRESSO)

PROGRAMS      = $(EVENT) $(HWORLD) $(HSIMPLE) $(MINEXAM) $(TSTRING) \
                $(TCOLLEX) $(VVECTOR) $(VMATRIX) $(VLAZY) $(GUITEST) \
                $(HELLOSO) $(ACLOCKSO) $(TETRISSO) $(STRESS)

all:            $(PROGRAMS)

$(EVENT):       $(EVENTO) $(MAINEVENTO)
+IF,IBMRT.
		/usr/lpp/xlC/bin/makeC++SharedLib $(OutPutOpt) $(EVENTSO) $(LIBS) -p 0 $(EVENTO)
+ELSEIF,ALPHACXX.
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx -expect_unresolved "*" \
 -g0 -O1 -shared /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
 -o libEvent.so Event.o EventDict.o -lcxxstd -lcxx -lexc -lots -lc
+ELSE
		$(LD) $(SOFLAGS) $(LDFLAGS) $(EVENTO) $(OutPutOpt) $(EVENTSO)
+ENDIF.
		$(LD) $(LDFLAGS) $(MAINEVENTO) $(EVENTLIB) $(LIBS) $(OutPutOpt) $(EVENT)
		@echo "$(EVENT) done"

$(HWORLD):      $(HWORLDO)
		$(LD) $(LDFLAGS) $(HWORLDO) $(GLIBS) $(OutPutOpt) $(HWORLD)
		@echo "$(HWORLD) done"

$(HSIMPLE):     $(HSIMPLEO)
		$(LD) $(LDFLAGS) $(HSIMPLEO) $(LIBS) $(OutPutOpt) $(HSIMPLE)
		@echo "$(HSIMPLE) done"

$(MINEXAM):     $(MINEXAMO)
		$(LD) $(LDFLAGS) $(MINEXAMO) $(LIBS) $(OutPutOpt) $(MINEXAM)
		@echo "$(MINEXAM) done"

$(TSTRING):     $(TSTRINGO)
		$(LD) $(LDFLAGS) $(TSTRINGO) $(LIBS) $(OutPutOpt) $(TSTRING)
		@echo "$(TSTRING) done"

$(TCOLLEX):     $(TCOLLEXO)
		$(LD) $(LDFLAGS) $(TCOLLEXO) $(LIBS) $(OutPutOpt) $(TCOLLEX)
		@echo "$(TCOLLEX) done"

$(TCOLLBM):     $(TCOLLBMO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt) $@
		@echo "$@ done"

$(VVECTOR):     $(VVECTORO)
		$(LD) $(LDFLAGS) $(VVECTORO) $(LIBS) $(OutPutOpt) $(VVECTOR)
		@echo "$(VVECTOR) done"

$(VMATRIX):     $(VMATRIXO)
		$(LD) $(LDFLAGS) $(VMATRIXO) $(LIBS) $(OutPutOpt) $(VMATRIX)
		@echo "$(VMATRIX) done"

$(VLAZY):       $(VLAZYO)
		$(LD) $(LDFLAGS) $(VLAZYO) $(LIBS) $(OutPutOpt) $(VLAZY)
		@echo "$(VLAZY) done"

$(GUITEST):     $(GUITESTO)
		$(LD) $(LDFLAGS) $(GUITESTO) $(GLIBS) $(OutPutOpt) $(GUITEST)
		@echo "$(GUITEST) done"

$(STRESS):      $(STRESSO) $(EVENT)
		$(LD) $(LDFLAGS) $(STRESSO) $(EVENTLIB) $(GLIBS) $(OutPutOpt) $(STRESS)
		@echo "$(STRESS) done"

$(HELLOSO):     $(HELLOO)
+IF,IBMRT.
		/usr/lpp/xlC/bin/makeC++SharedLib $(OutPutOpt) $(HELLOSO) $(LIBS) -p 0 $(HELLOO)
+ELSEIF,ALPHACXX.
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx -expect_unresolved "*" \
 -g0 -O1 -shared /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
 -o Hello.so Hello.o HelloDict.o -lcxxstd -lcxx -lexc -lots -lc
+ELSE
		$(LD) $(SOFLAGS) $(LDFLAGS) $(HELLOO) $(OutPutOpt) $(HELLOSO)
+ENDIF.

$(ACLOCKSO):    $(ACLOCKO)
+IF,IBMRT.
		/usr/lpp/xlC/bin/makeC++SharedLib $(OutPutOpt) $(ACLOCKSO) $(LIBS) -p 0 $(ACLOCKO)
+ELSEIF,ALPHACXX.
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx -expect_unresolved "*" \
 -g0 -O1 -shared /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
 -o Aclock.so Aclock.o AclockDict.o -lcxxstd -lcxx -lexc -lots -lc
+ELSE
		$(LD) $(SOFLAGS) $(LDFLAGS) $(ACLOCKO) $(OutPutOpt) $(ACLOCKSO)
+ENDIF.

$(TETRISSO):    $(TETRISO)
+IF,IBMRT.
		/usr/lpp/xlC/bin/makeC++SharedLib $(OutPutOpt) $(TETRISSO) $(LIBS) -p 0 $(TETRISO)
+ELSEIF,ALPHACXX.
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx -expect_unresolved "*" \
 -g0 -O1 -shared /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
 -o Tetris.so Tetris.o TetrisDict.o -lcxxstd -lcxx -lexc -lots -lc
+ELSE
		$(LD) $(SOFLAGS) $(LDFLAGS) $(TETRISO) $(OutPutOpt) $(TETRISSO)
+ENDIF.

clean:
		@rm -f $(OBJS) *Dict.* core

.SUFFIXES: .$(SrcSuf)

###

Event.$(ObjSuf): Event.h
MainEvent.$(ObjSuf): Event.h

EventDict.$(SrcSuf): Event.h EventLinkDef.h
	@echo "Generating dictionary EventDict..."
	@$(ROOTSYS)/bin/rootcint -f EventDict.$(SrcSuf) -c Event.h EventLinkDef.h

Hello.$(ObjSuf): Hello.h
HelloDict.$(SrcSuf): Hello.h
	@echo "Generating dictionary HelloDict..."
	@$(ROOTSYS)/bin/rootcint -f HelloDict.$(SrcSuf) -c Hello.h

Aclock.$(ObjSuf): Aclock.h
AclockDict.$(SrcSuf): Aclock.h
	@echo "Generating dictionary AclockDict..."
	@$(ROOTSYS)/bin/rootcint -f AclockDict.$(SrcSuf) -c Aclock.h

Tetris.$(ObjSuf): Tetris.h
TetrisDict.$(SrcSuf): Tetris.h
	@echo "Generating dictionary TetrisDict..."
	@$(ROOTSYS)/bin/rootcint -f TetrisDict.$(SrcSuf) -c Tetris.h

.$(SrcSuf).$(ObjSuf):
	$(CXX) $(CXXFLAGS) -c $<
