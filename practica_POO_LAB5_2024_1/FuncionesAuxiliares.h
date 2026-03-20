//
// Created by enric on 7/10/2025.
//

#ifndef PRACTICA_POO_LAB5_2024_1_FUNCIONESENTERAS_H
#define PRACTICA_POO_LAB5_2024_1_FUNCIONESENTERAS_H
#include <iostream>
#include <fstream>
using namespace std;
void *leenum(ifstream &);
void imprimenum(ofstream &,void *);
bool cmpnum(void *valor1,void *valor2) ;
void *leeregistro(ifstream &);
char *extraerCadena(char *cadena);
void imprimeregistro(ofstream &arch,void *nodo);
bool cmpregistros(void *nodo1,void *nodo2);
#endif //PRACTICA_POO_LAB5_2024_1_FUNCIONESENTERAS_H