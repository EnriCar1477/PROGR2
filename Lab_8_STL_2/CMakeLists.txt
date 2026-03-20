cmake_minimum_required(VERSION 4.0)
project(Lab_8_STL_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab_8_STL_2 main.cpp
        Streamer.cpp
        Streamer.h
        Comunes.h
        Comunes.cpp
        Metrica.cpp
        Metrica.h
        MetricaBasica.cpp
        MetricaBasica.h
        MetricaEngagement.cpp
        MetricaEngagement.h
        MetricaCalidad.cpp
        MetricaCalidad.h
        StreamerGratuito.cpp
        StreamerGratuito.h
        StreamerPagado.cpp
        StreamerPagado.h
        AdministradorStreamers.cpp
        AdministradorStreamers.h)
