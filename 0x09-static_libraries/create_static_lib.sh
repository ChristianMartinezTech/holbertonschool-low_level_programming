#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.c
ar cr "liball.a" *.o
