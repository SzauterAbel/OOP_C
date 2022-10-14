cmake_minimum_required(VERSION 3.16) 

project(OOP_C)

SET(GCC_COVERAGE_COMPILE_FLAGS "-Wall")
SET(GCC_COVERAGE_LINK_FLAGS    "-lm")

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

add_executable(OOP_C src/Shapes/Main.c src/Shapes/Circle.c src/Shapes/Rectangle.c)
