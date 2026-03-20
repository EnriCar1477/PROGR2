//
// Created by enric on 30/09/2025.
//

#ifndef LAB5_2023_2_PILACONENTEROS_H
#define LAB5_2023_2_PILACONENTEROS_H
#include <iostream>
#include <fstream>
using namespace std;
void * calculanumero(void *datos,double &peso);
void imprimenumero(ofstream &arch,void *nodo) ;
void *leenumero(ifstream &arch);
int *referenciaEntero(int valor);
#endif //LAB5_2023_2_PILACONENTEROS_H