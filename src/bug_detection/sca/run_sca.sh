#!/bin/bash

# Run cppcheck on the specified directory.
# cppcheck ../../

# Run cppcheck on the specified directory and save the report to sca_report.txt.
# cppcheck ../../ &> sca_report.txt

# Suppress certain types of warnings.
# 1. Suppress uninitialized variable warnings.
# cppcheck --suppress=uninitvar ../../
cppcheck --suppress=uninitvar:lib/arithmetics.cpp ../../

# 2. Use a suppression list from a config file.
# cppcheck --suppressions-list=suppressions.txt ../../

# Enable inline suppressions in code.
# cppcheck --inline-suppr ../../

# Enable token list and syntax tree debug output.
# cppcheck --debug-normal ../../
