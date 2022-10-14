#!/bin/bash
rep=$1
files=$(ls $rep/)

du=0
ll=0
for i in $files
do
    du=$(du $i | nawk '{print $1}')
    echo "Taille sur le disque de $i : $du ko, soit $(($du*1024)) oct"
    ll=$(ls -l | grep $i | nawk '{print $5}')
    echo "Taille de $i : $ll oct"
    echo "Soit une différence de : $(($(($du*1024))-$ll)) oct"
    echo
done