//
// Created by enric on 12/11/2025.
//
#include "Comunes.h"

char *colectorCadena(char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}

// void liberarEspacio(char *cadena) {
//     if (cadena!=nullptr) delete cadena;
// }
