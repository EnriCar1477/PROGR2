//
// Created by enric on 30/10/2025.
//
#include <iostream>
#include "Comunes.h"

#include <cstring>
#include <fstream>
using namespace std;

char * extraerCadena(char *cadena){
    char *cadenaNueva=new char[strlen(cadena)+1];
    strcpy(cadenaNueva,cadena);
    return cadenaNueva;
}

void aperturaIfstream(ifstream &arch, const char *nomArch) {
    arch.open(nomArch,ios::in);
    if(!arch.is_open()) {
        cout<<"Error al abrir el archivo "<<nomArch<<endl;
        exit(1);
    }
}

void aperturaOfstream(ofstream &arch, const char *nomArch) {
    arch.open(nomArch,ios::out);
    if(!arch.is_open()) {
        cout<<"Error al abrir el archivo "<<nomArch<<endl;
        exit(1);
    }
}
