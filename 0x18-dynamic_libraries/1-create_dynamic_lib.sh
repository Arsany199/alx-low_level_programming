#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD LIBRARY_PATH=:$LD_LIBRARY_PATH
