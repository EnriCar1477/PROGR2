//
// Created by enric on 3/09/2025.
//

#ifndef DEV_OVERLOAD_H
#define DEV_OVERLOAD_H
#include <iostream>
#include <fstream>
#include "Estructuras.h"
using namespace std;
bool  operator  >>(ifstream &arch,Libro &libro);
bool  operator >>(ifstream &arch,Cliente &cliente);
bool operator >>(LibroSolicitado &pedidos,Libro *arregloLibro);
#endif //DEV_OVERLOAD_H