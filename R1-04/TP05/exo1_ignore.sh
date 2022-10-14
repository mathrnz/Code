#!/bin/bash

uuid=$(ls -l /dev/disk/by-uuid/ | nawk '(NR>1)' | nawk '{print $9}')
name=$(ls -l /dev/disk/by-uuid/ | nawk '(NR>1)' | nawk '{print $11}')


blocks=$(df | nawk '(NR>1)' | nawk '{print $2}')
size=0

cpt=1
currentname=0
for v in $uuid
do
	for i in $blocks
	do
		currentname=$(echo $name | nawk '{print $cpt}')
		currentdf=$(df | nawk '(NR>$cpt)' | head -n1 | nawk '{print $1}')
		if [ $currentname == $currentdf]
		then
			size=$(($size+$i))
		fi
		cpt++
	done
	size=$(($size/1024))
	echo $size

done


av=$(df | nawk '(NR>1)' | nawk '{print $4}')
sizeav=0

for j in $av
do
	sizeav=$(($sizeav+$j))
done
sizeav=$(($sizeav/1024))