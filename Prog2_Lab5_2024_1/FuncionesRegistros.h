//
// Created by enric on 23/09/2025.
//

#ifndef PROG2_LAB5_2024_1_FUNCIONESREGISTROS_H
#define PROG2_LAB5_2024_1_FUNCIONESREGISTROS_H
#include <iostream>
using namespace std;
void* leeregistro(ifstream &arch) ;
int *referenciaEnteros(int variable) ;
char *extraerCadena(char *cadena) ;
void imprimeregistro(ofstream &arch,void *nodo) ;
bool cmpregistro(void *nodo1,void *nodo2);
#endif //PROG2_LAB5_2024_1_FUNCIONESREGISTROS_H