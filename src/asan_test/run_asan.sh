#!/bin/bash

g++ -O1 -fno-omit-frame-pointer -fsanitize=address example7.cpp -o test.out