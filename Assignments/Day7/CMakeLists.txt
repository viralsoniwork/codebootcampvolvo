cmake_minimum_required(VERSION 3.5.1)
project(myOutputCMake)
include_directories(Libraries)
add_executable(myOutputCMake Assignment1.cpp Libraries/libShape.so)