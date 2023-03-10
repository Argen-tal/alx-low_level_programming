#!/bin/bash

SRC_FILES=$(ls *.c)
for FILE in $SRC_FILES
do
  gcc -c $FILE
done
ar rcs liball.a *.o
rm *.o

