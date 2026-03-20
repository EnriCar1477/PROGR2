cmake_minimum_required(VERSION 4.0)
project(Laboratorio09_STL)

set(CMAKE_CXX_STANDARD 20)

add_executable(Laboratorio09_STL main.cpp
        Etiqueta.cpp
        Etiqueta.h
        Comunes.h
        Comunes.cpp
        Categoria.cpp
        Categoria.h
        Comentario.cpp
        Comentario.h
        Streamer.cpp
        Streamer.h
        SistemaDeGestion.cpp
        SistemaDeGestion.h)
