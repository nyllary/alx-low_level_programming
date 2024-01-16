#!/bin/bash

# Compile the code into object files
gcc -c -Wall -Werror -fpic *.c

# Link the object files into a shared library
gcc -shared -o liball.so *.o
