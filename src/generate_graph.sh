#!/bin/bash

bazel query --noimplicit_deps 'deps(:main)' --output graph > main_simplified_graph.in
dot -Tpng < main_simplified_graph.in > main_simplified_graph.png