#!/bin/bash

mot=$1
rep1=$2
rep2=$3
fichier=$4

ls $PWD/$rep1 | grep $mot > $fichier
ls $PWD/$rep2 | grep $mot >> $fichier

echo "écrit dans $fichier"
