//
// Created by enric on 4/11/2025.
//

#include "Bebibles.h"

#include "Comunes.h"

Bebibles::Bebibles() {
    tamano=nullptr;
}

Bebibles::~Bebibles() {
    liberar(tamano);
}

void Bebibles::setTamano(char *tamaño) {
    liberar(this->tamano);
    this->tamano=extraeCadena(tamaño);
}

char * Bebibles::getTamano() {
    return extraeCadena(tamano);
}
