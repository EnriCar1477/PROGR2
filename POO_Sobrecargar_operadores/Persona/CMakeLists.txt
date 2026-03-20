cmake_minimum_required(VERSION 4.0)
project(Persona)

set(CMAKE_CXX_STANDARD 20)

add_executable(Persona main.cpp
        CPersona.cpp
        comunes.cpp)
