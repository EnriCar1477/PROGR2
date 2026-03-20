//
// Created by enric on 6/11/2025.
//

#include "Libro.h"

Libro::Libro() {
    nombre=nullptr;
    codigo=nullptr;
    colocado=false;
    alto=0;
    ancho=0;
    peso=0.0;
    colocado=false;
}

Libro::~Libro() {
    liberarEspacio(nombre);
    liberarEspacio(codigo);
}

void Libro::setCodigo(char *codigo) {
    liberarEspacio(this->codigo);
    this->codigo=extraerCadena(codigo);
}

void Libro::setAlto(int alto) {
    this->alto=alto;
}

void Libro::setNombre(char *nombre) {
    liberarEspacio(this->nombre);
    this->nombre=extraerCadena(nombre);
}
void Libro::setAncho(int ancho) {
    this->ancho=ancho;
}
void Libro::setPeso(double peso) {
    this->peso=peso;
}

void Libro::setColocado(bool colocado) {
    this->colocado=colocado;
}
char* Libro::getCodigo() {
    return extraerCadena(this->codigo);
}
char* Libro::getNombre() {
    return extraerCadena(this->nombre);
}

int Libro::getAncho() {
    return ancho;
}
int Libro::getAlto() {
    return alto;
}

bool Libro::getColocado() {
    return this->colocado;
}
double Libro::getPeso() {
    return this->peso;
}


