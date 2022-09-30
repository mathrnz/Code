#!/bin/sh
#Highway to Hell

#Numeric values (time)
read -p "Temps 1 ?> " tps1
read -p "Temps 2 ?> " tps2
read -p "Temps 3 ?> " tps3

if [ $tps1 -le 4 ] ||  [ $tps2 -le 4 ] || [ $tps3 -le 4 ] 
then
	echo "Erreur : un des temps saisis est inférieur à 5"
	exit 1
fi

#Message input
read -p "Message 1 ?> " msg1
read -p "Message 2 ?> " msg2
read -p "Message 3 ?> " msg3

#Jobs
./exo6process.sh $tps1 $msg1&
./exo6process.sh $tps2 $msg2&
./exo6process.sh $tps3 $msg3&

exit 0
