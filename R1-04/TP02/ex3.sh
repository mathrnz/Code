#!/bin/bash

read -p "Entrez une lettre a> " a
read -p "Entrez une lettre b> " b
read -p "Entrez un répertoire> " rep

ls $PWD/$rep | grep $a
ls $PWD/$rep | grep $b
