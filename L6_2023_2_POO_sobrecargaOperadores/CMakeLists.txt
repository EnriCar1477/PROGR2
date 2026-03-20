cmake_minimum_required(VERSION 4.0)
project(L6_2023_2_POO_sobrecargaOperadores)

set(CMAKE_CXX_STANDARD 20)

add_executable(L6_2023_2_POO_sobrecargaOperadores main.cpp
        ProductoEntregado.cpp
        ProductoEntregado.h
        Cliente.cpp
        Cliente.h
        Producto.cpp
        Producto.h
        Pedidos.cpp
        Pedidos.h
        Almacen.cpp
        Almacen.h
        Comunes.cpp
        Comunes.h
)
