//
// Created by enric on 19/11/2025.
//
#include "Comunes.h"

char * colectCadena(char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}

void liberarCadena(char *&cadena) {
    if (cadena!=nullptr) delete cadena;
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
