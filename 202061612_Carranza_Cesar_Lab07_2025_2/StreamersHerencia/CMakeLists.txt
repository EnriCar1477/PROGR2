cmake_minimum_required(VERSION 4.0)
project(StreamersHerencia)

set(CMAKE_CXX_STANDARD 20)

add_executable(StreamersHerencia main.cpp
        Metrica.cpp
        Metrica.h
        Comunes.h
        Comunes.cpp
        MetricaBasica.cpp
        MetricaBasica.h
        MetricaEngagement.cpp
        MetricaEngagement.h
        MetricaCalidad.cpp
        MetricaCalidad.h
        Streamer.cpp
        Streamer.h
        StreamerGratuito.cpp
        StreamerGratuito.h
        StreamerPago.cpp
        StreamerPago.h
        GestorStreamers.cpp
        GestorStreamers.h)
