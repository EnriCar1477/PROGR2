cmake_minimum_required(VERSION 4.0)
project(Punto)

set(CMAKE_CXX_STANDARD 20)

add_executable(Punto main.cpp
        CPoligono.cpp
        CPunto2D.cpp)
