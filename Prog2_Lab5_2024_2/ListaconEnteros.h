//
// Created by enric on 23/09/2025.
//

#ifndef PROG2_LAB5_2024_2_LISTACONENTEROS_H
#define PROG2_LAB5_2024_2_LISTACONENTEROS_H
#include <iostream>
using namespace std;
void *leenumeros(ifstream &archivo);
int *referenciaEnteros(int varible) ;
bool compruebanumero(void *a,void *b);
void* leerenumero(ifstream &archivo);
void imprimenumeros(ofstream &archivo,void *nodo);
#endif //PROG2_LAB5_2024_2_LISTACONENTEROS_H