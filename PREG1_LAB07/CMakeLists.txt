cmake_minimum_required(VERSION 4.0)
project(PREG1_LAB07)

set(CMAKE_CXX_STANDARD 20)

add_executable(PREG1_LAB07 main.cpp
        BIBLIOTECAS/Producto.cpp
        BIBLIOTECAS/Producto.h
        BIBLIOTECAS/Bebida.cpp
        BIBLIOTECAS/Bebida.h
        BIBLIOTECAS/Entrada.cpp
        BIBLIOTECAS/Entrada.h
        BIBLIOTECAS/PlatoFondo.cpp
        BIBLIOTECAS/PlatoFondo.h
        BIBLIOTECAS/Comanda.cpp
        BIBLIOTECAS/Comanda.h
        BIBLIOTECAS/Restaurante.cpp
        BIBLIOTECAS/Restaurante.h)
