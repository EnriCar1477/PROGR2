//
// Created by enric on 26/08/2025.
//

#ifndef BIBLIOTECAESTATICA_DV_FUNCIONES_H
#define BIBLIOTECAESTATICA_DV_FUNCIONES_H
#include <fstream>
using namespace std;

void cargarPlatos(ifstream  &archPlato,Plato *arregloPlato);
void cargarRepartidores(ifstream  &archRepartidor,Repartidor *arregloRepartidor);
#endif //BIBLIOTECAESTATICA_DV_FUNCIONES_H