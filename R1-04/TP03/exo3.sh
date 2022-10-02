#!/bin/bash
#Why am I still there ?

while :
do
	read -p "Saisir le nom d'un répertoire> " rep

	if [ $rep = exit ] #Commande de sortie
	then
		break
	fi

	ls $rep &> /dev/null #0 si le répertoire existe $?

	if [ $? != 0 ] #Test existence répertoire
	then
		echo "Le répertoire n'existe pas"
	else
		ls $rep
	fi
done
