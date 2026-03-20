cmake_minimum_required(VERSION 4.0)
project(2025_2_Practica_polimorfismo)

set(CMAKE_CXX_STANDARD 20)

add_executable(2025_2_Practica_polimorfismo main.cpp
        Metricas.cpp
        Metricas.h
        Comunes.cpp
        Comunes.h
        Metrica_Basica.cpp
        Metrica_Basica.h
        MetricaEngagement.cpp
        MetricaEngagement.h
        MetricaCalidad.cpp
        MetricaCalidad.h
        Streamer.cpp
        Streamer.h
        GestorStreamer.cpp
        GestorStreamer.h
        Nodo.cpp
        Nodo.h
        ListaDoblementeEnlazada.cpp
        ListaDoblementeEnlazada.h)
