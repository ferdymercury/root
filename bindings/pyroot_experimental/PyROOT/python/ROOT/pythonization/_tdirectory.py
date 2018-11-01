# Author: Danilo Piparo, Stefan Wunsch CERN  08/2018

################################################################################
# Copyright (C) 1995-2018, Rene Brun and Fons Rademakers.                      #
# All rights reserved.                                                         #
#                                                                              #
# For the licensing terms see $ROOTSYS/LICENSE.                                #
# For the list of contributors see $ROOTSYS/README/CREDITS.                    #
################################################################################

from libROOTPython import AddDirectoryAttrSyntaxPyz, AddDirectoryWritePyz
from ROOT import pythonization
import cppyy

@pythonization(lazy = False)
def pythonize_tdirectory():
    klass = cppyy.gbl.TDirectory
    AddDirectoryAttrSyntaxPyz(klass)
    AddDirectoryWritePyz(klass)
    return True
