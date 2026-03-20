//
// Created by enric on 23/09/2025.
//
#include <iostream>
#include <fstream>
#include "ListaconEnteros.h"
using namespace std;
void *leenumeros(ifstream &archivo) {
    int valor;
    archivo>>valor;
    if (archivo.eof()) return nullptr;
    void *puntero=referenciaEnteros(valor);
    return puntero;
}
int *referenciaEnteros(int varible) {
    int *ptrInt=new int;
    *ptrInt=varible;
    return ptrInt;
}
bool compruebanumero(void *a,void *b) {
    void **duplaA=(void **)a;
    void **duplaB=(void **)b;
    if (*(int *)duplaA[0]==*(int *)duplaB[0]) return true;
    else return false;
}
void* leerenumero(ifstream &archivo) {
    int valor1,valor2;
    archivo>>valor1;
    if (archivo.eof()) return nullptr;
    archivo>>valor2;
    void **datos=new void*[2]{};
    datos[0]=referenciaEnteros(valor1);
    datos[1]=referenciaEnteros(valor2);
    void *puntero=datos;
    return puntero;
}
void imprimenumeros(ofstream &archivo,void *nodo) {
    void **dupla=(void **)nodo;
    archivo<<*(int *)dupla[0]<<" ";
    void **arreglo=(void **)dupla[1];
    for (int i=0;i<20;i++) {
        if (arreglo[i]==nullptr) break;
        archivo<<*(int *)arreglo[i]<<" ";
    }
    archivo<<endl;
}