cmake_minimum_required(VERSION 4.0)
project(2025_1_STL)

set(CMAKE_CXX_STANDARD 20)

add_executable(2025_1_STL main.cpp
        Infraccion.cpp
        Infraccion.h
        Comunes.h
        Comunes.cpp
        vehiculos.cpp
        Vehiculos.h
        Multa.cpp
        Multa.h
        Empresa.cpp
        Empresa.h
        MinisterioDeTransporte.cpp
        MinisterioDeTransporte.h)
