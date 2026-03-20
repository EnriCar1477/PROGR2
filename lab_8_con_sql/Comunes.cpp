//
// Created by enric on 25/11/2025.
//
#include "Comunes.h"

#include "Metrica.h"

char *colecCadena(char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}

void liberarCadena(char *&cadena) {
    if (cadena!=nullptr) delete cadena;
}

bool compara(Metrica *a,Metrica *b) {
    int pa = a->getTipo();
    int pb = b->getId();
    if (pa != pb) return pa < pb;                    // por tipo
    // segundo criterio: descripción ascendente (trim y case-insensitive si quieres)
    std::string da = a->getDescripcion();
    std::string db =b->getDescripcion();
    // opcional: transformar a minúsculas y quitar espacios
    return da < db;
}
