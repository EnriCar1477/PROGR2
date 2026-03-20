//
// Created by enric on 6/11/2025.
//

#include "Enciclopedia.h"
Enciclopedia::Enciclopedia() {
    peso=0.0;
    volumen=0;
}

void Enciclopedia::setPeso(double peso) {
    this->peso=peso;
}

double Enciclopedia::getPeso() {
    return this->peso;
}

void Enciclopedia::setVolumen(int volumen) {
    this->volumen=volumen;
}

int Enciclopedia::getVolumen() {
    return this->volumen;
}
