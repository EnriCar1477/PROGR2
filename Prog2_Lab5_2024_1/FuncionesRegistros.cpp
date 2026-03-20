//
// Created by enric on 23/09/2025.
//
#include <cstring>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "FuncionesRegistros.h"
using namespace std;
void* leeregistro(ifstream &arch) {
    void **registro=new void *[3];
    int nPedido,DNI;
    char codigo[200];
    arch>>nPedido;
    if (arch.eof()) return nullptr;
    arch.get();
    arch>>DNI;
    arch.get();
    arch.getline(codigo,200,'\n');
    registro[0]=referenciaEnteros(nPedido);
    registro[1]=referenciaEnteros(DNI);
    registro[2]=extraerCadena(codigo);
    void *ptr=registro;
    return ptr;
}
int *referenciaEnteros(int variable) {
    int *puntero=new int;
    *puntero=variable;
    return puntero;
}
char *extraerCadena(char *cadena) {
    char *puntero=new char[strlen(cadena)+1];
    strcpy(puntero,cadena);
    return puntero;
}
void imprimeregistro(ofstream &arch,void *nodo) {
    void **datos=(void **)nodo;
    arch<<setw(2)<<setfill('0')<<*(int *)datos[0]<<setfill(' ')<<setw(14)<<*(int *)datos[1]<<setw(3)<<"  "<<(char *)datos[2]<<endl;
}
bool cmpregistro(void *nodo1,void *nodo2) {
    void **lista1=(void **)nodo1;
    void **lista2=(void **)nodo2;
    if (*(int *)lista1[0]<*(int *)lista2[0]) return true;
    else return false;
}