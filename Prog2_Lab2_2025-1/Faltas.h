//
// Created by enric on 9/09/2025.
//

#ifndef PROG2_LAB2_2025_1_FALTAS_H
#define PROG2_LAB2_2025_1_FALTAS_H
#include <iostream>
#include <fstream>
#include "Conductores.h"
#include "Infracciones.h"
using namespace std;
typedef struct {
    Conductores conductores;
    Infracciones infracciones;
    char ***placas;
    int *capacidades;
} Faltas;
void operator +=(Conductores &conductores,ifstream &arch);
void operator +=(Infracciones &infracciones,ifstream &arch);
char *extraerCadena(const char *cadena);
int buscarConductor(Conductores conductores,int dni) ;
void cargar_faltas_de_los_operadores(Faltas &faltas);

#endif //PROG2_LAB2_2025_1_FALTAS_H