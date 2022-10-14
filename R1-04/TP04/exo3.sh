#!/bin/bash

repi=$1
repf=$2

read -p "Mot?> " word
n=$(ls $repi/ | grep $word)

