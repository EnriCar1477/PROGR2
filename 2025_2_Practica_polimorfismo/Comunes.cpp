//
// Created by enric on 15/11/2025.
//
#include "Comunes.h"

char * colectCadena(char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}

void liberarCadena(char *cadena) {
    if (cadena!=nullptr) delete cadena;
}
