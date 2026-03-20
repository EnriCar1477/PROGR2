//
// Created by enric on 19/11/2025.
//

#include "Novela.h"

Novela::Novela() {
    autor=nullptr;
}

Novela::~Novela() {
    liberarCadena(autor);
}

void Novela::leer(ifstream &arch) {
    Libro::leer(arch);
    char local[100];
    arch.getline(local, 100,'\n');
    autor=colectCadena(local);
}

void Novela::imprimir(ofstream &arch) {
    Libro::imprimir(arch);
    arch<<autor<<endl;
}

void Novela::actualizar() {

}

