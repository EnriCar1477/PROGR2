//
// Created by enric on 11/11/2025.
//

#include "Nodo.h"

Nodo::Nodo() {
    dron=nullptr;
    izq=nullptr;
    der=nullptr;
}

Nodo::~Nodo() {
    if (dron!=nullptr) delete dron;
    if (izq!=nullptr) delete izq;
    if (der!=nullptr) delete der;
}

void Nodo::imprimir(ofstream &arch) {
    dron->imprimir(arch);
}

