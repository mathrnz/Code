#!/bin/bash
#Permissions

cd $1 && ls | head -$2 | xargs stat --printf "%A \n"
