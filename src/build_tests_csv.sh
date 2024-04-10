#!/bin/bash

bazel build --cxxopt=-std=c++14 lib:tests_csv
