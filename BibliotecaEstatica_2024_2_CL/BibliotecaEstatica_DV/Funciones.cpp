//
// Created by enric on 26/08/2025.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include "LibreriaEstatica/Estructuras.h"
#include "Lectura.h"
using namespace std;

void cargarPlatos(ifstream &archPlato,Plato *arregloPlato) {
    int contador=0;
    while (not archPlato.eof()) {
        archPlato >> arregloPlato[contador];
        contador++;
    }
    strcpy(arregloPlato[contador].codigo,"FIN");
}
void cargarRepartidores(ifstream  &archRepartidor,Repartidor *arregloRepartidor) {
    int contador=0;
    while (not archRepartidor.eof()) {
        archRepartidor >> arregloRepartidor[contador];
        contador++;
    }
    strcpy(arregloRepartidor[contador].codigo,"FIN");
}