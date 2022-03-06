#!/bin/bash

HTMLPATH=$DOXYGEN_OUTPUT_DIRECTORY/html
pid=$BASHPID
# Find the libraries for the class $1, use process id $BASHPID
root -l -b -q "libs.C+(\"$1\",$pid)"

# No dot file, the class was not found. Remove the collaboration graph
if [[ ! -f libslist$pid.dot ]] ; then
   sed -i'.back' -e 's/^Collaboration diagram for.*$/<\/div>/g'  $HTMLPATH/class$1.html
   sed -i'.back' '/__coll__graph.svg/I,+2 d'  $HTMLPATH/class$1.html
   sed -i'.back' -e 's/<hr\/>The documentation for/<\/div><hr\/>The documentation for/g'  $HTMLPATH/class$1.html
   rm $HTMLPATH/class$1.html.back
   exit
fi

sed -i'.back' -e 's/Collaboration diagram for /Libraries for /g'  $HTMLPATH/class$1.html
rm $HTMLPATH/class$1.html.back

# Picture name containing the "coll graph"
PICNAME=$HTMLPATH/"class"$1"__coll__graph.svg"

sed -i'.back' -e "s/\.so.*$/\";/" libslist$pid.dot
rm libslist$pid.dot.back

# Generate the dot file describing the graph for libraries
echo "digraph G {" > libraries$pid.dot
echo "   rankdir=LR;" >>  libraries$pid.dot
echo "   node [shape=box, fontname=Arial];" >>  libraries$pid.dot
cat mainlib$pid.dot >> libraries$pid.dot;
cat libslist$pid.dot | grep -v "\.dylib" \
                 | grep lib[A-Z] | sed -e "s/\(.*\)\(lib.*;\)$/   mainlib->\"\2/" \
                 >> libraries$pid.dot
echo "   mainlib [shape=box, fillcolor=\"#ABACBA\", style=filled];" >>  libraries$pid.dot
echo "}" >> libraries$pid.dot

# Generate the SVG image of the graph
dot -Tsvg libraries$pid.dot -o $PICNAME

# Make sure the picture size in the html file the same as the svg
PICSIZE=`grep "svg width" $PICNAME | sed -e "s/<svg //"`
sed -i'.back' -e "s/\(^.*src\)\(.*__coll__graph.svg\"\)\( width.*\">\)\(.*$\)/<div class=\"center\"><img src\2 $PICSIZE><\/div>/"  $HTMLPATH/class$1.html
rm $HTMLPATH/class$1.html.back
