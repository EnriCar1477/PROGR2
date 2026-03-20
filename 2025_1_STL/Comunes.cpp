//
// Created by enric on 27/11/2025.
//
#include "Comunes.h"

char * colecCadena(const char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}

void liberarCadena(char *&cadena) {
    if (cadena!=nullptr) delete cadena;
}

void apertIfstream(ifstream &fin, const char *nomArch) {
    fin.open(nomArch,ios::in);
    if (!fin.is_open()) {
        cout<<"Error al abrir el achivo "<<nomArch<<endl;
        exit(1);
    }
}

void apertOfstream(ofstream &fout, const char *nomArch) {
    fout.open(nomArch,ios::out);
    if (!fout.is_open()) {
        cout<<"Error al abrir el achivo "<<nomArch<<endl;
        exit(1);
    }
}
