#!/bin/bash
FNAME="$1"
NFNAME=${FNAME/.th/.c}
./assemble.sh
./mycompiler < $1 > $NFNAME
echo "Compilation step performed, check above for results. If you dont see any errors then it succeeded."
exit 0