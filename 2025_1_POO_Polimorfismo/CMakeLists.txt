cmake_minimum_required(VERSION 4.0)
project(2025_1_POO_Polimorfismo)

set(CMAKE_CXX_STANDARD 20)

add_executable(2025_1_POO_Polimorfismo main.cpp
        Dron.cpp
        Dron.h
        Comunes.cpp
        Comunes.h
        DroneSemaforo.cpp
        DroneSemaforo.h
        DroneVelocidad.cpp
        DroneVelocidad.h
        DroneEstacionamiento.cpp
        DroneEstacionamiento.h
        Nodo.cpp
        Nodo.h
        Arbol.cpp
        Arbol.h
        Central.cpp
        Central.h)
