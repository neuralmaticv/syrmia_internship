#!/bin/bash

g++ -O1 -g -fno-omit-frame-pointer example1.cpp -o gdb.out

gdb gdb.out