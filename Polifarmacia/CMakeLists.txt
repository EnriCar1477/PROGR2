cmake_minimum_required(VERSION 4.0)
project(Polifarmacia)

set(CMAKE_CXX_STANDARD 20)

add_executable(Polifarmacia main.cpp
        medicamento.h
        conreceta.cpp
        medicamento.cpp
        sinreceta.h
        oferta.cpp
        oferta.h
        farmacia.cpp
        farmacia.h
        sinreceta.cpp)
