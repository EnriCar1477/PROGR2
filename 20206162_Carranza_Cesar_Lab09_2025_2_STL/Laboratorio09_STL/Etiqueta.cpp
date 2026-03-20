//
// Created by alulab14 on 28/11/2025.
//

#include "Etiqueta.h"

Etiqueta::Etiqueta() {

}

Etiqueta::~Etiqueta() {

}

Etiqueta::Etiqueta(const Etiqueta &orig) {
    *this=orig;
}

string  Etiqueta::getCodigo() {
    return codigo;
}
string  Etiqueta::getNombre() {
    return nombre;
}

void Etiqueta::operator=(const Etiqueta &orig) {
    this->codigo=orig.codigo;
    this->nombre=orig.nombre;
}

void Etiqueta::operator>>(ifstream &arch) {
    char codigoBuffer[MAX], nombreBuffer[MAX];
    arch.getline(codigoBuffer, MAX,',');
    if (arch.eof()) return;
    arch.getline(nombreBuffer, MAX,'\n');
}

void operator<<(ostream &os, const Etiqueta &orig) {

}


