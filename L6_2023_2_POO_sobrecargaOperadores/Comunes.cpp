//
// Created by enric on 27/10/2025.
//
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

char * extraerCadena(char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}
void abrirArchivoIfstream(ifstream &arch,const char *nomArch) {
    arch.open(nomArch, ios::in);
    if (not arch.is_open()) {
        cout << "ERROR: No se pudo abrir el archivo " << nomArch<<endl;
        exit(1);
    }

}
void abrirArchivoOfstream(ofstream &arch,char *nomArch) {
    arch.open(nomArch, ios::out);
    if (not arch.is_open()) {
        cout << "ERROR: No se pudo abrir el archivo " << nomArch<<endl;
        exit(1);
    }
}