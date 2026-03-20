cmake_minimum_required(VERSION 4.0)
project(Prog2_Lab5_2024_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Prog2_Lab5_2024_1 main.cpp
        FuncionesEnteras.h
        FuncionesEnteras.cpp
        FuncionesRegistros.h
        BibliotecaGenerica.cpp
        FuncionesRegistros.cpp)
target_link_directories(Prog2_Lab5_2024_1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

#para enlazar al libreria
target_link_libraries(Prog2_Lab5_2024_1 PRIVATE apertura_archivos)