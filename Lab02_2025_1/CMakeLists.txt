cmake_minimum_required(VERSION 4.0)
project(Lab02_2025_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab02_2025_1 main.cpp
        conductores.cpp
        conductores.h
        infracciones.cpp
        infracciones.h
        faltas.cpp
        faltas.h
        comunes.cpp
        comunes.h)

target_include_directories(Lab02_2025_1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)
target_link_directories(Lab02_2025_1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)
target_link_libraries(Lab02_2025_1 PRIVATE apertura_archivos)