cmake_minimum_required(VERSION 4.0)
project(2024_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(2024_2 main.cpp
        Biblitoeca/Producto.cpp
        Biblitoeca/Producto.h
        Biblitoeca/Bebida.cpp
        Biblitoeca/Bebida.h
        Biblitoeca/Entrada.cpp
        Biblitoeca/Entrada.h
        Biblitoeca/PlatoFondo.cpp
        Biblitoeca/PlatoFondo.h
        Biblitoeca/DetalleComanda.cpp
        Biblitoeca/DetalleComanda.h
        Biblitoeca/Nodo.cpp
        Biblitoeca/Nodo.h
        Biblitoeca/Cola.cpp
        Biblitoeca/Cola.h
        Biblitoeca/Restaurante.cpp
        Biblitoeca/Restaurante.h)
