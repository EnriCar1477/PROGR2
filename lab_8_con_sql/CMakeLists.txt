cmake_minimum_required(VERSION 4.0)
project(lab_8_con_sql)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab_8_con_sql main.cpp
        Metrica.cpp
        Metrica.h
        Comunes.cpp
        Comunes.h
        MetricaBasica.cpp
        MetricaBasica.h
        MetricaEngagement.cpp
        MetricaEngagement.h
        MetricaCalidad.cpp
        MetricaCalidad.h
        AdministrarMetricas.cpp
        AdministrarMetricas.h)
