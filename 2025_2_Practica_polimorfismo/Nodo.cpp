//
// Created by enric on 15/11/2025.
//

#include "Nodo.h"

Nodo::Nodo() {
    dato=nullptr;
    siguiente=nullptr;
    anterior=nullptr;
}

Nodo::~Nodo() {
    if (dato!=nullptr) delete dato;
    if (siguiente!=nullptr) delete siguiente;
    if (anterior!=nullptr) delete anterior;
}

void Nodo::insertar(char *tipo,Metricas *metrica) {
    dato->insertarMetrica(tipo,metrica);
}

