#!/bin/bash
#Compteur Koctets

ls -lrt | nawk '{print $5}' > compt.txt #Affiche uniquement la taille du fichier

cpt=0

for v in $(cat compt.txt) #Stocke chaque ligne de compt.txt dans v
do
	cpt=$(($cpt+$v)) #Ajoute au compteur
done

echo $cpt
