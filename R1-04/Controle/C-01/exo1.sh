#!/bin/bash

list=$1
rep=$2
maxsize=$3

currentfile=0;
currentsize=0;

while read -r line
do
	currentfile=$(echo $line | nawk '{print $1}') #Get the file name
	currentsize=$(echo $line | nawk '{print $2}') #Get the file size
	
	if [[ $currentsize -gt $maxsize ]]
	then
		ls $rep | grep $currentfile
	fi

done < $list
