cmake_minimum_required(VERSION 4.0)
project(BibliotecaEstatica_2024_1_CL_Dev)

set(CMAKE_CXX_STANDARD 20)

add_executable(BibliotecaEstatica_2024_1_CL_Dev main.cpp
        LibreriaEstatica/Overload.cpp
        LibreriaEstatica/Overload.h
        LibreriaEstatica/Estructuras.h)

target_include_directories(BibliotecaEstatica_2024_1_CL_Dev PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

target_link_directories(BibliotecaEstatica_2024_1_CL_Dev PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

target_link_libraries(BibliotecaEstatica_2024_1_CL_Dev PRIVATE apertura_archivos)