cmake_minimum_required(VERSION 4.0)
project(BibliotecaEstatica_DV)

set(CMAKE_CXX_STANDARD 20)

add_executable(BibliotecaEstatica_DV main.cpp
        Funciones.cpp
        Funciones.h
        Lectura.cpp
        Lectura.h
        Operaciones.cpp
        Operaciones.h
        LibreriaEstatica/Estructuras.h)
