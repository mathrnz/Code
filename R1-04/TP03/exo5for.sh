#!/bin/bash
#liste fichiers, nb arg indéterminé

rep=$1 #Répertoire en premier argument

cd $rep	
arg=$@

for i in $arg
do
	ls | grep $1
	shift
done
