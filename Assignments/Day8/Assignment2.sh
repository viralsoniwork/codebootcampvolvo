#!/usr/bin/env bash

git clone https://github.com/viralsoniwork/codebootcampvolvo.git
cd codebootcampvolvo/Assignments/Day7/Libraries
make
cd ..
export LD_LIBRARY_PATH=.
make
./myOutput