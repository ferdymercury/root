*CMZ :  1.03/09 16/12/97  17.10.09  by  Rene Brun
*-- Author :
How to install ROOT from the root.cmz file
==========================================

 - Make sure you have cmz version 1.48 or higher.
   If not copy executable module via anonymous ftp from hpbrun.cern.ch.
   Unpack and install the module in your ~/bin directory.
   do not forget chmod +x cmz
 - Go to your home directory (cd).
 - mkdir root
 - cd root
 - mkdir lib
 - Define an environment variable called ROOTSYS pointing to your root directory
   If you use tcsh or csh modify your .cshrc file adding the statement:
       setenv ROOTSYS ~/root
   If you use ksh modify your .kshrc file adding the statement:
       export ROOTSYS=~/root
 - Create a file ~/root/cmzlogon.kumac containing the following lines
     SET /tmp/cmedt.edt.$pid   -E
     SET /tmp/cmexec.exec.$pid -XACL
     set C++ -lan
     FILE  root
     exec setup
     set . -s
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
