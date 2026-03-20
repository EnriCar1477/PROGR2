//
// Created by alulab14 on 28/11/2025.
//
#include "Comunes.h"

#include <iostream>

char * extraerCadena(const char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}

void liberarEspacio(char *&cadena) {
    if (cadena!=nullptr) delete cadena;
}

void aperturaIfstream(ifstream &arch,const char *nomArch) {
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
