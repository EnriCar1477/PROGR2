//
// Created by enric on 4/11/2025.
//
#include <iostream>
#include "Comunes.h"

#include <cstring>
#include <fstream>
using namespace std;
char *extraeCadena(char *cadena) {
    if (cadena!=nullptr) {
        char *nombre=new char[strlen(cadena)+1];
        strcpy(nombre,cadena);
        return nombre;
    }
    return nullptr;

}

void liberar(char *heap) {
    if (heap!=nullptr) delete[] heap;
}

void aperturaIfstream(ifstream &arch, const char *nomArch) {
    arch.open(nomArch,ios::in);
    if (!arch.is_open()) {
        cout<<"Error al abrir el archivo "<<nomArch<<endl;
        exit(1);
    }
}

void aperturaOfstream(ofstream &arch, const char *nomArch) {
    arch.open(nomArch,ios::out);
    if (!arch.is_open()) {
        cout<<"Error al abrir el archivo "<<nomArch<<endl;
        exit(1);
    }
}
