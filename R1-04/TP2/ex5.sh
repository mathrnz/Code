#!/bin/bash

fichier1=$1
fichier2=$2

cat $fichier1 > merge
cat $fichier2 >> merge
sort -d merge > ttmp
cat ttmp > merge
rm ttmp
head -n 1 merge
