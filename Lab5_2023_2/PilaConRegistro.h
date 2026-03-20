//
// Created by enric on 30/09/2025.
//

#ifndef LAB5_2023_2_PILACONREGISTRO_H
#define LAB5_2023_2_PILACONREGISTRO_H
#include <iostream>
#include <fstream>
using namespace std;
void *leeregistros(ifstream &arch);
char *extraerCadena(const char *cadena) ;
void *calculaRegistro(void *datos,double &peso);
void imprimeregistro(ofstream &arch,void *nodo) ;
void imprimeregistro(ofstream &arch,void *nodo);
int cmpregistro(const void *a,const void *b);
#endif //LAB5_2023_2_PILACONREGISTRO_H