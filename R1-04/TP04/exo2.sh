#!/bin/bash

fichier1=$1
read -p "Fichier2> " fichier2
read -p "MotA> " wordA
read -p "MotB> " wordB

cat $fichier1 | tr $wordA $wordB > $fichier2
