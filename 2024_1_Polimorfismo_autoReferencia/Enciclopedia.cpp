//
// Created by enric on 19/11/2025.
//

#include "Enciclopedia.h"

Enciclopedia::Enciclopedia() {
    vigencia=1;
}

void Enciclopedia::leer(ifstream &arch) {
    Libro::leer(arch);
    arch>>sku;
    arch.get();
    arch>>anho;
    arch.get();
}

void Enciclopedia::imprimir(ofstream &arch) {
    Libro::imprimir(arch);
    arch<<sku<<" "<<anho<<endl;
}

void Enciclopedia::actualizar() {
    if (anho<=2020) vigencia=0;
}
