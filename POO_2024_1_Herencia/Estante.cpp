//
// Created by enric on 6/11/2025.
//

#include "Estante.h"
Estante::Estante() {
    pesoActual = 0.0;
    pesoSoportado = 0.0;
    codigo=nullptr;
    espacios=nullptr;
    anchura=0;
    altura=0;
}

Estante::~Estante() {
    liberarEspacio(codigo);
    if (espacios!=nullptr) delete espacios;
}
void Estante::setCodigo(char *codigo) {
    this->codigo=extraerCadena(codigo);
}

void Estante::setAnchura(int anchura) {
    this->anchura=anchura;
}

void Estante::setAltura(int altura) {
    this->altura=altura;
}

void Estante::setPesoSoportado(double pesoSoportado) {
    this->pesoSoportado=pesoSoportado;
}

void Estante::setPesoActual(double pesoActual) {
    this->pesoActual=pesoActual;
}

void Estante::setEspacios(int ancho, int altura) {
    int contador=0;
    this->espacios=new Espacio[ancho*altura];
}

char * Estante::getCodigo() {
    return extraerCadena(codigo);
}

int Estante::getAnchura() {
    return anchura;
}
int Estante::getAltura() {
    return altura;
}

double Estante::getPesoSoportado() {
    return pesoSoportado;
}
double Estante::getPesoActual() {
    return pesoActual;
}




