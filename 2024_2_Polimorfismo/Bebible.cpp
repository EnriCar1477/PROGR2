//
// Created by enric on 12/11/2025.
//

#include "Bebible.h"

Bebible::Bebible() {
    tamano=nullptr;
}

Bebible::~Bebible() {
    if (tamano!=nullptr) delete tamano;
    // liberarEspacio(tamano);
}

void Bebible::leer(ifstream &arch) {
    Producto::leer(arch);
    char tamano[20];
    arch.getline(tamano,20,'\n');
    this->tamano=colectorCadena(tamano);
}

void Bebible::copiar(const Bebible &orig) {
    Producto::copiar(orig);
    this->tamano=colectorCadena(orig.tamano);
}

bool Bebible::confirmar(int protein) {
    return false;
}

void Bebible::imprimir(ofstream &arch) {
    Producto::imprimir(arch);
    arch<<tamano<<endl;
}

