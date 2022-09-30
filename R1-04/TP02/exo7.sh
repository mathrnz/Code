#!/bin/bash

rep=$1
nom=$2

cd ~/$rep
ls | grep $nom | wc -l
echo "trouvés"