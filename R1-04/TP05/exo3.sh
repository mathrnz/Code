#!/bin/bash
name=$1
n=$(last | grep $name | wc -l)
echo "$name c'est connecté $n fois"