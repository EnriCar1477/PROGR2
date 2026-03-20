//
// Created by Emyr11 on 10/09/2025.
//

#ifndef LAB02_2025_1_FALTAS_H
#define LAB02_2025_1_FALTAS_H
#include "conductores.h"
#include "infracciones.h"
#define MAX_FALTAS 800
#define INCREMENTO 2
#define MAX_LINEA 75
#include <iostream>
using namespace std;
struct Faltas{
    struct Conductores conductores;
    struct Infracciones infracciones;

    char ***placas;
    int *capacidades;
};

void cargar_faltas_de_los_conductores(Faltas &faltas);
void inicializarEstructuraPlacas(Faltas &faltas);
int buscarConductor(int bufferDni,Conductores &conductores);
void incluirPlaca(int idConductor,Faltas &faltas,char *bufferPlaca);
void imprimir_faltas_de_los_conductores(Faltas &faltas);
void imprimirLinea(ofstream &archRep,int cant,char c);

#endif //LAB02_2025_1_FALTAS_H