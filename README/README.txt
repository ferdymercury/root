*CMZ :  2.22/01 11/05/99  12.19.35  by  Rene Brun
*CMZ :  1.03/09 16/12/97  17.10.09  by  Rene Brun
*-- Author :
How to install ROOT from the root.cmz file
==========================================
The ROOT system is currently developed and maintained using the CMZ system.
The root.cmz file (see below) contains all the source, installation
procedures, tutorials and test programs.
This file is highly compressed (around 5 Mbytes) and greatly facilitates
the installation and test on new machines for the development team.
Installing root on a machine consists of the following operations:
 -Create a directory called root in your file system.
 -Define an environment variable called ROOTSYS pointing to this directory
 -Define an environment variable called CERNLIB pointing to the cernlib
  libraries (eg /cern/pro/lib). This variable is used for the installation
  of the h2root and g2root utilities only.
 -Get version 1.50 of cmz (see below)
 -Import the file root.cmz to the directory pointed by ROOTSYS

 -run cmz and type the 3 commands, example:
     cmz
     cmz > file root
     cmz > exec setup
     cmz > install
     cmz > exit

The install command generates the source code in the $ROOTSYS/src directory,
invokes the C and C++ compilers, generates the shared libraries, the
executable modules, the tutorials and test directories.
It also generates the conversion program h2root.
More details on the installation procedure can be found in the cmz deck
README in the root.cmz file. In particular, install invokes one macro called
GLOBALS where the compiler/linker/etc options for the various compilers and
machines are defined.
If you do not know cmz,you can look at the README,INSTALL,GLOBALS or
any other macro invoked by INSTALL in the following way:
  cmz
  cmz > file root
  cmz > find README -r  //this will invoke the vi editor by default
  cmz > find GLOBALS -r
  cmz > exit

If you do not have cmz1.50 installed on your machine, you can ftp it
from hpbrun.cern.ch  (anonymous ftp)
cd public/cmz
ls to see all supported platforms.
you can import the gzip file and ungzip it on your site.

You can import in the same way the root.cmz file from the same machine.
cd public/root
get root.cmz

for both cmz and root, set ftp in binary mode.

If you want to extract only the source code (no compilation,etc), you
can do
the following:
 cmz
 cmz > file root
 cmz > exe setup
 cmz > cx *   // this will create root/src/*.c and *.C files
 cmz > exit

If you know cmz and you want to make a few changes in the root.cmz file,
then just recompile what has been modified, you can invoke the make command.
Example:
  cmz > file root
  cmz > exec setup
  cmz > cd ..     this will set the cmz directory to the top
  cmz > make      this will recompile all decks modified since the last make,
                  and will regenerate the corresponding shared libraries.

By default, when executing the install command above, the compiler is invoked
with optimisation On. You can install in debug mode in typing instead
the following command:
    cmz > install -  g

The setup command will automatically set the environment for the default
compiler on the system. In case you want to use a different compiler, eg GCC
you can type the cmz command:
    select GCC
before executing the install command.

If you intend to install new versions of Root at regular intervals, we recommend
to create a file cmzlogon.kumac containing the above instructions for
an easy installation. Examples of cmzlogon.kumac files are given below
for a few systems. Once this file is created, the following cmz session
shows how to generate a complete installation of the Root system.
   cmz
   cmz > install
   cmz > exit

*======> cmzlogon.kumac for Linux
set C++ -lan
*sel thread posix  (uncomment to select the thread option)
*select glibc      (uncomment for Redhat5.0 with glibc) (default is Redhat4.2 gcc)
*select glibc egcs (uncomment for Redhat5.2 with egcs)
select venus pythia
FILE  root
exec setup
set . -s
RETURN

*======> cmzlogon.kumac for hpux
set C++ -lan
*sel HPUX9      (uncomment for hpux9) default is hpux10-20
*sel ACC        (uncomment to install with aCC compiler under hpux10-20)
sel venus pythia
FILE  root
exec setup
RETURN

*======> cmzlogon.kumac for aix4.1
set C++ -lan
*select venus pythia
FILE  root
exec setup
set . -s
RETURN

*======> cmzlogon.kumac for alpha/unix with cxx6
set C++ -lan
FILE root
select venus pythia
*sel EGCS     (uncomment to install with egcs) default is cxx6
exec setup
RETURN

*======> cmzlogon.kumac for sgi
set C++ -lan
*select EGCS   (uncomment for egcs) default is native CC
*select KCC
*select SGI64  to install under SGI6.4
select venus pythia
FILE root
EXEC setup
RETURN

*======> cmzlogon.kumac for Solaris
set C++ -lan
select venus pythia
FILE  root
exec setup
set . -s
RETURN

*======> cmzlogon.kumac for Windows/NT/95
SET cmexec$pid.bat -XACL
set C++ -lan
*note that the selection of RootIcon implies having the file RootIcon.obj
*installed in $ROOTSYS\Icons\RootIcon.obj
*this file is at ftp://root.cern.ch/root/RootIcon.obj
sel RootIcon GL
sel venus pythia
FILE  root
exec setup - nolog
set . -s
sync -off
RETURN





Now you are ready to create the root environment
----------------------------------------------

Install first some utilities and test macros:

   cd ~/root
   cmz       This starts cmz on the root.cmz file
   root > install           !generates everything in DEBUG mode
   root > exit

   Instead of the cmz command "install" above, you can type "install - O"
   to install root with optimisation.

You are now ready to run the test examples in the tutorials directory.
   cd tutorials

Run the interactive module by typing:

   ../bin/root       you get the prompt
   root >

You can now try the following commands

   root > .x hsimple.C
   root > .x hsum.C
   root > .x benchmarks.C
   root > ?   (this shows the list of all dynamic objects)
   root > .ls  (list the current directory
   root > .x demos.C  shows a toolbar menu from which you can execute

Note that at any time you can click on the graphics window
and operate on the objects

   root > .q       to exit from root

Running the test programs
=========================
cd to $ROOTSYS/test
gmake on Unix
nmake on NT
stress 30

Remarks on the C++ interpreter.
-------------------------------

Type .h  for help and a short overview of the command syntax


Adding your own classes
=======================

When you add a new class definition and its implementation, we recommend
that you use a style consistent with the ROOT style. See for example
~/root/src/Line.h. The last statement in the class definition is:

   ClassDef(ClassName,ClassVersionID)  //The class title

where ClassDef is a macro defined in include RConfig.h.
This include is referenced by all ROOT includes. So, if you include a ROOT
include, you automatically get it.
The ClassDef macro will be used by the ROOT compiler "rootcint" to generate
the Object dictionary.
Similarly, in your implementation file (see for example ~/root/src/line.C)
you must add the statement:

   ClassImp(Class_name)

Note that you MUST provide a default constructor for your classes, i.e.
a constructor with zero parameters or with one or more parameters all
with default values.

To generate the dictionary (C++ file) for your own classes, look at the decks
cint_h or cint_g or dict_base in the root.cmz file (find cint_g -e)
In the procedure, do not forget to insert the necessary include files
in the small file preceeding the generated code.


You have already set the environment and installed the ROOT system
==================================================================

Now you want to install a new version without recompiling the full system.
For example, you copy a new version of root.cmz:

   cd ~/root
   cmz
   root > make
   root > exit -s
