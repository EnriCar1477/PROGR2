//
// Created by enric on 23/09/2025.
//
#include <iostream>
#include "BibliotecaGenerica.h"
using namespace std;
void* leenum(ifstream & arch) {
    int entero;
    int *puntero;
    arch>>entero;
    if (arch.eof()) return nullptr;
    puntero=new int;
    *puntero=entero;
    return puntero;
}
void imprimenum(ofstream & arch,void *nodo) {
    int *valor;
    valor=(int *)nodo;
    arch<<*valor<<" ";
}
bool cmpnum(void *nodo1,void *nodo2) {
    int *valor1=(int *)nodo1;
    int *valor2=(int *)nodo2;
    if (*valor1<*valor2) return true;
    else return false;
}