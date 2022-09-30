#!/bin/bash
#liste fichiers, nb arg indéterminé

rep=$1 #Répertoire en premier argument

cd $rep	

while [ $# -gt 1 ]
do
	ls | grep $2
	shift
done
