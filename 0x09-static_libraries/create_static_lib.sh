#!/bin/bash

# Get a list of all .c files in the current directory
SRC_FILES=$(ls *.c)

# Compile all .c files into .o files
for FILE in $SRC_FILES
do
  gcc -c $FILE
done

# Create the static library from the .o files
ar rcs liball.a *.o

# Clean up the .o files
rm *.o

