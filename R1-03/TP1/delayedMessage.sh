#!/bin/bash
#Print stuff but delayed

#Delays
read -p "Entrez trois temps en seconde séparés par un espace >" a b c

#Messages
read -p "Entrez votre premier message > " m1
read -p "Entrez votre seconde message > " m2
read -p "Entrez votre troisième message > " m3

#Print
sleep $a
echo $m1
echo "Message après $a secondes"

sleep $b
echo $m2
echo "Message après $b secondes"

sleep $c
echo $m3
echo "Message après $c secondes"
