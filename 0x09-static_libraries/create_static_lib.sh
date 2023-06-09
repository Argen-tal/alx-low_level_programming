#!/bin/bash

# Compile each .c file into a .o file
gcc -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Display success message
echo "Static library liball.a created."

