#!/bin/sh

cat /etc/passwd | grep -v '^#' | awk '{if(NR % 2 == 0) print $1}' | cut -d ":" -f1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ' ' |  sed 's/ /, /g' | sed 's/\(.*\), /\1./'
