#!/bin/bash

bazel build --cxxopt=-std=c++14 lib:arithmetics_test_report

