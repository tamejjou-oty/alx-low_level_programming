#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create a static library from the .o files
ar rc liball.a *.o 

# Clean up the .o files
rm *.o
