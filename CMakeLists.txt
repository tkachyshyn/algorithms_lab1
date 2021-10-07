cmake_minimum_required(VERSION 3.20)
project(lab1 C)

set(CMAKE_C_STANDARD 99)

add_executable(lab1 main.c selection.c selection.h mergesort.c mergesort.h insertion.c insertion.h shellsort.c shellsort.h arrays.c arrays.h)
