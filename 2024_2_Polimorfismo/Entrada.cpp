//
// Created by enric on 12/11/2025.
//

#include "Entrada.h"

Entrada::Entrada() {
    picante = false;
}

void Entrada::leer(ifstream &arch) {
    Producto::leer(arch);
    if (arch.get()=='s') {
        this->picante=false;
    }else this->picante=true;
    while (arch.get()!='\n');
}

void Entrada::copiar(const Entrada &orig) {
    Producto::copiar(orig);
    this->picante=orig.picante;
}

bool Entrada::confirmar(int protein) {
    return false;
}

void Entrada::imprimir(ofstream &arch) {
    Producto::imprimir(arch);
    if (picante) {
        arch<<"Picante"<<endl;
    }else arch<<"Sin picante"<<endl;
}
