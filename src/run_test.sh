#!/bin/bash
bazel test --cxxopt=-std=c++14  --test_output=all //lib:arithmetics_test