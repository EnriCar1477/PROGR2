//
// Created by enric on 27/11/2025.
//

#include "Empresa.h"


Empresa::Empresa() {
    nombre=nullptr;
    distrito=nullptr;
}


Empresa::~Empresa() {
    liberarCadena(nombre);
    liberarCadena(distrito);
}

int Empresa::getDNI() {
    return dni;
}

char * Empresa::getNombre() {
    return colecCadena(nombre);
}

char * Empresa::getDistrito() {
    return colecCadena(distrito);
}

void Empresa::setDNI(int dni) {
    this->dni = dni;
}

void Empresa::setNombre(char *nombre) {
    this->nombre=nombre;
}

void Empresa::setDistrito(char *distrito) {
    this->distrito=colecCadena(distrito);
}


