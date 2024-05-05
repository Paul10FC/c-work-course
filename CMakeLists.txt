cmake_minimum_required(VERSION 3.28)
project(work_course C)

set(CMAKE_C_STANDARD 11)

add_executable(work_course main.c
        multiplicationFunction.h
        mathOperations.c)
