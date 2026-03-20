//
// Created by enric on 4/11/2025.
//
#include "Comunes.h"
#include "Entrada.h"

Entrada::Entrada() {
    picante=false;
}

void Entrada::setPicante(bool picante) {
    this->picante=picante;
}

bool Entrada::getPicante() {
    return this->picante;
}
