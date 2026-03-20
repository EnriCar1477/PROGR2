//
// Created by enric on 19/11/2025.
//

#include "Revista.h"

Revista::Revista() {
    vigencia = 1;
}

void Revista::leer(ifstream &arch) {
    Libro::leer(arch);
    char c;
    arch>>ISSN>>c>>anho>>c>>numero;
    arch.get();
}

void Revista::imprimir(ofstream &arch) {
    Libro::imprimir(arch);
    arch<<ISSN<<" "<<anho<<" "<<numero<<endl;
}

void Revista::actualizar() {
    if (anho<=2020) vigencia=0;
}
