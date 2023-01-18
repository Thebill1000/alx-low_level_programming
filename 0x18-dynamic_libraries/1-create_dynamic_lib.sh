#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD _LIBRARY_PATH=.:$LD_LIBRARY_PATH
