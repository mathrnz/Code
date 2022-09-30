#!/bin/bash

ps --no-header > log 
sort -d log
rm log
