//
// Created by enric on 7/10/2025.
//
#include <cstring>
#include <iostream>
#include "FuncionesAuxiliares.h"
#include <fstream>
using namespace std;
void *leenum(ifstream &arch) {
    int numero;
    arch>>numero;
    if (arch.eof()) return nullptr;
    int *punteroInt=new int;
    *punteroInt=numero;
    void *puntero=punteroInt;
    return puntero;
}
void *leeregistro(ifstream &arch) {
    int numero,dni;
    char codigo[8],c;
    while (true) {
        arch>>numero;
        if (arch.eof()) return nullptr;
        arch>>c>>dni>>c;
        arch.getline(codigo,8,'\n');
        int *punteroInt1=new int;
        int *punteroInt2=new int;
        *punteroInt1=numero;
        *punteroInt2=dni;
        char *cadena=extraerCadena(codigo);
        void **puntero=new void *[3];
        puntero[0]=punteroInt1;
        puntero[1]=punteroInt2;
        puntero[2]=cadena;
        return puntero;
    }
}
char *extraerCadena(char *cadena) {
    char *cadenaNueva=new char[strlen(cadena)+1];
    strcpy(cadenaNueva,cadena);
    return cadenaNueva;
}

void imprimeregistro(ofstream &arch, void *nodo) {
    void **puntero=(void **)nodo;
    arch<<*(int *)puntero[0]<<","<<*(int *)puntero[1]<<","<<(char *)puntero[2]<<endl;
}

bool cmpregistros(void *nodo1, void *nodo2) {
    void **temp1=(void **)nodo1;
    void **temp2=(void **)nodo2;
    return *(int *)temp1[0]>*(int *)temp2[0];
}

void imprimenum(ofstream &arch,void *nodo){
    arch<<*(int *)nodo<<endl;
}
bool cmpnum(void *valor1,void *valor2) {
    return *(int *)valor1>*(int *)valor2;
}