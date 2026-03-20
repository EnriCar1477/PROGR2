/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:13 AM
 */

#include <cstdlib>

//OSCAR SEBASTIAN CESPEDES VASQUEZ 20221473

#include "Restaurante.h"
using namespace std;
int main(int argc, char** argv) {
    Restaurante res;
    res.carga();
    res.elimina(3);
    res.atiende();
    return 0;
}

