#!/bin/sh

# Finding the system we are running

export DOXYGEN_LDD="ldd"

OS=`uname`

case "$OS" in
   "Linux") export DOXYGEN_LDD="ldd"
   ;;
   "Darwin")export DOXYGEN_LDD="otool -L"
   ;;
esac

# Transform collaboration diagram into list of libraries

#https://stackoverflow.com/questions/2425870/multithreading-in-bash
NTHREADS=8
grep -s "Collaboration diagram for"  ${DOXYGEN_OUTPUT_DIRECTORY}/html/class*.html | sed -e "s/.html:.*$//" | sed -e "s/^.*html\/class//" | xargs -P ${NTHREADS} -n 1 ./makelibs.sh
