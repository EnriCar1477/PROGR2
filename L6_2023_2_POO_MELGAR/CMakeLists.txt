cmake_minimum_required(VERSION 4.0)
project(L6_2023_2_POO_MELGAR)

set(CMAKE_CXX_STANDARD 20)

add_executable(L6_2023_2_POO_MELGAR main.cpp
        Pedido.cpp
        Producto.cpp
        ProductoEntregado.cpp
        Comunes.cpp
        Cliente.cpp
        AperturaDeArchivos.cpp
        Almacen.cpp)
