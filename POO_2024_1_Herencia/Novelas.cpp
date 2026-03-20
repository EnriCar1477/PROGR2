//
// Created by enric on 6/11/2025.
//
#include "Comunes.h"
#include "Novelas.h"

Novelas::Novelas() {
    tipo=nullptr;
    peso=0.0;
}

Novelas::~Novelas() {
    liberarEspacio(tipo);
}

void Novelas::setTipo(char *tipo) {
    this->tipo = extraerCadena(tipo);
}
void Novelas::setPeso(double peso) {
    this->peso = peso;
}
char *Novelas::getTipo() {
    return extraerCadena(this->tipo);
}
double Novelas::getPeso() {
    return this->peso;
}
