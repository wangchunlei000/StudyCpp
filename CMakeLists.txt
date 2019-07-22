cmake_minimum_required(VERSION 3.14)
project(Sample)

set(CMAKE_CXX_STANDARD 11)

add_executable(Sample main.cpp Cite.cpp Cite.h Methods.cpp Methods.h Student.cpp Student.h Car.cpp Car.h Teacher.cpp Teacher.h cmake-build-debug/MollocTest.cpp cmake-build-debug/MollocTest.h)