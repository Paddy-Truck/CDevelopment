cmake_minimum_required(VERSION 3.8)
project(CDevelopment)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        sorts/selectionSort.cpp
        sorts/selectionSort.h
        sorts/bubbleSort.cpp
        sorts/bubbleSort.h
        sorts/insertionSort.cpp
        sorts/insertionSort.h
        main.cpp)

add_executable(CDevelopment ${SOURCE_FILES} main.cpp)