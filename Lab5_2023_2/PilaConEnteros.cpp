//
// Created by enric on 30/09/2025.
//
#include <iostream>
#include <fstream>
#include "FlotaGenerica.h"
#include "PilaConEnteros.h"
using namespace std;

void *leenumero(ifstream &arch) {
    int valor;
    arch>>valor;
    if (arch.eof()) return nullptr;
    void *puntero=referenciaEntero(valor);
    return puntero;
}
void imprimenumero(ofstream &arch, void *nodo) {
    void **recorrido=(void **)nodo;
    while (recorrido!=nullptr) {
        arch<<*(int *)recorrido[1]<<endl;
        recorrido=(void **)recorrido[0];
    }
}
int cmpnumero(const void *a,const void *b) {
    void *datosA=*(void **)a;
    void *datosB=*(void **)b;
    void **pesosA=(void **)datosA;
    void **pesosB=(void **)datosB;
    // void **pesosA=(void **)a;
    // void **pesosB=(void **)b;
    if (*(double *)pesosA[1] > *(double *)pesosB[1])
        return 1;
    else if (*(double *)pesosA[1] < *(double *)pesosB[1])
        return -1;
    // void *pesoA = *(void **)a;
    // void *pesoB = *(void **)b;
    //
    // if (*(double *)datosA[1] > *(double *)datosB[1])
    //     return 1;
    // else if (*(double *)datosA[1] < *(double *)datosB[1])
    //     return -1;
}
int *referenciaEntero(int valor) {
    int *puntero=new int;
    *puntero=valor;
    return puntero;
}
void* calculanumero(void *datos,double &peso) {
    void **nodo=new void *[2];
    nodo[0]=nullptr;
    nodo[1]=datos;
    peso=*(int *)datos;
    void *puntero=nodo;
    return puntero;
}