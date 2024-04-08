#!/bin/bash

g++ -O1 -g -fno-omit-frame-pointer gdb_example.cpp -o gdb.out

gdb gdb.out