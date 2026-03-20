//
// Created by enric on 23/09/2025.
//

#ifndef PROG2_LAB5_2024_2_LISTACONREGISTROS_H
#define PROG2_LAB5_2024_2_LISTACONREGISTROS_H
#include <iostream>
#include  <fstream>
using namespace std;
void *leeregistros(ifstream &archivo);
void* leeordenes(ifstream &archivo);
char *extraerCadena(char *cadena);
bool compruebaregistro(void *a,void *b) ;
void imprimimeregistros(ofstream &archivo,void *nodo);
#endif //PROG2_LAB5_2024_2_LISTACONREGISTROS_H