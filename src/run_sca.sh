#!/bin/bash

# cppcheck .

# cppcheck . &> sca_report.txt

# suppress 1
# cppcheck --suppress=uninitvar .
# cppcheck --suppress=uninitvar:lib/arithmetics.cpp .

# suppress 2
# config file
cppcheck --suppressions-list=suppressions.txt .

# inline suppressions (in code)
# cppcheck --inline-suppr .

# token list and syntax tree
# cppcheck --debug-normal .

