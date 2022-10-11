#!/bin/bash

read -p "Combien de lignes voulez-vous écrire dans chaque fichier ?> " n

mkdir Fichiers &>/dev/null #Errors go unnoticed

for i in $@
do
	for ((j=0;$j<$n;j++)) #Asks n times
	do
		read -p "Écrivez dans $1> " input
		echo $input >> $1
	done

	mv $1 Fichiers
	shift
done

#Size counter
compt=$(ls -l Fichiers | nawk '{print $5}') #Only Size

cpt=0
for v in $compt
do
	cpt=$(($cpt+$v))
done
ko=$(($cpt/1024))

echo "Vous avez écrit $ko Ko (soit $cpt octets)"
